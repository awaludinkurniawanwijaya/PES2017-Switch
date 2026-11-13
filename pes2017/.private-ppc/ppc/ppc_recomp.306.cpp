#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83233778"))) PPC_WEAK_FUNC(sub_83233778);
PPC_FUNC_IMPL(__imp__sub_83233778) {
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
	// lhz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,1877
	cr6.compare<uint32_t>(ctx.r10.u32, 1877, xer);
	// beq cr6,0x832337d8
	if (cr6.eq) goto loc_832337D8;
	// cmplwi cr6,r10,1878
	cr6.compare<uint32_t>(ctx.r10.u32, 1878, xer);
	// beq cr6,0x832337b4
	if (cr6.eq) goto loc_832337B4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832337B4:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r9,16
	ctx.r4.s64 = ctx.r9.s64 + 16;
	// bl 0x832240b8
	ctx.lr = 0x832337C4;
	sub_832240B8(ctx, base);
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
loc_832337D8:
	// lhz r4,2(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x832337E4;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_832337F8"))) PPC_WEAK_FUNC(sub_832337F8);
PPC_FUNC_IMPL(__imp__sub_832337F8) {
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
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// addi r5,r11,-163
	ctx.r5.s64 = ctx.r11.s64 + -163;
	// srw r4,r10,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// srawi r11,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cntlzw r8,r7
	ctx.r8.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// and r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832338a4
	if (!cr6.eq) goto loc_832338A4;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x83221378
	ctx.lr = 0x83233868;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832338a4
	if (!cr6.eq) goto loc_832338A4;
	// li r4,144
	ctx.r4.s64 = 144;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83221378
	ctx.lr = 0x8323387C;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832338a4
	if (!cr6.eq) goto loc_832338A4;
	// li r4,143
	ctx.r4.s64 = 143;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83221378
	ctx.lr = 0x83233890;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832338a4
	if (!cr6.eq) goto loc_832338A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,149
	ctx.r3.s64 = 149;
	// bl 0x8320d7f8
	ctx.lr = 0x832338A4;
	sub_8320D7F8(ctx, base);
loc_832338A4:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x832240b8
	ctx.lr = 0x832338B4;
	sub_832240B8(ctx, base);
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

__attribute__((alias("__imp__sub_832338D0"))) PPC_WEAK_FUNC(sub_832338D0);
PPC_FUNC_IMPL(__imp__sub_832338D0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1877
	cr6.compare<uint32_t>(ctx.r11.u32, 1877, xer);
	// beq cr6,0x83233930
	if (cr6.eq) goto loc_83233930;
	// cmplwi cr6,r11,1878
	cr6.compare<uint32_t>(ctx.r11.u32, 1878, xer);
	// beq cr6,0x83233920
	if (cr6.eq) goto loc_83233920;
	// cmplwi cr6,r11,1881
	cr6.compare<uint32_t>(ctx.r11.u32, 1881, xer);
	// beq cr6,0x83233910
	if (cr6.eq) goto loc_83233910;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x832339a8
	goto loc_832339A8;
loc_83233910:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83220448
	ctx.lr = 0x83233918;
	sub_83220448(ctx, base);
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x832339a4
	goto loc_832339A4;
loc_83233920:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832337f8
	ctx.lr = 0x8323392C;
	sub_832337F8(ctx, base);
	// b 0x832339a4
	goto loc_832339A4;
loc_83233930:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x832264e0
	ctx.lr = 0x83233958;
	sub_832264E0(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83233974
	if (!cr6.eq) goto loc_83233974;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832277e8
	ctx.lr = 0x8323396C;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_83233974:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,546
	cr6.compare<uint32_t>(ctx.r10.u32, 546, xer);
	// beq cr6,0x832339a0
	if (cr6.eq) goto loc_832339A0;
	// cmplwi cr6,r10,545
	cr6.compare<uint32_t>(ctx.r10.u32, 545, xer);
	// beq cr6,0x832339a0
	if (cr6.eq) goto loc_832339A0;
	// cmplwi cr6,r10,1168
	cr6.compare<uint32_t>(ctx.r10.u32, 1168, xer);
	// beq cr6,0x832339a0
	if (cr6.eq) goto loc_832339A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,149
	ctx.r3.s64 = 149;
	// bl 0x8320d7f8
	ctx.lr = 0x8323399C;
	sub_8320D7F8(ctx, base);
	// li r11,1168
	ctx.r11.s64 = 1168;
loc_832339A0:
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
loc_832339A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832339A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_832339C0"))) PPC_WEAK_FUNC(sub_832339C0);
PPC_FUNC_IMPL(__imp__sub_832339C0) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83233a04
	if (cr6.eq) goto loc_83233A04;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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
loc_83233A04:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x83233A14;
	sub_83294018(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f0,132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
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

__attribute__((alias("__imp__sub_83233A3C"))) PPC_WEAK_FUNC(sub_83233A3C);
PPC_FUNC_IMPL(__imp__sub_83233A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83233A40"))) PPC_WEAK_FUNC(sub_83233A40);
PPC_FUNC_IMPL(__imp__sub_83233A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83233A48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83233a64
	if (cr6.lt) goto loc_83233A64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83233a6c
	if (!cr6.gt) goto loc_83233A6C;
loc_83233A64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320e738
	ctx.lr = 0x83233A6C;
	sub_8320E738(ctx, base);
loc_83233A6C:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83209aa8
	ctx.lr = 0x83233A74;
	sub_83209AA8(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x83233A84;
	sub_83294018(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,5696
	ctx.r9.s64 = ctx.r11.s64 + 5696;
	// ori r8,r10,8400
	ctx.r8.u64 = ctx.r10.u64 | 8400;
	// lfs f0,132(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lhz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sraw r5,r8,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r5.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83233ac0
	if (cr6.eq) goto loc_83233AC0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222030
	ctx.lr = 0x83233AC0;
	sub_83222030(ctx, base);
loc_83233AC0:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// li r10,145
	ctx.r10.s64 = 145;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// sth r10,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r10.u16);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83233b20
	if (cr6.lt) goto loc_83233B20;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222578
	ctx.lr = 0x83233B04;
	sub_83222578(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// blt cr6,0x83233b20
	if (cr6.lt) goto loc_83233B20;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x83220448
	ctx.lr = 0x83233B1C;
	sub_83220448(ctx, base);
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_83233B20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83233B28"))) PPC_WEAK_FUNC(sub_83233B28);
PPC_FUNC_IMPL(__imp__sub_83233B28) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,418
	cr6.compare<uint32_t>(ctx.r11.u32, 418, xer);
	// beq cr6,0x83233b68
	if (cr6.eq) goto loc_83233B68;
	// cmplwi cr6,r11,537
	cr6.compare<uint32_t>(ctx.r11.u32, 537, xer);
	// beq cr6,0x83233b58
	if (cr6.eq) goto loc_83233B58;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x83233ba8
	goto loc_83233BA8;
loc_83233B58:
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x832248d8
	ctx.lr = 0x83233B64;
	sub_832248D8(ctx, base);
	// b 0x83233ba4
	goto loc_83233BA4;
loc_83233B68:
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83233b98
	if (cr6.eq) goto loc_83233B98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83233B98;
	sub_83222030(ctx, base);
loc_83233B98:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_83233BA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83233BA8:
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

__attribute__((alias("__imp__sub_83233BC0"))) PPC_WEAK_FUNC(sub_83233BC0);
PPC_FUNC_IMPL(__imp__sub_83233BC0) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,418
	cr6.compare<uint32_t>(ctx.r11.u32, 418, xer);
	// beq cr6,0x83233c10
	if (cr6.eq) goto loc_83233C10;
	// cmplwi cr6,r11,537
	cr6.compare<uint32_t>(ctx.r11.u32, 537, xer);
	// beq cr6,0x83233c00
	if (cr6.eq) goto loc_83233C00;
	// li r3,-4
	ctx.r3.s64 = -4;
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
loc_83233C00:
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x83220448
	ctx.lr = 0x83233C08;
	sub_83220448(ctx, base);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x83233c1c
	goto loc_83233C1C;
loc_83233C10:
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x83222578
	ctx.lr = 0x83233C18;
	sub_83222578(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_83233C1C:
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

__attribute__((alias("__imp__sub_83233C34"))) PPC_WEAK_FUNC(sub_83233C34);
PPC_FUNC_IMPL(__imp__sub_83233C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83233C38"))) PPC_WEAK_FUNC(sub_83233C38);
PPC_FUNC_IMPL(__imp__sub_83233C38) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83233c7c
	if (cr6.eq) goto loc_83233C7C;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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
loc_83233C7C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83233cac
	if (cr6.eq) goto loc_83233CAC;
	// bl 0x83261890
	ctx.lr = 0x83233C8C;
	sub_83261890(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83233cac
	if (!cr6.eq) goto loc_83233CAC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83233cac
	if (cr6.eq) goto loc_83233CAC;
	// bl 0x83209d68
	ctx.lr = 0x83233CA4;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83233CAC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83233cbc
	if (cr6.eq) goto loc_83233CBC;
	// bl 0x832356e0
	ctx.lr = 0x83233CBC;
	sub_832356E0(ctx, base);
loc_83233CBC:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x83233CCC;
	sub_83294018(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83233CEC"))) PPC_WEAK_FUNC(sub_83233CEC);
PPC_FUNC_IMPL(__imp__sub_83233CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83233CF0"))) PPC_WEAK_FUNC(sub_83233CF0);
PPC_FUNC_IMPL(__imp__sub_83233CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83233CF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,140
	ctx.r4.s64 = 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83221378
	ctx.lr = 0x83233D14;
	sub_83221378(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83233d38
	if (!cr6.eq) goto loc_83233D38;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,140
	ctx.r6.s64 = 140;
	// li r5,1884
	ctx.r5.s64 = 1884;
	// li r4,143
	ctx.r4.s64 = 143;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320d628
	ctx.lr = 0x83233D38;
	sub_8320D628(ctx, base);
loc_83233D38:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83233d68
	if (cr6.eq) goto loc_83233D68;
	// bl 0x83261890
	ctx.lr = 0x83233D48;
	sub_83261890(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83233d68
	if (!cr6.eq) goto loc_83233D68;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83233d68
	if (cr6.eq) goto loc_83233D68;
	// bl 0x83209d68
	ctx.lr = 0x83233D60;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_83233D68:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x83233d84
	if (cr6.eq) goto loc_83233D84;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
loc_83233D84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83233D8C"))) PPC_WEAK_FUNC(sub_83233D8C);
PPC_FUNC_IMPL(__imp__sub_83233D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83233D90"))) PPC_WEAK_FUNC(sub_83233D90);
PPC_FUNC_IMPL(__imp__sub_83233D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83233D98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83233db4
	if (cr6.lt) goto loc_83233DB4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x83233dbc
	if (!cr6.gt) goto loc_83233DBC;
loc_83233DB4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320e738
	ctx.lr = 0x83233DBC;
	sub_8320E738(ctx, base);
loc_83233DBC:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83209aa8
	ctx.lr = 0x83233DC4;
	sub_83209AA8(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x83233DD4;
	sub_83294018(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stb r11,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r11.u8);
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sraw r6,r9,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r6.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83233e08
	if (cr6.eq) goto loc_83233E08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83233E08;
	sub_83222030(ctx, base);
loc_83233E08:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,143
	ctx.r10.s64 = 143;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83233e50
	if (cr6.lt) goto loc_83233E50;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83233cf0
	ctx.lr = 0x83233E50;
	sub_83233CF0(ctx, base);
loc_83233E50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83233E58"))) PPC_WEAK_FUNC(sub_83233E58);
PPC_FUNC_IMPL(__imp__sub_83233E58) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,494
	cr6.compare<uint32_t>(ctx.r11.u32, 494, xer);
	// beq cr6,0x83233e80
	if (cr6.eq) goto loc_83233E80;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x83233efc
	goto loc_83233EFC;
loc_83233E80:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83233e9c
	if (!cr6.eq) goto loc_83233E9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83213150
	ctx.lr = 0x83233E98;
	sub_83213150(ctx, base);
	// b 0x83233ef8
	goto loc_83233EF8;
loc_83233E9C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,8400
	ctx.r8.u64 = ctx.r9.u64 | 8400;
	// lhz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r7.u16);
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sraw r11,r8,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83233ed8
	if (cr6.eq) goto loc_83233ED8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83233ED8;
	sub_83222030(ctx, base);
loc_83233ED8:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,37
	ctx.r10.s64 = 37;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
loc_83233EF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83233EFC:
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

__attribute__((alias("__imp__sub_83233F14"))) PPC_WEAK_FUNC(sub_83233F14);
PPC_FUNC_IMPL(__imp__sub_83233F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83233F18"))) PPC_WEAK_FUNC(sub_83233F18);
PPC_FUNC_IMPL(__imp__sub_83233F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83233F20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,494
	cr6.compare<uint32_t>(ctx.r11.u32, 494, xer);
	// beq cr6,0x83233f94
	if (cr6.eq) goto loc_83233F94;
	// cmplwi cr6,r11,552
	cr6.compare<uint32_t>(ctx.r11.u32, 552, xer);
	// beq cr6,0x83233f70
	if (cr6.eq) goto loc_83233F70;
	// cmplwi cr6,r11,1884
	cr6.compare<uint32_t>(ctx.r11.u32, 1884, xer);
	// beq cr6,0x83233f54
	if (cr6.eq) goto loc_83233F54;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83233F54:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83233cf0
	ctx.lr = 0x83233F64;
	sub_83233CF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83233F70:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83220140
	ctx.lr = 0x83233F78;
	sub_83220140(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r9.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83233F94:
	// li r4,37
	ctx.r4.s64 = 37;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83221378
	ctx.lr = 0x83233FA0;
	sub_83221378(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83233fbc
	if (!cr6.eq) goto loc_83233FBC;
	// li r5,37
	ctx.r5.s64 = 37;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,143
	ctx.r3.s64 = 143;
	// bl 0x8320d6c0
	ctx.lr = 0x83233FBC;
	sub_8320D6C0(ctx, base);
loc_83233FBC:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83233fcc
	if (cr6.eq) goto loc_83233FCC;
	// bl 0x832356e0
	ctx.lr = 0x83233FCC;
	sub_832356E0(ctx, base);
loc_83233FCC:
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83233fe4
	if (cr6.eq) goto loc_83233FE4;
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r11.u16);
loc_83233FE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83233FF0"))) PPC_WEAK_FUNC(sub_83233FF0);
PPC_FUNC_IMPL(__imp__sub_83233FF0) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83234034
	if (cr6.eq) goto loc_83234034;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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
loc_83234034:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83234044
	if (cr6.eq) goto loc_83234044;
	// bl 0x832356e0
	ctx.lr = 0x83234044;
	sub_832356E0(ctx, base);
loc_83234044:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83234054
	if (cr6.eq) goto loc_83234054;
	// bl 0x832356e0
	ctx.lr = 0x83234054;
	sub_832356E0(ctx, base);
loc_83234054:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x83234064;
	sub_83294018(ctx, base);
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

__attribute__((alias("__imp__sub_8323407C"))) PPC_WEAK_FUNC(sub_8323407C);
PPC_FUNC_IMPL(__imp__sub_8323407C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83234080"))) PPC_WEAK_FUNC(sub_83234080);
PPC_FUNC_IMPL(__imp__sub_83234080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83234088;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83221378
	ctx.lr = 0x832340A4;
	sub_83221378(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832340c8
	if (!cr6.eq) goto loc_832340C8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,30
	ctx.r6.s64 = 30;
	// li r5,1880
	ctx.r5.s64 = 1880;
	// li r4,147
	ctx.r4.s64 = 147;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320d628
	ctx.lr = 0x832340C8;
	sub_8320D628(ctx, base);
loc_832340C8:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832340d8
	if (cr6.eq) goto loc_832340D8;
	// bl 0x832356e0
	ctx.lr = 0x832340D8;
	sub_832356E0(ctx, base);
loc_832340D8:
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x832340f4
	if (cr6.eq) goto loc_832340F4;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_832340F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832340FC"))) PPC_WEAK_FUNC(sub_832340FC);
PPC_FUNC_IMPL(__imp__sub_832340FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83234100"))) PPC_WEAK_FUNC(sub_83234100);
PPC_FUNC_IMPL(__imp__sub_83234100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83234108;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83221378
	ctx.lr = 0x83234124;
	sub_83221378(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83234148
	if (!cr6.eq) goto loc_83234148;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,30
	ctx.r6.s64 = 30;
	// li r5,791
	ctx.r5.s64 = 791;
	// li r4,147
	ctx.r4.s64 = 147;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320d628
	ctx.lr = 0x83234148;
	sub_8320D628(ctx, base);
loc_83234148:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83234158
	if (cr6.eq) goto loc_83234158;
	// bl 0x832356e0
	ctx.lr = 0x83234158;
	sub_832356E0(ctx, base);
loc_83234158:
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x83234174
	if (cr6.eq) goto loc_83234174;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_83234174:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323417C"))) PPC_WEAK_FUNC(sub_8323417C);
PPC_FUNC_IMPL(__imp__sub_8323417C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83234180"))) PPC_WEAK_FUNC(sub_83234180);
PPC_FUNC_IMPL(__imp__sub_83234180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83234188;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x832341a4
	if (cr6.lt) goto loc_832341A4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x832341ac
	if (!cr6.gt) goto loc_832341AC;
loc_832341A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320e738
	ctx.lr = 0x832341AC;
	sub_8320E738(ctx, base);
loc_832341AC:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83209aa8
	ctx.lr = 0x832341B4;
	sub_83209AA8(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x832341C4;
	sub_83294018(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832341f0
	if (cr6.eq) goto loc_832341F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222030
	ctx.lr = 0x832341F0;
	sub_83222030(ctx, base);
loc_832341F0:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// li r10,147
	ctx.r10.s64 = 147;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r10.u16);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r8.u16);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83234264
	if (cr6.lt) goto loc_83234264;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83234080
	ctx.lr = 0x83234248;
	sub_83234080(ctx, base);
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// blt cr6,0x83234264
	if (cr6.lt) goto loc_83234264;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83234100
	ctx.lr = 0x83234264;
	sub_83234100(ctx, base);
loc_83234264:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323426C"))) PPC_WEAK_FUNC(sub_8323426C);
PPC_FUNC_IMPL(__imp__sub_8323426C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83234270"))) PPC_WEAK_FUNC(sub_83234270);
PPC_FUNC_IMPL(__imp__sub_83234270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83234278;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,791
	cr6.compare<uint32_t>(ctx.r11.u32, 791, xer);
	// beq cr6,0x832342f8
	if (cr6.eq) goto loc_832342F8;
	// cmplwi cr6,r11,1880
	cr6.compare<uint32_t>(ctx.r11.u32, 1880, xer);
	// beq cr6,0x832342a0
	if (cr6.eq) goto loc_832342A0;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832342A0:
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832342d0
	if (cr6.eq) goto loc_832342D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x832342D0;
	sub_83222030(ctx, base);
loc_832342D0:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,30
	ctx.r10.s64 = 30;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8323434c
	goto loc_8323434C;
loc_832342F8:
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83234328
	if (cr6.eq) goto loc_83234328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83234328;
	sub_83222030(ctx, base);
loc_83234328:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,30
	ctx.r10.s64 = 30;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_8323434C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83234360
	if (cr6.eq) goto loc_83234360;
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
loc_83234360:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323436C"))) PPC_WEAK_FUNC(sub_8323436C);
PPC_FUNC_IMPL(__imp__sub_8323436C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83234370"))) PPC_WEAK_FUNC(sub_83234370);
PPC_FUNC_IMPL(__imp__sub_83234370) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,791
	cr6.compare<uint32_t>(ctx.r11.u32, 791, xer);
	// beq cr6,0x832343c4
	if (cr6.eq) goto loc_832343C4;
	// cmplwi cr6,r11,1880
	cr6.compare<uint32_t>(ctx.r11.u32, 1880, xer);
	// beq cr6,0x832343a4
	if (cr6.eq) goto loc_832343A4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832343A4:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x83234080
	ctx.lr = 0x832343B0;
	sub_83234080(ctx, base);
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
loc_832343C4:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x83234100
	ctx.lr = 0x832343D0;
	sub_83234100(ctx, base);
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

__attribute__((alias("__imp__sub_832343E4"))) PPC_WEAK_FUNC(sub_832343E4);
PPC_FUNC_IMPL(__imp__sub_832343E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832343E8"))) PPC_WEAK_FUNC(sub_832343E8);
PPC_FUNC_IMPL(__imp__sub_832343E8) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323442c
	if (cr6.eq) goto loc_8323442C;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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
loc_8323442C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323443c
	if (cr6.eq) goto loc_8323443C;
	// bl 0x832356e0
	ctx.lr = 0x8323443C;
	sub_832356E0(ctx, base);
loc_8323443C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323444c
	if (cr6.eq) goto loc_8323444C;
	// bl 0x832356e0
	ctx.lr = 0x8323444C;
	sub_832356E0(ctx, base);
loc_8323444C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323445c
	if (cr6.eq) goto loc_8323445C;
	// bl 0x832356e0
	ctx.lr = 0x8323445C;
	sub_832356E0(ctx, base);
loc_8323445C:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x8323446C;
	sub_83294018(ctx, base);
	// li r11,543
	ctx.r11.s64 = 543;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_8323448C"))) PPC_WEAK_FUNC(sub_8323448C);
PPC_FUNC_IMPL(__imp__sub_8323448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83234490"))) PPC_WEAK_FUNC(sub_83234490);
PPC_FUNC_IMPL(__imp__sub_83234490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83234498;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83221378
	ctx.lr = 0x832344B4;
	sub_83221378(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832344d8
	if (!cr6.eq) goto loc_832344D8;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,30
	ctx.r6.s64 = 30;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,148
	ctx.r4.s64 = 148;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320d628
	ctx.lr = 0x832344D8;
	sub_8320D628(ctx, base);
loc_832344D8:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832344e8
	if (cr6.eq) goto loc_832344E8;
	// bl 0x832356e0
	ctx.lr = 0x832344E8;
	sub_832356E0(ctx, base);
loc_832344E8:
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x83234504
	if (cr6.eq) goto loc_83234504;
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r11.u16);
loc_83234504:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323450C"))) PPC_WEAK_FUNC(sub_8323450C);
PPC_FUNC_IMPL(__imp__sub_8323450C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83234510"))) PPC_WEAK_FUNC(sub_83234510);
PPC_FUNC_IMPL(__imp__sub_83234510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83234518;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83234534
	if (cr6.lt) goto loc_83234534;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// ble cr6,0x8323453c
	if (!cr6.gt) goto loc_8323453C;
loc_83234534:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320e738
	ctx.lr = 0x8323453C;
	sub_8320E738(ctx, base);
loc_8323453C:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x83209aa8
	ctx.lr = 0x83234544;
	sub_83209AA8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x83234554;
	sub_83294018(ctx, base);
	// li r11,543
	ctx.r11.s64 = 543;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// sth r11,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r11.u16);
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sraw r6,r9,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r6.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83234588
	if (cr6.eq) goto loc_83234588;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83234588;
	sub_83222030(ctx, base);
loc_83234588:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// li r10,148
	ctx.r10.s64 = 148;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x832346ec
	if (cr6.lt) goto loc_832346EC;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r29,12288
	ctx.r29.s64 = 12288;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lhz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// srw r10,r29,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r4.u8 & 0x3F));
	// addi r9,r11,-163
	ctx.r9.s64 = ctx.r11.s64 + -163;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// srawi r7,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// cntlzw r6,r3
	ctx.r6.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// clrlwi r5,r7,24
	ctx.r5.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// and r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 & ctx.r8.u64;
	// and r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 & ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83234620
	if (!cr6.eq) goto loc_83234620;
	// li r6,1885
	ctx.r6.s64 = 1885;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83234490
	ctx.lr = 0x83234620;
	sub_83234490(ctx, base);
loc_83234620:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83234688
	if (cr6.lt) goto loc_83234688;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// addi r7,r11,-163
	ctx.r7.s64 = ctx.r11.s64 + -163;
	// srw r6,r29,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r8.u8 & 0x3F));
	// srawi r5,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// and r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 & ctx.r4.u64;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83234688
	if (!cr6.eq) goto loc_83234688;
	// li r6,1887
	ctx.r6.s64 = 1887;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83234490
	ctx.lr = 0x83234688;
	sub_83234490(ctx, base);
loc_83234688:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x832346ec
	if (cr6.lt) goto loc_832346EC;
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// addi r7,r11,-163
	ctx.r7.s64 = ctx.r11.s64 + -163;
	// srw r6,r29,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r8.u8 & 0x3F));
	// srawi r5,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// cntlzw r10,r9
	ctx.r10.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// and r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 & ctx.r4.u64;
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832346ec
	if (!cr6.eq) goto loc_832346EC;
	// li r6,1886
	ctx.r6.s64 = 1886;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r28,12
	ctx.r4.s64 = ctx.r28.s64 + 12;
	// bl 0x83234490
	ctx.lr = 0x832346EC;
	sub_83234490(ctx, base);
loc_832346EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832346F4"))) PPC_WEAK_FUNC(sub_832346F4);
PPC_FUNC_IMPL(__imp__sub_832346F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832346F8"))) PPC_WEAK_FUNC(sub_832346F8);
PPC_FUNC_IMPL(__imp__sub_832346F8) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1885
	cr6.compare<uint32_t>(ctx.r11.u32, 1885, xer);
	// beq cr6,0x83234758
	if (cr6.eq) goto loc_83234758;
	// cmplwi cr6,r11,1886
	cr6.compare<uint32_t>(ctx.r11.u32, 1886, xer);
	// beq cr6,0x83234748
	if (cr6.eq) goto loc_83234748;
	// cmplwi cr6,r11,1887
	cr6.compare<uint32_t>(ctx.r11.u32, 1887, xer);
	// beq cr6,0x83234738
	if (cr6.eq) goto loc_83234738;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83234738:
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r6,1887
	ctx.r6.s64 = 1887;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// b 0x83234764
	goto loc_83234764;
loc_83234748:
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r6,1886
	ctx.r6.s64 = 1886;
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// b 0x83234764
	goto loc_83234764;
loc_83234758:
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r6,1885
	ctx.r6.s64 = 1885;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
loc_83234764:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83234490
	ctx.lr = 0x8323476C;
	sub_83234490(ctx, base);
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

__attribute__((alias("__imp__sub_83234780"))) PPC_WEAK_FUNC(sub_83234780);
PPC_FUNC_IMPL(__imp__sub_83234780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83234788;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1885
	cr6.compare<uint32_t>(ctx.r11.u32, 1885, xer);
	// beq cr6,0x83234868
	if (cr6.eq) goto loc_83234868;
	// cmplwi cr6,r11,1886
	cr6.compare<uint32_t>(ctx.r11.u32, 1886, xer);
	// beq cr6,0x83234810
	if (cr6.eq) goto loc_83234810;
	// cmplwi cr6,r11,1887
	cr6.compare<uint32_t>(ctx.r11.u32, 1887, xer);
	// beq cr6,0x832347b8
	if (cr6.eq) goto loc_832347B8;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832347B8:
	// lwz r30,12(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832347e8
	if (cr6.eq) goto loc_832347E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x832347E8;
	sub_83222030(ctx, base);
loc_832347E8:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// li r10,30
	ctx.r10.s64 = 30;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r8.u16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x832348bc
	goto loc_832348BC;
loc_83234810:
	// lwz r30,12(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83234840
	if (cr6.eq) goto loc_83234840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83234840;
	sub_83222030(ctx, base);
loc_83234840:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// li r10,30
	ctx.r10.s64 = 30;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r8.u16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x832348bc
	goto loc_832348BC;
loc_83234868:
	// lwz r30,12(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83234898
	if (cr6.eq) goto loc_83234898;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83234898;
	sub_83222030(ctx, base);
loc_83234898:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// li r10,30
	ctx.r10.s64 = 30;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r8.u16);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_832348BC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832348d0
	if (cr6.eq) goto loc_832348D0;
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
loc_832348D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832348DC"))) PPC_WEAK_FUNC(sub_832348DC);
PPC_FUNC_IMPL(__imp__sub_832348DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832348E0"))) PPC_WEAK_FUNC(sub_832348E0);
PPC_FUNC_IMPL(__imp__sub_832348E0) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83234904
	if (cr6.eq) goto loc_83234904;
	// bl 0x8320e738
	ctx.lr = 0x83234904;
	sub_8320E738(ctx, base);
loc_83234904:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83234930
	if (cr6.eq) goto loc_83234930;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83234930;
	sub_83222030(ctx, base);
loc_83234930:
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,146
	ctx.r10.s64 = 146;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8323495C"))) PPC_WEAK_FUNC(sub_8323495C);
PPC_FUNC_IMPL(__imp__sub_8323495C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83234960"))) PPC_WEAK_FUNC(sub_83234960);
PPC_FUNC_IMPL(__imp__sub_83234960) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1634
	cr6.compare<uint32_t>(ctx.r11.u32, 1634, xer);
	// bgt cr6,0x832349a4
	if (cr6.gt) goto loc_832349A4;
	// beq cr6,0x8323499c
	if (cr6.eq) goto loc_8323499C;
	// cmplwi cr6,r11,1610
	cr6.compare<uint32_t>(ctx.r11.u32, 1610, xer);
	// beq cr6,0x83234994
	if (cr6.eq) goto loc_83234994;
	// cmplwi cr6,r11,1633
	cr6.compare<uint32_t>(ctx.r11.u32, 1633, xer);
	// bne cr6,0x832349ac
	if (!cr6.eq) goto loc_832349AC;
	// li r4,543
	ctx.r4.s64 = 543;
	// b 0x832349c4
	goto loc_832349C4;
loc_83234994:
	// li r4,526
	ctx.r4.s64 = 526;
	// b 0x832349c4
	goto loc_832349C4;
loc_8323499C:
	// li r4,557
	ctx.r4.s64 = 557;
	// b 0x832349c4
	goto loc_832349C4;
loc_832349A4:
	// cmplwi cr6,r11,1635
	cr6.compare<uint32_t>(ctx.r11.u32, 1635, xer);
	// beq cr6,0x832349c0
	if (cr6.eq) goto loc_832349C0;
loc_832349AC:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832349C0:
	// li r4,558
	ctx.r4.s64 = 558;
loc_832349C4:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x832349CC;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_832349E0"))) PPC_WEAK_FUNC(sub_832349E0);
PPC_FUNC_IMPL(__imp__sub_832349E0) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1633
	cr6.compare<uint32_t>(ctx.r11.u32, 1633, xer);
	// beq cr6,0x83234a2c
	if (cr6.eq) goto loc_83234A2C;
	// cmplwi cr6,r11,1636
	cr6.compare<uint32_t>(ctx.r11.u32, 1636, xer);
	// beq cr6,0x83234a24
	if (cr6.eq) goto loc_83234A24;
	// cmplwi cr6,r11,1637
	cr6.compare<uint32_t>(ctx.r11.u32, 1637, xer);
	// beq cr6,0x83234a1c
	if (cr6.eq) goto loc_83234A1C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83234A1C:
	// li r4,544
	ctx.r4.s64 = 544;
	// b 0x83234a30
	goto loc_83234A30;
loc_83234A24:
	// li r4,1168
	ctx.r4.s64 = 1168;
	// b 0x83234a30
	goto loc_83234A30;
loc_83234A2C:
	// li r4,543
	ctx.r4.s64 = 543;
loc_83234A30:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83234A38;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_83234A4C"))) PPC_WEAK_FUNC(sub_83234A4C);
PPC_FUNC_IMPL(__imp__sub_83234A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83234A50"))) PPC_WEAK_FUNC(sub_83234A50);
PPC_FUNC_IMPL(__imp__sub_83234A50) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1636
	cr6.compare<uint32_t>(ctx.r11.u32, 1636, xer);
	// beq cr6,0x83234a9c
	if (cr6.eq) goto loc_83234A9C;
	// cmplwi cr6,r11,1638
	cr6.compare<uint32_t>(ctx.r11.u32, 1638, xer);
	// beq cr6,0x83234a94
	if (cr6.eq) goto loc_83234A94;
	// cmplwi cr6,r11,1639
	cr6.compare<uint32_t>(ctx.r11.u32, 1639, xer);
	// beq cr6,0x83234a8c
	if (cr6.eq) goto loc_83234A8C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83234A8C:
	// li r4,545
	ctx.r4.s64 = 545;
	// b 0x83234aa0
	goto loc_83234AA0;
loc_83234A94:
	// li r4,546
	ctx.r4.s64 = 546;
	// b 0x83234aa0
	goto loc_83234AA0;
loc_83234A9C:
	// li r4,1168
	ctx.r4.s64 = 1168;
loc_83234AA0:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83234AA8;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_83234ABC"))) PPC_WEAK_FUNC(sub_83234ABC);
PPC_FUNC_IMPL(__imp__sub_83234ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83234AC0"))) PPC_WEAK_FUNC(sub_83234AC0);
PPC_FUNC_IMPL(__imp__sub_83234AC0) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1640
	cr6.compare<uint32_t>(ctx.r11.u32, 1640, xer);
	// beq cr6,0x83234afc
	if (cr6.eq) goto loc_83234AFC;
	// cmplwi cr6,r11,1641
	cr6.compare<uint32_t>(ctx.r11.u32, 1641, xer);
	// beq cr6,0x83234af4
	if (cr6.eq) goto loc_83234AF4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83234AF4:
	// li r4,542
	ctx.r4.s64 = 542;
	// b 0x83234b00
	goto loc_83234B00;
loc_83234AFC:
	// li r4,541
	ctx.r4.s64 = 541;
loc_83234B00:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83234B08;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_83234B1C"))) PPC_WEAK_FUNC(sub_83234B1C);
PPC_FUNC_IMPL(__imp__sub_83234B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83234B20"))) PPC_WEAK_FUNC(sub_83234B20);
PPC_FUNC_IMPL(__imp__sub_83234B20) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1642
	cr6.compare<uint32_t>(ctx.r11.u32, 1642, xer);
	// beq cr6,0x83234b6c
	if (cr6.eq) goto loc_83234B6C;
	// cmplwi cr6,r11,1643
	cr6.compare<uint32_t>(ctx.r11.u32, 1643, xer);
	// beq cr6,0x83234b64
	if (cr6.eq) goto loc_83234B64;
	// cmplwi cr6,r11,1644
	cr6.compare<uint32_t>(ctx.r11.u32, 1644, xer);
	// beq cr6,0x83234b5c
	if (cr6.eq) goto loc_83234B5C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83234B5C:
	// li r4,552
	ctx.r4.s64 = 552;
	// b 0x83234b70
	goto loc_83234B70;
loc_83234B64:
	// li r4,551
	ctx.r4.s64 = 551;
	// b 0x83234b70
	goto loc_83234B70;
loc_83234B6C:
	// li r4,559
	ctx.r4.s64 = 559;
loc_83234B70:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83234B78;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_83234B8C"))) PPC_WEAK_FUNC(sub_83234B8C);
PPC_FUNC_IMPL(__imp__sub_83234B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83234B90"))) PPC_WEAK_FUNC(sub_83234B90);
PPC_FUNC_IMPL(__imp__sub_83234B90) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,553
	cr6.compare<uint32_t>(ctx.r11.u32, 553, xer);
	// beq cr6,0x83234bcc
	if (cr6.eq) goto loc_83234BCC;
	// cmplwi cr6,r11,1645
	cr6.compare<uint32_t>(ctx.r11.u32, 1645, xer);
	// beq cr6,0x83234bc4
	if (cr6.eq) goto loc_83234BC4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83234BC4:
	// li r4,554
	ctx.r4.s64 = 554;
	// b 0x83234bd0
	goto loc_83234BD0;
loc_83234BCC:
	// li r4,1800
	ctx.r4.s64 = 1800;
loc_83234BD0:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83234BD8;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_83234BEC"))) PPC_WEAK_FUNC(sub_83234BEC);
PPC_FUNC_IMPL(__imp__sub_83234BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83234BF0"))) PPC_WEAK_FUNC(sub_83234BF0);
PPC_FUNC_IMPL(__imp__sub_83234BF0) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1646
	cr6.compare<uint32_t>(ctx.r11.u32, 1646, xer);
	// blt cr6,0x83234c30
	if (cr6.lt) goto loc_83234C30;
	// cmplwi cr6,r11,1651
	cr6.compare<uint32_t>(ctx.r11.u32, 1651, xer);
	// bgt cr6,0x83234c30
	if (cr6.gt) goto loc_83234C30;
	// addi r4,r11,-1646
	ctx.r4.s64 = ctx.r11.s64 + -1646;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x83234C1C;
	sub_8322E5B0(ctx, base);
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
loc_83234C30:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83234C44"))) PPC_WEAK_FUNC(sub_83234C44);
PPC_FUNC_IMPL(__imp__sub_83234C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83234C48"))) PPC_WEAK_FUNC(sub_83234C48);
PPC_FUNC_IMPL(__imp__sub_83234C48) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1652
	cr6.compare<uint32_t>(ctx.r11.u32, 1652, xer);
	// beq cr6,0x83234c84
	if (cr6.eq) goto loc_83234C84;
	// cmplwi cr6,r11,1653
	cr6.compare<uint32_t>(ctx.r11.u32, 1653, xer);
	// beq cr6,0x83234c7c
	if (cr6.eq) goto loc_83234C7C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83234C7C:
	// li r4,561
	ctx.r4.s64 = 561;
	// b 0x83234c88
	goto loc_83234C88;
loc_83234C84:
	// li r4,560
	ctx.r4.s64 = 560;
loc_83234C88:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83234C90;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_83234CA4"))) PPC_WEAK_FUNC(sub_83234CA4);
PPC_FUNC_IMPL(__imp__sub_83234CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83234CA8"))) PPC_WEAK_FUNC(sub_83234CA8);
PPC_FUNC_IMPL(__imp__sub_83234CA8) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1633
	cr6.compare<uint32_t>(ctx.r11.u32, 1633, xer);
	// beq cr6,0x83234cf4
	if (cr6.eq) goto loc_83234CF4;
	// cmplwi cr6,r11,1654
	cr6.compare<uint32_t>(ctx.r11.u32, 1654, xer);
	// beq cr6,0x83234cec
	if (cr6.eq) goto loc_83234CEC;
	// cmplwi cr6,r11,1655
	cr6.compare<uint32_t>(ctx.r11.u32, 1655, xer);
	// beq cr6,0x83234ce4
	if (cr6.eq) goto loc_83234CE4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83234CE4:
	// li r4,563
	ctx.r4.s64 = 563;
	// b 0x83234cf8
	goto loc_83234CF8;
loc_83234CEC:
	// li r4,562
	ctx.r4.s64 = 562;
	// b 0x83234cf8
	goto loc_83234CF8;
loc_83234CF4:
	// li r4,543
	ctx.r4.s64 = 543;
loc_83234CF8:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83234D00;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_83234D14"))) PPC_WEAK_FUNC(sub_83234D14);
PPC_FUNC_IMPL(__imp__sub_83234D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83234D18"))) PPC_WEAK_FUNC(sub_83234D18);
PPC_FUNC_IMPL(__imp__sub_83234D18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83234D20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,24688
	ctx.r29.s64 = ctx.r11.s64 + 24688;
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// lis r8,84
	ctx.r8.s64 = 5505024;
	// ori r9,r10,4096
	ctx.r9.u64 = ctx.r10.u64 | 4096;
	// li r7,-100
	ctx.r7.s64 = -100;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// sth r7,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r7.u16);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r6,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r6.u32);
	// bl 0x831fe158
	ctx.lr = 0x83234D6C;
	sub_831FE158(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x831fbe28
	ctx.lr = 0x83234D74;
	sub_831FBE28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832136e0
	ctx.lr = 0x83234D7C;
	sub_832136E0(ctx, base);
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// lhz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// ori r11,r3,128
	ctx.r11.u64 = ctx.r3.u64 | 128;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r9,268(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r5,122
	ctx.r5.s64 = 122;
	// std r30,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// li r4,256
	ctx.r4.s64 = 256;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// ori r8,r10,128
	ctx.r8.u64 = ctx.r10.u64 | 128;
	// sth r30,224(r31)
	PPC_STORE_U16(ctx.r31.u32 + 224, ctx.r30.u16);
	// std r30,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r30.u64);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// std r30,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r30.u64);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// sth r5,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r5.u16);
	// sth r4,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r4.u16);
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r30,79(r31)
	PPC_STORE_U8(ctx.r31.u32 + 79, ctx.r30.u8);
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// beq cr6,0x83234ddc
	if (cr6.eq) goto loc_83234DDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83213448
	ctx.lr = 0x83234DDC;
	sub_83213448(ctx, base);
loc_83234DDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83234DE4"))) PPC_WEAK_FUNC(sub_83234DE4);
PPC_FUNC_IMPL(__imp__sub_83234DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83234DE8"))) PPC_WEAK_FUNC(sub_83234DE8);
PPC_FUNC_IMPL(__imp__sub_83234DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83234DF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,364
	ctx.r10.s64 = 364;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// dcbt r30,r10
	// addi r3,r30,364
	ctx.r3.s64 = ctx.r30.s64 + 364;
	// bl 0x8325b4d8
	ctx.lr = 0x83234E0C;
	sub_8325B4D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83234d18
	ctx.lr = 0x83234E14;
	sub_83234D18(ctx, base);
	// lhz r7,364(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 364);
	// lhz r11,374(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 374);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,424(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mullw r31,r7,r11
	ctx.r31.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, xer);
	// beq cr6,0x83234e7c
	if (cr6.eq) goto loc_83234E7C;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,420(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// bl 0x83209df8
	ctx.lr = 0x83234E44;
	sub_83209DF8(ctx, base);
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// stw r3,420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 420, ctx.r3.u32);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// bge cr6,0x83234e70
	if (!cr6.lt) goto loc_83234E70;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83234E60:
	// lwz r10,420(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// stwx r28,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83234e60
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83234E60;
loc_83234E70:
	// lhz r11,374(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 374);
	// lhz r7,364(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 364);
	// stw r31,424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 424, ctx.r31.u32);
loc_83234E7C:
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83234edc
	if (!cr6.gt) goto loc_83234EDC;
	// lwz r11,388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
loc_83234E94:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bgt cr6,0x83234f00
	if (cr6.gt) goto loc_83234F00;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// bge cr6,0x83234f00
	if (!cr6.lt) goto loc_83234F00;
	// lbz r9,14(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83234eec
	if (cr6.eq) goto loc_83234EEC;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
loc_83234EC4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x83234edc
	if (!cr6.lt) goto loc_83234EDC;
loc_83234ECC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmpw cr6,r28,r8
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, xer);
	// blt cr6,0x83234e94
	if (cr6.lt) goto loc_83234E94;
loc_83234EDC:
	// cmpw cr6,r28,r8
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, xer);
	// bne cr6,0x83234f08
	if (!cr6.eq) goto loc_83234F08;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x83234f28
	goto loc_83234F28;
loc_83234EEC:
	// lhz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// subf r6,r11,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r11.s64;
	// divwu r11,r6,r5
	ctx.r11.u32 = PPCDivide(ctx.r6.u32, ctx.r5.u32);
	// twllei r5,0
	// b 0x83234ec4
	goto loc_83234EC4;
loc_83234F00:
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x83234ecc
	goto loc_83234ECC;
loc_83234F08:
	// lbz r10,376(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 376);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83234f1c
	if (cr6.eq) goto loc_83234F1C;
	// slw r10,r28,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x83234f24
	goto loc_83234F24;
loc_83234F1C:
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
loc_83234F24:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_83234F28:
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// lwz r9,420(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,24688
	ctx.r7.s64 = ctx.r10.s64 + 24688;
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r29,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r29.u32);
	// lhz r11,36(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 36);
	// rlwimi r5,r11,16,5,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x7FF0000) | (ctx.r5.u64 & 0xFFFFFFFFF800FFFF);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// sth r4,36(r7)
	PPC_STORE_U16(ctx.r7.u32 + 36, ctx.r4.u16);
	// stw r10,264(r29)
	PPC_STORE_U32(ctx.r29.u32 + 264, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83234F68"))) PPC_WEAK_FUNC(sub_83234F68);
PPC_FUNC_IMPL(__imp__sub_83234F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,364
	ctx.r10.s64 = 364;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// dcbt r11,r10
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,364
	ctx.r3.s64 = ctx.r11.s64 + 364;
	// b 0x8325b658
	sub_8325B658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83234F84"))) PPC_WEAK_FUNC(sub_83234F84);
PPC_FUNC_IMPL(__imp__sub_83234F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83234F88"))) PPC_WEAK_FUNC(sub_83234F88);
PPC_FUNC_IMPL(__imp__sub_83234F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// rlwinm r10,r3,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFFC;
	// addi r9,r11,26752
	ctx.r9.s64 = ctx.r11.s64 + 26752;
	// lwz r11,420(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 420);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83234fac
	if (!cr6.eq) goto loc_83234FAC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83234FAC:
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 & ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83234FC4"))) PPC_WEAK_FUNC(sub_83234FC4);
PPC_FUNC_IMPL(__imp__sub_83234FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83234FC8"))) PPC_WEAK_FUNC(sub_83234FC8);
PPC_FUNC_IMPL(__imp__sub_83234FC8) {
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
	// bl 0x83234de8
	ctx.lr = 0x83234FDC;
	sub_83234DE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8321c750
	ctx.lr = 0x83234FE4;
	sub_8321C750(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x83215368
	ctx.lr = 0x83234FF8;
	sub_83215368(ctx, base);
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

__attribute__((alias("__imp__sub_83235010"))) PPC_WEAK_FUNC(sub_83235010);
PPC_FUNC_IMPL(__imp__sub_83235010) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83235018;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83235030
	if (cr6.eq) goto loc_83235030;
	// bl 0x8320e738
	ctx.lr = 0x83235030;
	sub_8320E738(ctx, base);
loc_83235030:
	// bl 0x83234de8
	ctx.lr = 0x83235034;
	sub_83234DE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8321c750
	ctx.lr = 0x8323503C;
	sub_8321C750(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x83215368
	ctx.lr = 0x83235050;
	sub_83215368(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r9,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r9.u16);
	// bl 0x832018e0
	ctx.lr = 0x83235064;
	sub_832018E0(ctx, base);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r6,r7,8400
	ctx.r6.u64 = ctx.r7.u64 | 8400;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lhz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lhz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sraw r3,r6,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r3.s64 = ctx.r6.s32 >> temp.u32;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83235094
	if (cr6.eq) goto loc_83235094;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83235094;
	sub_83222030(ctx, base);
loc_83235094:
	// li r11,13
	ctx.r11.s64 = 13;
	// sth r29,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r29.u16);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832350AC"))) PPC_WEAK_FUNC(sub_832350AC);
PPC_FUNC_IMPL(__imp__sub_832350AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832350B0"))) PPC_WEAK_FUNC(sub_832350B0);
PPC_FUNC_IMPL(__imp__sub_832350B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832350B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r10,264(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lis r9,-31748
	ctx.r9.s64 = -2080636928;
	// addi r8,r11,26752
	ctx.r8.s64 = ctx.r11.s64 + 26752;
	// rlwinm r7,r10,2,14,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// addi r6,r9,24688
	ctx.r6.s64 = ctx.r9.s64 + 24688;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,420(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 420);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stwx r29,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832350f8
	if (cr6.eq) goto loc_832350F8;
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
loc_832350F8:
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bne cr6,0x8323510c
	if (!cr6.eq) goto loc_8323510C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323510c
	if (cr6.eq) goto loc_8323510C;
	// stw r29,356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 356, ctx.r29.u32);
loc_8323510C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323512c
	if (cr6.eq) goto loc_8323512C;
loc_83235118:
	// lwz r30,64(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// bl 0x832356e0
	ctx.lr = 0x83235120;
	sub_832356E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83235118
	if (!cr6.eq) goto loc_83235118;
loc_8323512C:
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83213c78
	ctx.lr = 0x83235138;
	sub_83213C78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217b38
	ctx.lr = 0x83235144;
	sub_83217B38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832139b8
	ctx.lr = 0x8323514C;
	sub_832139B8(ctx, base);
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83235174
	if (cr6.eq) goto loc_83235174;
	// bl 0x832173b0
	ctx.lr = 0x8323515C;
	sub_832173B0(ctx, base);
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83235170
	if (cr6.eq) goto loc_83235170;
	// bl 0x83209d68
	ctx.lr = 0x8323516C;
	sub_83209D68(ctx, base);
	// stw r29,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r29.u32);
loc_83235170:
	// stw r29,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r29.u32);
loc_83235174:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832176a8
	ctx.lr = 0x8323517C;
	sub_832176A8(ctx, base);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83235190
	if (cr6.eq) goto loc_83235190;
	// bl 0x83209d68
	ctx.lr = 0x8323518C;
	sub_83209D68(ctx, base);
	// stw r29,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r29.u32);
loc_83235190:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83235198"))) PPC_WEAK_FUNC(sub_83235198);
PPC_FUNC_IMPL(__imp__sub_83235198) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,168
	ctx.r10.s64 = 168;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// dcbt r11,r10
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// bl 0x8325b4d8
	ctx.lr = 0x832351BC;
	sub_8325B4D8(ctx, base);
	// lis r9,-31748
	ctx.r9.s64 = -2080636928;
	// lhz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r8,29
	ctx.r8.s64 = 29;
	// addi r7,r9,24688
	ctx.r7.s64 = ctx.r9.s64 + 24688;
	// ori r4,r5,128
	ctx.r4.u64 = ctx.r5.u64 | 128;
	// li r6,163
	ctx.r6.s64 = 163;
	// sth r4,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r4.u16);
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// sth r8,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r8.u16);
	// sth r6,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r6.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832351F8"))) PPC_WEAK_FUNC(sub_832351F8);
PPC_FUNC_IMPL(__imp__sub_832351F8) {
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
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323523c
	if (cr6.eq) goto loc_8323523C;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
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
loc_8323523C:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(ctx.r11.u32, 43, xer);
	// bne cr6,0x83235274
	if (!cr6.eq) goto loc_83235274;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83276838
	ctx.lr = 0x83235250;
	sub_83276838(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83235274
	if (!cr6.eq) goto loc_83235274;
loc_8323525C:
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
loc_83235274:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83235298
	if (cr6.eq) goto loc_83235298;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83201728
	ctx.lr = 0x8323528C;
	sub_83201728(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8323525c
	if (!cr6.eq) goto loc_8323525C;
loc_83235298:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83201cf0
	ctx.lr = 0x832352A0;
	sub_83201CF0(ctx, base);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,92
	cr6.compare<uint32_t>(ctx.r10.u32, 92, xer);
	// bgt cr6,0x832354ac
	if (cr6.gt) goto loc_832354AC;
	// beq cr6,0x832354a0
	if (cr6.eq) goto loc_832354A0;
	// cmplwi cr6,r10,90
	cr6.compare<uint32_t>(ctx.r10.u32, 90, xer);
	// bgt cr6,0x8323563c
	if (cr6.gt) goto loc_8323563C;
	// lis r12,-31965
	ctx.r12.s64 = -2094858240;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,21204
	ctx.r12.s64 = ctx.r12.s64 + 21204;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83235664;
	case 1:
		goto loc_8323563C;
	case 2:
		goto loc_8323563C;
	case 3:
		goto loc_8323563C;
	case 4:
		goto loc_8323563C;
	case 5:
		goto loc_8323563C;
	case 6:
		goto loc_8323563C;
	case 7:
		goto loc_8323563C;
	case 8:
		goto loc_8323563C;
	case 9:
		goto loc_8323563C;
	case 10:
		goto loc_8323563C;
	case 11:
		goto loc_8323563C;
	case 12:
		goto loc_8323563C;
	case 13:
		goto loc_8323563C;
	case 14:
		goto loc_8323563C;
	case 15:
		goto loc_8323563C;
	case 16:
		goto loc_8323563C;
	case 17:
		goto loc_8323563C;
	case 18:
		goto loc_8323563C;
	case 19:
		goto loc_8323563C;
	case 20:
		goto loc_8323563C;
	case 21:
		goto loc_8323563C;
	case 22:
		goto loc_8323563C;
	case 23:
		goto loc_8323563C;
	case 24:
		goto loc_8323563C;
	case 25:
		goto loc_8323563C;
	case 26:
		goto loc_8323563C;
	case 27:
		goto loc_8323563C;
	case 28:
		goto loc_8323563C;
	case 29:
		goto loc_83235664;
	case 30:
		goto loc_8323547C;
	case 31:
		goto loc_83235440;
	case 32:
		goto loc_83235470;
	case 33:
		goto loc_83235458;
	case 34:
		goto loc_83235664;
	case 35:
		goto loc_83235664;
	case 36:
		goto loc_8323563C;
	case 37:
		goto loc_83235664;
	case 38:
		goto loc_83235664;
	case 39:
		goto loc_83235664;
	case 40:
		goto loc_83235664;
	case 41:
		goto loc_83235664;
	case 42:
		goto loc_83235664;
	case 43:
		goto loc_83235464;
	case 44:
		goto loc_83235664;
	case 45:
		goto loc_83235664;
	case 46:
		goto loc_83235664;
	case 47:
		goto loc_83235664;
	case 48:
		goto loc_83235664;
	case 49:
		goto loc_8323563C;
	case 50:
		goto loc_83235664;
	case 51:
		goto loc_83235664;
	case 52:
		goto loc_83235664;
	case 53:
		goto loc_83235664;
	case 54:
		goto loc_83235664;
	case 55:
		goto loc_83235488;
	case 56:
		goto loc_83235664;
	case 57:
		goto loc_83235664;
	case 58:
		goto loc_83235664;
	case 59:
		goto loc_8323544C;
	case 60:
		goto loc_83235664;
	case 61:
		goto loc_83235664;
	case 62:
		goto loc_83235664;
	case 63:
		goto loc_83235664;
	case 64:
		goto loc_83235664;
	case 65:
		goto loc_83235664;
	case 66:
		goto loc_83235664;
	case 67:
		goto loc_83235664;
	case 68:
		goto loc_83235494;
	case 69:
		goto loc_8323563C;
	case 70:
		goto loc_83235664;
	case 71:
		goto loc_83235664;
	case 72:
		goto loc_83235664;
	case 73:
		goto loc_83235664;
	case 74:
		goto loc_83235664;
	case 75:
		goto loc_83235664;
	case 76:
		goto loc_83235664;
	case 77:
		goto loc_83235664;
	case 78:
		goto loc_8323563C;
	case 79:
		goto loc_83235664;
	case 80:
		goto loc_83235664;
	case 81:
		goto loc_83235664;
	case 82:
		goto loc_83235664;
	case 83:
		goto loc_83235664;
	case 84:
		goto loc_8323563C;
	case 85:
		goto loc_83235664;
	case 86:
		goto loc_83235664;
	case 87:
		goto loc_83235664;
	case 88:
		goto loc_8323563C;
	case 89:
		goto loc_83235664;
	case 90:
		goto loc_83235664;
	default:
		return;
	}
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,21628(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21628);
	// lwz r25,21568(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21568);
	// lwz r25,21616(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21616);
	// lwz r25,21592(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21592);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,21604(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21604);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,21640(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21640);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,21580(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21580);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,21652(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21652);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
loc_83235440:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83236400
	ctx.lr = 0x83235448;
	sub_83236400(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_8323544C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83236500
	ctx.lr = 0x83235454;
	sub_83236500(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_83235458:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328b2b8
	ctx.lr = 0x83235460;
	sub_8328B2B8(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_83235464:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83276980
	ctx.lr = 0x8323546C;
	sub_83276980(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_83235470:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83270860
	ctx.lr = 0x83235478;
	sub_83270860(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_8323547C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83273b10
	ctx.lr = 0x83235484;
	sub_83273B10(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_83235488:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83291500
	ctx.lr = 0x83235490;
	sub_83291500(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_83235494:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832730c8
	ctx.lr = 0x8323549C;
	sub_832730C8(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_832354A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255ed0
	ctx.lr = 0x832354A8;
	sub_83255ED0(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_832354AC:
	// cmplwi cr6,r11,115
	cr6.compare<uint32_t>(ctx.r11.u32, 115, xer);
	// bgt cr6,0x8323559c
	if (cr6.gt) goto loc_8323559C;
	// beq cr6,0x83235590
	if (cr6.eq) goto loc_83235590;
	// addi r11,r11,-94
	ctx.r11.s64 = ctx.r11.s64 + -94;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bgt cr6,0x8323563c
	if (cr6.gt) goto loc_8323563C;
	// lis r12,-31965
	ctx.r12.s64 = -2094858240;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,21724
	ctx.r12.s64 = ctx.r12.s64 + 21724;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83235664;
	case 1:
		goto loc_8323563C;
	case 2:
		goto loc_8323563C;
	case 3:
		goto loc_8323563C;
	case 4:
		goto loc_8323563C;
	case 5:
		goto loc_8323563C;
	case 6:
		goto loc_8323563C;
	case 7:
		goto loc_8323563C;
	case 8:
		goto loc_8323563C;
	case 9:
		goto loc_8323563C;
	case 10:
		goto loc_83235664;
	case 11:
		goto loc_83235664;
	case 12:
		goto loc_8323553C;
	case 13:
		goto loc_83235530;
	case 14:
		goto loc_83235548;
	case 15:
		goto loc_83235554;
	case 16:
		goto loc_83235664;
	case 17:
		goto loc_83235560;
	case 18:
		goto loc_8323556C;
	case 19:
		goto loc_83235578;
	case 20:
		goto loc_83235584;
	default:
		return;
	}
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22076(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22076);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,21820(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21820);
	// lwz r25,21808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21808);
	// lwz r25,21832(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21832);
	// lwz r25,21844(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21844);
	// lwz r25,22116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22116);
	// lwz r25,21856(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21856);
	// lwz r25,21868(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21868);
	// lwz r25,21880(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21880);
	// lwz r25,21892(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21892);
loc_83235530:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x83235538;
	sub_83102DB0(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_8323553C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x83235544;
	sub_83102DB0(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_83235548:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x83235550;
	sub_83102DB0(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_83235554:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x8323555C;
	sub_83102DB0(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_83235560:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x83235568;
	sub_83102DB0(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_8323556C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x83235574;
	sub_83102DB0(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_83235578:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x83235580;
	sub_83102DB0(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_83235584:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x8323558C;
	sub_83102DB0(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_83235590:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x83235598;
	sub_83102DB0(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_8323559C:
	// cmplwi cr6,r11,130
	cr6.compare<uint32_t>(ctx.r11.u32, 130, xer);
	// bgt cr6,0x83235624
	if (cr6.gt) goto loc_83235624;
	// cmplwi cr6,r11,126
	cr6.compare<uint32_t>(ctx.r11.u32, 126, xer);
	// bge cr6,0x8323568c
	if (!cr6.lt) goto loc_8323568C;
	// addi r11,r11,-116
	ctx.r11.s64 = ctx.r11.s64 + -116;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x8323563c
	if (cr6.gt) goto loc_8323563C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x832355e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832355E8;
	// bdzf 4*cr6+eq,0x832355f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832355F4;
	// bdzf 4*cr6+eq,0x83235600
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83235600;
	// bdzf 4*cr6+eq,0x8323560c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323560C;
	// bdzf 4*cr6+eq,0x83235618
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83235618;
	// bdzf 4*cr6+eq,0x8323568c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323568C;
	// bne cr6,0x8323568c
	if (!cr6.eq) goto loc_8323568C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x832355E4;
	sub_83102DB0(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_832355E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x832355F0;
	sub_83102DB0(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_832355F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x832355FC;
	sub_83102DB0(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_83235600:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x83235608;
	sub_83102DB0(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_8323560C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x83235614;
	sub_83102DB0(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_83235618:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x83235620;
	sub_83102DB0(ctx, base);
	// b 0x83235664
	goto loc_83235664;
loc_83235624:
	// cmplwi cr6,r11,132
	cr6.compare<uint32_t>(ctx.r11.u32, 132, xer);
	// blt cr6,0x8323563c
	if (cr6.lt) goto loc_8323563C;
	// cmplwi cr6,r11,133
	cr6.compare<uint32_t>(ctx.r11.u32, 133, xer);
	// ble cr6,0x8323568c
	if (!cr6.gt) goto loc_8323568C;
	// cmplwi cr6,r11,350
	cr6.compare<uint32_t>(ctx.r11.u32, 350, xer);
	// beq cr6,0x83235664
	if (cr6.eq) goto loc_83235664;
loc_8323563C:
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x83235648;
	sub_83221C30(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,-22544
	ctx.r9.s64 = ctx.r11.s64 + -22544;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,11424
	ctx.r4.s64 = ctx.r10.s64 + 11424;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x83235664;
	sub_832085E8(ctx, base);
loc_83235664:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83289930
	ctx.lr = 0x8323566C;
	sub_83289930(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
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
loc_8323568C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832350b0
	ctx.lr = 0x83235694;
	sub_832350B0(ctx, base);
	// b 0x83235664
	goto loc_83235664;
}

__attribute__((alias("__imp__sub_83235698"))) PPC_WEAK_FUNC(sub_83235698);
PPC_FUNC_IMPL(__imp__sub_83235698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// ld r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// ld r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r8,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r8.u64);
	// ld r7,24(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r7,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// sth r10,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r10.u16);
	// lhz r6,14(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// b 0x832894f8
	sub_832894F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832356D8"))) PPC_WEAK_FUNC(sub_832356D8);
PPC_FUNC_IMPL(__imp__sub_832356D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832356DC"))) PPC_WEAK_FUNC(sub_832356DC);
PPC_FUNC_IMPL(__imp__sub_832356DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832356E0"))) PPC_WEAK_FUNC(sub_832356E0);
PPC_FUNC_IMPL(__imp__sub_832356E0) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// bl 0x832351f8
	ctx.lr = 0x83235704;
	sub_832351F8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83235718
	if (!cr6.eq) goto loc_83235718;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83235944
	goto loc_83235944;
loc_83235718:
	// cmpwi cr6,r31,67
	cr6.compare<int32_t>(ctx.r31.s32, 67, xer);
	// bgt cr6,0x83235858
	if (cr6.gt) goto loc_83235858;
	// cmpwi cr6,r31,56
	cr6.compare<int32_t>(ctx.r31.s32, 56, xer);
	// bge cr6,0x83235990
	if (!cr6.lt) goto loc_83235990;
	// cmplwi cr6,r31,55
	cr6.compare<uint32_t>(ctx.r31.u32, 55, xer);
	// bgt cr6,0x83235918
	if (cr6.gt) goto loc_83235918;
	// lis r12,-31965
	ctx.r12.s64 = -2094858240;
	// rlwinm r0,r31,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,22344
	ctx.r12.s64 = ctx.r12.s64 + 22344;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r31.u32) {
	case 0:
		goto loc_83235990;
	case 1:
		goto loc_83235918;
	case 2:
		goto loc_83235918;
	case 3:
		goto loc_83235918;
	case 4:
		goto loc_83235918;
	case 5:
		goto loc_83235918;
	case 6:
		goto loc_83235918;
	case 7:
		goto loc_83235918;
	case 8:
		goto loc_83235918;
	case 9:
		goto loc_83235918;
	case 10:
		goto loc_83235918;
	case 11:
		goto loc_83235918;
	case 12:
		goto loc_83235918;
	case 13:
		goto loc_83235918;
	case 14:
		goto loc_83235918;
	case 15:
		goto loc_83235918;
	case 16:
		goto loc_83235918;
	case 17:
		goto loc_83235918;
	case 18:
		goto loc_83235918;
	case 19:
		goto loc_83235918;
	case 20:
		goto loc_83235918;
	case 21:
		goto loc_83235918;
	case 22:
		goto loc_83235918;
	case 23:
		goto loc_83235918;
	case 24:
		goto loc_83235918;
	case 25:
		goto loc_83235918;
	case 26:
		goto loc_83235918;
	case 27:
		goto loc_83235918;
	case 28:
		goto loc_83235918;
	case 29:
		goto loc_83235990;
	case 30:
		goto loc_832358E4;
	case 31:
		goto loc_83235990;
	case 32:
		goto loc_832358E4;
	case 33:
		goto loc_83235840;
	case 34:
		goto loc_8323584C;
	case 35:
		goto loc_83235990;
	case 36:
		goto loc_83235918;
	case 37:
		goto loc_83235990;
	case 38:
		goto loc_83235990;
	case 39:
		goto loc_83235990;
	case 40:
		goto loc_83235990;
	case 41:
		goto loc_83235990;
	case 42:
		goto loc_83235990;
	case 43:
		goto loc_83235828;
	case 44:
		goto loc_83235990;
	case 45:
		goto loc_83235990;
	case 46:
		goto loc_83235990;
	case 47:
		goto loc_83235990;
	case 48:
		goto loc_83235990;
	case 49:
		goto loc_83235918;
	case 50:
		goto loc_83235990;
	case 51:
		goto loc_83235990;
	case 52:
		goto loc_83235990;
	case 53:
		goto loc_83235990;
	case 54:
		goto loc_83235990;
	case 55:
		goto loc_83235834;
	default:
		return;
	}
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22756(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22756);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22756(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22756);
	// lwz r25,22592(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22592);
	// lwz r25,22604(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22604);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22568(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22568);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22580(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22580);
loc_83235828:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83276818
	ctx.lr = 0x83235830;
	sub_83276818(ctx, base);
	// b 0x83235940
	goto loc_83235940;
loc_83235834:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832914e0
	ctx.lr = 0x8323583C;
	sub_832914E0(ctx, base);
	// b 0x83235940
	goto loc_83235940;
loc_83235840:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328ba00
	ctx.lr = 0x83235848;
	sub_8328BA00(ctx, base);
	// b 0x83235940
	goto loc_83235940;
loc_8323584C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328ba00
	ctx.lr = 0x83235854;
	sub_8328BA00(ctx, base);
	// b 0x83235940
	goto loc_83235940;
loc_83235858:
	// cmpwi cr6,r31,92
	cr6.compare<int32_t>(ctx.r31.s32, 92, xer);
	// bgt cr6,0x832358f0
	if (cr6.gt) goto loc_832358F0;
	// beq cr6,0x832358e4
	if (cr6.eq) goto loc_832358E4;
	// addi r11,r31,-68
	ctx.r11.s64 = ctx.r31.s64 + -68;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// bgt cr6,0x83235918
	if (cr6.gt) goto loc_83235918;
	// lis r12,-31965
	ctx.r12.s64 = -2094858240;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,22664
	ctx.r12.s64 = ctx.r12.s64 + 22664;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_832358E4;
	case 1:
		goto loc_83235918;
	case 2:
		goto loc_83235990;
	case 3:
		goto loc_83235990;
	case 4:
		goto loc_83235990;
	case 5:
		goto loc_83235990;
	case 6:
		goto loc_83235990;
	case 7:
		goto loc_83235990;
	case 8:
		goto loc_83235990;
	case 9:
		goto loc_83235990;
	case 10:
		goto loc_83235918;
	case 11:
		goto loc_83235990;
	case 12:
		goto loc_83235990;
	case 13:
		goto loc_83235990;
	case 14:
		goto loc_83235990;
	case 15:
		goto loc_83235990;
	case 16:
		goto loc_83235918;
	case 17:
		goto loc_83235990;
	case 18:
		goto loc_83235990;
	case 19:
		goto loc_832358E4;
	case 20:
		goto loc_83235918;
	case 21:
		goto loc_83235990;
	case 22:
		goto loc_83235990;
	default:
		return;
	}
	// lwz r25,22756(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22756);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22756(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22756);
	// lwz r25,22808(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22808);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
	// lwz r25,22928(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22928);
loc_832358E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209d68
	ctx.lr = 0x832358EC;
	sub_83209D68(ctx, base);
	// b 0x83235940
	goto loc_83235940;
loc_832358F0:
	// cmpwi cr6,r31,130
	cr6.compare<int32_t>(ctx.r31.s32, 130, xer);
	// bgt cr6,0x83235978
	if (cr6.gt) goto loc_83235978;
	// cmpwi cr6,r31,126
	cr6.compare<int32_t>(ctx.r31.s32, 126, xer);
	// bge cr6,0x8323596c
	if (!cr6.lt) goto loc_8323596C;
	// cmpwi cr6,r31,121
	cr6.compare<int32_t>(ctx.r31.s32, 121, xer);
	// bgt cr6,0x8323595c
	if (cr6.gt) goto loc_8323595C;
	// cmpwi cr6,r31,104
	cr6.compare<int32_t>(ctx.r31.s32, 104, xer);
	// bge cr6,0x83235990
	if (!cr6.lt) goto loc_83235990;
	// cmpwi cr6,r31,94
	cr6.compare<int32_t>(ctx.r31.s32, 94, xer);
	// beq cr6,0x83235990
	if (cr6.eq) goto loc_83235990;
loc_83235918:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x83235924;
	sub_83221C30(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,-22544
	ctx.r9.s64 = ctx.r11.s64 + -22544;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,11464
	ctx.r4.s64 = ctx.r10.s64 + 11464;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x83235940;
	sub_832085E8(ctx, base);
loc_83235940:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83235944:
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
loc_8323595C:
	// cmpwi cr6,r31,122
	cr6.compare<int32_t>(ctx.r31.s32, 122, xer);
	// blt cr6,0x83235918
	if (cr6.lt) goto loc_83235918;
	// cmpwi cr6,r31,123
	cr6.compare<int32_t>(ctx.r31.s32, 123, xer);
	// bgt cr6,0x83235918
	if (cr6.gt) goto loc_83235918;
loc_8323596C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83234f68
	ctx.lr = 0x83235974;
	sub_83234F68(ctx, base);
	// b 0x83235940
	goto loc_83235940;
loc_83235978:
	// cmpwi cr6,r31,132
	cr6.compare<int32_t>(ctx.r31.s32, 132, xer);
	// blt cr6,0x83235918
	if (cr6.lt) goto loc_83235918;
	// cmpwi cr6,r31,133
	cr6.compare<int32_t>(ctx.r31.s32, 133, xer);
	// ble cr6,0x8323596c
	if (!cr6.gt) goto loc_8323596C;
	// cmpwi cr6,r31,350
	cr6.compare<int32_t>(ctx.r31.s32, 350, xer);
	// bne cr6,0x83235918
	if (!cr6.eq) goto loc_83235918;
loc_83235990:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,168
	ctx.r10.s64 = 168;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// dcbt r11,r10
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// bl 0x8325b658
	ctx.lr = 0x832359AC;
	sub_8325B658(ctx, base);
	// b 0x83235940
	goto loc_83235940;
}

__attribute__((alias("__imp__sub_832359B0"))) PPC_WEAK_FUNC(sub_832359B0);
PPC_FUNC_IMPL(__imp__sub_832359B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832359bc
	if (!cr6.eq) goto loc_832359BC;
	// blr 
	return;
loc_832359BC:
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83235a04
	if (cr6.eq) goto loc_83235A04;
	// dcbt r0,r7
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83235a04
	if (!cr6.gt) goto loc_83235A04;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832359E4:
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r6,5(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r6,52
	cr6.compare<uint32_t>(ctx.r6.u32, 52, xer);
	// beq cr6,0x83235a08
	if (cr6.eq) goto loc_83235A08;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x832359e4
	if (cr6.lt) goto loc_832359E4;
loc_83235A04:
	// li r9,0
	ctx.r9.s64 = 0;
loc_83235A08:
	// addic r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r3,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83235A14"))) PPC_WEAK_FUNC(sub_83235A14);
PPC_FUNC_IMPL(__imp__sub_83235A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83235A18"))) PPC_WEAK_FUNC(sub_83235A18);
PPC_FUNC_IMPL(__imp__sub_83235A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r11,26636
	ctx.r3.s64 = ctx.r11.s64 + 26636;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83294018
	sub_83294018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83235A2C"))) PPC_WEAK_FUNC(sub_83235A2C);
PPC_FUNC_IMPL(__imp__sub_83235A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83235A30"))) PPC_WEAK_FUNC(sub_83235A30);
PPC_FUNC_IMPL(__imp__sub_83235A30) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r31,r11,26636
	ctx.r31.s64 = ctx.r11.s64 + 26636;
	// lhz r11,26636(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26636);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83235aa4
	if (!cr6.gt) goto loc_83235AA4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_83235A64:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83235a80
	if (!cr6.eq) goto loc_83235A80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83235a64
	if (cr6.lt) goto loc_83235A64;
loc_83235A80:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83235aa4
	if (cr6.lt) goto loc_83235AA4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83235a9c
	if (cr6.eq) goto loc_83235A9C;
	// bl 0x83209d68
	ctx.lr = 0x83235A94;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83235A9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_83235AA4:
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

__attribute__((alias("__imp__sub_83235ABC"))) PPC_WEAK_FUNC(sub_83235ABC);
PPC_FUNC_IMPL(__imp__sub_83235ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83235AC0"))) PPC_WEAK_FUNC(sub_83235AC0);
PPC_FUNC_IMPL(__imp__sub_83235AC0) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r31,r11,26636
	ctx.r31.s64 = ctx.r11.s64 + 26636;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83235b34
	if (!cr6.gt) goto loc_83235B34;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_83235AF4:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83235b10
	if (!cr6.eq) goto loc_83235B10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83235af4
	if (cr6.lt) goto loc_83235AF4;
loc_83235B10:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83235b34
	if (cr6.lt) goto loc_83235B34;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83235b2c
	if (cr6.eq) goto loc_83235B2C;
	// bl 0x83209d68
	ctx.lr = 0x83235B24;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83235B2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
loc_83235B34:
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

__attribute__((alias("__imp__sub_83235B4C"))) PPC_WEAK_FUNC(sub_83235B4C);
PPC_FUNC_IMPL(__imp__sub_83235B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83235B50"))) PPC_WEAK_FUNC(sub_83235B50);
PPC_FUNC_IMPL(__imp__sub_83235B50) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83235ccc
	if (cr6.eq) goto loc_83235CCC;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83235ccc
	if (cr6.eq) goto loc_83235CCC;
	// dcbt r0,r8
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83235ccc
	if (!cr6.gt) goto loc_83235CCC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83235BA0:
	// add r31,r11,r8
	ctx.r31.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r7,5(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r7,32
	cr6.compare<uint32_t>(ctx.r7.u32, 32, xer);
	// beq cr6,0x83235bc4
	if (cr6.eq) goto loc_83235BC4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83235ba0
	if (cr6.lt) goto loc_83235BA0;
	// b 0x83235ccc
	goto loc_83235CCC;
loc_83235BC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322c978
	ctx.lr = 0x83235BE0;
	sub_8322C978(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83255b10
	ctx.lr = 0x83235BF0;
	sub_83255B10(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83206fa0
	ctx.lr = 0x83235BF8;
	sub_83206FA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83235cb8
	if (!cr6.eq) goto loc_83235CB8;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x83220448
	ctx.lr = 0x83235C0C;
	sub_83220448(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x83235c24
	if (!cr6.lt) goto loc_83235C24;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83235C24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83235c74
	if (cr6.eq) goto loc_83235C74;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83235c4c
	if (!cr6.eq) goto loc_83235C4C;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x83235c50
	goto loc_83235C50;
loc_83235C4C:
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
loc_83235C50:
	// fsubs f12,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-23580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,50
	cr6.compare<int32_t>(ctx.r10.s32, 50, xer);
	// bgt cr6,0x83235c7c
	if (cr6.gt) goto loc_83235C7C;
loc_83235C74:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x83235c84
	if (!cr6.lt) goto loc_83235C84;
loc_83235C7C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83235c88
	goto loc_83235C88;
loc_83235C84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83235C88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83235ccc
	if (cr6.eq) goto loc_83235CCC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83266348
	ctx.lr = 0x83235CA8;
	sub_83266348(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322b7d0
	ctx.lr = 0x83235CB4;
	sub_8322B7D0(ctx, base);
	// b 0x83235ccc
	goto loc_83235CCC;
loc_83235CB8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8322c038
	ctx.lr = 0x83235CCC;
	sub_8322C038(ctx, base);
loc_83235CCC:
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

__attribute__((alias("__imp__sub_83235CE4"))) PPC_WEAK_FUNC(sub_83235CE4);
PPC_FUNC_IMPL(__imp__sub_83235CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83235CE8"))) PPC_WEAK_FUNC(sub_83235CE8);
PPC_FUNC_IMPL(__imp__sub_83235CE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83235CF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,26636
	ctx.r28.s64 = ctx.r11.s64 + 26636;
	// lhz r11,26636(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26636);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83235e5c
	if (!cr6.gt) goto loc_83235E5C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83235D14:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83235e44
	if (cr6.eq) goto loc_83235E44;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831ffdd8
	ctx.lr = 0x83235D2C;
	sub_831FFDD8(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83235d68
	if (cr6.eq) goto loc_83235D68;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266348
	ctx.lr = 0x83235D5C;
	sub_83266348(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
loc_83235D68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832356e0
	ctx.lr = 0x83235D70;
	sub_832356E0(ctx, base);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83235dc0
	if (cr6.eq) goto loc_83235DC0;
	// dcbt r0,r8
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83235dc0
	if (!cr6.gt) goto loc_83235DC0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83235D98:
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r7,52
	cr6.compare<uint32_t>(ctx.r7.u32, 52, xer);
	// beq cr6,0x83235dc4
	if (cr6.eq) goto loc_83235DC4;
	// lhz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// blt cr6,0x83235d98
	if (cr6.lt) goto loc_83235D98;
loc_83235DC0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_83235DC4:
	// addic r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83235e44
	if (cr6.eq) goto loc_83235E44;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83235e24
	if (cr6.eq) goto loc_83235E24;
	// dcbt r0,r8
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83235e24
	if (!cr6.gt) goto loc_83235E24;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83235DFC:
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r7,32
	cr6.compare<uint32_t>(ctx.r7.u32, 32, xer);
	// beq cr6,0x83235e28
	if (cr6.eq) goto loc_83235E28;
	// lhz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// blt cr6,0x83235dfc
	if (cr6.lt) goto loc_83235DFC;
loc_83235E24:
	// li r9,0
	ctx.r9.s64 = 0;
loc_83235E28:
	// addic r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83235e44
	if (!cr6.eq) goto loc_83235E44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832356e0
	ctx.lr = 0x83235E44;
	sub_832356E0(ctx, base);
loc_83235E44:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x83235d14
	if (cr6.lt) goto loc_83235D14;
loc_83235E5C:
	// lhz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// li r29,0
	ctx.r29.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83235f70
	if (!cr6.gt) goto loc_83235F70;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83235E74:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83235f58
	if (cr6.eq) goto loc_83235F58;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831ffdd8
	ctx.lr = 0x83235E8C;
	sub_831FFDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83235b50
	ctx.lr = 0x83235E94;
	sub_83235B50(ctx, base);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83235edc
	if (cr6.eq) goto loc_83235EDC;
	// dcbt r0,r7
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83235edc
	if (!cr6.gt) goto loc_83235EDC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83235EBC:
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r6,5(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r6,52
	cr6.compare<uint32_t>(ctx.r6.u32, 52, xer);
	// beq cr6,0x83235ee0
	if (cr6.eq) goto loc_83235EE0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x83235ebc
	if (cr6.lt) goto loc_83235EBC;
loc_83235EDC:
	// li r9,0
	ctx.r9.s64 = 0;
loc_83235EE0:
	// addic r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83235f58
	if (cr6.eq) goto loc_83235F58;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83235f38
	if (cr6.eq) goto loc_83235F38;
	// dcbt r0,r7
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83235f38
	if (!cr6.gt) goto loc_83235F38;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83235F18:
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r6,5(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r6,32
	cr6.compare<uint32_t>(ctx.r6.u32, 32, xer);
	// beq cr6,0x83235f3c
	if (cr6.eq) goto loc_83235F3C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x83235f18
	if (cr6.lt) goto loc_83235F18;
loc_83235F38:
	// li r9,0
	ctx.r9.s64 = 0;
loc_83235F3C:
	// addic r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83235f58
	if (!cr6.eq) goto loc_83235F58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832356e0
	ctx.lr = 0x83235F58;
	sub_832356E0(ctx, base);
loc_83235F58:
	// lhz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x83235e74
	if (cr6.lt) goto loc_83235E74;
loc_83235F70:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ffdd8
	ctx.lr = 0x83235F78;
	sub_831FFDD8(ctx, base);
	// bl 0x83235a30
	ctx.lr = 0x83235F7C;
	sub_83235A30(ctx, base);
	// bl 0x83235ac0
	ctx.lr = 0x83235F80;
	sub_83235AC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83235F88"))) PPC_WEAK_FUNC(sub_83235F88);
PPC_FUNC_IMPL(__imp__sub_83235F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83235F90;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r28,r11,26636
	ctx.r28.s64 = ctx.r11.s64 + 26636;
	// addi r25,r10,11620
	ctx.r25.s64 = ctx.r10.s64 + 11620;
	// li r27,0
	ctx.r27.s64 = 0;
	// lhz r11,26636(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26636);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83236038
	if (!cr6.gt) goto loc_83236038;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r29,r10,11580
	ctx.r29.s64 = ctx.r10.s64 + 11580;
loc_83235FCC:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwzx r5,r31,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83236024
	if (cr6.eq) goto loc_83236024;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r10,r26
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, xer);
	// bne cr6,0x83236024
	if (!cr6.eq) goto loc_83236024;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x832359b0
	ctx.lr = 0x83235FF0;
	sub_832359B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83236008
	if (cr6.eq) goto loc_83236008;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x832356e0
	ctx.lr = 0x83236004;
	sub_832356E0(ctx, base);
	// b 0x83236018
	goto loc_83236018;
loc_83236008:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x832085e8
	ctx.lr = 0x83236018;
	sub_832085E8(ctx, base);
loc_83236018:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stwx r27,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u32);
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
loc_83236024:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x83235fcc
	if (cr6.lt) goto loc_83235FCC;
loc_83236038:
	// lhz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8323610c
	if (!cr6.gt) goto loc_8323610C;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r29,r10,11532
	ctx.r29.s64 = ctx.r10.s64 + 11532;
loc_83236058:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832360f8
	if (cr6.eq) goto loc_832360F8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r10,r26
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, xer);
	// bne cr6,0x832360f8
	if (!cr6.eq) goto loc_832360F8;
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x832360bc
	if (cr6.eq) goto loc_832360BC;
	// dcbt r0,r7
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x832360bc
	if (!cr6.gt) goto loc_832360BC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8323609C:
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r6,5(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r6,52
	cr6.compare<uint32_t>(ctx.r6.u32, 52, xer);
	// beq cr6,0x832360c0
	if (cr6.eq) goto loc_832360C0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x8323609c
	if (cr6.lt) goto loc_8323609C;
loc_832360BC:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_832360C0:
	// addic r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832360dc
	if (cr6.eq) goto loc_832360DC;
	// bl 0x832356e0
	ctx.lr = 0x832360D8;
	sub_832356E0(ctx, base);
	// b 0x832360ec
	goto loc_832360EC;
loc_832360DC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x832085e8
	ctx.lr = 0x832360EC;
	sub_832085E8(ctx, base);
loc_832360EC:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stwx r27,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u32);
	// lhz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
loc_832360F8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x83236058
	if (cr6.lt) goto loc_83236058;
loc_8323610C:
	// bl 0x83235a30
	ctx.lr = 0x83236110;
	sub_83235A30(ctx, base);
	// bl 0x83235ac0
	ctx.lr = 0x83236114;
	sub_83235AC0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323611C"))) PPC_WEAK_FUNC(sub_8323611C);
PPC_FUNC_IMPL(__imp__sub_8323611C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83236120"))) PPC_WEAK_FUNC(sub_83236120);
PPC_FUNC_IMPL(__imp__sub_83236120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83236128;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,26636
	ctx.r31.s64 = ctx.r11.s64 + 26636;
	// lhz r11,26636(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26636);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8323617c
	if (!cr6.gt) goto loc_8323617C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8323614C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83236168
	if (cr6.eq) goto loc_83236168;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x8322b7d0
	ctx.lr = 0x83236164;
	sub_8322B7D0(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_83236168:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x8323614c
	if (cr6.lt) goto loc_8323614C;
loc_8323617C:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r29,0
	ctx.r29.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x832361c4
	if (!cr6.gt) goto loc_832361C4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83236194:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832361b0
	if (cr6.eq) goto loc_832361B0;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x8322b7d0
	ctx.lr = 0x832361AC;
	sub_8322B7D0(ctx, base);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
loc_832361B0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x83236194
	if (cr6.lt) goto loc_83236194;
loc_832361C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832361CC"))) PPC_WEAK_FUNC(sub_832361CC);
PPC_FUNC_IMPL(__imp__sub_832361CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832361D0"))) PPC_WEAK_FUNC(sub_832361D0);
PPC_FUNC_IMPL(__imp__sub_832361D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832361D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r26,r11,26636
	ctx.r26.s64 = ctx.r11.s64 + 26636;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lhz r11,26636(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26636);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x832362d0
	if (!cr6.gt) goto loc_832362D0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83236204:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832362b8
	if (cr6.eq) goto loc_832362B8;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8323625c
	if (cr6.eq) goto loc_8323625C;
	// dcbt r0,r7
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8323625c
	if (!cr6.gt) goto loc_8323625C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8323623C:
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r6,5(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r6,52
	cr6.compare<uint32_t>(ctx.r6.u32, 52, xer);
	// beq cr6,0x83236260
	if (cr6.eq) goto loc_83236260;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x8323623c
	if (cr6.lt) goto loc_8323623C;
loc_8323625C:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_83236260:
	// addic r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832362b8
	if (cr6.eq) goto loc_832362B8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x832362b0
	if (cr6.eq) goto loc_832362B0;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8322c978
	ctx.lr = 0x83236294;
	sub_8322C978(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83237ad0
	ctx.lr = 0x832362A0;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832362b8
	if (!cr6.eq) goto loc_832362B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832362B0:
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x8322b7d0
	ctx.lr = 0x832362B8;
	sub_8322B7D0(ctx, base);
loc_832362B8:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x83236204
	if (cr6.lt) goto loc_83236204;
loc_832362D0:
	// lhz r11,2(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 2);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x832363f4
	if (!cr6.gt) goto loc_832363F4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_832362E8:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832363dc
	if (cr6.eq) goto loc_832363DC;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83236340
	if (cr6.eq) goto loc_83236340;
	// dcbt r0,r7
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83236340
	if (!cr6.gt) goto loc_83236340;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83236320:
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r6,5(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r6,52
	cr6.compare<uint32_t>(ctx.r6.u32, 52, xer);
	// beq cr6,0x83236344
	if (cr6.eq) goto loc_83236344;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x83236320
	if (cr6.lt) goto loc_83236320;
loc_83236340:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_83236344:
	// addic r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832363dc
	if (cr6.eq) goto loc_832363DC;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x832363d4
	if (cr6.eq) goto loc_832363D4;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8322c978
	ctx.lr = 0x83236378;
	sub_8322C978(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x832363b8
	if (!cr0.eq) goto loc_832363B8;
	// addi r10,r1,83
	ctx.r10.s64 = ctx.r1.s64 + 83;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// subf r10,r27,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r27.s64;
	// subf r9,r27,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r27.s64;
loc_8323639C:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832363c0
	if (cr6.eq) goto loc_832363C0;
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// subf. r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x8323639c
	if (cr0.eq) goto loc_8323639C;
loc_832363B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832363c4
	goto loc_832363C4;
loc_832363C0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_832363C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832363dc
	if (!cr6.eq) goto loc_832363DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832363D4:
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x8322b7d0
	ctx.lr = 0x832363DC;
	sub_8322B7D0(ctx, base);
loc_832363DC:
	// lhz r11,2(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 2);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x832362e8
	if (cr6.lt) goto loc_832362E8;
loc_832363F4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832363FC"))) PPC_WEAK_FUNC(sub_832363FC);
PPC_FUNC_IMPL(__imp__sub_832363FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83236400"))) PPC_WEAK_FUNC(sub_83236400);
PPC_FUNC_IMPL(__imp__sub_83236400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r11,26636
	ctx.r9.s64 = ctx.r11.s64 + 26636;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lhz r8,26636(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26636);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_83236424:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r5,r3
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, xer);
	// bne cr6,0x8323643c
	if (!cr6.eq) goto loc_8323643C;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
loc_8323643C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// blt cr6,0x83236424
	if (cr6.lt) goto loc_83236424;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83236454"))) PPC_WEAK_FUNC(sub_83236454);
PPC_FUNC_IMPL(__imp__sub_83236454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83236458"))) PPC_WEAK_FUNC(sub_83236458);
PPC_FUNC_IMPL(__imp__sub_83236458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83236460;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83235198
	ctx.lr = 0x83236468;
	sub_83235198(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r9,165
	ctx.r9.s64 = 165;
	// addi r30,r11,26636
	ctx.r30.s64 = ctx.r11.s64 + 26636;
	// sth r10,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r10.u16);
	// sth r9,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r9.u16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r11,26636(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26636);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832364bc
	if (!cr6.gt) goto loc_832364BC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_832364A0:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832364bc
	if (cr6.eq) goto loc_832364BC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x832364a0
	if (cr6.lt) goto loc_832364A0;
loc_832364BC:
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x832364ec
	if (cr6.lt) goto loc_832364EC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x83209df8
	ctx.lr = 0x832364D8;
	sub_83209DF8(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r8.u16);
loc_832364EC:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83236500"))) PPC_WEAK_FUNC(sub_83236500);
PPC_FUNC_IMPL(__imp__sub_83236500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r11,26636
	ctx.r9.s64 = ctx.r11.s64 + 26636;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lhz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_83236524:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r5,r3
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, xer);
	// bne cr6,0x8323653c
	if (!cr6.eq) goto loc_8323653C;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// lhz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
loc_8323653C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// blt cr6,0x83236524
	if (cr6.lt) goto loc_83236524;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83236554"))) PPC_WEAK_FUNC(sub_83236554);
PPC_FUNC_IMPL(__imp__sub_83236554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83236558"))) PPC_WEAK_FUNC(sub_83236558);
PPC_FUNC_IMPL(__imp__sub_83236558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83236560;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83235198
	ctx.lr = 0x83236568;
	sub_83235198(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,193
	ctx.r10.s64 = 193;
	// addi r30,r11,26636
	ctx.r30.s64 = ctx.r11.s64 + 26636;
	// li r11,59
	ctx.r11.s64 = 59;
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// li r31,0
	ctx.r31.s64 = 0;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832365bc
	if (!cr6.gt) goto loc_832365BC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_832365A0:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832365bc
	if (cr6.eq) goto loc_832365BC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x832365a0
	if (cr6.lt) goto loc_832365A0;
loc_832365BC:
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x832365ec
	if (cr6.lt) goto loc_832365EC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x83209df8
	ctx.lr = 0x832365D8;
	sub_83209DF8(ctx, base);
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r8.u16);
loc_832365EC:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83236600"))) PPC_WEAK_FUNC(sub_83236600);
PPC_FUNC_IMPL(__imp__sub_83236600) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83236640
	if (cr6.eq) goto loc_83236640;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83236640
	if (cr6.eq) goto loc_83236640;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// bl 0x8320d088
	ctx.lr = 0x83236640;
	sub_8320D088(ctx, base);
loc_83236640:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832367a4
	if (!cr6.gt) goto loc_832367A4;
	// lbz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83236660
	if (!cr6.eq) goto loc_83236660;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83236660:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222be8
	ctx.lr = 0x83236690;
	sub_83222BE8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83255b10
	ctx.lr = 0x832366A0;
	sub_83255B10(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83206f80
	ctx.lr = 0x832366A8;
	sub_83206F80(ctx, base);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// blt cr6,0x832367a4
	if (cr6.lt) goto loc_832367A4;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832366d4
	if (!cr6.eq) goto loc_832366D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// b 0x832366d8
	goto loc_832366D8;
loc_832366D4:
	// lfs f31,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f31.f64 = double(temp.f32);
loc_832366D8:
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// addi r7,r30,8
	ctx.r7.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832366ec
	if (!cr6.eq) goto loc_832366EC;
	// addi r7,r30,-8
	ctx.r7.s64 = ctx.r30.s64 + -8;
loc_832366EC:
	// lhz r11,2(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r6,r10,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r11,r8,142
	ctx.r11.u64 = ctx.r8.u64 ^ 142;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// srawi r4,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// and r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 & ctx.r6.u64;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323678c
	if (cr6.eq) goto loc_8323678C;
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x83236558
	ctx.lr = 0x83236724;
	sub_83236558(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8322c198
	ctx.lr = 0x83236734;
	sub_8322C198(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8322c038
	ctx.lr = 0x83236744;
	sub_8322C038(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x8322bf60
	ctx.lr = 0x83236754;
	sub_8322BF60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2703
	ctx.r10.s64 = 2703;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832667f0
	ctx.lr = 0x83236788;
	sub_832667F0(ctx, base);
	// b 0x832367a4
	goto loc_832367A4;
loc_8323678C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// li r6,142
	ctx.r6.s64 = 142;
	// addi r5,r11,11640
	ctx.r5.s64 = ctx.r11.s64 + 11640;
	// li r3,338
	ctx.r3.s64 = 338;
	// bl 0x8320d428
	ctx.lr = 0x832367A4;
	sub_8320D428(ctx, base);
loc_832367A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_832367C4"))) PPC_WEAK_FUNC(sub_832367C4);
PPC_FUNC_IMPL(__imp__sub_832367C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832367C8"))) PPC_WEAK_FUNC(sub_832367C8);
PPC_FUNC_IMPL(__imp__sub_832367C8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x832367f8
	if (cr6.eq) goto loc_832367F8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// bl 0x8320d088
	ctx.lr = 0x832367F8;
	sub_8320D088(ctx, base);
loc_832367F8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83236864
	if (!cr6.gt) goto loc_83236864;
	// lbz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83236818
	if (!cr6.eq) goto loc_83236818;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83236818:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83222be8
	ctx.lr = 0x83236844;
	sub_83222BE8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83255b10
	ctx.lr = 0x83236854;
	sub_83255B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83206fc0
	ctx.lr = 0x8323685C;
	sub_83206FC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832361d0
	ctx.lr = 0x83236864;
	sub_832361D0(ctx, base);
loc_83236864:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323687C"))) PPC_WEAK_FUNC(sub_8323687C);
PPC_FUNC_IMPL(__imp__sub_8323687C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83236880"))) PPC_WEAK_FUNC(sub_83236880);
PPC_FUNC_IMPL(__imp__sub_83236880) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// lfs f30,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// beq cr6,0x832368c8
	if (cr6.eq) goto loc_832368C8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// bl 0x8320d088
	ctx.lr = 0x832368C8;
	sub_8320D088(ctx, base);
loc_832368C8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8323697c
	if (!cr6.gt) goto loc_8323697C;
	// lbz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832368e8
	if (!cr6.eq) goto loc_832368E8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832368E8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222be8
	ctx.lr = 0x83236918;
	sub_83222BE8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83255b10
	ctx.lr = 0x83236928;
	sub_83255B10(ctx, base);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// blt cr6,0x83236958
	if (cr6.lt) goto loc_83236958;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83236948
	if (!cr6.eq) goto loc_83236948;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
loc_83236948:
	// bl 0x83220448
	ctx.lr = 0x8323694C;
	sub_83220448(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f0,23372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23372);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_83236958:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f1,132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83207010
	ctx.lr = 0x83236974;
	sub_83207010(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832361d0
	ctx.lr = 0x8323697C;
	sub_832361D0(ctx, base);
loc_8323697C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_832369A0"))) PPC_WEAK_FUNC(sub_832369A0);
PPC_FUNC_IMPL(__imp__sub_832369A0) {
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
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// lfs f30,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// beq cr6,0x832369e4
	if (cr6.eq) goto loc_832369E4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// bl 0x8320d088
	ctx.lr = 0x832369E4;
	sub_8320D088(ctx, base);
loc_832369E4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83236a30
	if (cr6.lt) goto loc_83236A30;
	// lbz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83236a04
	if (!cr6.eq) goto loc_83236A04;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83236A04:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83220448
	ctx.lr = 0x83236A24;
	sub_83220448(ctx, base);
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
	// lfs f0,23372(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 23372);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_83236A30:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// li r3,0
	ctx.r3.s64 = 0;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f1,132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83207010
	ctx.lr = 0x83236A4C;
	sub_83207010(ctx, base);
	// bl 0x83236120
	ctx.lr = 0x83236A50;
	sub_83236120(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83236A70"))) PPC_WEAK_FUNC(sub_83236A70);
PPC_FUNC_IMPL(__imp__sub_83236A70) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,5696
	ctx.r9.s64 = ctx.r11.s64 + 5696;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// lfs f31,132(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x83236ab4
	if (cr6.eq) goto loc_83236AB4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// bl 0x8320d088
	ctx.lr = 0x83236AB4;
	sub_8320D088(ctx, base);
loc_83236AB4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83236b48
	if (!cr6.gt) goto loc_83236B48;
	// lbz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83236ad4
	if (!cr6.eq) goto loc_83236AD4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83236AD4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222be8
	ctx.lr = 0x83236B04;
	sub_83222BE8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83255b10
	ctx.lr = 0x83236B14;
	sub_83255B10(ctx, base);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// blt cr6,0x83236b3c
	if (cr6.lt) goto loc_83236B3C;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83236b34
	if (!cr6.eq) goto loc_83236B34;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
loc_83236B34:
	// bl 0x83220448
	ctx.lr = 0x83236B38;
	sub_83220448(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_83236B3C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83206ff8
	ctx.lr = 0x83236B48;
	sub_83206FF8(ctx, base);
loc_83236B48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_83236B68"))) PPC_WEAK_FUNC(sub_83236B68);
PPC_FUNC_IMPL(__imp__sub_83236B68) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,5696
	ctx.r9.s64 = ctx.r11.s64 + 5696;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// lfs f31,132(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x83236ba8
	if (cr6.eq) goto loc_83236BA8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// bl 0x8320d088
	ctx.lr = 0x83236BA8;
	sub_8320D088(ctx, base);
loc_83236BA8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83236bec
	if (cr6.lt) goto loc_83236BEC;
	// lbz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83236bc8
	if (!cr6.eq) goto loc_83236BC8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83236BC8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83220448
	ctx.lr = 0x83236BE8;
	sub_83220448(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_83236BEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83206ff8
	ctx.lr = 0x83236BF8;
	sub_83206FF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_83236C14"))) PPC_WEAK_FUNC(sub_83236C14);
PPC_FUNC_IMPL(__imp__sub_83236C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83236C18"))) PPC_WEAK_FUNC(sub_83236C18);
PPC_FUNC_IMPL(__imp__sub_83236C18) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// cmplwi cr6,r11,41
	cr6.compare<uint32_t>(ctx.r11.u32, 41, xer);
	// bgt cr6,0x83236f18
	if (cr6.gt) goto loc_83236F18;
	// lis r12,-31965
	ctx.r12.s64 = -2094858240;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27732
	ctx.r12.s64 = ctx.r12.s64 + 27732;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83236CFC;
	case 1:
		goto loc_83236D1C;
	case 2:
		goto loc_83236D3C;
	case 3:
		goto loc_83236F00;
	case 4:
		goto loc_83236F18;
	case 5:
		goto loc_83236F18;
	case 6:
		goto loc_83236F18;
	case 7:
		goto loc_83236F18;
	case 8:
		goto loc_83236F18;
	case 9:
		goto loc_83236F18;
	case 10:
		goto loc_83236F18;
	case 11:
		goto loc_83236D78;
	case 12:
		goto loc_83236F18;
	case 13:
		goto loc_83236F18;
	case 14:
		goto loc_83236F18;
	case 15:
		goto loc_83236F18;
	case 16:
		goto loc_83236F18;
	case 17:
		goto loc_83236DCC;
	case 18:
		goto loc_83236DEC;
	case 19:
		goto loc_83236F18;
	case 20:
		goto loc_83236F18;
	case 21:
		goto loc_83236F18;
	case 22:
		goto loc_83236F18;
	case 23:
		goto loc_83236F18;
	case 24:
		goto loc_83236F18;
	case 25:
		goto loc_83236F18;
	case 26:
		goto loc_83236E0C;
	case 27:
		goto loc_83236E50;
	case 28:
		goto loc_83236F18;
	case 29:
		goto loc_83236F18;
	case 30:
		goto loc_83236F18;
	case 31:
		goto loc_83236F18;
	case 32:
		goto loc_83236F18;
	case 33:
		goto loc_83236F18;
	case 34:
		goto loc_83236F18;
	case 35:
		goto loc_83236F00;
	case 36:
		goto loc_83236ED8;
	case 37:
		goto loc_83236EF8;
	case 38:
		goto loc_83236F18;
	case 39:
		goto loc_83236F18;
	case 40:
		goto loc_83236F18;
	case 41:
		goto loc_83236E94;
	default:
		return;
	}
	// lwz r25,27900(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27900);
	// lwz r25,27932(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27932);
	// lwz r25,27964(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27964);
	// lwz r25,28416(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28416);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28024(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28024);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28108(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28108);
	// lwz r25,28140(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28140);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28172(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28172);
	// lwz r25,28240(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28240);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28416(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28416);
	// lwz r25,28376(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28376);
	// lwz r25,28408(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28408);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28440(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28440);
	// lwz r25,28308(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28308);
loc_83236CFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83236600
	ctx.lr = 0x83236D04;
	sub_83236600(ctx, base);
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
loc_83236D1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832367c8
	ctx.lr = 0x83236D24;
	sub_832367C8(ctx, base);
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
loc_83236D3C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83236d58
	if (cr6.eq) goto loc_83236D58;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// bl 0x8320d088
	ctx.lr = 0x83236D58;
	sub_8320D088(ctx, base);
loc_83236D58:
	// bl 0x83206fe0
	ctx.lr = 0x83236D5C;
	sub_83206FE0(ctx, base);
	// bl 0x83236120
	ctx.lr = 0x83236D60;
	sub_83236120(ctx, base);
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
loc_83236D78:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83236da4
	if (cr6.eq) goto loc_83236DA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83236DA4;
	sub_83222030(ctx, base);
loc_83236DA4:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
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
loc_83236DCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83236880
	ctx.lr = 0x83236DD4;
	sub_83236880(ctx, base);
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
loc_83236DEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832369a0
	ctx.lr = 0x83236DF4;
	sub_832369A0(ctx, base);
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
loc_83236E0C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83236e28
	if (cr6.eq) goto loc_83236E28;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// bl 0x8320d088
	ctx.lr = 0x83236E28;
	sub_8320D088(ctx, base);
loc_83236E28:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,11512
	ctx.r3.s64 = ctx.r11.s64 + 11512;
	// bl 0x8328ed30
	ctx.lr = 0x83236E38;
	sub_8328ED30(ctx, base);
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
loc_83236E50:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83236e6c
	if (cr6.eq) goto loc_83236E6C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// bl 0x8320d088
	ctx.lr = 0x83236E6C;
	sub_8320D088(ctx, base);
loc_83236E6C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,11512
	ctx.r3.s64 = ctx.r11.s64 + 11512;
	// bl 0x8328edb0
	ctx.lr = 0x83236E7C;
	sub_8328EDB0(ctx, base);
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
loc_83236E94:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83236eb0
	if (cr6.eq) goto loc_83236EB0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// bl 0x8320d088
	ctx.lr = 0x83236EB0;
	sub_8320D088(ctx, base);
loc_83236EB0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,11512
	ctx.r3.s64 = ctx.r11.s64 + 11512;
	// bl 0x8328ee08
	ctx.lr = 0x83236EC0;
	sub_8328EE08(ctx, base);
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
loc_83236ED8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83236a70
	ctx.lr = 0x83236EE0;
	sub_83236A70(ctx, base);
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
loc_83236EF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83236b68
	ctx.lr = 0x83236F00;
	sub_83236B68(ctx, base);
loc_83236F00:
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
loc_83236F18:
	// li r3,-4
	ctx.r3.s64 = -4;
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

__attribute__((alias("__imp__sub_83236F30"))) PPC_WEAK_FUNC(sub_83236F30);
PPC_FUNC_IMPL(__imp__sub_83236F30) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// cmplwi cr6,r11,41
	cr6.compare<uint32_t>(ctx.r11.u32, 41, xer);
	// bgt cr6,0x832371dc
	if (cr6.gt) goto loc_832371DC;
	// lis r12,-31965
	ctx.r12.s64 = -2094858240;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,28524
	ctx.r12.s64 = ctx.r12.s64 + 28524;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83237014;
	case 1:
		goto loc_83237034;
	case 2:
		goto loc_83237054;
	case 3:
		goto loc_832371DC;
	case 4:
		goto loc_832371DC;
	case 5:
		goto loc_832371DC;
	case 6:
		goto loc_832371DC;
	case 7:
		goto loc_832371DC;
	case 8:
		goto loc_832371DC;
	case 9:
		goto loc_832371DC;
	case 10:
		goto loc_832371DC;
	case 11:
		goto loc_832371DC;
	case 12:
		goto loc_832371DC;
	case 13:
		goto loc_832371DC;
	case 14:
		goto loc_832371DC;
	case 15:
		goto loc_832371DC;
	case 16:
		goto loc_832371DC;
	case 17:
		goto loc_83237090;
	case 18:
		goto loc_832370B0;
	case 19:
		goto loc_832371DC;
	case 20:
		goto loc_832371DC;
	case 21:
		goto loc_832371DC;
	case 22:
		goto loc_832371DC;
	case 23:
		goto loc_832371DC;
	case 24:
		goto loc_832371DC;
	case 25:
		goto loc_832371DC;
	case 26:
		goto loc_832370D0;
	case 27:
		goto loc_83237114;
	case 28:
		goto loc_832371DC;
	case 29:
		goto loc_832371DC;
	case 30:
		goto loc_832371DC;
	case 31:
		goto loc_832371DC;
	case 32:
		goto loc_832371DC;
	case 33:
		goto loc_832371DC;
	case 34:
		goto loc_832371DC;
	case 35:
		goto loc_832371C4;
	case 36:
		goto loc_8323719C;
	case 37:
		goto loc_832371BC;
	case 38:
		goto loc_832371DC;
	case 39:
		goto loc_832371DC;
	case 40:
		goto loc_832371DC;
	case 41:
		goto loc_83237158;
	default:
		return;
	}
	// lwz r25,28692(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28692);
	// lwz r25,28724(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28724);
	// lwz r25,28756(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28756);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,28816(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28816);
	// lwz r25,28848(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28848);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,28880(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28880);
	// lwz r25,28948(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28948);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29124(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29124);
	// lwz r25,29084(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29084);
	// lwz r25,29116(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29116);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29148);
	// lwz r25,29016(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29016);
loc_83237014:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83236600
	ctx.lr = 0x8323701C;
	sub_83236600(ctx, base);
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
loc_83237034:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832367c8
	ctx.lr = 0x8323703C;
	sub_832367C8(ctx, base);
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
loc_83237054:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83237070
	if (cr6.eq) goto loc_83237070;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// bl 0x8320d088
	ctx.lr = 0x83237070;
	sub_8320D088(ctx, base);
loc_83237070:
	// bl 0x83206fe0
	ctx.lr = 0x83237074;
	sub_83206FE0(ctx, base);
	// bl 0x83236120
	ctx.lr = 0x83237078;
	sub_83236120(ctx, base);
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
loc_83237090:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83236880
	ctx.lr = 0x83237098;
	sub_83236880(ctx, base);
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
loc_832370B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832369a0
	ctx.lr = 0x832370B8;
	sub_832369A0(ctx, base);
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
loc_832370D0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832370ec
	if (cr6.eq) goto loc_832370EC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// bl 0x8320d088
	ctx.lr = 0x832370EC;
	sub_8320D088(ctx, base);
loc_832370EC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,11512
	ctx.r3.s64 = ctx.r11.s64 + 11512;
	// bl 0x8328ed30
	ctx.lr = 0x832370FC;
	sub_8328ED30(ctx, base);
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
loc_83237114:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83237130
	if (cr6.eq) goto loc_83237130;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// bl 0x8320d088
	ctx.lr = 0x83237130;
	sub_8320D088(ctx, base);
loc_83237130:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,11512
	ctx.r3.s64 = ctx.r11.s64 + 11512;
	// bl 0x8328edb0
	ctx.lr = 0x83237140;
	sub_8328EDB0(ctx, base);
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
loc_83237158:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83237174
	if (cr6.eq) goto loc_83237174;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// bl 0x8320d088
	ctx.lr = 0x83237174;
	sub_8320D088(ctx, base);
loc_83237174:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,11512
	ctx.r3.s64 = ctx.r11.s64 + 11512;
	// bl 0x8328ee08
	ctx.lr = 0x83237184;
	sub_8328EE08(ctx, base);
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
loc_8323719C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83236a70
	ctx.lr = 0x832371A4;
	sub_83236A70(ctx, base);
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
loc_832371BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83236b68
	ctx.lr = 0x832371C4;
	sub_83236B68(ctx, base);
loc_832371C4:
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
loc_832371DC:
	// li r3,-4
	ctx.r3.s64 = -4;
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

__attribute__((alias("__imp__sub_832371F4"))) PPC_WEAK_FUNC(sub_832371F4);
PPC_FUNC_IMPL(__imp__sub_832371F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832371F8"))) PPC_WEAK_FUNC(sub_832371F8);
PPC_FUNC_IMPL(__imp__sub_832371F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83237200;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r31,r10,26636
	ctx.r31.s64 = ctx.r10.s64 + 26636;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r11,11620
	ctx.r27.s64 = ctx.r11.s64 + 11620;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83237290
	if (cr6.eq) goto loc_83237290;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8323727c
	if (!cr6.gt) goto loc_8323727C;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r10,11692
	ctx.r30.s64 = ctx.r10.s64 + 11692;
loc_83237244:
	// lwzx r10,r29,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83237268
	if (cr6.eq) goto loc_83237268;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832083d0
	ctx.lr = 0x8323725C;
	sub_832083D0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r26,-11
	ctx.r26.s64 = -11;
loc_83237268:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x83237244
	if (cr6.lt) goto loc_83237244;
loc_8323727C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83237290
	if (cr6.eq) goto loc_83237290;
	// bl 0x83209d68
	ctx.lr = 0x83237288;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83237290:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83237308
	if (cr6.eq) goto loc_83237308;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r28,0
	ctx.r28.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x832372f4
	if (!cr6.gt) goto loc_832372F4;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r10,11648
	ctx.r30.s64 = ctx.r10.s64 + 11648;
loc_832372BC:
	// lwzx r10,r29,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832372e0
	if (cr6.eq) goto loc_832372E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832083d0
	ctx.lr = 0x832372D4;
	sub_832083D0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r26,-11
	ctx.r26.s64 = -11;
loc_832372E0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x832372bc
	if (cr6.lt) goto loc_832372BC;
loc_832372F4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83237308
	if (cr6.eq) goto loc_83237308;
	// bl 0x83209d68
	ctx.lr = 0x83237300;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83237308:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294018
	ctx.lr = 0x83237318;
	sub_83294018(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83237324"))) PPC_WEAK_FUNC(sub_83237324);
PPC_FUNC_IMPL(__imp__sub_83237324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83237328"))) PPC_WEAK_FUNC(sub_83237328);
PPC_FUNC_IMPL(__imp__sub_83237328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,256
	cr6.compare<int32_t>(ctx.r3.s32, 256, xer);
	// bge cr6,0x83237394
	if (!cr6.lt) goto loc_83237394;
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r7,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 5;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,7928
	ctx.r9.s64 = ctx.r11.s64 + 7928;
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r10,r6,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83237394
	if (cr6.eq) goto loc_83237394;
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83237370:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r3
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, xer);
	// beq cr6,0x8323739c
	if (cr6.eq) goto loc_8323739C;
	// addi r8,r9,32
	ctx.r8.s64 = ctx.r9.s64 + 32;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r8,r8,201
	ctx.r8.s64 = ctx.r8.s64 + 201;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x83237370
	if (cr6.lt) goto loc_83237370;
loc_83237394:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8323739C:
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832373BC"))) PPC_WEAK_FUNC(sub_832373BC);
PPC_FUNC_IMPL(__imp__sub_832373BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832373C0"))) PPC_WEAK_FUNC(sub_832373C0);
PPC_FUNC_IMPL(__imp__sub_832373C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832373C8;
	__savegprlr_25(ctx, base);
	// li r9,64
	ctx.r9.s64 = 64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r3,256
	ctx.r7.s64 = ctx.r3.s64 + 256;
	// addi r6,r3,257
	ctx.r6.s64 = ctx.r3.s64 + 257;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r5,r3,258
	ctx.r5.s64 = ctx.r3.s64 + 258;
	// addi r9,r3,2
	ctx.r9.s64 = ctx.r3.s64 + 2;
	// addi r4,r3,259
	ctx.r4.s64 = ctx.r3.s64 + 259;
	// addi r8,r3,3
	ctx.r8.s64 = ctx.r3.s64 + 3;
loc_832373F0:
	// lbzx r31,r11,r3
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lbzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r28,r31,26
	ctx.r28.u64 = ctx.r31.u32 & 0x3F;
	// lbzx r29,r9,r11
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r27,r8,r11
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// clrlwi r26,r30,26
	ctx.r26.u64 = ctx.r30.u32 & 0x3F;
	// rlwinm r28,r28,0,29,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// clrlwi r25,r29,26
	ctx.r25.u64 = ctx.r29.u32 & 0x3F;
	// stbx r31,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r31.u8);
	// stbx r28,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r28.u8);
	// clrlwi r28,r27,26
	ctx.r28.u64 = ctx.r27.u32 & 0x3F;
	// rlwinm r26,r26,0,29,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// stbx r30,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r30.u8);
	// rlwinm r25,r25,0,29,26
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// stbx r29,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r29.u8);
	// rlwinm r28,r28,0,29,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// stbx r26,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r26.u8);
	// stbx r25,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r25.u8);
	// stbx r28,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r28.u8);
	// stbx r27,r4,r11
	PPC_STORE_U8(ctx.r4.u32 + ctx.r11.u32, ctx.r27.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x832373f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832373F0;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323744C"))) PPC_WEAK_FUNC(sub_8323744C);
PPC_FUNC_IMPL(__imp__sub_8323744C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83237450"))) PPC_WEAK_FUNC(sub_83237450);
PPC_FUNC_IMPL(__imp__sub_83237450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r11,26648
	ctx.r10.s64 = ctx.r11.s64 + 26648;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_83237474:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r5,r3
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, xer);
	// bne cr6,0x83237490
	if (!cr6.eq) goto loc_83237490;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
loc_83237490:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, xer);
	// blt cr6,0x83237474
	if (cr6.lt) goto loc_83237474;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832374A8"))) PPC_WEAK_FUNC(sub_832374A8);
PPC_FUNC_IMPL(__imp__sub_832374A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r11,26648
	ctx.r3.s64 = ctx.r11.s64 + 26648;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83294018
	sub_83294018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832374BC"))) PPC_WEAK_FUNC(sub_832374BC);
PPC_FUNC_IMPL(__imp__sub_832374BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832374C0"))) PPC_WEAK_FUNC(sub_832374C0);
PPC_FUNC_IMPL(__imp__sub_832374C0) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r31,r11,26648
	ctx.r31.s64 = ctx.r11.s64 + 26648;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832374f8
	if (cr6.eq) goto loc_832374F8;
	// bl 0x83209d68
	ctx.lr = 0x832374E8;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
loc_832374F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294018
	ctx.lr = 0x83237508;
	sub_83294018(ctx, base);
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

__attribute__((alias("__imp__sub_83237520"))) PPC_WEAK_FUNC(sub_83237520);
PPC_FUNC_IMPL(__imp__sub_83237520) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r31,r11,26648
	ctx.r31.s64 = ctx.r11.s64 + 26648;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83237558
	if (cr6.eq) goto loc_83237558;
	// bl 0x83209d68
	ctx.lr = 0x83237548;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
loc_83237558:
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

__attribute__((alias("__imp__sub_8323756C"))) PPC_WEAK_FUNC(sub_8323756C);
PPC_FUNC_IMPL(__imp__sub_8323756C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83237570"))) PPC_WEAK_FUNC(sub_83237570);
PPC_FUNC_IMPL(__imp__sub_83237570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// sth r3,26648(r11)
	PPC_STORE_U16(ctx.r11.u32 + 26648, ctx.r3.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323757C"))) PPC_WEAK_FUNC(sub_8323757C);
PPC_FUNC_IMPL(__imp__sub_8323757C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83237580"))) PPC_WEAK_FUNC(sub_83237580);
PPC_FUNC_IMPL(__imp__sub_83237580) {
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
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1536
	cr6.compare<uint32_t>(ctx.r10.u32, 1536, xer);
	// blt cr6,0x832375d8
	if (cr6.lt) goto loc_832375D8;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1536
	ctx.r11.s64 = ctx.r11.s64 + -1536;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bge cr6,0x832375d8
	if (!cr6.lt) goto loc_832375D8;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r10,11728
	ctx.r9.s64 = ctx.r10.s64 + 11728;
	// lbzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x8322e5b0
	ctx.lr = 0x832375C4;
	sub_8322E5B0(ctx, base);
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
loc_832375D8:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,636
	cr6.compare<uint32_t>(ctx.r11.u32, 636, xer);
	// bgt cr6,0x832376bc
	if (cr6.gt) goto loc_832376BC;
	// cmplwi cr6,r11,631
	cr6.compare<uint32_t>(ctx.r11.u32, 631, xer);
	// bge cr6,0x832376e4
	if (!cr6.lt) goto loc_832376E4;
	// cmplwi cr6,r11,570
	cr6.compare<uint32_t>(ctx.r11.u32, 570, xer);
	// bgt cr6,0x83237690
	if (cr6.gt) goto loc_83237690;
	// beq cr6,0x83237670
	if (cr6.eq) goto loc_83237670;
	// cmplwi cr6,r11,565
	cr6.compare<uint32_t>(ctx.r11.u32, 565, xer);
	// beq cr6,0x83237650
	if (cr6.eq) goto loc_83237650;
	// cmplwi cr6,r11,568
	cr6.compare<uint32_t>(ctx.r11.u32, 568, xer);
	// beq cr6,0x83237630
	if (cr6.eq) goto loc_83237630;
	// cmplwi cr6,r11,569
	cr6.compare<uint32_t>(ctx.r11.u32, 569, xer);
	// bne cr6,0x832376a8
	if (!cr6.eq) goto loc_832376A8;
	// li r4,82
	ctx.r4.s64 = 82;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x8323761C;
	sub_8322E5B0(ctx, base);
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
loc_83237630:
	// li r4,76
	ctx.r4.s64 = 76;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x8323763C;
	sub_8322E5B0(ctx, base);
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
loc_83237650:
	// li r4,66
	ctx.r4.s64 = 66;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x8323765C;
	sub_8322E5B0(ctx, base);
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
loc_83237670:
	// li r4,84
	ctx.r4.s64 = 84;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x8323767C;
	sub_8322E5B0(ctx, base);
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
loc_83237690:
	// cmplwi cr6,r11,626
	cr6.compare<uint32_t>(ctx.r11.u32, 626, xer);
	// beq cr6,0x832376e4
	if (cr6.eq) goto loc_832376E4;
	// cmplwi cr6,r11,627
	cr6.compare<uint32_t>(ctx.r11.u32, 627, xer);
	// ble cr6,0x832376a8
	if (!cr6.gt) goto loc_832376A8;
	// cmplwi cr6,r11,629
	cr6.compare<uint32_t>(ctx.r11.u32, 629, xer);
	// ble cr6,0x832376e4
	if (!cr6.gt) goto loc_832376E4;
loc_832376A8:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832376BC:
	// cmplwi cr6,r11,651
	cr6.compare<uint32_t>(ctx.r11.u32, 651, xer);
	// bgt cr6,0x83237704
	if (cr6.gt) goto loc_83237704;
	// cmplwi cr6,r11,646
	cr6.compare<uint32_t>(ctx.r11.u32, 646, xer);
	// bge cr6,0x832376e4
	if (!cr6.lt) goto loc_832376E4;
	// cmplwi cr6,r11,638
	cr6.compare<uint32_t>(ctx.r11.u32, 638, xer);
	// blt cr6,0x832376a8
	if (cr6.lt) goto loc_832376A8;
	// cmplwi cr6,r11,642
	cr6.compare<uint32_t>(ctx.r11.u32, 642, xer);
	// ble cr6,0x832376e4
	if (!cr6.gt) goto loc_832376E4;
	// cmplwi cr6,r11,644
	cr6.compare<uint32_t>(ctx.r11.u32, 644, xer);
	// bne cr6,0x832376a8
	if (!cr6.eq) goto loc_832376A8;
loc_832376E4:
	// addi r4,r11,-561
	ctx.r4.s64 = ctx.r11.s64 + -561;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x832376F0;
	sub_8322E5B0(ctx, base);
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
loc_83237704:
	// cmplwi cr6,r11,1776
	cr6.compare<uint32_t>(ctx.r11.u32, 1776, xer);
	// blt cr6,0x832376a8
	if (cr6.lt) goto loc_832376A8;
	// cmplwi cr6,r11,1785
	cr6.compare<uint32_t>(ctx.r11.u32, 1785, xer);
	// ble cr6,0x8323773c
	if (!cr6.gt) goto loc_8323773C;
	// cmplwi cr6,r11,1831
	cr6.compare<uint32_t>(ctx.r11.u32, 1831, xer);
	// bne cr6,0x832376a8
	if (!cr6.eq) goto loc_832376A8;
	// li r4,69
	ctx.r4.s64 = 69;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x83237728;
	sub_8322E5B0(ctx, base);
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
loc_8323773C:
	// addi r4,r11,-1728
	ctx.r4.s64 = ctx.r11.s64 + -1728;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x83237748;
	sub_8322E5B0(ctx, base);
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

__attribute__((alias("__imp__sub_8323775C"))) PPC_WEAK_FUNC(sub_8323775C);
PPC_FUNC_IMPL(__imp__sub_8323775C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83237760"))) PPC_WEAK_FUNC(sub_83237760);
PPC_FUNC_IMPL(__imp__sub_83237760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83237768;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323778c
	if (cr6.eq) goto loc_8323778C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
loc_8323778C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832377a4
	if (!cr6.eq) goto loc_832377A4;
loc_83237798:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832377A4:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r7,r11,26648
	ctx.r7.s64 = ctx.r11.s64 + 26648;
	// lhz r11,26648(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26648);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83237798
	if (!cr6.eq) goto loc_83237798;
	// lhz r8,2(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,48(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83237840
	if (!cr6.gt) goto loc_83237840;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lis r31,30720
	ctx.r31.s64 = 2013265920;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_832377E0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8323782c
	if (cr6.eq) goto loc_8323782C;
	// lbz r29,-4(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// clrlwi r28,r5,24
	ctx.r28.u64 = ctx.r5.u32 & 0xFF;
	// addic r27,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r27.s64 = ctx.r29.s64 + -1;
	// subfe r29,r27,r29
	temp.u8 = (~ctx.r27.u32 + ctx.r29.u32 < ~ctx.r27.u32) | (~ctx.r27.u32 + ctx.r29.u32 + xer.ca < xer.ca);
	ctx.r29.u64 = ~ctx.r27.u64 + ctx.r29.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// bne cr6,0x8323782c
	if (!cr6.eq) goto loc_8323782C;
	// cmpw cr6,r9,r31
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, xer);
	// beq cr6,0x83237814
	if (cr6.eq) goto loc_83237814;
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bne cr6,0x8323782c
	if (!cr6.eq) goto loc_8323782C;
loc_83237814:
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// bge cr6,0x8323784c
	if (!cr6.lt) goto loc_8323784C;
	// lbz r9,-3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// stbx r9,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lhz r8,2(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
loc_8323782C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// blt cr6,0x832377e0
	if (cr6.lt) goto loc_832377E0;
loc_83237840:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8323784C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,11756
	ctx.r4.s64 = ctx.r11.s64 + 11756;
	// addi r3,r10,11748
	ctx.r3.s64 = ctx.r10.s64 + 11748;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83208568
	ctx.lr = 0x83237864;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_83237864"))) PPC_WEAK_FUNC(sub_83237864);
PPC_FUNC_IMPL(__imp__sub_83237864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83237868"))) PPC_WEAK_FUNC(sub_83237868);
PPC_FUNC_IMPL(__imp__sub_83237868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83237884
	if (!cr6.eq) goto loc_83237884;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8323788c
	goto loc_8323788C;
loc_83237884:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_8323788C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832378ec
	if (cr6.eq) goto loc_832378EC;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// lhz r10,26648(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 26648);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832378ec
	if (!cr6.eq) goto loc_832378EC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832378d4
	if (cr6.eq) goto loc_832378D4;
	// lwz r11,428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832378d4
	if (cr6.eq) goto loc_832378D4;
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832378d4
	if (cr6.eq) goto loc_832378D4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_832378D4:
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832378ec
	if (cr6.eq) goto loc_832378EC;
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// blr 
	return;
loc_832378EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832378F4"))) PPC_WEAK_FUNC(sub_832378F4);
PPC_FUNC_IMPL(__imp__sub_832378F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832378F8"))) PPC_WEAK_FUNC(sub_832378F8);
PPC_FUNC_IMPL(__imp__sub_832378F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83237914
	if (!cr6.eq) goto loc_83237914;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8323791c
	goto loc_8323791C;
loc_83237914:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_8323791C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// lhz r10,26648(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 26648);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323794c
	if (cr6.eq) goto loc_8323794C;
	// lwz r11,428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83237958
	if (!cr6.eq) goto loc_83237958;
loc_8323794C:
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_83237958:
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stbx r9,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83237968"))) PPC_WEAK_FUNC(sub_83237968);
PPC_FUNC_IMPL(__imp__sub_83237968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83237984
	if (!cr6.eq) goto loc_83237984;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8323798c
	goto loc_8323798C;
loc_83237984:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_8323798C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832379d0
	if (cr6.eq) goto loc_832379D0;
	// lwz r11,428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832379d0
	if (cr6.eq) goto loc_832379D0;
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// rlwimi r8,r10,31,27,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x10) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFEF);
	// rlwinm r6,r7,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20;
	// rlwinm r4,r8,31,27,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x18;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// rlwinm r3,r3,29,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1F;
loc_832379D0:
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// rlwimi r8,r10,31,27,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x10) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFEF);
	// rlwinm r6,r7,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20;
	// rlwinm r4,r8,31,27,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x18;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// rlwinm r11,r3,29,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1F;
	// or r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 | ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83237A08"))) PPC_WEAK_FUNC(sub_83237A08);
PPC_FUNC_IMPL(__imp__sub_83237A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83237A10;
	__savegprlr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83237968
	ctx.lr = 0x83237A1C;
	sub_83237968(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83237760
	ctx.lr = 0x83237A30;
	sub_83237760(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83237a74
	if (!cr6.gt) goto loc_83237A74;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_83237A44:
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x83266348
	ctx.lr = 0x83237A64;
	sub_83266348(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x83237a44
	if (cr6.lt) goto loc_83237A44;
loc_83237A74:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83237760
	ctx.lr = 0x83237A84;
	sub_83237760(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83237ac8
	if (!cr6.gt) goto loc_83237AC8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_83237A98:
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x83266348
	ctx.lr = 0x83237AB8;
	sub_83266348(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x83237a98
	if (cr6.lt) goto loc_83237A98;
loc_83237AC8:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83237AD0"))) PPC_WEAK_FUNC(sub_83237AD0);
PPC_FUNC_IMPL(__imp__sub_83237AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83237ae4
	if (!cr6.eq) goto loc_83237AE4;
	// addic r11,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// subfe r3,r11,r4
	temp.u8 = (~ctx.r11.u32 + ctx.r4.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_83237AE4:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83237b20
	if (cr6.eq) goto loc_83237B20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83237b20
	if (!cr0.eq) goto loc_83237B20;
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_83237B00:
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83237b28
	if (cr6.eq) goto loc_83237B28;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lwzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf. r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x83237b00
	if (cr0.eq) goto loc_83237B00;
loc_83237B20:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83237B28:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83237B30"))) PPC_WEAK_FUNC(sub_83237B30);
PPC_FUNC_IMPL(__imp__sub_83237B30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lhz r9,6(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf. r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ble 0x83237b7c
	if (!cr0.gt) goto loc_83237B7C;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_83237B50:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// beq cr6,0x83237b7c
	if (cr6.eq) goto loc_83237B7C;
	// lhz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lhz r7,6(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// blt cr6,0x83237b50
	if (cr6.lt) goto loc_83237B50;
loc_83237B7C:
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83237B8C"))) PPC_WEAK_FUNC(sub_83237B8C);
PPC_FUNC_IMPL(__imp__sub_83237B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83237B90"))) PPC_WEAK_FUNC(sub_83237B90);
PPC_FUNC_IMPL(__imp__sub_83237B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83237B98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83237bcc
	if (cr6.eq) goto loc_83237BCC;
	// bl 0x83222030
	ctx.lr = 0x83237BCC;
	sub_83222030(ctx, base);
loc_83237BCC:
	// li r11,12
	ctx.r11.s64 = 12;
	// sth r29,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r29.u16);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83237BE4"))) PPC_WEAK_FUNC(sub_83237BE4);
PPC_FUNC_IMPL(__imp__sub_83237BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83237BE8"))) PPC_WEAK_FUNC(sub_83237BE8);
PPC_FUNC_IMPL(__imp__sub_83237BE8) {
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
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lhz r11,66(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 66);
	// bne cr6,0x83237c1c
	if (!cr6.eq) goto loc_83237C1C;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x832277f8
	ctx.lr = 0x83237C10;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83237c1c
	if (!cr6.eq) goto loc_83237C1C;
	// bl 0x83227908
	ctx.lr = 0x83237C1C;
	sub_83227908(ctx, base);
loc_83237C1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83237C2C"))) PPC_WEAK_FUNC(sub_83237C2C);
PPC_FUNC_IMPL(__imp__sub_83237C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83237C30"))) PPC_WEAK_FUNC(sub_83237C30);
PPC_FUNC_IMPL(__imp__sub_83237C30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83237c50
	if (!cr6.eq) goto loc_83237C50;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lhz r10,66(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 66);
	// sth r10,8(r4)
	PPC_STORE_U16(ctx.r4.u32 + 8, ctx.r10.u16);
	// blr 
	return;
loc_83237C50:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// sth r10,8(r4)
	PPC_STORE_U16(ctx.r4.u32 + 8, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83237C60"))) PPC_WEAK_FUNC(sub_83237C60);
PPC_FUNC_IMPL(__imp__sub_83237C60) {
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
	// beq cr6,0x83237ca0
	if (cr6.eq) goto loc_83237CA0;
	// lhz r4,70(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 70);
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x83211ad0
	ctx.lr = 0x83237C80;
	sub_83211AD0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83237ca0
	if (cr6.eq) goto loc_83237CA0;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83237CA0:
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

__attribute__((alias("__imp__sub_83237CB4"))) PPC_WEAK_FUNC(sub_83237CB4);
PPC_FUNC_IMPL(__imp__sub_83237CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83237CB8"))) PPC_WEAK_FUNC(sub_83237CB8);
PPC_FUNC_IMPL(__imp__sub_83237CB8) {
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
	// lwz r30,44(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83237d20
	if (cr6.eq) goto loc_83237D20;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83237d04
	if (cr6.eq) goto loc_83237D04;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83222030
	ctx.lr = 0x83237D04;
	sub_83222030(ctx, base);
loc_83237D04:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,55
	ctx.r10.s64 = 55;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// b 0x83237d74
	goto loc_83237D74;
loc_83237D20:
	// lhz r30,72(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 72);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83237d70
	if (cr6.eq) goto loc_83237D70;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83237d54
	if (cr6.eq) goto loc_83237D54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83237D54;
	sub_83222030(ctx, base);
loc_83237D54:
	// li r11,12
	ctx.r11.s64 = 12;
	// sth r30,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r30.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x83237d74
	goto loc_83237D74;
loc_83237D70:
	// li r3,-4
	ctx.r3.s64 = -4;
loc_83237D74:
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

__attribute__((alias("__imp__sub_83237D8C"))) PPC_WEAK_FUNC(sub_83237D8C);
PPC_FUNC_IMPL(__imp__sub_83237D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83237D90"))) PPC_WEAK_FUNC(sub_83237D90);
PPC_FUNC_IMPL(__imp__sub_83237D90) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83237dbc
	if (!cr6.eq) goto loc_83237DBC;
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
loc_83237DBC:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83237cb8
	ctx.lr = 0x83237DD4;
	sub_83237CB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83237e50
	if (!cr6.eq) goto loc_83237E50;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// li r9,12288
	ctx.r9.s64 = 12288;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// addi r7,r11,-349
	ctx.r7.s64 = ctx.r11.s64 + -349;
	// srw r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// srawi r5,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// subfic r4,r11,162
	xer.ca = ctx.r11.u32 <= 162;
	ctx.r4.s64 = 162 - ctx.r11.s64;
	// srawi r3,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 31;
	// and r8,r5,r3
	ctx.r8.u64 = ctx.r5.u64 & ctx.r3.u64;
	// and r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 & ctx.r6.u64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83237e20
	if (cr6.eq) goto loc_83237E20;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x83237e50
	goto loc_83237E50;
loc_83237E20:
	// xori r11,r11,55
	ctx.r11.u64 = ctx.r11.u64 ^ 55;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// srawi r6,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83237e50
	if (cr6.eq) goto loc_83237E50;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83237d90
	ctx.lr = 0x83237E4C;
	sub_83237D90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83237E50:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x83237E58;
	sub_83222030(ctx, base);
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

__attribute__((alias("__imp__sub_83237E70"))) PPC_WEAK_FUNC(sub_83237E70);
PPC_FUNC_IMPL(__imp__sub_83237E70) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lhz r10,66(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 66);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83237eb8
	if (!cr6.eq) goto loc_83237EB8;
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x832277f8
	ctx.lr = 0x83237EA4;
	sub_832277F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83237eb8
	if (!cr6.eq) goto loc_83237EB8;
	// bl 0x83227908
	ctx.lr = 0x83237EB4;
	sub_83227908(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83237EB8:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r5,r10,-28932
	ctx.r5.s64 = ctx.r10.s64 + -28932;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83297a40
	ctx.lr = 0x83237ED0;
	sub_83297A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255a88
	ctx.lr = 0x83237ED8;
	sub_83255A88(ctx, base);
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

__attribute__((alias("__imp__sub_83237EF0"))) PPC_WEAK_FUNC(sub_83237EF0);
PPC_FUNC_IMPL(__imp__sub_83237EF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83237EF8;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83237f1c
	if (!cr6.eq) goto loc_83237F1C;
loc_83237F10:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83237F1C:
	// lhz r4,70(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 70);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83211ad0
	ctx.lr = 0x83237F28;
	sub_83211AD0(ctx, base);
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83237f10
	if (!cr6.eq) goto loc_83237F10;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r28,36(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r26,0
	ctx.r26.s64 = 0;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83237f5c
	if (cr6.eq) goto loc_83237F5C;
	// lhz r20,12(r3)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// b 0x83237f60
	goto loc_83237F60;
loc_83237F5C:
	// lbz r20,3(r3)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
loc_83237F60:
	// li r10,12
	ctx.r10.s64 = 12;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83237f70
	if (cr6.eq) goto loc_83237F70;
	// li r10,14
	ctx.r10.s64 = 14;
loc_83237F70:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ble cr6,0x83238160
	if (!cr6.gt) goto loc_83238160;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r25,12288
	ctx.r25.s64 = 12288;
	// addi r23,r10,11836
	ctx.r23.s64 = ctx.r10.s64 + 11836;
	// addi r22,r11,11792
	ctx.r22.s64 = ctx.r11.s64 + 11792;
loc_83237FA4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r4,2(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83210f58
	ctx.lr = 0x83237FB4;
	sub_83210F58(ctx, base);
	// lhz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// cmplwi cr6,r7,256
	cr6.compare<uint32_t>(ctx.r7.u32, 256, xer);
	// blt cr6,0x83237fcc
	if (cr6.lt) goto loc_83237FCC;
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// b 0x83237fe0
	goto loc_83237FE0;
loc_83237FCC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83237ad0
	ctx.lr = 0x83237FD8;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
loc_83237FE0:
	// bne cr6,0x83238150
	if (!cr6.eq) goto loc_83238150;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// rlwinm r11,r11,0,28,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bgt cr6,0x83238104
	if (cr6.gt) goto loc_83238104;
	// beq cr6,0x83238088
	if (cr6.eq) goto loc_83238088;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83238188
	if (cr6.eq) goto loc_83238188;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8323810c
	if (!cr6.eq) goto loc_8323810C;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// srw r7,r25,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r10,r8,11
	ctx.r10.u64 = ctx.r8.u64 ^ 11;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83238044
	if (cr6.eq) goto loc_83238044;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8323805c
	goto loc_8323805C;
loc_83238044:
	// bl 0x8322b088
	ctx.lr = 0x83238048;
	sub_8322B088(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83266dd0
	ctx.lr = 0x8323805C;
	sub_83266DD0(ctx, base);
loc_8323805C:
	// li r6,1
	ctx.r6.s64 = 1;
	// lhz r3,6(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x832860f8
	ctx.lr = 0x83238070;
	sub_832860F8(ctx, base);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8323817c
	if (!cr6.eq) goto loc_8323817C;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x83238150
	goto loc_83238150;
loc_83238088:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// srw r7,r25,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r10,r8,11
	ctx.r10.u64 = ctx.r8.u64 ^ 11;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832380c0
	if (cr6.eq) goto loc_832380C0;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x832380d8
	goto loc_832380D8;
loc_832380C0:
	// bl 0x8322b088
	ctx.lr = 0x832380C4;
	sub_8322B088(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83266dd0
	ctx.lr = 0x832380D8;
	sub_83266DD0(ctx, base);
loc_832380D8:
	// li r6,1
	ctx.r6.s64 = 1;
	// lhz r3,6(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x832860f8
	ctx.lr = 0x832380EC;
	sub_832860F8(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8323817c
	if (!cr6.eq) goto loc_8323817C;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x83238150
	goto loc_83238150;
loc_83238104:
	// cmpwi cr6,r11,256
	cr6.compare<int32_t>(ctx.r11.s32, 256, xer);
	// beq cr6,0x8323817c
	if (cr6.eq) goto loc_8323817C;
loc_8323810C:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83238134
	if (!cr6.eq) goto loc_83238134;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x832277f8
	ctx.lr = 0x83238120;
	sub_832277F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83238134
	if (!cr6.eq) goto loc_83238134;
	// bl 0x83227908
	ctx.lr = 0x83238130;
	sub_83227908(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_83238134:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// clrlwi r6,r11,23
	ctx.r6.u64 = ctx.r11.u32 & 0x1FF;
	// rlwinm r6,r6,0,28,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// clrldi r6,r6,32
	ctx.r6.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// bl 0x832085e8
	ctx.lr = 0x83238150;
	sub_832085E8(ctx, base);
loc_83238150:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r24,r20
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r20.s32, xer);
	// blt cr6,0x83237fa4
	if (cr6.lt) goto loc_83237FA4;
loc_83238160:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8323817c
	if (!cr6.eq) goto loc_8323817C;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// li r3,-4
	ctx.r3.s64 = -4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83238180
	if (cr6.eq) goto loc_83238180;
loc_8323817C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83238180:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83238188:
	// li r6,1
	ctx.r6.s64 = 1;
	// lhz r3,6(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x832860f8
	ctx.lr = 0x8323819C;
	sub_832860F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,142
	ctx.r5.s64 = 142;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x83266dd0
	ctx.lr = 0x832381AC;
	sub_83266DD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832381B8"))) PPC_WEAK_FUNC(sub_832381B8);
PPC_FUNC_IMPL(__imp__sub_832381B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832381C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832382e4
	if (cr6.eq) goto loc_832382E4;
	// lhz r4,70(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 70);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83211ad0
	ctx.lr = 0x832381E4;
	sub_83211AD0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832381fc
	if (cr6.eq) goto loc_832381FC;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// b 0x83238200
	goto loc_83238200;
loc_832381FC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83238200:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832382e4
	if (!cr6.eq) goto loc_832382E4;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83237cb8
	ctx.lr = 0x83238220;
	sub_83237CB8(ctx, base);
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r30,12288
	ctx.r30.s64 = 12288;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r7,r30,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r8.u8 & 0x3F));
	// xori r11,r9,55
	ctx.r11.u64 = ctx.r9.u64 ^ 55;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832382ac
	if (cr6.eq) goto loc_832382AC;
loc_83238250:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x83237ef0
	ctx.lr = 0x83238268;
	sub_83237EF0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832382f0
	if (cr6.eq) goto loc_832382F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83237cb8
	ctx.lr = 0x8323827C;
	sub_83237CB8(ctx, base);
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r7,r30,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// xori r11,r9,55
	ctx.r11.u64 = ctx.r9.u64 ^ 55;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83238250
	if (!cr6.eq) goto loc_83238250;
loc_832382AC:
	// lhz r11,10(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832382dc
	if (!cr6.eq) goto loc_832382DC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83225c80
	ctx.lr = 0x832382C0;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,11836
	ctx.r9.s64 = ctx.r11.s64 + 11836;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,11852
	ctx.r4.s64 = ctx.r10.s64 + 11852;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x832382DC;
	sub_832085E8(ctx, base);
loc_832382DC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x832382E4;
	sub_83222030(ctx, base);
loc_832382E4:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832382F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832382FC"))) PPC_WEAK_FUNC(sub_832382FC);
PPC_FUNC_IMPL(__imp__sub_832382FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83238300"))) PPC_WEAK_FUNC(sub_83238300);
PPC_FUNC_IMPL(__imp__sub_83238300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83238308;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83238410
	if (cr6.eq) goto loc_83238410;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bne cr6,0x83238410
	if (!cr6.eq) goto loc_83238410;
	// lhz r4,70(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 70);
	// bl 0x83211ad0
	ctx.lr = 0x83238330;
	sub_83211AD0(ctx, base);
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83238410
	if (!cr6.eq) goto loc_83238410;
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, xer);
	// bne cr6,0x83238358
	if (!cr6.eq) goto loc_83238358;
loc_8323834C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83238358:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83238370
	if (cr6.eq) goto loc_83238370;
	// lhz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// b 0x83238374
	goto loc_83238374;
loc_83238370:
	// lbz r27,3(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
loc_83238374:
	// li r10,12
	ctx.r10.s64 = 12;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83238384
	if (cr6.eq) goto loc_83238384;
	// li r10,14
	ctx.r10.s64 = 14;
loc_83238384:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ble cr6,0x83238410
	if (!cr6.gt) goto loc_83238410;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r29,r10,11836
	ctx.r29.s64 = ctx.r10.s64 + 11836;
	// addi r28,r11,11872
	ctx.r28.s64 = ctx.r11.s64 + 11872;
loc_832383B4:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r5,r11,23
	ctx.r5.u64 = ctx.r11.u32 & 0x1FF;
	// rlwinm r5,r5,0,28,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// cmpwi cr6,r5,256
	cr6.compare<int32_t>(ctx.r5.s32, 256, xer);
	// bgt cr6,0x832383ec
	if (cr6.gt) goto loc_832383EC;
	// beq cr6,0x83238400
	if (cr6.eq) goto loc_83238400;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x83238400
	if (cr6.lt) goto loc_83238400;
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// bge cr6,0x832383f4
	if (!cr6.lt) goto loc_832383F4;
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmpw cr6,r10,r26
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, xer);
	// beq cr6,0x8323834c
	if (cr6.eq) goto loc_8323834C;
	// b 0x83238400
	goto loc_83238400;
loc_832383EC:
	// cmpwi cr6,r5,262
	cr6.compare<int32_t>(ctx.r5.s32, 262, xer);
	// beq cr6,0x83238400
	if (cr6.eq) goto loc_83238400;
loc_832383F4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832085e8
	ctx.lr = 0x83238400;
	sub_832085E8(ctx, base);
loc_83238400:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// blt cr6,0x832383b4
	if (cr6.lt) goto loc_832383B4;
loc_83238410:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323841C"))) PPC_WEAK_FUNC(sub_8323841C);
PPC_FUNC_IMPL(__imp__sub_8323841C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83238420"))) PPC_WEAK_FUNC(sub_83238420);
PPC_FUNC_IMPL(__imp__sub_83238420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83238428;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83238508
	if (cr6.eq) goto loc_83238508;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832384dc
	if (cr6.eq) goto loc_832384DC;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83238508
	if (cr6.eq) goto loc_83238508;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,12288
	ctx.r29.s64 = 12288;
loc_83238460:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83238300
	ctx.lr = 0x83238470;
	sub_83238300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8323850c
	if (cr6.eq) goto loc_8323850C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x83237cb8
	ctx.lr = 0x8323848C;
	sub_83237CB8(ctx, base);
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r7,r29,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r8.u8 & 0x3F));
	// xori r11,r9,55
	ctx.r11.u64 = ctx.r9.u64 ^ 55;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832384c0
	if (cr6.eq) goto loc_832384C0;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_832384C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x832384C8;
	sub_83222030(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83238460
	if (!cr6.eq) goto loc_83238460;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832384DC:
	// bl 0x832260e8
	ctx.lr = 0x832384E0;
	sub_832260E8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r8,r11,11836
	ctx.r8.s64 = ctx.r11.s64 + 11836;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,-22544
	ctx.r5.s64 = ctx.r10.s64 + -22544;
	// addi r4,r9,11924
	ctx.r4.s64 = ctx.r9.s64 + 11924;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x832085e8
	ctx.lr = 0x83238508;
	sub_832085E8(ctx, base);
loc_83238508:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8323850C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83238514"))) PPC_WEAK_FUNC(sub_83238514);
PPC_FUNC_IMPL(__imp__sub_83238514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83238518"))) PPC_WEAK_FUNC(sub_83238518);
PPC_FUNC_IMPL(__imp__sub_83238518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83238520;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83238550
	if (cr6.eq) goto loc_83238550;
	// lhz r4,70(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 70);
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x83211ad0
	ctx.lr = 0x8323853C;
	sub_83211AD0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83238550
	if (cr6.eq) goto loc_83238550;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// b 0x83238554
	goto loc_83238554;
loc_83238550:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83238554:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83238680
	if (!cr6.eq) goto loc_83238680;
	// lwz r29,36(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lhz r4,70(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 70);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83211b18
	ctx.lr = 0x83238570;
	sub_83211B18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83238680
	if (cr6.eq) goto loc_83238680;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r5,1(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323859c
	if (cr6.eq) goto loc_8323859C;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 | ctx.r5.u64;
loc_8323859C:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x832385c4
	if (!cr6.gt) goto loc_832385C4;
	// li r11,4
	ctx.r11.s64 = 4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832385b4
	if (cr6.eq) goto loc_832385B4;
	// li r11,8
	ctx.r11.s64 = 8;
loc_832385B4:
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832128c0
	ctx.lr = 0x832385C4;
	sub_832128C0(ctx, base);
loc_832385C4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83238680
	if (!cr6.eq) goto loc_83238680;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83238618
	if (!cr6.eq) goto loc_83238618;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,2(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// bl 0x83211a70
	ctx.lr = 0x832385EC;
	sub_83211A70(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83238610
	if (cr6.eq) goto loc_83238610;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83238610:
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
loc_83238618:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r10,55
	ctx.r10.s64 = 55;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lhz r3,2(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// bl 0x832860f8
	ctx.lr = 0x83238640;
	sub_832860F8(ctx, base);
	// lhz r5,66(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 66);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r5,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r5.u16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83277b08
	ctx.lr = 0x83238670;
	sub_83277B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83286150
	ctx.lr = 0x83238678;
	sub_83286150(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x83238680;
	sub_83222030(ctx, base);
loc_83238680:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83238688"))) PPC_WEAK_FUNC(sub_83238688);
PPC_FUNC_IMPL(__imp__sub_83238688) {
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
loc_832386A0:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83238710
	if (!cr6.eq) goto loc_83238710;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x832386dc
	if (!cr6.eq) goto loc_832386DC;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832386dc
	if (!cr6.eq) goto loc_832386DC;
	// lhz r3,66(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// bl 0x832277f8
	ctx.lr = 0x832386D8;
	sub_832277F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_832386DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83211ef8
	ctx.lr = 0x832386E4;
	sub_83211EF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83238704
	if (!cr6.gt) goto loc_83238704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83259198
	ctx.lr = 0x832386F8;
	sub_83259198(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83238704
	if (cr6.eq) goto loc_83238704;
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
loc_83238704:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
loc_83238710:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83238728
	if (!cr6.eq) goto loc_83238728;
	// lwz r31,44(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832386a0
	if (!cr6.eq) goto loc_832386A0;
loc_83238728:
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

__attribute__((alias("__imp__sub_83238740"))) PPC_WEAK_FUNC(sub_83238740);
PPC_FUNC_IMPL(__imp__sub_83238740) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83238800
	if (cr6.eq) goto loc_83238800;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83238800
	if (!cr6.eq) goto loc_83238800;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83238800
	if (!cr6.eq) goto loc_83238800;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,153
	ctx.r9.s64 = 153;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r3,18(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// bl 0x832860f8
	ctx.lr = 0x832387AC;
	sub_832860F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r6,18(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// li r7,35
	ctx.r7.s64 = 35;
	// stb r11,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83277b08
	ctx.lr = 0x832387E0;
	sub_83277B08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83286150
	ctx.lr = 0x832387E8;
	sub_83286150(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x832387F0;
	sub_83222030(ctx, base);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwimi r7,r8,0,30,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFC);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
loc_83238800:
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

__attribute__((alias("__imp__sub_83238818"))) PPC_WEAK_FUNC(sub_83238818);
PPC_FUNC_IMPL(__imp__sub_83238818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83238820;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8323894c
	if (!cr6.gt) goto loc_8323894C;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// li r24,12
	ctx.r24.s64 = 12;
loc_83238844:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwzx r29,r26,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83238918
	if (cr6.eq) goto loc_83238918;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83238900
	if (cr6.eq) goto loc_83238900;
	// lhz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832388fc
	if (cr6.eq) goto loc_832388FC;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_83238874:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x8323889c
	if (cr6.eq) goto loc_8323889C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323889c
	if (cr6.eq) goto loc_8323889C;
	// bl 0x83209d68
	ctx.lr = 0x83238898;
	sub_83209D68(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_8323889C:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x83222030
	ctx.lr = 0x832388A4;
	sub_83222030(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// sth r30,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r30.u16);
	// addi r28,r28,56
	ctx.r28.s64 = ctx.r28.s64 + 56;
	// stb r30,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r30.u8);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// sth r30,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r30.u16);
	// stb r30,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r30.u8);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// sth r30,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r30.u16);
	// sth r30,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r30.u16);
	// sth r24,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r24.u16);
	// sth r30,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r30.u16);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// lhz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x83238874
	if (cr6.lt) goto loc_83238874;
loc_832388FC:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_83238900:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// sth r30,16(r29)
	PPC_STORE_U16(ctx.r29.u32 + 16, ctx.r30.u16);
	// sth r30,18(r29)
	PPC_STORE_U16(ctx.r29.u32 + 18, ctx.r30.u16);
loc_83238918:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwzx r10,r26,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83238938
	if (cr6.eq) goto loc_83238938;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x83209d68
	ctx.lr = 0x83238930;
	sub_83209D68(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stwx r30,r26,r11
	PPC_STORE_U32(ctx.r26.u32 + ctx.r11.u32, ctx.r30.u32);
loc_83238938:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, xer);
	// blt cr6,0x83238844
	if (cr6.lt) goto loc_83238844;
loc_8323894C:
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83238960
	if (cr6.eq) goto loc_83238960;
	// bl 0x83209d68
	ctx.lr = 0x8323895C;
	sub_83209D68(ctx, base);
	// stw r30,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r30.u32);
loc_83238960:
	// stw r30,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r30.u32);
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// stw r30,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83238974"))) PPC_WEAK_FUNC(sub_83238974);
PPC_FUNC_IMPL(__imp__sub_83238974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83238978"))) PPC_WEAK_FUNC(sub_83238978);
PPC_FUNC_IMPL(__imp__sub_83238978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x83238980;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83238c28
	if (cr6.eq) goto loc_83238C28;
	// lwz r18,4(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhz r10,16(r18)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r18.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bge cr6,0x832389cc
	if (!cr6.lt) goto loc_832389CC;
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r31,r11,0,0,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209df8
	ctx.lr = 0x832389C4;
	sub_83209DF8(ctx, base);
	// stw r3,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r3.u32);
	// stw r31,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r31.u32);
loc_832389CC:
	// lhz r9,16(r18)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r18.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,36(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 36);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// mr r17,r30
	ctx.r17.u64 = ctx.r30.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r16,r10,r11
	ctx.r16.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x83238c28
	if (!cr6.gt) goto loc_83238C28;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r19,12
	ctx.r19.s64 = 12;
	// ori r21,r11,8400
	ctx.r21.u64 = ctx.r11.u64 | 8400;
	// li r15,142
	ctx.r15.s64 = 142;
loc_83238A04:
	// lhz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r20.u32 + 0);
	// add r26,r11,r16
	ctx.r26.u64 = ctx.r11.u64 + ctx.r16.u64;
	// lbz r10,1(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1);
	// mulli r11,r10,56
	ctx.r11.s64 = ctx.r10.s64 * 56;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x83209aa8
	ctx.lr = 0x83238A1C;
	sub_83209AA8(ctx, base);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r8,8(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stwx r3,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r3.u32);
	// beq cr6,0x83238a54
	if (cr6.eq) goto loc_83238A54;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// sth r30,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r30.u16);
	// sth r30,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r30.u16);
loc_83238A54:
	// lhz r10,2(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 2);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r23,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r23.u32);
	// sth r10,18(r28)
	PPC_STORE_U16(ctx.r28.u32 + 18, ctx.r10.u16);
	// lwz r8,12(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// lbz r7,1(r26)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1);
	// sth r7,16(r28)
	PPC_STORE_U16(ctx.r28.u32 + 16, ctx.r7.u16);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lbz r10,1(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83238adc
	if (!cr6.gt) goto loc_83238ADC;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
loc_83238A88:
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// sth r30,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r30.u16);
	// stb r30,30(r11)
	PPC_STORE_U8(ctx.r11.u32 + 30, ctx.r30.u8);
	// stw r30,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r30.u32);
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// sth r30,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r30.u16);
	// stb r30,42(r11)
	PPC_STORE_U8(ctx.r11.u32 + 42, ctx.r30.u8);
	// stw r30,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r30.u32);
	// stw r30,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r30.u32);
	// stw r30,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
	// sth r30,68(r11)
	PPC_STORE_U16(ctx.r11.u32 + 68, ctx.r30.u16);
	// sth r30,70(r11)
	PPC_STORE_U16(ctx.r11.u32 + 70, ctx.r30.u16);
	// sth r19,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r19.u16);
	// sth r30,54(r11)
	PPC_STORE_U16(ctx.r11.u32 + 54, ctx.r30.u16);
	// stwu r30,56(r11)
	ea = 56 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// lbz r10,1(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x83238a88
	if (cr6.lt) goto loc_83238A88;
loc_83238ADC:
	// addi r29,r26,4
	ctx.r29.s64 = ctx.r26.s64 + 4;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83238c08
	if (!cr6.gt) goto loc_83238C08;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_83238AF0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r31,r25,r11
	ctx.r31.u64 = ctx.r25.u64 + ctx.r11.u64;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// sth r11,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r11.u16);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x83210ec0
	ctx.lr = 0x83238B10;
	sub_83210EC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// sth r3,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r3.u16);
	// beq cr6,0x83238b2c
	if (cr6.eq) goto loc_83238B2C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x83210908
	ctx.lr = 0x83238B2C;
	sub_83210908(ctx, base);
loc_83238B2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83238b4c
	if (!cr6.eq) goto loc_83238B4C;
	// lhz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x83238B40;
	sub_832277F8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83238b5c
	if (cr6.eq) goto loc_83238B5C;
loc_83238B4C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// lbz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// bl 0x83210848
	ctx.lr = 0x83238B5C;
	sub_83210848(ctx, base);
loc_83238B5C:
	// lhz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x83210fc0
	ctx.lr = 0x83238B68;
	sub_83210FC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83238b8c
	if (!cr6.eq) goto loc_83238B8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// b 0x83238b98
	goto loc_83238B98;
loc_83238B8C:
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// lbz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// bl 0x83210848
	ctx.lr = 0x83238B98;
	sub_83210848(ctx, base);
loc_83238B98:
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lhz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x83211178
	ctx.lr = 0x83238BA8;
	sub_83211178(ctx, base);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83238bc4
	if (cr6.lt) goto loc_83238BC4;
	// beq cr6,0x83238c30
	if (cr6.eq) goto loc_83238C30;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x83238bf0
	if (!cr6.eq) goto loc_83238BF0;
loc_83238BC4:
	// rlwinm r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83238bf0
	if (cr6.eq) goto loc_83238BF0;
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lhz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// bl 0x832125a0
	ctx.lr = 0x83238BF0;
	sub_832125A0(ctx, base);
loc_83238BF0:
	// lbz r11,1(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r25,r25,56
	ctx.r25.s64 = ctx.r25.s64 + 56;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, xer);
	// blt cr6,0x83238af0
	if (cr6.lt) goto loc_83238AF0;
loc_83238C08:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r20,r20,2
	ctx.r20.s64 = ctx.r20.s64 + 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// lhz r10,16(r18)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r18.u32 + 16);
	// cmpw cr6,r17,r10
	cr6.compare<int32_t>(ctx.r17.s32, ctx.r10.s32, xer);
	// blt cr6,0x83238a04
	if (cr6.lt) goto loc_83238A04;
loc_83238C28:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_83238C30:
	// li r6,1
	ctx.r6.s64 = 1;
	// lhz r3,6(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x832860f8
	ctx.lr = 0x83238C44;
	sub_832860F8(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sraw r9,r21,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r21.s32 < 0) & (((ctx.r21.s32 >> temp.u32) << temp.u32) != ctx.r21.s32);
	ctx.r9.s64 = ctx.r21.s32 >> temp.u32;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83238c6c
	if (cr6.eq) goto loc_83238C6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83238C6C;
	sub_83222030(ctx, base);
loc_83238C6C:
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// sth r15,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r15.u16);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// sth r9,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r9.u16);
	// b 0x83238bf0
	goto loc_83238BF0;
}

__attribute__((alias("__imp__sub_83238C8C"))) PPC_WEAK_FUNC(sub_83238C8C);
PPC_FUNC_IMPL(__imp__sub_83238C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83238C90"))) PPC_WEAK_FUNC(sub_83238C90);
PPC_FUNC_IMPL(__imp__sub_83238C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83238C98;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83238cbc
	if (!cr6.eq) goto loc_83238CBC;
loc_83238CB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83238CBC:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83238cb0
	if (cr6.eq) goto loc_83238CB0;
	// lwz r29,408(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83238cb0
	if (cr6.eq) goto loc_83238CB0;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// bl 0x83296d08
	ctx.lr = 0x83238CEC;
	sub_83296D08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83238d44
	if (cr6.eq) goto loc_83238D44;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r10,58
	cr6.compare<uint32_t>(ctx.r10.u32, 58, xer);
	// bne cr6,0x83238d44
	if (!cr6.eq) goto loc_83238D44;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// subf r31,r23,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r23.s64;
	// bl 0x83209c20
	ctx.lr = 0x83238D10;
	sub_83209C20(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r11,46
	ctx.r11.s64 = 46;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r30,r31,r21
	ctx.r30.u64 = ctx.r31.u64 + ctx.r21.u64;
	// stbx r11,r31,r21
	PPC_STORE_U8(ctx.r31.u32 + ctx.r21.u32, ctx.r11.u8);
	// bl 0x83255980
	ctx.lr = 0x83238D28;
	sub_83255980(ctx, base);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r5,r30,2
	ctx.r5.s64 = ctx.r30.s64 + 2;
	// rlwinm r6,r10,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// bl 0x83255098
	ctx.lr = 0x83238D40;
	sub_83255098(ctx, base);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
loc_83238D44:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lbz r5,0(r23)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83210848
	ctx.lr = 0x83238D54;
	sub_83210848(ctx, base);
	// lwz r25,0(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq cr6,0x83238e08
	if (cr6.eq) goto loc_83238E08;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x83238e94
	if (!cr6.gt) goto loc_83238E94;
	// lwz r28,8(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83238D7C:
	// lwz r26,0(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83238df4
	if (cr6.eq) goto loc_83238DF4;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// bne cr6,0x83238df4
	if (!cr6.eq) goto loc_83238DF4;
	// lhz r30,16(r26)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r26.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83238dec
	if (!cr6.gt) goto loc_83238DEC;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
loc_83238DAC:
	// add r7,r6,r31
	ctx.r7.u64 = ctx.r6.u64 + ctx.r31.u64;
	// lwz r11,44(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x83238dd4
	if (!cr6.eq) goto loc_83238DD4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,24(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// bl 0x83237ad0
	ctx.lr = 0x83238DC8;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83238de8
	if (cr6.eq) goto loc_83238DE8;
loc_83238DD4:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,56
	ctx.r6.s64 = ctx.r6.s64 + 56;
	// cmpw cr6,r5,r30
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, xer);
	// blt cr6,0x83238dac
	if (cr6.lt) goto loc_83238DAC;
	// b 0x83238dec
	goto loc_83238DEC;
loc_83238DE8:
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
loc_83238DEC:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// bne cr6,0x83238e94
	if (!cr6.eq) goto loc_83238E94;
loc_83238DF4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r25
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, xer);
	// blt cr6,0x83238d7c
	if (cr6.lt) goto loc_83238D7C;
	// b 0x83238e94
	goto loc_83238E94;
loc_83238E08:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x83238e94
	if (!cr6.gt) goto loc_83238E94;
	// lwz r28,8(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83238E18:
	// lwz r26,0(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83238e84
	if (cr6.eq) goto loc_83238E84;
	// lhz r30,16(r26)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r26.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83238e7c
	if (!cr6.gt) goto loc_83238E7C;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
loc_83238E3C:
	// add r7,r6,r31
	ctx.r7.u64 = ctx.r6.u64 + ctx.r31.u64;
	// lwz r11,44(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x83238e64
	if (!cr6.eq) goto loc_83238E64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,24(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// bl 0x83237ad0
	ctx.lr = 0x83238E58;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83238e78
	if (cr6.eq) goto loc_83238E78;
loc_83238E64:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,56
	ctx.r6.s64 = ctx.r6.s64 + 56;
	// cmpw cr6,r5,r30
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, xer);
	// blt cr6,0x83238e3c
	if (cr6.lt) goto loc_83238E3C;
	// b 0x83238e7c
	goto loc_83238E7C;
loc_83238E78:
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
loc_83238E7C:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// bne cr6,0x83238e94
	if (!cr6.eq) goto loc_83238E94;
loc_83238E84:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r25
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, xer);
	// blt cr6,0x83238e18
	if (cr6.lt) goto loc_83238E18;
loc_83238E94:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83238ea4
	if (cr6.eq) goto loc_83238EA4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83209d68
	ctx.lr = 0x83238EA4;
	sub_83209D68(ctx, base);
loc_83238EA4:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83238ec0
	if (cr6.eq) goto loc_83238EC0;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83238ec0
	if (cr6.eq) goto loc_83238EC0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83238740
	ctx.lr = 0x83238EC0;
	sub_83238740(ctx, base);
loc_83238EC0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83238ECC"))) PPC_WEAK_FUNC(sub_83238ECC);
PPC_FUNC_IMPL(__imp__sub_83238ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83238ED0"))) PPC_WEAK_FUNC(sub_83238ED0);
PPC_FUNC_IMPL(__imp__sub_83238ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83238ED8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83239010
	if (cr6.eq) goto loc_83239010;
	// lhz r11,26(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 26);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83238f70
	if (cr6.eq) goto loc_83238F70;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83238F04:
	// lwz r29,68(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83238f5c
	if (cr6.eq) goto loc_83238F5C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x83238f28
	if (!cr6.eq) goto loc_83238F28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83229630
	ctx.lr = 0x83238F24;
	sub_83229630(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_83238F28:
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// bl 0x83229630
	ctx.lr = 0x83238F30;
	sub_83229630(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83238f50
	if (!cr6.eq) goto loc_83238F50;
	// bl 0x83228fe8
	ctx.lr = 0x83238F3C;
	sub_83228FE8(ctx, base);
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x83229118
	ctx.lr = 0x83238F50;
	sub_83229118(ctx, base);
loc_83238F50:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r4,r29,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// bl 0x83238ed0
	ctx.lr = 0x83238F5C;
	sub_83238ED0(ctx, base);
loc_83238F5C:
	// lhz r11,26(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 26);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x83238f04
	if (cr6.lt) goto loc_83238F04;
loc_83238F70:
	// lhz r11,38(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 38);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83238fa8
	if (cr6.eq) goto loc_83238FA8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83238F84:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x83238978
	ctx.lr = 0x83238F94;
	sub_83238978(ctx, base);
	// lhz r11,38(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 38);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x83238f84
	if (cr6.lt) goto loc_83238F84;
loc_83238FA8:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83239010
	if (cr6.eq) goto loc_83239010;
	// lwz r28,108(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83239010
	if (cr6.eq) goto loc_83239010;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r9,r28,4
	ctx.r9.s64 = ctx.r28.s64 + 4;
	// lhz r8,2(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// li r31,0
	ctx.r31.s64 = 0;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83239010
	if (cr6.eq) goto loc_83239010;
	// addi r29,r9,-2
	ctx.r29.s64 = ctx.r9.s64 + -2;
loc_83238FE0:
	// lhzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,14,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x30000) | (ctx.r10.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r10,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FFFC;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x83238c90
	ctx.lr = 0x83239000;
	sub_83238C90(ctx, base);
	// lhz r9,2(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, xer);
	// blt cr6,0x83238fe0
	if (cr6.lt) goto loc_83238FE0;
loc_83239010:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83239018"))) PPC_WEAK_FUNC(sub_83239018);
PPC_FUNC_IMPL(__imp__sub_83239018) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83239090
	if (cr6.eq) goto loc_83239090;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r31,r11,24688
	ctx.r31.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83239060
	if (cr6.eq) goto loc_83239060;
	// lwz r3,408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83239088
	if (!cr6.eq) goto loc_83239088;
loc_83239060:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83209aa8
	ctx.lr = 0x83239068;
	sub_83209AA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83239088
	if (cr6.eq) goto loc_83239088;
	// stw r3,408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 408, ctx.r3.u32);
loc_83239088:
	// lwz r4,268(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// bl 0x83238ed0
	ctx.lr = 0x83239090;
	sub_83238ED0(ctx, base);
loc_83239090:
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

__attribute__((alias("__imp__sub_832390A8"))) PPC_WEAK_FUNC(sub_832390A8);
PPC_FUNC_IMPL(__imp__sub_832390A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83238818
	sub_83238818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832390AC"))) PPC_WEAK_FUNC(sub_832390AC);
PPC_FUNC_IMPL(__imp__sub_832390AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832390B0"))) PPC_WEAK_FUNC(sub_832390B0);
PPC_FUNC_IMPL(__imp__sub_832390B0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83238c90
	ctx.lr = 0x832390C8;
	sub_83238C90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832390e4
	if (!cr6.eq) goto loc_832390E4;
loc_832390D0:
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
loc_832390E4:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// addi r6,r11,-349
	ctx.r6.s64 = ctx.r11.s64 + -349;
	// srw r5,r10,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// srawi r4,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// subfic r11,r11,162
	xer.ca = ctx.r11.u32 <= 162;
	ctx.r11.s64 = 162 - ctx.r11.s64;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// and r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 & ctx.r10.u64;
	// and r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 & ctx.r5.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x832390d0
	if (!cr6.eq) goto loc_832390D0;
	// li r4,55
	ctx.r4.s64 = 55;
	// bl 0x83266d78
	ctx.lr = 0x8323912C;
	sub_83266D78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323913C"))) PPC_WEAK_FUNC(sub_8323913C);
PPC_FUNC_IMPL(__imp__sub_8323913C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83239140"))) PPC_WEAK_FUNC(sub_83239140);
PPC_FUNC_IMPL(__imp__sub_83239140) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83239180
	if (cr6.eq) goto loc_83239180;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83239184
	if (!cr6.eq) goto loc_83239184;
	// lhz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x83239178;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83239184
	if (!cr6.eq) goto loc_83239184;
loc_83239180:
	// bl 0x83227908
	ctx.lr = 0x83239184;
	sub_83227908(ctx, base);
loc_83239184:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83238c90
	ctx.lr = 0x83239190;
	sub_83238C90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832391a4
	if (!cr6.eq) goto loc_832391A4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x832391b8
	goto loc_832391B8;
loc_832391A4:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x832240b8
	ctx.lr = 0x832391B4;
	sub_832240B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832391B8:
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

__attribute__((alias("__imp__sub_832391D0"))) PPC_WEAK_FUNC(sub_832391D0);
PPC_FUNC_IMPL(__imp__sub_832391D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x832391D8;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8323935c
	if (cr6.eq) goto loc_8323935C;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323935c
	if (cr6.eq) goto loc_8323935C;
	// lwz r21,408(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x8323935c
	if (cr6.eq) goto loc_8323935C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83239228
	if (!cr6.eq) goto loc_83239228;
	// bl 0x83210ec0
	ctx.lr = 0x83239224;
	sub_83210EC0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_83239228:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x83239258
	if (!cr6.eq) goto loc_83239258;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// sth r29,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r29.u16);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r29,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r29.u8);
	// bl 0x83210908
	ctx.lr = 0x83239254;
	sub_83210908(ctx, base);
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
loc_83239258:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8323935c
	if (!cr6.gt) goto loc_8323935C;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
loc_8323926C:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// lwzx r31,r23,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83239348
	if (cr6.eq) goto loc_83239348;
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83239348
	if (cr6.eq) goto loc_83239348;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_83239294:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, xer);
	// bne cr6,0x832392c8
	if (!cr6.eq) goto loc_832392C8;
	// lhz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 48);
	// cmplw cr6,r11,r19
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, xer);
	// beq cr6,0x83239324
	if (cr6.eq) goto loc_83239324;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83239328
	if (cr6.eq) goto loc_83239328;
	// lhz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 50);
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, xer);
	// b 0x83239320
	goto loc_83239320;
loc_832392C8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// sth r29,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r29.u16);
	// stb r29,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r29.u8);
	// lhz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 48);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83210f58
	ctx.lr = 0x832392E8;
	sub_83210F58(ctx, base);
	// lhz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// blt cr6,0x83239300
	if (cr6.lt) goto loc_83239300;
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// b 0x83239320
	goto loc_83239320;
loc_83239300:
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,256
	cr6.compare<uint32_t>(ctx.r10.u32, 256, xer);
	// bge cr6,0x83239328
	if (!cr6.lt) goto loc_83239328;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x83237ad0
	ctx.lr = 0x83239318;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
loc_83239320:
	// bne cr6,0x83239328
	if (!cr6.eq) goto loc_83239328;
loc_83239324:
	// li r27,1
	ctx.r27.s64 = 1;
loc_83239328:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83239368
	if (!cr6.eq) goto loc_83239368;
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,56
	ctx.r28.s64 = ctx.r28.s64 + 56;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, xer);
	// blt cr6,0x83239294
	if (cr6.lt) goto loc_83239294;
loc_83239348:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmpw cr6,r20,r11
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, xer);
	// blt cr6,0x8323926c
	if (cr6.lt) goto loc_8323926C;
loc_8323935C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_83239368:
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323937c
	if (cr6.eq) goto loc_8323937C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83238740
	ctx.lr = 0x8323937C;
	sub_83238740(ctx, base);
loc_8323937C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83239388"))) PPC_WEAK_FUNC(sub_83239388);
PPC_FUNC_IMPL(__imp__sub_83239388) {
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
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x832391d0
	ctx.lr = 0x8323939C;
	sub_832391D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832393d0
	if (cr6.eq) goto loc_832393D0;
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832393d0
	if (cr6.eq) goto loc_832393D0;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832393D0:
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

__attribute__((alias("__imp__sub_832393E4"))) PPC_WEAK_FUNC(sub_832393E4);
PPC_FUNC_IMPL(__imp__sub_832393E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832393E8"))) PPC_WEAK_FUNC(sub_832393E8);
PPC_FUNC_IMPL(__imp__sub_832393E8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832391d0
	ctx.lr = 0x83239410;
	sub_832391D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83239434
	if (!cr6.eq) goto loc_83239434;
	// li r3,-4
	ctx.r3.s64 = -4;
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
loc_83239434:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x832240b8
	ctx.lr = 0x83239444;
	sub_832240B8(ctx, base);
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

__attribute__((alias("__imp__sub_8323945C"))) PPC_WEAK_FUNC(sub_8323945C);
PPC_FUNC_IMPL(__imp__sub_8323945C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83239460"))) PPC_WEAK_FUNC(sub_83239460);
PPC_FUNC_IMPL(__imp__sub_83239460) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x832391d0
	ctx.lr = 0x83239474;
	sub_832391D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8323948c
	if (!cr6.eq) goto loc_8323948C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8323948C:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832394B4"))) PPC_WEAK_FUNC(sub_832394B4);
PPC_FUNC_IMPL(__imp__sub_832394B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832394B8"))) PPC_WEAK_FUNC(sub_832394B8);
PPC_FUNC_IMPL(__imp__sub_832394B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x832394C0;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83239510
	if (!cr6.eq) goto loc_83239510;
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83239648
	if (cr6.eq) goto loc_83239648;
	// bl 0x832277e8
	ctx.lr = 0x83239500;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83239510
	if (!cr6.eq) goto loc_83239510;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83239510:
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r27,256
	cr6.compare<uint32_t>(ctx.r27.u32, 256, xer);
	// blt cr6,0x83239584
	if (cr6.lt) goto loc_83239584;
	// lhz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323961c
	if (cr6.eq) goto loc_8323961C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83239530:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bne cr6,0x8323956c
	if (!cr6.eq) goto loc_8323956C;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83239618
	if (cr6.eq) goto loc_83239618;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832112c8
	ctx.lr = 0x83239560;
	sub_832112C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83239618
	if (!cr6.eq) goto loc_83239618;
loc_8323956C:
	// lhz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x83239530
	if (cr6.lt) goto loc_83239530;
	// b 0x8323961c
	goto loc_8323961C;
loc_83239584:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// bl 0x83210848
	ctx.lr = 0x83239594;
	sub_83210848(ctx, base);
	// lhz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323961c
	if (cr6.eq) goto loc_8323961C;
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
loc_832395AC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// bne cr6,0x83239600
	if (!cr6.eq) goto loc_83239600;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83237ad0
	ctx.lr = 0x832395CC;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83239600
	if (!cr6.eq) goto loc_83239600;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83239618
	if (cr6.eq) goto loc_83239618;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832112c8
	ctx.lr = 0x832395F4;
	sub_832112C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83239618
	if (!cr6.eq) goto loc_83239618;
loc_83239600:
	// lhz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x832395ac
	if (cr6.lt) goto loc_832395AC;
	// b 0x8323961c
	goto loc_8323961C;
loc_83239618:
	// li r22,1
	ctx.r22.s64 = 1;
loc_8323961C:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83239648
	if (cr6.eq) goto loc_83239648;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323963c
	if (cr6.eq) goto loc_8323963C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83238740
	ctx.lr = 0x8323963C;
	sub_83238740(ctx, base);
loc_8323963C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83239648:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83239654"))) PPC_WEAK_FUNC(sub_83239654);
PPC_FUNC_IMPL(__imp__sub_83239654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83239658"))) PPC_WEAK_FUNC(sub_83239658);
PPC_FUNC_IMPL(__imp__sub_83239658) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832394b8
	ctx.lr = 0x83239684;
	sub_832394B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832396b8
	if (cr6.eq) goto loc_832396B8;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x832240b8
	ctx.lr = 0x832396A0;
	sub_832240B8(ctx, base);
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
loc_832396B8:
	// li r3,-4
	ctx.r3.s64 = -4;
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

__attribute__((alias("__imp__sub_832396D0"))) PPC_WEAK_FUNC(sub_832396D0);
PPC_FUNC_IMPL(__imp__sub_832396D0) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832394b8
	ctx.lr = 0x832396FC;
	sub_832394B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83239774
	if (cr6.eq) goto loc_83239774;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// addi r5,r11,-163
	ctx.r5.s64 = ctx.r11.s64 + -163;
	// srw r4,r10,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// srawi r11,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cntlzw r8,r7
	ctx.r8.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// and r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8323975c
	if (cr6.eq) goto loc_8323975C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832240b8
	ctx.lr = 0x8323975C;
	sub_832240B8(ctx, base);
loc_8323975C:
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
loc_83239774:
	// li r3,-4
	ctx.r3.s64 = -4;
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

__attribute__((alias("__imp__sub_8323978C"))) PPC_WEAK_FUNC(sub_8323978C);
PPC_FUNC_IMPL(__imp__sub_8323978C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83239790"))) PPC_WEAK_FUNC(sub_83239790);
PPC_FUNC_IMPL(__imp__sub_83239790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83239798;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x832394b8
	ctx.lr = 0x832397BC;
	sub_832394B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832399f4
	if (cr6.eq) goto loc_832399F4;
	// lhz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r29,12288
	ctx.r29.s64 = 12288;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// srw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83239970
	if (cr6.eq) goto loc_83239970;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83239970
	if (cr6.eq) goto loc_83239970;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r27,r11,11836
	ctx.r27.s64 = ctx.r11.s64 + 11836;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x8323983c
	if (cr6.eq) goto loc_8323983C;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83239828
	if (!cr6.eq) goto loc_83239828;
	// lhz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x83239814;
	sub_832277F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83239828
	if (!cr6.eq) goto loc_83239828;
	// bl 0x83227908
	ctx.lr = 0x83239824;
	sub_83227908(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_83239828:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,11964
	ctx.r4.s64 = ctx.r11.s64 + 11964;
	// bl 0x832085e8
	ctx.lr = 0x8323983C;
	sub_832085E8(ctx, base);
loc_8323983C:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x832399c4
	if (cr6.lt) goto loc_832399C4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83239918
	if (cr6.eq) goto loc_83239918;
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// srw r9,r29,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// addi r6,r10,-163
	ctx.r6.s64 = ctx.r10.s64 + -163;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// srawi r4,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// and r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 & ctx.r7.u64;
	// and r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 & ctx.r3.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83239918
	if (!cr6.eq) goto loc_83239918;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r10,55
	ctx.r10.s64 = 55;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832240b8
	ctx.lr = 0x832398D4;
	sub_832240B8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8320fdd0
	ctx.lr = 0x832398E4;
	sub_8320FDD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x832398F0;
	sub_83222030(ctx, base);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832399c4
	if (!cr6.eq) goto loc_832399C4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83213150
	ctx.lr = 0x83239904;
	sub_83213150(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323992c
	if (cr6.eq) goto loc_8323992C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x83239944
	goto loc_83239944;
loc_83239918:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83213150
	ctx.lr = 0x83239920;
	sub_83213150(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8323992C:
	// lhz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x83239934;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83239940
	if (!cr6.eq) goto loc_83239940;
	// bl 0x83227908
	ctx.lr = 0x83239940;
	sub_83227908(ctx, base);
loc_83239940:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83239944:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83225c80
	ctx.lr = 0x8323994C;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,12040
	ctx.r4.s64 = ctx.r11.s64 + 12040;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x83239964;
	sub_832085E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83239970:
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// xori r9,r8,142
	ctx.r9.u64 = ctx.r8.u64 ^ 142;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832399d0
	if (cr6.eq) goto loc_832399D0;
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,153
	ctx.r10.s64 = 153;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// li r8,-1
	ctx.r8.s64 = -1;
	// sth r10,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// li r7,32
	ctx.r7.s64 = 32;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8322d130
	ctx.lr = 0x832399C4;
	sub_8322D130(ctx, base);
loc_832399C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832399D0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83225c80
	ctx.lr = 0x832399D8;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,11836
	ctx.r9.s64 = ctx.r11.s64 + 11836;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,11996
	ctx.r4.s64 = ctx.r10.s64 + 11996;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83208568
	ctx.lr = 0x832399F4;
	sub_83208568(ctx, base);
loc_832399F4:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83239A00"))) PPC_WEAK_FUNC(sub_83239A00);
PPC_FUNC_IMPL(__imp__sub_83239A00) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x83239a64
	if (!cr6.gt) goto loc_83239A64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
loc_83239A2C:
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lhz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r4,r4,23
	ctx.r4.u64 = ctx.r4.u32 & 0x1FF;
	// rlwinm r4,r4,0,28,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bne cr6,0x83239a54
	if (!cr6.eq) goto loc_83239A54;
	// lhz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// beq cr6,0x83239a78
	if (cr6.eq) goto loc_83239A78;
loc_83239A54:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// blt cr6,0x83239a2c
	if (cr6.lt) goto loc_83239A2C;
loc_83239A64:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83239A78:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r9,32
	ctx.r4.s64 = ctx.r9.s64 + 32;
	// bl 0x832240b8
	ctx.lr = 0x83239A84;
	sub_832240B8(ctx, base);
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

__attribute__((alias("__imp__sub_83239A98"))) PPC_WEAK_FUNC(sub_83239A98);
PPC_FUNC_IMPL(__imp__sub_83239A98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83239AA0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83239b2c
	if (cr6.eq) goto loc_83239B2C;
	// lwz r29,408(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83239b2c
	if (cr6.eq) goto loc_83239B2C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83239b2c
	if (!cr6.gt) goto loc_83239B2C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83239AE4:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83239b18
	if (cr6.eq) goto loc_83239B18;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832394b8
	ctx.lr = 0x83239B10;
	sub_832394B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83239b38
	if (!cr6.eq) goto loc_83239B38;
loc_83239B18:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x83239ae4
	if (cr6.lt) goto loc_83239AE4;
loc_83239B2C:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83239B38:
	// lwz r30,12(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83239b64
	if (cr6.eq) goto loc_83239B64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83239B64;
	sub_83222030(ctx, base);
loc_83239B64:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// li r10,153
	ctx.r10.s64 = 153;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83239B84"))) PPC_WEAK_FUNC(sub_83239B84);
PPC_FUNC_IMPL(__imp__sub_83239B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83239B88"))) PPC_WEAK_FUNC(sub_83239B88);
PPC_FUNC_IMPL(__imp__sub_83239B88) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83239bc0
	if (cr6.eq) goto loc_83239BC0;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// b 0x83239bfc
	goto loc_83239BFC;
loc_83239BC0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83239bd8
	if (cr6.eq) goto loc_83239BD8;
	// bl 0x83209d68
	ctx.lr = 0x83239BD4;
	sub_83209D68(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_83239BD8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83239bec
	if (cr6.eq) goto loc_83239BEC;
	// bl 0x83209d68
	ctx.lr = 0x83239BE8;
	sub_83209D68(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_83239BEC:
	// sth r30,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r30.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_83239BFC:
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

__attribute__((alias("__imp__sub_83239C14"))) PPC_WEAK_FUNC(sub_83239C14);
PPC_FUNC_IMPL(__imp__sub_83239C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83239C18"))) PPC_WEAK_FUNC(sub_83239C18);
PPC_FUNC_IMPL(__imp__sub_83239C18) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83209aa8
	ctx.lr = 0x83239C2C;
	sub_83209AA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83239C4C"))) PPC_WEAK_FUNC(sub_83239C4C);
PPC_FUNC_IMPL(__imp__sub_83239C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83239C50"))) PPC_WEAK_FUNC(sub_83239C50);
PPC_FUNC_IMPL(__imp__sub_83239C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83239C58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83209aa8
	ctx.lr = 0x83239C68;
	sub_83209AA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83239c90
	if (cr6.lt) goto loc_83239C90;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83239c98
	if (!cr6.gt) goto loc_83239C98;
loc_83239C90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320e738
	ctx.lr = 0x83239C98;
	sub_8320E738(ctx, base);
loc_83239C98:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83239cc4
	if (cr6.eq) goto loc_83239CC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83239CC4;
	sub_83222030(ctx, base);
loc_83239CC4:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// li r10,158
	ctx.r10.s64 = 158;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// blt cr6,0x83239d40
	if (cr6.lt) goto loc_83239D40;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x83239d28
	if (cr6.lt) goto loc_83239D28;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222be8
	ctx.lr = 0x83239D20;
	sub_83222BE8(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_83239D28:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222be8
	ctx.lr = 0x83239D3C;
	sub_83222BE8(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
loc_83239D40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83239D48"))) PPC_WEAK_FUNC(sub_83239D48);
PPC_FUNC_IMPL(__imp__sub_83239D48) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83239d7c
	if (cr6.eq) goto loc_83239D7C;
	// bl 0x83209d68
	ctx.lr = 0x83239D74;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83239D7C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83239d90
	if (cr6.eq) goto loc_83239D90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209c20
	ctx.lr = 0x83239D8C;
	sub_83209C20(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_83239D90:
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

__attribute__((alias("__imp__sub_83239DA8"))) PPC_WEAK_FUNC(sub_83239DA8);
PPC_FUNC_IMPL(__imp__sub_83239DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83239dbc
	if (cr6.eq) goto loc_83239DBC;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83239dc4
	if (!cr6.eq) goto loc_83239DC4;
loc_83239DBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83239DC4:
	// b 0x83209c20
	sub_83209C20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83239DC8"))) PPC_WEAK_FUNC(sub_83239DC8);
PPC_FUNC_IMPL(__imp__sub_83239DC8) {
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
	// lhz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,1925
	cr6.compare<uint32_t>(ctx.r10.u32, 1925, xer);
	// beq cr6,0x83239df8
	if (cr6.eq) goto loc_83239DF8;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83239DF8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x83239e08
	if (cr6.eq) goto loc_83239E08;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_83239E08:
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83223af0
	ctx.lr = 0x83239E10;
	sub_83223AF0(ctx, base);
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

__attribute__((alias("__imp__sub_83239E24"))) PPC_WEAK_FUNC(sub_83239E24);
PPC_FUNC_IMPL(__imp__sub_83239E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83239E28"))) PPC_WEAK_FUNC(sub_83239E28);
PPC_FUNC_IMPL(__imp__sub_83239E28) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// beq cr6,0x83239e58
	if (cr6.eq) goto loc_83239E58;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x83239ea4
	goto loc_83239EA4;
loc_83239E58:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83239e74
	if (cr6.eq) goto loc_83239E74;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,12068
	ctx.r3.s64 = ctx.r11.s64 + 12068;
	// bl 0x8320d088
	ctx.lr = 0x83239E74;
	sub_8320D088(ctx, base);
loc_83239E74:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83239e88
	if (cr6.eq) goto loc_83239E88;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83239e90
	if (!cr6.eq) goto loc_83239E90;
loc_83239E88:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83239e98
	goto loc_83239E98;
loc_83239E90:
	// bl 0x83209c20
	ctx.lr = 0x83239E94;
	sub_83209C20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_83239E98:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83223bd0
	ctx.lr = 0x83239EA0;
	sub_83223BD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83239EA4:
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

__attribute__((alias("__imp__sub_83239EBC"))) PPC_WEAK_FUNC(sub_83239EBC);
PPC_FUNC_IMPL(__imp__sub_83239EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83239EC0"))) PPC_WEAK_FUNC(sub_83239EC0);
PPC_FUNC_IMPL(__imp__sub_83239EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83239ecc
	if (!cr6.eq) goto loc_83239ECC;
	// blr 
	return;
loc_83239ECC:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83239ED4"))) PPC_WEAK_FUNC(sub_83239ED4);
PPC_FUNC_IMPL(__imp__sub_83239ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83239ED8"))) PPC_WEAK_FUNC(sub_83239ED8);
PPC_FUNC_IMPL(__imp__sub_83239ED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83239EE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83239f08
	if (!cr6.eq) goto loc_83239F08;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83239F08:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r11.u16);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83255980
	ctx.lr = 0x83239F18;
	sub_83255980(ctx, base);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// rlwinm r29,r10,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// bgt cr6,0x83239f4c
	if (cr6.gt) goto loc_83239F4C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83255c58
	ctx.lr = 0x83239F3C;
	sub_83255C58(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83239F4C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209aa8
	ctx.lr = 0x83239F54;
	sub_83209AA8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83255c58
	ctx.lr = 0x83239F68;
	sub_83255C58(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83239F78"))) PPC_WEAK_FUNC(sub_83239F78);
PPC_FUNC_IMPL(__imp__sub_83239F78) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1925
	cr6.compare<uint32_t>(ctx.r11.u32, 1925, xer);
	// beq cr6,0x83239fdc
	if (cr6.eq) goto loc_83239FDC;
	// cmplwi cr6,r11,2372
	cr6.compare<uint32_t>(ctx.r11.u32, 2372, xer);
	// beq cr6,0x83239fb0
	if (cr6.eq) goto loc_83239FB0;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83239FB0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x83239fc0
	if (cr6.eq) goto loc_83239FC0;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_83239FC0:
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_83239FC4:
	// bl 0x83223af0
	ctx.lr = 0x83239FC8;
	sub_83223AF0(ctx, base);
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
loc_83239FDC:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83239fc4
	if (!cr6.eq) goto loc_83239FC4;
	// bl 0x83213150
	ctx.lr = 0x83239FF0;
	sub_83213150(ctx, base);
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

__attribute__((alias("__imp__sub_8323A004"))) PPC_WEAK_FUNC(sub_8323A004);
PPC_FUNC_IMPL(__imp__sub_8323A004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323A008"))) PPC_WEAK_FUNC(sub_8323A008);
PPC_FUNC_IMPL(__imp__sub_8323A008) {
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
	// beq cr6,0x8323a0d4
	if (cr6.eq) goto loc_8323A0D4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83255980
	ctx.lr = 0x8323A030;
	sub_83255980(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83255980
	ctx.lr = 0x8323A03C;
	sub_83255980(ctx, base);
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r30,r11,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8323A050;
	sub_83209AA8(ctx, base);
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// sth r5,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r5.u16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r10,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r10.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83237b30
	ctx.lr = 0x8323A078;
	sub_83237B30(ctx, base);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,10508
	ctx.r4.s64 = ctx.r8.s64 + 10508;
	// bl 0x83237b30
	ctx.lr = 0x8323A088;
	sub_83237B30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83237b30
	ctx.lr = 0x8323A094;
	sub_83237B30(ctx, base);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lhz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// subf r3,r9,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r9.s64;
	// srawi r11,r3,2
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 2;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r7,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x8323a0d0
	if (!cr0.gt) goto loc_8323A0D0;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_8323A0C4:
	// stbx r5,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8323a0c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8323A0C4;
loc_8323A0D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8323A0D4:
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

__attribute__((alias("__imp__sub_8323A0EC"))) PPC_WEAK_FUNC(sub_8323A0EC);
PPC_FUNC_IMPL(__imp__sub_8323A0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323A0F0"))) PPC_WEAK_FUNC(sub_8323A0F0);
PPC_FUNC_IMPL(__imp__sub_8323A0F0) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// beq cr6,0x8323a120
	if (cr6.eq) goto loc_8323A120;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8323a154
	goto loc_8323A154;
loc_8323A120:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8323a13c
	if (cr6.eq) goto loc_8323A13C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-31520
	ctx.r3.s64 = ctx.r11.s64 + -31520;
	// bl 0x8320d088
	ctx.lr = 0x8323A13C;
	sub_8320D088(ctx, base);
loc_8323A13C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8323a008
	ctx.lr = 0x8323A144;
	sub_8323A008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223bd0
	ctx.lr = 0x8323A150;
	sub_83223BD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8323A154:
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

__attribute__((alias("__imp__sub_8323A16C"))) PPC_WEAK_FUNC(sub_8323A16C);
PPC_FUNC_IMPL(__imp__sub_8323A16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323A170"))) PPC_WEAK_FUNC(sub_8323A170);
PPC_FUNC_IMPL(__imp__sub_8323A170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8323A178;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323a200
	if (cr6.eq) goto loc_8323A200;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8323A18C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323a18c
	if (cr6.eq) goto loc_8323A18C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8323a1e8
	if (!cr6.gt) goto loc_8323A1E8;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8323A1AC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8323A1BC;
	sub_83222030(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x83222030
	ctx.lr = 0x8323A1C4;
	sub_83222030(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x8323a1ac
	if (cr6.lt) goto loc_8323A1AC;
loc_8323A1E8:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323a18c
	if (cr6.eq) goto loc_8323A18C;
	// bl 0x83209d68
	ctx.lr = 0x8323A1F8;
	sub_83209D68(ctx, base);
	// stw r30,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r30.u32);
	// b 0x8323a18c
	goto loc_8323A18C;
loc_8323A200:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A208"))) PPC_WEAK_FUNC(sub_8323A208);
PPC_FUNC_IMPL(__imp__sub_8323A208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8323A210;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8323a234
	if (cr6.eq) goto loc_8323A234;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-22544
	ctx.r3.s64 = ctx.r11.s64 + -22544;
	// bl 0x8320d088
	ctx.lr = 0x8323A234;
	sub_8320D088(ctx, base);
loc_8323A234:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// blt cr6,0x8323a308
	if (cr6.lt) goto loc_8323A308;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,24688
	ctx.r29.s64 = ctx.r11.s64 + 24688;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// subf r6,r9,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r27,r28,8
	ctx.r27.s64 = ctx.r28.s64 + 8;
	// beq cr6,0x8323a284
	if (cr6.eq) goto loc_8323A284;
	// lwz r31,440(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8323a2a8
	if (!cr6.eq) goto loc_8323A2A8;
loc_8323A284:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83209aa8
	ctx.lr = 0x8323A28C;
	sub_83209AA8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323a2a8
	if (cr6.eq) goto loc_8323A2A8;
	// stw r3,440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 440, ctx.r3.u32);
loc_8323A2A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x83209df8
	ctx.lr = 0x8323A2BC;
	sub_83209DF8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// bl 0x832240b8
	ctx.lr = 0x8323A2EC;
	sub_832240B8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832240b8
	ctx.lr = 0x8323A2FC;
	sub_832240B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_8323A308:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A310"))) PPC_WEAK_FUNC(sub_8323A310);
PPC_FUNC_IMPL(__imp__sub_8323A310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8323A318;
	__savegprlr_24(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8323a33c
	if (cr6.eq) goto loc_8323A33C;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-22544
	ctx.r3.s64 = ctx.r11.s64 + -22544;
	// bl 0x8320d088
	ctx.lr = 0x8323A33C;
	sub_8320D088(ctx, base);
loc_8323A33C:
	// lwz r9,28(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// blt cr6,0x8323a494
	if (cr6.lt) goto loc_8323A494;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r8,r10,24688
	ctx.r8.s64 = ctx.r10.s64 + 24688;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// subf r5,r9,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r9,r10
	ctx.r27.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x8323a400
	if (cr6.eq) goto loc_8323A400;
	// lwz r29,440(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8323a400
	if (cr6.eq) goto loc_8323A400;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8323a400
	if (!cr6.gt) goto loc_8323A400;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8323A3A0:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83226fe8
	ctx.lr = 0x8323A3C0;
	sub_83226FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8323a3d4
	if (!cr6.eq) goto loc_8323A3D4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8323a3ec
	if (cr6.eq) goto loc_8323A3EC;
loc_8323A3D4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x8323a3a0
	if (cr6.lt) goto loc_8323A3A0;
	// b 0x8323a400
	goto loc_8323A400;
loc_8323A3EC:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// bl 0x832240b8
	ctx.lr = 0x8323A3FC;
	sub_832240B8(ctx, base);
	// li r24,1
	ctx.r24.s64 = 1;
loc_8323A400:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8323a494
	if (!cr6.eq) goto loc_8323A494;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83222be8
	ctx.lr = 0x8323A420;
	sub_83222BE8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r5,r11,12080
	ctx.r5.s64 = ctx.r11.s64 + 12080;
	// li r6,1014
	ctx.r6.s64 = 1014;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83297a40
	ctx.lr = 0x8323A43C;
	sub_83297A40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83255a88
	ctx.lr = 0x8323A444;
	sub_83255A88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83201af8
	ctx.lr = 0x8323A44C;
	sub_83201AF8(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// lwz r31,12(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sraw r6,r9,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r6.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8323a478
	if (cr6.eq) goto loc_8323A478;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8323A478;
	sub_83222030(ctx, base);
loc_8323A478:
	// li r11,12
	ctx.r11.s64 = 12;
	// sth r26,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r26.u16);
	// li r3,-1014
	ctx.r3.s64 = -1014;
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8323A494:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A4A0"))) PPC_WEAK_FUNC(sub_8323A4A0);
PPC_FUNC_IMPL(__imp__sub_8323A4A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8323A4A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323a61c
	if (cr6.eq) goto loc_8323A61C;
	// lhz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// lhz r28,72(r3)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,495
	cr6.compare<uint32_t>(ctx.r11.u32, 495, xer);
	// beq cr6,0x8323a5fc
	if (cr6.eq) goto loc_8323A5FC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x8322e2b8
	ctx.lr = 0x8323A4DC;
	sub_8322E2B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8323a50c
	if (!cr6.eq) goto loc_8323A50C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8323a5f0
	if (cr6.eq) goto loc_8323A5F0;
	// li r5,55
	ctx.r5.s64 = 55;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83237b90
	ctx.lr = 0x8323A500;
	sub_83237B90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8323A50C:
	// cmpwi cr6,r29,-4
	cr6.compare<int32_t>(ctx.r29.s32, -4, xer);
	// bne cr6,0x8323a5f0
	if (!cr6.eq) goto loc_8323A5F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83237cb8
	ctx.lr = 0x8323A52C;
	sub_83237CB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8323a57c
	if (!cr6.eq) goto loc_8323A57C;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r6,r10,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// xori r11,r8,55
	ctx.r11.u64 = ctx.r8.u64 ^ 55;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// srawi r4,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// and r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 & ctx.r6.u64;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323a57c
	if (cr6.eq) goto loc_8323A57C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8323a4a0
	ctx.lr = 0x8323A578;
	sub_8323A4A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8323A57C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8323A584;
	sub_83222030(ctx, base);
	// cmpwi cr6,r29,-4
	cr6.compare<int32_t>(ctx.r29.s32, -4, xer);
	// bne cr6,0x8323a5f0
	if (!cr6.eq) goto loc_8323A5F0;
loc_8323A58C:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// blt cr6,0x8323a5f0
	if (cr6.lt) goto loc_8323A5F0;
	// extsh r31,r28
	ctx.r31.s64 = ctx.r28.s16;
	// addi r10,r31,-349
	ctx.r10.s64 = ctx.r31.s64 + -349;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// subfic r8,r31,162
	xer.ca = ctx.r31.u32 <= 162;
	ctx.r8.s64 = 162 - ctx.r31.s64;
	// srawi r7,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// and r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 & ctx.r7.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8323a5f0
	if (cr6.eq) goto loc_8323A5F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8327aca0
	ctx.lr = 0x8323A5CC;
	sub_8327ACA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8323a5f0
	if (!cr6.eq) goto loc_8323A5F0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8323a5f0
	if (cr6.eq) goto loc_8323A5F0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83237b90
	ctx.lr = 0x8323A5F0;
	sub_83237B90(ctx, base);
loc_8323A5F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8323A5FC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,12128
	ctx.r4.s64 = ctx.r11.s64 + 12128;
	// addi r3,r10,11836
	ctx.r3.s64 = ctx.r10.s64 + 11836;
	// bl 0x832085e8
	ctx.lr = 0x8323A610;
	sub_832085E8(ctx, base);
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8323A61C:
	// li r29,-4
	ctx.r29.s64 = -4;
	// b 0x8323a58c
	goto loc_8323A58C;
}

__attribute__((alias("__imp__sub_8323A624"))) PPC_WEAK_FUNC(sub_8323A624);
PPC_FUNC_IMPL(__imp__sub_8323A624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323A628"))) PPC_WEAK_FUNC(sub_8323A628);
PPC_FUNC_IMPL(__imp__sub_8323A628) {
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
	// lhz r4,70(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 70);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x83211ad0
	ctx.lr = 0x8323A64C;
	sub_83211AD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323a688
	if (cr6.eq) goto loc_8323A688;
	// lhz r4,6(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8323a688
	if (cr6.eq) goto loc_8323A688;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83211620
	ctx.lr = 0x8323A67C;
	sub_83211620(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323a6a0
	if (cr6.eq) goto loc_8323A6A0;
	// sth r3,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r3.u16);
loc_8323A688:
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
loc_8323A6A0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r4,6(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83239388
	ctx.lr = 0x8323A6B4;
	sub_83239388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323a6c4
	if (cr6.eq) goto loc_8323A6C4;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x8323a688
	goto loc_8323A688;
loc_8323A6C4:
	// lhz r4,6(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83211228
	ctx.lr = 0x8323A6D0;
	sub_83211228(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r5,70(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 70);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,11836
	ctx.r9.s64 = ctx.r11.s64 + 11836;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,12164
	ctx.r4.s64 = ctx.r10.s64 + 12164;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83208568
	ctx.lr = 0x8323A6F0;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8323A6F0"))) PPC_WEAK_FUNC(sub_8323A6F0);
PPC_FUNC_IMPL(__imp__sub_8323A6F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8323A6F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323a7d0
	if (cr6.eq) goto loc_8323A7D0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8323a7d0
	if (cr6.eq) goto loc_8323A7D0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83237c60
	ctx.lr = 0x8323A71C;
	sub_83237C60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323a7d0
	if (cr6.eq) goto loc_8323A7D0;
	// lhz r4,70(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 70);
	// lwz r3,36(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// bl 0x83211ad0
	ctx.lr = 0x8323A734;
	sub_83211AD0(ctx, base);
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323a7d0
	if (cr6.eq) goto loc_8323A7D0;
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r11,12
	ctx.r11.s64 = 12;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8323a75c
	if (cr6.eq) goto loc_8323A75C;
	// li r11,14
	ctx.r11.s64 = 14;
loc_8323A75C:
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8323a7d0
	if (!cr6.gt) goto loc_8323A7D0;
loc_8323A76C:
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r26,40(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// lwz r3,36(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// bl 0x83211228
	ctx.lr = 0x8323A77C;
	sub_83211228(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83237ad0
	ctx.lr = 0x8323A784;
	sub_83237AD0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323a7dc
	if (cr6.eq) goto loc_8323A7DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,36(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// bl 0x83239388
	ctx.lr = 0x8323A7A4;
	sub_83239388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323a7bc
	if (cr6.eq) goto loc_8323A7BC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8323a6f0
	ctx.lr = 0x8323A7B4;
	sub_8323A6F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8323a7dc
	if (cr6.eq) goto loc_8323A7DC;
loc_8323A7BC:
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x8323a76c
	if (cr6.lt) goto loc_8323A76C;
loc_8323A7D0:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8323A7DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A7E8"))) PPC_WEAK_FUNC(sub_8323A7E8);
PPC_FUNC_IMPL(__imp__sub_8323A7E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8323A7F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lhz r4,2(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// bl 0x83211620
	ctx.lr = 0x8323A81C;
	sub_83211620(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323a868
	if (cr6.eq) goto loc_8323A868;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8323a850
	if (cr6.eq) goto loc_8323A850;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x8323A850;
	sub_83222030(ctx, base);
loc_8323A850:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// sth r31,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r31.u16);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8323A868:
	// bl 0x83291470
	ctx.lr = 0x8323A86C;
	sub_83291470(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// ori r8,r10,8400
	ctx.r8.u64 = ctx.r10.u64 | 8400;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sraw r7,r8,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8323a898
	if (cr6.eq) goto loc_8323A898;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x8323A898;
	sub_83222030(ctx, base);
loc_8323A898:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// li r10,55
	ctx.r10.s64 = 55;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r8.u16);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// lwz r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// lhz r6,2(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// sth r6,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r6.u16);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// sth r29,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r29.u16);
	// stb r29,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r29.u8);
	// lhz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// bl 0x83210f58
	ctx.lr = 0x8323A8F4;
	sub_83210F58(ctx, base);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// sth r11,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r11.u16);
	// lhz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// bl 0x83210fc0
	ctx.lr = 0x8323A910;
	sub_83210FC0(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// lhz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// sth r10,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r10.u16);
	// lhz r9,6(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 6);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// sth r9,70(r31)
	PPC_STORE_U16(ctx.r31.u32 + 70, ctx.r9.u16);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r6,14(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 14);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// blt cr6,0x8323a94c
	if (cr6.lt) goto loc_8323A94C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,12204
	ctx.r4.s64 = ctx.r11.s64 + 12204;
	// addi r3,r10,11836
	ctx.r3.s64 = ctx.r10.s64 + 11836;
	// bl 0x83208568
	ctx.lr = 0x8323A94C;
	sub_83208568(ctx, base);
loc_8323A94C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8323a628
	ctx.lr = 0x8323A954;
	sub_8323A628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83238518
	ctx.lr = 0x8323A95C;
	sub_83238518(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323A964"))) PPC_WEAK_FUNC(sub_8323A964);
PPC_FUNC_IMPL(__imp__sub_8323A964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323A968"))) PPC_WEAK_FUNC(sub_8323A968);
PPC_FUNC_IMPL(__imp__sub_8323A968) {
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
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// xori r11,r8,153
	ctx.r11.u64 = ctx.r8.u64 ^ 153;
	// srw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// srawi r4,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// and r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 & ctx.r7.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323aa44
	if (cr6.eq) goto loc_8323AA44;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x8323aa0c
	if (!cr6.gt) goto loc_8323AA0C;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8323A9D0:
	// lwz r4,28(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8323a9f8
	if (cr6.eq) goto loc_8323A9F8;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r5,r9,28
	ctx.r5.u64 = ctx.r9.u32 & 0xF;
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// bne cr6,0x8323a9f8
	if (!cr6.eq) goto loc_8323A9F8;
	// lhz r9,6(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// beq cr6,0x8323aa24
	if (cr6.eq) goto loc_8323AA24;
loc_8323A9F8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blt cr6,0x8323a9d0
	if (cr6.lt) goto loc_8323A9D0;
loc_8323AA0C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,12288
	ctx.r4.s64 = ctx.r11.s64 + 12288;
	// addi r3,r10,11836
	ctx.r3.s64 = ctx.r10.s64 + 11836;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x8323aa60
	goto loc_8323AA60;
loc_8323AA24:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8323a7e8
	ctx.lr = 0x8323AA2C;
	sub_8323A7E8(ctx, base);
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
loc_8323AA44:
	// bl 0x83225c80
	ctx.lr = 0x8323AA48;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,11836
	ctx.r9.s64 = ctx.r11.s64 + 11836;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,12252
	ctx.r4.s64 = ctx.r10.s64 + 12252;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_8323AA60:
	// bl 0x832085e8
	ctx.lr = 0x8323AA64;
	sub_832085E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8323AA6C;
	sub_83222030(ctx, base);
	// li r3,-4
	ctx.r3.s64 = -4;
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

__attribute__((alias("__imp__sub_8323AA84"))) PPC_WEAK_FUNC(sub_8323AA84);
PPC_FUNC_IMPL(__imp__sub_8323AA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323AA88"))) PPC_WEAK_FUNC(sub_8323AA88);
PPC_FUNC_IMPL(__imp__sub_8323AA88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8323AA90;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8323aaa8
	if (cr6.eq) goto loc_8323AAA8;
	// bl 0x8320e738
	ctx.lr = 0x8323AAA8;
	sub_8320E738(ctx, base);
loc_8323AAA8:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83209aa8
	ctx.lr = 0x8323AAB0;
	sub_83209AA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sraw r6,r9,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r6.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8323aaf0
	if (cr6.eq) goto loc_8323AAF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x8323AAF0;
	sub_83222030(ctx, base);
loc_8323AAF0:
	// li r10,159
	ctx.r10.s64 = 159;
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// li r11,13
	ctx.r11.s64 = 13;
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x8323ac94
	if (cr6.lt) goto loc_8323AC94;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,158
	ctx.r4.s64 = 158;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221378
	ctx.lr = 0x8323AB38;
	sub_83221378(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// li r24,12288
	ctx.r24.s64 = 12288;
	// li r25,640
	ctx.r25.s64 = 640;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r11,11836
	ctx.r30.s64 = ctx.r11.s64 + 11836;
	// addi r29,r10,12340
	ctx.r29.s64 = ctx.r10.s64 + 12340;
	// addi r28,r9,12336
	ctx.r28.s64 = ctx.r9.s64 + 12336;
	// addi r27,r8,-31520
	ctx.r27.s64 = ctx.r8.s64 + -31520;
	// beq cr6,0x8323ab78
	if (cr6.eq) goto loc_8323AB78;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83209c20
	ctx.lr = 0x8323AB70;
	sub_83209C20(ctx, base);
	// stw r3,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r3.u32);
	// b 0x8323abf0
	goto loc_8323ABF0;
loc_8323AB78:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222be8
	ctx.lr = 0x8323AB8C;
	sub_83222BE8(ctx, base);
	// stw r3,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r3.u32);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// xori r11,r8,40
	ctx.r11.u64 = ctx.r8.u64 ^ 40;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srw r4,r24,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r24.u32 >> (ctx.r10.u8 & 0x3F));
	// srawi r3,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 31;
	// srw r11,r25,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r5.u8 & 0x3F));
	// and r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 & ctx.r4.u64;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8323abf0
	if (!cr6.eq) goto loc_8323ABF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225c80
	ctx.lr = 0x8323ABD0;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,12332
	ctx.r7.s64 = ctx.r11.s64 + 12332;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x8323ABF0;
	sub_832085E8(ctx, base);
loc_8323ABF0:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// li r4,159
	ctx.r4.s64 = 159;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221378
	ctx.lr = 0x8323AC00;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323ac1c
	if (cr6.eq) goto loc_8323AC1C;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83209c20
	ctx.lr = 0x8323AC10;
	sub_83209C20(ctx, base);
	// stw r3,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8323AC1C:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222be8
	ctx.lr = 0x8323AC30;
	sub_83222BE8(ctx, base);
	// stw r3,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r3.u32);
	// lhz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// xori r11,r8,40
	ctx.r11.u64 = ctx.r8.u64 ^ 40;
	// srw r5,r24,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r24.u32 >> (ctx.r10.u8 & 0x3F));
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srw r11,r25,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r4.u8 & 0x3F));
	// srawi r3,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 31;
	// and r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 & ctx.r5.u64;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8323ac94
	if (!cr6.eq) goto loc_8323AC94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225c80
	ctx.lr = 0x8323AC74;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,12320
	ctx.r7.s64 = ctx.r11.s64 + 12320;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x8323AC94;
	sub_832085E8(ctx, base);
loc_8323AC94:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323AC9C"))) PPC_WEAK_FUNC(sub_8323AC9C);
PPC_FUNC_IMPL(__imp__sub_8323AC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323ACA0"))) PPC_WEAK_FUNC(sub_8323ACA0);
PPC_FUNC_IMPL(__imp__sub_8323ACA0) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,280
	ctx.r10.s64 = 280;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// dcbt r11,r10
	// addi r3,r11,280
	ctx.r3.s64 = ctx.r11.s64 + 280;
	// bl 0x8325b4d8
	ctx.lr = 0x8323ACC8;
	sub_8325B4D8(ctx, base);
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x8323ACD8;
	sub_83294018(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8323ACF8"))) PPC_WEAK_FUNC(sub_8323ACF8);
PPC_FUNC_IMPL(__imp__sub_8323ACF8) {
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
	// lhz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 140);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323ad34
	if (cr6.eq) goto loc_8323AD34;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,140(r7)
	PPC_STORE_U16(ctx.r7.u32 + 140, ctx.r11.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8323AD34:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323ad58
	if (cr6.eq) goto loc_8323AD58;
	// lhz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 96);
	// lwz r8,424(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// b 0x8323ad60
	goto loc_8323AD60;
loc_8323AD58:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8323AD60:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8323ad9c
	if (!cr6.gt) goto loc_8323AD9C;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8323AD70:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// beq cr6,0x8323ad90
	if (cr6.eq) goto loc_8323AD90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8323ad70
	if (cr6.lt) goto loc_8323AD70;
	// b 0x8323ad9c
	goto loc_8323AD9C;
loc_8323AD90:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
loc_8323AD9C:
	// lhz r11,98(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 98);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323adb4
	if (cr6.eq) goto loc_8323ADB4;
	// lwz r3,120(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 120);
	// bl 0x8320ce70
	ctx.lr = 0x8323ADB4;
	sub_8320CE70(ctx, base);
loc_8323ADB4:
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

__attribute__((alias("__imp__sub_8323ADC8"))) PPC_WEAK_FUNC(sub_8323ADC8);
PPC_FUNC_IMPL(__imp__sub_8323ADC8) {
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
	// bl 0x8323acf8
	ctx.lr = 0x8323ADE0;
	sub_8323ACF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323ae08
	if (cr6.eq) goto loc_8323AE08;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,280
	ctx.r10.s64 = 280;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// dcbt r11,r10
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,280
	ctx.r3.s64 = ctx.r11.s64 + 280;
	// bl 0x8325b658
	ctx.lr = 0x8323AE08;
	sub_8325B658(ctx, base);
loc_8323AE08:
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

__attribute__((alias("__imp__sub_8323AE1C"))) PPC_WEAK_FUNC(sub_8323AE1C);
PPC_FUNC_IMPL(__imp__sub_8323AE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323AE20"))) PPC_WEAK_FUNC(sub_8323AE20);
PPC_FUNC_IMPL(__imp__sub_8323AE20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323af90
	if (cr6.eq) goto loc_8323AF90;
	// lhz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 96);
	// lwz r11,424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8323af90
	if (!cr6.gt) goto loc_8323AF90;
	// lhz r10,34(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 34);
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lhz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 28);
	// lfs f11,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lhz r7,30(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 30);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lhz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// extsw r9,r7
	ctx.r9.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r5,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r5.u64);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f9,-8(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// fcfid f3,f10
	ctx.f3.f64 = double(ctx.f10.s64);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// std r6,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r6.u64);
	// lfd f7,-8(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// subf r4,r5,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r5.s64;
	// fcfid f4,f9
	ctx.f4.f64 = double(ctx.f9.s64);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// frsp f9,f3
	ctx.f9.f64 = double(float(ctx.f3.f64));
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// frsp f10,f4
	ctx.f10.f64 = double(float(ctx.f4.f64));
	// fmuls f12,f2,f11
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// beq cr6,0x8323af90
	if (cr6.eq) goto loc_8323AF90;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8323af90
	if (!cr6.gt) goto loc_8323AF90;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8323AEEC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323af80
	if (cr6.eq) goto loc_8323AF80;
	// lbz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// bne cr6,0x8323af80
	if (!cr6.eq) goto loc_8323AF80;
	// lwz r6,120(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// bne cr6,0x8323af80
	if (!cr6.eq) goto loc_8323AF80;
	// lfs f10,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bne cr6,0x8323af80
	if (!cr6.eq) goto loc_8323AF80;
	// lfs f10,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f13
	cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bne cr6,0x8323af80
	if (!cr6.eq) goto loc_8323AF80;
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f12
	cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bne cr6,0x8323af80
	if (!cr6.eq) goto loc_8323AF80;
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bne cr6,0x8323af80
	if (!cr6.eq) goto loc_8323AF80;
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f10,f9
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bne cr6,0x8323af80
	if (!cr6.eq) goto loc_8323AF80;
	// lfs f10,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f10,f9
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bne cr6,0x8323af80
	if (!cr6.eq) goto loc_8323AF80;
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f10,f9
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bne cr6,0x8323af80
	if (!cr6.eq) goto loc_8323AF80;
	// lfs f10,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f10,f9
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// beq cr6,0x8323af98
	if (cr6.eq) goto loc_8323AF98;
loc_8323AF80:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x8323aeec
	if (cr6.lt) goto loc_8323AEEC;
loc_8323AF90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8323AF98:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323AFA0"))) PPC_WEAK_FUNC(sub_8323AFA0);
PPC_FUNC_IMPL(__imp__sub_8323AFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8323AFA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,24688
	ctx.r29.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323afd4
	if (cr6.eq) goto loc_8323AFD4;
	// lhz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 96);
	// lwz r3,424(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// b 0x8323afdc
	goto loc_8323AFDC;
loc_8323AFD4:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8323AFDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x8323b008
	if (!cr6.gt) goto loc_8323B008;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8323AFEC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8323b074
	if (cr6.eq) goto loc_8323B074;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// blt cr6,0x8323afec
	if (cr6.lt) goto loc_8323AFEC;
loc_8323B008:
	// clrlwi r11,r31,28
	ctx.r11.u64 = ctx.r31.u32 & 0xF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8323b04c
	if (!cr6.eq) goto loc_8323B04C;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209df8
	ctx.lr = 0x8323B020;
	sub_83209DF8(ctx, base);
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// bge cr6,0x8323b04c
	if (!cr6.lt) goto loc_8323B04C;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// beq 0x8323b04c
	if (cr0.eq) goto loc_8323B04C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8323B044:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8323b044
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8323B044;
loc_8323B04C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r28.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323b06c
	if (cr6.eq) goto loc_8323B06C;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// stw r3,424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 424, ctx.r3.u32);
	// sth r10,96(r11)
	PPC_STORE_U16(ctx.r11.u32 + 96, ctx.r10.u16);
loc_8323B06C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8323B074:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323B084"))) PPC_WEAK_FUNC(sub_8323B084);
PPC_FUNC_IMPL(__imp__sub_8323B084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323B088"))) PPC_WEAK_FUNC(sub_8323B088);
PPC_FUNC_IMPL(__imp__sub_8323B088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8323B090;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x8323b0d8
	if (!cr6.gt) goto loc_8323B0D8;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r10,12400
	ctx.r29.s64 = ctx.r10.s64 + 12400;
	// addi r28,r11,12368
	ctx.r28.s64 = ctx.r11.s64 + 12368;
loc_8323B0B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8323b0cc
	if (cr6.eq) goto loc_8323B0CC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83208330
	ctx.lr = 0x8323B0CC;
	sub_83208330(ctx, base);
loc_8323B0CC:
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8323b0b4
	if (!cr0.eq) goto loc_8323B0B4;
loc_8323B0D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323B0E0"))) PPC_WEAK_FUNC(sub_8323B0E0);
PPC_FUNC_IMPL(__imp__sub_8323B0E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8323B0E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,16(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// sth r29,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r29.u16);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// and r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 & ctx.r4.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8323b1cc
	if (cr6.eq) goto loc_8323B1CC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8322ab20
	ctx.lr = 0x8323B140;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323b1cc
	if (cr6.eq) goto loc_8323B1CC;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83221378
	ctx.lr = 0x8323B154;
	sub_83221378(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323b1cc
	if (cr6.eq) goto loc_8323B1CC;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r28,36(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8320db50
	ctx.lr = 0x8323B178;
	sub_8320DB50(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// subf r6,r9,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x8323b1cc
	if (!cr6.gt) goto loc_8323B1CC;
loc_8323B1A4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x8323b1b0
	if (cr6.eq) goto loc_8323B1B0;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
loc_8323B1B0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832710f0
	ctx.lr = 0x8323B1C0;
	sub_832710F0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x8323b1a4
	if (cr6.lt) goto loc_8323B1A4;
loc_8323B1CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323B1D4"))) PPC_WEAK_FUNC(sub_8323B1D4);
PPC_FUNC_IMPL(__imp__sub_8323B1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323B1D8"))) PPC_WEAK_FUNC(sub_8323B1D8);
PPC_FUNC_IMPL(__imp__sub_8323B1D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8323B1E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// and r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 & ctx.r11.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323b3a0
	if (cr6.eq) goto loc_8323B3A0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8322ab20
	ctx.lr = 0x8323B218;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323b3a0
	if (cr6.eq) goto loc_8323B3A0;
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// addi r7,r3,16
	ctx.r7.s64 = ctx.r3.s64 + 16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r6,r10,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r11,r8,142
	ctx.r11.u64 = ctx.r8.u64 ^ 142;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// srawi r4,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// and r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 & ctx.r6.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323b38c
	if (cr6.eq) goto loc_8323B38C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lhz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lbz r25,10(r30)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// li r24,3
	ctx.r24.s64 = 3;
	// li r23,1
	ctx.r23.s64 = 1;
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// sth r7,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r7.u16);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stb r25,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r25.u8);
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// stb r23,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r23.u8);
	// bl 0x8323b0e0
	ctx.lr = 0x8323B2C4;
	sub_8323B0E0(ctx, base);
	// lhz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8323b2e0
	if (cr6.eq) goto loc_8323B2E0;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
loc_8323B2E0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// and r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 & ctx.r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323b308
	if (cr6.eq) goto loc_8323B308;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8322ab20
	ctx.lr = 0x8323B2FC;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323b308
	if (cr6.eq) goto loc_8323B308;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
loc_8323B308:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lhz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// lbz r8,10(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 10);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// sth r9,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r9.u16);
	// stb r8,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r8.u8);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8323b35c
	if (cr6.eq) goto loc_8323B35C;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x8322d248
	ctx.lr = 0x8323B344;
	sub_8322D248(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8323B34C;
	sub_83222030(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8320d9e8
	ctx.lr = 0x8323B354;
	sub_8320D9E8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8323B35C:
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8322d130
	ctx.lr = 0x8323B374;
	sub_8322D130(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8323B37C;
	sub_83222030(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8320d9e8
	ctx.lr = 0x8323B384;
	sub_8320D9E8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8323B38C:
	// li r6,43
	ctx.r6.s64 = 43;
	// lhz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// li r4,344
	ctx.r4.s64 = 344;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320d628
	ctx.lr = 0x8323B3A0;
	sub_8320D628(ctx, base);
loc_8323B3A0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323B3A8"))) PPC_WEAK_FUNC(sub_8323B3A8);
PPC_FUNC_IMPL(__imp__sub_8323B3A8) {
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
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r31,r11,5696
	ctx.r31.s64 = ctx.r11.s64 + 5696;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// bl 0x831d1a10
	ctx.lr = 0x8323B3CC;
	sub_831D1A10(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
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

__attribute__((alias("__imp__sub_8323B3EC"))) PPC_WEAK_FUNC(sub_8323B3EC);
PPC_FUNC_IMPL(__imp__sub_8323B3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323B3F0"))) PPC_WEAK_FUNC(sub_8323B3F0);
PPC_FUNC_IMPL(__imp__sub_8323B3F0) {
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
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f0,84(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// bl 0x831d1930
	ctx.lr = 0x8323B410;
	sub_831D1930(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B424"))) PPC_WEAK_FUNC(sub_8323B424);
PPC_FUNC_IMPL(__imp__sub_8323B424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323B428"))) PPC_WEAK_FUNC(sub_8323B428);
PPC_FUNC_IMPL(__imp__sub_8323B428) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r31,r11,5696
	ctx.r31.s64 = ctx.r11.s64 + 5696;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f31,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x8323b458
	if (cr6.lt) goto loc_8323B458;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8323B458:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,11112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11112);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8323b488
	if (cr6.eq) goto loc_8323B488;
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x831d1a10
	ctx.lr = 0x8323B474;
	sub_831D1A10(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// b 0x8323b4a4
	goto loc_8323B4A4;
loc_8323B488:
	// fsubs f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x831d1930
	ctx.lr = 0x8323B494;
	sub_831D1930(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f0,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fmuls f1,f11,f31
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
loc_8323B4A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_8323B4BC"))) PPC_WEAK_FUNC(sub_8323B4BC);
PPC_FUNC_IMPL(__imp__sub_8323B4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323B4C0"))) PPC_WEAK_FUNC(sub_8323B4C0);
PPC_FUNC_IMPL(__imp__sub_8323B4C0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r31,r11,5696
	ctx.r31.s64 = ctx.r11.s64 + 5696;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f31,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x8323b4f0
	if (cr6.lt) goto loc_8323B4F0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8323B4F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,11112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11112);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8323b518
	if (cr6.eq) goto loc_8323B518;
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x831d1930
	ctx.lr = 0x8323B50C;
	sub_831D1930(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// b 0x8323b530
	goto loc_8323B530;
loc_8323B518:
	// fsubs f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x831d1a10
	ctx.lr = 0x8323B524;
	sub_831D1A10(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f0,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f1,f12,f31,f0
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * ctx.f31.f64 - ctx.f0.f64)));
loc_8323B530:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_8323B548"))) PPC_WEAK_FUNC(sub_8323B548);
PPC_FUNC_IMPL(__imp__sub_8323B548) {
	PPC_FUNC_PROLOGUE();
	// fmuls f1,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B550"))) PPC_WEAK_FUNC(sub_8323B550);
PPC_FUNC_IMPL(__imp__sub_8323B550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f0,140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B568"))) PPC_WEAK_FUNC(sub_8323B568);
PPC_FUNC_IMPL(__imp__sub_8323B568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// lfs f0,148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8323b584
	if (cr6.lt) goto loc_8323B584;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8323B584:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f0,140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323b5a0
	if (cr6.eq) goto loc_8323B5A0;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
loc_8323B5A0:
	// lfs f13,156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f13,f0,f1,f13
	ctx.f13.f64 = double(float(-(ctx.f0.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// lfs f0,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f1,f13,f1,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 - ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B5B4"))) PPC_WEAK_FUNC(sub_8323B5B4);
PPC_FUNC_IMPL(__imp__sub_8323B5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323B5B8"))) PPC_WEAK_FUNC(sub_8323B5B8);
PPC_FUNC_IMPL(__imp__sub_8323B5B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f13,148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// fmuls f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// blt cr6,0x8323b5e8
	if (cr6.lt) goto loc_8323B5E8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8323B5E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323b5fc
	if (cr6.eq) goto loc_8323B5FC;
	// fneg f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_8323B5FC:
	// fadds f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B604"))) PPC_WEAK_FUNC(sub_8323B604);
PPC_FUNC_IMPL(__imp__sub_8323B604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323B608"))) PPC_WEAK_FUNC(sub_8323B608);
PPC_FUNC_IMPL(__imp__sub_8323B608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,5696
	ctx.r9.s64 = ctx.r11.s64 + 5696;
	// lfs f0,12452(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12452);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmsubs f12,f13,f1,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 - ctx.f0.f64));
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f1,f11,f1
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B630"))) PPC_WEAK_FUNC(sub_8323B630);
PPC_FUNC_IMPL(__imp__sub_8323B630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,5696
	ctx.r9.s64 = ctx.r11.s64 + 5696;
	// lfs f13,12452(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12452);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,132(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmadds f10,f11,f12,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmadds f1,f9,f12,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B65C"))) PPC_WEAK_FUNC(sub_8323B65C);
PPC_FUNC_IMPL(__imp__sub_8323B65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323B660"))) PPC_WEAK_FUNC(sub_8323B660);
PPC_FUNC_IMPL(__imp__sub_8323B660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// lfs f13,140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f12,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x8323b684
	if (cr6.lt) goto loc_8323B684;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8323B684:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f11,148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// beq cr6,0x8323b6b4
	if (cr6.eq) goto loc_8323B6B4;
	// lfs f13,12456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12456);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fmsubs f10,f12,f0,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// blr 
	return;
loc_8323B6B4:
	// fsubs f10,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,12456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12456);
	ctx.f0.f64 = double(temp.f32);
	// fadds f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmadds f8,f9,f10,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmadds f6,f7,f10,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmuls f1,f6,f11
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B6D4"))) PPC_WEAK_FUNC(sub_8323B6D4);
PPC_FUNC_IMPL(__imp__sub_8323B6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323B6D8"))) PPC_WEAK_FUNC(sub_8323B6D8);
PPC_FUNC_IMPL(__imp__sub_8323B6D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// lfs f0,140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f0,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8323b6fc
	if (cr6.lt) goto loc_8323B6FC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8323B6FC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// fsubs f11,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lfs f13,12452(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12452);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// beq cr6,0x8323b730
	if (cr6.eq) goto loc_8323B730;
	// fmadds f9,f10,f11,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmadds f7,f8,f11,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmuls f1,f7,f12
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// blr 
	return;
loc_8323B730:
	// fmsubs f9,f10,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f13.f64));
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmadds f7,f8,f11,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmuls f1,f7,f12
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B744"))) PPC_WEAK_FUNC(sub_8323B744);
PPC_FUNC_IMPL(__imp__sub_8323B744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323B748"))) PPC_WEAK_FUNC(sub_8323B748);
PPC_FUNC_IMPL(__imp__sub_8323B748) {
	PPC_FUNC_PROLOGUE();
	// fmsubs f0,f1,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 - ctx.f1.f64));
	// fmadds f1,f0,f2,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B754"))) PPC_WEAK_FUNC(sub_8323B754);
PPC_FUNC_IMPL(__imp__sub_8323B754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323B758"))) PPC_WEAK_FUNC(sub_8323B758);
PPC_FUNC_IMPL(__imp__sub_8323B758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f0,140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmsubs f13,f0,f1,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 - ctx.f1.f64));
	// fmadds f1,f13,f2,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323B774"))) PPC_WEAK_FUNC(sub_8323B774);
PPC_FUNC_IMPL(__imp__sub_8323B774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8323B778"))) PPC_WEAK_FUNC(sub_8323B778);
PPC_FUNC_IMPL(__imp__sub_8323B778) {
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
	ctx.lr = 0x8323B780;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x832133d0
	ctx.lr = 0x8323B7AC;
	sub_832133D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8323b7e0
	if (!cr6.eq) goto loc_8323B7E0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r5,r11,12460
	ctx.r5.s64 = ctx.r11.s64 + 12460;
	// li r6,122
	ctx.r6.s64 = 122;
	// li r3,344
	ctx.r3.s64 = 344;
	// bl 0x8320d428
	ctx.lr = 0x8323B7D0;
	sub_8320D428(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8323B7E0:
	// addic. r11,r3,176
	xer.ca = ctx.r3.u32 > 4294967119;
	ctx.r11.s64 = ctx.r3.s64 + 176;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x8323b83c
	if (!cr0.eq) goto loc_8323B83C;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r11,r11,-1914
	ctx.r11.s64 = ctx.r11.s64 + -1914;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x8323ba08
	if (cr6.gt) goto loc_8323BA08;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8323ba08
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323BA08;
	// bdzf 4*cr6+eq,0x8323b820
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323B820;
	// bdzf 4*cr6+eq,0x8323ba08
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323BA08;
	// bdzf 4*cr6+eq,0x8323b820
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323B820;
	// bdzf 4*cr6+eq,0x8323ba08
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323BA08;
	// bdzf 4*cr6+eq,0x8323b820
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323B820;
	// bdzf 4*cr6+eq,0x8323ba08
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323BA08;
	// bne cr6,0x8323ba08
	if (!cr6.eq) goto loc_8323BA08;
loc_8323B820:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f31,132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8323B83C:
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r10,r10,-1914
	ctx.r10.s64 = ctx.r10.s64 + -1914;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bgt cr6,0x8323ba08
	if (cr6.gt) goto loc_8323BA08;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8323b8c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323B8C4;
	// bdzf 4*cr6+eq,0x8323b888
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323B888;
	// bdzf 4*cr6+eq,0x8323b8e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323B8E8;
	// bdzf 4*cr6+eq,0x8323b89c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323B89C;
	// bdzf 4*cr6+eq,0x8323b90c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323B90C;
	// bdzf 4*cr6+eq,0x8323b8b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323B8B0;
	// bdzf 4*cr6+eq,0x8323b930
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323B930;
	// bne cr6,0x8323b954
	if (!cr6.eq) goto loc_8323B954;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8323B888:
	// lfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8323B89C:
	// lfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8323B8B0:
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8323B8C4:
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r10,5696
	ctx.r9.s64 = ctx.r10.s64 + 5696;
	// lfs f0,200(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8323B8E8:
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lfs f13,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r10,5696
	ctx.r9.s64 = ctx.r10.s64 + 5696;
	// lfs f0,200(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8323B90C:
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r10,5696
	ctx.r9.s64 = ctx.r10.s64 + 5696;
	// lfs f0,200(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8323B930:
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lfs f13,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r10,5696
	ctx.r9.s64 = ctx.r10.s64 + 5696;
	// lfs f0,200(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8323B954:
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r9,r10,5696
	ctx.r9.s64 = ctx.r10.s64 + 5696;
	// lfs f0,200(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x8323b9a8
	if (!cr6.eq) goto loc_8323B9A8;
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f7,f10
	ctx.f7.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// fctiwz f6,f9
	ctx.f6.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// fctiwz f5,f8
	ctx.f5.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f5.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8323b9e4
	goto loc_8323B9E4;
loc_8323B9A8:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f7,f10
	ctx.f7.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// fctiwz f6,f9
	ctx.f6.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// fctiwz f5,f8
	ctx.f5.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f5.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8323B9E4:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
loc_8323BA08:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323BA18"))) PPC_WEAK_FUNC(sub_8323BA18);
PPC_FUNC_IMPL(__imp__sub_8323BA18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r7,r10,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// rlwinm r8,r9,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// clrlwi r31,r9,24
	ctx.r31.u64 = ctx.r9.u32 & 0xFF;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rlwinm r9,r9,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF;
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// lfd f7,-16(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f6,-16(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rlwinm r10,r10,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// fcfid f2,f9
	ctx.f2.f64 = double(ctx.f9.s64);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f5,-16(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// fcfid f3,f10
	ctx.f3.f64 = double(ctx.f10.s64);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// fcfid f13,f8
	ctx.f13.f64 = double(ctx.f8.s64);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// fcfid f1,f6
	ctx.f1.f64 = double(ctx.f6.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f12,f7
	ctx.f12.f64 = double(ctx.f7.s64);
	// li r7,1916
	ctx.r7.s64 = 1916;
	// frsp f11,f4
	ctx.f11.f64 = double(float(ctx.f4.f64));
	// frsp f9,f2
	ctx.f9.f64 = double(float(ctx.f2.f64));
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f3
	ctx.f10.f64 = double(float(ctx.f3.f64));
	// frsp f7,f13
	ctx.f7.f64 = double(float(ctx.f13.f64));
	// stfs f7,16(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// frsp f8,f1
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,12(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// frsp f6,f12
	ctx.f6.f64 = double(float(ctx.f12.f64));
	// stfs f6,20(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f13,204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f4,4(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f9,f13
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f2,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r8,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// rlwinm r10,r8,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// li r8,1914
	ctx.r8.s64 = 1914;
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// li r6,1918
	ctx.r6.s64 = 1918;
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// li r3,1915
	ctx.r3.s64 = 1915;
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// li r11,1917
	ctx.r11.s64 = 1917;
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// li r10,1919
	ctx.r10.s64 = 1919;
	// stfs f8,12(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f7,16(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// stfs f6,20(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// sth r8,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r8.u16);
	// sth r7,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r7.u16);
	// sth r6,4(r5)
	PPC_STORE_U16(ctx.r5.u32 + 4, ctx.r6.u16);
	// sth r3,6(r5)
	PPC_STORE_U16(ctx.r5.u32 + 6, ctx.r3.u16);
	// sth r11,8(r5)
	PPC_STORE_U16(ctx.r5.u32 + 8, ctx.r11.u16);
	// sth r10,10(r5)
	PPC_STORE_U16(ctx.r5.u32 + 10, ctx.r10.u16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323BBA0"))) PPC_WEAK_FUNC(sub_8323BBA0);
PPC_FUNC_IMPL(__imp__sub_8323BBA0) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832133d0
	ctx.lr = 0x8323BBCC;
	sub_832133D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8323bbec
	if (!cr6.eq) goto loc_8323BBEC;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,122
	ctx.r6.s64 = 122;
	// li r5,423
	ctx.r5.s64 = 423;
	// li r4,344
	ctx.r4.s64 = 344;
	// bl 0x8320d628
	ctx.lr = 0x8323BBE8;
	sub_8320D628(ctx, base);
	// b 0x8323bca8
	goto loc_8323BCA8;
loc_8323BBEC:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// oris r9,r10,2048
	ctx.r9.u64 = ctx.r10.u64 | 134217728;
	// addi r11,r11,-1914
	ctx.r11.s64 = ctx.r11.s64 + -1914;
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x8323bca8
	if (cr6.gt) goto loc_8323BCA8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8323bc4c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323BC4C;
	// bdzf 4*cr6+eq,0x8323bc34
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323BC34;
	// bdzf 4*cr6+eq,0x8323bc64
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323BC64;
	// bdzf 4*cr6+eq,0x8323bc3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323BC3C;
	// bdzf 4*cr6+eq,0x8323bc7c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323BC7C;
	// bdzf 4*cr6+eq,0x8323bc44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323BC44;
	// bne cr6,0x8323bc94
	if (!cr6.eq) goto loc_8323BC94;
	// stfs f31,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// b 0x8323bca8
	goto loc_8323BCA8;
loc_8323BC34:
	// stfs f31,180(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// b 0x8323bca8
	goto loc_8323BCA8;
loc_8323BC3C:
	// stfs f31,184(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// b 0x8323bca8
	goto loc_8323BCA8;
loc_8323BC44:
	// stfs f31,188(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// b 0x8323bca8
	goto loc_8323BCA8;
loc_8323BC4C:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f0,204(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// b 0x8323bca8
	goto loc_8323BCA8;
loc_8323BC64:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f0,204(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// b 0x8323bca8
	goto loc_8323BCA8;
loc_8323BC7C:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f0,204(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// b 0x8323bca8
	goto loc_8323BCA8;
loc_8323BC94:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f0,204(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
loc_8323BCA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

