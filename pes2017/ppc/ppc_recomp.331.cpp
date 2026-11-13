#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83321ED8"))) PPC_WEAK_FUNC(sub_83321ED8);
PPC_FUNC_IMPL(__imp__sub_83321ED8) {
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
	// addi r3,r3,288
	ctx.r3.s64 = ctx.r3.s64 + 288;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8242f5e8
	ctx.lr = 0x83321EFC;
	sub_8242F5E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe228
	ctx.lr = 0x83321F04;
	sub_824FE228(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83321f1c
	if (cr6.eq) goto loc_83321F1C;
	// bl 0x8248b818
	ctx.lr = 0x83321F18;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83321F1C:
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

__attribute__((alias("__imp__sub_83321F34"))) PPC_WEAK_FUNC(sub_83321F34);
PPC_FUNC_IMPL(__imp__sub_83321F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83321F38"))) PPC_WEAK_FUNC(sub_83321F38);
PPC_FUNC_IMPL(__imp__sub_83321F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83321F40;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824fcca8
	ctx.lr = 0x83321F4C;
	sub_824FCCA8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-2832
	ctx.r10.s64 = ctx.r11.s64 + -2832;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r30.u64);
	// bl 0x8241f040
	ctx.lr = 0x83321F6C;
	sub_8241F040(ctx, base);
	// std r30,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r30.u64);
	// addi r29,r31,120
	ctx.r29.s64 = ctx.r31.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241f040
	ctx.lr = 0x83321F80;
	sub_8241F040(ctx, base);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// std r30,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824a6418
	ctx.lr = 0x83321F98;
	sub_824A6418(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r9.u8);
	// bl 0x833201f8
	ctx.lr = 0x83321FA8;
	sub_833201F8(ctx, base);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x83321FB8;
	sub_82572FA0(ctx, base);
	// bl 0x82467738
	ctx.lr = 0x83321FBC;
	sub_82467738(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,112
	ctx.r3.s64 = 112;
	// lwz r5,24(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x83321FD0;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83321fec
	if (cr6.eq) goto loc_83321FEC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825089c0
	ctx.lr = 0x83321FE4;
	sub_825089C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83321ff0
	goto loc_83321FF0;
loc_83321FEC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83321FF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241f040
	ctx.lr = 0x83321FF8;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x83322004;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83322010"))) PPC_WEAK_FUNC(sub_83322010);
PPC_FUNC_IMPL(__imp__sub_83322010) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83322018"))) PPC_WEAK_FUNC(sub_83322018);
PPC_FUNC_IMPL(__imp__sub_83322018) {
	PPC_FUNC_PROLOGUE();
	// b 0x83320048
	sub_83320048(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8332201C"))) PPC_WEAK_FUNC(sub_8332201C);
PPC_FUNC_IMPL(__imp__sub_8332201C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83322020"))) PPC_WEAK_FUNC(sub_83322020);
PPC_FUNC_IMPL(__imp__sub_83322020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83322028;
	__savegprlr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8251b068
	ctx.lr = 0x83322034;
	sub_8251B068(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x83322048;
	sub_8241F040(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83322428
	if (cr6.eq) goto loc_83322428;
	// bl 0x824f0300
	ctx.lr = 0x83322058;
	sub_824F0300(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83322068
	if (!cr6.eq) goto loc_83322068;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83320428
	ctx.lr = 0x83322068;
	sub_83320428(ctx, base);
loc_83322068:
	// addi r27,r31,128
	ctx.r27.s64 = ctx.r31.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833208b0
	ctx.lr = 0x83322074;
	sub_833208B0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r30,296(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// beq cr6,0x8332216c
	if (cr6.eq) goto loc_8332216C;
loc_83322094:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82452080
	ctx.lr = 0x833220A0;
	sub_82452080(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8241f040
	ctx.lr = 0x833220B4;
	sub_8241F040(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8332213c
	if (cr6.eq) goto loc_8332213C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824b39f8
	ctx.lr = 0x833220C8;
	sub_824B39F8(ctx, base);
	// std r29,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r29.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241f040
	ctx.lr = 0x833220D8;
	sub_8241F040(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8332211c
	if (cr6.eq) goto loc_8332211C;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// bl 0x82572fa0
	ctx.lr = 0x833220F4;
	sub_82572FA0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83379d60
	ctx.lr = 0x83322100;
	sub_83379D60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x8332210C;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241f040
	ctx.lr = 0x83322118;
	sub_8241F040(ctx, base);
	// b 0x8332214c
	goto loc_8332214C;
loc_8332211C:
	// bl 0x82451cb8
	ctx.lr = 0x83322120;
	sub_82451CB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83379d60
	ctx.lr = 0x8332212C;
	sub_83379D60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241f040
	ctx.lr = 0x83322138;
	sub_8241F040(ctx, base);
	// b 0x8332214c
	goto loc_8332214C;
loc_8332213C:
	// bl 0x82451cb8
	ctx.lr = 0x83322140;
	sub_82451CB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83379d60
	ctx.lr = 0x8332214C;
	sub_83379D60(ctx, base);
loc_8332214C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// bne cr6,0x83322094
	if (!cr6.eq) goto loc_83322094;
loc_8332216C:
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// std r29,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r29.u64);
	// bl 0x83308fb8
	ctx.lr = 0x83322184;
	sub_83308FB8(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83321088
	ctx.lr = 0x83322194;
	sub_83321088(ctx, base);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r29,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r29.u64);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83308fb8
	ctx.lr = 0x833221AC;
	sub_83308FB8(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833212a0
	ctx.lr = 0x833221BC;
	sub_833212A0(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x833222d4
	if (!cr6.eq) goto loc_833222D4;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83322418
	if (cr6.eq) goto loc_83322418;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r29,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r29.u64);
	// bl 0x824bb1c0
	ctx.lr = 0x833221EC;
	sub_824BB1C0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83320ec0
	ctx.lr = 0x833221F8;
	sub_83320EC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8332241c
	if (cr6.eq) goto loc_8332241C;
	// bl 0x8334cea8
	ctx.lr = 0x8332220C;
	sub_8334CEA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83322418
	if (cr6.eq) goto loc_83322418;
	// std r29,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r29.u64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241f040
	ctx.lr = 0x83322228;
	sub_8241F040(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8334d1d8
	ctx.lr = 0x83322238;
	sub_8334D1D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8251b460
	ctx.lr = 0x83322244;
	sub_8251B460(ctx, base);
	// bl 0x83306a18
	ctx.lr = 0x83322248;
	sub_83306A18(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83322254;
	sub_82573C50(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83321cb8
	ctx.lr = 0x83322264;
	sub_83321CB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8241f040
	ctx.lr = 0x83322278;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8241f040
	ctx.lr = 0x83322284;
	sub_8241F040(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833217f8
	ctx.lr = 0x83322294;
	sub_833217F8(ctx, base);
loc_83322294:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fd338
	ctx.lr = 0x833222A0;
	sub_824FD338(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83322418
	if (cr6.eq) goto loc_83322418;
	// lbz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// beq cr6,0x83322398
	if (cr6.eq) goto loc_83322398;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x833223b0
	if (cr6.eq) goto loc_833223B0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,23,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// b 0x833223ac
	goto loc_833223AC;
loc_833222D4:
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r29,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r29.u64);
	// bl 0x824bb1c0
	ctx.lr = 0x833222EC;
	sub_824BB1C0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83320d08
	ctx.lr = 0x833222F8;
	sub_83320D08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83322418
	if (cr6.eq) goto loc_83322418;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8334d2c0
	ctx.lr = 0x8332230C;
	sub_8334D2C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83322418
	if (cr6.eq) goto loc_83322418;
	// std r29,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r29.u64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241f040
	ctx.lr = 0x83322328;
	sub_8241F040(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8334d1d8
	ctx.lr = 0x83322338;
	sub_8334D1D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8251b460
	ctx.lr = 0x83322344;
	sub_8251B460(ctx, base);
	// bl 0x83306a18
	ctx.lr = 0x83322348;
	sub_83306A18(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83322354;
	sub_82573C50(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x83321cb8
	ctx.lr = 0x83322364;
	sub_83321CB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8241f040
	ctx.lr = 0x83322378;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8241f040
	ctx.lr = 0x83322384;
	sub_8241F040(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833214b8
	ctx.lr = 0x83322394;
	sub_833214B8(ctx, base);
	// b 0x83322294
	goto loc_83322294;
loc_83322398:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x833223b0
	if (cr6.eq) goto loc_833223B0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 512;
loc_833223AC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_833223B0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x833223d4
	if (cr6.eq) goto loc_833223D4;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x833223d8
	if (!cr6.eq) goto loc_833223D8;
loc_833223D4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_833223D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83322410
	if (cr6.eq) goto loc_83322410;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83322404
	if (cr6.eq) goto loc_83322404;
	// li r10,33
	ctx.r10.s64 = 33;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
	// b 0x83322418
	goto loc_83322418;
loc_83322404:
	// li r10,17
	ctx.r10.s64 = 17;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
	// b 0x83322418
	goto loc_83322418;
loc_83322410:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r29,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r29.u16);
loc_83322418:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
loc_8332241C:
	// bl 0x83309358
	ctx.lr = 0x83322420;
	sub_83309358(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83309358
	ctx.lr = 0x83322428;
	sub_83309358(ctx, base);
loc_83322428:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x83322434;
	sub_8241F040(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8332243C"))) PPC_WEAK_FUNC(sub_8332243C);
PPC_FUNC_IMPL(__imp__sub_8332243C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83322440"))) PPC_WEAK_FUNC(sub_83322440);
PPC_FUNC_IMPL(__imp__sub_83322440) {
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
	// bl 0x83307688
	ctx.lr = 0x83322458;
	sub_83307688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83322020
	ctx.lr = 0x83322460;
	sub_83322020(ctx, base);
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

__attribute__((alias("__imp__sub_83322474"))) PPC_WEAK_FUNC(sub_83322474);
PPC_FUNC_IMPL(__imp__sub_83322474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83322478"))) PPC_WEAK_FUNC(sub_83322478);
PPC_FUNC_IMPL(__imp__sub_83322478) {
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
	// bl 0x83307688
	ctx.lr = 0x83322490;
	sub_83307688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83320c30
	ctx.lr = 0x83322498;
	sub_83320C30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83322020
	ctx.lr = 0x833224A0;
	sub_83322020(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x833224bc
	if (cr6.eq) goto loc_833224BC;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 512;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_833224BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251b068
	ctx.lr = 0x833224C4;
	sub_8251B068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x833224dc
	if (cr6.eq) goto loc_833224DC;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// bl 0x833206b0
	ctx.lr = 0x833224DC;
	sub_833206B0(ctx, base);
loc_833224DC:
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

__attribute__((alias("__imp__sub_833224F0"))) PPC_WEAK_FUNC(sub_833224F0);
PPC_FUNC_IMPL(__imp__sub_833224F0) {
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
	// bl 0x83322020
	ctx.lr = 0x83322508;
	sub_83322020(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83307688
	ctx.lr = 0x83322510;
	sub_83307688(ctx, base);
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

__attribute__((alias("__imp__sub_83322524"))) PPC_WEAK_FUNC(sub_83322524);
PPC_FUNC_IMPL(__imp__sub_83322524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83322528"))) PPC_WEAK_FUNC(sub_83322528);
PPC_FUNC_IMPL(__imp__sub_83322528) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8331ffb8
	ctx.lr = 0x83322540;
	sub_8331FFB8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-3228
	ctx.r30.s64 = ctx.r11.s64 + -3228;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,-96
	ctx.r4.s64 = ctx.r30.s64 + -96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x8332255C;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8246be10
	ctx.lr = 0x83322568;
	sub_8246BE10(ctx, base);
	// bl 0x824ffb68
	ctx.lr = 0x8332256C;
	sub_824FFB68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x83322578;
	sub_8246BE18(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x8332258C;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x833225a8
	if (cr6.eq) goto loc_833225A8;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-2900
	ctx.r9.s64 = ctx.r10.s64 + -2900;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x833225ac
	goto loc_833225AC;
loc_833225A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_833225AC:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be48
	ctx.lr = 0x833225BC;
	sub_8246BE48(ctx, base);
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c3a0
	ctx.lr = 0x833225C8;
	sub_8246C3A0(ctx, base);
	// addi r4,r30,-80
	ctx.r4.s64 = ctx.r30.s64 + -80;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x833225D8;
	sub_8241F280(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x833225E0;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83322600
	if (cr6.eq) goto loc_83322600;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x833225F8;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_83322600:
	// addi r5,r30,-72
	ctx.r5.s64 = ctx.r30.s64 + -72;
	// li r6,288
	ctx.r6.s64 = 288;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82478360
	ctx.lr = 0x83322614;
	sub_82478360(ctx, base);
	// addi r5,r30,-56
	ctx.r5.s64 = ctx.r30.s64 + -56;
	// li r6,304
	ctx.r6.s64 = 304;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824788c8
	ctx.lr = 0x83322628;
	sub_824788C8(ctx, base);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7744
	ctx.r4.s64 = ctx.r11.s64 + 7744;
	// bl 0x8246be80
	ctx.lr = 0x83322638;
	sub_8246BE80(ctx, base);
	// bl 0x833203a8
	ctx.lr = 0x8332263C;
	sub_833203A8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r30,-48
	ctx.r6.s64 = ctx.r30.s64 + -48;
	// addi r5,r30,-44
	ctx.r5.s64 = ctx.r30.s64 + -44;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82479460
	ctx.lr = 0x83322654;
	sub_82479460(ctx, base);
	// addi r6,r30,-12
	ctx.r6.s64 = ctx.r30.s64 + -12;
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82479460
	ctx.lr = 0x8332266C;
	sub_82479460(ctx, base);
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

__attribute__((alias("__imp__sub_83322684"))) PPC_WEAK_FUNC(sub_83322684);
PPC_FUNC_IMPL(__imp__sub_83322684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83322688"))) PPC_WEAK_FUNC(sub_83322688);
PPC_FUNC_IMPL(__imp__sub_83322688) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83320048
	ctx.lr = 0x833226A8;
	sub_83320048(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,160
	ctx.r3.s64 = 160;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x833226BC;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x833226d4
	if (cr6.eq) goto loc_833226D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83321f38
	ctx.lr = 0x833226CC;
	sub_83321F38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x833226d8
	goto loc_833226D8;
loc_833226D4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_833226D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// bl 0x8241f040
	ctx.lr = 0x833226E8;
	sub_8241F040(ctx, base);
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

__attribute__((alias("__imp__sub_83322704"))) PPC_WEAK_FUNC(sub_83322704);
PPC_FUNC_IMPL(__imp__sub_83322704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83322708"))) PPC_WEAK_FUNC(sub_83322708);
PPC_FUNC_IMPL(__imp__sub_83322708) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r10,r11,-2832
	ctx.r10.s64 = ctx.r11.s64 + -2832;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8330ce78
	ctx.lr = 0x83322738;
	sub_8330CE78(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x83322744;
	sub_8241F040(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x83322750;
	sub_8241F040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fcd10
	ctx.lr = 0x83322758;
	sub_824FCD10(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83322770
	if (cr6.eq) goto loc_83322770;
	// bl 0x8248b818
	ctx.lr = 0x8332276C;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83322770:
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

__attribute__((alias("__imp__sub_83322788"))) PPC_WEAK_FUNC(sub_83322788);
PPC_FUNC_IMPL(__imp__sub_83322788) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82489b30
	ctx.lr = 0x833227AC;
	sub_82489B30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// bl 0x8253b268
	ctx.lr = 0x833227B8;
	sub_8253B268(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x8248bbf8
	ctx.lr = 0x833227D0;
	sub_8248BBF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x833209a0
	ctx.lr = 0x833227D8;
	sub_833209A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83322824
	if (cr6.eq) goto loc_83322824;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x833227F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r9,12828
	ctx.r8.s64 = ctx.r9.s64 + 12828;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// bl 0x82465ee8
	ctx.lr = 0x83322810;
	sub_82465EE8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8257f3f0
	ctx.lr = 0x83322818;
	sub_8257F3F0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82489378
	ctx.lr = 0x83322820;
	sub_82489378(ctx, base);
	// b 0x8332287c
	goto loc_8332287C;
loc_83322824:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83322860
	if (cr6.eq) goto loc_83322860;
	// bl 0x83320048
	ctx.lr = 0x83322830;
	sub_83320048(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82421418
	ctx.lr = 0x8332283C;
	sub_82421418(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x83322840;
	sub_8252E3C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d060
	ctx.lr = 0x83322850;
	sub_8253D060(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x8332285C;
	sub_82573C50(ctx, base);
	// b 0x83322874
	goto loc_83322874;
loc_83322860:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3056
	ctx.r4.s64 = ctx.r11.s64 + -3056;
	// bl 0x8253c558
	ctx.lr = 0x83322870;
	sub_8253C558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83322874:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824670b0
	ctx.lr = 0x8332287C;
	sub_824670B0(ctx, base);
loc_8332287C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_83322898"))) PPC_WEAK_FUNC(sub_83322898);
PPC_FUNC_IMPL(__imp__sub_83322898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x833228A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c280
	ctx.lr = 0x833228C4;
	sub_8253C280(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x833228d0
	if (cr6.eq) goto loc_833228D0;
	// std r28,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r28.u64);
loc_833228D0:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,10120
	ctx.r4.s64 = ctx.r11.s64 + 10120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b5e8
	ctx.lr = 0x833228E4;
	sub_8253B5E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x833228F4;
	sub_8253BA90(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f280
	ctx.lr = 0x83322904;
	sub_8241F280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82421388
	ctx.lr = 0x83322910;
	sub_82421388(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,172
	ctx.r3.s64 = ctx.r11.s64 + 172;
	// bl 0x824674c0
	ctx.lr = 0x8332292C;
	sub_824674C0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83322944
	if (cr6.eq) goto loc_83322944;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83322944;
	sub_82573040(ctx, base);
loc_83322944:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8332295c
	if (cr6.eq) goto loc_8332295C;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x8332295C;
	sub_82573040(ctx, base);
loc_8332295C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83322968"))) PPC_WEAK_FUNC(sub_83322968);
PPC_FUNC_IMPL(__imp__sub_83322968) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83320048
	ctx.lr = 0x83322984;
	sub_83320048(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824890e0
	ctx.lr = 0x83322994;
	sub_824890E0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r31,r11,-3076
	ctx.r31.s64 = ctx.r11.s64 + -3076;
	// addi r9,r10,1360
	ctx.r9.s64 = ctx.r10.s64 + 1360;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x83322898
	ctx.lr = 0x833229C0;
	sub_83322898(ctx, base);
	// lis r8,-31950
	ctx.r8.s64 = -2093875200;
	// addi r7,r8,1400
	ctx.r7.s64 = ctx.r8.s64 + 1400;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x83322898
	ctx.lr = 0x833229E0;
	sub_83322898(ctx, base);
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

__attribute__((alias("__imp__sub_833229F8"))) PPC_WEAK_FUNC(sub_833229F8);
PPC_FUNC_IMPL(__imp__sub_833229F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82489b30
	ctx.lr = 0x83322A10;
	sub_82489B30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83322968
	ctx.lr = 0x83322A18;
	sub_83322968(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,12828
	ctx.r10.s64 = ctx.r11.s64 + 12828;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82465ee8
	ctx.lr = 0x83322A2C;
	sub_82465EE8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8257f3f0
	ctx.lr = 0x83322A34;
	sub_8257F3F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82489378
	ctx.lr = 0x83322A3C;
	sub_82489378(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83322A50"))) PPC_WEAK_FUNC(sub_83322A50);
PPC_FUNC_IMPL(__imp__sub_83322A50) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83320048
	ctx.lr = 0x83322A68;
	sub_83320048(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-3096
	ctx.r30.s64 = ctx.r11.s64 + -3096;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x83322A84;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x83322A90;
	sub_8246BE10(ctx, base);
	// bl 0x824fd170
	ctx.lr = 0x83322A94;
	sub_824FD170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x83322AA0;
	sub_8246BE18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// bl 0x8246c3a0
	ctx.lr = 0x83322AAC;
	sub_8246C3A0(ctx, base);
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x83322ABC;
	sub_8241F280(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x83322AC4;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83322ae4
	if (cr6.eq) goto loc_83322AE4;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83322ADC;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_83322AE4:
	// bl 0x82508040
	ctx.lr = 0x83322AE8;
	sub_82508040(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// li r5,120
	ctx.r5.s64 = 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82478598
	ctx.lr = 0x83322AFC;
	sub_82478598(ctx, base);
	// addi r5,r30,-48
	ctx.r5.s64 = ctx.r30.s64 + -48;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824788c8
	ctx.lr = 0x83322B10;
	sub_824788C8(ctx, base);
	// addi r6,r30,-40
	ctx.r6.s64 = ctx.r30.s64 + -40;
	// addi r5,r30,-36
	ctx.r5.s64 = ctx.r30.s64 + -36;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82479460
	ctx.lr = 0x83322B28;
	sub_82479460(ctx, base);
	// bl 0x833204d0
	ctx.lr = 0x83322B2C;
	sub_833204D0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r30,-12
	ctx.r6.s64 = ctx.r30.s64 + -12;
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82479460
	ctx.lr = 0x83322B44;
	sub_82479460(ctx, base);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10600
	ctx.r4.s64 = ctx.r11.s64 + 10600;
	// bl 0x8246be38
	ctx.lr = 0x83322B54;
	sub_8246BE38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824894a0
	ctx.lr = 0x83322B5C;
	sub_824894A0(ctx, base);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,10744
	ctx.r4.s64 = ctx.r10.s64 + 10744;
	// bl 0x8253b5e8
	ctx.lr = 0x83322B74;
	sub_8253B5E8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253be88
	ctx.lr = 0x83322B88;
	sub_8253BE88(ctx, base);
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

__attribute__((alias("__imp__sub_83322BA0"))) PPC_WEAK_FUNC(sub_83322BA0);
PPC_FUNC_IMPL(__imp__sub_83322BA0) {
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
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x83322BC0;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83322be8
	if (cr6.eq) goto loc_83322BE8;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r3,15568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83322BE8:
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15568, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83322C04"))) PPC_WEAK_FUNC(sub_83322C04);
PPC_FUNC_IMPL(__imp__sub_83322C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83322C08"))) PPC_WEAK_FUNC(sub_83322C08);
PPC_FUNC_IMPL(__imp__sub_83322C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r7,32
	ctx.r7.s64 = 32;
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// li r8,33
	ctx.r8.s64 = 33;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r10,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// addi r11,r3,92
	ctx.r11.s64 = ctx.r3.s64 + 92;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// std r10,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r10.u64);
	// lfs f0,9008(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// li r8,255
	ctx.r8.s64 = 255;
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// sth r7,90(r3)
	PPC_STORE_U16(ctx.r3.u32 + 90, ctx.r7.u16);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r9,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// sth r10,88(r3)
	PPC_STORE_U16(ctx.r3.u32 + 88, ctx.r10.u16);
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// lfs f13,-4664(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4664);
	ctx.f13.f64 = double(temp.f32);
loc_83322C84:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// sth r10,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stb r9,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r9.u8);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stb r9,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r9.u8);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// sth r9,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r9.u16);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// sth r8,34(r11)
	PPC_STORE_U16(ctx.r11.u32 + 34, ctx.r8.u16);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f13,48(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stwu r10,80(r11)
	ea = 80 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83322c84
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83322C84;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83322CD8"))) PPC_WEAK_FUNC(sub_83322CD8);
PPC_FUNC_IMPL(__imp__sub_83322CD8) {
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
	// lis r31,-31747
	ctx.r31.s64 = -2080571392;
	// lwz r3,15568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15568);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83322d04
	if (cr6.eq) goto loc_83322D04;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x83322D04;
	sub_82573040(ctx, base);
loc_83322D04:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15568, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83322D20"))) PPC_WEAK_FUNC(sub_83322D20);
PPC_FUNC_IMPL(__imp__sub_83322D20) {
	PPC_FUNC_PROLOGUE();
	// b 0x83327bd8
	sub_83327BD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83322D24"))) PPC_WEAK_FUNC(sub_83322D24);
PPC_FUNC_IMPL(__imp__sub_83322D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83322D28"))) PPC_WEAK_FUNC(sub_83322D28);
PPC_FUNC_IMPL(__imp__sub_83322D28) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// addi r10,r11,-1684
	ctx.r10.s64 = ctx.r11.s64 + -1684;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82573c50
	ctx.lr = 0x83322D58;
	sub_82573C50(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x83322D64;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82467108
	ctx.lr = 0x83322D6C;
	sub_82467108(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83322d84
	if (cr6.eq) goto loc_83322D84;
	// bl 0x8248b818
	ctx.lr = 0x83322D80;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83322D84:
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

__attribute__((alias("__imp__sub_83322D9C"))) PPC_WEAK_FUNC(sub_83322D9C);
PPC_FUNC_IMPL(__imp__sub_83322D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83322DA0"))) PPC_WEAK_FUNC(sub_83322DA0);
PPC_FUNC_IMPL(__imp__sub_83322DA0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-1660
	ctx.r10.s64 = ctx.r11.s64 + -1660;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8339d970
	ctx.lr = 0x83322DCC;
	sub_8339D970(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83322de4
	if (cr6.eq) goto loc_83322DE4;
	// bl 0x8248b818
	ctx.lr = 0x83322DE0;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83322DE4:
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

__attribute__((alias("__imp__sub_83322DFC"))) PPC_WEAK_FUNC(sub_83322DFC);
PPC_FUNC_IMPL(__imp__sub_83322DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83322E00"))) PPC_WEAK_FUNC(sub_83322E00);
PPC_FUNC_IMPL(__imp__sub_83322E00) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-1644
	ctx.r9.s64 = ctx.r11.s64 + -1644;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83322e3c
	if (cr6.eq) goto loc_83322E3C;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x83322E38;
	sub_82573040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83322E3C:
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

__attribute__((alias("__imp__sub_83322E50"))) PPC_WEAK_FUNC(sub_83322E50);
PPC_FUNC_IMPL(__imp__sub_83322E50) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,23476
	ctx.r9.s64 = ctx.r11.s64 + 23476;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83322e84
	if (cr6.eq) goto loc_83322E84;
	// bl 0x82416268
	ctx.lr = 0x83322E80;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83322E84:
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

__attribute__((alias("__imp__sub_83322E98"))) PPC_WEAK_FUNC(sub_83322E98);
PPC_FUNC_IMPL(__imp__sub_83322E98) {
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
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x83322EB8;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83322ed4
	if (cr6.eq) goto loc_83322ED4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,-1632
	ctx.r10.s64 = ctx.r11.s64 + -1632;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83322ed8
	goto loc_83322ED8;
loc_83322ED4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83322ED8:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,17384
	ctx.r4.s64 = ctx.r11.s64 + 17384;
	// bl 0x83329eb8
	ctx.lr = 0x83322EE8;
	sub_83329EB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83322EF8"))) PPC_WEAK_FUNC(sub_83322EF8);
PPC_FUNC_IMPL(__imp__sub_83322EF8) {
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
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x83322F18;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83322f34
	if (cr6.eq) goto loc_83322F34;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,-1620
	ctx.r10.s64 = ctx.r11.s64 + -1620;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x83322f38
	goto loc_83322F38;
loc_83322F34:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83322F38:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,17384
	ctx.r4.s64 = ctx.r11.s64 + 17384;
	// bl 0x83329f18
	ctx.lr = 0x83322F48;
	sub_83329F18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83322F58"))) PPC_WEAK_FUNC(sub_83322F58);
PPC_FUNC_IMPL(__imp__sub_83322F58) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83322fa8
	if (cr6.eq) goto loc_83322FA8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8332b5c0
	ctx.lr = 0x83322F88;
	sub_8332B5C0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,-1556
	ctx.r10.s64 = ctx.r11.s64 + -1556;
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x824201f0
	ctx.lr = 0x83322FA0;
	sub_824201F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83322fac
	goto loc_83322FAC;
loc_83322FA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83322FAC:
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

__attribute__((alias("__imp__sub_83322FC4"))) PPC_WEAK_FUNC(sub_83322FC4);
PPC_FUNC_IMPL(__imp__sub_83322FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83322FC8"))) PPC_WEAK_FUNC(sub_83322FC8);
PPC_FUNC_IMPL(__imp__sub_83322FC8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83323018
	if (cr6.eq) goto loc_83323018;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833296a8
	ctx.lr = 0x83322FF8;
	sub_833296A8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,-1392
	ctx.r10.s64 = ctx.r11.s64 + -1392;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x824201f0
	ctx.lr = 0x83323010;
	sub_824201F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8332301c
	goto loc_8332301C;
loc_83323018:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8332301C:
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

__attribute__((alias("__imp__sub_83323034"))) PPC_WEAK_FUNC(sub_83323034);
PPC_FUNC_IMPL(__imp__sub_83323034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83323038"))) PPC_WEAK_FUNC(sub_83323038);
PPC_FUNC_IMPL(__imp__sub_83323038) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83323074
	if (cr6.eq) goto loc_83323074;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83323074
	if (cr6.eq) goto loc_83323074;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82468ef8
	ctx.lr = 0x83323074;
	sub_82468EF8(ctx, base);
loc_83323074:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f040
	ctx.lr = 0x83323080;
	sub_8241F040(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x833230b0
	if (cr6.eq) goto loc_833230B0;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8241fa70
	ctx.lr = 0x83323094;
	sub_8241FA70(ctx, base);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x833230c0
	if (cr6.eq) goto loc_833230C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824695f0
	ctx.lr = 0x833230AC;
	sub_824695F0(ctx, base);
	// b 0x833230c0
	goto loc_833230C0;
loc_833230B0:
	// bl 0x8241fb80
	ctx.lr = 0x833230B4;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8241fa70
	ctx.lr = 0x833230C0;
	sub_8241FA70(ctx, base);
loc_833230C0:
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

__attribute__((alias("__imp__sub_833230D8"))) PPC_WEAK_FUNC(sub_833230D8);
PPC_FUNC_IMPL(__imp__sub_833230D8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82469530
	ctx.lr = 0x833230FC;
	sub_82469530(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83323144
	if (cr6.eq) goto loc_83323144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8248f710
	ctx.lr = 0x83323114;
	sub_8248F710(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83323138
	if (cr6.eq) goto loc_83323138;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// bl 0x8241f040
	ctx.lr = 0x83323130;
	sub_8241F040(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x83323150
	goto loc_83323150;
loc_83323138:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x83323144;
	sub_8241F040(ctx, base);
loc_83323144:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_83323150:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x83323158;
	sub_8241F040(ctx, base);
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

__attribute__((alias("__imp__sub_83323174"))) PPC_WEAK_FUNC(sub_83323174);
PPC_FUNC_IMPL(__imp__sub_83323174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83323178"))) PPC_WEAK_FUNC(sub_83323178);
PPC_FUNC_IMPL(__imp__sub_83323178) {
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
	// bl 0x8332b2c0
	ctx.lr = 0x83323190;
	sub_8332B2C0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r10,r11,-1176
	ctx.r10.s64 = ctx.r11.s64 + -1176;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8241f278
	ctx.lr = 0x833231A0;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8241f130
	ctx.lr = 0x833231AC;
	sub_8241F130(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x833231C0;
	sub_8241F040(ctx, base);
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

__attribute__((alias("__imp__sub_833231D8"))) PPC_WEAK_FUNC(sub_833231D8);
PPC_FUNC_IMPL(__imp__sub_833231D8) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-1176
	ctx.r10.s64 = ctx.r11.s64 + -1176;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x8332320C;
	sub_8241F040(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82573c50
	ctx.lr = 0x83323214;
	sub_82573C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8339d970
	ctx.lr = 0x8332321C;
	sub_8339D970(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83323234
	if (cr6.eq) goto loc_83323234;
	// bl 0x8248b818
	ctx.lr = 0x83323230;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83323234:
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

__attribute__((alias("__imp__sub_8332324C"))) PPC_WEAK_FUNC(sub_8332324C);
PPC_FUNC_IMPL(__imp__sub_8332324C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83323250"))) PPC_WEAK_FUNC(sub_83323250);
PPC_FUNC_IMPL(__imp__sub_83323250) {
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
	// lis r5,5
	ctx.r5.s64 = 327680;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8248b768
	ctx.lr = 0x83323270;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8332328c
	if (cr6.eq) goto loc_8332328C;
	// bl 0x83323178
	ctx.lr = 0x8332327C;
	sub_83323178(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8332328C:
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

__attribute__((alias("__imp__sub_833232A0"))) PPC_WEAK_FUNC(sub_833232A0);
PPC_FUNC_IMPL(__imp__sub_833232A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x833232A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8332b2c0
	ctx.lr = 0x833232C4;
	sub_8332B2C0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r28,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r28.u8);
	// addi r9,r11,-1164
	ctx.r9.s64 = ctx.r11.s64 + -1164;
	// stb r27,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r27.u8);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f040
	ctx.lr = 0x833232F4;
	sub_8241F040(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833230d8
	ctx.lr = 0x83323300;
	sub_833230D8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x8241f040
	ctx.lr = 0x83323310;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x8332331C;
	sub_8241F040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83323328"))) PPC_WEAK_FUNC(sub_83323328);
PPC_FUNC_IMPL(__imp__sub_83323328) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-1164
	ctx.r10.s64 = ctx.r11.s64 + -1164;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x8332335C;
	sub_8241F040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8339d970
	ctx.lr = 0x83323364;
	sub_8339D970(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8332337c
	if (cr6.eq) goto loc_8332337C;
	// bl 0x8248b818
	ctx.lr = 0x83323378;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8332337C:
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

__attribute__((alias("__imp__sub_83323394"))) PPC_WEAK_FUNC(sub_83323394);
PPC_FUNC_IMPL(__imp__sub_83323394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83323398"))) PPC_WEAK_FUNC(sub_83323398);
PPC_FUNC_IMPL(__imp__sub_83323398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x833233A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r5,5
	ctx.r5.s64 = 327680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8248b768
	ctx.lr = 0x833233C8;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x833233ec
	if (cr6.eq) goto loc_833233EC;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x833232a0
	ctx.lr = 0x833233E4;
	sub_833232A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_833233EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833233F8"))) PPC_WEAK_FUNC(sub_833233F8);
PPC_FUNC_IMPL(__imp__sub_833233F8) {
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
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lwz r11,15872(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15872);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83323468
	if (!cr6.eq) goto loc_83323468;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// stw r11,15872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15872, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,15640
	ctx.r31.s64 = ctx.r9.s64 + 15640;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,336
	ctx.r4.s64 = 336;
	// bl 0x82477fc8
	ctx.lr = 0x83323444;
	sub_82477FC8(ctx, base);
	// lis r8,-31787
	ctx.r8.s64 = -2083192832;
	// addi r3,r8,27648
	ctx.r3.s64 = ctx.r8.s64 + 27648;
	// bl 0x831cdcc8
	ctx.lr = 0x83323450;
	sub_831CDCC8(ctx, base);
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
loc_83323468:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,15640
	ctx.r3.s64 = ctx.r11.s64 + 15640;
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

__attribute__((alias("__imp__sub_83323484"))) PPC_WEAK_FUNC(sub_83323484);
PPC_FUNC_IMPL(__imp__sub_83323484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83323488"))) PPC_WEAK_FUNC(sub_83323488);
PPC_FUNC_IMPL(__imp__sub_83323488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83323490;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-1556
	ctx.r10.s64 = ctx.r11.s64 + -1556;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r30,r3,320
	ctx.r30.s64 = ctx.r3.s64 + 320;
	// bl 0x8241fb80
	ctx.lr = 0x833234B0;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241fa70
	ctx.lr = 0x833234BC;
	sub_8241FA70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241fb00
	ctx.lr = 0x833234C4;
	sub_8241FB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8332b678
	ctx.lr = 0x833234CC;
	sub_8332B678(ctx, base);
	// clrlwi r9,r29,31
	ctx.r9.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x833234e4
	if (cr6.eq) goto loc_833234E4;
	// bl 0x8248b818
	ctx.lr = 0x833234E0;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_833234E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833234EC"))) PPC_WEAK_FUNC(sub_833234EC);
PPC_FUNC_IMPL(__imp__sub_833234EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833234F0"))) PPC_WEAK_FUNC(sub_833234F0);
PPC_FUNC_IMPL(__imp__sub_833234F0) {
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
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lwz r11,16112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16112);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83323560
	if (!cr6.eq) goto loc_83323560;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// stw r11,16112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16112, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,15880
	ctx.r31.s64 = ctx.r9.s64 + 15880;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,176
	ctx.r4.s64 = 176;
	// bl 0x82477fc8
	ctx.lr = 0x8332353C;
	sub_82477FC8(ctx, base);
	// lis r8,-31787
	ctx.r8.s64 = -2083192832;
	// addi r3,r8,27664
	ctx.r3.s64 = ctx.r8.s64 + 27664;
	// bl 0x831cdcc8
	ctx.lr = 0x83323548;
	sub_831CDCC8(ctx, base);
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
loc_83323560:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,15880
	ctx.r3.s64 = ctx.r11.s64 + 15880;
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

__attribute__((alias("__imp__sub_8332357C"))) PPC_WEAK_FUNC(sub_8332357C);
PPC_FUNC_IMPL(__imp__sub_8332357C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83323580"))) PPC_WEAK_FUNC(sub_83323580);
PPC_FUNC_IMPL(__imp__sub_83323580) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x833234f0
	ctx.lr = 0x83323598;
	sub_833234F0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-2364
	ctx.r30.s64 = ctx.r11.s64 + -2364;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x833235B4;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x833235C0;
	sub_8246BE10(ctx, base);
	// bl 0x8332b950
	ctx.lr = 0x833235C4;
	sub_8332B950(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x833235D0;
	sub_8246BE18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// bl 0x8246c3a0
	ctx.lr = 0x833235DC;
	sub_8246C3A0(ctx, base);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x833235EC;
	sub_8241F280(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x833235F4;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83323614
	if (cr6.eq) goto loc_83323614;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x8332360C;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_83323614:
	// bl 0x8248f5c0
	ctx.lr = 0x83323618;
	sub_8248F5C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,160
	ctx.r5.s64 = 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82478598
	ctx.lr = 0x8332362C;
	sub_82478598(ctx, base);
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

__attribute__((alias("__imp__sub_83323644"))) PPC_WEAK_FUNC(sub_83323644);
PPC_FUNC_IMPL(__imp__sub_83323644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83323648"))) PPC_WEAK_FUNC(sub_83323648);
PPC_FUNC_IMPL(__imp__sub_83323648) {
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
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lwz r11,16352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16352);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x833236b8
	if (!cr6.eq) goto loc_833236B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// stw r11,16352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16352, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,16120
	ctx.r31.s64 = ctx.r9.s64 + 16120;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,368
	ctx.r4.s64 = 368;
	// bl 0x82477fc8
	ctx.lr = 0x83323694;
	sub_82477FC8(ctx, base);
	// lis r8,-31787
	ctx.r8.s64 = -2083192832;
	// addi r3,r8,27680
	ctx.r3.s64 = ctx.r8.s64 + 27680;
	// bl 0x831cdcc8
	ctx.lr = 0x833236A0;
	sub_831CDCC8(ctx, base);
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
loc_833236B8:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,16120
	ctx.r3.s64 = ctx.r11.s64 + 16120;
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

__attribute__((alias("__imp__sub_833236D4"))) PPC_WEAK_FUNC(sub_833236D4);
PPC_FUNC_IMPL(__imp__sub_833236D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833236D8"))) PPC_WEAK_FUNC(sub_833236D8);
PPC_FUNC_IMPL(__imp__sub_833236D8) {
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
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lwz r11,16592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16592);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83323748
	if (!cr6.eq) goto loc_83323748;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// stw r11,16592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16592, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,16360
	ctx.r31.s64 = ctx.r9.s64 + 16360;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// bl 0x82477fc8
	ctx.lr = 0x83323724;
	sub_82477FC8(ctx, base);
	// lis r8,-31787
	ctx.r8.s64 = -2083192832;
	// addi r3,r8,27696
	ctx.r3.s64 = ctx.r8.s64 + 27696;
	// bl 0x831cdcc8
	ctx.lr = 0x83323730;
	sub_831CDCC8(ctx, base);
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
loc_83323748:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,16360
	ctx.r3.s64 = ctx.r11.s64 + 16360;
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

__attribute__((alias("__imp__sub_83323764"))) PPC_WEAK_FUNC(sub_83323764);
PPC_FUNC_IMPL(__imp__sub_83323764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83323768"))) PPC_WEAK_FUNC(sub_83323768);
PPC_FUNC_IMPL(__imp__sub_83323768) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x833236d8
	ctx.lr = 0x83323780;
	sub_833236D8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-2056
	ctx.r30.s64 = ctx.r11.s64 + -2056;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x8332379C;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x833237A8;
	sub_8246BE10(ctx, base);
	// bl 0x8332b950
	ctx.lr = 0x833237AC;
	sub_8332B950(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x833237B8;
	sub_8246BE18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// bl 0x8246c3a0
	ctx.lr = 0x833237C4;
	sub_8246C3A0(ctx, base);
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x833237D4;
	sub_8241F280(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x833237DC;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x833237fc
	if (cr6.eq) goto loc_833237FC;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x833237F4;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_833237FC:
	// bl 0x8248f5c0
	ctx.lr = 0x83323800;
	sub_8248F5C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// li r5,160
	ctx.r5.s64 = 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82478620
	ctx.lr = 0x83323814;
	sub_82478620(ctx, base);
	// bl 0x8248f5c0
	ctx.lr = 0x83323818;
	sub_8248F5C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,176
	ctx.r5.s64 = 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82478620
	ctx.lr = 0x8332382C;
	sub_82478620(ctx, base);
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

__attribute__((alias("__imp__sub_83323844"))) PPC_WEAK_FUNC(sub_83323844);
PPC_FUNC_IMPL(__imp__sub_83323844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83323848"))) PPC_WEAK_FUNC(sub_83323848);
PPC_FUNC_IMPL(__imp__sub_83323848) {
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
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lwz r11,16832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16832);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x833238b8
	if (!cr6.eq) goto loc_833238B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// stw r11,16832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16832, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,16600
	ctx.r31.s64 = ctx.r9.s64 + 16600;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,400
	ctx.r4.s64 = 400;
	// bl 0x82477fc8
	ctx.lr = 0x83323894;
	sub_82477FC8(ctx, base);
	// lis r8,-31787
	ctx.r8.s64 = -2083192832;
	// addi r3,r8,27712
	ctx.r3.s64 = ctx.r8.s64 + 27712;
	// bl 0x831cdcc8
	ctx.lr = 0x833238A0;
	sub_831CDCC8(ctx, base);
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
loc_833238B8:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,16600
	ctx.r3.s64 = ctx.r11.s64 + 16600;
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

__attribute__((alias("__imp__sub_833238D4"))) PPC_WEAK_FUNC(sub_833238D4);
PPC_FUNC_IMPL(__imp__sub_833238D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833238D8"))) PPC_WEAK_FUNC(sub_833238D8);
PPC_FUNC_IMPL(__imp__sub_833238D8) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r3,376
	ctx.r3.s64 = ctx.r3.s64 + 376;
	// addi r10,r11,-1392
	ctx.r10.s64 = ctx.r11.s64 + -1392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8241fb00
	ctx.lr = 0x83323908;
	sub_8241FB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83329790
	ctx.lr = 0x83323910;
	sub_83329790(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83323928
	if (cr6.eq) goto loc_83323928;
	// bl 0x8248b818
	ctx.lr = 0x83323924;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83323928:
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

__attribute__((alias("__imp__sub_83323940"))) PPC_WEAK_FUNC(sub_83323940);
PPC_FUNC_IMPL(__imp__sub_83323940) {
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
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lwz r11,17072(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17072);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x833239b0
	if (!cr6.eq) goto loc_833239B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// stw r11,17072(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17072, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,16840
	ctx.r31.s64 = ctx.r9.s64 + 16840;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// bl 0x82477fc8
	ctx.lr = 0x8332398C;
	sub_82477FC8(ctx, base);
	// lis r8,-31787
	ctx.r8.s64 = -2083192832;
	// addi r3,r8,27728
	ctx.r3.s64 = ctx.r8.s64 + 27728;
	// bl 0x831cdcc8
	ctx.lr = 0x83323998;
	sub_831CDCC8(ctx, base);
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
loc_833239B0:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,16840
	ctx.r3.s64 = ctx.r11.s64 + 16840;
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

__attribute__((alias("__imp__sub_833239CC"))) PPC_WEAK_FUNC(sub_833239CC);
PPC_FUNC_IMPL(__imp__sub_833239CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833239D0"))) PPC_WEAK_FUNC(sub_833239D0);
PPC_FUNC_IMPL(__imp__sub_833239D0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83323940
	ctx.lr = 0x833239E8;
	sub_83323940(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-1784
	ctx.r31.s64 = ctx.r11.s64 + -1784;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x83323A04;
	sub_8247B0F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x83323A10;
	sub_8246BE10(ctx, base);
	// bl 0x83327cf8
	ctx.lr = 0x83323A14;
	sub_83327CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246be18
	ctx.lr = 0x83323A20;
	sub_8246BE18(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c3a0
	ctx.lr = 0x83323A2C;
	sub_8246C3A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x83323A3C;
	sub_8241F280(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x83323A44;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83323a5c
	if (cr6.eq) goto loc_83323A5C;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83323A5C;
	sub_82573040(ctx, base);
loc_83323A5C:
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

__attribute__((alias("__imp__sub_83323A74"))) PPC_WEAK_FUNC(sub_83323A74);
PPC_FUNC_IMPL(__imp__sub_83323A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83323A78"))) PPC_WEAK_FUNC(sub_83323A78);
PPC_FUNC_IMPL(__imp__sub_83323A78) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-1328
	ctx.r10.s64 = ctx.r11.s64 + -1328;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83327ac8
	ctx.lr = 0x83323AA4;
	sub_83327AC8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83323abc
	if (cr6.eq) goto loc_83323ABC;
	// bl 0x8248b818
	ctx.lr = 0x83323AB8;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83323ABC:
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

__attribute__((alias("__imp__sub_83323AD4"))) PPC_WEAK_FUNC(sub_83323AD4);
PPC_FUNC_IMPL(__imp__sub_83323AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83323AD8"))) PPC_WEAK_FUNC(sub_83323AD8);
PPC_FUNC_IMPL(__imp__sub_83323AD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83323AFC"))) PPC_WEAK_FUNC(sub_83323AFC);
PPC_FUNC_IMPL(__imp__sub_83323AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83323B00"))) PPC_WEAK_FUNC(sub_83323B00);
PPC_FUNC_IMPL(__imp__sub_83323B00) {
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
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lwz r11,17312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17312);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83323b74
	if (!cr6.eq) goto loc_83323B74;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// stw r11,17312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17312, ctx.r11.u32);
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// addi r31,r9,17080
	ctx.r31.s64 = ctx.r9.s64 + 17080;
	// lis r6,5
	ctx.r6.s64 = 327680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-1776
	ctx.r5.s64 = ctx.r8.s64 + -1776;
	// ori r6,r6,10
	ctx.r6.u64 = ctx.r6.u64 | 10;
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x82477fc8
	ctx.lr = 0x83323B50;
	sub_82477FC8(ctx, base);
	// lis r7,-31787
	ctx.r7.s64 = -2083192832;
	// addi r3,r7,27744
	ctx.r3.s64 = ctx.r7.s64 + 27744;
	// bl 0x831cdcc8
	ctx.lr = 0x83323B5C;
	sub_831CDCC8(ctx, base);
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
loc_83323B74:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,17080
	ctx.r3.s64 = ctx.r11.s64 + 17080;
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

__attribute__((alias("__imp__sub_83323B90"))) PPC_WEAK_FUNC(sub_83323B90);
PPC_FUNC_IMPL(__imp__sub_83323B90) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83323be4
	if (cr6.eq) goto loc_83323BE4;
	// bl 0x8250fa80
	ctx.lr = 0x83323BB4;
	sub_8250FA80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83323BCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8246be58
	ctx.lr = 0x83323BD4;
	sub_8246BE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83323be8
	if (!cr6.eq) goto loc_83323BE8;
loc_83323BE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83323BE8:
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

__attribute__((alias("__imp__sub_83323C00"))) PPC_WEAK_FUNC(sub_83323C00);
PPC_FUNC_IMPL(__imp__sub_83323C00) {
	PPC_FUNC_PROLOGUE();
	// b 0x833233f8
	sub_833233F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83323C04"))) PPC_WEAK_FUNC(sub_83323C04);
PPC_FUNC_IMPL(__imp__sub_83323C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83323C08"))) PPC_WEAK_FUNC(sub_83323C08);
PPC_FUNC_IMPL(__imp__sub_83323C08) {
	PPC_FUNC_PROLOGUE();
	// b 0x833234f0
	sub_833234F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83323C0C"))) PPC_WEAK_FUNC(sub_83323C0C);
PPC_FUNC_IMPL(__imp__sub_83323C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83323C10"))) PPC_WEAK_FUNC(sub_83323C10);
PPC_FUNC_IMPL(__imp__sub_83323C10) {
	PPC_FUNC_PROLOGUE();
	// b 0x83323848
	sub_83323848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83323C14"))) PPC_WEAK_FUNC(sub_83323C14);
PPC_FUNC_IMPL(__imp__sub_83323C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83323C18"))) PPC_WEAK_FUNC(sub_83323C18);
PPC_FUNC_IMPL(__imp__sub_83323C18) {
	PPC_FUNC_PROLOGUE();
	// b 0x83323940
	sub_83323940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83323C1C"))) PPC_WEAK_FUNC(sub_83323C1C);
PPC_FUNC_IMPL(__imp__sub_83323C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83323C20"))) PPC_WEAK_FUNC(sub_83323C20);
PPC_FUNC_IMPL(__imp__sub_83323C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83323C28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82489ab8
	ctx.lr = 0x83323C48;
	sub_82489AB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa58
	ctx.lr = 0x83323C58;
	sub_8253AA58(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8252e3c0
	ctx.lr = 0x83323C68;
	sub_8252E3C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// bl 0x8253b780
	ctx.lr = 0x83323C78;
	sub_8253B780(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x83323C84;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x83323d04
	if (!cr6.eq) goto loc_83323D04;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8252e3c0
	ctx.lr = 0x83323C94;
	sub_8252E3C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b780
	ctx.lr = 0x83323CA4;
	sub_8253B780(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x83323CB0;
	sub_8253AD28(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bgt cr6,0x83323d04
	if (cr6.gt) goto loc_83323D04;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83323d04
	if (cr6.eq) goto loc_83323D04;
	// bdz 0x83323d04
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83323D04;
	// bdz 0x83323d04
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83323D04;
	// bdz 0x83323d04
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83323D04;
	// bdz 0x83323d04
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83323D04;
	// bdz 0x83323d04
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83323D04;
	// bdz 0x83323ce4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83323CE4;
	// bdz 0x83323d04
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83323D04;
	// b 0x83323d04
	goto loc_83323D04;
loc_83323CE4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x83323CF0;
	sub_8253AA70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824894c0
	ctx.lr = 0x83323CF8;
	sub_824894C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83323D04:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x83323D10;
	sub_8253AA70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824894c0
	ctx.lr = 0x83323D18;
	sub_824894C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83323D24"))) PPC_WEAK_FUNC(sub_83323D24);
PPC_FUNC_IMPL(__imp__sub_83323D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83323D28"))) PPC_WEAK_FUNC(sub_83323D28);
PPC_FUNC_IMPL(__imp__sub_83323D28) {
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
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// lwz r11,17320(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17320);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83323d8c
	if (!cr6.eq) goto loc_83323D8C;
	// lis r8,-31747
	ctx.r8.s64 = -2080571392;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r10,r10,-1608
	ctx.r10.s64 = ctx.r10.s64 + -1608;
	// stw r11,17320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17320, ctx.r11.u32);
	// lis r7,-31787
	ctx.r7.s64 = -2083192832;
	// stw r10,17316(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17316, ctx.r10.u32);
	// addi r31,r8,17316
	ctx.r31.s64 = ctx.r8.s64 + 17316;
	// addi r3,r7,27760
	ctx.r3.s64 = ctx.r7.s64 + 27760;
	// bl 0x831cdcc8
	ctx.lr = 0x83323D74;
	sub_831CDCC8(ctx, base);
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
loc_83323D8C:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,17316
	ctx.r3.s64 = ctx.r11.s64 + 17316;
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

__attribute__((alias("__imp__sub_83323DA8"))) PPC_WEAK_FUNC(sub_83323DA8);
PPC_FUNC_IMPL(__imp__sub_83323DA8) {
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
	// bl 0x833233f8
	ctx.lr = 0x83323DC4;
	sub_833233F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,336
	ctx.r3.s64 = 336;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x83323DD8;
	sub_8248B768(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83323e10
	if (cr6.eq) goto loc_83323E10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8332b618
	ctx.lr = 0x83323DEC;
	sub_8332B618(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r10,r11,-1556
	ctx.r10.s64 = ctx.r11.s64 + -1556;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8241fb80
	ctx.lr = 0x83323DFC;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// bl 0x8241fa28
	ctx.lr = 0x83323E08;
	sub_8241FA28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83323e14
	goto loc_83323E14;
loc_83323E10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83323E14:
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

__attribute__((alias("__imp__sub_83323E2C"))) PPC_WEAK_FUNC(sub_83323E2C);
PPC_FUNC_IMPL(__imp__sub_83323E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83323E30"))) PPC_WEAK_FUNC(sub_83323E30);
PPC_FUNC_IMPL(__imp__sub_83323E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83323E38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x833234f0
	ctx.lr = 0x83323E48;
	sub_833234F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,176
	ctx.r3.s64 = 176;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x83323E5C;
	sub_8248B768(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83323e98
	if (cr6.eq) goto loc_83323E98;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8332bae0
	ctx.lr = 0x83323E70;
	sub_8332BAE0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-1144
	ctx.r9.s64 = ctx.r11.s64 + -1144;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r10,160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 160, ctx.r10.u64);
	// bl 0x8241f040
	ctx.lr = 0x83323E90;
	sub_8241F040(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x83323e9c
	goto loc_83323E9C;
loc_83323E98:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83323E9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// bl 0x8241f040
	ctx.lr = 0x83323EAC;
	sub_8241F040(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83323EB8"))) PPC_WEAK_FUNC(sub_83323EB8);
PPC_FUNC_IMPL(__imp__sub_83323EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83323EC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x833230d8
	ctx.lr = 0x83323ED4;
	sub_833230D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83323f80
	if (cr6.eq) goto loc_83323F80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,320
	ctx.r3.s64 = ctx.r30.s64 + 320;
	// bl 0x8241fa70
	ctx.lr = 0x83323EEC;
	sub_8241FA70(ctx, base);
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,17400
	ctx.r31.s64 = ctx.r11.s64 + 17400;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83323c20
	ctx.lr = 0x83323F00;
	sub_83323C20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83323f80
	if (cr6.eq) goto loc_83323F80;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// bl 0x8241a588
	ctx.lr = 0x83323F2C;
	sub_8241A588(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241e628
	ctx.lr = 0x83323F38;
	sub_8241E628(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824f09b0
	ctx.lr = 0x83323F48;
	sub_824F09B0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241d6c0
	ctx.lr = 0x83323F50;
	sub_8241D6C0(ctx, base);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8248f6b0
	ctx.lr = 0x83323F78;
	sub_8248F6B0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241d6c0
	ctx.lr = 0x83323F80;
	sub_8241D6C0(ctx, base);
loc_83323F80:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x83323F8C;
	sub_8241F040(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83323F94"))) PPC_WEAK_FUNC(sub_83323F94);
PPC_FUNC_IMPL(__imp__sub_83323F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83323F98"))) PPC_WEAK_FUNC(sub_83323F98);
PPC_FUNC_IMPL(__imp__sub_83323F98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83323FA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r30,r3,160
	ctx.r30.s64 = ctx.r3.s64 + 160;
	// addi r10,r11,-1144
	ctx.r10.s64 = ctx.r11.s64 + -1144;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x83323FC8;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f040
	ctx.lr = 0x83323FD4;
	sub_8241F040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8332bb60
	ctx.lr = 0x83323FDC;
	sub_8332BB60(ctx, base);
	// clrlwi r9,r29,31
	ctx.r9.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83323ff4
	if (cr6.eq) goto loc_83323FF4;
	// bl 0x8248b818
	ctx.lr = 0x83323FF0;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83323FF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83323FFC"))) PPC_WEAK_FUNC(sub_83323FFC);
PPC_FUNC_IMPL(__imp__sub_83323FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83324000"))) PPC_WEAK_FUNC(sub_83324000);
PPC_FUNC_IMPL(__imp__sub_83324000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83324008;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8251b068
	ctx.lr = 0x83324014;
	sub_8251B068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8332418c
	if (cr6.eq) goto loc_8332418C;
	// lwz r11,160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// addi r31,r28,160
	ctx.r31.s64 = ctx.r28.s64 + 160;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8332418c
	if (!cr6.eq) goto loc_8332418C;
	// addi r30,r3,320
	ctx.r30.s64 = ctx.r3.s64 + 320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241fad0
	ctx.lr = 0x83324038;
	sub_8241FAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8332418c
	if (!cr6.eq) goto loc_8332418C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833230d8
	ctx.lr = 0x83324050;
	sub_833230D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8241f040
	ctx.lr = 0x83324060;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241f040
	ctx.lr = 0x8332406C;
	sub_8241F040(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8332418c
	if (cr6.eq) goto loc_8332418C;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,17368
	ctx.r29.s64 = ctx.r11.s64 + 17368;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83323c20
	ctx.lr = 0x8332408C;
	sub_83323C20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83324104
	if (cr6.eq) goto loc_83324104;
	// bl 0x83323250
	ctx.lr = 0x833240A0;
	sub_83323250(ctx, base);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x833240B0;
	sub_82572FA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82573d70
	ctx.lr = 0x833240C0;
	sub_82573D70(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
	// bl 0x8241f040
	ctx.lr = 0x833240D0;
	sub_8241F040(ctx, base);
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82572fa0
	ctx.lr = 0x833240E0;
	sub_82572FA0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8332bcd8
	ctx.lr = 0x833240EC;
	sub_8332BCD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x833240F8;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x83324104;
	sub_82572FA0(ctx, base);
loc_83324104:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,17448
	ctx.r29.s64 = ctx.r11.s64 + 17448;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83323c20
	ctx.lr = 0x83324118;
	sub_83323C20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8332418c
	if (cr6.eq) goto loc_8332418C;
	// bl 0x83323250
	ctx.lr = 0x83324128;
	sub_83323250(ctx, base);
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x83324138;
	sub_82572FA0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82573d70
	ctx.lr = 0x83324148;
	sub_82573D70(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
	// bl 0x8241f040
	ctx.lr = 0x83324158;
	sub_8241F040(ctx, base);
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82572fa0
	ctx.lr = 0x83324168;
	sub_82572FA0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8332bcc8
	ctx.lr = 0x83324174;
	sub_8332BCC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82572fa0
	ctx.lr = 0x83324180;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x8332418C;
	sub_82572FA0(ctx, base);
loc_8332418C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83324194"))) PPC_WEAK_FUNC(sub_83324194);
PPC_FUNC_IMPL(__imp__sub_83324194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83324198"))) PPC_WEAK_FUNC(sub_83324198);
PPC_FUNC_IMPL(__imp__sub_83324198) {
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
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// lwz r11,17328(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17328);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x833241fc
	if (!cr6.eq) goto loc_833241FC;
	// lis r8,-31747
	ctx.r8.s64 = -2080571392;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r10,r10,-1496
	ctx.r10.s64 = ctx.r10.s64 + -1496;
	// stw r11,17328(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17328, ctx.r11.u32);
	// lis r7,-31787
	ctx.r7.s64 = -2083192832;
	// stw r10,17324(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17324, ctx.r10.u32);
	// addi r31,r8,17324
	ctx.r31.s64 = ctx.r8.s64 + 17324;
	// addi r3,r7,27784
	ctx.r3.s64 = ctx.r7.s64 + 27784;
	// bl 0x831cdcc8
	ctx.lr = 0x833241E4;
	sub_831CDCC8(ctx, base);
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
loc_833241FC:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,17324
	ctx.r3.s64 = ctx.r11.s64 + 17324;
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

__attribute__((alias("__imp__sub_83324218"))) PPC_WEAK_FUNC(sub_83324218);
PPC_FUNC_IMPL(__imp__sub_83324218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83324220;
	__savegprlr_29(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833230d8
	ctx.lr = 0x83324230;
	sub_833230D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x833242d0
	if (cr6.eq) goto loc_833242D0;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,17400
	ctx.r30.s64 = ctx.r11.s64 + 17400;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83323c20
	ctx.lr = 0x83324250;
	sub_83323C20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x833242d0
	if (cr6.eq) goto loc_833242D0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x8241a588
	ctx.lr = 0x8332427C;
	sub_8241A588(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241e628
	ctx.lr = 0x83324288;
	sub_8241E628(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824f09b0
	ctx.lr = 0x83324298;
	sub_824F09B0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241d6c0
	ctx.lr = 0x833242A0;
	sub_8241D6C0(ctx, base);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8248f6b0
	ctx.lr = 0x833242C8;
	sub_8248F6B0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241d6c0
	ctx.lr = 0x833242D0;
	sub_8241D6C0(ctx, base);
loc_833242D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x833242DC;
	sub_8241F040(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833242E4"))) PPC_WEAK_FUNC(sub_833242E4);
PPC_FUNC_IMPL(__imp__sub_833242E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833242E8"))) PPC_WEAK_FUNC(sub_833242E8);
PPC_FUNC_IMPL(__imp__sub_833242E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x833242F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,17416
	ctx.r30.s64 = ctx.r11.s64 + 17416;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83323c20
	ctx.lr = 0x83324310;
	sub_83323C20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83324390
	if (cr6.eq) goto loc_83324390;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// bl 0x8241a588
	ctx.lr = 0x8332433C;
	sub_8241A588(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241e628
	ctx.lr = 0x83324348;
	sub_8241E628(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824f09b0
	ctx.lr = 0x83324358;
	sub_824F09B0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241d6c0
	ctx.lr = 0x83324360;
	sub_8241D6C0(ctx, base);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8248f6b0
	ctx.lr = 0x83324388;
	sub_8248F6B0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241d6c0
	ctx.lr = 0x83324390;
	sub_8241D6C0(ctx, base);
loc_83324390:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83324398"))) PPC_WEAK_FUNC(sub_83324398);
PPC_FUNC_IMPL(__imp__sub_83324398) {
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
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// lwz r11,17336(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17336);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x833243fc
	if (!cr6.eq) goto loc_833243FC;
	// lis r8,-31747
	ctx.r8.s64 = -2080571392;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r10,r10,-1444
	ctx.r10.s64 = ctx.r10.s64 + -1444;
	// stw r11,17336(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17336, ctx.r11.u32);
	// lis r7,-31787
	ctx.r7.s64 = -2083192832;
	// stw r10,17332(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17332, ctx.r10.u32);
	// addi r31,r8,17332
	ctx.r31.s64 = ctx.r8.s64 + 17332;
	// addi r3,r7,27808
	ctx.r3.s64 = ctx.r7.s64 + 27808;
	// bl 0x831cdcc8
	ctx.lr = 0x833243E4;
	sub_831CDCC8(ctx, base);
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
loc_833243FC:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,17332
	ctx.r3.s64 = ctx.r11.s64 + 17332;
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

__attribute__((alias("__imp__sub_83324418"))) PPC_WEAK_FUNC(sub_83324418);
PPC_FUNC_IMPL(__imp__sub_83324418) {
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
	// bl 0x83323848
	ctx.lr = 0x83324434;
	sub_83323848(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,400
	ctx.r3.s64 = 400;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x83324448;
	sub_8248B768(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83324494
	if (cr6.eq) goto loc_83324494;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83329710
	ctx.lr = 0x8332445C;
	sub_83329710(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-1392
	ctx.r8.s64 = ctx.r10.s64 + -1392;
	// stb r11,369(r31)
	PPC_STORE_U8(ctx.r31.u32 + 369, ctx.r11.u8);
	// stb r9,368(r31)
	PPC_STORE_U8(ctx.r31.u32 + 368, ctx.r9.u8);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stb r11,370(r31)
	PPC_STORE_U8(ctx.r31.u32 + 370, ctx.r11.u8);
	// bl 0x8241fb80
	ctx.lr = 0x83324480;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x8241fa28
	ctx.lr = 0x8332448C;
	sub_8241FA28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83324498
	goto loc_83324498;
loc_83324494:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83324498:
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

__attribute__((alias("__imp__sub_833244B0"))) PPC_WEAK_FUNC(sub_833244B0);
PPC_FUNC_IMPL(__imp__sub_833244B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x833244B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83323940
	ctx.lr = 0x833244C8;
	sub_83323940(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,160
	ctx.r3.s64 = 160;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x833244DC;
	sub_8248B768(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83324504
	if (cr6.eq) goto loc_83324504;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83327a88
	ctx.lr = 0x833244F0;
	sub_83327A88(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-1328
	ctx.r10.s64 = ctx.r11.s64 + -1328;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x83324508
	goto loc_83324508;
loc_83324504:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83324508:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// bl 0x8241f040
	ctx.lr = 0x83324518;
	sub_8241F040(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83324524"))) PPC_WEAK_FUNC(sub_83324524);
PPC_FUNC_IMPL(__imp__sub_83324524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83324528"))) PPC_WEAK_FUNC(sub_83324528);
PPC_FUNC_IMPL(__imp__sub_83324528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83324530;
	__savegprlr_29(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8334d548
	ctx.lr = 0x83324540;
	sub_8334D548(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833230d8
	ctx.lr = 0x8332454C;
	sub_833230D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x833245ec
	if (cr6.eq) goto loc_833245EC;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,17400
	ctx.r30.s64 = ctx.r11.s64 + 17400;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83323c20
	ctx.lr = 0x8332456C;
	sub_83323C20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x833245ec
	if (cr6.eq) goto loc_833245EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x8241a588
	ctx.lr = 0x83324598;
	sub_8241A588(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241e628
	ctx.lr = 0x833245A4;
	sub_8241E628(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824f09b0
	ctx.lr = 0x833245B4;
	sub_824F09B0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241d6c0
	ctx.lr = 0x833245BC;
	sub_8241D6C0(ctx, base);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8248f6b0
	ctx.lr = 0x833245E4;
	sub_8248F6B0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241d6c0
	ctx.lr = 0x833245EC;
	sub_8241D6C0(ctx, base);
loc_833245EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x833245F8;
	sub_8241F040(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83324600"))) PPC_WEAK_FUNC(sub_83324600);
PPC_FUNC_IMPL(__imp__sub_83324600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83324608;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x833246b4
	if (cr6.eq) goto loc_833246B4;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r29,r11,17416
	ctx.r29.s64 = ctx.r11.s64 + 17416;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83323c20
	ctx.lr = 0x83324634;
	sub_83323C20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x833246b4
	if (cr6.eq) goto loc_833246B4;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x8241a588
	ctx.lr = 0x83324660;
	sub_8241A588(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241e628
	ctx.lr = 0x8332466C;
	sub_8241E628(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824f09b0
	ctx.lr = 0x8332467C;
	sub_824F09B0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241d6c0
	ctx.lr = 0x83324684;
	sub_8241D6C0(ctx, base);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8248f6b0
	ctx.lr = 0x833246AC;
	sub_8248F6B0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241d6c0
	ctx.lr = 0x833246B4;
	sub_8241D6C0(ctx, base);
loc_833246B4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833246BC"))) PPC_WEAK_FUNC(sub_833246BC);
PPC_FUNC_IMPL(__imp__sub_833246BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833246C0"))) PPC_WEAK_FUNC(sub_833246C0);
PPC_FUNC_IMPL(__imp__sub_833246C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x833246C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8251b068
	ctx.lr = 0x833246D4;
	sub_8251B068(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83324788
	if (cr6.eq) goto loc_83324788;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8334d548
	ctx.lr = 0x833246E8;
	sub_8334D548(ctx, base);
	// addi r29,r31,376
	ctx.r29.s64 = ctx.r31.s64 + 376;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241fad0
	ctx.lr = 0x833246F4;
	sub_8241FAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83324788
	if (!cr6.eq) goto loc_83324788;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r6,370(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 370);
	// lbz r5,369(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 369);
	// lbz r4,368(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 368);
	// bl 0x83323398
	ctx.lr = 0x83324714;
	sub_83323398(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x83324728;
	sub_82572FA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// bl 0x8241f040
	ctx.lr = 0x8332473C;
	sub_8241F040(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83324600
	ctx.lr = 0x83324748;
	sub_83324600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x83324754;
	sub_8241F040(ctx, base);
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82572fa0
	ctx.lr = 0x83324764;
	sub_82572FA0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8332bcd8
	ctx.lr = 0x83324770;
	sub_8332BCD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x8332477C;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x83324788;
	sub_82572FA0(ctx, base);
loc_83324788:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83324790"))) PPC_WEAK_FUNC(sub_83324790);
PPC_FUNC_IMPL(__imp__sub_83324790) {
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
	// bl 0x8332a878
	ctx.lr = 0x833247A8;
	sub_8332A878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833246c0
	ctx.lr = 0x833247B0;
	sub_833246C0(ctx, base);
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

__attribute__((alias("__imp__sub_833247C4"))) PPC_WEAK_FUNC(sub_833247C4);
PPC_FUNC_IMPL(__imp__sub_833247C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833247C8"))) PPC_WEAK_FUNC(sub_833247C8);
PPC_FUNC_IMPL(__imp__sub_833247C8) {
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
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// lwz r11,17344(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17344);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8332482c
	if (!cr6.eq) goto loc_8332482C;
	// lis r8,-31747
	ctx.r8.s64 = -2080571392;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r10,r10,-1228
	ctx.r10.s64 = ctx.r10.s64 + -1228;
	// stw r11,17344(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17344, ctx.r11.u32);
	// lis r7,-31787
	ctx.r7.s64 = -2083192832;
	// stw r10,17340(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17340, ctx.r10.u32);
	// addi r31,r8,17340
	ctx.r31.s64 = ctx.r8.s64 + 17340;
	// addi r3,r7,27832
	ctx.r3.s64 = ctx.r7.s64 + 27832;
	// bl 0x831cdcc8
	ctx.lr = 0x83324814;
	sub_831CDCC8(ctx, base);
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
loc_8332482C:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,17340
	ctx.r3.s64 = ctx.r11.s64 + 17340;
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

__attribute__((alias("__imp__sub_83324848"))) PPC_WEAK_FUNC(sub_83324848);
PPC_FUNC_IMPL(__imp__sub_83324848) {
	PPC_FUNC_PROLOGUE();
	// b 0x83323b00
	sub_83323B00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8332484C"))) PPC_WEAK_FUNC(sub_8332484C);
PPC_FUNC_IMPL(__imp__sub_8332484C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83324850"))) PPC_WEAK_FUNC(sub_83324850);
PPC_FUNC_IMPL(__imp__sub_83324850) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// addi r10,r11,-1020
	ctx.r10.s64 = ctx.r11.s64 + -1020;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83308d20
	ctx.lr = 0x83324880;
	sub_83308D20(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r8,r9,-1684
	ctx.r8.s64 = ctx.r9.s64 + -1684;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x82573c50
	ctx.lr = 0x83324894;
	sub_82573C50(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x833248A0;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82467108
	ctx.lr = 0x833248A8;
	sub_82467108(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x833248c0
	if (cr6.eq) goto loc_833248C0;
	// bl 0x8248b818
	ctx.lr = 0x833248BC;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_833248C0:
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

__attribute__((alias("__imp__sub_833248D8"))) PPC_WEAK_FUNC(sub_833248D8);
PPC_FUNC_IMPL(__imp__sub_833248D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x833248E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83327890
	ctx.lr = 0x833248EC;
	sub_83327890(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,-1020
	ctx.r10.s64 = ctx.r11.s64 + -1020;
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r28,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r28.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f040
	ctx.lr = 0x83324910;
	sub_8241F040(ctx, base);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// bl 0x8241fb80
	ctx.lr = 0x83324918;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241fa28
	ctx.lr = 0x83324924;
	sub_8241FA28(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f040
	ctx.lr = 0x83324934;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x83324938;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241fa70
	ctx.lr = 0x83324944;
	sub_8241FA70(ctx, base);
	// stb r28,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r28.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83324954"))) PPC_WEAK_FUNC(sub_83324954);
PPC_FUNC_IMPL(__imp__sub_83324954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83324958"))) PPC_WEAK_FUNC(sub_83324958);
PPC_FUNC_IMPL(__imp__sub_83324958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83324960;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83327938
	ctx.lr = 0x8332496C;
	sub_83327938(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,-1020
	ctx.r10.s64 = ctx.r11.s64 + -1020;
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r28,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r28.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f040
	ctx.lr = 0x83324990;
	sub_8241F040(ctx, base);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// bl 0x8241fb80
	ctx.lr = 0x83324998;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241fa28
	ctx.lr = 0x833249A4;
	sub_8241FA28(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f040
	ctx.lr = 0x833249B4;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x833249B8;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241fa70
	ctx.lr = 0x833249C4;
	sub_8241FA70(ctx, base);
	// stb r28,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r28.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833249D4"))) PPC_WEAK_FUNC(sub_833249D4);
PPC_FUNC_IMPL(__imp__sub_833249D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833249D8"))) PPC_WEAK_FUNC(sub_833249D8);
PPC_FUNC_IMPL(__imp__sub_833249D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x833249E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83327988
	ctx.lr = 0x833249EC;
	sub_83327988(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,-996
	ctx.r10.s64 = ctx.r11.s64 + -996;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r28,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r28.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f040
	ctx.lr = 0x83324A10;
	sub_8241F040(ctx, base);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// bl 0x8241fb80
	ctx.lr = 0x83324A18;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241fa28
	ctx.lr = 0x83324A24;
	sub_8241FA28(ctx, base);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f040
	ctx.lr = 0x83324A34;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x83324A38;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241fa70
	ctx.lr = 0x83324A44;
	sub_8241FA70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83324A50"))) PPC_WEAK_FUNC(sub_83324A50);
PPC_FUNC_IMPL(__imp__sub_83324A50) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,-996
	ctx.r10.s64 = ctx.r11.s64 + -996;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83308d20
	ctx.lr = 0x83324A80;
	sub_83308D20(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-1660
	ctx.r8.s64 = ctx.r9.s64 + -1660;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8339d970
	ctx.lr = 0x83324A94;
	sub_8339D970(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83324aac
	if (cr6.eq) goto loc_83324AAC;
	// bl 0x8248b818
	ctx.lr = 0x83324AA8;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83324AAC:
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

__attribute__((alias("__imp__sub_83324AC4"))) PPC_WEAK_FUNC(sub_83324AC4);
PPC_FUNC_IMPL(__imp__sub_83324AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83324AC8"))) PPC_WEAK_FUNC(sub_83324AC8);
PPC_FUNC_IMPL(__imp__sub_83324AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83324AD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83324b7c
	if (cr6.eq) goto loc_83324B7C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82489ab8
	ctx.lr = 0x83324AFC;
	sub_82489AB8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248b9b8
	ctx.lr = 0x83324B10;
	sub_8248B9B8(ctx, base);
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,17448
	ctx.r4.s64 = ctx.r10.s64 + 17448;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82488a00
	ctx.lr = 0x83324B28;
	sub_82488A00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x8250fc50
	ctx.lr = 0x83324B44;
	sub_8250FC50(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x8253b068
	ctx.lr = 0x83324B54;
	sub_8253B068(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253aa70
	ctx.lr = 0x83324B64;
	sub_8253AA70(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824894c0
	ctx.lr = 0x83324B6C;
	sub_824894C0(ctx, base);
	// addic r8,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r8.s64 = ctx.r31.s64 + -1;
	// subfe r3,r8,r31
	temp.u8 = (~ctx.r8.u32 + ctx.r31.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r31.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83324B7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83324B88"))) PPC_WEAK_FUNC(sub_83324B88);
PPC_FUNC_IMPL(__imp__sub_83324B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83324B90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83327988
	ctx.lr = 0x83324B9C;
	sub_83327988(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,-980
	ctx.r10.s64 = ctx.r11.s64 + -980;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r28,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r28.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f040
	ctx.lr = 0x83324BC0;
	sub_8241F040(ctx, base);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// bl 0x8241fb80
	ctx.lr = 0x83324BC8;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241fa28
	ctx.lr = 0x83324BD4;
	sub_8241FA28(ctx, base);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f040
	ctx.lr = 0x83324BE4;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x83324BE8;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241fa70
	ctx.lr = 0x83324BF4;
	sub_8241FA70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83324C00"))) PPC_WEAK_FUNC(sub_83324C00);
PPC_FUNC_IMPL(__imp__sub_83324C00) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,-980
	ctx.r10.s64 = ctx.r11.s64 + -980;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83308d20
	ctx.lr = 0x83324C30;
	sub_83308D20(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-1660
	ctx.r8.s64 = ctx.r9.s64 + -1660;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8339d970
	ctx.lr = 0x83324C44;
	sub_8339D970(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83324c5c
	if (cr6.eq) goto loc_83324C5C;
	// bl 0x8248b818
	ctx.lr = 0x83324C58;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83324C5C:
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

__attribute__((alias("__imp__sub_83324C74"))) PPC_WEAK_FUNC(sub_83324C74);
PPC_FUNC_IMPL(__imp__sub_83324C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83324C78"))) PPC_WEAK_FUNC(sub_83324C78);
PPC_FUNC_IMPL(__imp__sub_83324C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83324C80;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83324d2c
	if (cr6.eq) goto loc_83324D2C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82489ab8
	ctx.lr = 0x83324CAC;
	sub_82489AB8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248b9b8
	ctx.lr = 0x83324CC0;
	sub_8248B9B8(ctx, base);
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,17368
	ctx.r4.s64 = ctx.r10.s64 + 17368;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82488a00
	ctx.lr = 0x83324CD8;
	sub_82488A00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x8250fc50
	ctx.lr = 0x83324CF4;
	sub_8250FC50(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x8253b068
	ctx.lr = 0x83324D04;
	sub_8253B068(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253aa70
	ctx.lr = 0x83324D14;
	sub_8253AA70(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824894c0
	ctx.lr = 0x83324D1C;
	sub_824894C0(ctx, base);
	// addic r8,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r8.s64 = ctx.r31.s64 + -1;
	// subfe r3,r8,r31
	temp.u8 = (~ctx.r8.u32 + ctx.r31.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r31.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83324D2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83324D38"))) PPC_WEAK_FUNC(sub_83324D38);
PPC_FUNC_IMPL(__imp__sub_83324D38) {
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
	// lis r5,5
	ctx.r5.s64 = 327680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8248b768
	ctx.lr = 0x83324D60;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83324d74
	if (cr6.eq) goto loc_83324D74;
	// bl 0x833249d8
	ctx.lr = 0x83324D6C;
	sub_833249D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83324d78
	goto loc_83324D78;
loc_83324D74:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83324D78:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x83324D88;
	sub_82572FA0(ctx, base);
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

__attribute__((alias("__imp__sub_83324DA0"))) PPC_WEAK_FUNC(sub_83324DA0);
PPC_FUNC_IMPL(__imp__sub_83324DA0) {
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
	// lis r5,5
	ctx.r5.s64 = 327680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8248b768
	ctx.lr = 0x83324DC8;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83324ddc
	if (cr6.eq) goto loc_83324DDC;
	// bl 0x83324b88
	ctx.lr = 0x83324DD4;
	sub_83324B88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83324de0
	goto loc_83324DE0;
loc_83324DDC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83324DE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x83324DF0;
	sub_82572FA0(ctx, base);
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

__attribute__((alias("__imp__sub_83324E08"))) PPC_WEAK_FUNC(sub_83324E08);
PPC_FUNC_IMPL(__imp__sub_83324E08) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83324e48
	if (cr6.lt) goto loc_83324E48;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x83308fb8
	ctx.lr = 0x83324E3C;
	sub_83308FB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83324e78
	if (cr6.eq) goto loc_83324E78;
loc_83324E48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83324e6c
	if (cr0.eq) goto loc_83324E6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// bl 0x8241f040
	ctx.lr = 0x83324E6C;
	sub_8241F040(ctx, base);
loc_83324E6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83324E78:
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

__attribute__((alias("__imp__sub_83324E94"))) PPC_WEAK_FUNC(sub_83324E94);
PPC_FUNC_IMPL(__imp__sub_83324E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83324E98"))) PPC_WEAK_FUNC(sub_83324E98);
PPC_FUNC_IMPL(__imp__sub_83324E98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83324ed0
	if (cr6.eq) goto loc_83324ED0;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83324EB4:
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// beq cr6,0x83324ed4
	if (cr6.eq) goto loc_83324ED4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83324eb4
	if (cr6.lt) goto loc_83324EB4;
loc_83324ED0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_83324ED4:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83324eec
	if (!cr6.eq) goto loc_83324EEC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_83324EEC:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83324EFC"))) PPC_WEAK_FUNC(sub_83324EFC);
PPC_FUNC_IMPL(__imp__sub_83324EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83324F00"))) PPC_WEAK_FUNC(sub_83324F00);
PPC_FUNC_IMPL(__imp__sub_83324F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83324F08;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x83324f54
	if (!cr6.lt) goto loc_83324F54;
	// rlwinm r29,r4,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
loc_83324F2C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8241f040
	ctx.lr = 0x83324F3C;
	sub_8241F040(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83324f2c
	if (cr6.lt) goto loc_83324F2C;
loc_83324F54:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x8241f040
	ctx.lr = 0x83324F74;
	sub_8241F040(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bgt cr6,0x83324fd8
	if (cr6.gt) goto loc_83324FD8;
	// rlwinm r4,r10,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x83324fd8
	if (!cr6.lt) goto loc_83324FD8;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r8,r10,-9828
	ctx.r8.s64 = ctx.r10.s64 + -9828;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b358
	ctx.lr = 0x83324FD8;
	sub_8247B358(ctx, base);
loc_83324FD8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83324FEC"))) PPC_WEAK_FUNC(sub_83324FEC);
PPC_FUNC_IMPL(__imp__sub_83324FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83324FF0"))) PPC_WEAK_FUNC(sub_83324FF0);
PPC_FUNC_IMPL(__imp__sub_83324FF0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83325044
	if (cr6.eq) goto loc_83325044;
	// bl 0x83323b00
	ctx.lr = 0x83325014;
	sub_83323B00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8332502C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8246be58
	ctx.lr = 0x83325034;
	sub_8246BE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83325048
	if (!cr6.eq) goto loc_83325048;
loc_83325044:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83325048:
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

__attribute__((alias("__imp__sub_83325060"))) PPC_WEAK_FUNC(sub_83325060);
PPC_FUNC_IMPL(__imp__sub_83325060) {
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
	// bl 0x83327bd8
	ctx.lr = 0x83325078;
	sub_83327BD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x8332508C;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x833250b0
	if (cr6.eq) goto loc_833250B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83324958
	ctx.lr = 0x8332509C;
	sub_83324958(ctx, base);
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
loc_833250B0:
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

__attribute__((alias("__imp__sub_833250C8"))) PPC_WEAK_FUNC(sub_833250C8);
PPC_FUNC_IMPL(__imp__sub_833250C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x833250D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8241a588
	ctx.lr = 0x833250FC;
	sub_8241A588(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8241e628
	ctx.lr = 0x83325108;
	sub_8241E628(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824f09b0
	ctx.lr = 0x83325118;
	sub_824F09B0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8241d6c0
	ctx.lr = 0x83325120;
	sub_8241D6C0(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x8241a588
	ctx.lr = 0x83325138;
	sub_8241A588(ctx, base);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8248f6b0
	ctx.lr = 0x83325150;
	sub_8248F6B0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subfc r10,r30,r11
	xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfze r11,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// bl 0x8241a5e0
	ctx.lr = 0x83325188;
	sub_8241A5E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241d6c0
	ctx.lr = 0x83325194;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241d6c0
	ctx.lr = 0x8332519C;
	sub_8241D6C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833251A8"))) PPC_WEAK_FUNC(sub_833251A8);
PPC_FUNC_IMPL(__imp__sub_833251A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x833251B0;
	__savegprlr_23(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,32(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x833251d4
	if (!cr6.eq) goto loc_833251D4;
loc_833251C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_833251D4:
	// lbz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8332531c
	if (cr6.eq) goto loc_8332531C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// beq cr6,0x833251c8
	if (cr6.eq) goto loc_833251C8;
	// addi r26,r27,16
	ctx.r26.s64 = ctx.r27.s64 + 16;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_83325200:
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// bl 0x8241f040
	ctx.lr = 0x83325214;
	sub_8241F040(ctx, base);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r10,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r10.u32);
	// bl 0x8241a588
	ctx.lr = 0x8332522C;
	sub_8241A588(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8241e628
	ctx.lr = 0x83325238;
	sub_8241E628(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824f09b0
	ctx.lr = 0x83325248;
	sub_824F09B0(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8241d6c0
	ctx.lr = 0x83325250;
	sub_8241D6C0(ctx, base);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x8241a588
	ctx.lr = 0x83325268;
	sub_8241A588(ctx, base);
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8248f6b0
	ctx.lr = 0x83325280;
	sub_8248F6B0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// subfc r10,r31,r11
	xer.ca = ctx.r11.u32 >= ctx.r31.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfze r11,r25
	temp.u8 = ~ctx.r25.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r25.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// bl 0x8241a5e0
	ctx.lr = 0x833252B4;
	sub_8241A5E0(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// beq cr6,0x833252f8
	if (cr6.eq) goto loc_833252F8;
	// bl 0x8241d6c0
	ctx.lr = 0x833252C8;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8241d6c0
	ctx.lr = 0x833252D0;
	sub_8241D6C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x833252DC;
	sub_8241F040(ctx, base);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r24,r29
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r29.u32, xer);
	// blt cr6,0x83325200
	if (cr6.lt) goto loc_83325200;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_833252F8:
	// bl 0x8241d6c0
	ctx.lr = 0x833252FC;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8241d6c0
	ctx.lr = 0x83325304;
	sub_8241D6C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x83325310;
	sub_8241F040(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8332531C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// beq cr6,0x83325420
	if (cr6.eq) goto loc_83325420;
	// addi r24,r27,16
	ctx.r24.s64 = ctx.r27.s64 + 16;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_83325338:
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// bl 0x8241f040
	ctx.lr = 0x8332534C;
	sub_8241F040(ctx, base);
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r10,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r10.u32);
	// bl 0x8241a588
	ctx.lr = 0x83325364;
	sub_8241A588(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8241e628
	ctx.lr = 0x83325370;
	sub_8241E628(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x824f09b0
	ctx.lr = 0x83325380;
	sub_824F09B0(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8241d6c0
	ctx.lr = 0x83325388;
	sub_8241D6C0(ctx, base);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// bl 0x8241a588
	ctx.lr = 0x833253A0;
	sub_8241A588(ctx, base);
	// addi r7,r1,400
	ctx.r7.s64 = ctx.r1.s64 + 400;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8248f6b0
	ctx.lr = 0x833253B8;
	sub_8248F6B0(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,216(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// subfc r10,r31,r11
	xer.ca = ctx.r11.u32 >= ctx.r31.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfze r11,r25
	temp.u8 = ~ctx.r25.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r25.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r4.u32);
	// bl 0x8241a5e0
	ctx.lr = 0x833253EC;
	sub_8241A5E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// or r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x8241d6c0
	ctx.lr = 0x83325400;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8241d6c0
	ctx.lr = 0x83325408;
	sub_8241D6C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x83325414;
	sub_8241F040(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// bne 0x83325338
	if (!cr0.eq) goto loc_83325338;
loc_83325420:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8332542C"))) PPC_WEAK_FUNC(sub_8332542C);
PPC_FUNC_IMPL(__imp__sub_8332542C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83325430"))) PPC_WEAK_FUNC(sub_83325430);
PPC_FUNC_IMPL(__imp__sub_83325430) {
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
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83324e98
	ctx.lr = 0x8332544C;
	sub_83324E98(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// beq cr6,0x83325474
	if (cr6.eq) goto loc_83325474;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r4,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 3;
	// bl 0x83324f00
	ctx.lr = 0x83325474;
	sub_83324F00(ctx, base);
loc_83325474:
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

__attribute__((alias("__imp__sub_83325488"))) PPC_WEAK_FUNC(sub_83325488);
PPC_FUNC_IMPL(__imp__sub_83325488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83325490;
	__savegprlr_28(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8241a588
	ctx.lr = 0x833254BC;
	sub_8241A588(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8241e628
	ctx.lr = 0x833254C8;
	sub_8241E628(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824f09b0
	ctx.lr = 0x833254D8;
	sub_824F09B0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8241d6c0
	ctx.lr = 0x833254E0;
	sub_8241D6C0(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x8241a588
	ctx.lr = 0x833254F8;
	sub_8241A588(ctx, base);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83325574
	if (cr6.eq) goto loc_83325574;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r5,r11,17368
	ctx.r5.s64 = ctx.r11.s64 + 17368;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8248f6b0
	ctx.lr = 0x8332551C;
	sub_8248F6B0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subfc r10,r31,r11
	xer.ca = ctx.r11.u32 >= ctx.r31.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfze r11,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// bl 0x8241a5e0
	ctx.lr = 0x83325554;
	sub_8241A5E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241d6c0
	ctx.lr = 0x83325560;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241d6c0
	ctx.lr = 0x83325568;
	sub_8241D6C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83325574:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241d6c0
	ctx.lr = 0x8332557C;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241d6c0
	ctx.lr = 0x83325584;
	sub_8241D6C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83325590"))) PPC_WEAK_FUNC(sub_83325590);
PPC_FUNC_IMPL(__imp__sub_83325590) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x833255cc
	if (cr6.eq) goto loc_833255CC;
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
loc_833255CC:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b918
	ctx.lr = 0x833255D8;
	sub_8241B918(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83323eb8
	ctx.lr = 0x833255E4;
	sub_83323EB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241fb00
	ctx.lr = 0x833255EC;
	sub_8241FB00(ctx, base);
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

__attribute__((alias("__imp__sub_83325604"))) PPC_WEAK_FUNC(sub_83325604);
PPC_FUNC_IMPL(__imp__sub_83325604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83325608"))) PPC_WEAK_FUNC(sub_83325608);
PPC_FUNC_IMPL(__imp__sub_83325608) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x833233f8
	ctx.lr = 0x83325620;
	sub_833233F8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-2420
	ctx.r30.s64 = ctx.r11.s64 + -2420;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x8332563C;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8246be10
	ctx.lr = 0x83325648;
	sub_8246BE10(ctx, base);
	// bl 0x8332b858
	ctx.lr = 0x8332564C;
	sub_8332B858(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x83325658;
	sub_8246BE18(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x8332566C;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83325688
	if (cr6.eq) goto loc_83325688;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-1152
	ctx.r9.s64 = ctx.r10.s64 + -1152;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x8332568c
	goto loc_8332568C;
loc_83325688:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8332568C:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be48
	ctx.lr = 0x8332569C;
	sub_8246BE48(ctx, base);
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c3a0
	ctx.lr = 0x833256A8;
	sub_8246C3A0(ctx, base);
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x833256B8;
	sub_8241F280(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x833256C0;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x833256e0
	if (cr6.eq) goto loc_833256E0;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x833256D8;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_833256E0:
	// addi r5,r30,-28
	ctx.r5.s64 = ctx.r30.s64 + -28;
	// li r6,320
	ctx.r6.s64 = 320;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824788c8
	ctx.lr = 0x833256F4;
	sub_824788C8(ctx, base);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15784
	ctx.r4.s64 = ctx.r11.s64 + 15784;
	// bl 0x8246be80
	ctx.lr = 0x83325704;
	sub_8246BE80(ctx, base);
	// bl 0x83323d28
	ctx.lr = 0x83325708;
	sub_83323D28(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r30,-16
	ctx.r6.s64 = ctx.r30.s64 + -16;
	// addi r5,r30,-12
	ctx.r5.s64 = ctx.r30.s64 + -12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82479460
	ctx.lr = 0x83325720;
	sub_82479460(ctx, base);
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

__attribute__((alias("__imp__sub_83325738"))) PPC_WEAK_FUNC(sub_83325738);
PPC_FUNC_IMPL(__imp__sub_83325738) {
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
	// bl 0x83324000
	ctx.lr = 0x83325750;
	sub_83324000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83805ff0
	ctx.lr = 0x83325758;
	sub_83805FF0(ctx, base);
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

__attribute__((alias("__imp__sub_8332576C"))) PPC_WEAK_FUNC(sub_8332576C);
PPC_FUNC_IMPL(__imp__sub_8332576C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83325770"))) PPC_WEAK_FUNC(sub_83325770);
PPC_FUNC_IMPL(__imp__sub_83325770) {
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
	// bl 0x8332bc68
	ctx.lr = 0x83325788;
	sub_8332BC68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83324000
	ctx.lr = 0x83325790;
	sub_83324000(ctx, base);
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

__attribute__((alias("__imp__sub_833257A4"))) PPC_WEAK_FUNC(sub_833257A4);
PPC_FUNC_IMPL(__imp__sub_833257A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833257A8"))) PPC_WEAK_FUNC(sub_833257A8);
PPC_FUNC_IMPL(__imp__sub_833257A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x833257B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x833230d8
	ctx.lr = 0x833257CC;
	sub_833230D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83325804
	if (cr6.eq) goto loc_83325804;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83323c20
	ctx.lr = 0x833257E4;
	sub_83323C20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83325804
	if (cr6.eq) goto loc_83325804;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83324e08
	ctx.lr = 0x833257FC;
	sub_83324E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x83325808
	goto loc_83325808;
loc_83325804:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83325808:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// bl 0x8241f040
	ctx.lr = 0x83325818;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x83325824;
	sub_8241F040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83325830"))) PPC_WEAK_FUNC(sub_83325830);
PPC_FUNC_IMPL(__imp__sub_83325830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83325838;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,0(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x833258c0
	if (cr6.eq) goto loc_833258C0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_83325860:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// bl 0x8241f040
	ctx.lr = 0x83325874;
	sub_8241F040(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x833258a4
	if (cr6.eq) goto loc_833258A4;
	// ld r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// ld r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83325898
	if (cr6.eq) goto loc_83325898;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83325898:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x833258dc
	if (!cr6.eq) goto loc_833258DC;
loc_833258A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x833258B0;
	sub_8241F040(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// blt cr6,0x83325860
	if (cr6.lt) goto loc_83325860;
loc_833258C0:
	// std r28,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r28.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x833258D0;
	sub_8241F040(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_833258DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83324f00
	ctx.lr = 0x833258E8;
	sub_83324F00(ctx, base);
	// std r28,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r28.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241f040
	ctx.lr = 0x833258F8;
	sub_8241F040(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x83325904;
	sub_8241F040(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83325910"))) PPC_WEAK_FUNC(sub_83325910);
PPC_FUNC_IMPL(__imp__sub_83325910) {
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
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,160
	ctx.r4.s64 = ctx.r3.s64 + 160;
	// addi r6,r11,17448
	ctx.r6.s64 = ctx.r11.s64 + 17448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833257a8
	ctx.lr = 0x8332593C;
	sub_833257A8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83325964
	if (cr6.eq) goto loc_83325964;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833242e8
	ctx.lr = 0x83325954;
	sub_833242E8(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x83324e08
	ctx.lr = 0x83325964;
	sub_83324E08(ctx, base);
loc_83325964:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x83325970;
	sub_8241F040(ctx, base);
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

__attribute__((alias("__imp__sub_83325984"))) PPC_WEAK_FUNC(sub_83325984);
PPC_FUNC_IMPL(__imp__sub_83325984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83325988"))) PPC_WEAK_FUNC(sub_83325988);
PPC_FUNC_IMPL(__imp__sub_83325988) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,160
	ctx.r4.s64 = ctx.r3.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83325830
	ctx.lr = 0x833259AC;
	sub_83325830(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x833259cc
	if (cr6.eq) goto loc_833259CC;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x833259cc
	if (cr6.eq) goto loc_833259CC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83325430
	ctx.lr = 0x833259CC;
	sub_83325430(ctx, base);
loc_833259CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x833259D8;
	sub_8241F040(ctx, base);
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

__attribute__((alias("__imp__sub_833259EC"))) PPC_WEAK_FUNC(sub_833259EC);
PPC_FUNC_IMPL(__imp__sub_833259EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833259F0"))) PPC_WEAK_FUNC(sub_833259F0);
PPC_FUNC_IMPL(__imp__sub_833259F0) {
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
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,176
	ctx.r4.s64 = ctx.r3.s64 + 176;
	// addi r6,r11,17368
	ctx.r6.s64 = ctx.r11.s64 + 17368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833257a8
	ctx.lr = 0x83325A1C;
	sub_833257A8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83325a44
	if (cr6.eq) goto loc_83325A44;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833242e8
	ctx.lr = 0x83325A34;
	sub_833242E8(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x83324e08
	ctx.lr = 0x83325A44;
	sub_83324E08(ctx, base);
loc_83325A44:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x83325A50;
	sub_8241F040(ctx, base);
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

__attribute__((alias("__imp__sub_83325A64"))) PPC_WEAK_FUNC(sub_83325A64);
PPC_FUNC_IMPL(__imp__sub_83325A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83325A68"))) PPC_WEAK_FUNC(sub_83325A68);
PPC_FUNC_IMPL(__imp__sub_83325A68) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,176
	ctx.r4.s64 = ctx.r3.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83325830
	ctx.lr = 0x83325A8C;
	sub_83325830(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83325aac
	if (cr6.eq) goto loc_83325AAC;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83325aac
	if (cr6.eq) goto loc_83325AAC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83325430
	ctx.lr = 0x83325AAC;
	sub_83325430(ctx, base);
loc_83325AAC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x83325AB8;
	sub_8241F040(ctx, base);
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

__attribute__((alias("__imp__sub_83325ACC"))) PPC_WEAK_FUNC(sub_83325ACC);
PPC_FUNC_IMPL(__imp__sub_83325ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83325AD0"))) PPC_WEAK_FUNC(sub_83325AD0);
PPC_FUNC_IMPL(__imp__sub_83325AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83325AD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8251b068
	ctx.lr = 0x83325AE4;
	sub_8251B068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83325cf4
	if (cr6.eq) goto loc_83325CF4;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// std r28,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r28.u64);
	// bl 0x8241f6d8
	ctx.lr = 0x83325B08;
	sub_8241F6D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82455920
	ctx.lr = 0x83325B14;
	sub_82455920(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82455968
	ctx.lr = 0x83325B20;
	sub_82455968(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824526c0
	ctx.lr = 0x83325B2C;
	sub_824526C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83325be4
	if (!cr6.eq) goto loc_83325BE4;
loc_83325B38:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824558e8
	ctx.lr = 0x83325B40;
	sub_824558E8(ctx, base);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83325B48:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83325b48
	if (!cr6.eq) goto loc_83325B48;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8241f0d0
	ctx.lr = 0x83325B6C;
	sub_8241F0D0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83325b98
	if (cr6.lt) goto loc_83325B98;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f6d8
	ctx.lr = 0x83325B88;
	sub_8241F6D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83325bbc
	if (cr6.eq) goto loc_83325BBC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_83325B98:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83325bb4
	if (cr0.eq) goto loc_83325BB4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8241f130
	ctx.lr = 0x83325BB0;
	sub_8241F130(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_83325BB4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_83325BBC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83325BC4;
	sub_82573C50(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82455900
	ctx.lr = 0x83325BCC;
	sub_82455900(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824526c0
	ctx.lr = 0x83325BD8;
	sub_824526C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83325b38
	if (cr6.eq) goto loc_83325B38;
loc_83325BE4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,104(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x83325c20
	if (cr6.eq) goto loc_83325C20;
loc_83325BFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x83325C04;
	sub_83102DB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824510b8
	ctx.lr = 0x83325C14;
	sub_824510B8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x83325bfc
	if (!cr6.eq) goto loc_83325BFC;
loc_83325C20:
	// lwz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83325c5c
	if (cr6.eq) goto loc_83325C5C;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83325C34:
	// lwz r11,168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83325c50
	if (cr6.eq) goto loc_83325C50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833242e8
	ctx.lr = 0x83325C50;
	sub_833242E8(ctx, base);
loc_83325C50:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x83325c34
	if (!cr0.eq) goto loc_83325C34;
loc_83325C5C:
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83325c98
	if (cr6.eq) goto loc_83325C98;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83325C70:
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83325c8c
	if (cr6.eq) goto loc_83325C8C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833242e8
	ctx.lr = 0x83325C8C;
	sub_833242E8(ctx, base);
loc_83325C8C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x83325c70
	if (!cr0.eq) goto loc_83325C70;
loc_83325C98:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r11,9080
	ctx.r9.s64 = ctx.r11.s64 + 9080;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r7,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8247b7d8
	ctx.lr = 0x83325CD8;
	sub_8247B7D8(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83325cf4
	if (cr6.eq) goto loc_83325CF4;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x83325CF4;
	sub_8247B268(ctx, base);
loc_83325CF4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83325CFC"))) PPC_WEAK_FUNC(sub_83325CFC);
PPC_FUNC_IMPL(__imp__sub_83325CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83325D00"))) PPC_WEAK_FUNC(sub_83325D00);
PPC_FUNC_IMPL(__imp__sub_83325D00) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83323848
	ctx.lr = 0x83325D18;
	sub_83323848(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-1840
	ctx.r30.s64 = ctx.r11.s64 + -1840;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,-200
	ctx.r4.s64 = ctx.r30.s64 + -200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x83325D34;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x83325D40;
	sub_8246BE10(ctx, base);
	// bl 0x83327c68
	ctx.lr = 0x83325D44;
	sub_83327C68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x83325D50;
	sub_8246BE18(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x83325D64;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83325d80
	if (cr6.eq) goto loc_83325D80;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-1036
	ctx.r9.s64 = ctx.r10.s64 + -1036;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x83325d84
	goto loc_83325D84;
loc_83325D80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83325D84:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be48
	ctx.lr = 0x83325D94;
	sub_8246BE48(ctx, base);
	// addi r4,r30,-172
	ctx.r4.s64 = ctx.r30.s64 + -172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c3a0
	ctx.lr = 0x83325DA0;
	sub_8246C3A0(ctx, base);
	// addi r4,r30,-164
	ctx.r4.s64 = ctx.r30.s64 + -164;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x83325DB0;
	sub_8241F280(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x83325DB8;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83325dd8
	if (cr6.eq) goto loc_83325DD8;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83325DD0;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_83325DD8:
	// addi r5,r30,-156
	ctx.r5.s64 = ctx.r30.s64 + -156;
	// li r6,368
	ctx.r6.s64 = 368;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824788c8
	ctx.lr = 0x83325DEC;
	sub_824788C8(ctx, base);
	// addi r5,r30,-144
	ctx.r5.s64 = ctx.r30.s64 + -144;
	// li r6,369
	ctx.r6.s64 = 369;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824788c8
	ctx.lr = 0x83325E00;
	sub_824788C8(ctx, base);
	// addi r5,r30,-132
	ctx.r5.s64 = ctx.r30.s64 + -132;
	// li r6,370
	ctx.r6.s64 = 370;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824788c8
	ctx.lr = 0x83325E14;
	sub_824788C8(ctx, base);
	// addi r5,r30,-120
	ctx.r5.s64 = ctx.r30.s64 + -120;
	// li r6,376
	ctx.r6.s64 = 376;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824788c8
	ctx.lr = 0x83325E28;
	sub_824788C8(ctx, base);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,17432
	ctx.r4.s64 = ctx.r11.s64 + 17432;
	// bl 0x8246be80
	ctx.lr = 0x83325E38;
	sub_8246BE80(ctx, base);
	// addi r6,r30,-104
	ctx.r6.s64 = ctx.r30.s64 + -104;
	// addi r5,r30,-100
	ctx.r5.s64 = ctx.r30.s64 + -100;
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82479460
	ctx.lr = 0x83325E50;
	sub_82479460(ctx, base);
	// addi r6,r30,-76
	ctx.r6.s64 = ctx.r30.s64 + -76;
	// addi r5,r30,-72
	ctx.r5.s64 = ctx.r30.s64 + -72;
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82479460
	ctx.lr = 0x83325E68;
	sub_82479460(ctx, base);
	// addi r6,r30,-48
	ctx.r6.s64 = ctx.r30.s64 + -48;
	// addi r5,r30,-44
	ctx.r5.s64 = ctx.r30.s64 + -44;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82479460
	ctx.lr = 0x83325E80;
	sub_82479460(ctx, base);
	// bl 0x83324398
	ctx.lr = 0x83325E84;
	sub_83324398(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r30,-20
	ctx.r6.s64 = ctx.r30.s64 + -20;
	// addi r5,r30,-16
	ctx.r5.s64 = ctx.r30.s64 + -16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82479460
	ctx.lr = 0x83325E9C;
	sub_82479460(ctx, base);
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

__attribute__((alias("__imp__sub_83325EB4"))) PPC_WEAK_FUNC(sub_83325EB4);
PPC_FUNC_IMPL(__imp__sub_83325EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83325EB8"))) PPC_WEAK_FUNC(sub_83325EB8);
PPC_FUNC_IMPL(__imp__sub_83325EB8) {
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
	// bl 0x8332a7f8
	ctx.lr = 0x83325ED0;
	sub_8332A7F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833246c0
	ctx.lr = 0x83325ED8;
	sub_833246C0(ctx, base);
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

__attribute__((alias("__imp__sub_83325EEC"))) PPC_WEAK_FUNC(sub_83325EEC);
PPC_FUNC_IMPL(__imp__sub_83325EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83325EF0"))) PPC_WEAK_FUNC(sub_83325EF0);
PPC_FUNC_IMPL(__imp__sub_83325EF0) {
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
	// bl 0x8332a8b0
	ctx.lr = 0x83325F08;
	sub_8332A8B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833246c0
	ctx.lr = 0x83325F10;
	sub_833246C0(ctx, base);
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

__attribute__((alias("__imp__sub_83325F24"))) PPC_WEAK_FUNC(sub_83325F24);
PPC_FUNC_IMPL(__imp__sub_83325F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83325F28"))) PPC_WEAK_FUNC(sub_83325F28);
PPC_FUNC_IMPL(__imp__sub_83325F28) {
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
	// bl 0x8332a8e8
	ctx.lr = 0x83325F40;
	sub_8332A8E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833246c0
	ctx.lr = 0x83325F48;
	sub_833246C0(ctx, base);
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

__attribute__((alias("__imp__sub_83325F5C"))) PPC_WEAK_FUNC(sub_83325F5C);
PPC_FUNC_IMPL(__imp__sub_83325F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83325F60"))) PPC_WEAK_FUNC(sub_83325F60);
PPC_FUNC_IMPL(__imp__sub_83325F60) {
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
	// bl 0x83327bd8
	ctx.lr = 0x83325F7C;
	sub_83327BD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x83325F90;
	sub_8248B768(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83325fa8
	if (cr6.eq) goto loc_83325FA8;
	// bl 0x833248d8
	ctx.lr = 0x83325FA0;
	sub_833248D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83325fac
	goto loc_83325FAC;
loc_83325FA8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83325FAC:
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x83325FB8;
	sub_8241F040(ctx, base);
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241f040
	ctx.lr = 0x83325FC8;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x83325FD4;
	sub_8241F040(ctx, base);
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

__attribute__((alias("__imp__sub_83325FF0"))) PPC_WEAK_FUNC(sub_83325FF0);
PPC_FUNC_IMPL(__imp__sub_83325FF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83325FF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// std r29,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r29.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8241f040
	ctx.lr = 0x83326018;
	sub_8241F040(ctx, base);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824201f0
	ctx.lr = 0x83326028;
	sub_824201F0(ctx, base);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241fad0
	ctx.lr = 0x83326034;
	sub_8241FAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x833260d8
	if (!cr6.eq) goto loc_833260D8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8246b3d0
	ctx.lr = 0x83326050;
	sub_8246B3D0(ctx, base);
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f040
	ctx.lr = 0x83326064;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x83326068;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241fa28
	ctx.lr = 0x83326074;
	sub_8241FA28(ctx, base);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83323038
	ctx.lr = 0x83326084;
	sub_83323038(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83308d20
	ctx.lr = 0x8332608C;
	sub_83308D20(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x833260d0
	if (cr6.eq) goto loc_833260D0;
	// bl 0x83323b90
	ctx.lr = 0x8332609C;
	sub_83323B90(ctx, base);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x833260AC;
	sub_8241F040(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8345bcc0
	ctx.lr = 0x833260BC;
	sub_8345BCC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x83323038
	ctx.lr = 0x833260C8;
	sub_83323038(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83308d20
	ctx.lr = 0x833260D0;
	sub_83308D20(ctx, base);
loc_833260D0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83308d20
	ctx.lr = 0x833260D8;
	sub_83308D20(ctx, base);
loc_833260D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833260E4"))) PPC_WEAK_FUNC(sub_833260E4);
PPC_FUNC_IMPL(__imp__sub_833260E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833260E8"))) PPC_WEAK_FUNC(sub_833260E8);
PPC_FUNC_IMPL(__imp__sub_833260E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x833260F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8246aa80
	ctx.lr = 0x83326100;
	sub_8246AA80(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r30,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241f040
	ctx.lr = 0x83326118;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x8332611C;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8241fa28
	ctx.lr = 0x83326128;
	sub_8241FA28(ctx, base);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83323038
	ctx.lr = 0x83326138;
	sub_83323038(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83308d20
	ctx.lr = 0x83326140;
	sub_83308D20(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x833261a4
	if (!cr6.eq) goto loc_833261A4;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f040
	ctx.lr = 0x8332615C;
	sub_8241F040(ctx, base);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// bl 0x8241fb80
	ctx.lr = 0x83326164;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241fa28
	ctx.lr = 0x83326170;
	sub_8241FA28(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f040
	ctx.lr = 0x83326180;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x83326184;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241fa70
	ctx.lr = 0x83326190;
	sub_8241FA70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83308d20
	ctx.lr = 0x83326198;
	sub_83308D20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_833261A4:
	// bl 0x83323b90
	ctx.lr = 0x833261A8;
	sub_83323B90(ctx, base);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x833261B8;
	sub_8241F040(ctx, base);
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f040
	ctx.lr = 0x833261C8;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x833261CC;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241fa28
	ctx.lr = 0x833261D8;
	sub_8241FA28(ctx, base);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83323038
	ctx.lr = 0x833261E8;
	sub_83323038(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x833261F4;
	sub_8241F040(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x83326248
	if (!cr6.eq) goto loc_83326248;
	// bl 0x8241f040
	ctx.lr = 0x83326210;
	sub_8241F040(ctx, base);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// bl 0x8241fb80
	ctx.lr = 0x83326218;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241fa28
	ctx.lr = 0x83326224;
	sub_8241FA28(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f040
	ctx.lr = 0x83326234;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x83326238;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241fa70
	ctx.lr = 0x83326244;
	sub_8241FA70(ctx, base);
	// b 0x8332626c
	goto loc_8332626C;
loc_83326248:
	// bl 0x8241f040
	ctx.lr = 0x8332624C;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x83326250;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8241fa28
	ctx.lr = 0x8332625C;
	sub_8241FA28(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83323038
	ctx.lr = 0x8332626C;
	sub_83323038(ctx, base);
loc_8332626C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83308d20
	ctx.lr = 0x83326274;
	sub_83308D20(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83308d20
	ctx.lr = 0x8332627C;
	sub_83308D20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83326288"))) PPC_WEAK_FUNC(sub_83326288);
PPC_FUNC_IMPL(__imp__sub_83326288) {
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
	// bl 0x8332b2c0
	ctx.lr = 0x833262A0;
	sub_8332B2C0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-964
	ctx.r9.s64 = ctx.r11.s64 + -964;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x8241f278
	ctx.lr = 0x833262B8;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241f130
	ctx.lr = 0x833262C4;
	sub_8241F130(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// bl 0x83308fb8
	ctx.lr = 0x833262E0;
	sub_83308FB8(ctx, base);
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

__attribute__((alias("__imp__sub_833262F8"))) PPC_WEAK_FUNC(sub_833262F8);
PPC_FUNC_IMPL(__imp__sub_833262F8) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r10,r11,-964
	ctx.r10.s64 = ctx.r11.s64 + -964;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83309358
	ctx.lr = 0x83326328;
	sub_83309358(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82573c50
	ctx.lr = 0x83326330;
	sub_82573C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8339d970
	ctx.lr = 0x83326338;
	sub_8339D970(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83326350
	if (cr6.eq) goto loc_83326350;
	// bl 0x8248b818
	ctx.lr = 0x8332634C;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83326350:
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

__attribute__((alias("__imp__sub_83326368"))) PPC_WEAK_FUNC(sub_83326368);
PPC_FUNC_IMPL(__imp__sub_83326368) {
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
	// lis r5,5
	ctx.r5.s64 = 327680;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8248b768
	ctx.lr = 0x83326388;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x833263a4
	if (cr6.eq) goto loc_833263A4;
	// bl 0x83326288
	ctx.lr = 0x83326394;
	sub_83326288(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_833263A4:
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

__attribute__((alias("__imp__sub_833263B8"))) PPC_WEAK_FUNC(sub_833263B8);
PPC_FUNC_IMPL(__imp__sub_833263B8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83ac23c8
	ctx.lr = 0x833263DC;
	sub_83AC23C8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x83326400
	if (!cr6.eq) goto loc_83326400;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83326400
	if (cr6.eq) goto loc_83326400;
loc_833263F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83325488
	ctx.lr = 0x833263FC;
	sub_83325488(ctx, base);
	// b 0x8332643c
	goto loc_8332643C;
loc_83326400:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ac23c8
	ctx.lr = 0x83326408;
	sub_83AC23C8(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bne cr6,0x8332641c
	if (!cr6.eq) goto loc_8332641C;
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x833263f0
	if (!cr6.eq) goto loc_833263F0;
loc_8332641C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ac23c8
	ctx.lr = 0x83326424;
	sub_83AC23C8(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x83326438
	if (!cr6.eq) goto loc_83326438;
	// lbz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x833263f0
	if (!cr6.eq) goto loc_833263F0;
loc_83326438:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8332643C:
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

__attribute__((alias("__imp__sub_83326454"))) PPC_WEAK_FUNC(sub_83326454);
PPC_FUNC_IMPL(__imp__sub_83326454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83326458"))) PPC_WEAK_FUNC(sub_83326458);
PPC_FUNC_IMPL(__imp__sub_83326458) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x833264e0
	if (cr6.eq) goto loc_833264E0;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83326498
	if (cr6.eq) goto loc_83326498;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8332652c
	goto loc_8332652C;
loc_83326498:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b918
	ctx.lr = 0x833264A0;
	sub_8241B918(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8241fad0
	ctx.lr = 0x833264AC;
	sub_8241FAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x833264d8
	if (!cr6.eq) goto loc_833264D8;
	// lwz r11,352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8241fa70
	ctx.lr = 0x833264CC;
	sub_8241FA70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83324218
	ctx.lr = 0x833264D8;
	sub_83324218(ctx, base);
loc_833264D8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x83326524
	goto loc_83326524;
loc_833264E0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241b918
	ctx.lr = 0x833264E8;
	sub_8241B918(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8241fad0
	ctx.lr = 0x833264F4;
	sub_8241FAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83326520
	if (!cr6.eq) goto loc_83326520;
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8241fa70
	ctx.lr = 0x83326514;
	sub_8241FA70(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83324218
	ctx.lr = 0x83326520;
	sub_83324218(ctx, base);
loc_83326520:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_83326524:
	// bl 0x8241fb00
	ctx.lr = 0x83326528;
	sub_8241FB00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8332652C:
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

__attribute__((alias("__imp__sub_83326544"))) PPC_WEAK_FUNC(sub_83326544);
PPC_FUNC_IMPL(__imp__sub_83326544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83326548"))) PPC_WEAK_FUNC(sub_83326548);
PPC_FUNC_IMPL(__imp__sub_83326548) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lhz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8332658c
	if (cr6.eq) goto loc_8332658C;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83326584
	if (cr6.eq) goto loc_83326584;
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
loc_83326584:
	// addi r3,r10,344
	ctx.r3.s64 = ctx.r10.s64 + 344;
	// b 0x83326590
	goto loc_83326590;
loc_8332658C:
	// addi r3,r10,328
	ctx.r3.s64 = ctx.r10.s64 + 328;
loc_83326590:
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x8245cbe0
	ctx.lr = 0x83326598;
	sub_8245CBE0(ctx, base);
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

__attribute__((alias("__imp__sub_833265AC"))) PPC_WEAK_FUNC(sub_833265AC);
PPC_FUNC_IMPL(__imp__sub_833265AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833265B0"))) PPC_WEAK_FUNC(sub_833265B0);
PPC_FUNC_IMPL(__imp__sub_833265B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83323648
	sub_83323648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833265B4"))) PPC_WEAK_FUNC(sub_833265B4);
PPC_FUNC_IMPL(__imp__sub_833265B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833265B8"))) PPC_WEAK_FUNC(sub_833265B8);
PPC_FUNC_IMPL(__imp__sub_833265B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x833265C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8332b618
	ctx.lr = 0x833265CC;
	sub_8332B618(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-952
	ctx.r9.s64 = ctx.r11.s64 + -952;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r10,320(r31)
	PPC_STORE_U8(ctx.r31.u32 + 320, ctx.r10.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r29,r31,328
	ctx.r29.s64 = ctx.r31.s64 + 328;
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r30,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r30.u64);
	// bl 0x82427200
	ctx.lr = 0x83326600;
	sub_82427200(ctx, base);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// addi r28,r31,344
	ctx.r28.s64 = ctx.r31.s64 + 344;
	// std r30,352(r31)
	PPC_STORE_U64(ctx.r31.u32 + 352, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82427200
	ctx.lr = 0x8332661C;
	sub_82427200(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x83326620;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82437c50
	ctx.lr = 0x8332662C;
	sub_82437C50(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x83326630;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82437c50
	ctx.lr = 0x8332663C;
	sub_82437C50(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x83326640;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82437c50
	ctx.lr = 0x8332664C;
	sub_82437C50(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x83326650;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82437c50
	ctx.lr = 0x8332665C;
	sub_82437C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83326668"))) PPC_WEAK_FUNC(sub_83326668);
PPC_FUNC_IMPL(__imp__sub_83326668) {
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
	// bl 0x8332bae0
	ctx.lr = 0x83326684;
	sub_8332BAE0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-888
	ctx.r10.s64 = ctx.r11.s64 + -888;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// std r30,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r30.u64);
	// bl 0x83308fb8
	ctx.lr = 0x833266AC;
	sub_83308FB8(ctx, base);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// std r30,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83308fb8
	ctx.lr = 0x833266C4;
	sub_83308FB8(ctx, base);
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

__attribute__((alias("__imp__sub_833266E0"))) PPC_WEAK_FUNC(sub_833266E0);
PPC_FUNC_IMPL(__imp__sub_833266E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x833236d8
	sub_833236D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833266E4"))) PPC_WEAK_FUNC(sub_833266E4);
PPC_FUNC_IMPL(__imp__sub_833266E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833266E8"))) PPC_WEAK_FUNC(sub_833266E8);
PPC_FUNC_IMPL(__imp__sub_833266E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x833266F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8332bbd0
	ctx.lr = 0x83326700;
	sub_8332BBD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8251b068
	ctx.lr = 0x8332670C;
	sub_8251B068(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// bne cr6,0x833268f0
	if (!cr6.eq) goto loc_833268F0;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,17464
	ctx.r4.s64 = ctx.r11.s64 + 17464;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82573280
	ctx.lr = 0x83326728;
	sub_82573280(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x833267e4
	if (cr6.eq) goto loc_833267E4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8332677c
	if (cr6.eq) goto loc_8332677C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x833267e4
	if (!cr6.eq) goto loc_833267E4;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241e9b0
	ctx.lr = 0x83326754;
	sub_8241E9B0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241b918
	ctx.lr = 0x83326760;
	sub_8241B918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83325988
	ctx.lr = 0x8332676C;
	sub_83325988(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241fb00
	ctx.lr = 0x83326774;
	sub_8241FB00(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x833267e0
	goto loc_833267E0;
loc_8332677C:
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241e9b0
	ctx.lr = 0x83326788;
	sub_8241E9B0(ctx, base);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241e9b0
	ctx.lr = 0x83326794;
	sub_8241E9B0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241b918
	ctx.lr = 0x833267A0;
	sub_8241B918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83325988
	ctx.lr = 0x833267AC;
	sub_83325988(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241fb00
	ctx.lr = 0x833267B4;
	sub_8241FB00(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b918
	ctx.lr = 0x833267C0;
	sub_8241B918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83325910
	ctx.lr = 0x833267CC;
	sub_83325910(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241fb00
	ctx.lr = 0x833267D4;
	sub_8241FB00(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241d6c0
	ctx.lr = 0x833267DC;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
loc_833267E0:
	// bl 0x8241d6c0
	ctx.lr = 0x833267E4;
	sub_8241D6C0(ctx, base);
loc_833267E4:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,17432
	ctx.r4.s64 = ctx.r11.s64 + 17432;
	// bl 0x82573280
	ctx.lr = 0x833267F4;
	sub_82573280(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x833268b0
	if (cr6.eq) goto loc_833268B0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83326848
	if (cr6.eq) goto loc_83326848;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x833268b0
	if (!cr6.eq) goto loc_833268B0;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241e9b0
	ctx.lr = 0x83326820;
	sub_8241E9B0(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b918
	ctx.lr = 0x8332682C;
	sub_8241B918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83325a68
	ctx.lr = 0x83326838;
	sub_83325A68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241fb00
	ctx.lr = 0x83326840;
	sub_8241FB00(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// b 0x833268ac
	goto loc_833268AC;
loc_83326848:
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241e9b0
	ctx.lr = 0x83326854;
	sub_8241E9B0(ctx, base);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241e9b0
	ctx.lr = 0x83326860;
	sub_8241E9B0(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241b918
	ctx.lr = 0x8332686C;
	sub_8241B918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83325a68
	ctx.lr = 0x83326878;
	sub_83325A68(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241fb00
	ctx.lr = 0x83326880;
	sub_8241FB00(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241b918
	ctx.lr = 0x8332688C;
	sub_8241B918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833259f0
	ctx.lr = 0x83326898;
	sub_833259F0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241fb00
	ctx.lr = 0x833268A0;
	sub_8241FB00(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8241d6c0
	ctx.lr = 0x833268A8;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_833268AC:
	// bl 0x8241d6c0
	ctx.lr = 0x833268B0;
	sub_8241D6C0(ctx, base);
loc_833268B0:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,17352
	ctx.r4.s64 = ctx.r11.s64 + 17352;
	// bl 0x82573280
	ctx.lr = 0x833268C0;
	sub_82573280(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x833268f0
	if (cr6.eq) goto loc_833268F0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8241a5e0
	ctx.lr = 0x833268D4;
	sub_8241A5E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bne cr6,0x833268ec
	if (!cr6.eq) goto loc_833268EC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_833268EC:
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
loc_833268F0:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_833268F8"))) PPC_WEAK_FUNC(sub_833268F8);
PPC_FUNC_IMPL(__imp__sub_833268F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83326900;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8251b068
	ctx.lr = 0x8332690C;
	sub_8251B068(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83326b70
	if (cr6.eq) goto loc_83326B70;
	// lwz r11,136(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x833269f8
	if (!cr6.eq) goto loc_833269F8;
	// bl 0x83326368
	ctx.lr = 0x8332692C;
	sub_83326368(ctx, base);
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x8332693C;
	sub_82572FA0(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// addi r4,r11,17448
	ctx.r4.s64 = ctx.r11.s64 + 17448;
	// bl 0x82573d70
	ctx.lr = 0x83326950;
	sub_82573D70(ctx, base);
	// lbz r9,320(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 320);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8332696c
	if (cr6.eq) goto loc_8332696C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// b 0x83326970
	goto loc_83326970;
loc_8332696C:
	// stb r28,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r28.u8);
loc_83326970:
	// std r28,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r28.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82572fa0
	ctx.lr = 0x83326980;
	sub_82572FA0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8332bcc8
	ctx.lr = 0x8332698C;
	sub_8332BCC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x83326998;
	sub_82572FA0(ctx, base);
	// addi r3,r26,160
	ctx.r3.s64 = ctx.r26.s64 + 160;
	// bl 0x83309358
	ctx.lr = 0x833269A0;
	sub_83309358(ctx, base);
	// lwz r11,328(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 328);
	// addi r29,r25,328
	ctx.r29.s64 = ctx.r25.s64 + 328;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x833269ec
	if (cr6.eq) goto loc_833269EC;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_833269B8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241fad0
	ctx.lr = 0x833269C8;
	sub_8241FAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x833269e0
	if (!cr6.eq) goto loc_833269E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83325910
	ctx.lr = 0x833269E0;
	sub_83325910(ctx, base);
loc_833269E0:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x833269b8
	if (!cr0.eq) goto loc_833269B8;
loc_833269EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x833269F8;
	sub_82572FA0(ctx, base);
loc_833269F8:
	// lwz r11,144(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83326b70
	if (!cr6.eq) goto loc_83326B70;
	// lis r5,5
	ctx.r5.s64 = 327680;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8248b768
	ctx.lr = 0x83326A18;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83326a2c
	if (cr6.eq) goto loc_83326A2C;
	// bl 0x83326288
	ctx.lr = 0x83326A24;
	sub_83326288(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83326a30
	goto loc_83326A30;
loc_83326A2C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_83326A30:
	// std r28,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r28.u64);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82572fa0
	ctx.lr = 0x83326A3C;
	sub_82572FA0(ctx, base);
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r24,r11,17368
	ctx.r24.s64 = ctx.r11.s64 + 17368;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82573d70
	ctx.lr = 0x83326A54;
	sub_82573D70(ctx, base);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stb r28,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r28.u8);
	// std r28,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r28.u64);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82572fa0
	ctx.lr = 0x83326A6C;
	sub_82572FA0(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8332bcd8
	ctx.lr = 0x83326A78;
	sub_8332BCD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82572fa0
	ctx.lr = 0x83326A84;
	sub_82572FA0(ctx, base);
	// addi r27,r26,176
	ctx.r27.s64 = ctx.r26.s64 + 176;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83309358
	ctx.lr = 0x83326A90;
	sub_83309358(ctx, base);
	// lwz r11,344(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 344);
	// addi r29,r25,344
	ctx.r29.s64 = ctx.r25.s64 + 344;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83326b64
	if (cr6.eq) goto loc_83326B64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_83326AA8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241fad0
	ctx.lr = 0x83326AB8;
	sub_8241FAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83326b58
	if (!cr6.eq) goto loc_83326B58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x833230d8
	ctx.lr = 0x83326AD0;
	sub_833230D8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83326b08
	if (cr6.eq) goto loc_83326B08;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83323c20
	ctx.lr = 0x83326AE8;
	sub_83323C20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83326b08
	if (cr6.eq) goto loc_83326B08;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83324e08
	ctx.lr = 0x83326B00;
	sub_83324E08(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x83326b0c
	goto loc_83326B0C;
loc_83326B08:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83326B0C:
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x83326B18;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f040
	ctx.lr = 0x83326B24;
	sub_8241F040(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83326b4c
	if (cr6.eq) goto loc_83326B4C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x833242e8
	ctx.lr = 0x83326B3C;
	sub_833242E8(ctx, base);
	// lwz r11,144(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 144);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x83324e08
	ctx.lr = 0x83326B4C;
	sub_83324E08(ctx, base);
loc_83326B4C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x83326B58;
	sub_8241F040(ctx, base);
loc_83326B58:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x83326aa8
	if (!cr0.eq) goto loc_83326AA8;
loc_83326B64:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82572fa0
	ctx.lr = 0x83326B70;
	sub_82572FA0(ctx, base);
loc_83326B70:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83326B78"))) PPC_WEAK_FUNC(sub_83326B78);
PPC_FUNC_IMPL(__imp__sub_83326B78) {
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
	// bl 0x8332bc68
	ctx.lr = 0x83326B90;
	sub_8332BC68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833268f8
	ctx.lr = 0x83326B98;
	sub_833268F8(ctx, base);
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

__attribute__((alias("__imp__sub_83326BAC"))) PPC_WEAK_FUNC(sub_83326BAC);
PPC_FUNC_IMPL(__imp__sub_83326BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83326BB0"))) PPC_WEAK_FUNC(sub_83326BB0);
PPC_FUNC_IMPL(__imp__sub_83326BB0) {
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
	// bl 0x8332b7d8
	ctx.lr = 0x83326BC8;
	sub_8332B7D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83325ad0
	ctx.lr = 0x83326BD0;
	sub_83325AD0(ctx, base);
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

__attribute__((alias("__imp__sub_83326BE4"))) PPC_WEAK_FUNC(sub_83326BE4);
PPC_FUNC_IMPL(__imp__sub_83326BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83326BE8"))) PPC_WEAK_FUNC(sub_83326BE8);
PPC_FUNC_IMPL(__imp__sub_83326BE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83325ad0
	sub_83325AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83326BEC"))) PPC_WEAK_FUNC(sub_83326BEC);
PPC_FUNC_IMPL(__imp__sub_83326BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83326BF0"))) PPC_WEAK_FUNC(sub_83326BF0);
PPC_FUNC_IMPL(__imp__sub_83326BF0) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x83326c2c
	if (cr6.eq) goto loc_83326C2C;
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
loc_83326C2C:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241b918
	ctx.lr = 0x83326C38;
	sub_8241B918(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241fad0
	ctx.lr = 0x83326C40;
	sub_8241FAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83326c64
	if (!cr6.eq) goto loc_83326C64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x8241fa70
	ctx.lr = 0x83326C58;
	sub_8241FA70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83324528
	ctx.lr = 0x83326C64;
	sub_83324528(ctx, base);
loc_83326C64:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241fb00
	ctx.lr = 0x83326C6C;
	sub_8241FB00(ctx, base);
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

__attribute__((alias("__imp__sub_83326C84"))) PPC_WEAK_FUNC(sub_83326C84);
PPC_FUNC_IMPL(__imp__sub_83326C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83326C88"))) PPC_WEAK_FUNC(sub_83326C88);
PPC_FUNC_IMPL(__imp__sub_83326C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83326C90;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x833278e0
	ctx.lr = 0x83326CA0;
	sub_833278E0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// addi r10,r11,-1020
	ctx.r10.s64 = ctx.r11.s64 + -1020;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83325ff0
	ctx.lr = 0x83326CC0;
	sub_83325FF0(ctx, base);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83326d1c
	if (!cr6.eq) goto loc_83326D1C;
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241fad0
	ctx.lr = 0x83326CD8;
	sub_8241FAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83326d1c
	if (!cr6.eq) goto loc_83326D1C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x833260e8
	ctx.lr = 0x83326CF0;
	sub_833260E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83323038
	ctx.lr = 0x83326D00;
	sub_83323038(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83308d20
	ctx.lr = 0x83326D08;
	sub_83308D20(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83326d1c
	if (cr6.eq) goto loc_83326D1C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82468e10
	ctx.lr = 0x83326D1C;
	sub_82468E10(ctx, base);
loc_83326D1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83326D28"))) PPC_WEAK_FUNC(sub_83326D28);
PPC_FUNC_IMPL(__imp__sub_83326D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83326D30;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x83324ff0
	ctx.lr = 0x83326D44;
	sub_83324FF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83326ec4
	if (cr6.eq) goto loc_83326EC4;
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83326db8
	if (!cr6.eq) goto loc_83326DB8;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r30,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r30.u64);
	// bl 0x8241f040
	ctx.lr = 0x83326D6C;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x83326D70;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8241fa28
	ctx.lr = 0x83326D7C;
	sub_8241FA28(ctx, base);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241f040
	ctx.lr = 0x83326D8C;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x83326D90;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8241fa70
	ctx.lr = 0x83326D9C;
	sub_8241FA70(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x83323038
	ctx.lr = 0x83326DA8;
	sub_83323038(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83308d20
	ctx.lr = 0x83326DB0;
	sub_83308D20(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83326DB8:
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83323038
	ctx.lr = 0x83326DC4;
	sub_83323038(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8241fad0
	ctx.lr = 0x83326DCC;
	sub_8241FAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83326ec4
	if (!cr6.eq) goto loc_83326EC4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83326ec4
	if (cr6.eq) goto loc_83326EC4;
	// lbz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83326e64
	if (!cr6.eq) goto loc_83326E64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82489ab8
	ctx.lr = 0x83326E04;
	sub_82489AB8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8251b068
	ctx.lr = 0x83326E14;
	sub_8251B068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248b9b8
	ctx.lr = 0x83326E20;
	sub_8248B9B8(ctx, base);
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,17400
	ctx.r4.s64 = ctx.r10.s64 + 17400;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82488a00
	ctx.lr = 0x83326E38;
	sub_82488A00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8250fc50
	ctx.lr = 0x83326E54;
	sub_8250FC50(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r9,88(r29)
	PPC_STORE_U8(ctx.r29.u32 + 88, ctx.r9.u8);
	// bl 0x824894c0
	ctx.lr = 0x83326E64;
	sub_824894C0(ctx, base);
loc_83326E64:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82489ab8
	ctx.lr = 0x83326E78;
	sub_82489AB8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8248b9b8
	ctx.lr = 0x83326E88;
	sub_8248B9B8(ctx, base);
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,17416
	ctx.r4.s64 = ctx.r10.s64 + 17416;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82488a00
	ctx.lr = 0x83326EA0;
	sub_82488A00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8250fc50
	ctx.lr = 0x83326EBC;
	sub_8250FC50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824894c0
	ctx.lr = 0x83326EC4;
	sub_824894C0(ctx, base);
loc_83326EC4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83326ECC"))) PPC_WEAK_FUNC(sub_83326ECC);
PPC_FUNC_IMPL(__imp__sub_83326ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83326ED0"))) PPC_WEAK_FUNC(sub_83326ED0);
PPC_FUNC_IMPL(__imp__sub_83326ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83326ED8;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x83324ff0
	ctx.lr = 0x83326EEC;
	sub_83324FF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83327124
	if (cr6.eq) goto loc_83327124;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83323038
	ctx.lr = 0x83326F08;
	sub_83323038(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8241fad0
	ctx.lr = 0x83326F10;
	sub_8241FAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83327124
	if (!cr6.eq) goto loc_83327124;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83327044
	if (!cr6.eq) goto loc_83327044;
	// bl 0x8241f278
	ctx.lr = 0x83326F2C;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241f130
	ctx.lr = 0x83326F38;
	sub_8241F130(ctx, base);
	// bl 0x8241f278
	ctx.lr = 0x83326F3C;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241f130
	ctx.lr = 0x83326F48;
	sub_8241F130(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8251b068
	ctx.lr = 0x83326F50;
	sub_8251B068(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8248a2f0
	ctx.lr = 0x83326F60;
	sub_8248A2F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,252(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	// bl 0x8241f040
	ctx.lr = 0x83326F78;
	sub_8241F040(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83326fac
	if (cr6.eq) goto loc_83326FAC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8248a2f0
	ctx.lr = 0x83326F8C;
	sub_8248A2F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,252(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x82573d70
	ctx.lr = 0x83326FA4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x83327024
	goto loc_83327024;
loc_83326FAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b2a90
	ctx.lr = 0x83326FB4;
	sub_824B2A90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8332702c
	if (cr6.eq) goto loc_8332702C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b2a90
	ctx.lr = 0x83326FC4;
	sub_824B2A90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82420380
	ctx.lr = 0x83326FD4;
	sub_82420380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573d70
	ctx.lr = 0x83326FE0;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83326FE8;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8248a2f0
	ctx.lr = 0x83326FF4;
	sub_8248A2F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82420380
	ctx.lr = 0x8332700C;
	sub_82420380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573d70
	ctx.lr = 0x83327018;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83327020;
	sub_82573C50(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
loc_83327024:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x8332702C;
	sub_8241F040(ctx, base);
loc_8332702C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83327034;
	sub_82573C50(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x8332703C;
	sub_82573C50(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83327044:
	// lbz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x833270c4
	if (!cr6.eq) goto loc_833270C4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82489ab8
	ctx.lr = 0x83327064;
	sub_82489AB8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8251b068
	ctx.lr = 0x83327074;
	sub_8251B068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248b9b8
	ctx.lr = 0x83327080;
	sub_8248B9B8(ctx, base);
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r10,17400
	ctx.r4.s64 = ctx.r10.s64 + 17400;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82488a00
	ctx.lr = 0x83327098;
	sub_82488A00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8250fc50
	ctx.lr = 0x833270B4;
	sub_8250FC50(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r9,88(r30)
	PPC_STORE_U8(ctx.r30.u32 + 88, ctx.r9.u8);
	// bl 0x824894c0
	ctx.lr = 0x833270C4;
	sub_824894C0(ctx, base);
loc_833270C4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82489ab8
	ctx.lr = 0x833270D8;
	sub_82489AB8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8248b9b8
	ctx.lr = 0x833270E8;
	sub_8248B9B8(ctx, base);
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r10,17416
	ctx.r4.s64 = ctx.r10.s64 + 17416;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82488a00
	ctx.lr = 0x83327100;
	sub_82488A00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8250fc50
	ctx.lr = 0x8332711C;
	sub_8250FC50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824894c0
	ctx.lr = 0x83327124;
	sub_824894C0(ctx, base);
loc_83327124:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8332712C"))) PPC_WEAK_FUNC(sub_8332712C);
PPC_FUNC_IMPL(__imp__sub_8332712C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83327130"))) PPC_WEAK_FUNC(sub_83327130);
PPC_FUNC_IMPL(__imp__sub_83327130) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8332718c
	if (cr6.eq) goto loc_8332718C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8332b5c0
	ctx.lr = 0x83327160;
	sub_8332B5C0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,-952
	ctx.r10.s64 = ctx.r11.s64 + -952;
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x824b7320
	ctx.lr = 0x83327178;
	sub_824B7320(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// bl 0x824b7320
	ctx.lr = 0x83327184;
	sub_824B7320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83327190
	goto loc_83327190;
loc_8332718C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83327190:
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

__attribute__((alias("__imp__sub_833271A8"))) PPC_WEAK_FUNC(sub_833271A8);
PPC_FUNC_IMPL(__imp__sub_833271A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x833271bc
	if (cr6.eq) goto loc_833271BC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x83326c88
	sub_83326C88(ctx, base);
	return;
loc_833271BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833271C4"))) PPC_WEAK_FUNC(sub_833271C4);
PPC_FUNC_IMPL(__imp__sub_833271C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833271C8"))) PPC_WEAK_FUNC(sub_833271C8);
PPC_FUNC_IMPL(__imp__sub_833271C8) {
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
	// bl 0x83323648
	ctx.lr = 0x833271E0;
	sub_83323648(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,368
	ctx.r3.s64 = 368;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x833271F4;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83327218
	if (cr6.eq) goto loc_83327218;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x833265b8
	ctx.lr = 0x83327204;
	sub_833265B8(ctx, base);
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
loc_83327218:
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

__attribute__((alias("__imp__sub_83327230"))) PPC_WEAK_FUNC(sub_83327230);
PPC_FUNC_IMPL(__imp__sub_83327230) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x833236d8
	ctx.lr = 0x83327250;
	sub_833236D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,192
	ctx.r3.s64 = 192;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x83327264;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8332727c
	if (cr6.eq) goto loc_8332727C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83326668
	ctx.lr = 0x83327274;
	sub_83326668(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83327280
	goto loc_83327280;
loc_8332727C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83327280:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// bl 0x8241f040
	ctx.lr = 0x83327290;
	sub_8241F040(ctx, base);
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

__attribute__((alias("__imp__sub_833272AC"))) PPC_WEAK_FUNC(sub_833272AC);
PPC_FUNC_IMPL(__imp__sub_833272AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833272B0"))) PPC_WEAK_FUNC(sub_833272B0);
PPC_FUNC_IMPL(__imp__sub_833272B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x833272B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r30,r3,328
	ctx.r30.s64 = ctx.r3.s64 + 328;
	// addi r10,r11,-952
	ctx.r10.s64 = ctx.r11.s64 + -952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82427180
	ctx.lr = 0x833272DC;
	sub_82427180(ctx, base);
	// addi r29,r31,344
	ctx.r29.s64 = ctx.r31.s64 + 344;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82427180
	ctx.lr = 0x833272E8;
	sub_82427180(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82427180
	ctx.lr = 0x833272F0;
	sub_82427180(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82427180
	ctx.lr = 0x833272F8;
	sub_82427180(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8332b678
	ctx.lr = 0x83327300;
	sub_8332B678(ctx, base);
	// clrlwi r9,r28,31
	ctx.r9.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83327318
	if (cr6.eq) goto loc_83327318;
	// bl 0x8248b818
	ctx.lr = 0x83327314;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83327318:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83327320"))) PPC_WEAK_FUNC(sub_83327320);
PPC_FUNC_IMPL(__imp__sub_83327320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83327328;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r30,r3,160
	ctx.r30.s64 = ctx.r3.s64 + 160;
	// addi r10,r11,-888
	ctx.r10.s64 = ctx.r11.s64 + -888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x83309358
	ctx.lr = 0x8332734C;
	sub_83309358(ctx, base);
	// addi r29,r31,176
	ctx.r29.s64 = ctx.r31.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83309358
	ctx.lr = 0x83327358;
	sub_83309358(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83309358
	ctx.lr = 0x83327360;
	sub_83309358(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83309358
	ctx.lr = 0x83327368;
	sub_83309358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8332bb60
	ctx.lr = 0x83327370;
	sub_8332BB60(ctx, base);
	// clrlwi r9,r28,31
	ctx.r9.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83327388
	if (cr6.eq) goto loc_83327388;
	// bl 0x8248b818
	ctx.lr = 0x83327384;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83327388:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83327390"))) PPC_WEAK_FUNC(sub_83327390);
PPC_FUNC_IMPL(__imp__sub_83327390) {
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
	// bl 0x83805ff0
	ctx.lr = 0x833273A8;
	sub_83805FF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833268f8
	ctx.lr = 0x833273B0;
	sub_833268F8(ctx, base);
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

__attribute__((alias("__imp__sub_833273C4"))) PPC_WEAK_FUNC(sub_833273C4);
PPC_FUNC_IMPL(__imp__sub_833273C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833273C8"))) PPC_WEAK_FUNC(sub_833273C8);
PPC_FUNC_IMPL(__imp__sub_833273C8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83323648
	ctx.lr = 0x833273E0;
	sub_83323648(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-2148
	ctx.r30.s64 = ctx.r11.s64 + -2148;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,-208
	ctx.r4.s64 = ctx.r30.s64 + -208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x833273FC;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8246be10
	ctx.lr = 0x83327408;
	sub_8246BE10(ctx, base);
	// bl 0x8332b858
	ctx.lr = 0x8332740C;
	sub_8332B858(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x83327418;
	sub_8246BE18(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x8332742C;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83327448
	if (cr6.eq) goto loc_83327448;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-1044
	ctx.r9.s64 = ctx.r10.s64 + -1044;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x8332744c
	goto loc_8332744C;
loc_83327448:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8332744C:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be48
	ctx.lr = 0x8332745C;
	sub_8246BE48(ctx, base);
	// addi r4,r30,-176
	ctx.r4.s64 = ctx.r30.s64 + -176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c3a0
	ctx.lr = 0x83327468;
	sub_8246C3A0(ctx, base);
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x83327478;
	sub_8241F280(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x83327480;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x833274a0
	if (cr6.eq) goto loc_833274A0;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83327498;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_833274A0:
	// addi r5,r30,-160
	ctx.r5.s64 = ctx.r30.s64 + -160;
	// li r6,320
	ctx.r6.s64 = 320;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824788c8
	ctx.lr = 0x833274B4;
	sub_824788C8(ctx, base);
	// addi r5,r30,-148
	ctx.r5.s64 = ctx.r30.s64 + -148;
	// li r6,328
	ctx.r6.s64 = 328;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82478360
	ctx.lr = 0x833274C8;
	sub_82478360(ctx, base);
	// addi r5,r30,-124
	ctx.r5.s64 = ctx.r30.s64 + -124;
	// li r6,344
	ctx.r6.s64 = 344;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82478360
	ctx.lr = 0x833274DC;
	sub_82478360(ctx, base);
	// addi r6,r30,-104
	ctx.r6.s64 = ctx.r30.s64 + -104;
	// addi r5,r30,-100
	ctx.r5.s64 = ctx.r30.s64 + -100;
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82479460
	ctx.lr = 0x833274F4;
	sub_82479460(ctx, base);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29128
	ctx.r4.s64 = ctx.r11.s64 + 29128;
	// bl 0x8246be80
	ctx.lr = 0x83327504;
	sub_8246BE80(ctx, base);
	// bl 0x83324198
	ctx.lr = 0x83327508;
	sub_83324198(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r30,-76
	ctx.r6.s64 = ctx.r30.s64 + -76;
	// addi r5,r30,-72
	ctx.r5.s64 = ctx.r30.s64 + -72;
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82479460
	ctx.lr = 0x83327520;
	sub_82479460(ctx, base);
	// bl 0x83324198
	ctx.lr = 0x83327524;
	sub_83324198(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r30,-24
	ctx.r6.s64 = ctx.r30.s64 + -24;
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82479460
	ctx.lr = 0x8332753C;
	sub_82479460(ctx, base);
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

__attribute__((alias("__imp__sub_83327554"))) PPC_WEAK_FUNC(sub_83327554);
PPC_FUNC_IMPL(__imp__sub_83327554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83327558"))) PPC_WEAK_FUNC(sub_83327558);
PPC_FUNC_IMPL(__imp__sub_83327558) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82489b30
	ctx.lr = 0x83327578;
	sub_82489B30(ctx, base);
	// bl 0x83327bd8
	ctx.lr = 0x8332757C;
	sub_83327BD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x83327590;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x833275a8
	if (cr6.eq) goto loc_833275A8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x833248d8
	ctx.lr = 0x833275A0;
	sub_833248D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x833275ac
	goto loc_833275AC;
loc_833275A8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_833275AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8241f040
	ctx.lr = 0x833275BC;
	sub_8241F040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8248b9b8
	ctx.lr = 0x833275C8;
	sub_8248B9B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x833275D4;
	sub_8241F040(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r9,r10,12828
	ctx.r9.s64 = ctx.r10.s64 + 12828;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// bl 0x82465ee8
	ctx.lr = 0x833275E8;
	sub_82465EE8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8257f3f0
	ctx.lr = 0x833275F0;
	sub_8257F3F0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82489378
	ctx.lr = 0x833275F8;
	sub_82489378(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83327610"))) PPC_WEAK_FUNC(sub_83327610);
PPC_FUNC_IMPL(__imp__sub_83327610) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,30040
	ctx.r4.s64 = ctx.r10.s64 + 30040;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253b5e8
	ctx.lr = 0x83327644;
	sub_8253B5E8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r4,-2
	ctx.r4.s64 = -2;
	// addi r5,r9,-27128
	ctx.r5.s64 = ctx.r9.s64 + -27128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253ba90
	ctx.lr = 0x83327658;
	sub_8253BA90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82421388
	ctx.lr = 0x83327664;
	sub_82421388(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,172
	ctx.r3.s64 = ctx.r11.s64 + 172;
	// bl 0x824674c0
	ctx.lr = 0x83327680;
	sub_824674C0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83327698
	if (cr6.eq) goto loc_83327698;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83327698;
	sub_82573040(ctx, base);
loc_83327698:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_833276B4"))) PPC_WEAK_FUNC(sub_833276B4);
PPC_FUNC_IMPL(__imp__sub_833276B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833276B8"))) PPC_WEAK_FUNC(sub_833276B8);
PPC_FUNC_IMPL(__imp__sub_833276B8) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x83323b00
	ctx.lr = 0x833276D0;
	sub_83323B00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824890e0
	ctx.lr = 0x833276E0;
	sub_824890E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83327610
	ctx.lr = 0x833276E8;
	sub_83327610(ctx, base);
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

__attribute__((alias("__imp__sub_833276FC"))) PPC_WEAK_FUNC(sub_833276FC);
PPC_FUNC_IMPL(__imp__sub_833276FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83327700"))) PPC_WEAK_FUNC(sub_83327700);
PPC_FUNC_IMPL(__imp__sub_83327700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82489b30
	ctx.lr = 0x83327718;
	sub_82489B30(ctx, base);
	// bl 0x83323b00
	ctx.lr = 0x8332771C;
	sub_83323B00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824890e0
	ctx.lr = 0x8332772C;
	sub_824890E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83327610
	ctx.lr = 0x83327734;
	sub_83327610(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r10,r11,12828
	ctx.r10.s64 = ctx.r11.s64 + 12828;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// bl 0x82465ee8
	ctx.lr = 0x83327748;
	sub_82465EE8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8257f3f0
	ctx.lr = 0x83327750;
	sub_8257F3F0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82489378
	ctx.lr = 0x83327758;
	sub_82489378(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8332776C"))) PPC_WEAK_FUNC(sub_8332776C);
PPC_FUNC_IMPL(__imp__sub_8332776C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83327770"))) PPC_WEAK_FUNC(sub_83327770);
PPC_FUNC_IMPL(__imp__sub_83327770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83327778;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83323b00
	ctx.lr = 0x83327780;
	sub_83323B00(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-1696
	ctx.r30.s64 = ctx.r11.s64 + -1696;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x8332779C;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8246be10
	ctx.lr = 0x833277A8;
	sub_8246BE10(ctx, base);
	// bl 0x83327bd8
	ctx.lr = 0x833277AC;
	sub_83327BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x833277B8;
	sub_8246BE18(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x833277CC;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x833277e8
	if (cr6.eq) goto loc_833277E8;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-1028
	ctx.r9.s64 = ctx.r10.s64 + -1028;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x833277ec
	goto loc_833277EC;
loc_833277E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_833277EC:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,20576
	ctx.r4.s64 = ctx.r11.s64 + 20576;
	// bl 0x8246be80
	ctx.lr = 0x83327800;
	sub_8246BE80(ctx, base);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,30392
	ctx.r4.s64 = ctx.r10.s64 + 30392;
	// bl 0x8246be38
	ctx.lr = 0x83327810;
	sub_8246BE38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824894a0
	ctx.lr = 0x83327818;
	sub_824894A0(ctx, base);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,30464
	ctx.r4.s64 = ctx.r9.s64 + 30464;
	// bl 0x8253b5e8
	ctx.lr = 0x83327830;
	sub_8253B5E8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253be88
	ctx.lr = 0x83327844;
	sub_8253BE88(ctx, base);
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824787b8
	ctx.lr = 0x83327854;
	sub_824787B8(ctx, base);
	// bl 0x833247c8
	ctx.lr = 0x83327858;
	sub_833247C8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r30,-28
	ctx.r6.s64 = ctx.r30.s64 + -28;
	// addi r5,r30,-24
	ctx.r5.s64 = ctx.r30.s64 + -24;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82479460
	ctx.lr = 0x83327870;
	sub_82479460(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,88
	ctx.r6.s64 = 88;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824788c8
	ctx.lr = 0x83327884;
	sub_824788C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8332788C"))) PPC_WEAK_FUNC(sub_8332788C);
PPC_FUNC_IMPL(__imp__sub_8332788C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83327890"))) PPC_WEAK_FUNC(sub_83327890);
PPC_FUNC_IMPL(__imp__sub_83327890) {
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
	// bl 0x824b51f8
	ctx.lr = 0x833278A8;
	sub_824B51F8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r10,r11,-1684
	ctx.r10.s64 = ctx.r11.s64 + -1684;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8241f278
	ctx.lr = 0x833278B8;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x8241f130
	ctx.lr = 0x833278C4;
	sub_8241F130(ctx, base);
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

__attribute__((alias("__imp__sub_833278DC"))) PPC_WEAK_FUNC(sub_833278DC);
PPC_FUNC_IMPL(__imp__sub_833278DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833278E0"))) PPC_WEAK_FUNC(sub_833278E0);
PPC_FUNC_IMPL(__imp__sub_833278E0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x824b5298
	ctx.lr = 0x83327900;
	sub_824B5298(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r10,r11,-1684
	ctx.r10.s64 = ctx.r11.s64 + -1684;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8241f160
	ctx.lr = 0x83327918;
	sub_8241F160(ctx, base);
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

__attribute__((alias("__imp__sub_83327934"))) PPC_WEAK_FUNC(sub_83327934);
PPC_FUNC_IMPL(__imp__sub_83327934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83327938"))) PPC_WEAK_FUNC(sub_83327938);
PPC_FUNC_IMPL(__imp__sub_83327938) {
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
	// bl 0x824b5248
	ctx.lr = 0x83327950;
	sub_824B5248(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r10,r11,-1684
	ctx.r10.s64 = ctx.r11.s64 + -1684;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8241f278
	ctx.lr = 0x83327960;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x8241f130
	ctx.lr = 0x8332796C;
	sub_8241F130(ctx, base);
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

__attribute__((alias("__imp__sub_83327984"))) PPC_WEAK_FUNC(sub_83327984);
PPC_FUNC_IMPL(__imp__sub_83327984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83327988"))) PPC_WEAK_FUNC(sub_83327988);
PPC_FUNC_IMPL(__imp__sub_83327988) {
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
	// bl 0x8332b2c0
	ctx.lr = 0x833279A0;
	sub_8332B2C0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-1660
	ctx.r9.s64 = ctx.r11.s64 + -1660;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_833279CC"))) PPC_WEAK_FUNC(sub_833279CC);
PPC_FUNC_IMPL(__imp__sub_833279CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833279D0"))) PPC_WEAK_FUNC(sub_833279D0);
PPC_FUNC_IMPL(__imp__sub_833279D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// lwz r3,17480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17480);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_833279F4"))) PPC_WEAK_FUNC(sub_833279F4);
PPC_FUNC_IMPL(__imp__sub_833279F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833279F8"))) PPC_WEAK_FUNC(sub_833279F8);
PPC_FUNC_IMPL(__imp__sub_833279F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// lwz r3,17484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17484);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83327A1C"))) PPC_WEAK_FUNC(sub_83327A1C);
PPC_FUNC_IMPL(__imp__sub_83327A1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83327A20"))) PPC_WEAK_FUNC(sub_83327A20);
PPC_FUNC_IMPL(__imp__sub_83327A20) {
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
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lhz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// lwz r3,17480(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17480);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x83327a5c
	if (cr6.eq) goto loc_83327A5C;
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
loc_83327A5C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83327A74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83327A88"))) PPC_WEAK_FUNC(sub_83327A88);
PPC_FUNC_IMPL(__imp__sub_83327A88) {
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
	// bl 0x8332bae0
	ctx.lr = 0x83327AA0;
	sub_8332BAE0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,264
	ctx.r10.s64 = ctx.r11.s64 + 264;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83327AC4"))) PPC_WEAK_FUNC(sub_83327AC4);
PPC_FUNC_IMPL(__imp__sub_83327AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83327AC8"))) PPC_WEAK_FUNC(sub_83327AC8);
PPC_FUNC_IMPL(__imp__sub_83327AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r10,r11,264
	ctx.r10.s64 = ctx.r11.s64 + 264;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8332bb60
	sub_8332BB60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83327AD8"))) PPC_WEAK_FUNC(sub_83327AD8);
PPC_FUNC_IMPL(__imp__sub_83327AD8) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r8,-31747
	ctx.r8.s64 = -2080571392;
	// lis r7,-31747
	ctx.r7.s64 = -2080571392;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// lwz r11,17480(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17480);
	// lwz r3,17484(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17484);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x83327b3c
	if (cr6.eq) goto loc_83327B3C;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x83327b28
	if (cr6.eq) goto loc_83327B28;
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
loc_83327B28:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x83327b50
	goto loc_83327B50;
loc_83327B3C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83327B50:
	// bctrl 
	ctx.lr = 0x83327B54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83327B68"))) PPC_WEAK_FUNC(sub_83327B68);
PPC_FUNC_IMPL(__imp__sub_83327B68) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83327bb8
	if (cr6.eq) goto loc_83327BB8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b5298
	ctx.lr = 0x83327B98;
	sub_824B5298(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,-1684
	ctx.r10.s64 = ctx.r11.s64 + -1684;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8241f160
	ctx.lr = 0x83327BB0;
	sub_8241F160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83327bbc
	goto loc_83327BBC;
loc_83327BB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83327BBC:
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

__attribute__((alias("__imp__sub_83327BD4"))) PPC_WEAK_FUNC(sub_83327BD4);
PPC_FUNC_IMPL(__imp__sub_83327BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83327BD8"))) PPC_WEAK_FUNC(sub_83327BD8);
PPC_FUNC_IMPL(__imp__sub_83327BD8) {
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
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lwz r11,17752(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17752);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83327c48
	if (!cr6.eq) goto loc_83327C48;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// stw r11,17752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17752, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,17520
	ctx.r31.s64 = ctx.r9.s64 + 17520;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x82477fc8
	ctx.lr = 0x83327C24;
	sub_82477FC8(ctx, base);
	// lis r8,-31787
	ctx.r8.s64 = -2083192832;
	// addi r3,r8,27888
	ctx.r3.s64 = ctx.r8.s64 + 27888;
	// bl 0x831cdcc8
	ctx.lr = 0x83327C30;
	sub_831CDCC8(ctx, base);
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
loc_83327C48:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,17520
	ctx.r3.s64 = ctx.r11.s64 + 17520;
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

__attribute__((alias("__imp__sub_83327C64"))) PPC_WEAK_FUNC(sub_83327C64);
PPC_FUNC_IMPL(__imp__sub_83327C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83327C68"))) PPC_WEAK_FUNC(sub_83327C68);
PPC_FUNC_IMPL(__imp__sub_83327C68) {
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
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lwz r11,17992(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17992);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83327cd8
	if (!cr6.eq) goto loc_83327CD8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// stw r11,17992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17992, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,17760
	ctx.r31.s64 = ctx.r9.s64 + 17760;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,368
	ctx.r4.s64 = 368;
	// bl 0x82477fc8
	ctx.lr = 0x83327CB4;
	sub_82477FC8(ctx, base);
	// lis r8,-31787
	ctx.r8.s64 = -2083192832;
	// addi r3,r8,27904
	ctx.r3.s64 = ctx.r8.s64 + 27904;
	// bl 0x831cdcc8
	ctx.lr = 0x83327CC0;
	sub_831CDCC8(ctx, base);
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
loc_83327CD8:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,17760
	ctx.r3.s64 = ctx.r11.s64 + 17760;
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

__attribute__((alias("__imp__sub_83327CF4"))) PPC_WEAK_FUNC(sub_83327CF4);
PPC_FUNC_IMPL(__imp__sub_83327CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83327CF8"))) PPC_WEAK_FUNC(sub_83327CF8);
PPC_FUNC_IMPL(__imp__sub_83327CF8) {
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
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lwz r11,18232(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18232);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83327d68
	if (!cr6.eq) goto loc_83327D68;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// stw r11,18232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18232, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,18000
	ctx.r31.s64 = ctx.r9.s64 + 18000;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,160
	ctx.r4.s64 = 160;
	// bl 0x82477fc8
	ctx.lr = 0x83327D44;
	sub_82477FC8(ctx, base);
	// lis r8,-31787
	ctx.r8.s64 = -2083192832;
	// addi r3,r8,27920
	ctx.r3.s64 = ctx.r8.s64 + 27920;
	// bl 0x831cdcc8
	ctx.lr = 0x83327D50;
	sub_831CDCC8(ctx, base);
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
loc_83327D68:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,18000
	ctx.r3.s64 = ctx.r11.s64 + 18000;
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

__attribute__((alias("__imp__sub_83327D84"))) PPC_WEAK_FUNC(sub_83327D84);
PPC_FUNC_IMPL(__imp__sub_83327D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83327D88"))) PPC_WEAK_FUNC(sub_83327D88);
PPC_FUNC_IMPL(__imp__sub_83327D88) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83327cf8
	ctx.lr = 0x83327DA0;
	sub_83327CF8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-308
	ctx.r31.s64 = ctx.r11.s64 + -308;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x83327DBC;
	sub_8247B0F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x83327DC8;
	sub_8246BE10(ctx, base);
	// bl 0x8332b950
	ctx.lr = 0x83327DCC;
	sub_8332B950(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246be18
	ctx.lr = 0x83327DD8;
	sub_8246BE18(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c3a0
	ctx.lr = 0x83327DE4;
	sub_8246C3A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x83327DF4;
	sub_8241F280(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x83327DFC;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83327e14
	if (cr6.eq) goto loc_83327E14;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83327E14;
	sub_82573040(ctx, base);
loc_83327E14:
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

__attribute__((alias("__imp__sub_83327E2C"))) PPC_WEAK_FUNC(sub_83327E2C);
PPC_FUNC_IMPL(__imp__sub_83327E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83327E30"))) PPC_WEAK_FUNC(sub_83327E30);
PPC_FUNC_IMPL(__imp__sub_83327E30) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,264
	ctx.r10.s64 = ctx.r11.s64 + 264;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8332bb60
	ctx.lr = 0x83327E5C;
	sub_8332BB60(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83327e74
	if (cr6.eq) goto loc_83327E74;
	// bl 0x8248b818
	ctx.lr = 0x83327E70;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83327E74:
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

__attribute__((alias("__imp__sub_83327E8C"))) PPC_WEAK_FUNC(sub_83327E8C);
PPC_FUNC_IMPL(__imp__sub_83327E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83327E90"))) PPC_WEAK_FUNC(sub_83327E90);
PPC_FUNC_IMPL(__imp__sub_83327E90) {
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
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lwz r11,18472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18472);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83327f00
	if (!cr6.eq) goto loc_83327F00;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// stw r11,18472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18472, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,18240
	ctx.r31.s64 = ctx.r9.s64 + 18240;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,400
	ctx.r4.s64 = 400;
	// bl 0x82477fc8
	ctx.lr = 0x83327EDC;
	sub_82477FC8(ctx, base);
	// lis r8,-31787
	ctx.r8.s64 = -2083192832;
	// addi r3,r8,27936
	ctx.r3.s64 = ctx.r8.s64 + 27936;
	// bl 0x831cdcc8
	ctx.lr = 0x83327EE8;
	sub_831CDCC8(ctx, base);
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
loc_83327F00:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,18240
	ctx.r3.s64 = ctx.r11.s64 + 18240;
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

