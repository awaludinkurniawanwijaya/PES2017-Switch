#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830D9EF0"))) PPC_WEAK_FUNC(sub_830D9EF0);
PPC_FUNC_IMPL(__imp__sub_830D9EF0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r30,r4,24
	ctx.r30.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x830da024
	if (cr6.gt) goto loc_830DA024;
	// lis r12,-31986
	ctx.r12.s64 = -2096234496;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-24764
	ctx.r12.s64 = ctx.r12.s64 + -24764;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_830D9F70;
	case 1:
		goto loc_830D9F78;
	case 2:
		goto loc_830D9F80;
	case 3:
		goto loc_830D9F8C;
	case 4:
		goto loc_830D9F9C;
	case 5:
		goto loc_830D9FA8;
	case 6:
		goto loc_830D9FBC;
	case 7:
		goto loc_830D9FD0;
	case 8:
		goto loc_830D9FDC;
	case 9:
		goto loc_830D9FF4;
	case 10:
		goto loc_830DA01C;
	default:
		return;
	}
	// lwz r24,-24720(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24720);
	// lwz r24,-24712(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24712);
	// lwz r24,-24704(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24704);
	// lwz r24,-24692(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24692);
	// lwz r24,-24676(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24676);
	// lwz r24,-24664(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24664);
	// lwz r24,-24644(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24644);
	// lwz r24,-24624(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24624);
	// lwz r24,-24612(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24612);
	// lwz r24,-24588(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24588);
	// lwz r24,-24548(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24548);
loc_830D9F70:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830da028
	goto loc_830DA028;
loc_830D9F78:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830da028
	goto loc_830DA028;
loc_830D9F80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d8a78
	ctx.lr = 0x830D9F88;
	sub_830D8A78(ctx, base);
	// b 0x830da028
	goto loc_830DA028;
loc_830D9F8C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830a9ff0
	ctx.lr = 0x830D9F98;
	sub_830A9FF0(ctx, base);
	// b 0x830da028
	goto loc_830DA028;
loc_830D9F9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d8ae8
	ctx.lr = 0x830D9FA4;
	sub_830D8AE8(ctx, base);
	// b 0x830da028
	goto loc_830DA028;
loc_830D9FA8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d8c08
	ctx.lr = 0x830D9FB8;
	sub_830D8C08(ctx, base);
	// b 0x830da028
	goto loc_830DA028;
loc_830D9FBC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d8c08
	ctx.lr = 0x830D9FCC;
	sub_830D8C08(ctx, base);
	// b 0x830da028
	goto loc_830DA028;
loc_830D9FD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d8cd8
	ctx.lr = 0x830D9FD8;
	sub_830D8CD8(ctx, base);
	// b 0x830da028
	goto loc_830DA028;
loc_830D9FDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,22620
	ctx.r9.u64 = ctx.r10.u64 | 22620;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x830da028
	goto loc_830DA028;
loc_830D9FF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,22620
	ctx.r9.u64 = ctx.r10.u64 | 22620;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x830da028
	if (!cr6.lt) goto loc_830DA028;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x830da028
	goto loc_830DA028;
loc_830DA01C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// b 0x830da028
	goto loc_830DA028;
loc_830DA024:
	// li r3,2
	ctx.r3.s64 = 2;
loc_830DA028:
	// addi r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 5;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r8,r9,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x830da048
	if (cr6.eq) goto loc_830DA048;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_830DA048:
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

__attribute__((alias("__imp__sub_830DA060"))) PPC_WEAK_FUNC(sub_830DA060);
PPC_FUNC_IMPL(__imp__sub_830DA060) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830da23c
	if (cr6.eq) goto loc_830DA23C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x830da23c
	if (cr6.eq) goto loc_830DA23C;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// bgt cr6,0x830da228
	if (cr6.gt) goto loc_830DA228;
	// lis r12,-31986
	ctx.r12.s64 = -2096234496;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-24404
	ctx.r12.s64 = ctx.r12.s64 + -24404;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_830DA0E4;
	case 1:
		goto loc_830DA100;
	case 2:
		goto loc_830DA118;
	case 3:
		goto loc_830DA130;
	case 4:
		goto loc_830DA148;
	case 5:
		goto loc_830DA160;
	case 6:
		goto loc_830DA178;
	case 7:
		goto loc_830DA190;
	case 8:
		goto loc_830DA1A8;
	case 9:
		goto loc_830DA1C0;
	case 10:
		goto loc_830DA1D8;
	case 11:
		goto loc_830DA1F0;
	case 12:
		goto loc_830DA208;
	case 13:
		goto loc_830DA220;
	default:
		return;
	}
	// lwz r24,-24348(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24348);
	// lwz r24,-24320(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24320);
	// lwz r24,-24296(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24296);
	// lwz r24,-24272(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24272);
	// lwz r24,-24248(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24248);
	// lwz r24,-24224(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24224);
	// lwz r24,-24200(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24200);
	// lwz r24,-24176(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24176);
	// lwz r24,-24152(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24152);
	// lwz r24,-24128(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24128);
	// lwz r24,-24104(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24104);
	// lwz r24,-24080(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24080);
	// lwz r24,-24056(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24056);
	// lwz r24,-24032(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -24032);
loc_830DA0E4:
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830d8150
	ctx.lr = 0x830DA0EC;
	sub_830D8150(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830DA100:
	// bl 0x830d6ed8
	ctx.lr = 0x830DA104;
	sub_830D6ED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830DA118:
	// bl 0x830d82a8
	ctx.lr = 0x830DA11C;
	sub_830D82A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830DA130:
	// bl 0x830d8368
	ctx.lr = 0x830DA134;
	sub_830D8368(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830DA148:
	// bl 0x830d83f0
	ctx.lr = 0x830DA14C;
	sub_830D83F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830DA160:
	// bl 0x830d84e8
	ctx.lr = 0x830DA164;
	sub_830D84E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830DA178:
	// bl 0x830d85f8
	ctx.lr = 0x830DA17C;
	sub_830D85F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830DA190:
	// bl 0x830d8748
	ctx.lr = 0x830DA194;
	sub_830D8748(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830DA1A8:
	// bl 0x830d8818
	ctx.lr = 0x830DA1AC;
	sub_830D8818(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830DA1C0:
	// bl 0x830d8890
	ctx.lr = 0x830DA1C4;
	sub_830D8890(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830DA1D8:
	// bl 0x830d8970
	ctx.lr = 0x830DA1DC;
	sub_830D8970(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830DA1F0:
	// bl 0x830d9c58
	ctx.lr = 0x830DA1F4;
	sub_830D9C58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830DA208:
	// bl 0x830d9e28
	ctx.lr = 0x830DA20C;
	sub_830D9E28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830DA220:
	// bl 0x830d6fa8
	ctx.lr = 0x830DA224;
	sub_830D6FA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830DA228:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830DA23C:
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

__attribute__((alias("__imp__sub_830DA250"))) PPC_WEAK_FUNC(sub_830DA250);
PPC_FUNC_IMPL(__imp__sub_830DA250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830DA258;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r7,32
	ctx.r7.s64 = 32;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// bl 0x830d7a80
	ctx.lr = 0x830DA274;
	sub_830D7A80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,32
	ctx.r7.s64 = 32;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d7a80
	ctx.lr = 0x830DA290;
	sub_830D7A80(ctx, base);
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830da2ac
	if (!cr6.eq) goto loc_830DA2AC;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
loc_830DA2AC:
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// li r5,1
	ctx.r5.s64 = 1;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x830d7648
	ctx.lr = 0x830DA2EC;
	sub_830D7648(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DA2F4"))) PPC_WEAK_FUNC(sub_830DA2F4);
PPC_FUNC_IMPL(__imp__sub_830DA2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DA2F8"))) PPC_WEAK_FUNC(sub_830DA2F8);
PPC_FUNC_IMPL(__imp__sub_830DA2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830DA300;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r7,32
	ctx.r7.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x830d7a80
	ctx.lr = 0x830DA31C;
	sub_830D7A80(ctx, base);
	// clrlwi r27,r3,16
	ctx.r27.u64 = ctx.r3.u32 & 0xFFFF;
	// li r7,32
	ctx.r7.s64 = 32;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d7a80
	ctx.lr = 0x830DA338;
	sub_830D7A80(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// subf r3,r27,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r27.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DA348"))) PPC_WEAK_FUNC(sub_830DA348);
PPC_FUNC_IMPL(__imp__sub_830DA348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// beq cr6,0x830da3dc
	if (cr6.eq) goto loc_830DA3DC;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x830da3dc
	if (cr6.eq) goto loc_830DA3DC;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// beq cr6,0x830da3dc
	if (cr6.eq) goto loc_830DA3DC;
	// cmplwi cr6,r4,18
	cr6.compare<uint32_t>(ctx.r4.u32, 18, xer);
	// beq cr6,0x830da3dc
	if (cr6.eq) goto loc_830DA3DC;
	// cmplwi cr6,r4,19
	cr6.compare<uint32_t>(ctx.r4.u32, 19, xer);
	// beq cr6,0x830da3dc
	if (cr6.eq) goto loc_830DA3DC;
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// bne cr6,0x830da3b0
	if (!cr6.eq) goto loc_830DA3B0;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x830da394
	if (!cr6.eq) goto loc_830DA394;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f1,19180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19180);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_830DA394:
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// beq cr6,0x830da3a4
	if (cr6.eq) goto loc_830DA3A4;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_830DA3A4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,20780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20780);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_830DA3B0:
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// beq cr6,0x830da3e4
	if (cr6.eq) goto loc_830DA3E4;
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// beq cr6,0x830da3d0
	if (cr6.eq) goto loc_830DA3D0;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_830DA3D0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,-23848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_830DA3DC:
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x830da3f0
	if (!cr6.eq) goto loc_830DA3F0;
loc_830DA3E4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-20096(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20096);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_830DA3F0:
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// beq cr6,0x830da400
	if (cr6.eq) goto loc_830DA400;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_830DA400:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f1,16088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16088);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DA40C"))) PPC_WEAK_FUNC(sub_830DA40C);
PPC_FUNC_IMPL(__imp__sub_830DA40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DA410"))) PPC_WEAK_FUNC(sub_830DA410);
PPC_FUNC_IMPL(__imp__sub_830DA410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830DA418;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830da440
	if (cr6.lt) goto loc_830DA440;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830da444
	if (cr6.lt) goto loc_830DA444;
loc_830DA440:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DA444:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830da460
	if (!cr6.eq) goto loc_830DA460;
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830DA460:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bge cr6,0x830da470
	if (!cr6.lt) goto loc_830DA470;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830da498
	goto loc_830DA498;
loc_830DA470:
	// cmpwi cr6,r25,11
	cr6.compare<int32_t>(ctx.r25.s32, 11, xer);
	// bge cr6,0x830da480
	if (!cr6.lt) goto loc_830DA480;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830da498
	goto loc_830DA498;
loc_830DA480:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r25
	xer.ca = ctx.r25.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r25.s64 - ctx.r11.s64;
	// eqv r9,r11,r25
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r25.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_830DA498:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mulli r11,r25,44
	ctx.r11.s64 = ctx.r25.s64 * 44;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// mulli r28,r9,11
	ctx.r28.s64 = ctx.r9.s64 * 11;
	// lfs f31,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f31.f64 = double(temp.f32);
loc_830DA4BC:
	// add r31,r28,r29
	ctx.r31.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a29580
	ctx.lr = 0x830DA4CC;
	sub_82A29580(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830da530
	if (cr6.eq) goto loc_830DA530;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825b0ae0
	ctx.lr = 0x830DA4DC;
	sub_825B0AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x830da530
	if (!cr6.eq) goto loc_830DA530;
	// mulli r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 * 44;
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fabs f5,f6
	ctx.f5.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fcmpu cr6,f5,f31
	cr6.compare(ctx.f5.f64, ctx.f31.f64);
	// bge cr6,0x830da530
	if (!cr6.lt) goto loc_830DA530;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
loc_830DA530:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,11
	cr6.compare<uint32_t>(ctx.r29.u32, 11, xer);
	// blt cr6,0x830da4bc
	if (cr6.lt) goto loc_830DA4BC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DA54C"))) PPC_WEAK_FUNC(sub_830DA54C);
PPC_FUNC_IMPL(__imp__sub_830DA54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DA550"))) PPC_WEAK_FUNC(sub_830DA550);
PPC_FUNC_IMPL(__imp__sub_830DA550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830DA558;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830da578
	if (cr6.lt) goto loc_830DA578;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830da57c
	if (cr6.lt) goto loc_830DA57C;
loc_830DA578:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DA57C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830da598
	if (!cr6.eq) goto loc_830DA598;
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830DA598:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x830da5a8
	if (!cr6.lt) goto loc_830DA5A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830da5d0
	goto loc_830DA5D0;
loc_830DA5A8:
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x830da5b8
	if (!cr6.lt) goto loc_830DA5B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830da5d0
	goto loc_830DA5D0;
loc_830DA5B8:
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
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_830DA5D0:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mulli r11,r4,44
	ctx.r11.s64 = ctx.r4.s64 * 44;
	// lfs f31,-23848(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23848);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r27,255
	ctx.r27.s64 = 255;
	// li r30,0
	ctx.r30.s64 = 0;
	// mulli r29,r8,11
	ctx.r29.s64 = ctx.r8.s64 * 11;
	// bl 0x825b0ae0
	ctx.lr = 0x830DA5FC;
	sub_825B0AE0(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_830DA608:
	// add r9,r29,r30
	ctx.r9.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x830da658
	if (!cr6.eq) goto loc_830DA658;
	// mulli r11,r9,44
	ctx.r11.s64 = ctx.r9.s64 * 44;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f0,f7
	ctx.f0.f64 = double(float(sqrt(ctx.f7.f64)));
	// fabs f6,f0
	ctx.f6.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f6,f31
	cr6.compare(ctx.f6.f64, ctx.f31.f64);
	// bge cr6,0x830da658
	if (!cr6.lt) goto loc_830DA658;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// fabs f31,f0
	ctx.f31.u64 = ctx.f0.u64 & ~0x8000000000000000;
loc_830DA658:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bdnz 0x830da608
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830DA608;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DA670"))) PPC_WEAK_FUNC(sub_830DA670);
PPC_FUNC_IMPL(__imp__sub_830DA670) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830da6a0
	if (cr6.lt) goto loc_830DA6A0;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830da6a4
	if (cr6.lt) goto loc_830DA6A4;
loc_830DA6A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DA6A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830da6b8
	if (!cr6.eq) goto loc_830DA6B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830da774
	goto loc_830DA774;
loc_830DA6B8:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x830DA6C4;
	sub_82A0C7B0(ctx, base);
	// lbz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x830da6ec
	if (!cr6.eq) goto loc_830DA6EC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,100
	ctx.r10.s64 = 100;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r11,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// b 0x830da770
	goto loc_830DA770;
loc_830DA6EC:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x830da710
	if (!cr6.eq) goto loc_830DA710;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,75
	ctx.r10.s64 = 75;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r11,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// b 0x830da770
	goto loc_830DA770;
loc_830DA710:
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bne cr6,0x830da734
	if (!cr6.eq) goto loc_830DA734;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,50
	ctx.r10.s64 = 50;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r11,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// b 0x830da770
	goto loc_830DA770;
loc_830DA734:
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// bne cr6,0x830da744
	if (!cr6.eq) goto loc_830DA744;
	// li r10,50
	ctx.r10.s64 = 50;
	// b 0x830da760
	goto loc_830DA760;
loc_830DA744:
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// bne cr6,0x830da754
	if (!cr6.eq) goto loc_830DA754;
	// li r10,30
	ctx.r10.s64 = 30;
	// b 0x830da760
	goto loc_830DA760;
loc_830DA754:
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(ctx.r30.s32, 5, xer);
	// bne cr6,0x830da770
	if (!cr6.eq) goto loc_830DA770;
	// li r10,10
	ctx.r10.s64 = 10;
loc_830DA760:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r7,31
	ctx.r31.u64 = ctx.r7.u32 & 0x1;
loc_830DA770:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830DA774:
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

__attribute__((alias("__imp__sub_830DA78C"))) PPC_WEAK_FUNC(sub_830DA78C);
PPC_FUNC_IMPL(__imp__sub_830DA78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DA790"))) PPC_WEAK_FUNC(sub_830DA790);
PPC_FUNC_IMPL(__imp__sub_830DA790) {
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
	// lbz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830da8f8
	if (!cr6.eq) goto loc_830DA8F8;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x830d7398
	ctx.lr = 0x830DA7D4;
	sub_830D7398(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830da8f8
	if (cr6.eq) goto loc_830DA8F8;
	// lbz r11,83(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 83);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830da7fc
	if (cr6.eq) goto loc_830DA7FC;
	// lbz r11,83(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 83);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830da8fc
	goto loc_830DA8FC;
loc_830DA7FC:
	// lbz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830da818
	if (cr6.eq) goto loc_830DA818;
	// lbz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 84);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830da8fc
	goto loc_830DA8FC;
loc_830DA818:
	// lbz r11,89(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 89);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830da834
	if (cr6.eq) goto loc_830DA834;
	// lbz r11,89(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 89);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830da8fc
	goto loc_830DA8FC;
loc_830DA834:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x830d7398
	ctx.lr = 0x830DA850;
	sub_830D7398(ctx, base);
	// lbz r9,82(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830da890
	if (cr6.eq) goto loc_830DA890;
	// lbz r11,82(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 82);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830da8f8
	if (cr6.eq) goto loc_830DA8F8;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x830d7398
	ctx.lr = 0x830DA884;
	sub_830D7398(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// b 0x830da8f0
	goto loc_830DA8F0;
loc_830DA890:
	// lbz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830da8a4
	if (cr6.eq) goto loc_830DA8A4;
	// lbz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// b 0x830da8e0
	goto loc_830DA8E0;
loc_830DA8A4:
	// lbz r11,86(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 86);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830da8d0
	if (!cr6.eq) goto loc_830DA8D0;
	// lbz r11,87(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 87);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830da8d0
	if (!cr6.eq) goto loc_830DA8D0;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x830da8fc
	goto loc_830DA8FC;
loc_830DA8D0:
	// lbz r11,86(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 86);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830da8e8
	if (!cr6.eq) goto loc_830DA8E8;
	// lbz r11,87(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 87);
loc_830DA8E0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830da8f8
	if (cr6.eq) goto loc_830DA8F8;
loc_830DA8E8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
loc_830DA8F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x830da8fc
	if (cr6.eq) goto loc_830DA8FC;
loc_830DA8F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DA8FC:
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

__attribute__((alias("__imp__sub_830DA914"))) PPC_WEAK_FUNC(sub_830DA914);
PPC_FUNC_IMPL(__imp__sub_830DA914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DA918"))) PPC_WEAK_FUNC(sub_830DA918);
PPC_FUNC_IMPL(__imp__sub_830DA918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830daa1c
	if (cr6.eq) goto loc_830DAA1C;
	// cmplwi cr6,r5,17
	cr6.compare<uint32_t>(ctx.r5.u32, 17, xer);
	// bge cr6,0x830daa1c
	if (!cr6.lt) goto loc_830DAA1C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r11,-17(r1)
	PPC_STORE_U8(ctx.r1.u32 + -17, ctx.r11.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// li r6,4
	ctx.r6.s64 = 4;
	// stb r9,-30(r1)
	PPC_STORE_U8(ctx.r1.u32 + -30, ctx.r9.u8);
	// stb r7,-31(r1)
	PPC_STORE_U8(ctx.r1.u32 + -31, ctx.r7.u8);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r8,-29(r1)
	PPC_STORE_U8(ctx.r1.u32 + -29, ctx.r8.u8);
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r6,-28(r1)
	PPC_STORE_U8(ctx.r1.u32 + -28, ctx.r6.u8);
	// li r8,7
	ctx.r8.s64 = 7;
	// li r7,8
	ctx.r7.s64 = 8;
	// stb r11,-27(r1)
	PPC_STORE_U8(ctx.r1.u32 + -27, ctx.r11.u8);
	// li r6,9
	ctx.r6.s64 = 9;
	// stb r9,-26(r1)
	PPC_STORE_U8(ctx.r1.u32 + -26, ctx.r9.u8);
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// stb r8,-25(r1)
	PPC_STORE_U8(ctx.r1.u32 + -25, ctx.r8.u8);
	// stb r7,-24(r1)
	PPC_STORE_U8(ctx.r1.u32 + -24, ctx.r7.u8);
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r6,-23(r1)
	PPC_STORE_U8(ctx.r1.u32 + -23, ctx.r6.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,11
	ctx.r9.s64 = 11;
	// stb r11,-22(r1)
	PPC_STORE_U8(ctx.r1.u32 + -22, ctx.r11.u8);
	// li r8,12
	ctx.r8.s64 = 12;
	// stb r3,-32(r1)
	PPC_STORE_U8(ctx.r1.u32 + -32, ctx.r3.u8);
	// li r7,13
	ctx.r7.s64 = 13;
	// stb r9,-21(r1)
	PPC_STORE_U8(ctx.r1.u32 + -21, ctx.r9.u8);
	// li r6,14
	ctx.r6.s64 = 14;
	// stb r8,-20(r1)
	PPC_STORE_U8(ctx.r1.u32 + -20, ctx.r8.u8);
	// stb r7,-19(r1)
	PPC_STORE_U8(ctx.r1.u32 + -19, ctx.r7.u8);
	// stb r6,-18(r1)
	PPC_STORE_U8(ctx.r1.u32 + -18, ctx.r6.u8);
	// lbzx r11,r5,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830da9cc
	if (cr6.lt) goto loc_830DA9CC;
	// sraw r11,r4,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r11.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
loc_830DA9CC:
	// cmplwi cr6,r5,15
	cr6.compare<uint32_t>(ctx.r5.u32, 15, xer);
	// bne cr6,0x830da9f4
	if (!cr6.eq) goto loc_830DA9F4;
	// rlwinm r11,r4,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r4,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_830DA9F4:
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// rlwinm r11,r4,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r4,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_830DAA1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DAA24"))) PPC_WEAK_FUNC(sub_830DAA24);
PPC_FUNC_IMPL(__imp__sub_830DAA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DAA28"))) PPC_WEAK_FUNC(sub_830DAA28);
PPC_FUNC_IMPL(__imp__sub_830DAA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,36
	cr6.compare<int32_t>(ctx.r3.s32, 36, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r11,r3,-37
	ctx.r11.s64 = ctx.r3.s64 + -37;
	// cmplwi cr6,r11,73
	cr6.compare<uint32_t>(ctx.r11.u32, 73, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-31986
	ctx.r12.s64 = -2096234496;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-21932
	ctx.r12.s64 = ctx.r12.s64 + -21932;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_830DAB7C;
	case 1:
		goto loc_830DAB7C;
	case 2:
		goto loc_830DAB7C;
	case 3:
		goto loc_830DAB7C;
	case 4:
		goto loc_830DAB84;
	case 5:
		goto loc_830DAB84;
	case 6:
		goto loc_830DAB84;
	case 7:
		goto loc_830DAB84;
	case 8:
		goto loc_830DAB8C;
	case 9:
		goto loc_830DAB8C;
	case 10:
		goto loc_830DAB94;
	case 11:
		goto loc_830DAB94;
	case 12:
		goto loc_830DAB9C;
	case 13:
		goto loc_830DAB9C;
	case 14:
		goto loc_830DABA4;
	case 15:
		goto loc_830DABA4;
	case 16:
		goto loc_830DAB7C;
	case 17:
		goto loc_830DAB7C;
	case 18:
		goto loc_830DABAC;
	case 19:
		goto loc_830DABAC;
	case 20:
		goto loc_830DABB4;
	case 21:
		goto loc_830DABB4;
	case 22:
		goto loc_830DAB84;
	case 23:
		goto loc_830DAB84;
	case 24:
		goto loc_830DABBC;
	case 25:
		goto loc_830DABBC;
	case 26:
		goto loc_830DAB84;
	case 27:
		goto loc_830DAB84;
	case 28:
		goto loc_830DABC4;
	case 29:
		goto loc_830DABC4;
	case 30:
		goto loc_830DAB8C;
	case 31:
		goto loc_830DAB8C;
	case 32:
		goto loc_830DABC4;
	case 33:
		goto loc_830DABC4;
	case 34:
		goto loc_830DABCC;
	case 35:
		goto loc_830DABCC;
	case 36:
		goto loc_830DABD4;
	case 37:
		goto loc_830DABD4;
	case 38:
		goto loc_830DABDC;
	case 39:
		goto loc_830DABDC;
	case 40:
		goto loc_830DABE4;
	case 41:
		goto loc_830DABE4;
	case 42:
		goto loc_830DABEC;
	case 43:
		goto loc_830DABEC;
	case 44:
		goto loc_830DABF4;
	case 45:
		goto loc_830DABF4;
	case 46:
		goto loc_830DABFC;
	case 47:
		goto loc_830DABFC;
	case 48:
		goto loc_830DAC04;
	case 49:
		goto loc_830DAC04;
	case 50:
		goto loc_830DAC0C;
	case 51:
		goto loc_830DAC0C;
	case 52:
		goto loc_830DAC14;
	case 53:
		goto loc_830DAC14;
	case 54:
		goto loc_830DAC1C;
	case 55:
		goto loc_830DAC1C;
	case 56:
		goto loc_830DAB7C;
	case 57:
		goto loc_830DAB7C;
	case 58:
		goto loc_830DAC24;
	case 59:
		goto loc_830DAC24;
	case 60:
		goto loc_830DAB84;
	case 61:
		goto loc_830DAB84;
	case 62:
		goto loc_830DAC28;
	case 63:
		goto loc_830DAC28;
	case 64:
		goto loc_830DAB84;
	case 65:
		goto loc_830DAB84;
	case 66:
		goto loc_830DAB84;
	case 67:
		goto loc_830DAB84;
	case 68:
		goto loc_830DAB84;
	case 69:
		goto loc_830DAB84;
	case 70:
		goto loc_830DAC28;
	case 71:
		goto loc_830DAC28;
	case 72:
		goto loc_830DAB84;
	case 73:
		goto loc_830DAB84;
	default:
		return;
	}
	// lwz r24,-21636(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21636);
	// lwz r24,-21636(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21636);
	// lwz r24,-21636(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21636);
	// lwz r24,-21636(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21636);
	// lwz r24,-21628(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21628);
	// lwz r24,-21628(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21628);
	// lwz r24,-21628(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21628);
	// lwz r24,-21628(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21628);
	// lwz r24,-21620(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21620);
	// lwz r24,-21620(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21620);
	// lwz r24,-21612(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21612);
	// lwz r24,-21612(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21612);
	// lwz r24,-21604(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21604);
	// lwz r24,-21604(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21604);
	// lwz r24,-21596(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21596);
	// lwz r24,-21596(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21596);
	// lwz r24,-21636(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21636);
	// lwz r24,-21636(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21636);
	// lwz r24,-21588(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21588);
	// lwz r24,-21588(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21588);
	// lwz r24,-21580(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21580);
	// lwz r24,-21580(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21580);
	// lwz r24,-21628(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21628);
	// lwz r24,-21628(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21628);
	// lwz r24,-21572(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21572);
	// lwz r24,-21572(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21572);
	// lwz r24,-21628(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21628);
	// lwz r24,-21628(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21628);
	// lwz r24,-21564(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21564);
	// lwz r24,-21564(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21564);
	// lwz r24,-21620(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21620);
	// lwz r24,-21620(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21620);
	// lwz r24,-21564(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21564);
	// lwz r24,-21564(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21564);
	// lwz r24,-21556(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21556);
	// lwz r24,-21556(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21556);
	// lwz r24,-21548(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21548);
	// lwz r24,-21548(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21548);
	// lwz r24,-21540(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21540);
	// lwz r24,-21540(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21540);
	// lwz r24,-21532(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21532);
	// lwz r24,-21532(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21532);
	// lwz r24,-21524(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21524);
	// lwz r24,-21524(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21524);
	// lwz r24,-21516(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21516);
	// lwz r24,-21516(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21516);
	// lwz r24,-21508(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21508);
	// lwz r24,-21508(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21508);
	// lwz r24,-21500(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21500);
	// lwz r24,-21500(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21500);
	// lwz r24,-21492(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21492);
	// lwz r24,-21492(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21492);
	// lwz r24,-21484(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21484);
	// lwz r24,-21484(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21484);
	// lwz r24,-21476(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21476);
	// lwz r24,-21476(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21476);
	// lwz r24,-21636(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21636);
	// lwz r24,-21636(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21636);
	// lwz r24,-21468(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21468);
	// lwz r24,-21468(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21468);
	// lwz r24,-21628(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21628);
	// lwz r24,-21628(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21628);
	// lwz r24,-21464(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21464);
	// lwz r24,-21464(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21464);
	// lwz r24,-21628(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21628);
	// lwz r24,-21628(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21628);
	// lwz r24,-21628(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21628);
	// lwz r24,-21628(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21628);
	// lwz r24,-21628(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21628);
	// lwz r24,-21628(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21628);
	// lwz r24,-21464(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21464);
	// lwz r24,-21464(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21464);
	// lwz r24,-21628(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21628);
	// lwz r24,-21628(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21628);
loc_830DAB7C:
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
loc_830DAB84:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_830DAB8C:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_830DAB94:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_830DAB9C:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_830DABA4:
	// li r3,27
	ctx.r3.s64 = 27;
	// blr 
	return;
loc_830DABAC:
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
loc_830DABB4:
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
loc_830DABBC:
	// li r3,35
	ctx.r3.s64 = 35;
	// blr 
	return;
loc_830DABC4:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_830DABCC:
	// li r3,18
	ctx.r3.s64 = 18;
	// blr 
	return;
loc_830DABD4:
	// li r3,19
	ctx.r3.s64 = 19;
	// blr 
	return;
loc_830DABDC:
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
loc_830DABE4:
	// li r3,29
	ctx.r3.s64 = 29;
	// blr 
	return;
loc_830DABEC:
	// li r3,34
	ctx.r3.s64 = 34;
	// blr 
	return;
loc_830DABF4:
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_830DABFC:
	// li r3,26
	ctx.r3.s64 = 26;
	// blr 
	return;
loc_830DAC04:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
loc_830DAC0C:
	// li r3,21
	ctx.r3.s64 = 21;
	// blr 
	return;
loc_830DAC14:
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
loc_830DAC1C:
	// li r3,25
	ctx.r3.s64 = 25;
	// blr 
	return;
loc_830DAC24:
	// li r3,16
	ctx.r3.s64 = 16;
loc_830DAC28:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DAC2C"))) PPC_WEAK_FUNC(sub_830DAC2C);
PPC_FUNC_IMPL(__imp__sub_830DAC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DAC30"))) PPC_WEAK_FUNC(sub_830DAC30);
PPC_FUNC_IMPL(__imp__sub_830DAC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,7
	ctx.r11.s64 = 7;
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bgt cr6,0x830dacd8
	if (cr6.gt) goto loc_830DACD8;
	// lis r12,-31986
	ctx.r12.s64 = -2096234496;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-21420
	ctx.r12.s64 = ctx.r12.s64 + -21420;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_830DAC8C;
	case 1:
		goto loc_830DAC8C;
	case 2:
		goto loc_830DAC98;
	case 3:
		goto loc_830DAC98;
	case 4:
		goto loc_830DACA4;
	case 5:
		goto loc_830DACA4;
	case 6:
		goto loc_830DACB0;
	case 7:
		goto loc_830DACB0;
	case 8:
		goto loc_830DACBC;
	case 9:
		goto loc_830DACBC;
	case 10:
		goto loc_830DACC8;
	case 11:
		goto loc_830DACC8;
	case 12:
		goto loc_830DACD4;
	case 13:
		goto loc_830DACD4;
	default:
		return;
	}
	// lwz r24,-21364(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21364);
	// lwz r24,-21364(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21364);
	// lwz r24,-21352(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21352);
	// lwz r24,-21352(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21352);
	// lwz r24,-21340(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21340);
	// lwz r24,-21340(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21340);
	// lwz r24,-21328(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21328);
	// lwz r24,-21328(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21328);
	// lwz r24,-21316(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21316);
	// lwz r24,-21316(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21316);
	// lwz r24,-21304(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21304);
	// lwz r24,-21304(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21304);
	// lwz r24,-21292(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21292);
	// lwz r24,-21292(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -21292);
loc_830DAC8C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_830DAC98:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_830DACA4:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_830DACB0:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_830DACBC:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_830DACC8:
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_830DACD4:
	// li r11,6
	ctx.r11.s64 = 6;
loc_830DACD8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DACE0"))) PPC_WEAK_FUNC(sub_830DACE0);
PPC_FUNC_IMPL(__imp__sub_830DACE0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x830dac30
	ctx.lr = 0x830DAD04;
	sub_830DAC30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82a29dc0
	ctx.lr = 0x830DAD10;
	sub_82A29DC0(ctx, base);
	// cmpwi cr6,r31,14
	cr6.compare<int32_t>(ctx.r31.s32, 14, xer);
	// blt cr6,0x830dad20
	if (cr6.lt) goto loc_830DAD20;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x830dad30
	goto loc_830DAD30;
loc_830DAD20:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,20280
	ctx.r9.s64 = ctx.r11.s64 + 20280;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_830DAD30:
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
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

__attribute__((alias("__imp__sub_830DAD50"))) PPC_WEAK_FUNC(sub_830DAD50);
PPC_FUNC_IMPL(__imp__sub_830DAD50) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830dad84
	if (cr6.lt) goto loc_830DAD84;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dad88
	if (cr6.lt) goto loc_830DAD88;
loc_830DAD84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DAD88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dae0c
	if (cr6.eq) goto loc_830DAE0C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x830dae0c
	if (cr6.eq) goto loc_830DAE0C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830DADAC;
	sub_82A0C738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a164c8
	ctx.lr = 0x830DADB4;
	sub_82A164C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82be4eb8
	ctx.lr = 0x830DADC0;
	sub_82BE4EB8(ctx, base);
	// bl 0x830a7028
	ctx.lr = 0x830DADC4;
	sub_830A7028(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830a7120
	ctx.lr = 0x830DADD0;
	sub_830A7120(ctx, base);
	// li r10,30
	ctx.r10.s64 = 30;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830a8950
	ctx.lr = 0x830DADF0;
	sub_830A8950(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830dadfc
	if (cr6.eq) goto loc_830DADFC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_830DADFC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83102db0
	ctx.lr = 0x830DAE04;
	sub_83102DB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x830dae10
	goto loc_830DAE10;
loc_830DAE0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DAE10:
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

__attribute__((alias("__imp__sub_830DAE28"))) PPC_WEAK_FUNC(sub_830DAE28);
PPC_FUNC_IMPL(__imp__sub_830DAE28) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x830dad50
	sub_830DAD50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DAE3C"))) PPC_WEAK_FUNC(sub_830DAE3C);
PPC_FUNC_IMPL(__imp__sub_830DAE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DAE40"))) PPC_WEAK_FUNC(sub_830DAE40);
PPC_FUNC_IMPL(__imp__sub_830DAE40) {
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
	// bl 0x830a6bf8
	ctx.lr = 0x830DAE50;
	sub_830A6BF8(ctx, base);
	// bl 0x82638f20
	ctx.lr = 0x830DAE54;
	sub_82638F20(ctx, base);
	// bl 0x830a6e78
	ctx.lr = 0x830DAE58;
	sub_830A6E78(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x830dae8c
	if (cr6.eq) goto loc_830DAE8C;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x830dae8c
	if (cr6.eq) goto loc_830DAE8C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830dae8c
	if (cr6.eq) goto loc_830DAE8C;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// beq cr6,0x830dae8c
	if (cr6.eq) goto loc_830DAE8C;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x830dae8c
	if (cr6.eq) goto loc_830DAE8C;
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x830dae90
	if (!cr6.eq) goto loc_830DAE90;
loc_830DAE8C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_830DAE90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DAEA0"))) PPC_WEAK_FUNC(sub_830DAEA0);
PPC_FUNC_IMPL(__imp__sub_830DAEA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DAED4"))) PPC_WEAK_FUNC(sub_830DAED4);
PPC_FUNC_IMPL(__imp__sub_830DAED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DAED8"))) PPC_WEAK_FUNC(sub_830DAED8);
PPC_FUNC_IMPL(__imp__sub_830DAED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830DAEE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a227f0
	ctx.lr = 0x830DAEFC;
	sub_82A227F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x830DAF0C;
	sub_831CE980(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// bne cr6,0x830daf2c
	if (!cr6.eq) goto loc_830DAF2C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x830DAF20;
	sub_83102DB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830DAF2C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a22b40
	ctx.lr = 0x830DAF40;
	sub_82A22B40(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830dafe8
	if (cr6.eq) goto loc_830DAFE8;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x830daf88
	if (!cr6.eq) goto loc_830DAF88;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x830daf6c
	if (cr6.eq) goto loc_830DAF6C;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830daf70
	if (!cr6.eq) goto loc_830DAF70;
loc_830DAF6C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830DAF70:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x83102db0
	ctx.lr = 0x830DAF7C;
	sub_83102DB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830DAF88:
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// bne cr6,0x830daf98
	if (!cr6.eq) goto loc_830DAF98;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// b 0x830db044
	goto loc_830DB044;
loc_830DAF98:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bne cr6,0x830dafa8
	if (!cr6.eq) goto loc_830DAFA8;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// b 0x830db044
	goto loc_830DB044;
loc_830DAFA8:
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// bne cr6,0x830dafb8
	if (!cr6.eq) goto loc_830DAFB8;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// b 0x830db044
	goto loc_830DB044;
loc_830DAFB8:
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// bne cr6,0x830dafc8
	if (!cr6.eq) goto loc_830DAFC8;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// b 0x830db044
	goto loc_830DB044;
loc_830DAFC8:
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// bne cr6,0x830dafd8
	if (!cr6.eq) goto loc_830DAFD8;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// b 0x830db044
	goto loc_830DB044;
loc_830DAFD8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830db04c
	if (!cr6.eq) goto loc_830DB04C;
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(ctx.r31.u32, 7, xer);
	// bne cr6,0x830db000
	if (!cr6.eq) goto loc_830DB000;
loc_830DAFE8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x83102db0
	ctx.lr = 0x830DAFF4;
	sub_83102DB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830DB000:
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// bne cr6,0x830db038
	if (!cr6.eq) goto loc_830DB038;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x830db01c
	if (cr6.eq) goto loc_830DB01C;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830db020
	if (!cr6.eq) goto loc_830DB020;
loc_830DB01C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830DB020:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x83102db0
	ctx.lr = 0x830DB02C;
	sub_83102DB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830DB038:
	// cmplwi cr6,r31,9
	cr6.compare<uint32_t>(ctx.r31.u32, 9, xer);
	// bne cr6,0x830db04c
	if (!cr6.eq) goto loc_830DB04C;
	// addi r11,r29,-3
	ctx.r11.s64 = ctx.r29.s64 + -3;
loc_830DB044:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830DB04C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x830DB054;
	sub_83102DB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DB060"))) PPC_WEAK_FUNC(sub_830DB060);
PPC_FUNC_IMPL(__imp__sub_830DB060) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r4,10
	cr6.compare<uint32_t>(ctx.r4.u32, 10, xer);
	// lwz r9,-3564(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r8,292(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 292);
	// lwz r11,5388(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5388);
	// lwz r10,5356(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5356);
	// lwz r8,4456(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4456);
	// bne cr6,0x830db0a0
	if (!cr6.eq) goto loc_830DB0A0;
loc_830DB098:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x830db16c
	goto loc_830DB16C;
loc_830DB0A0:
	// cmplwi cr6,r4,14
	cr6.compare<uint32_t>(ctx.r4.u32, 14, xer);
	// bne cr6,0x830db0b0
	if (!cr6.eq) goto loc_830DB0B0;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// b 0x830db164
	goto loc_830DB164;
loc_830DB0B0:
	// cmplwi cr6,r4,15
	cr6.compare<uint32_t>(ctx.r4.u32, 15, xer);
	// bne cr6,0x830db0c0
	if (!cr6.eq) goto loc_830DB0C0;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// b 0x830db164
	goto loc_830DB164;
loc_830DB0C0:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x830db100
	if (!cr6.eq) goto loc_830DB100;
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// beq cr6,0x830db098
	if (cr6.eq) goto loc_830DB098;
	// cmplwi cr6,r4,17
	cr6.compare<uint32_t>(ctx.r4.u32, 17, xer);
	// bne cr6,0x830db0e0
	if (!cr6.eq) goto loc_830DB0E0;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// b 0x830db164
	goto loc_830DB164;
loc_830DB0E0:
	// cmplwi cr6,r4,18
	cr6.compare<uint32_t>(ctx.r4.u32, 18, xer);
	// bne cr6,0x830db0f0
	if (!cr6.eq) goto loc_830DB0F0;
	// addi r11,r10,-3
	ctx.r11.s64 = ctx.r10.s64 + -3;
	// b 0x830db164
	goto loc_830DB164;
loc_830DB0F0:
	// cmplwi cr6,r4,19
	cr6.compare<uint32_t>(ctx.r4.u32, 19, xer);
	// bne cr6,0x830db128
	if (!cr6.eq) goto loc_830DB128;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// b 0x830db164
	goto loc_830DB164;
loc_830DB100:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830db128
	if (!cr6.eq) goto loc_830DB128;
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// beq cr6,0x830db098
	if (cr6.eq) goto loc_830DB098;
	// cmplwi cr6,r4,12
	cr6.compare<uint32_t>(ctx.r4.u32, 12, xer);
	// bne cr6,0x830db128
	if (!cr6.eq) goto loc_830DB128;
	// addi r11,r8,-10
	ctx.r11.s64 = ctx.r8.s64 + -10;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830db16c
	goto loc_830DB16C;
loc_830DB128:
	// cmplwi cr6,r4,13
	cr6.compare<uint32_t>(ctx.r4.u32, 13, xer);
	// bne cr6,0x830db16c
	if (!cr6.eq) goto loc_830DB16C;
	// cmpwi cr6,r8,9
	cr6.compare<int32_t>(ctx.r8.s32, 9, xer);
	// bne cr6,0x830db160
	if (!cr6.eq) goto loc_830DB160;
	// lwz r30,352(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 352);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83574ae0
	ctx.lr = 0x830DB144;
	sub_83574AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830db16c
	if (cr6.eq) goto loc_830DB16C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2c130
	ctx.lr = 0x830DB158;
	sub_82A2C130(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x830db16c
	goto loc_830DB16C;
loc_830DB160:
	// addi r11,r8,-10
	ctx.r11.s64 = ctx.r8.s64 + -10;
loc_830DB164:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830DB16C:
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

__attribute__((alias("__imp__sub_830DB188"))) PPC_WEAK_FUNC(sub_830DB188);
PPC_FUNC_IMPL(__imp__sub_830DB188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,20
	cr6.compare<uint32_t>(ctx.r4.u32, 20, xer);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,5388(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5388);
	// lwz r11,5356(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5356);
	// beq cr6,0x830db230
	if (cr6.eq) goto loc_830DB230;
	// cmplwi cr6,r4,21
	cr6.compare<uint32_t>(ctx.r4.u32, 21, xer);
	// bne cr6,0x830db1c0
	if (!cr6.eq) goto loc_830DB1C0;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830DB1C0:
	// cmplwi cr6,r4,22
	cr6.compare<uint32_t>(ctx.r4.u32, 22, xer);
	// bne cr6,0x830db1d8
	if (!cr6.eq) goto loc_830DB1D8;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830DB1D8:
	// cmplwi cr6,r4,23
	cr6.compare<uint32_t>(ctx.r4.u32, 23, xer);
	// bne cr6,0x830db1f0
	if (!cr6.eq) goto loc_830DB1F0;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830DB1F0:
	// cmplwi cr6,r4,24
	cr6.compare<uint32_t>(ctx.r4.u32, 24, xer);
	// bne cr6,0x830db208
	if (!cr6.eq) goto loc_830DB208;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830DB208:
	// cmplwi cr6,r4,25
	cr6.compare<uint32_t>(ctx.r4.u32, 25, xer);
	// bne cr6,0x830db220
	if (!cr6.eq) goto loc_830DB220;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830DB220:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r4,26
	cr6.compare<uint32_t>(ctx.r4.u32, 26, xer);
	// bne cr6,0x830db238
	if (!cr6.eq) goto loc_830DB238;
loc_830DB230:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_830DB238:
	// cmplwi cr6,r4,27
	cr6.compare<uint32_t>(ctx.r4.u32, 27, xer);
	// bne cr6,0x830db260
	if (!cr6.eq) goto loc_830DB260;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830db254
	if (cr6.eq) goto loc_830DB254;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830db258
	if (!cr6.eq) goto loc_830DB258;
loc_830DB254:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830DB258:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_830DB260:
	// cmplwi cr6,r4,28
	cr6.compare<uint32_t>(ctx.r4.u32, 28, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r11,r10,-3
	ctx.r11.s64 = ctx.r10.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DB278"))) PPC_WEAK_FUNC(sub_830DB278);
PPC_FUNC_IMPL(__imp__sub_830DB278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830DB280;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830db2ac
	if (!cr6.eq) goto loc_830DB2AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830DB2AC:
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r30,r30,26208
	ctx.r30.s64 = ctx.r30.s64 + 26208;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830d7078
	ctx.lr = 0x830DB2C0;
	sub_830D7078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_830DB2C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a45490
	ctx.lr = 0x830DB2D4;
	sub_82A45490(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a45490
	ctx.lr = 0x830DB2E4;
	sub_82A45490(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lfs f2,16(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x830e0130
	ctx.lr = 0x830DB300;
	sub_830E0130(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830db310
	if (cr6.eq) goto loc_830DB310;
	// li r26,1
	ctx.r26.s64 = 1;
loc_830DB310:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x830db2c8
	if (cr6.lt) goto loc_830DB2C8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DB32C"))) PPC_WEAK_FUNC(sub_830DB32C);
PPC_FUNC_IMPL(__imp__sub_830DB32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DB330"))) PPC_WEAK_FUNC(sub_830DB330);
PPC_FUNC_IMPL(__imp__sub_830DB330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830DB338;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f1,-23848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x830e07f0
	ctx.lr = 0x830DB360;
	sub_830E07F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x830db37c
	if (!cr6.lt) goto loc_830DB37C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830DB37C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830DB390;
	sub_82A22B40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,68
	ctx.r4.s64 = ctx.r11.s64 + 68;
	// bl 0x82a3fca8
	ctx.lr = 0x830DB3A0;
	sub_82A3FCA8(ctx, base);
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r28,292(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4460(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4460);
	// ble cr6,0x830db3e0
	if (!cr6.gt) goto loc_830DB3E0;
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830DB3C4;
	sub_82A22B40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,68
	ctx.r4.s64 = ctx.r11.s64 + 68;
	// bl 0x82a3fca8
	ctx.lr = 0x830DB3D4;
	sub_82A3FCA8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// b 0x830db44c
	goto loc_830DB44C;
loc_830DB3E0:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x830db3f0
	if (cr6.eq) goto loc_830DB3F0;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830db440
	if (!cr6.eq) goto loc_830DB440;
loc_830DB3F0:
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a227f0
	ctx.lr = 0x830DB3FC;
	sub_82A227F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830db43c
	if (cr6.eq) goto loc_830DB43C;
	// lwz r11,5388(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5388);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x830db43c
	if (cr6.eq) goto loc_830DB43C;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a227f0
	ctx.lr = 0x830DB420;
	sub_82A227F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// bl 0x82a3fb88
	ctx.lr = 0x830DB430;
	sub_82A3FB88(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// b 0x830db44c
	goto loc_830DB44C;
loc_830DB43C:
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
loc_830DB440:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f13,8152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
loc_830DB44C:
	// lfs f12,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f1,f7
	ctx.f1.f64 = double(float(sqrt(ctx.f7.f64)));
	// bl 0x830b3360
	ctx.lr = 0x830DB474;
	sub_830B3360(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DB480"))) PPC_WEAK_FUNC(sub_830DB480);
PPC_FUNC_IMPL(__imp__sub_830DB480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	ctx.lr = 0x830DB490;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// bge cr6,0x830db53c
	if (!cr6.lt) goto loc_830DB53C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830DB4B8;
	sub_82A0C710(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lfs f2,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f2
	ctx.f3.f64 = ctx.f2.f64;
	// fmr f4,f2
	ctx.f4.f64 = ctx.f2.f64;
	// fcmpu cr6,f31,f2
	cr6.compare(ctx.f31.f64, ctx.f2.f64);
	// beq cr6,0x830db4f4
	if (cr6.eq) goto loc_830DB4F4;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// fabs f0,f31
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f31,f0
	ctx.f10.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fmuls f3,f10,f11
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
loc_830DB4F4:
	// fcmpu cr6,f30,f2
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f2.f64);
	// beq cr6,0x830db51c
	if (cr6.eq) goto loc_830DB51C;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// fabs f0,f30
	ctx.f0.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fdivs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f4,f13,f10
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
loc_830DB51C:
	// fmr f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x825c28d8
	ctx.lr = 0x830DB524;
	sub_825C28D8(ctx, base);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x830DB52C;
	sub_825CE9F8(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x830db540
	if (!cr6.gt) goto loc_830DB540;
loc_830DB53C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DB540:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce7c4
	ctx.lr = 0x830DB54C;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DB558"))) PPC_WEAK_FUNC(sub_830DB558);
PPC_FUNC_IMPL(__imp__sub_830DB558) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce774
	ctx.lr = 0x830DB570;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,19176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19176);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f2,f31
	cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// beq cr6,0x830db5ac
	if (cr6.eq) goto loc_830DB5AC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f2,f0
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
loc_830DB5AC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,2
	ctx.r9.s64 = 2;
	// lfs f28,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
loc_830DB5CC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x830db608
	if (cr6.gt) goto loc_830DB608;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830db5f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830DB5F4;
	// bdzf 4*cr6+eq,0x830db5fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830DB5FC;
	// bne cr6,0x830db604
	if (!cr6.eq) goto loc_830DB604;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// b 0x830db608
	goto loc_830DB608;
loc_830DB5F4:
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// b 0x830db608
	goto loc_830DB608;
loc_830DB5FC:
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// b 0x830db608
	goto loc_830DB608;
loc_830DB604:
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
loc_830DB608:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x830db5cc
	if (!cr0.eq) goto loc_830DB5CC;
	// cmplwi cr6,r6,4
	cr6.compare<uint32_t>(ctx.r6.u32, 4, xer);
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x830db63c
	if (cr6.eq) goto loc_830DB63C;
	// cmplwi cr6,r6,5
	cr6.compare<uint32_t>(ctx.r6.u32, 5, xer);
	// beq cr6,0x830db684
	if (cr6.eq) goto loc_830DB684;
	// bl 0x830db480
	ctx.lr = 0x830DB638;
	sub_830DB480(ctx, base);
	// b 0x830db6cc
	goto loc_830DB6CC;
loc_830DB63C:
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x830db480
	ctx.lr = 0x830DB648;
	sub_830DB480(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830db67c
	if (!cr6.eq) goto loc_830DB67C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x830db480
	ctx.lr = 0x830DB670;
	sub_830DB480(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830db6c8
	if (cr6.eq) goto loc_830DB6C8;
loc_830DB67C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830db6cc
	goto loc_830DB6CC;
loc_830DB684:
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x830db480
	ctx.lr = 0x830DB690;
	sub_830DB480(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830db67c
	if (!cr6.eq) goto loc_830DB67C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x830db480
	ctx.lr = 0x830DB6B8;
	sub_830DB480(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830db6cc
	if (!cr6.eq) goto loc_830DB6CC;
loc_830DB6C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DB6CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce7c0
	ctx.lr = 0x830DB6D8;
	__restfpr_27(ctx, base);
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

__attribute__((alias("__imp__sub_830DB6EC"))) PPC_WEAK_FUNC(sub_830DB6EC);
PPC_FUNC_IMPL(__imp__sub_830DB6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DB6F0"))) PPC_WEAK_FUNC(sub_830DB6F0);
PPC_FUNC_IMPL(__imp__sub_830DB6F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830DB6F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830db718
	if (cr6.lt) goto loc_830DB718;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830db71c
	if (cr6.lt) goto loc_830DB71C;
loc_830DB718:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DB71C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830db894
	if (cr6.eq) goto loc_830DB894;
	// cmplwi cr6,r29,6
	cr6.compare<uint32_t>(ctx.r29.u32, 6, xer);
	// bge cr6,0x830db894
	if (!cr6.lt) goto loc_830DB894;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lwz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bge cr6,0x830db748
	if (!cr6.lt) goto loc_830DB748;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830db770
	goto loc_830DB770;
loc_830DB748:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x830db758
	if (!cr6.lt) goto loc_830DB758;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830db770
	goto loc_830DB770;
loc_830DB758:
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
loc_830DB770:
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830DB77C;
	sub_82A0C710(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r4,252(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bne cr6,0x830db7bc
	if (!cr6.eq) goto loc_830DB7BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x830DB79C;
	sub_82A0C788(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f1,-30856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30856);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a36180
	ctx.lr = 0x830DB7B0;
	sub_82A36180(ctx, base);
	// bl 0x825c2950
	ctx.lr = 0x830DB7B4;
	sub_825C2950(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830DB7BC:
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// bne cr6,0x830db7d8
	if (!cr6.eq) goto loc_830DB7D8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ceaf8
	ctx.lr = 0x830DB7D0;
	sub_825CEAF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830DB7D8:
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// bne cr6,0x830db7f4
	if (!cr6.eq) goto loc_830DB7F4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826c3ed0
	ctx.lr = 0x830DB7EC;
	sub_826C3ED0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830DB7F4:
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// bne cr6,0x830db80c
	if (!cr6.eq) goto loc_830DB80C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a407e0
	ctx.lr = 0x830DB804;
	sub_82A407E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830DB80C:
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// bne cr6,0x830db864
	if (!cr6.eq) goto loc_830DB864;
	// addi r10,r31,21464
	ctx.r10.s64 = ctx.r31.s64 + 21464;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,20156
	ctx.r11.s64 = ctx.r11.s64 + 20156;
	// lfsx f13,r9,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x830db84c
	if (!cr6.lt) goto loc_830DB84C;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830DB84C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x830db858
	if (cr6.lt) goto loc_830DB858;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_830DB858:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830DB864:
	// cmplwi cr6,r29,5
	cr6.compare<uint32_t>(ctx.r29.u32, 5, xer);
	// bne cr6,0x830db89c
	if (!cr6.eq) goto loc_830DB89C;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f4,8164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8164);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8156);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x825c3ec0
	ctx.lr = 0x830DB888;
	sub_825C3EC0(ctx, base);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830DB894:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
loc_830DB89C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DB8A4"))) PPC_WEAK_FUNC(sub_830DB8A4);
PPC_FUNC_IMPL(__imp__sub_830DB8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DB8A8"))) PPC_WEAK_FUNC(sub_830DB8A8);
PPC_FUNC_IMPL(__imp__sub_830DB8A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830DB8B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r3,-3564(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r29,6112(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// bge cr6,0x830db8dc
	if (!cr6.lt) goto loc_830DB8DC;
loc_830DB8D4:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830db8fc
	goto loc_830DB8FC;
loc_830DB8DC:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// blt cr6,0x830db8d4
	if (cr6.lt) goto loc_830DB8D4;
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
loc_830DB8FC:
	// bl 0x82a0c710
	ctx.lr = 0x830DB900;
	sub_82A0C710(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r4,252(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82a40840
	ctx.lr = 0x830DB914;
	sub_82A40840(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825ca600
	ctx.lr = 0x830DB91C;
	sub_825CA600(ctx, base);
	// fsqrts f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(sqrt(ctx.f1.f64)));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f0,30444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30444);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-23488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23488);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fdivs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fsubs f1,f13,f9
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DB948"))) PPC_WEAK_FUNC(sub_830DB948);
PPC_FUNC_IMPL(__imp__sub_830DB948) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x830db984
	if (cr6.lt) goto loc_830DB984;
	// cmpwi cr6,r6,22
	cr6.compare<int32_t>(ctx.r6.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830db988
	if (cr6.lt) goto loc_830DB988;
loc_830DB984:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DB988:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830db99c
	if (!cr6.eq) goto loc_830DB99C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830dba10
	goto loc_830DBA10;
loc_830DB99C:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bge cr6,0x830db9ac
	if (!cr6.lt) goto loc_830DB9AC;
loc_830DB9A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830db9cc
	goto loc_830DB9CC;
loc_830DB9AC:
	// cmpwi cr6,r6,11
	cr6.compare<int32_t>(ctx.r6.s32, 11, xer);
	// blt cr6,0x830db9a4
	if (cr6.lt) goto loc_830DB9A4;
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r6
	xer.ca = ctx.r6.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r6.s64 - ctx.r11.s64;
	// eqv r9,r11,r6
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r6.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
loc_830DB9CC:
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830DB9D8;
	sub_82A0C710(ctx, base);
	// lbz r10,252(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r7,6112(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f10,f12,f30,f11
	ctx.f10.f64 = double(float(-(ctx.f12.f64 * ctx.f30.f64 - ctx.f11.f64)));
	// fabs f1,f10
	ctx.f1.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// bl 0x830b3360
	ctx.lr = 0x830DBA10;
	sub_830B3360(ctx, base);
loc_830DBA10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_830DBA30"))) PPC_WEAK_FUNC(sub_830DBA30);
PPC_FUNC_IMPL(__imp__sub_830DBA30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x830DBA38;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830dba60
	if (cr6.eq) goto loc_830DBA60;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
loc_830DBA60:
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r24,292(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x830dba98
	if (!cr6.eq) goto loc_830DBA98;
loc_830DBA74:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x830dbca4
	if (cr6.eq) goto loc_830DBCA4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830DBA98:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r23,12(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x830dba74
	if (cr6.eq) goto loc_830DBA74;
	// lwz r25,32(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x830dba74
	if (cr6.eq) goto loc_830DBA74;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt cr6,0x830dbacc
	if (cr6.lt) goto loc_830DBACC;
	// cmpwi cr6,r28,22
	cr6.compare<int32_t>(ctx.r28.s32, 22, xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// blt cr6,0x830dbad0
	if (cr6.lt) goto loc_830DBAD0;
loc_830DBACC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DBAD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dbc98
	if (cr6.eq) goto loc_830DBC98;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge cr6,0x830dbaec
	if (!cr6.lt) goto loc_830DBAEC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830dbb14
	goto loc_830DBB14;
loc_830DBAEC:
	// cmpwi cr6,r28,11
	cr6.compare<int32_t>(ctx.r28.s32, 11, xer);
	// bge cr6,0x830dbafc
	if (!cr6.lt) goto loc_830DBAFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830dbb14
	goto loc_830DBB14;
loc_830DBAFC:
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
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
loc_830DBB14:
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82a0c710
	ctx.lr = 0x830DBB20;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c710
	ctx.lr = 0x830DBB34;
	sub_82A0C710(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830dbc98
	if (cr6.eq) goto loc_830DBC98;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830dbc98
	if (cr6.eq) goto loc_830DBC98;
	// lbz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 252);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// bl 0x82a0c788
	ctx.lr = 0x830DBB6C;
	sub_82A0C788(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830dbca4
	if (cr6.eq) goto loc_830DBCA4;
	// lfs f0,1280(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x830dbca4
	if (cr6.lt) goto loc_830DBCA4;
	// lfs f13,8144(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x830dbca4
	if (cr6.lt) goto loc_830DBCA4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a29b60
	ctx.lr = 0x830DBBB0;
	sub_82A29B60(ctx, base);
	// mulli r11,r30,11
	ctx.r11.s64 = ctx.r30.s64 * 11;
	// add. r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt 0x830dbbc8
	if (cr0.lt) goto loc_830DBBC8;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// blt cr6,0x830dbbcc
	if (cr6.lt) goto loc_830DBBCC;
loc_830DBBC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DBBCC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dbc98
	if (cr6.eq) goto loc_830DBC98;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x830DBBE0;
	sub_82A0C788(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830dbc98
	if (cr6.eq) goto loc_830DBC98;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lfs f0,64(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x830dbc50
	if (!cr6.gt) goto loc_830DBC50;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x830dbc14
	if (!cr6.lt) goto loc_830DBC14;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_830DBC14:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,1280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x830dbc84
	if (!cr6.lt) goto loc_830DBC84;
	// lfs f0,1280(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x830dbc84
	if (!cr6.lt) goto loc_830DBC84;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-104(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830DBC50:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x830dbc5c
	if (!cr6.gt) goto loc_830DBC5C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_830DBC5C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,1280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x830dbc84
	if (!cr6.gt) goto loc_830DBC84;
	// lfs f0,1280(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x830dbc84
	if (!cr6.gt) goto loc_830DBC84;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_830DBC84:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830DBC98:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x830dbca4
	if (cr6.eq) goto loc_830DBCA4;
	// stb r22,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r22.u8);
loc_830DBCA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DBCB8"))) PPC_WEAK_FUNC(sub_830DBCB8);
PPC_FUNC_IMPL(__imp__sub_830DBCB8) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830dbce4
	if (cr6.lt) goto loc_830DBCE4;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dbce8
	if (cr6.lt) goto loc_830DBCE8;
loc_830DBCE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DBCE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dbd3c
	if (cr6.eq) goto loc_830DBD3C;
	// clrlwi r31,r5,24
	ctx.r31.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// bge cr6,0x830dbd3c
	if (!cr6.lt) goto loc_830DBD3C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x830DBD0C;
	sub_82A0C7B0(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// lbz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// addi r9,r31,5
	ctx.r9.s64 = ctx.r31.s64 + 5;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwzx r5,r7,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x827b4418
	ctx.lr = 0x830DBD38;
	sub_827B4418(ctx, base);
	// b 0x830dbd40
	goto loc_830DBD40;
loc_830DBD3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DBD40:
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

__attribute__((alias("__imp__sub_830DBD58"))) PPC_WEAK_FUNC(sub_830DBD58);
PPC_FUNC_IMPL(__imp__sub_830DBD58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,6112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830dbd7c
	if (!cr6.eq) goto loc_830DBD7C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830DBD7C:
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lfs f13,36(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r10,20172
	ctx.r9.s64 = ctx.r10.s64 + 20172;
	// lfs f0,20172(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20172);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fabs f9,f11
	ctx.f9.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f9
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// blt cr6,0x830dbdc8
	if (cr6.lt) goto loc_830DBDC8;
	// lfs f12,40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fabs f8,f11
	ctx.f8.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f8
	cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// bgelr cr6
	if (!cr6.lt) return;
loc_830DBDC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DBDD0"))) PPC_WEAK_FUNC(sub_830DBDD0);
PPC_FUNC_IMPL(__imp__sub_830DBDD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addis r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 65536;
	// addi r11,r11,26124
	ctx.r11.s64 = ctx.r11.s64 + 26124;
	// lbz r9,13(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830dbe00
	if (!cr6.eq) goto loc_830DBE00;
	// lbz r11,14(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x830dbe04
	if (cr6.eq) goto loc_830DBE04;
loc_830DBE00:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830DBE04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dbecc
	if (cr6.eq) goto loc_830DBECC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830dbe24
	if (cr6.lt) goto loc_830DBE24;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dbe28
	if (cr6.lt) goto loc_830DBE28;
loc_830DBE24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DBE28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dbecc
	if (cr6.eq) goto loc_830DBECC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x830dbe44
	if (!cr6.lt) goto loc_830DBE44;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x830dbe6c
	goto loc_830DBE6C;
loc_830DBE44:
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// bge cr6,0x830dbe54
	if (!cr6.lt) goto loc_830DBE54;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x830dbe6c
	goto loc_830DBE6C;
loc_830DBE54:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r8,r5,31
	ctx.r8.u64 = ctx.r5.u32 & 0x1;
loc_830DBE6C:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,22620
	ctx.r9.u64 = ctx.r10.u64 | 22620;
loc_830DBE80:
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r4,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r5,r5,r10
	temp.u8 = (~ctx.r5.u32 + ctx.r10.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 & ctx.r11.u64;
	// mulli r10,r4,812
	ctx.r10.s64 = ctx.r4.s64 * 812;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpw cr6,r5,r8
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, xer);
	// beq cr6,0x830dbec4
	if (cr6.eq) goto loc_830DBEC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// blt cr6,0x830dbe80
	if (cr6.lt) goto loc_830DBE80;
	// blr 
	return;
loc_830DBEC4:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// blr 
	return;
loc_830DBECC:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DBED4"))) PPC_WEAK_FUNC(sub_830DBED4);
PPC_FUNC_IMPL(__imp__sub_830DBED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DBED8"))) PPC_WEAK_FUNC(sub_830DBED8);
PPC_FUNC_IMPL(__imp__sub_830DBED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830DBEE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addis r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 65536;
	// addi r28,r28,22272
	ctx.r28.s64 = ctx.r28.s64 + 22272;
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830dbf10
	if (!cr6.eq) goto loc_830DBF10;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DBF10:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r30,r11,22692
	ctx.r30.u64 = ctx.r11.u64 | 22692;
loc_830DBF24:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r31,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r4,0
	ctx.r4.s64 = 0;
	// subfe r6,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// and r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 & ctx.r31.u64;
	// mulli r10,r5,812
	ctx.r10.s64 = ctx.r5.s64 * 812;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// bl 0x82a44eb8
	ctx.lr = 0x830DBF58;
	sub_82A44EB8(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x830dbf88
	if (cr6.eq) goto loc_830DBF88;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(ctx.r27.u32, 2, xer);
	// blt cr6,0x830dbf24
	if (cr6.lt) goto loc_830DBF24;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DBF88:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DBF98"))) PPC_WEAK_FUNC(sub_830DBF98);
PPC_FUNC_IMPL(__imp__sub_830DBF98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// fabs f12,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lfs f0,21708(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21708);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,-10804(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -10804);
	ctx.f11.f64 = double(temp.f32);
	// lwz r7,6112(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f6,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fadds f8,f6,f10
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// fadds f9,f6,f11
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fcmpu cr6,f12,f7
	cr6.compare(ctx.f12.f64, ctx.f7.f64);
	// ble cr6,0x830dbfe8
	if (!cr6.gt) goto loc_830DBFE8;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x830dc010
	goto loc_830DC010;
loc_830DBFE8:
	// fadds f11,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x830dbffc
	if (!cr6.gt) goto loc_830DBFFC;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x830dc010
	goto loc_830DC010;
loc_830DBFFC:
	// fadds f13,f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x830dc010
	if (cr6.gt) goto loc_830DC010;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DC010:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x830dc020
	if (!cr6.gt) goto loc_830DC020;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x830dc040
	goto loc_830DC040;
loc_830DC020:
	// fcmpu cr6,f1,f9
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f9.f64);
	// ble cr6,0x830dc030
	if (!cr6.gt) goto loc_830DC030;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x830dc040
	goto loc_830DC040;
loc_830DC030:
	// fcmpu cr6,f1,f8
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f8.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x830dc040
	if (cr6.gt) goto loc_830DC040;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DC040:
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DC050"))) PPC_WEAK_FUNC(sub_830DC050);
PPC_FUNC_IMPL(__imp__sub_830DC050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830DC058;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,132(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830DC074;
	sub_82A22B40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830DC084;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x830dc0ac
	if (!cr6.gt) goto loc_830DC0AC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x830dc0a4
	if (!cr6.gt) goto loc_830DC0A4;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x830dc0ac
	if (!cr6.eq) goto loc_830DC0AC;
loc_830DC0A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830dc0b0
	goto loc_830DC0B0;
loc_830DC0AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DC0B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dc258
	if (cr6.eq) goto loc_830DC258;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x830dc0e8
	if (cr6.lt) goto loc_830DC0E8;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bge cr6,0x830dc0e8
	if (!cr6.lt) goto loc_830DC0E8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830dc0e8
	if (cr6.lt) goto loc_830DC0E8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dc0ec
	if (cr6.lt) goto loc_830DC0EC;
loc_830DC0E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DC0EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dc258
	if (cr6.eq) goto loc_830DC258;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830dc124
	if (cr6.lt) goto loc_830DC124;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x830dc124
	if (!cr6.lt) goto loc_830DC124;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830dc124
	if (cr6.lt) goto loc_830DC124;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dc128
	if (cr6.lt) goto loc_830DC128;
loc_830DC124:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DC128:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dc258
	if (cr6.eq) goto loc_830DC258;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x830dc150
	if (!cr6.eq) goto loc_830DC150;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830dc154
	if (cr6.eq) goto loc_830DC154;
loc_830DC150:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DC154:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830dc258
	if (!cr6.eq) goto loc_830DC258;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e0560
	ctx.lr = 0x830DC16C;
	sub_830E0560(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dc258
	if (cr6.eq) goto loc_830DC258;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x830dc190
	if (cr6.eq) goto loc_830DC190;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830dc194
	if (!cr6.eq) goto loc_830DC194;
loc_830DC190:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830DC194:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// subf r8,r4,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r4.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r3,-3564(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// rlwinm r29,r7,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x82a0c710
	ctx.lr = 0x830DC1B8;
	sub_82A0C710(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r31,252(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x830dc1e0
	if (!cr6.gt) goto loc_830DC1E0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x830dc1d8
	if (!cr6.gt) goto loc_830DC1D8;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x830dc1e0
	if (!cr6.eq) goto loc_830DC1E0;
loc_830DC1D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830dc1e4
	goto loc_830DC1E4;
loc_830DC1E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DC1E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dc22c
	if (cr6.eq) goto loc_830DC22C;
	// addi r4,r28,68
	ctx.r4.s64 = ctx.r28.s64 + 68;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a3fca8
	ctx.lr = 0x830DC1FC;
	sub_82A3FCA8(ctx, base);
	// extsb r9,r31
	ctx.r9.s64 = ctx.r31.s8;
	// lfs f11,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x830dc22c
	if (!cr6.lt) goto loc_830DC22C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_830DC22C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dc248
	if (cr6.eq) goto loc_830DC248;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x830dc24c
	if (!cr6.eq) goto loc_830DC24C;
loc_830DC248:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DC24C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830DC258:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DC264"))) PPC_WEAK_FUNC(sub_830DC264);
PPC_FUNC_IMPL(__imp__sub_830DC264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DC268"))) PPC_WEAK_FUNC(sub_830DC268);
PPC_FUNC_IMPL(__imp__sub_830DC268) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r9,r10,22488
	ctx.r9.u64 = ctx.r10.u64 | 22488;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x830dc2b0
	if (!cr6.eq) goto loc_830DC2B0;
loc_830DC298:
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
loc_830DC2B0:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,22536
	ctx.r9.u64 = ctx.r10.u64 | 22536;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830dc2d0
	if (cr6.lt) goto loc_830DC2D0;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dc2d4
	if (cr6.lt) goto loc_830DC2D4;
loc_830DC2D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DC2D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dc298
	if (cr6.eq) goto loc_830DC298;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x830DC2EC;
	sub_82A0C7B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830dc304
	if (cr6.eq) goto loc_830DC304;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x830dc304
	if (cr6.eq) goto loc_830DC304;
	// li r31,1
	ctx.r31.s64 = 1;
loc_830DC304:
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

__attribute__((alias("__imp__sub_830DC31C"))) PPC_WEAK_FUNC(sub_830DC31C);
PPC_FUNC_IMPL(__imp__sub_830DC31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DC320"))) PPC_WEAK_FUNC(sub_830DC320);
PPC_FUNC_IMPL(__imp__sub_830DC320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830DC328;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
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
	// blt cr6,0x830dc480
	if (cr6.lt) goto loc_830DC480;
	// cmpwi cr6,r5,8
	cr6.compare<int32_t>(ctx.r5.s32, 8, xer);
	// bge cr6,0x830dc480
	if (!cr6.lt) goto loc_830DC480;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830DC374;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x830dc398
	if (!cr6.gt) goto loc_830DC398;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x830dc390
	if (!cr6.gt) goto loc_830DC390;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x830dc398
	if (!cr6.eq) goto loc_830DC398;
loc_830DC390:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830dc39c
	goto loc_830DC39C;
loc_830DC398:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DC39C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dc480
	if (cr6.eq) goto loc_830DC480;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x830dc44c
	if (!cr6.eq) goto loc_830DC44C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addis r30,r27,1
	ctx.r30.s64 = ctx.r27.s64 + 65536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,22460
	ctx.r30.s64 = ctx.r30.s64 + 22460;
	// bl 0x82a22ba8
	ctx.lr = 0x830DC3C4;
	sub_82A22BA8(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82a2b388
	ctx.lr = 0x830DC3D0;
	sub_82A2B388(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dc3f0
	if (cr6.eq) goto loc_830DC3F0;
	// lfs f0,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// b 0x830dc474
	goto loc_830DC474;
loc_830DC3F0:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830dc404
	if (cr6.lt) goto loc_830DC404;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dc408
	if (cr6.lt) goto loc_830DC408;
loc_830DC404:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DC408:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// beq cr6,0x830dc434
	if (cr6.eq) goto loc_830DC434;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x830DC420;
	sub_82A0C788(ctx, base);
	// addi r10,r3,1280
	ctx.r10.s64 = ctx.r3.s64 + 1280;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// b 0x830dc474
	goto loc_830DC474;
loc_830DC434:
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,8196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8200);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8204);
	ctx.f12.f64 = double(temp.f32);
	// b 0x830dc474
	goto loc_830DC474;
loc_830DC44C:
	// addi r4,r29,-1
	ctx.r4.s64 = ctx.r29.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830DC458;
	sub_82A22B40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,68
	ctx.r4.s64 = ctx.r11.s64 + 68;
	// bl 0x82a3fca8
	ctx.lr = 0x830DC468;
	sub_82A3FCA8(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
loc_830DC474:
	// stfs f12,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_830DC480:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DC48C"))) PPC_WEAK_FUNC(sub_830DC48C);
PPC_FUNC_IMPL(__imp__sub_830DC48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DC490"))) PPC_WEAK_FUNC(sub_830DC490);
PPC_FUNC_IMPL(__imp__sub_830DC490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830DC498;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830dc894
	if (cr6.lt) goto loc_830DC894;
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// bge cr6,0x830dc894
	if (!cr6.lt) goto loc_830DC894;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r28,132(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r26,12(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830DC4C8;
	sub_82A22B40(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x830dc4f0
	if (!cr6.gt) goto loc_830DC4F0;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// ble cr6,0x830dc4e8
	if (!cr6.gt) goto loc_830DC4E8;
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// bne cr6,0x830dc4f0
	if (!cr6.eq) goto loc_830DC4F0;
loc_830DC4E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830dc4f4
	goto loc_830DC4F4;
loc_830DC4F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DC4F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dc894
	if (cr6.eq) goto loc_830DC894;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x830dc52c
	if (!cr6.eq) goto loc_830DC52C;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DC52C:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x830dc54c
	if (!cr6.eq) goto loc_830DC54C;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DC54C:
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bne cr6,0x830dc56c
	if (!cr6.eq) goto loc_830DC56C;
	// addi r11,r10,-3
	ctx.r11.s64 = ctx.r10.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DC56C:
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// bne cr6,0x830dc5c4
	if (!cr6.eq) goto loc_830DC5C4;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830dc594
	if (!cr6.eq) goto loc_830DC594;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// beq cr6,0x830dc58c
	if (cr6.eq) goto loc_830DC58C;
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// bne cr6,0x830dc594
	if (!cr6.eq) goto loc_830DC594;
loc_830DC58C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830dc598
	goto loc_830DC598;
loc_830DC594:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DC598:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dc5b0
	if (cr6.eq) goto loc_830DC5B0;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830dc5b4
	if (cr6.eq) goto loc_830DC5B4;
loc_830DC5B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DC5B4:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DC5C4:
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// bne cr6,0x830dc61c
	if (!cr6.eq) goto loc_830DC61C;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830dc5ec
	if (!cr6.eq) goto loc_830DC5EC;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// beq cr6,0x830dc5e4
	if (cr6.eq) goto loc_830DC5E4;
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// bne cr6,0x830dc5ec
	if (!cr6.eq) goto loc_830DC5EC;
loc_830DC5E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830dc5f0
	goto loc_830DC5F0;
loc_830DC5EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DC5F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dc608
	if (cr6.eq) goto loc_830DC608;
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830dc60c
	if (cr6.eq) goto loc_830DC60C;
loc_830DC608:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DC60C:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DC61C:
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(ctx.r30.s32, 5, xer);
	// bne cr6,0x830dc63c
	if (!cr6.eq) goto loc_830DC63C;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DC63C:
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(ctx.r30.s32, 6, xer);
	// bne cr6,0x830dc65c
	if (!cr6.eq) goto loc_830DC65C;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DC65C:
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(ctx.r30.s32, 7, xer);
	// bne cr6,0x830dc67c
	if (!cr6.eq) goto loc_830DC67C;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DC67C:
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// bne cr6,0x830dc69c
	if (!cr6.eq) goto loc_830DC69C;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DC69C:
	// cmpwi cr6,r30,9
	cr6.compare<int32_t>(ctx.r30.s32, 9, xer);
	// bne cr6,0x830dc6bc
	if (!cr6.eq) goto loc_830DC6BC;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DC6BC:
	// cmpwi cr6,r30,10
	cr6.compare<int32_t>(ctx.r30.s32, 10, xer);
	// bne cr6,0x830dc6ec
	if (!cr6.eq) goto loc_830DC6EC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x830dc6d8
	if (cr6.eq) goto loc_830DC6D8;
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830dc6dc
	if (cr6.eq) goto loc_830DC6DC;
loc_830DC6D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DC6DC:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DC6EC:
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// bne cr6,0x830dc72c
	if (!cr6.eq) goto loc_830DC72C;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830dc888
	if (!cr6.eq) goto loc_830DC888;
	// addi r4,r27,1
	ctx.r4.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// bge cr6,0x830dc888
	if (!cr6.lt) goto loc_830DC888;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830DC710;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x830dc888
	if (!cr6.eq) goto loc_830DC888;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DC72C:
	// cmpwi cr6,r30,12
	cr6.compare<int32_t>(ctx.r30.s32, 12, xer);
	// bne cr6,0x830dc7a4
	if (!cr6.eq) goto loc_830DC7A4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x830dc888
	if (!cr6.eq) goto loc_830DC888;
	// addi r4,r27,1
	ctx.r4.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// bge cr6,0x830dc888
	if (!cr6.lt) goto loc_830DC888;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830DC750;
	sub_82A22B40(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x830dc774
	if (!cr6.eq) goto loc_830DC774;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beq cr6,0x830dc778
	if (cr6.eq) goto loc_830DC778;
loc_830DC774:
	// li r9,0
	ctx.r9.s64 = 0;
loc_830DC778:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830dc888
	if (cr6.eq) goto loc_830DC888;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x830dc888
	if (!cr6.eq) goto loc_830DC888;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DC7A4:
	// cmpwi cr6,r30,13
	cr6.compare<int32_t>(ctx.r30.s32, 13, xer);
	// bne cr6,0x830dc7e8
	if (!cr6.eq) goto loc_830DC7E8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ori r9,r11,21984
	ctx.r9.u64 = ctx.r11.u64 | 21984;
	// lfs f13,-24912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r26,r9
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x830dc888
	if (!cr6.lt) goto loc_830DC888;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x830dc888
	if (!cr6.gt) goto loc_830DC888;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DC7E8:
	// cmpwi cr6,r30,14
	cr6.compare<int32_t>(ctx.r30.s32, 14, xer);
	// bne cr6,0x830dc824
	if (!cr6.eq) goto loc_830DC824;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// ori r9,r11,21984
	ctx.r9.u64 = ctx.r11.u64 | 21984;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r26,r9
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x830dc814
	if (cr6.gt) goto loc_830DC814;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DC814:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DC824:
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(ctx.r30.s32, 16, xer);
	// bne cr6,0x830dc86c
	if (!cr6.eq) goto loc_830DC86C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x830dc858
	if (cr6.eq) goto loc_830DC858;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x830dc858
	if (cr6.eq) goto loc_830DC858;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x830dc858
	if (cr6.eq) goto loc_830DC858;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830dc85c
	if (!cr6.eq) goto loc_830DC85C;
loc_830DC858:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830DC85C:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DC86C:
	// cmpwi cr6,r30,17
	cr6.compare<int32_t>(ctx.r30.s32, 17, xer);
	// bne cr6,0x830dc888
	if (!cr6.eq) goto loc_830DC888;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,-10
	ctx.r10.s64 = ctx.r11.s64 + -10;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r29,r9,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_830DC888:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DC894:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DC8A0"))) PPC_WEAK_FUNC(sub_830DC8A0);
PPC_FUNC_IMPL(__imp__sub_830DC8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830DC8A8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830dce0c
	if (cr6.lt) goto loc_830DCE0C;
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// bge cr6,0x830dce0c
	if (!cr6.lt) goto loc_830DCE0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r26,132(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830DC8E0;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x830dc908
	if (!cr6.gt) goto loc_830DC908;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x830dc900
	if (!cr6.gt) goto loc_830DC900;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x830dc908
	if (!cr6.eq) goto loc_830DC908;
loc_830DC900:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830dc90c
	goto loc_830DC90C;
loc_830DC908:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DC90C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dce0c
	if (cr6.eq) goto loc_830DCE0C;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// addi r4,r28,68
	ctx.r4.s64 = ctx.r28.s64 + 68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r27,6112(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// bl 0x82a3fca8
	ctx.lr = 0x830DC930;
	sub_82A3FCA8(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x830dc9ac
	if (!cr6.eq) goto loc_830DC9AC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// ori r10,r11,26292
	ctx.r10.u64 = ctx.r11.u64 | 26292;
	// ldx r4,r29,r10
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + ctx.r10.u32);
	// bl 0x82a2b388
	ctx.lr = 0x830DC94C;
	sub_82A2B388(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830dc964
	if (cr6.lt) goto loc_830DC964;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dc968
	if (cr6.lt) goto loc_830DC968;
loc_830DC964:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DC968:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dc998
	if (cr6.eq) goto loc_830DC998;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x830dc998
	if (cr6.eq) goto loc_830DC998;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x830DC988;
	sub_82A0C788(ctx, base);
	// addi r11,r3,1280
	ctx.r11.s64 = ctx.r3.s64 + 1280;
	// lfs f3,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f31,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// b 0x830dc9c4
	goto loc_830DC9C4;
loc_830DC998:
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f3,8196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	ctx.f3.f64 = double(temp.f32);
	// lfs f31,8204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8204);
	ctx.f31.f64 = double(temp.f32);
	// b 0x830dc9c4
	goto loc_830DC9C4;
loc_830DC9AC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830dc320
	ctx.lr = 0x830DC9BC;
	sub_830DC320(ctx, base);
	// lfs f3,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f31,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
loc_830DC9C4:
	// lfs f2,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825c28d8
	ctx.lr = 0x830DC9D4;
	sub_825C28D8(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f13,28(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x830dc9f0
	if (cr6.gt) goto loc_830DC9F0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DC9F0:
	// fabs f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x830dca08
	if (cr6.gt) goto loc_830DCA08;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DCA08:
	// fabs f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lfs f11,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blt cr6,0x830dca24
	if (cr6.lt) goto loc_830DCA24;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DCA24:
	// fmuls f12,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f3,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f12,f3
	cr6.compare(ctx.f12.f64, ctx.f3.f64);
	// blt cr6,0x830dca44
	if (cr6.lt) goto loc_830DCA44;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DCA44:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r25,9
	cr6.compare<uint32_t>(ctx.r25.u32, 9, xer);
	// bgt cr6,0x830dcdfc
	if (cr6.gt) goto loc_830DCDFC;
	// lis r12,-31986
	ctx.r12.s64 = -2096234496;
	// rlwinm r0,r25,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13712
	ctx.r12.s64 = ctx.r12.s64 + -13712;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r25.u32) {
	case 0:
		goto loc_830DCA98;
	case 1:
		goto loc_830DCB1C;
	case 2:
		goto loc_830DCBA8;
	case 3:
		goto loc_830DCBBC;
	case 4:
		goto loc_830DCC20;
	case 5:
		goto loc_830DCC84;
	case 6:
		goto loc_830DCCEC;
	case 7:
		goto loc_830DCD54;
	case 8:
		goto loc_830DCD94;
	case 9:
		goto loc_830DCDD4;
	default:
		return;
	}
	// lwz r24,-13672(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13672);
	// lwz r24,-13540(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13540);
	// lwz r24,-13400(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13400);
	// lwz r24,-13380(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13380);
	// lwz r24,-13280(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13280);
	// lwz r24,-13180(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13180);
	// lwz r24,-13076(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -13076);
	// lwz r24,-12972(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -12972);
	// lwz r24,-12908(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -12908);
	// lwz r24,-12844(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + -12844);
loc_830DCA98:
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830dcdfc
	if (!cr6.eq) goto loc_830DCDFC;
	// fabs f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f11,20(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x830dcdfc
	if (!cr6.gt) goto loc_830DCDFC;
	// fsubs f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f11,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,6500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6500);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fabs f9,f12
	ctx.f9.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f10
	cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// bgt cr6,0x830dcae0
	if (cr6.gt) goto loc_830DCAE0;
	// fabs f0,f31
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x830dcae4
	if (!cr6.gt) goto loc_830DCAE4;
loc_830DCAE0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830DCAE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dcdfc
	if (cr6.eq) goto loc_830DCDFC;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830dcdfc
	if (!cr6.eq) goto loc_830DCDFC;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dcdfc
	if (cr6.eq) goto loc_830DCDFC;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830DCB1C:
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x830dcdfc
	if (cr6.eq) goto loc_830DCDFC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f1,21708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21708);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x830e07f0
	ctx.lr = 0x830DCB44;
	sub_830E07F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830dcdfc
	if (cr6.lt) goto loc_830DCDFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830DCB58;
	sub_82A22B40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,68
	ctx.r4.s64 = ctx.r11.s64 + 68;
	// bl 0x82a3fca8
	ctx.lr = 0x830DCB68;
	sub_82A3FCA8(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dcdfc
	if (cr6.eq) goto loc_830DCDFC;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dcdfc
	if (cr6.eq) goto loc_830DCDFC;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,28(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x830dcdfc
	if (!cr6.gt) goto loc_830DCDFC;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830DCBA8:
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830DCBBC:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830dcbe8
	if (cr6.lt) goto loc_830DCBE8;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x830dcbe8
	if (!cr6.lt) goto loc_830DCBE8;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830dcbe8
	if (cr6.lt) goto loc_830DCBE8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dcbec
	if (cr6.lt) goto loc_830DCBEC;
loc_830DCBE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DCBEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dcdfc
	if (cr6.eq) goto loc_830DCDFC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f4,19176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19176);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x830db480
	ctx.lr = 0x830DCC10;
	sub_830DB480(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830DCC20:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830dcc4c
	if (cr6.lt) goto loc_830DCC4C;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x830dcc4c
	if (!cr6.lt) goto loc_830DCC4C;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830dcc4c
	if (cr6.lt) goto loc_830DCC4C;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dcc50
	if (cr6.lt) goto loc_830DCC50;
loc_830DCC4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DCC50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dcdfc
	if (cr6.eq) goto loc_830DCDFC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f4,19176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19176);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x830db480
	ctx.lr = 0x830DCC74;
	sub_830DB480(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830DCC84:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830dccb0
	if (cr6.lt) goto loc_830DCCB0;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x830dccb0
	if (!cr6.lt) goto loc_830DCCB0;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830dccb0
	if (cr6.lt) goto loc_830DCCB0;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dccb4
	if (cr6.lt) goto loc_830DCCB4;
loc_830DCCB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DCCB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dcdfc
	if (cr6.eq) goto loc_830DCDFC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f2,f3
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f3.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f4,19176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19176);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x830db480
	ctx.lr = 0x830DCCDC;
	sub_830DB480(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830DCCEC:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830dcd18
	if (cr6.lt) goto loc_830DCD18;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x830dcd18
	if (!cr6.lt) goto loc_830DCD18;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830dcd18
	if (cr6.lt) goto loc_830DCD18;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dcd1c
	if (cr6.lt) goto loc_830DCD1C;
loc_830DCD18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DCD1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dcdfc
	if (cr6.eq) goto loc_830DCDFC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f2,f3
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f3.f64;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f4,19176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19176);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x830db480
	ctx.lr = 0x830DCD44;
	sub_830DB480(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830DCD54:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dcdf4
	if (cr6.eq) goto loc_830DCDF4;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830dcdf4
	if (!cr6.eq) goto loc_830DCDF4;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830dcdf8
	if (cr6.eq) goto loc_830DCDF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830DCD94:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dcdf4
	if (cr6.eq) goto loc_830DCDF4;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830dcdf4
	if (!cr6.eq) goto loc_830DCDF4;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x830dcdf8
	if (!cr6.eq) goto loc_830DCDF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830DCDD4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f31
	ctx.f12.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blt cr6,0x830dcdf8
	if (cr6.lt) goto loc_830DCDF8;
loc_830DCDF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DCDF8:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
loc_830DCDFC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830DCE0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DCE1C"))) PPC_WEAK_FUNC(sub_830DCE1C);
PPC_FUNC_IMPL(__imp__sub_830DCE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DCE20"))) PPC_WEAK_FUNC(sub_830DCE20);
PPC_FUNC_IMPL(__imp__sub_830DCE20) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830dcf54
	if (cr6.eq) goto loc_830DCF54;
	// lwz r11,4460(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4460);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830dcf54
	if (!cr6.eq) goto loc_830DCF54;
	// lwz r11,5352(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5352);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x830dcf54
	if (cr6.gt) goto loc_830DCF54;
	// lwz r11,5348(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5348);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830dcf54
	if (!cr6.eq) goto loc_830DCF54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x830dce90
	if (!cr6.eq) goto loc_830DCE90;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f31,-11316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11316);
	ctx.f31.f64 = double(temp.f32);
loc_830DCE90:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addis r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 65536;
	// addi r31,r31,24608
	ctx.r31.s64 = ctx.r31.s64 + 24608;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830dcf54
	if (cr6.eq) goto loc_830DCF54;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// srawi r8,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830dcf54
	if (cr6.eq) goto loc_830DCF54;
	// srawi r8,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830dcf54
	if (cr6.eq) goto loc_830DCF54;
	// srawi r8,r11,7
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 7;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830dcf54
	if (cr6.eq) goto loc_830DCF54;
	// srawi r11,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x830dcf54
	if (!cr6.eq) goto loc_830DCF54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830dcf1c
	if (cr6.lt) goto loc_830DCF1C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830dcf1c
	if (!cr6.lt) goto loc_830DCF1C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830dcf1c
	if (cr6.lt) goto loc_830DCF1C;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dcf20
	if (cr6.lt) goto loc_830DCF20;
loc_830DCF1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DCF20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dcf54
	if (cr6.eq) goto loc_830DCF54;
	// lwz r11,4472(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4472);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x830dffc8
	ctx.lr = 0x830DCF38;
	sub_830DFFC8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x830dcf54
	if (!cr6.gt) goto loc_830DCF54;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a2a400
	ctx.lr = 0x830DCF50;
	sub_82A2A400(ctx, base);
	// b 0x830dcf58
	goto loc_830DCF58;
loc_830DCF54:
	// li r3,255
	ctx.r3.s64 = 255;
loc_830DCF58:
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

__attribute__((alias("__imp__sub_830DCF74"))) PPC_WEAK_FUNC(sub_830DCF74);
PPC_FUNC_IMPL(__imp__sub_830DCF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DCF78"))) PPC_WEAK_FUNC(sub_830DCF78);
PPC_FUNC_IMPL(__imp__sub_830DCF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830DCF80;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r29,132(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22a30
	ctx.lr = 0x830DCFA0;
	sub_82A22A30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830dd040
	if (cr6.eq) goto loc_830DD040;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// blt cr6,0x830dd040
	if (cr6.lt) goto loc_830DD040;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x830dd040
	if (!cr6.lt) goto loc_830DD040;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830DCFCC;
	sub_82A229E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830dd040
	if (cr6.eq) goto loc_830DD040;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// addis r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 65536;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r3,27316
	ctx.r3.s64 = ctx.r3.s64 + 27316;
	// bl 0x82a4cc78
	ctx.lr = 0x830DCFFC;
	sub_82A4CC78(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DD008:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// bne cr6,0x830dd028
	if (!cr6.eq) goto loc_830DD028;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_830DD028:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x830dd008
	if (cr6.lt) goto loc_830DD008;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830DD040:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DD04C"))) PPC_WEAK_FUNC(sub_830DD04C);
PPC_FUNC_IMPL(__imp__sub_830DD04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DD050"))) PPC_WEAK_FUNC(sub_830DD050);
PPC_FUNC_IMPL(__imp__sub_830DD050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830DD058;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// mulli r27,r4,11
	ctx.r27.s64 = ctx.r4.s64 * 11;
	// lwz r28,292(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
loc_830DD07C:
	// add. r31,r27,r30
	ctx.r31.u64 = ctx.r27.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x830dd090
	if (cr0.lt) goto loc_830DD090;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dd094
	if (cr6.lt) goto loc_830DD094;
loc_830DD090:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DD094:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dd168
	if (cr6.eq) goto loc_830DD168;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830dd0b4
	if (cr6.lt) goto loc_830DD0B4;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dd0b8
	if (cr6.lt) goto loc_830DD0B8;
loc_830DD0B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DD0B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dd0d8
	if (cr6.eq) goto loc_830DD0D8;
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830dd0dc
	goto loc_830DD0DC;
loc_830DD0D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DD0DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dd168
	if (cr6.eq) goto loc_830DD168;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82a29580
	ctx.lr = 0x830DD0F4;
	sub_82A29580(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x830dd148
	if (cr6.eq) goto loc_830DD148;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x830dd148
	if (cr6.eq) goto loc_830DD148;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x830dd120
	if (cr6.eq) goto loc_830DD120;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x830dd120
	if (cr6.eq) goto loc_830DD120;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x830dd168
	if (!cr6.eq) goto loc_830DD168;
loc_830DD120:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d6de8
	ctx.lr = 0x830DD134;
	sub_830D6DE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dd168
	if (cr6.eq) goto loc_830DD168;
	// li r5,7
	ctx.r5.s64 = 7;
	// b 0x830dd14c
	goto loc_830DD14C;
loc_830DD148:
	// li r5,4
	ctx.r5.s64 = 4;
loc_830DD14C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d6de8
	ctx.lr = 0x830DD15C;
	sub_830D6DE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830dd178
	if (!cr6.eq) goto loc_830DD178;
loc_830DD168:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x830dd07c
	if (cr6.lt) goto loc_830DD07C;
	// b 0x830dd17c
	goto loc_830DD17C;
loc_830DD178:
	// li r26,1
	ctx.r26.s64 = 1;
loc_830DD17C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_830DD180:
	// add. r31,r27,r30
	ctx.r31.u64 = ctx.r27.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x830dd194
	if (cr0.lt) goto loc_830DD194;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dd198
	if (cr6.lt) goto loc_830DD198;
loc_830DD194:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DD198:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dd22c
	if (cr6.eq) goto loc_830DD22C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830dd1b8
	if (cr6.lt) goto loc_830DD1B8;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dd1bc
	if (cr6.lt) goto loc_830DD1BC;
loc_830DD1B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DD1BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dd1dc
	if (cr6.eq) goto loc_830DD1DC;
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830dd1e0
	goto loc_830DD1E0;
loc_830DD1DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DD1E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dd22c
	if (cr6.eq) goto loc_830DD22C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82a29580
	ctx.lr = 0x830DD1F8;
	sub_82A29580(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x830dd20c
	if (cr6.eq) goto loc_830DD20C;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x830dd22c
	if (!cr6.eq) goto loc_830DD22C;
loc_830DD20C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d6de8
	ctx.lr = 0x830DD220;
	sub_830D6DE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830dd23c
	if (!cr6.eq) goto loc_830DD23C;
loc_830DD22C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x830dd180
	if (cr6.lt) goto loc_830DD180;
	// b 0x830dd240
	goto loc_830DD240;
loc_830DD23C:
	// li r25,1
	ctx.r25.s64 = 1;
loc_830DD240:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dd25c
	if (cr6.eq) goto loc_830DD25C;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830dd260
	if (!cr6.eq) goto loc_830DD260;
loc_830DD25C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DD260:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DD268"))) PPC_WEAK_FUNC(sub_830DD268);
PPC_FUNC_IMPL(__imp__sub_830DD268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830DD270;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r28,292(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x830dd29c
	if (!cr6.eq) goto loc_830DD29C;
loc_830DD290:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830DD29C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,132(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830dd290
	if (cr6.eq) goto loc_830DD290;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a22a30
	ctx.lr = 0x830DD2B8;
	sub_82A22A30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830dd290
	if (cr6.eq) goto loc_830DD290;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830DD2D0;
	sub_82A229E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830dd290
	if (cr6.eq) goto loc_830DD290;
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x830dd290
	if (!cr6.lt) goto loc_830DD290;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// bl 0x82a2b388
	ctx.lr = 0x830DD300;
	sub_82A2B388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r28,5868
	ctx.r3.s64 = ctx.r28.s64 + 5868;
	// bl 0x82a49338
	ctx.lr = 0x830DD310;
	sub_82A49338(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830dd290
	if (cr6.eq) goto loc_830DD290;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x830dd344
	if (!cr6.eq) goto loc_830DD344;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830da410
	ctx.lr = 0x830DD334;
	sub_830DA410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dd344
	if (cr6.eq) goto loc_830DD344;
	// li r27,1
	ctx.r27.s64 = 1;
loc_830DD344:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DD350"))) PPC_WEAK_FUNC(sub_830DD350);
PPC_FUNC_IMPL(__imp__sub_830DD350) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22a30
	ctx.lr = 0x830DD37C;
	sub_82A22A30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830dd454
	if (cr6.eq) goto loc_830DD454;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830DD394;
	sub_82A229E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830dd454
	if (cr6.eq) goto loc_830DD454;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 40);
	// bl 0x82a2b388
	ctx.lr = 0x830DD3B0;
	sub_82A2B388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x830dd3c4
	if (!cr6.lt) goto loc_830DD3C4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x830dd3ec
	goto loc_830DD3EC;
loc_830DD3C4:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x830dd3d4
	if (!cr6.lt) goto loc_830DD3D4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x830dd3ec
	goto loc_830DD3EC;
loc_830DD3D4:
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
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
loc_830DD3EC:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830dd400
	if (cr6.lt) goto loc_830DD400;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dd404
	if (cr6.lt) goto loc_830DD404;
loc_830DD400:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DD404:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dd454
	if (cr6.eq) goto loc_830DD454;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x830dd454
	if (!cr6.lt) goto loc_830DD454;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// addi r3,r11,5868
	ctx.r3.s64 = ctx.r11.s64 + 5868;
	// bl 0x82a49338
	ctx.lr = 0x830DD430;
	sub_82A49338(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830dd454
	if (cr6.eq) goto loc_830DD454;
	// mulli r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 * 44;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,-15
	ctx.r10.s64 = ctx.r11.s64 + -15;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x830dd458
	goto loc_830DD458;
loc_830DD454:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DD458:
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

__attribute__((alias("__imp__sub_830DD470"))) PPC_WEAK_FUNC(sub_830DD470);
PPC_FUNC_IMPL(__imp__sub_830DD470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830DD478;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830dd498
	if (!cr6.eq) goto loc_830DD498;
loc_830DD48C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830DD498:
	// lwz r29,132(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830dd48c
	if (cr6.eq) goto loc_830DD48C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r9,r11,22304
	ctx.r9.u64 = ctx.r11.u64 | 22304;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x830d9ad8
	ctx.lr = 0x830DD4BC;
	sub_830D9AD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830dd55c
	if (cr6.lt) goto loc_830DD55C;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a225b8
	ctx.lr = 0x830DD4D4;
	sub_82A225B8(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// bge cr6,0x830dd55c
	if (!cr6.lt) goto loc_830DD55C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830DD4EC;
	sub_82A229E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830DD500;
	sub_82A229E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830da790
	ctx.lr = 0x830DD510;
	sub_830DA790(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830da790
	ctx.lr = 0x830DD520;
	sub_830DA790(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dd560
	if (cr6.eq) goto loc_830DD560;
	// lbz r11,95(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 95);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830dd548
	if (!cr6.eq) goto loc_830DD548;
	// lbz r11,95(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 95);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830dd54c
	if (cr6.eq) goto loc_830DD54C;
loc_830DD548:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DD54C:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830DD55C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_830DD560:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DD56C"))) PPC_WEAK_FUNC(sub_830DD56C);
PPC_FUNC_IMPL(__imp__sub_830DD56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DD570"))) PPC_WEAK_FUNC(sub_830DD570);
PPC_FUNC_IMPL(__imp__sub_830DD570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830DD578;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x830dd614
	if (cr6.eq) goto loc_830DD614;
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830dd614
	if (cr6.eq) goto loc_830DD614;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830DD5AC;
	sub_82A229E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,22304
	ctx.r10.u64 = ctx.r11.u64 | 22304;
	// lbz r9,95(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 95);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// lwzx r4,r28,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// subfe r5,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x830d9400
	ctx.lr = 0x830DD5D0;
	sub_830D9400(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830dd614
	if (cr6.lt) goto loc_830DD614;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a225b8
	ctx.lr = 0x830DD5E8;
	sub_82A225B8(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// bge cr6,0x830dd614
	if (!cr6.lt) goto loc_830DD614;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830DD600;
	sub_82A229E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830da790
	ctx.lr = 0x830DD60C;
	sub_830DA790(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830DD614:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DD620"))) PPC_WEAK_FUNC(sub_830DD620);
PPC_FUNC_IMPL(__imp__sub_830DD620) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// addis r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 65536;
	// addi r31,r31,26292
	ctx.r31.s64 = ctx.r31.s64 + 26292;
	// bl 0x82a22b40
	ctx.lr = 0x830DD654;
	sub_82A22B40(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x830dd690
	if (cr6.eq) goto loc_830DD690;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x830dd690
	if (cr6.eq) goto loc_830DD690;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r8,4472(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4472);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x830dd688
	if (!cr6.eq) goto loc_830DD688;
	// li r30,1
	ctx.r30.s64 = 1;
loc_830DD688:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x830dd694
	goto loc_830DD694;
loc_830DD690:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DD694:
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

__attribute__((alias("__imp__sub_830DD6AC"))) PPC_WEAK_FUNC(sub_830DD6AC);
PPC_FUNC_IMPL(__imp__sub_830DD6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DD6B0"))) PPC_WEAK_FUNC(sub_830DD6B0);
PPC_FUNC_IMPL(__imp__sub_830DD6B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830DD6B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,132(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r28,12(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r29,292(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a22b40
	ctx.lr = 0x830DD6E4;
	sub_82A22B40(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r8,r9,26312
	ctx.r8.u64 = ctx.r9.u64 | 26312;
	// lwzx r6,r28,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bgt cr6,0x830dd79c
	if (cr6.gt) goto loc_830DD79C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830dd724
	if (cr6.eq) goto loc_830DD724;
	// lwz r10,4472(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4472);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// twllei r31,0
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// divwu r10,r11,r31
	ctx.r10.u32 = PPCDivide(ctx.r11.u32, ctx.r31.u32);
	// mullw r9,r10,r31
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// subf. r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x830dd79c
	if (!cr0.eq) goto loc_830DD79C;
loc_830DD724:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,20424
	ctx.r10.u64 = ctx.r11.u64 | 20424;
	// lwzx r11,r28,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x830dd740
	if (!cr6.lt) goto loc_830DD740;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x830dd768
	goto loc_830DD768;
loc_830DD740:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x830dd750
	if (!cr6.lt) goto loc_830DD750;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x830dd768
	goto loc_830DD768;
loc_830DD750:
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
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
loc_830DD768:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830dd77c
	if (cr6.lt) goto loc_830DD77C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dd780
	if (cr6.lt) goto loc_830DD780;
loc_830DD77C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DD780:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dd79c
	if (cr6.eq) goto loc_830DD79C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x830dd7a0
	if (cr6.eq) goto loc_830DD7A0;
loc_830DD79C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DD7A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DD7A8"))) PPC_WEAK_FUNC(sub_830DD7A8);
PPC_FUNC_IMPL(__imp__sub_830DD7A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830DD7B0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830dd9c0
	if (cr6.eq) goto loc_830DD9C0;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r26,6112(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x830dd9c0
	if (cr6.eq) goto loc_830DD9C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830DD7F0;
	sub_82A22B40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// bl 0x82a3fca8
	ctx.lr = 0x830DD800;
	sub_82A3FCA8(ctx, base);
	// ld r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// blt cr6,0x830dd834
	if (cr6.lt) goto loc_830DD834;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x830dd834
	if (!cr6.lt) goto loc_830DD834;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x830dd834
	if (cr6.lt) goto loc_830DD834;
	// cmpwi cr6,r27,32
	cr6.compare<int32_t>(ctx.r27.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dd838
	if (cr6.lt) goto loc_830DD838;
loc_830DD834:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DD838:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dd9c0
	if (cr6.eq) goto loc_830DD9C0;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x830dd9c0
	if (!cr6.lt) goto loc_830DD9C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22ba8
	ctx.lr = 0x830DD858;
	sub_82A22BA8(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82a2b388
	ctx.lr = 0x830DD864;
	sub_82A2B388(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830dd87c
	if (cr6.lt) goto loc_830DD87C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dd880
	if (cr6.lt) goto loc_830DD880;
loc_830DD87C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DD880:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dd89c
	if (cr6.eq) goto loc_830DD89C;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x830DD894;
	sub_82A0C788(ctx, base);
	// lfs f31,1288(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	ctx.f31.f64 = double(temp.f32);
	// b 0x830dd8a8
	goto loc_830DD8A8;
loc_830DD89C:
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f31,8204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8204);
	ctx.f31.f64 = double(temp.f32);
loc_830DD8A8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830DD8B4;
	sub_82A22B40(ctx, base);
	// ld r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830dd8e8
	if (cr6.lt) goto loc_830DD8E8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830dd8e8
	if (!cr6.lt) goto loc_830DD8E8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830dd8e8
	if (cr6.lt) goto loc_830DD8E8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dd8ec
	if (cr6.lt) goto loc_830DD8EC;
loc_830DD8E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DD8EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dd9c0
	if (cr6.eq) goto loc_830DD9C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x830dd91c
	if (!cr6.gt) goto loc_830DD91C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x830dd914
	if (!cr6.gt) goto loc_830DD914;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x830dd91c
	if (!cr6.eq) goto loc_830DD91C;
loc_830DD914:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830dd920
	goto loc_830DD920;
loc_830DD91C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DD920:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dd9c0
	if (cr6.eq) goto loc_830DD9C0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// bne cr6,0x830dd948
	if (!cr6.eq) goto loc_830DD948;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830dd94c
	if (cr6.eq) goto loc_830DD94C;
loc_830DD948:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DD94C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830dd9c0
	if (!cr6.eq) goto loc_830DD9C0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// bne cr6,0x830dd9c0
	if (!cr6.eq) goto loc_830DD9C0;
	// addi r4,r3,68
	ctx.r4.s64 = ctx.r3.s64 + 68;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a3fca8
	ctx.lr = 0x830DD970;
	sub_82A3FCA8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f0,28(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f13,16100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x830dd9b0
	if (!cr6.lt) goto loc_830DD9B0;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x830dd9b0
	if (!cr6.gt) goto loc_830DD9B0;
	// fabs f0,f31
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x830dd9b0
	if (!cr6.lt) goto loc_830DD9B0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_830DD9B0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830DD9C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DD9D0"))) PPC_WEAK_FUNC(sub_830DD9D0);
PPC_FUNC_IMPL(__imp__sub_830DD9D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830DD9D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,132(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830ddb84
	if (cr6.eq) goto loc_830DDB84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830DD9F8;
	sub_82A22B40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// bl 0x82a3fca8
	ctx.lr = 0x830DDA08;
	sub_82A3FCA8(ctx, base);
	// ld r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// blt cr6,0x830dda3c
	if (cr6.lt) goto loc_830DDA3C;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x830dda3c
	if (!cr6.lt) goto loc_830DDA3C;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// blt cr6,0x830dda3c
	if (cr6.lt) goto loc_830DDA3C;
	// cmpwi cr6,r26,32
	cr6.compare<int32_t>(ctx.r26.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dda40
	if (cr6.lt) goto loc_830DDA40;
loc_830DDA3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DDA40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ddb84
	if (cr6.eq) goto loc_830DDB84;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x830ddb84
	if (!cr6.lt) goto loc_830DDB84;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830DDA64;
	sub_82A0C710(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ddb84
	if (cr6.eq) goto loc_830DDB84;
	// lbz r28,252(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// li r30,1
	ctx.r30.s64 = 1;
loc_830DDA74:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830DDA80;
	sub_82A22B40(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// bne cr6,0x830ddaa0
	if (!cr6.eq) goto loc_830DDAA0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830ddaa4
	if (cr6.eq) goto loc_830DDAA4;
loc_830DDAA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DDAA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ddac8
	if (cr6.eq) goto loc_830DDAC8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// blt cr6,0x830dda74
	if (cr6.lt) goto loc_830DDA74;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DDAC8:
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a3fca8
	ctx.lr = 0x830DDAD4;
	sub_82A3FCA8(ctx, base);
	// extsb r9,r28
	ctx.r9.s64 = ctx.r28.s8;
	// lfs f11,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmsubs f13,f12,f10,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f9.f64));
	// blt cr6,0x830ddb24
	if (cr6.lt) goto loc_830DDB24;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x830ddb24
	if (!cr6.lt) goto loc_830DDB24;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830ddb24
	if (cr6.lt) goto loc_830DDB24;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830ddb28
	if (cr6.lt) goto loc_830DDB28;
loc_830DDB24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DDB28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ddb84
	if (cr6.eq) goto loc_830DDB84;
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, xer);
	// bne cr6,0x830ddb84
	if (!cr6.eq) goto loc_830DDB84;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x830ddb60
	if (!cr6.gt) goto loc_830DDB60;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x830ddb58
	if (!cr6.gt) goto loc_830DDB58;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x830ddb60
	if (!cr6.eq) goto loc_830DDB60;
loc_830DDB58:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830ddb64
	goto loc_830DDB64;
loc_830DDB60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DDB64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ddb84
	if (cr6.eq) goto loc_830DDB84;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,21708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21708);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x830ddb88
	if (!cr6.lt) goto loc_830DDB88;
loc_830DDB84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DDB88:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DDB90"))) PPC_WEAK_FUNC(sub_830DDB90);
PPC_FUNC_IMPL(__imp__sub_830DDB90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830DDB98;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x830ddbc0
	if (!cr6.eq) goto loc_830DDBC0;
loc_830DDBB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830DDBC0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830DDBCC;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x830ddbf4
	if (!cr6.gt) goto loc_830DDBF4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x830ddbec
	if (!cr6.gt) goto loc_830DDBEC;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x830ddbf4
	if (!cr6.eq) goto loc_830DDBF4;
loc_830DDBEC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830ddbf8
	goto loc_830DDBF8;
loc_830DDBF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DDBF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ddbb4
	if (cr6.eq) goto loc_830DDBB4;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// ld r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r25.u32 + 4);
	// bl 0x82a2b388
	ctx.lr = 0x830DDC10;
	sub_82A2B388(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830ddc28
	if (cr6.lt) goto loc_830DDC28;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830ddc2c
	if (cr6.lt) goto loc_830DDC2C;
loc_830DDC28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DDC2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ddbb4
	if (cr6.eq) goto loc_830DDBB4;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bge cr6,0x830ddc48
	if (!cr6.lt) goto loc_830DDC48;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x830ddc70
	goto loc_830DDC70;
loc_830DDC48:
	// cmpwi cr6,r26,11
	cr6.compare<int32_t>(ctx.r26.s32, 11, xer);
	// bge cr6,0x830ddc58
	if (!cr6.lt) goto loc_830DDC58;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x830ddc70
	goto loc_830DDC70;
loc_830DDC58:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r26
	xer.ca = ctx.r26.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// eqv r9,r11,r26
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r26.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r28,r7,31
	ctx.r28.u64 = ctx.r7.u32 & 0x1;
loc_830DDC70:
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830DDC80;
	sub_82A0C710(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ddbb4
	if (cr6.eq) goto loc_830DDBB4;
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82a22ba8
	ctx.lr = 0x830DDCA0;
	sub_82A22BA8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x82a2b388
	ctx.lr = 0x830DDCB0;
	sub_82A2B388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830ddcc8
	if (cr6.lt) goto loc_830DDCC8;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830ddccc
	if (cr6.lt) goto loc_830DDCCC;
loc_830DDCC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DDCCC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ddbb4
	if (cr6.eq) goto loc_830DDBB4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x830DDCE4;
	sub_82A0C788(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ddbb4
	if (cr6.eq) goto loc_830DDBB4;
	// addi r4,r25,68
	ctx.r4.s64 = ctx.r25.s64 + 68;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a3fca8
	ctx.lr = 0x830DDCFC;
	sub_82A3FCA8(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f2,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82a48788
	ctx.lr = 0x830DDD14;
	sub_82A48788(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f2,1288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	ctx.f2.f64 = double(temp.f32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lfs f1,1280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a48788
	ctx.lr = 0x830DDD34;
	sub_82A48788(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82a29580
	ctx.lr = 0x830DDD48;
	sub_82A29580(ctx, base);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82a29580
	ctx.lr = 0x830DDD5C;
	sub_82A29580(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// beq cr6,0x830ddd70
	if (cr6.eq) goto loc_830DDD70;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// bne cr6,0x830dddbc
	if (!cr6.eq) goto loc_830DDDBC;
loc_830DDD70:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// beq cr6,0x830ddd80
	if (cr6.eq) goto loc_830DDD80;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x830dddbc
	if (!cr6.eq) goto loc_830DDDBC;
loc_830DDD80:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x830ddd9c
	if (cr6.eq) goto loc_830DDD9C;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x830ddd9c
	if (cr6.eq) goto loc_830DDD9C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x830dddbc
	if (!cr6.eq) goto loc_830DDDBC;
loc_830DDD9C:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x830dddb8
	if (cr6.eq) goto loc_830DDDB8;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x830dddb8
	if (cr6.eq) goto loc_830DDDB8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x830dddbc
	if (!cr6.eq) goto loc_830DDDBC;
loc_830DDDB8:
	// li r24,1
	ctx.r24.s64 = 1;
loc_830DDDBC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DDDC8"))) PPC_WEAK_FUNC(sub_830DDDC8);
PPC_FUNC_IMPL(__imp__sub_830DDDC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830DDDD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r29,12(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,132(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// beq cr6,0x830ddec4
	if (cr6.eq) goto loc_830DDEC4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ddec4
	if (cr6.eq) goto loc_830DDEC4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830ddec4
	if (cr6.eq) goto loc_830DDEC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a22b40
	ctx.lr = 0x830DDE14;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x830dde38
	if (!cr6.gt) goto loc_830DDE38;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x830dde30
	if (!cr6.gt) goto loc_830DDE30;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x830dde38
	if (!cr6.eq) goto loc_830DDE38;
loc_830DDE30:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830dde3c
	goto loc_830DDE3C;
loc_830DDE38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DDE3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ddec4
	if (cr6.eq) goto loc_830DDEC4;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x830dde74
	if (cr6.lt) goto loc_830DDE74;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bge cr6,0x830dde74
	if (!cr6.lt) goto loc_830DDE74;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830dde74
	if (cr6.lt) goto loc_830DDE74;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dde78
	if (cr6.lt) goto loc_830DDE78;
loc_830DDE74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DDE78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ddec4
	if (cr6.eq) goto loc_830DDEC4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,21988
	ctx.r10.u64 = ctx.r11.u64 | 21988;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830ddeb8
	if (cr6.eq) goto loc_830DDEB8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f2,8152(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8152);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a48888
	ctx.lr = 0x830DDEB0;
	sub_82A48888(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_830DDEB8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830DDEC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DDED0"))) PPC_WEAK_FUNC(sub_830DDED0);
PPC_FUNC_IMPL(__imp__sub_830DDED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830DDED8;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r27,292(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x830de08c
	if (cr6.eq) goto loc_830DE08C;
	// lwz r29,40(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x830ddf18
	if (cr6.lt) goto loc_830DDF18;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830ddf1c
	if (cr6.lt) goto loc_830DDF1C;
loc_830DDF18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DDF1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830de08c
	if (cr6.eq) goto loc_830DE08C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge cr6,0x830ddf38
	if (!cr6.lt) goto loc_830DDF38;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x830ddf60
	goto loc_830DDF60;
loc_830DDF38:
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// bge cr6,0x830ddf48
	if (!cr6.lt) goto loc_830DDF48;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x830ddf60
	goto loc_830DDF60;
loc_830DDF48:
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
	// clrlwi r31,r7,31
	ctx.r31.u64 = ctx.r7.u32 & 0x1;
loc_830DDF60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a0c710
	ctx.lr = 0x830DDF68;
	sub_82A0C710(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830de08c
	if (cr6.eq) goto loc_830DE08C;
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// bl 0x82a0c788
	ctx.lr = 0x830DDF94;
	sub_82A0C788(ctx, base);
	// lwz r8,1280(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r7,1284(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1284);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r6,1288(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	// mulli r31,r31,11
	ctx.r31.s64 = ctx.r31.s64 * 11;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f29,-23848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f29.f64 = double(temp.f32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
loc_830DDFC4:
	// add r4,r31,r30
	ctx.r4.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmpw cr6,r4,r29
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r29.s32, xer);
	// beq cr6,0x830de080
	if (cr6.eq) goto loc_830DE080;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830ddfe4
	if (cr6.lt) goto loc_830DDFE4;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830ddfe8
	if (cr6.lt) goto loc_830DDFE8;
loc_830DDFE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DDFE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830de080
	if (cr6.eq) goto loc_830DE080;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830de008
	if (cr6.lt) goto loc_830DE008;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830de00c
	if (cr6.lt) goto loc_830DE00C;
loc_830DE008:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DE00C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830de02c
	if (cr6.eq) goto loc_830DE02C;
	// add r11,r4,r27
	ctx.r11.u64 = ctx.r4.u64 + ctx.r27.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830de030
	goto loc_830DE030;
loc_830DE02C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DE030:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830de080
	if (cr6.eq) goto loc_830DE080;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x830DE044;
	sub_82A0C788(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830de080
	if (cr6.eq) goto loc_830DE080;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830de080
	if (!cr6.eq) goto loc_830DE080;
	// lwz r11,1280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// lwz r10,1284(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1284);
	// lwz r9,1288(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f13,f0,f31,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f30.f64));
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// fcmpu cr6,f13,f29
	cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// bgt cr6,0x830de0a4
	if (cr6.gt) goto loc_830DE0A4;
loc_830DE080:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x830ddfc4
	if (cr6.lt) goto loc_830DDFC4;
loc_830DE08C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830DE0A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DE0BC"))) PPC_WEAK_FUNC(sub_830DE0BC);
PPC_FUNC_IMPL(__imp__sub_830DE0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DE0C0"))) PPC_WEAK_FUNC(sub_830DE0C0);
PPC_FUNC_IMPL(__imp__sub_830DE0C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830DE0C8;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r24,292(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x830de320
	if (cr6.eq) goto loc_830DE320;
	// lwz r28,40(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt cr6,0x830de108
	if (cr6.lt) goto loc_830DE108;
	// cmpwi cr6,r28,22
	cr6.compare<int32_t>(ctx.r28.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830de10c
	if (cr6.lt) goto loc_830DE10C;
loc_830DE108:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DE10C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830de320
	if (cr6.eq) goto loc_830DE320;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge cr6,0x830de128
	if (!cr6.lt) goto loc_830DE128;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x830de150
	goto loc_830DE150;
loc_830DE128:
	// cmpwi cr6,r28,11
	cr6.compare<int32_t>(ctx.r28.s32, 11, xer);
	// bge cr6,0x830de138
	if (!cr6.lt) goto loc_830DE138;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x830de150
	goto loc_830DE150;
loc_830DE138:
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
loc_830DE150:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a0c710
	ctx.lr = 0x830DE158;
	sub_82A0C710(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830de320
	if (cr6.eq) goto loc_830DE320;
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// bl 0x82a0c788
	ctx.lr = 0x830DE184;
	sub_82A0C788(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r26,-31772
	ctx.r26.s64 = -2082209792;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// lwz r7,1280(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1280);
	// lwz r6,1284(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1284);
	// lfs f1,-30856(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -30856);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,1288(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1288);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// fmuls f29,f12,f31
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// bl 0x82a36100
	ctx.lr = 0x830DE1BC;
	sub_82A36100(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f8,f10,f31
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// mulli r25,r31,11
	ctx.r25.s64 = ctx.r31.s64 * 11;
	// lfs f30,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
loc_830DE1E4:
	// add r31,r25,r29
	ctx.r31.u64 = ctx.r25.u64 + ctx.r29.u64;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// beq cr6,0x830de314
	if (cr6.eq) goto loc_830DE314;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830de204
	if (cr6.lt) goto loc_830DE204;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830de208
	if (cr6.lt) goto loc_830DE208;
loc_830DE204:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DE208:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830de314
	if (cr6.eq) goto loc_830DE314;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830de228
	if (cr6.lt) goto loc_830DE228;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830de22c
	if (cr6.lt) goto loc_830DE22C;
loc_830DE228:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DE22C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830de24c
	if (cr6.eq) goto loc_830DE24C;
	// add r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 + ctx.r24.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830de250
	goto loc_830DE250;
loc_830DE24C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DE250:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830de314
	if (cr6.eq) goto loc_830DE314;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x830DE268;
	sub_82A0C788(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830de314
	if (cr6.eq) goto loc_830DE314;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830de314
	if (!cr6.eq) goto loc_830DE314;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x830DE28C;
	sub_82A0C7B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830de314
	if (cr6.eq) goto loc_830DE314;
	// bl 0x82a36688
	ctx.lr = 0x830DE29C;
	sub_82A36688(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x830de2b4
	if (cr6.eq) goto loc_830DE2B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a36688
	ctx.lr = 0x830DE2AC;
	sub_82A36688(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x830de314
	if (!cr6.eq) goto loc_830DE314;
loc_830DE2B4:
	// lwz r11,1280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1280);
	// lwz r10,1284(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1284);
	// lwz r9,1288(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1288);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// fcmpu cr6,f29,f13
	cr6.compare(ctx.f29.f64, ctx.f13.f64);
	// bne cr6,0x830de314
	if (!cr6.eq) goto loc_830DE314;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,-30856(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -30856);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a36100
	ctx.lr = 0x830DE2EC;
	sub_82A36100(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f10,f30
	cr6.compare(ctx.f10.f64, ctx.f30.f64);
	// bgt cr6,0x830de338
	if (cr6.gt) goto loc_830DE338;
loc_830DE314:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// blt cr6,0x830de1e4
	if (cr6.lt) goto loc_830DE1E4;
loc_830DE320:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830DE338:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DE350"))) PPC_WEAK_FUNC(sub_830DE350);
PPC_FUNC_IMPL(__imp__sub_830DE350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830DE358;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830de380
	if (!cr6.eq) goto loc_830DE380;
loc_830DE374:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830DE380:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830de374
	if (cr6.eq) goto loc_830DE374;
	// lwz r30,40(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x830de3a8
	if (cr6.lt) goto loc_830DE3A8;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830de3ac
	if (cr6.lt) goto loc_830DE3AC;
loc_830DE3A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DE3AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830de374
	if (cr6.eq) goto loc_830DE374;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x830de3cc
	if (cr6.lt) goto loc_830DE3CC;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830de3d0
	if (cr6.lt) goto loc_830DE3D0;
loc_830DE3CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DE3D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830de3f0
	if (cr6.eq) goto loc_830DE3F0;
	// add r11,r30,r10
	ctx.r11.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r11,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830de3f4
	goto loc_830DE3F4;
loc_830DE3F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DE3F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830de374
	if (cr6.eq) goto loc_830DE374;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x830de410
	if (!cr6.lt) goto loc_830DE410;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830de438
	goto loc_830DE438;
loc_830DE410:
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// bge cr6,0x830de420
	if (!cr6.lt) goto loc_830DE420;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830de438
	goto loc_830DE438;
loc_830DE420:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r30
	xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// eqv r8,r11,r30
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r30.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
loc_830DE438:
	// addis r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 65536;
	// addi r3,r3,27316
	ctx.r3.s64 = ctx.r3.s64 + 27316;
	// bl 0x82a4cc78
	ctx.lr = 0x830DE444;
	sub_82A4CC78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a4c6e0
	ctx.lr = 0x830DE450;
	sub_82A4C6E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82a2b388
	ctx.lr = 0x830DE460;
	sub_82A2B388(ctx, base);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, xer);
	// bne cr6,0x830de474
	if (!cr6.eq) goto loc_830DE474;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830DE474:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4c6e0
	ctx.lr = 0x830DE480;
	sub_82A4C6E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82a2b388
	ctx.lr = 0x830DE490;
	sub_82A2B388(ctx, base);
	// subf r10,r3,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r3.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DE4A4"))) PPC_WEAK_FUNC(sub_830DE4A4);
PPC_FUNC_IMPL(__imp__sub_830DE4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DE4A8"))) PPC_WEAK_FUNC(sub_830DE4A8);
PPC_FUNC_IMPL(__imp__sub_830DE4A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830de540
	if (cr6.eq) goto loc_830DE540;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,24608
	ctx.r11.s64 = ctx.r11.s64 + 24608;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830de540
	if (cr6.eq) goto loc_830DE540;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830de540
	if (cr6.eq) goto loc_830DE540;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// srawi r9,r10,6
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x830de540
	if (!cr6.eq) goto loc_830DE540;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// beq cr6,0x830de540
	if (cr6.eq) goto loc_830DE540;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bne cr6,0x830de540
	if (!cr6.eq) goto loc_830DE540;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x830de540
	if (!cr6.eq) goto loc_830DE540;
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// lbz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x830de540
	if (cr6.gt) goto loc_830DE540;
	// li r11,5
	ctx.r11.s64 = 5;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// adde r3,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_830DE540:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DE548"))) PPC_WEAK_FUNC(sub_830DE548);
PPC_FUNC_IMPL(__imp__sub_830DE548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830DE550;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x830de57c
	if (!cr6.eq) goto loc_830DE57C;
loc_830DE570:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830DE57C:
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r25,6112(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x830de570
	if (cr6.eq) goto loc_830DE570;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x830de570
	if (!cr6.lt) goto loc_830DE570;
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// ld r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82a2b388
	ctx.lr = 0x830DE5A8;
	sub_82A2B388(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82a2b388
	ctx.lr = 0x830DE5BC;
	sub_82A2B388(ctx, base);
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r8,r27
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, xer);
	// bne cr6,0x830de570
	if (!cr6.eq) goto loc_830DE570;
	// lbz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830de570
	if (!cr6.eq) goto loc_830DE570;
	// addis r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 65536;
	// mulli r10,r27,88
	ctx.r10.s64 = ctx.r27.s64 * 88;
	// addi r11,r11,20120
	ctx.r11.s64 = ctx.r11.s64 + 20120;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// bne cr6,0x830de604
	if (!cr6.eq) goto loc_830DE604;
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_830DE604:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x830de618
	if (!cr6.lt) goto loc_830DE618;
	// mulli r10,r29,88
	ctx.r10.s64 = ctx.r29.s64 * 88;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x830de61c
	goto loc_830DE61C;
loc_830DE618:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830DE61C:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x830de634
	if (!cr6.lt) goto loc_830DE634;
	// mulli r10,r29,88
	ctx.r10.s64 = ctx.r29.s64 * 88;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x830de638
	goto loc_830DE638;
loc_830DE634:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830DE638:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// bne cr6,0x830de65c
	if (!cr6.eq) goto loc_830DE65C;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x830de658
	if (!cr6.lt) goto loc_830DE658;
	// mulli r10,r29,88
	ctx.r10.s64 = ctx.r29.s64 * 88;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_830DE658:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_830DE65C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x830de570
	if (cr6.lt) goto loc_830DE570;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x830DE670;
	sub_82A0C7B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830de570
	if (cr6.eq) goto loc_830DE570;
	// lbz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// blt cr6,0x830de570
	if (cr6.lt) goto loc_830DE570;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x830DE690;
	sub_82A0C788(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830de570
	if (cr6.eq) goto loc_830DE570;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830DE6A8;
	sub_82A0C710(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830de570
	if (cr6.eq) goto loc_830DE570;
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,1280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// lfs f12,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,24552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24552);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fcmpu cr6,f7,f8
	cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// blt cr6,0x830de6f0
	if (cr6.lt) goto loc_830DE6F0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_830DE6F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DE6F8"))) PPC_WEAK_FUNC(sub_830DE6F8);
PPC_FUNC_IMPL(__imp__sub_830DE6F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830DE700;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r28,292(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x830de8cc
	if (cr6.eq) goto loc_830DE8CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830de8cc
	if (cr6.eq) goto loc_830DE8CC;
	// lwz r11,4460(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4460);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830de8cc
	if (!cr6.eq) goto loc_830DE8CC;
	// lwz r11,5388(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5388);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x830de8cc
	if (!cr6.eq) goto loc_830DE8CC;
	// lwz r30,40(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x830de758
	if (!cr6.lt) goto loc_830DE758;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x830de780
	goto loc_830DE780;
loc_830DE758:
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// bge cr6,0x830de768
	if (!cr6.lt) goto loc_830DE768;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x830de780
	goto loc_830DE780;
loc_830DE768:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r30
	xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// eqv r9,r11,r30
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r30.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
loc_830DE780:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x830de794
	if (cr6.lt) goto loc_830DE794;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830de798
	if (cr6.lt) goto loc_830DE798;
loc_830DE794:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DE798:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830de8cc
	if (cr6.eq) goto loc_830DE8CC;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x830de8cc
	if (!cr6.lt) goto loc_830DE8CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82a229e8
	ctx.lr = 0x830DE7B8;
	sub_82A229E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830de8cc
	if (cr6.eq) goto loc_830DE8CC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x830de8cc
	if (!cr6.eq) goto loc_830DE8CC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// bl 0x82a2b388
	ctx.lr = 0x830DE7E0;
	sub_82A2B388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830de7f4
	if (cr6.lt) goto loc_830DE7F4;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830de7f8
	if (cr6.lt) goto loc_830DE7F8;
loc_830DE7F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DE7F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830de8cc
	if (cr6.eq) goto loc_830DE8CC;
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, xer);
	// bne cr6,0x830de8cc
	if (!cr6.eq) goto loc_830DE8CC;
	// addi r3,r28,5868
	ctx.r3.s64 = ctx.r28.s64 + 5868;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82a49338
	ctx.lr = 0x830DE818;
	sub_82A49338(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830de8cc
	if (cr6.eq) goto loc_830DE8CC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830da550
	ctx.lr = 0x830DE834;
	sub_830DA550(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830de848
	if (cr6.lt) goto loc_830DE848;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830de84c
	if (cr6.lt) goto loc_830DE84C;
loc_830DE848:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DE84C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830de8cc
	if (cr6.eq) goto loc_830DE8CC;
	// mulli r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 * 44;
	// mulli r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 * 44;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f0,-11316(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -11316);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f6,f0
	cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bgt cr6,0x830de8cc
	if (cr6.gt) goto loc_830DE8CC;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,50
	cr6.compare<int32_t>(ctx.r11.s32, 50, xer);
	// beq cr6,0x830de8c0
	if (cr6.eq) goto loc_830DE8C0;
	// cmpwi cr6,r11,51
	cr6.compare<int32_t>(ctx.r11.s32, 51, xer);
	// beq cr6,0x830de8c0
	if (cr6.eq) goto loc_830DE8C0;
	// cmpwi cr6,r11,59
	cr6.compare<int32_t>(ctx.r11.s32, 59, xer);
	// bne cr6,0x830de8cc
	if (!cr6.eq) goto loc_830DE8CC;
loc_830DE8C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830DE8CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DE8D8"))) PPC_WEAK_FUNC(sub_830DE8D8);
PPC_FUNC_IMPL(__imp__sub_830DE8D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830DE8E0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce778
	ctx.lr = 0x830DE8E8;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830de914
	if (!cr6.eq) goto loc_830DE914;
loc_830DE900:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7c4
	ctx.lr = 0x830DE910;
	__restfpr_28(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830DE914:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,132(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830de900
	if (cr6.eq) goto loc_830DE900;
	// lwz r11,6112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830de900
	if (cr6.eq) goto loc_830DE900;
	// lwz r10,4460(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x830de900
	if (!cr6.eq) goto loc_830DE900;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f29,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-8308(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8308);
	ctx.f30.f64 = double(temp.f32);
	// fadds f28,f29,f30
	ctx.f28.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// bl 0x82a22b40
	ctx.lr = 0x830DE958;
	sub_82A22B40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r29,68
	ctx.r4.s64 = ctx.r29.s64 + 68;
	// bl 0x82a3fca8
	ctx.lr = 0x830DE968;
	sub_82A3FCA8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x830de98c
	if (!cr6.lt) goto loc_830DE98C;
	// fadds f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x830de98c
	if (!cr6.lt) goto loc_830DE98C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_830DE98C:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f29,f0
	cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bge cr6,0x830de9ac
	if (!cr6.lt) goto loc_830DE9AC;
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x830de9ac
	if (!cr6.lt) goto loc_830DE9AC;
	// li r31,1
	ctx.r31.s64 = 1;
loc_830DE9AC:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x830de9c4
	if (!cr6.eq) goto loc_830DE9C4;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830de900
	if (cr6.eq) goto loc_830DE900;
loc_830DE9C4:
	// addi r4,r29,80
	ctx.r4.s64 = ctx.r29.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a3fca8
	ctx.lr = 0x830DE9D0;
	sub_82A3FCA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x830de9fc
	if (!cr6.eq) goto loc_830DE9FC;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x830de9fc
	if (!cr6.gt) goto loc_830DE9FC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_830DE9FC:
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x830dea24
	if (!cr6.eq) goto loc_830DEA24;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x830dea24
	if (!cr6.gt) goto loc_830DEA24;
	// li r11,1
	ctx.r11.s64 = 1;
loc_830DEA24:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830dea3c
	if (!cr6.eq) goto loc_830DEA3C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830de900
	if (cr6.eq) goto loc_830DE900;
loc_830DEA3C:
	// addi r4,r29,74
	ctx.r4.s64 = ctx.r29.s64 + 74;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a3fca8
	ctx.lr = 0x830DEA48;
	sub_82A3FCA8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// bne cr6,0x830dea6c
	if (!cr6.eq) goto loc_830DEA6C;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bge cr6,0x830dea6c
	if (!cr6.lt) goto loc_830DEA6C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_830DEA6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x830dea90
	if (!cr6.eq) goto loc_830DEA90;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bge cr6,0x830dea90
	if (!cr6.lt) goto loc_830DEA90;
	// li r11,1
	ctx.r11.s64 = 1;
loc_830DEA90:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830deaac
	if (!cr6.eq) goto loc_830DEAAC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830deab0
	if (cr6.eq) goto loc_830DEAB0;
loc_830DEAAC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_830DEAB0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7c4
	ctx.lr = 0x830DEABC;
	__restfpr_28(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DEAC0"))) PPC_WEAK_FUNC(sub_830DEAC0);
PPC_FUNC_IMPL(__imp__sub_830DEAC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,22272
	ctx.r11.s64 = ctx.r11.s64 + 22272;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830debc4
	if (cr6.eq) goto loc_830DEBC4;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830deb08
	if (cr6.lt) goto loc_830DEB08;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x830deb08
	if (!cr6.lt) goto loc_830DEB08;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830deb08
	if (cr6.lt) goto loc_830DEB08;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x830deb0c
	if (cr6.lt) goto loc_830DEB0C;
loc_830DEB08:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830DEB0C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830debc4
	if (cr6.eq) goto loc_830DEBC4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x830deb44
	if (cr6.eq) goto loc_830DEB44;
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x830deb44
	if (!cr6.lt) goto loc_830DEB44;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_830DEB44:
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,-3564(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r9,6112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6112);
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x830deb78
	if (!cr6.lt) goto loc_830DEB78;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_830DEB78:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// srawi r9,r11,9
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 9;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// lfs f12,-10804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x830debb4
	if (!cr6.eq) goto loc_830DEBB4;
	// srawi r10,r11,14
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 14;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830debb4
	if (!cr6.eq) goto loc_830DEBB4;
	// srawi r11,r11,10
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 10;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830debb8
	if (cr6.eq) goto loc_830DEBB8;
loc_830DEBB4:
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
loc_830DEBB8:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bltlr cr6
	if (cr6.lt) return;
loc_830DEBC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DEBCC"))) PPC_WEAK_FUNC(sub_830DEBCC);
PPC_FUNC_IMPL(__imp__sub_830DEBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DEBD0"))) PPC_WEAK_FUNC(sub_830DEBD0);
PPC_FUNC_IMPL(__imp__sub_830DEBD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830DEBD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83740858
	ctx.lr = 0x830DEBE4;
	sub_83740858(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r3,r10
	ctx.r29.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830dec0c
	if (!cr6.eq) goto loc_830DEC0C;
loc_830DEC00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830DEC0C:
	// lwz r10,4460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x830dec00
	if (!cr6.eq) goto loc_830DEC00;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,132(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830dec00
	if (cr6.eq) goto loc_830DEC00;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r31,4472(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4472);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r30,4480(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4480);
	// bl 0x82a229e8
	ctx.lr = 0x830DEC3C;
	sub_82A229E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830dec00
	if (cr6.eq) goto loc_830DEC00;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subfc r8,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DEC68"))) PPC_WEAK_FUNC(sub_830DEC68);
PPC_FUNC_IMPL(__imp__sub_830DEC68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830DEC70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// ori r8,r10,22304
	ctx.r8.u64 = ctx.r10.u64 | 22304;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,-3564(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3564);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r31,6112(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// bl 0x82a0c710
	ctx.lr = 0x830DECA8;
	sub_82A0C710(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r3,252(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r3,255
	cr6.compare<uint32_t>(ctx.r3.u32, 255, xer);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,22308
	ctx.r11.s64 = ctx.r11.s64 + 22308;
	// addi r10,r10,22332
	ctx.r10.s64 = ctx.r10.s64 + 22332;
	// bne cr6,0x830decd8
	if (!cr6.eq) goto loc_830DECD8;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x830decdc
	goto loc_830DECDC;
loc_830DECD8:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_830DECDC:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f0,-23848(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23848);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f11,f11
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fadds f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fmadds f5,f9,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fsqrts f13,f5
	ctx.f13.f64 = double(float(sqrt(ctx.f5.f64)));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x830ded38
	if (!cr6.gt) goto loc_830DED38;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-11316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11316);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-10804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -10804);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// b 0x830ded78
	goto loc_830DED78;
loc_830DED38:
	// fsubs f10,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,-6472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6472);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2940(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2940);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-11316(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -11316);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-10804(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -10804);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f6,f7,f0,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f5,f7,f13,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fadds f0,f6,f12
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fadds f13,f5,f11
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
loc_830DED78:
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x830ded98
	if (!cr6.lt) goto loc_830DED98;
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x830ded9c
	if (cr6.lt) goto loc_830DED9C;
loc_830DED98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830DED9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DEDA4"))) PPC_WEAK_FUNC(sub_830DEDA4);
PPC_FUNC_IMPL(__imp__sub_830DEDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DEDA8"))) PPC_WEAK_FUNC(sub_830DEDA8);
PPC_FUNC_IMPL(__imp__sub_830DEDA8) {
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
	// bl 0x830e1e68
	ctx.lr = 0x830DEDC0;
	sub_830E1E68(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x830dee00
	if (!cr6.eq) goto loc_830DEE00;
	// bl 0x830e0bd8
	ctx.lr = 0x830DEDDC;
	sub_830E0BD8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x830dee28
	if (cr6.lt) goto loc_830DEE28;
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
loc_830DEE00:
	// bl 0x830e0bd8
	ctx.lr = 0x830DEE04;
	sub_830E0BD8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x830dee28
	if (cr6.lt) goto loc_830DEE28;
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
loc_830DEE28:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,28040
	ctx.r9.u64 = ctx.r10.u64 | 28040;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,3
	cr6.compare<uint32_t>(ctx.r7.u32, 3, xer);
	// blt cr6,0x830dee68
	if (cr6.lt) goto loc_830DEE68;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e0bd8
	ctx.lr = 0x830DEE58;
	sub_830E0BD8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830dee6c
	if (cr6.eq) goto loc_830DEE6C;
loc_830DEE68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DEE6C:
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

__attribute__((alias("__imp__sub_830DEE80"))) PPC_WEAK_FUNC(sub_830DEE80);
PPC_FUNC_IMPL(__imp__sub_830DEE80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830DEE88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830defd4
	if (cr6.eq) goto loc_830DEFD4;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830deeb4
	if (cr6.lt) goto loc_830DEEB4;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x830deeb8
	if (cr6.lt) goto loc_830DEEB8;
loc_830DEEB4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830DEEB8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830defd4
	if (cr6.eq) goto loc_830DEFD4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x830deed4
	if (!cr6.lt) goto loc_830DEED4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830deefc
	goto loc_830DEEFC;
loc_830DEED4:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x830deee4
	if (!cr6.lt) goto loc_830DEEE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830deefc
	goto loc_830DEEFC;
loc_830DEEE4:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r8,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r7,r10,r11
	ctx.r7.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
loc_830DEEFC:
	// mulli r10,r11,152
	ctx.r10.s64 = ctx.r11.s64 * 152;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r6,r8,21452
	ctx.r6.u64 = ctx.r8.u64 | 21452;
	// lwzx r10,r7,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830def38
	if (cr6.eq) goto loc_830DEF38;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// beq cr6,0x830def38
	if (cr6.eq) goto loc_830DEF38;
	// mulli r10,r11,152
	ctx.r10.s64 = ctx.r11.s64 * 152;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r6,r8,21576
	ctx.r6.u64 = ctx.r8.u64 | 21576;
	// lwzx r27,r7,r6
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// b 0x830def44
	goto loc_830DEF44;
loc_830DEF38:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r8,r10,21432
	ctx.r8.u64 = ctx.r10.u64 | 21432;
	// lwzx r27,r9,r8
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_830DEF44:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x830defd4
	if (cr6.eq) goto loc_830DEFD4;
	// li r30,0
	ctx.r30.s64 = 0;
	// mulli r28,r11,11
	ctx.r28.s64 = ctx.r11.s64 * 11;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
loc_830DEF58:
	// add. r31,r28,r30
	ctx.r31.u64 = ctx.r28.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x830def6c
	if (cr0.lt) goto loc_830DEF6C;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830def70
	if (cr6.lt) goto loc_830DEF70;
loc_830DEF6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DEF70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830defc8
	if (cr6.eq) goto loc_830DEFC8;
	// sraw r11,r27,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r27.s32 < 0) & (((ctx.r27.s32 >> temp.u32) << temp.u32) != ctx.r27.s32);
	ctx.r11.s64 = ctx.r27.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830defc8
	if (cr6.eq) goto loc_830DEFC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x830DEF98;
	sub_82A0C7B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830defac
	if (cr6.eq) goto loc_830DEFAC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x830defe0
	if (!cr6.eq) goto loc_830DEFE0;
loc_830DEFAC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x830DEFB8;
	sub_82A0C760(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830defe0
	if (!cr6.eq) goto loc_830DEFE0;
loc_830DEFC8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x830def58
	if (cr6.lt) goto loc_830DEF58;
loc_830DEFD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830DEFE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DEFEC"))) PPC_WEAK_FUNC(sub_830DEFEC);
PPC_FUNC_IMPL(__imp__sub_830DEFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DEFF0"))) PPC_WEAK_FUNC(sub_830DEFF0);
PPC_FUNC_IMPL(__imp__sub_830DEFF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830DEFF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r29,12(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830df114
	if (cr6.eq) goto loc_830DF114;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lwz r3,-3564(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r28,6112(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x830df114
	if (cr6.eq) goto loc_830DF114;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830df03c
	if (cr6.lt) goto loc_830DF03C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x830df040
	if (cr6.lt) goto loc_830DF040;
loc_830DF03C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830DF040:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830df114
	if (cr6.eq) goto loc_830DF114;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x830df05c
	if (!cr6.lt) goto loc_830DF05C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x830df084
	goto loc_830DF084;
loc_830DF05C:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x830df06c
	if (!cr6.lt) goto loc_830DF06C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x830df084
	goto loc_830DF084;
loc_830DF06C:
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
	// clrlwi r31,r6,31
	ctx.r31.u64 = ctx.r6.u32 & 0x1;
loc_830DF084:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a0c710
	ctx.lr = 0x830DF08C;
	sub_82A0C710(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830df114
	if (cr6.eq) goto loc_830DF114;
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// mulli r10,r31,152
	ctx.r10.s64 = ctx.r31.s64 * 152;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r11,r11,20896
	ctx.r11.s64 = ctx.r11.s64 + 20896;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,556(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r30,568(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// beq cr6,0x830df114
	if (cr6.eq) goto loc_830DF114;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// beq cr6,0x830df114
	if (cr6.eq) goto loc_830DF114;
	// lwz r10,588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r9,580(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,584(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f2,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// bl 0x82a48608
	ctx.lr = 0x830DF0F8;
	sub_82A48608(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x830df108
	if (cr6.eq) goto loc_830DF108;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x830df114
	if (!cr6.eq) goto loc_830DF114;
loc_830DF108:
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(ctx.r30.s32, 5, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x830df118
	if (cr6.eq) goto loc_830DF118;
loc_830DF114:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DF118:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DF120"))) PPC_WEAK_FUNC(sub_830DF120);
PPC_FUNC_IMPL(__imp__sub_830DF120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830DF128;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830df25c
	if (cr6.eq) goto loc_830DF25C;
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830df25c
	if (cr6.eq) goto loc_830DF25C;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r28,6112(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x830df25c
	if (cr6.eq) goto loc_830DF25C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a22b40
	ctx.lr = 0x830DF168;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x830df25c
	if (cr6.eq) goto loc_830DF25C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830df18c
	if (cr6.lt) goto loc_830DF18C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x830df190
	if (cr6.lt) goto loc_830DF190;
loc_830DF18C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830DF190:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830df25c
	if (cr6.eq) goto loc_830DF25C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x830df1ac
	if (!cr6.lt) goto loc_830DF1AC;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x830df1d4
	goto loc_830DF1D4;
loc_830DF1AC:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x830df1bc
	if (!cr6.lt) goto loc_830DF1BC;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x830df1d4
	goto loc_830DF1D4;
loc_830DF1BC:
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
	// clrlwi r31,r6,31
	ctx.r31.u64 = ctx.r6.u32 & 0x1;
loc_830DF1D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830DF1E0;
	sub_82A0C710(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830df25c
	if (cr6.eq) goto loc_830DF25C;
	// lbz r10,252(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// mulli r11,r31,152
	ctx.r11.s64 = ctx.r31.s64 * 152;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addis r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 65536;
	// addi r10,r10,20896
	ctx.r10.s64 = ctx.r10.s64 + 20896;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830df25c
	if (cr6.eq) goto loc_830DF25C;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x830df25c
	if (cr6.eq) goto loc_830DF25C;
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f2,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x82a48068
	ctx.lr = 0x830DF240;
	sub_82A48068(ctx, base);
	// rlwinm r8,r3,0,20,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x830df25c
	if (cr6.eq) goto loc_830DF25C;
	// lbz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 596);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830df260
	if (!cr6.eq) goto loc_830DF260;
loc_830DF25C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DF260:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DF268"))) PPC_WEAK_FUNC(sub_830DF268);
PPC_FUNC_IMPL(__imp__sub_830DF268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830df280
	if (!cr6.eq) goto loc_830DF280;
loc_830DF278:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830DF280:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830df298
	if (cr6.lt) goto loc_830DF298;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830df29c
	if (cr6.lt) goto loc_830DF29C;
loc_830DF298:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DF29C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830df278
	if (cr6.eq) goto loc_830DF278;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,21832
	ctx.r11.s64 = ctx.r11.s64 + 21832;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830df278
	if (cr6.eq) goto loc_830DF278;
	// lbz r11,21(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
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

__attribute__((alias("__imp__sub_830DF2CC"))) PPC_WEAK_FUNC(sub_830DF2CC);
PPC_FUNC_IMPL(__imp__sub_830DF2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DF2D0"))) PPC_WEAK_FUNC(sub_830DF2D0);
PPC_FUNC_IMPL(__imp__sub_830DF2D0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r3,472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// bl 0x82a47d40
	ctx.lr = 0x830DF2F8;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830df324
	if (!cr6.eq) goto loc_830DF324;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82da1d10
	ctx.lr = 0x830DF310;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830df324
	if (!cr6.eq) goto loc_830DF324;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830df424
	goto loc_830DF424;
loc_830DF324:
	// lwz r10,-3564(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,11
	ctx.r9.s64 = 11;
	// lwz r10,292(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_830DF33C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x830df350
	if (cr6.lt) goto loc_830DF350;
	// cmpwi cr6,r9,22
	cr6.compare<int32_t>(ctx.r9.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830df354
	if (cr6.lt) goto loc_830DF354;
loc_830DF350:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DF354:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830df3ac
	if (cr6.eq) goto loc_830DF3AC;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x830df374
	if (cr6.lt) goto loc_830DF374;
	// cmpwi cr6,r9,22
	cr6.compare<int32_t>(ctx.r9.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830df378
	if (cr6.lt) goto loc_830DF378;
loc_830DF374:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DF378:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830df398
	if (cr6.eq) goto loc_830DF398;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,5768(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r11,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830df39c
	goto loc_830DF39C;
loc_830DF398:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DF39C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830df3ac
	if (cr6.eq) goto loc_830DF3AC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_830DF3AC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x830df33c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830DF33C;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830df3e4
	if (cr6.eq) goto loc_830DF3E4;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r8,r11
	xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830df40c
	goto loc_830DF40C;
loc_830DF3E4:
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830df400
	if (cr6.eq) goto loc_830DF400;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r11,r8
	xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830df40c
	goto loc_830DF40C;
loc_830DF400:
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_830DF40C:
	// rlwinm r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830df424
	if (cr6.eq) goto loc_830DF424;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830DF424:
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

__attribute__((alias("__imp__sub_830DF43C"))) PPC_WEAK_FUNC(sub_830DF43C);
PPC_FUNC_IMPL(__imp__sub_830DF43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DF440"))) PPC_WEAK_FUNC(sub_830DF440);
PPC_FUNC_IMPL(__imp__sub_830DF440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830DF448;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce770
	ctx.lr = 0x830DF450;
	__savefpr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31763
	ctx.r25.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-3564(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// lwz r28,6112(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x830df7f8
	if (cr6.eq) goto loc_830DF7F8;
	// lwz r24,292(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x830df7f8
	if (cr6.eq) goto loc_830DF7F8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,12(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830df7f8
	if (cr6.eq) goto loc_830DF7F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a2b4e0
	ctx.lr = 0x830DF490;
	sub_82A2B4E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830df4a8
	if (cr6.lt) goto loc_830DF4A8;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830df4ac
	if (cr6.lt) goto loc_830DF4AC;
loc_830DF4A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DF4AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830df7f8
	if (cr6.eq) goto loc_830DF7F8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830df4cc
	if (cr6.lt) goto loc_830DF4CC;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830df4d0
	if (cr6.lt) goto loc_830DF4D0;
loc_830DF4CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DF4D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830df4f0
	if (cr6.eq) goto loc_830DF4F0;
	// add r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 + ctx.r24.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830df4f4
	goto loc_830DF4F4;
loc_830DF4F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DF4F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830df7f8
	if (cr6.eq) goto loc_830DF7F8;
	// lwz r27,36(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x830df7f8
	if (!cr6.lt) goto loc_830DF7F8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x830df51c
	if (!cr6.lt) goto loc_830DF51C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830df544
	goto loc_830DF544;
loc_830DF51C:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x830df52c
	if (!cr6.lt) goto loc_830DF52C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830df544
	goto loc_830DF544;
loc_830DF52C:
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
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_830DF544:
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// bne cr6,0x830df7f8
	if (!cr6.eq) goto loc_830DF7F8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830DF558;
	sub_82A0C710(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830df7f8
	if (cr6.eq) goto loc_830DF7F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// lbz r26,252(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 252);
	// bl 0x82a0c788
	ctx.lr = 0x830DF574;
	sub_82A0C788(ctx, base);
	// extsb r9,r26
	ctx.r9.s64 = ctx.r26.s8;
	// lfs f13,1280(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f31,f11
	ctx.f31.f64 = double(float(ctx.f11.f64));
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f28,f13,f31
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fcmpu cr6,f28,f0
	cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// blt cr6,0x830df7f8
	if (cr6.lt) goto loc_830DF7F8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830aaad8
	ctx.lr = 0x830DF5A8;
	sub_830AAAD8(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830df5dc
	if (cr6.lt) goto loc_830DF5DC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830df5dc
	if (!cr6.lt) goto loc_830DF5DC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830df5dc
	if (cr6.lt) goto loc_830DF5DC;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830df5e0
	if (cr6.lt) goto loc_830DF5E0;
loc_830DF5DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DF5E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830df7f8
	if (cr6.eq) goto loc_830DF7F8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a2b388
	ctx.lr = 0x830DF5F4;
	sub_82A2B388(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830df60c
	if (cr6.lt) goto loc_830DF60C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830df610
	if (cr6.lt) goto loc_830DF610;
loc_830DF60C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DF610:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830df7f8
	if (cr6.eq) goto loc_830DF7F8;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// blt cr6,0x830df630
	if (cr6.lt) goto loc_830DF630;
	// cmpwi cr6,r26,22
	cr6.compare<int32_t>(ctx.r26.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830df634
	if (cr6.lt) goto loc_830DF634;
loc_830DF630:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DF634:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830df654
	if (cr6.eq) goto loc_830DF654;
	// add r11,r26,r24
	ctx.r11.u64 = ctx.r26.u64 + ctx.r24.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830df658
	goto loc_830DF658;
loc_830DF654:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DF658:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830df7f8
	if (cr6.eq) goto loc_830DF7F8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,24552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24552);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f29,f12,f31
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x825cb988
	ctx.lr = 0x830DF684;
	sub_825CB988(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f30,-6668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6668);
	ctx.f30.f64 = double(temp.f32);
	// lfs f26,-6656(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6656);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,6060(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6060);
	ctx.f27.f64 = double(temp.f32);
loc_830DF6A4:
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x830df6c0
	if (!cr6.lt) goto loc_830DF6C0;
	// mulli r11,r27,11
	ctx.r11.s64 = ctx.r27.s64 * 11;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x830df6c4
	goto loc_830DF6C4;
loc_830DF6C0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_830DF6C4:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// blt cr6,0x830df7e4
	if (cr6.lt) goto loc_830DF7E4;
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bgt cr6,0x830df7f8
	if (cr6.gt) goto loc_830DF7F8;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x830df6f4
	if (!cr6.lt) goto loc_830DF6F4;
	// mulli r11,r27,11
	ctx.r11.s64 = ctx.r27.s64 * 11;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x830df6f8
	goto loc_830DF6F8;
loc_830DF6F4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_830DF6F8:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830df710
	if (cr6.lt) goto loc_830DF710;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830df714
	if (cr6.lt) goto loc_830DF714;
loc_830DF710:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DF714:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830df7e4
	if (cr6.eq) goto loc_830DF7E4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830df734
	if (cr6.lt) goto loc_830DF734;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830df738
	if (cr6.lt) goto loc_830DF738;
loc_830DF734:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DF738:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830df758
	if (cr6.eq) goto loc_830DF758;
	// add r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 + ctx.r24.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830df75c
	goto loc_830DF75C;
loc_830DF758:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DF75C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830df7e4
	if (cr6.eq) goto loc_830DF7E4;
	// cmpw cr6,r26,r31
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r31.s32, xer);
	// beq cr6,0x830df7e4
	if (cr6.eq) goto loc_830DF7E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x830DF77C;
	sub_82A0C788(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830df7e4
	if (cr6.eq) goto loc_830DF7E4;
	// lfs f0,1280(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x830df7e4
	if (cr6.lt) goto loc_830DF7E4;
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x830df7e4
	if (cr6.lt) goto loc_830DF7E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x830DF7AC;
	sub_82A0C760(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830df7e4
	if (cr6.eq) goto loc_830DF7E4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830df7e4
	if (!cr6.eq) goto loc_830DF7E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x830DF7D0;
	sub_82A0C7B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830df7f8
	if (cr6.eq) goto loc_830DF7F8;
	// lbz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,95
	cr6.compare<uint32_t>(ctx.r11.u32, 95, xer);
	// bge cr6,0x830df80c
	if (!cr6.lt) goto loc_830DF80C;
loc_830DF7E4:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x830df6a4
	if (cr6.lt) goto loc_830DF6A4;
loc_830DF7F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7bc
	ctx.lr = 0x830DF808;
	__restfpr_26(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830DF80C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7bc
	ctx.lr = 0x830DF81C;
	__restfpr_26(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DF820"))) PPC_WEAK_FUNC(sub_830DF820);
PPC_FUNC_IMPL(__imp__sub_830DF820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,24608
	ctx.r9.s64 = ctx.r9.s64 + 24608;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x830df848
	if (!cr6.eq) goto loc_830DF848;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830DF848:
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DF854"))) PPC_WEAK_FUNC(sub_830DF854);
PPC_FUNC_IMPL(__imp__sub_830DF854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DF858"))) PPC_WEAK_FUNC(sub_830DF858);
PPC_FUNC_IMPL(__imp__sub_830DF858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830DF860;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addis r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 65536;
	// addi r31,r31,22272
	ctx.r31.s64 = ctx.r31.s64 + 22272;
	// lwz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x830df89c
	if (!cr6.eq) goto loc_830DF89C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830DF89C:
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r28,6112(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// bl 0x82a0c710
	ctx.lr = 0x830DF8B0;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lbz r27,252(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// bne cr6,0x830df8cc
	if (!cr6.eq) goto loc_830DF8CC;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_830DF8CC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 20);
	// bl 0x82a2b388
	ctx.lr = 0x830DF8D8;
	sub_82A2B388(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830df8f4
	if (cr6.lt) goto loc_830DF8F4;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830df8f8
	if (cr6.lt) goto loc_830DF8F8;
loc_830DF8F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DF8F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830df914
	if (cr6.eq) goto loc_830DF914;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x830DF90C;
	sub_82A0C7B0(ctx, base);
	// bl 0x8355a178
	ctx.lr = 0x830DF910;
	sub_8355A178(ctx, base);
	// lbz r10,50(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 50);
loc_830DF914:
	// lfs f13,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fabs f0,f13
	ctx.f0.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x830df948
	if (cr6.gt) goto loc_830DF948;
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x830df948
	if (cr6.lt) goto loc_830DF948;
	// cntlzw r9,r26
	ctx.r9.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x830df9a8
	goto loc_830DF9A8;
loc_830DF948:
	// extsb r8,r27
	ctx.r8.s64 = ctx.r27.s8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x830df990
	if (!cr6.lt) goto loc_830DF990;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r26,-2
	ctx.r9.s64 = ctx.r26.s64 + -2;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x830df9a8
	goto loc_830DF9A8;
loc_830DF990:
	// addi r11,r26,-1
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_830DF9A8:
	// cmplwi cr6,r26,3
	cr6.compare<uint32_t>(ctx.r26.u32, 3, xer);
	// bne cr6,0x830df9c0
	if (!cr6.eq) goto loc_830DF9C0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830df9e4
	if (cr6.eq) goto loc_830DF9E4;
	// b 0x830df9d4
	goto loc_830DF9D4;
loc_830DF9C0:
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(ctx.r26.u32, 4, xer);
	// bne cr6,0x830df9ec
	if (!cr6.eq) goto loc_830DF9EC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830df9e4
	if (!cr6.eq) goto loc_830DF9E4;
loc_830DF9D4:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830df9e8
	if (cr6.lt) goto loc_830DF9E8;
loc_830DF9E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DF9E8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_830DF9EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DF9F4"))) PPC_WEAK_FUNC(sub_830DF9F4);
PPC_FUNC_IMPL(__imp__sub_830DF9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DF9F8"))) PPC_WEAK_FUNC(sub_830DF9F8);
PPC_FUNC_IMPL(__imp__sub_830DF9F8) {
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
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fctidz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bge cr6,0x830dfba0
	if (!cr6.lt) goto loc_830DFBA0;
	// cmplwi cr6,r9,13
	cr6.compare<uint32_t>(ctx.r9.u32, 13, xer);
	// bge cr6,0x830dfba0
	if (!cr6.lt) goto loc_830DFBA0;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,12(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addis r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 65536;
	// addi r11,r11,24224
	ctx.r11.s64 = ctx.r11.s64 + 24224;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,240(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830dfba4
	if (cr6.eq) goto loc_830DFBA4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830dfa88
	if (cr6.eq) goto loc_830DFA88;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x830dfa90
	if (!cr6.eq) goto loc_830DFA90;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830dfba4
	if (!cr6.eq) goto loc_830DFBA4;
loc_830DFA88:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830dfba4
	goto loc_830DFBA4;
loc_830DFA90:
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bne cr6,0x830dfaa4
	if (!cr6.eq) goto loc_830DFAA4;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// b 0x830dfba4
	goto loc_830DFBA4;
loc_830DFAA4:
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bne cr6,0x830dfab8
	if (!cr6.eq) goto loc_830DFAB8;
	// srawi r11,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// b 0x830dfba4
	goto loc_830DFBA4;
loc_830DFAB8:
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x830dfacc
	if (!cr6.eq) goto loc_830DFACC;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// b 0x830dfba4
	goto loc_830DFBA4;
loc_830DFACC:
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// bne cr6,0x830dfae0
	if (!cr6.eq) goto loc_830DFAE0;
	// srawi r11,r11,9
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// b 0x830dfba4
	goto loc_830DFBA4;
loc_830DFAE0:
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// bne cr6,0x830dfaf4
	if (!cr6.eq) goto loc_830DFAF4;
	// srawi r11,r11,8
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// b 0x830dfba4
	goto loc_830DFBA4;
loc_830DFAF4:
	// cmplwi cr6,r9,7
	cr6.compare<uint32_t>(ctx.r9.u32, 7, xer);
	// bne cr6,0x830dfb08
	if (!cr6.eq) goto loc_830DFB08;
	// srawi r11,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// b 0x830dfba4
	goto loc_830DFBA4;
loc_830DFB08:
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// bne cr6,0x830dfb1c
	if (!cr6.eq) goto loc_830DFB1C;
	// srawi r11,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// b 0x830dfba4
	goto loc_830DFBA4;
loc_830DFB1C:
	// cmplwi cr6,r9,9
	cr6.compare<uint32_t>(ctx.r9.u32, 9, xer);
	// bne cr6,0x830dfb30
	if (!cr6.eq) goto loc_830DFB30;
	// srawi r11,r11,7
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 7;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// b 0x830dfba4
	goto loc_830DFBA4;
loc_830DFB30:
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bne cr6,0x830dfb44
	if (!cr6.eq) goto loc_830DFB44;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// b 0x830dfba4
	goto loc_830DFBA4;
loc_830DFB44:
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// bne cr6,0x830dfb5c
	if (!cr6.eq) goto loc_830DFB5C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r3,232(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 232);
	// bl 0x827b4488
	ctx.lr = 0x830DFB58;
	sub_827B4488(ctx, base);
	// b 0x830dfba4
	goto loc_830DFBA4;
loc_830DFB5C:
	// cmplwi cr6,r9,12
	cr6.compare<uint32_t>(ctx.r9.u32, 12, xer);
	// bne cr6,0x830dfba4
	if (!cr6.eq) goto loc_830DFBA4;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830dfba4
	if (cr6.eq) goto loc_830DFBA4;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,236(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r8,4472(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4472);
	// subf r3,r10,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r10.s64;
	// bl 0x830dffc8
	ctx.lr = 0x830DFB90;
	sub_830DFFC8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x830b16d8
	ctx.lr = 0x830DFB9C;
	sub_830B16D8(ctx, base);
	// b 0x830dfba4
	goto loc_830DFBA4;
loc_830DFBA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DFBA4:
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

__attribute__((alias("__imp__sub_830DFBBC"))) PPC_WEAK_FUNC(sub_830DFBBC);
PPC_FUNC_IMPL(__imp__sub_830DFBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DFBC0"))) PPC_WEAK_FUNC(sub_830DFBC0);
PPC_FUNC_IMPL(__imp__sub_830DFBC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830DFBC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x830da060
	ctx.lr = 0x830DFC04;
	sub_830DA060(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830dfc1c
	if (!cr6.eq) goto loc_830DFC1C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830DFC1C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830d7078
	ctx.lr = 0x830DFC28;
	sub_830D7078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x830dfc50
	if (!cr6.eq) goto loc_830DFC50;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x830db278
	ctx.lr = 0x830DFC48;
	sub_830DB278(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830DFC50:
	// lfs f2,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x830e0130
	ctx.lr = 0x830DFC5C;
	sub_830E0130(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DFC64"))) PPC_WEAK_FUNC(sub_830DFC64);
PPC_FUNC_IMPL(__imp__sub_830DFC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DFC68"))) PPC_WEAK_FUNC(sub_830DFC68);
PPC_FUNC_IMPL(__imp__sub_830DFC68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x830dfc78
	if (!cr6.eq) goto loc_830DFC78;
	// b 0x830dd050
	sub_830DD050(ctx, base);
	return;
loc_830DFC78:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DFC80"))) PPC_WEAK_FUNC(sub_830DFC80);
PPC_FUNC_IMPL(__imp__sub_830DFC80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830DFC88;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r26,292(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x830dfef0
	if (cr6.eq) goto loc_830DFEF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830dfef0
	if (cr6.eq) goto loc_830DFEF0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830dfef0
	if (cr6.eq) goto loc_830DFEF0;
	// lwz r11,4460(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4460);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830dfef0
	if (!cr6.eq) goto loc_830DFEF0;
	// lwz r11,5388(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5388);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x830dfef0
	if (!cr6.eq) goto loc_830DFEF0;
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x830dfcec
	if (!cr6.lt) goto loc_830DFCEC;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x830dfd14
	goto loc_830DFD14;
loc_830DFCEC:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x830dfcfc
	if (!cr6.lt) goto loc_830DFCFC;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x830dfd14
	goto loc_830DFD14;
loc_830DFCFC:
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
	// clrlwi r27,r6,31
	ctx.r27.u64 = ctx.r6.u32 & 0x1;
loc_830DFD14:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830dfd28
	if (cr6.lt) goto loc_830DFD28;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dfd2c
	if (cr6.lt) goto loc_830DFD2C;
loc_830DFD28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DFD2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dfef0
	if (cr6.eq) goto loc_830DFEF0;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x830dfef0
	if (!cr6.lt) goto loc_830DFEF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82a229e8
	ctx.lr = 0x830DFD4C;
	sub_82A229E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830dfef0
	if (cr6.eq) goto loc_830DFEF0;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// ld r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 32);
	// bl 0x82a2b388
	ctx.lr = 0x830DFD68;
	sub_82A2B388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830dfd80
	if (cr6.lt) goto loc_830DFD80;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dfd84
	if (cr6.lt) goto loc_830DFD84;
loc_830DFD80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DFD84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dfef0
	if (cr6.eq) goto loc_830DFEF0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge cr6,0x830dfda0
	if (!cr6.lt) goto loc_830DFDA0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x830dfdc8
	goto loc_830DFDC8;
loc_830DFDA0:
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// bge cr6,0x830dfdb0
	if (!cr6.lt) goto loc_830DFDB0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x830dfdc8
	goto loc_830DFDC8;
loc_830DFDB0:
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
loc_830DFDC8:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// ld r4,40(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 40);
	// bl 0x82a2b388
	ctx.lr = 0x830DFDD4;
	sub_82A2B388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830dfdec
	if (cr6.lt) goto loc_830DFDEC;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830dfdf0
	if (cr6.lt) goto loc_830DFDF0;
loc_830DFDEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830DFDF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830dfef0
	if (cr6.eq) goto loc_830DFEF0;
	// addi r3,r26,5868
	ctx.r3.s64 = ctx.r26.s64 + 5868;
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// bl 0x82a49338
	ctx.lr = 0x830DFE08;
	sub_82A49338(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830dfef0
	if (cr6.eq) goto loc_830DFEF0;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bne cr6,0x830dfebc
	if (!cr6.eq) goto loc_830DFEBC;
	// mulli r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 * 44;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,15
	cr6.compare<int32_t>(ctx.r10.s32, 15, xer);
	// bne cr6,0x830dfe40
	if (!cr6.eq) goto loc_830DFE40;
loc_830DFE34:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830DFE40:
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bne cr6,0x830dfebc
	if (!cr6.eq) goto loc_830DFEBC;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// bne cr6,0x830dfe68
	if (!cr6.eq) goto loc_830DFE68;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830de4a8
	ctx.lr = 0x830DFE5C;
	sub_830DE4A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x830dfe34
	if (cr6.eq) goto loc_830DFE34;
loc_830DFE68:
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bne cr6,0x830dfebc
	if (!cr6.eq) goto loc_830DFEBC;
	// ld r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, xer);
	// bne cr6,0x830dfebc
	if (!cr6.eq) goto loc_830DFEBC;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// cmpwi cr6,r11,50
	cr6.compare<int32_t>(ctx.r11.s32, 50, xer);
	// beq cr6,0x830dfebc
	if (cr6.eq) goto loc_830DFEBC;
	// cmpwi cr6,r11,51
	cr6.compare<int32_t>(ctx.r11.s32, 51, xer);
	// beq cr6,0x830dfebc
	if (cr6.eq) goto loc_830DFEBC;
	// lwzx r11,r10,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,50
	cr6.compare<int32_t>(ctx.r11.s32, 50, xer);
	// beq cr6,0x830dfebc
	if (cr6.eq) goto loc_830DFEBC;
	// cmpwi cr6,r11,51
	cr6.compare<int32_t>(ctx.r11.s32, 51, xer);
	// bne cr6,0x830dfe34
	if (!cr6.eq) goto loc_830DFE34;
loc_830DFEBC:
	// ld r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 40);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, xer);
	// bne cr6,0x830dfef0
	if (!cr6.eq) goto loc_830DFEF0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830de548
	ctx.lr = 0x830DFEE0;
	sub_830DE548(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x830dfef4
	if (cr6.eq) goto loc_830DFEF4;
loc_830DFEF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830DFEF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830DFEFC"))) PPC_WEAK_FUNC(sub_830DFEFC);
PPC_FUNC_IMPL(__imp__sub_830DFEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830DFF00"))) PPC_WEAK_FUNC(sub_830DFF00);
PPC_FUNC_IMPL(__imp__sub_830DFF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x830dff40
	if (!cr6.eq) goto loc_830DFF40;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x830dff9c
	if (cr6.eq) goto loc_830DFF9C;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// b 0x830dff98
	goto loc_830DFF98;
loc_830DFF40:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x830dff6c
	if (!cr6.eq) goto loc_830DFF6C;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x830dff9c
	if (cr6.eq) goto loc_830DFF9C;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x830dff9c
	if (cr6.eq) goto loc_830DFF9C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x830dff9c
	if (cr6.eq) goto loc_830DFF9C;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// b 0x830dff98
	goto loc_830DFF98;
loc_830DFF6C:
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x830dff90
	if (!cr6.eq) goto loc_830DFF90;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// beq cr6,0x830dff9c
	if (cr6.eq) goto loc_830DFF9C;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// beq cr6,0x830dff9c
	if (cr6.eq) goto loc_830DFF9C;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// b 0x830dff98
	goto loc_830DFF98;
loc_830DFF90:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
loc_830DFF98:
	// bne cr6,0x830dffa0
	if (!cr6.eq) goto loc_830DFFA0;
loc_830DFF9C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_830DFFA0:
	// addi r11,r9,5
	ctx.r11.s64 = ctx.r9.s64 + 5;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// rlwinm r8,r9,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830DFFC8"))) PPC_WEAK_FUNC(sub_830DFFC8);
PPC_FUNC_IMPL(__imp__sub_830DFFC8) {
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
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x83740868
	ctx.lr = 0x830DFFE0;
	sub_83740868(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f12,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E0000"))) PPC_WEAK_FUNC(sub_830E0000);
PPC_FUNC_IMPL(__imp__sub_830E0000) {
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
	// blt cr6,0x830e0034
	if (cr6.lt) goto loc_830E0034;
loc_830E001C:
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
loc_830E0034:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E0040;
	sub_82A0C710(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e001c
	if (cr6.eq) goto loc_830E001C;
	// addi r11,r3,3612
	ctx.r11.s64 = ctx.r3.s64 + 3612;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x830e0074
	if (!cr6.lt) goto loc_830E0074;
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
loc_830E0074:
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

__attribute__((alias("__imp__sub_830E008C"))) PPC_WEAK_FUNC(sub_830E008C);
PPC_FUNC_IMPL(__imp__sub_830E008C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E0090"))) PPC_WEAK_FUNC(sub_830E0090);
PPC_FUNC_IMPL(__imp__sub_830E0090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830e00a8
	if (cr6.lt) goto loc_830E00A8;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x830e00ac
	if (cr6.lt) goto loc_830E00AC;
loc_830E00A8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830E00AC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830e00c0
	if (!cr6.eq) goto loc_830E00C0;
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_830E00C0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x830e00d0
	if (!cr6.lt) goto loc_830E00D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830e00f8
	goto loc_830E00F8;
loc_830E00D0:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x830e00e0
	if (!cr6.lt) goto loc_830E00E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830e00f8
	goto loc_830E00F8;
loc_830E00E0:
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
loc_830E00F8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830e0124
	if (cr6.lt) goto loc_830E0124;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x830e0124
	if (!cr6.lt) goto loc_830E0124;
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
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// b 0x830e0128
	goto loc_830E0128;
loc_830E0124:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830E0128:
	// b 0x830e0000
	sub_830E0000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E012C"))) PPC_WEAK_FUNC(sub_830E012C);
PPC_FUNC_IMPL(__imp__sub_830E012C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E0130"))) PPC_WEAK_FUNC(sub_830E0130);
PPC_FUNC_IMPL(__imp__sub_830E0130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830E0138;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// blt cr6,0x830e0178
	if (cr6.lt) goto loc_830E0178;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E0178:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r26,6112(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// bl 0x82a0c710
	ctx.lr = 0x830E018C;
	sub_82A0C710(ctx, base);
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// blt cr6,0x830e0214
	if (cr6.lt) goto loc_830E0214;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// bgt cr6,0x830e0214
	if (cr6.gt) goto loc_830E0214;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a48788
	ctx.lr = 0x830E01BC;
	sub_82A48788(ctx, base);
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// bne cr6,0x830e01f4
	if (!cr6.eq) goto loc_830E01F4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830e01d8
	if (cr6.eq) goto loc_830E01D8;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830e01dc
	if (!cr6.eq) goto loc_830E01DC;
loc_830E01D8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830E01DC:
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E01F4:
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r27,r10,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E0214:
	// cmpwi cr6,r31,5
	cr6.compare<int32_t>(ctx.r31.s32, 5, xer);
	// blt cr6,0x830e0260
	if (cr6.lt) goto loc_830E0260;
	// cmpwi cr6,r31,15
	cr6.compare<int32_t>(ctx.r31.s32, 15, xer);
	// bgt cr6,0x830e0260
	if (cr6.gt) goto loc_830E0260;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a491f8
	ctx.lr = 0x830E023C;
	sub_82A491F8(ctx, base);
	// addi r11,r31,-5
	ctx.r11.s64 = ctx.r31.s64 + -5;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r27,r9,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E0260:
	// cmpwi cr6,r31,16
	cr6.compare<int32_t>(ctx.r31.s32, 16, xer);
	// blt cr6,0x830e0488
	if (cr6.lt) goto loc_830E0488;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// bgt cr6,0x830e0488
	if (cr6.gt) goto loc_830E0488;
	// addi r28,r31,-16
	ctx.r28.s64 = ctx.r31.s64 + -16;
	// cmpwi cr6,r31,19
	cr6.compare<int32_t>(ctx.r31.s32, 19, xer);
	// bne cr6,0x830e02cc
	if (!cr6.eq) goto loc_830E02CC;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lfs f13,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// li r11,1
	ctx.r11.s64 = 1;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f8,f10,f30
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fcmpu cr6,f8,f9
	cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bgt cr6,0x830e0354
	if (cr6.gt) goto loc_830E0354;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E02CC:
	// cmpwi cr6,r31,20
	cr6.compare<int32_t>(ctx.r31.s32, 20, xer);
	// bne cr6,0x830e031c
	if (!cr6.eq) goto loc_830E031C;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r11,1
	ctx.r11.s64 = 1;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x830e0354
	if (cr6.lt) goto loc_830E0354;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E031C:
	// cmpwi cr6,r31,21
	cr6.compare<int32_t>(ctx.r31.s32, 21, xer);
	// bne cr6,0x830e036c
	if (!cr6.eq) goto loc_830E036C;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bgt cr6,0x830e0354
	if (cr6.gt) goto loc_830E0354;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E0354:
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E036C:
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// bne cr6,0x830e0454
	if (!cr6.eq) goto loc_830E0454;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// fabs f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f12,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// frsp f0,f9
	ctx.f0.f64 = double(float(ctx.f9.f64));
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ble cr6,0x830e0418
	if (!cr6.gt) goto loc_830E0418;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fsubs f11,f30,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f11.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f30,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f30.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f12.f64 = double(temp.f32);
	// fsel f10,f31,f0,f12
	ctx.f10.f64 = ctx.f31.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f8,f31,f0
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmadds f7,f8,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fsqrts f31,f7
	ctx.f31.f64 = double(float(sqrt(ctx.f7.f64)));
	// bl 0x825ca9d8
	ctx.lr = 0x830E0408;
	sub_825CA9D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825eb4d0
	ctx.lr = 0x830E0414;
	sub_825EB4D0(ctx, base);
	// b 0x830e041c
	goto loc_830E041C;
loc_830E0418:
	// fnmsubs f31,f0,f30,f12
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(-(ctx.f0.f64 * ctx.f30.f64 - ctx.f12.f64)));
loc_830E041C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,27680(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27680);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x830e054c
	if (!cr6.lt) goto loc_830E054C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-11360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11360);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x830e054c
	if (!cr6.lt) goto loc_830E054C;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E0454:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a48818
	ctx.lr = 0x830E0468;
	sub_82A48818(ctx, base);
	// subf r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r27,r10,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E0488:
	// cmpwi cr6,r31,23
	cr6.compare<int32_t>(ctx.r31.s32, 23, xer);
	// blt cr6,0x830e051c
	if (cr6.lt) goto loc_830E051C;
	// cmpwi cr6,r31,27
	cr6.compare<int32_t>(ctx.r31.s32, 27, xer);
	// bgt cr6,0x830e051c
	if (cr6.gt) goto loc_830E051C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r30,r31,-23
	ctx.r30.s64 = ctx.r31.s64 + -23;
	// bl 0x82a487a8
	ctx.lr = 0x830E04B4;
	sub_82A487A8(ctx, base);
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bne cr6,0x830e04c4
	if (!cr6.eq) goto loc_830E04C4;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x830e0504
	if (cr6.eq) goto loc_830E0504;
loc_830E04C4:
	// cmpwi cr6,r31,26
	cr6.compare<int32_t>(ctx.r31.s32, 26, xer);
	// bne cr6,0x830e04fc
	if (!cr6.eq) goto loc_830E04FC;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830e04e0
	if (cr6.eq) goto loc_830E04E0;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830e04e4
	if (!cr6.eq) goto loc_830E04E4;
loc_830E04E0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830E04E4:
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E04FC:
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// bne cr6,0x830e054c
	if (!cr6.eq) goto loc_830E054C;
loc_830E0504:
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E051C:
	// cmpwi cr6,r31,28
	cr6.compare<int32_t>(ctx.r31.s32, 28, xer);
	// blt cr6,0x830e054c
	if (cr6.lt) goto loc_830E054C;
	// cmpwi cr6,r31,42
	cr6.compare<int32_t>(ctx.r31.s32, 42, xer);
	// bgt cr6,0x830e054c
	if (cr6.gt) goto loc_830E054C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a48068
	ctx.lr = 0x830E0540;
	sub_82A48068(ctx, base);
	// addi r11,r31,-28
	ctx.r11.s64 = ctx.r31.s64 + -28;
	// sraw r10,r3,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r10.s64 = ctx.r3.s32 >> temp.u32;
	// clrlwi r27,r10,31
	ctx.r27.u64 = ctx.r10.u32 & 0x1;
loc_830E054C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E0560"))) PPC_WEAK_FUNC(sub_830E0560);
PPC_FUNC_IMPL(__imp__sub_830E0560) {
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
	// cmplwi cr6,r4,55
	cr6.compare<uint32_t>(ctx.r4.u32, 55, xer);
	// bge cr6,0x830e05f8
	if (!cr6.lt) goto loc_830E05F8;
	// cmplwi cr6,r4,47
	cr6.compare<uint32_t>(ctx.r4.u32, 47, xer);
	// blt cr6,0x830e05c4
	if (cr6.lt) goto loc_830E05C4;
	// cmplwi cr6,r4,50
	cr6.compare<uint32_t>(ctx.r4.u32, 50, xer);
	// ble cr6,0x830e058c
	if (!cr6.gt) goto loc_830E058C;
	// cmplwi cr6,r4,52
	cr6.compare<uint32_t>(ctx.r4.u32, 52, xer);
	// bne cr6,0x830e05c4
	if (!cr6.eq) goto loc_830E05C4;
loc_830E058C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e05f8
	if (cr6.eq) goto loc_830E05F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82a23768
	ctx.lr = 0x830E05A4;
	sub_82A23768(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
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
loc_830E05C4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e05f8
	if (cr6.eq) goto loc_830E05F8;
	// cmpwi cr6,r4,55
	cr6.compare<int32_t>(ctx.r4.s32, 55, xer);
	// bge cr6,0x830e05f8
	if (!cr6.lt) goto loc_830E05F8;
	// lbzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
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
loc_830E05F8:
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

__attribute__((alias("__imp__sub_830E060C"))) PPC_WEAK_FUNC(sub_830E060C);
PPC_FUNC_IMPL(__imp__sub_830E060C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E0610"))) PPC_WEAK_FUNC(sub_830E0610);
PPC_FUNC_IMPL(__imp__sub_830E0610) {
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
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// beq cr6,0x830e0638
	if (cr6.eq) goto loc_830E0638;
loc_830E0630:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e06c8
	goto loc_830E06C8;
loc_830E0638:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a22b40
	ctx.lr = 0x830E0648;
	sub_82A22B40(ctx, base);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// bl 0x82a2b470
	ctx.lr = 0x830E0660;
	sub_82A2B470(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e0630
	if (cr6.eq) goto loc_830E0630;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830E0680;
	sub_82A0C738(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a163f0
	ctx.lr = 0x830E0688;
	sub_82A163F0(ctx, base);
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c710
	ctx.lr = 0x830E069C;
	sub_82A0C710(ctx, base);
	// addi r11,r3,3612
	ctx.r11.s64 = ctx.r3.s64 + 3612;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x830e06b8
	if (!cr6.lt) goto loc_830E06B8;
	// addi r10,r31,3826
	ctx.r10.s64 = ctx.r31.s64 + 3826;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x830e06bc
	goto loc_830E06BC;
loc_830E06B8:
	// lwz r11,15304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15304);
loc_830E06BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830E06C8:
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

__attribute__((alias("__imp__sub_830E06E0"))) PPC_WEAK_FUNC(sub_830E06E0);
PPC_FUNC_IMPL(__imp__sub_830E06E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830E06E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r5,8
	cr6.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// blt cr6,0x830e0710
	if (cr6.lt) goto loc_830E0710;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830E0710:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a22b40
	ctx.lr = 0x830E0720;
	sub_82A22B40(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// bge cr6,0x830e0734
	if (!cr6.lt) goto loc_830E0734;
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, xer);
	// b 0x830e07dc
	goto loc_830E07DC;
loc_830E0734:
	// bne cr6,0x830e0778
	if (!cr6.eq) goto loc_830E0778;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x830e0758
	if (!cr6.gt) goto loc_830E0758;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// ble cr6,0x830e0750
	if (!cr6.gt) goto loc_830E0750;
	// cmpwi cr6,r4,16
	cr6.compare<int32_t>(ctx.r4.s32, 16, xer);
	// bne cr6,0x830e0758
	if (!cr6.eq) goto loc_830E0758;
loc_830E0750:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830e075c
	goto loc_830E075C;
loc_830E0758:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E075C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e07e4
	if (cr6.eq) goto loc_830E07E4;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830E0778:
	// cmplwi cr6,r31,19
	cr6.compare<uint32_t>(ctx.r31.u32, 19, xer);
	// bne cr6,0x830e07a4
	if (!cr6.eq) goto loc_830E07A4;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bne cr6,0x830e0758
	if (!cr6.eq) goto loc_830E0758;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x830e079c
	if (cr6.eq) goto loc_830E079C;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x830e0758
	if (!cr6.eq) goto loc_830E0758;
loc_830E079C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830e075c
	goto loc_830E075C;
loc_830E07A4:
	// cmplwi cr6,r31,20
	cr6.compare<uint32_t>(ctx.r31.u32, 20, xer);
	// bne cr6,0x830e07b8
	if (!cr6.eq) goto loc_830E07B8;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// b 0x830e07dc
	goto loc_830E07DC;
loc_830E07B8:
	// cmplwi cr6,r31,21
	cr6.compare<uint32_t>(ctx.r31.u32, 21, xer);
	// bne cr6,0x830e07d8
	if (!cr6.eq) goto loc_830E07D8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e0610
	ctx.lr = 0x830E07CC;
	sub_830E0610(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830E07D8:
	// cmplwi cr6,r31,22
	cr6.compare<uint32_t>(ctx.r31.u32, 22, xer);
loc_830E07DC:
	// bne cr6,0x830e07e4
	if (!cr6.eq) goto loc_830E07E4;
	// li r28,1
	ctx.r28.s64 = 1;
loc_830E07E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E07F0"))) PPC_WEAK_FUNC(sub_830E07F0);
PPC_FUNC_IMPL(__imp__sub_830E07F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x830E07F8;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x830e08d0
	if (cr6.lt) goto loc_830E08D0;
	// cmpwi cr6,r8,8
	cr6.compare<int32_t>(ctx.r8.s32, 8, xer);
	// bge cr6,0x830e08d0
	if (!cr6.lt) goto loc_830E08D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// lwz r29,132(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830E083C;
	sub_82A22B40(ctx, base);
	// lwz r27,16(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
loc_830E0844:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830E0850;
	sub_82A22B40(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// bl 0x83740868
	ctx.lr = 0x830E0868;
	sub_83740868(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// fcmpu cr6,f11,f31
	cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bgt cr6,0x830e08d0
	if (cr6.gt) goto loc_830E08D0;
	// cmpwi cr6,r23,2
	cr6.compare<int32_t>(ctx.r23.s32, 2, xer);
	// beq cr6,0x830e0894
	if (cr6.eq) goto loc_830E0894;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, xer);
	// bne cr6,0x830e08d0
	if (!cr6.eq) goto loc_830E08D0;
loc_830E0894:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830e06e0
	ctx.lr = 0x830E08A4;
	sub_830E06E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e08c4
	if (cr6.eq) goto loc_830E08C4;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, xer);
	// beq cr6,0x830e08e0
	if (cr6.eq) goto loc_830E08E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
loc_830E08C4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// blt cr6,0x830e0844
	if (cr6.lt) goto loc_830E0844;
loc_830E08D0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_830E08E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E08F0"))) PPC_WEAK_FUNC(sub_830E08F0);
PPC_FUNC_IMPL(__imp__sub_830E08F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830E08F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,132(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r29,6112(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// bl 0x82a22b40
	ctx.lr = 0x830E0920;
	sub_82A22B40(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r9,5
	cr6.compare<int32_t>(ctx.r9.s32, 5, xer);
	// beq cr6,0x830e0938
	if (cr6.eq) goto loc_830E0938;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830E0938:
	// li r31,0
	ctx.r31.s64 = 0;
loc_830E093C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x830E0948;
	sub_82A44AC0(ctx, base);
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830E0958:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830e0958
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E0958;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x830e0990
	if (!cr6.lt) goto loc_830E0990;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,200
	cr6.compare<int32_t>(ctx.r31.s32, 200, xer);
	// blt cr6,0x830e093c
	if (cr6.lt) goto loc_830E093C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830E0990:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E09A0"))) PPC_WEAK_FUNC(sub_830E09A0);
PPC_FUNC_IMPL(__imp__sub_830E09A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830E09A8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce778
	ctx.lr = 0x830E09B0;
	__savefpr_28(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,0(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f31,4(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// stfs f31,8(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r26,32(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r31,6112(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// bl 0x830e08f0
	ctx.lr = 0x830E09E8;
	sub_830E08F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x830e0b80
	if (!cr6.gt) goto loc_830E0B80;
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x830E0A00;
	sub_82A44AC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x82a44ac0
	ctx.lr = 0x830E0A28;
	sub_82A44AC0(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r3,132(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 132);
	// bl 0x82a22b40
	ctx.lr = 0x830E0A50;
	sub_82A22B40(ctx, base);
	// ld r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82a0c710
	ctx.lr = 0x830E0A64;
	sub_82A0C710(ctx, base);
	// lbz r9,252(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f12,192(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// frsp f30,f10
	ctx.f30.f64 = double(float(ctx.f10.f64));
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f29,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// addi r6,r1,216
	ctx.r6.s64 = ctx.r1.s64 + 216;
	// lfs f28,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f28.f64 = double(temp.f32);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// fmuls f7,f13,f30
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f7,184(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f30
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f4,160(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f29,216(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f9,224(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f28,120(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82a5b500
	ctx.lr = 0x830E0AF0;
	sub_82A5B500(ctx, base);
	// lfs f3,268(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f3,f31
	cr6.compare(ctx.f3.f64, ctx.f31.f64);
	// blt cr6,0x830e0b80
	if (cr6.lt) goto loc_830E0B80;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,200
	ctx.r7.s64 = ctx.r1.s64 + 200;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f31,252(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// addi r6,r1,168
	ctx.r6.s64 = ctx.r1.s64 + 168;
	// stfs f12,248(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f28,200(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// bl 0x82a5b500
	ctx.lr = 0x830E0B5C;
	sub_82A5B500(ctx, base);
	// lfs f9,236(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f31
	cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// blt cr6,0x830e0b80
	if (cr6.lt) goto loc_830E0B80;
	// lfs f0,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_830E0B80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7c4
	ctx.lr = 0x830E0B90;
	__restfpr_28(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E0B94"))) PPC_WEAK_FUNC(sub_830E0B94);
PPC_FUNC_IMPL(__imp__sub_830E0B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E0B98"))) PPC_WEAK_FUNC(sub_830E0B98);
PPC_FUNC_IMPL(__imp__sub_830E0B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x830e0bc8
	if (cr6.eq) goto loc_830E0BC8;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x830e0bc8
	if (cr6.eq) goto loc_830E0BC8;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x830e0bbc
	if (cr6.eq) goto loc_830E0BBC;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bne cr6,0x830e0bcc
	if (!cr6.eq) goto loc_830E0BCC;
loc_830E0BBC:
	// li r11,15
	ctx.r11.s64 = 15;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_830E0BC8:
	// li r11,45
	ctx.r11.s64 = 45;
loc_830E0BCC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E0BD4"))) PPC_WEAK_FUNC(sub_830E0BD4);
PPC_FUNC_IMPL(__imp__sub_830E0BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E0BD8"))) PPC_WEAK_FUNC(sub_830E0BD8);
PPC_FUNC_IMPL(__imp__sub_830E0BD8) {
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
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bne cr6,0x830e0c04
	if (!cr6.eq) goto loc_830E0C04;
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
loc_830E0C04:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x830e0c20
	if (cr6.eq) goto loc_830E0C20;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// beq cr6,0x830e0c20
	if (cr6.eq) goto loc_830E0C20;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x830e0c30
	if (!cr6.eq) goto loc_830E0C30;
loc_830E0C20:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x830d9008
	ctx.lr = 0x830E0C2C;
	sub_830D9008(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830E0C30:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E0C44"))) PPC_WEAK_FUNC(sub_830E0C44);
PPC_FUNC_IMPL(__imp__sub_830E0C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E0C48"))) PPC_WEAK_FUNC(sub_830E0C48);
PPC_FUNC_IMPL(__imp__sub_830E0C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830E0C50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi r26,r4,24
	ctx.r26.u64 = ctx.r4.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
loc_830E0C6C:
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// beq cr6,0x830e0c7c
	if (cr6.eq) goto loc_830E0C7C;
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(ctx.r26.u32, 2, xer);
	// bne cr6,0x830e0cd0
	if (!cr6.eq) goto loc_830E0CD0;
loc_830E0C7C:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x830e0cbc
	if (!cr6.eq) goto loc_830E0CBC;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x830d8df8
	ctx.lr = 0x830E0C9C;
	sub_830D8DF8(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addme r7,r8
	temp.u8 = (ctx.r8.u32 != 0) | (xer.ca != 0);
	ctx.r7.s64 = ctx.r8.s64 + xer.ca - 1;
	xer.ca = temp.u8;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// b 0x830e0cd0
	goto loc_830E0CD0;
loc_830E0CBC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x830d8d38
	ctx.lr = 0x830E0CC8;
	sub_830D8D38(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
loc_830E0CD0:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x830e0c6c
	if (cr6.lt) goto loc_830E0C6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E0CEC"))) PPC_WEAK_FUNC(sub_830E0CEC);
PPC_FUNC_IMPL(__imp__sub_830E0CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E0CF0"))) PPC_WEAK_FUNC(sub_830E0CF0);
PPC_FUNC_IMPL(__imp__sub_830E0CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x830E0CF8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// blt cr6,0x830e0d28
	if (cr6.lt) goto loc_830E0D28;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830E0D28:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// bl 0x830d7e10
	ctx.lr = 0x830E0D34;
	sub_830D7E10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x830e0e28
	if (!cr6.gt) goto loc_830E0E28;
loc_830E0D44:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830d9888
	ctx.lr = 0x830E0D54;
	sub_830D9888(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830e0e28
	if (cr6.eq) goto loc_830E0E28;
	// lbz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// bl 0x82a23e98
	ctx.lr = 0x830E0D6C;
	sub_82A23E98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830d7110
	ctx.lr = 0x830E0D74;
	sub_830D7110(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d7098
	ctx.lr = 0x830E0D80;
	sub_830D7098(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e0dd8
	if (cr6.eq) goto loc_830E0DD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a23e98
	ctx.lr = 0x830E0D94;
	sub_82A23E98(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830e0dc0
	if (cr6.eq) goto loc_830E0DC0;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x830e0dc0
	if (cr6.eq) goto loc_830E0DC0;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x830e0db8
	if (cr6.eq) goto loc_830E0DB8;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x830e0dc4
	if (!cr6.eq) goto loc_830E0DC4;
loc_830E0DB8:
	// li r30,15
	ctx.r30.s64 = 15;
	// b 0x830e0dc4
	goto loc_830E0DC4;
loc_830E0DC0:
	// li r30,45
	ctx.r30.s64 = 45;
loc_830E0DC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a23e98
	ctx.lr = 0x830E0DCC;
	sub_82A23E98(ctx, base);
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// bl 0x830d7110
	ctx.lr = 0x830E0DD4;
	sub_830D7110(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830E0DD8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x830e0e28
	if (cr6.lt) goto loc_830E0E28;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bgt cr6,0x830e0e1c
	if (cr6.gt) goto loc_830E0E1C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830e0e18
	if (!cr6.lt) goto loc_830E0E18;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830d99e8
	ctx.lr = 0x830E0E0C;
	sub_830D99E8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// bne cr6,0x830e0e1c
	if (!cr6.eq) goto loc_830E0E1C;
loc_830E0E18:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_830E0E1C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, xer);
	// blt cr6,0x830e0d44
	if (cr6.lt) goto loc_830E0D44;
loc_830E0E28:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E0E34"))) PPC_WEAK_FUNC(sub_830E0E34);
PPC_FUNC_IMPL(__imp__sub_830E0E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E0E38"))) PPC_WEAK_FUNC(sub_830E0E38);
PPC_FUNC_IMPL(__imp__sub_830E0E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x830e0e4c
	if (cr6.eq) goto loc_830E0E4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830E0E4C:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
loc_830E0E5C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r7,255
	cr6.compare<int32_t>(ctx.r7.s32, 255, xer);
	// bne cr6,0x830e0e7c
	if (!cr6.eq) goto loc_830E0E7C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// blt cr6,0x830e0e5c
	if (cr6.lt) goto loc_830E0E5C;
	// b 0x830e0e80
	goto loc_830E0E80;
loc_830E0E7C:
	// li r9,1
	ctx.r9.s64 = 1;
loc_830E0E80:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
loc_830E0E88:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,255
	cr6.compare<int32_t>(ctx.r7.s32, 255, xer);
	// bne cr6,0x830e0ea8
	if (!cr6.eq) goto loc_830E0EA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x830e0e88
	if (cr6.lt) goto loc_830E0E88;
	// b 0x830e0eac
	goto loc_830E0EAC;
loc_830E0EA8:
	// li r8,1
	ctx.r8.s64 = 1;
loc_830E0EAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x830e0ef4
	if (cr6.lt) goto loc_830E0EF4;
	// beq cr6,0x830e0eec
	if (cr6.eq) goto loc_830E0EEC;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e0ee0
	if (cr6.eq) goto loc_830E0EE0;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x830e0ee4
	if (!cr6.eq) goto loc_830E0EE4;
loc_830E0EE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E0EE4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_830E0EEC:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
loc_830E0EF4:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E0EFC"))) PPC_WEAK_FUNC(sub_830E0EFC);
PPC_FUNC_IMPL(__imp__sub_830E0EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E0F00"))) PPC_WEAK_FUNC(sub_830E0F00);
PPC_FUNC_IMPL(__imp__sub_830E0F00) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r7,4460(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// lwz r9,4456(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x830e0f58
	if (!cr6.eq) goto loc_830E0F58;
	// lwz r10,5356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5356);
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bne cr6,0x830e0f50
	if (!cr6.eq) goto loc_830E0F50;
	// lwz r11,5388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5388);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830e0f54
	if (cr6.eq) goto loc_830E0F54;
loc_830E0F50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E0F54:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
loc_830E0F58:
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x830e0f74
	if (!cr6.eq) goto loc_830E0F74;
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
loc_830E0F74:
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// bne cr6,0x830e0f90
	if (!cr6.eq) goto loc_830E0F90;
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
loc_830E0F90:
	// cmpwi cr6,r9,6
	cr6.compare<int32_t>(ctx.r9.s32, 6, xer);
	// bne cr6,0x830e0fac
	if (!cr6.eq) goto loc_830E0FAC;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830E0FAC:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e0fc8
	if (cr6.eq) goto loc_830E0FC8;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a225d0
	ctx.lr = 0x830E0FC4;
	sub_82A225D0(ctx, base);
	// bl 0x8291ae08
	ctx.lr = 0x830E0FC8;
	sub_8291AE08(ctx, base);
loc_830E0FC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E0FD8"))) PPC_WEAK_FUNC(sub_830E0FD8);
PPC_FUNC_IMPL(__imp__sub_830E0FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x830E0FE0;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fctidz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r22,84(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r24,84(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// bge cr6,0x830e1044
	if (!cr6.lt) goto loc_830E1044;
loc_830E1030:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830E1044:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r26,132(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a22ac0
	ctx.lr = 0x830E1054;
	sub_82A22AC0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x830e1114
	if (!cr6.eq) goto loc_830E1114;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x830e1030
	if (!cr6.eq) goto loc_830E1030;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ble cr6,0x830e110c
	if (!cr6.gt) goto loc_830E110C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,-23848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_830E1090:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a22a50
	ctx.lr = 0x830E109C;
	sub_82A22A50(ctx, base);
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// bne cr6,0x830e1100
	if (!cr6.eq) goto loc_830E1100;
	// lbz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e10c0
	if (!cr6.eq) goto loc_830E10C0;
	// lbz r11,337(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 337);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e1100
	if (cr6.eq) goto loc_830E1100;
loc_830E10C0:
	// addi r4,r3,330
	ctx.r4.s64 = ctx.r3.s64 + 330;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a3fb88
	ctx.lr = 0x830E10CC;
	sub_82A3FB88(ctx, base);
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,8152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8144);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fsubs f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fmadds f7,f8,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f6,f30
	cr6.compare(ctx.f6.f64, ctx.f30.f64);
	// bgt cr6,0x830e1100
	if (cr6.gt) goto loc_830E1100;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830E1100:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, xer);
	// blt cr6,0x830e1090
	if (cr6.lt) goto loc_830E1090;
loc_830E110C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x830e1300
	goto loc_830E1300;
loc_830E1114:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x830e1218
	if (!cr6.eq) goto loc_830E1218;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bgt cr6,0x830e1030
	if (cr6.gt) goto loc_830E1030;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a22a50
	ctx.lr = 0x830E1130;
	sub_82A22A50(ctx, base);
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// bne cr6,0x830e1030
	if (!cr6.eq) goto loc_830E1030;
	// lbz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e1158
	if (!cr6.eq) goto loc_830E1158;
	// lbz r11,337(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 337);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x830e115c
	if (cr6.eq) goto loc_830E115C;
loc_830E1158:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830E115C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x830e118c
	if (!cr6.eq) goto loc_830E118C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e1310
	if (cr6.eq) goto loc_830E1310;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830E118C:
	// cmplwi cr6,r24,1
	cr6.compare<uint32_t>(ctx.r24.u32, 1, xer);
	// beq cr6,0x830e11f4
	if (cr6.eq) goto loc_830E11F4;
	// cmplwi cr6,r24,2
	cr6.compare<uint32_t>(ctx.r24.u32, 2, xer);
	// beq cr6,0x830e11bc
	if (cr6.eq) goto loc_830E11BC;
	// cmplwi cr6,r24,3
	cr6.compare<uint32_t>(ctx.r24.u32, 3, xer);
	// bne cr6,0x830e11e0
	if (!cr6.eq) goto loc_830E11E0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e11c8
	if (!cr6.eq) goto loc_830E11C8;
	// lbz r11,335(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 335);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e11c8
	if (!cr6.eq) goto loc_830E11C8;
loc_830E11BC:
	// lbz r11,334(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 334);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e1310
	if (cr6.eq) goto loc_830E1310;
loc_830E11C8:
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830E11E0:
	// cmplwi cr6,r24,4
	cr6.compare<uint32_t>(ctx.r24.u32, 4, xer);
	// bne cr6,0x830e1310
	if (!cr6.eq) goto loc_830E1310;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e1200
	if (!cr6.eq) goto loc_830E1200;
loc_830E11F4:
	// lbz r11,335(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 335);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e1310
	if (cr6.eq) goto loc_830E1310;
loc_830E1200:
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830E1218:
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// bne cr6,0x830e1310
	if (!cr6.eq) goto loc_830E1310;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x830e12b4
	if (!cr6.gt) goto loc_830E12B4;
loc_830E1238:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a22a50
	ctx.lr = 0x830E1244;
	sub_82A22A50(ctx, base);
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// bne cr6,0x830e12a8
	if (!cr6.eq) goto loc_830E12A8;
	// lbz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e126c
	if (!cr6.eq) goto loc_830E126C;
	// lbz r11,337(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 337);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x830e1270
	if (cr6.eq) goto loc_830E1270;
loc_830E126C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830E1270:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e1284
	if (cr6.eq) goto loc_830E1284;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x830e12a8
	goto loc_830E12A8;
loc_830E1284:
	// lbz r11,335(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 335);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e1298
	if (cr6.eq) goto loc_830E1298;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x830e12a8
	goto loc_830E12A8;
loc_830E1298:
	// lbz r11,334(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 334);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e12a8
	if (cr6.eq) goto loc_830E12A8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_830E12A8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, xer);
	// blt cr6,0x830e1238
	if (cr6.lt) goto loc_830E1238;
loc_830E12B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x830e110c
	if (cr6.eq) goto loc_830E110C;
	// cmplwi cr6,r24,1
	cr6.compare<uint32_t>(ctx.r24.u32, 1, xer);
	// bne cr6,0x830e12d0
	if (!cr6.eq) goto loc_830E12D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x830e1300
	goto loc_830E1300;
loc_830E12D0:
	// cmplwi cr6,r24,2
	cr6.compare<uint32_t>(ctx.r24.u32, 2, xer);
	// bne cr6,0x830e12e0
	if (!cr6.eq) goto loc_830E12E0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x830e1300
	goto loc_830E1300;
loc_830E12E0:
	// cmplwi cr6,r24,3
	cr6.compare<uint32_t>(ctx.r24.u32, 3, xer);
	// bne cr6,0x830e12f4
	if (!cr6.eq) goto loc_830E12F4;
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x830e1300
	goto loc_830E1300;
loc_830E12F4:
	// cmplwi cr6,r24,4
	cr6.compare<uint32_t>(ctx.r24.u32, 4, xer);
	// bne cr6,0x830e1300
	if (!cr6.eq) goto loc_830E1300;
	// add r3,r30,r29
	ctx.r3.u64 = ctx.r30.u64 + ctx.r29.u64;
loc_830E1300:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r5,28(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// bl 0x827b4418
	ctx.lr = 0x830E130C;
	sub_827B4418(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830E1310:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E1324"))) PPC_WEAK_FUNC(sub_830E1324);
PPC_FUNC_IMPL(__imp__sub_830E1324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E1328"))) PPC_WEAK_FUNC(sub_830E1328);
PPC_FUNC_IMPL(__imp__sub_830E1328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x830E1330;
	__savegprlr_20(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// bl 0x82a24050
	ctx.lr = 0x830E1354;
	sub_82A24050(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r24,132(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a22a30
	ctx.lr = 0x830E1368;
	sub_82A22A30(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830e1440
	if (cr6.eq) goto loc_830E1440;
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// blt cr6,0x830e1440
	if (cr6.lt) goto loc_830E1440;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// beq cr6,0x830e146c
	if (cr6.eq) goto loc_830E146C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x830e1440
	if (!cr6.gt) goto loc_830E1440;
loc_830E13A0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830E13B0;
	sub_82A229E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830e1434
	if (cr6.eq) goto loc_830E1434;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// beq cr6,0x830e13dc
	if (cr6.eq) goto loc_830E13DC;
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r26,r10
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, xer);
	// bne cr6,0x830e1434
	if (!cr6.eq) goto loc_830E1434;
loc_830E13DC:
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// bne cr6,0x830e1418
	if (!cr6.eq) goto loc_830E1418;
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x830d7a80
	ctx.lr = 0x830E1408;
	sub_830D7A80(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830e1418
	if (cr6.eq) goto loc_830E1418;
	// li r30,4
	ctx.r30.s64 = 4;
loc_830E1418:
	// cmpwi cr6,r22,5
	cr6.compare<int32_t>(ctx.r22.s32, 5, xer);
	// beq cr6,0x830e1428
	if (cr6.eq) goto loc_830E1428;
	// cmpw cr6,r22,r30
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r30.s32, xer);
	// bne cr6,0x830e1434
	if (!cr6.eq) goto loc_830E1434;
loc_830E1428:
	// cmpw cr6,r21,r23
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r23.s32, xer);
	// beq cr6,0x830e1464
	if (cr6.eq) goto loc_830E1464;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_830E1434:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// blt cr6,0x830e13a0
	if (cr6.lt) goto loc_830E13A0;
loc_830E1440:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_830E1444:
	// li r5,340
	ctx.r5.s64 = 340;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831ce980
	ctx.lr = 0x830E1450;
	sub_831CE980(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83102db0
	ctx.lr = 0x830E1458;
	sub_83102DB0(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_830E1464:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x830e1444
	goto loc_830E1444;
loc_830E146C:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// blt 0x830e1440
	if (cr0.lt) goto loc_830E1440;
	// li r27,1
	ctx.r27.s64 = 1;
loc_830E148C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830E149C;
	sub_82A229E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830e1540
	if (cr6.eq) goto loc_830E1540;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// beq cr6,0x830e14c8
	if (cr6.eq) goto loc_830E14C8;
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r26,r10
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, xer);
	// bne cr6,0x830e1540
	if (!cr6.eq) goto loc_830E1540;
loc_830E14C8:
	// ld r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 32);
	// lwz r30,28(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x830e1524
	if (!cr6.eq) goto loc_830E1524;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,32
	cr6.compare<int32_t>(ctx.r31.s32, 32, xer);
	// bge cr6,0x830e1524
	if (!cr6.lt) goto loc_830E1524;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830d7a80
	ctx.lr = 0x830E1500;
	sub_830D7A80(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e1524
	if (cr6.eq) goto loc_830E1524;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830e1520
	if (cr6.eq) goto loc_830E1520;
	// li r30,4
	ctx.r30.s64 = 4;
loc_830E1520:
	// stbx r27,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u8);
loc_830E1524:
	// cmpwi cr6,r22,5
	cr6.compare<int32_t>(ctx.r22.s32, 5, xer);
	// beq cr6,0x830e1534
	if (cr6.eq) goto loc_830E1534;
	// cmpw cr6,r22,r30
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r30.s32, xer);
	// bne cr6,0x830e1540
	if (!cr6.eq) goto loc_830E1540;
loc_830E1534:
	// cmpw cr6,r21,r23
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r23.s32, xer);
	// beq cr6,0x830e154c
	if (cr6.eq) goto loc_830E154C;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_830E1540:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x830e148c
	if (!cr0.lt) goto loc_830E148C;
	// b 0x830e1440
	goto loc_830E1440;
loc_830E154C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x830e1444
	goto loc_830E1444;
}

__attribute__((alias("__imp__sub_830E1554"))) PPC_WEAK_FUNC(sub_830E1554);
PPC_FUNC_IMPL(__imp__sub_830E1554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E1558"))) PPC_WEAK_FUNC(sub_830E1558);
PPC_FUNC_IMPL(__imp__sub_830E1558) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e15bc
	if (cr6.eq) goto loc_830E15BC;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E1598;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e15bc
	if (cr6.eq) goto loc_830E15BC;
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
loc_830E15BC:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e0560
	ctx.lr = 0x830E15C8;
	sub_830E0560(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E15E8"))) PPC_WEAK_FUNC(sub_830E15E8);
PPC_FUNC_IMPL(__imp__sub_830E15E8) {
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
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e1640
	if (cr6.eq) goto loc_830E1640;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E162C;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e1640
	if (cr6.eq) goto loc_830E1640;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830e1674
	goto loc_830E1674;
loc_830E1640:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e0560
	ctx.lr = 0x830E164C;
	sub_830E0560(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e1670
	if (cr6.eq) goto loc_830E1670;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,5356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5356);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x830e1674
	if (cr6.eq) goto loc_830E1674;
loc_830E1670:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E1674:
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

__attribute__((alias("__imp__sub_830E168C"))) PPC_WEAK_FUNC(sub_830E168C);
PPC_FUNC_IMPL(__imp__sub_830E168C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E1690"))) PPC_WEAK_FUNC(sub_830E1690);
PPC_FUNC_IMPL(__imp__sub_830E1690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x830E1698;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r23,132(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r29,232(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// bl 0x82a225d0
	ctx.lr = 0x830E16B8;
	sub_82A225D0(ctx, base);
	// lbz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 32);
	// lis r8,5
	ctx.r8.s64 = 327680;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// ori r6,r8,18048
	ctx.r6.u64 = ctx.r8.u64 | 18048;
	// subfe r11,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r21,r3,r6
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830e1704
	if (cr6.eq) goto loc_830E1704;
	// lwz r3,68(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E16E4;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e170c
	if (cr6.eq) goto loc_830E170C;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// bne cr6,0x830e170c
	if (!cr6.eq) goto loc_830E170C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_830E1704:
	// cmplwi cr6,r21,1
	cr6.compare<uint32_t>(ctx.r21.u32, 1, xer);
	// ble cr6,0x830e188c
	if (!cr6.gt) goto loc_830E188C;
loc_830E170C:
	// lbz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 32);
	// li r22,2
	ctx.r22.s64 = 2;
	// li r27,2
	ctx.r27.s64 = 2;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r28,5
	ctx.r28.s64 = 5;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r26,5
	ctx.r26.s64 = 5;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830e17ac
	if (cr6.eq) goto loc_830E17AC;
	// lwz r3,68(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E1744;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e17c8
	if (cr6.eq) goto loc_830E17C8;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r31,292(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lfs f1,4464(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a29110
	ctx.lr = 0x830E1760;
	sub_82A29110(ctx, base);
	// lwz r11,4456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4456);
	// clrlwi r24,r3,24
	ctx.r24.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a474e0
	ctx.lr = 0x830E1770;
	sub_82A474E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_830E1778:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E1784;
	sub_82A0C710(ctx, base);
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// bl 0x825832e0
	ctx.lr = 0x830E178C;
	sub_825832E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830e17a4
	if (!cr6.eq) goto loc_830E17A4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x830e1778
	if (cr6.lt) goto loc_830E1778;
	// b 0x830e17c8
	goto loc_830E17C8;
loc_830E17A4:
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// b 0x830e17c8
	goto loc_830E17C8;
loc_830E17AC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830E17B4;
	sub_82A225D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8291b070
	ctx.lr = 0x830E17BC;
	sub_8291B070(ctx, base);
	// lbz r24,12(r3)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r22,4(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_830E17C8:
	// lbz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 32);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830e1814
	if (cr6.eq) goto loc_830E1814;
	// lwz r3,68(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E17E8;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e1864
	if (cr6.eq) goto loc_830E1864;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830E17FC;
	sub_82A225D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8291b070
	ctx.lr = 0x830E1804;
	sub_8291B070(ctx, base);
	// lbz r25,12(r3)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lwz r26,8(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x830e1864
	goto loc_830E1864;
loc_830E1814:
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r21,1
	cr6.compare<uint32_t>(ctx.r21.u32, 1, xer);
	// ble cr6,0x830e1864
	if (!cr6.gt) goto loc_830E1864;
loc_830E1820:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830E1828;
	sub_82A225D0(ctx, base);
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x8291b070
	ctx.lr = 0x830E1830;
	sub_8291B070(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x830e184c
	if (!cr6.eq) goto loc_830E184C;
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// clrlwi r9,r24,24
	ctx.r9.u64 = ctx.r24.u32 & 0xFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x830e1858
	if (cr6.eq) goto loc_830E1858;
loc_830E184C:
	// lbz r25,12(r3)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_830E1858:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r21
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, xer);
	// blt cr6,0x830e1820
	if (cr6.lt) goto loc_830E1820;
loc_830E1864:
	// cmpw cr6,r22,r27
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r27.s32, xer);
	// bne cr6,0x830e188c
	if (!cr6.eq) goto loc_830E188C;
	// cmpw cr6,r28,r26
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, xer);
	// bne cr6,0x830e188c
	if (!cr6.eq) goto loc_830E188C;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// clrlwi r10,r24,24
	ctx.r10.u64 = ctx.r24.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// ble cr6,0x830e1890
	if (!cr6.gt) goto loc_830E1890;
loc_830E188C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E1890:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E1898"))) PPC_WEAK_FUNC(sub_830E1898);
PPC_FUNC_IMPL(__imp__sub_830E1898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x830E18A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31763
	ctx.r24.s64 = -2081619968;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r11,-3564(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// lwz r27,132(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r23,232(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// bl 0x82a225d0
	ctx.lr = 0x830E18C4;
	sub_82A225D0(ctx, base);
	// lis r9,5
	ctx.r9.s64 = 327680;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r8,r9,18048
	ctx.r8.u64 = ctx.r9.u64 | 18048;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,5
	ctx.r28.s64 = 5;
	// li r29,0
	ctx.r29.s64 = 0;
	// lbzx r26,r3,r8
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x830e1944
	if (cr6.eq) goto loc_830E1944;
loc_830E18E8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830E18F0;
	sub_82A225D0(ctx, base);
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// bl 0x8291b070
	ctx.lr = 0x830E18F8;
	sub_8291B070(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// bne cr6,0x830e1938
	if (!cr6.eq) goto loc_830E1938;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// beq cr6,0x830e191c
	if (cr6.eq) goto loc_830E191C;
	// lbz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x830e1934
	goto loc_830E1934;
loc_830E191C:
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x830e1938
	if (cr6.eq) goto loc_830E1938;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_830E1934:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_830E1938:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// blt cr6,0x830e18e8
	if (cr6.lt) goto loc_830E18E8;
loc_830E1944:
	// lbz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 32);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830e1990
	if (cr6.eq) goto loc_830E1990;
	// lwz r3,68(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E1964;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e1990
	if (cr6.eq) goto loc_830E1990;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E197C;
	sub_82A0C710(ctx, base);
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// bl 0x825832e0
	ctx.lr = 0x830E1984;
	sub_825832E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// bne cr6,0x830e1994
	if (!cr6.eq) goto loc_830E1994;
loc_830E1990:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830E1994:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E199C"))) PPC_WEAK_FUNC(sub_830E199C);
PPC_FUNC_IMPL(__imp__sub_830E199C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E19A0"))) PPC_WEAK_FUNC(sub_830E19A0);
PPC_FUNC_IMPL(__imp__sub_830E19A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830E19A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r30,132(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r26,232(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// bl 0x82a225d0
	ctx.lr = 0x830E19CC;
	sub_82A225D0(ctx, base);
	// lis r9,5
	ctx.r9.s64 = 327680;
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r8,r9,18048
	ctx.r8.u64 = ctx.r9.u64 | 18048;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lbzx r29,r3,r8
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830e1a28
	if (cr6.eq) goto loc_830E1A28;
loc_830E19EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830E19F4;
	sub_82A225D0(ctx, base);
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x8291b070
	ctx.lr = 0x830E19FC;
	sub_8291B070(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x830e1a10
	if (!cr6.eq) goto loc_830E1A10;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x830e1a1c
	goto loc_830E1A1C;
loc_830E1A10:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830e1a1c
	if (!cr6.eq) goto loc_830E1A1C;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_830E1A1C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x830e19ec
	if (cr6.lt) goto loc_830E19EC;
loc_830E1A28:
	// lbz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 32);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830e1a8c
	if (cr6.eq) goto loc_830E1A8C;
	// lwz r3,68(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E1A48;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e1a8c
	if (cr6.eq) goto loc_830E1A8C;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// beq cr6,0x830e1a8c
	if (cr6.eq) goto loc_830E1A8C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E1A68;
	sub_82A0C710(ctx, base);
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// bl 0x825832e0
	ctx.lr = 0x830E1A70;
	sub_825832E0(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x830e1a80
	if (!cr6.eq) goto loc_830E1A80;
	// add r25,r3,r25
	ctx.r25.u64 = ctx.r3.u64 + ctx.r25.u64;
	// b 0x830e1a8c
	goto loc_830E1A8C;
loc_830E1A80:
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// bne cr6,0x830e1a8c
	if (!cr6.eq) goto loc_830E1A8C;
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
loc_830E1A8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bne cr6,0x830e1aa4
	if (!cr6.eq) goto loc_830E1AA4;
	// add r3,r24,r25
	ctx.r3.u64 = ctx.r24.u64 + ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830E1AA4:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x830e1ab8
	if (!cr6.eq) goto loc_830E1AB8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830E1AB8:
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// bne cr6,0x830e1ac4
	if (!cr6.eq) goto loc_830E1AC4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_830E1AC4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E1ACC"))) PPC_WEAK_FUNC(sub_830E1ACC);
PPC_FUNC_IMPL(__imp__sub_830E1ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E1AD0"))) PPC_WEAK_FUNC(sub_830E1AD0);
PPC_FUNC_IMPL(__imp__sub_830E1AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830E1AD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x830e1b08
	if (cr6.eq) goto loc_830E1B08;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// li r10,255
	ctx.r10.s64 = 255;
loc_830E1B00:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830e1b00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E1B00;
loc_830E1B08:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x830e1c08
	if (!cr6.lt) goto loc_830E1C08;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// bgt cr6,0x830e1c08
	if (cr6.gt) goto loc_830E1C08;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e1ba4
	if (cr6.eq) goto loc_830E1BA4;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E1B44;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e1ba4
	if (cr6.eq) goto loc_830E1BA4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E1B5C;
	sub_82A0C710(ctx, base);
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x830E1B68;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e1c08
	if (cr6.eq) goto loc_830E1C08;
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
loc_830E1B7C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a477e0
	ctx.lr = 0x830E1B88;
	sub_82A477E0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x830e1b7c
	if (cr6.lt) goto loc_830E1B7C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830E1BA4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a229e8
	ctx.lr = 0x830E1BB8;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830e1c08
	if (cr6.eq) goto loc_830E1C08;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830e1c08
	if (cr6.eq) goto loc_830E1C08;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// addi r9,r28,-4
	ctx.r9.s64 = ctx.r28.s64 + -4;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_830E1BE4:
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r6,28(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x830e1be4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E1BE4;
loc_830E1C08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E1C10"))) PPC_WEAK_FUNC(sub_830E1C10);
PPC_FUNC_IMPL(__imp__sub_830E1C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830E1C18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x830e1c48
	if (cr6.eq) goto loc_830E1C48;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// li r10,255
	ctx.r10.s64 = 255;
loc_830E1C40:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830e1c40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E1C40;
loc_830E1C48:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x830e1d48
	if (!cr6.lt) goto loc_830E1D48;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// bgt cr6,0x830e1d48
	if (cr6.gt) goto loc_830E1D48;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e1ce4
	if (cr6.eq) goto loc_830E1CE4;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E1C84;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e1ce4
	if (cr6.eq) goto loc_830E1CE4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E1C9C;
	sub_82A0C710(ctx, base);
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x830E1CA8;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e1d48
	if (cr6.eq) goto loc_830E1D48;
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
loc_830E1CBC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a477e0
	ctx.lr = 0x830E1CC8;
	sub_82A477E0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x830e1cbc
	if (cr6.lt) goto loc_830E1CBC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830E1CE4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a229e8
	ctx.lr = 0x830E1CF8;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830e1d48
	if (cr6.eq) goto loc_830E1D48;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830e1d48
	if (cr6.eq) goto loc_830E1D48;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// addi r9,r28,-4
	ctx.r9.s64 = ctx.r28.s64 + -4;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
loc_830E1D28:
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x830e1d28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E1D28;
loc_830E1D48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E1D50"))) PPC_WEAK_FUNC(sub_830E1D50);
PPC_FUNC_IMPL(__imp__sub_830E1D50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830E1D58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,30
	ctx.r4.s64 = 30;
	// lwz r29,132(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a227f0
	ctx.lr = 0x830E1D70;
	sub_82A227F0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830e1e30
	if (cr6.eq) goto loc_830E1E30;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830e1e30
	if (!cr6.eq) goto loc_830E1E30;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a227f0
	ctx.lr = 0x830E1D98;
	sub_82A227F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830e1e30
	if (cr6.eq) goto loc_830E1E30;
	// bl 0x83740858
	ctx.lr = 0x830E1DAC;
	sub_83740858(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r9,r3,30
	ctx.r9.s64 = ctx.r3.s64 * 30;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r8,4472(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4472);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x830e1e30
	if (cr6.lt) goto loc_830E1E30;
	// lwz r10,4460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x830e1e3c
	if (!cr6.eq) goto loc_830E1E3C;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x830e1e5c
	if (cr6.eq) goto loc_830E1E5C;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x830e1e5c
	if (cr6.eq) goto loc_830E1E5C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x830e1e30
	if (cr6.eq) goto loc_830E1E30;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x830e1e30
	if (cr6.eq) goto loc_830E1E30;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830E1E10;
	sub_82A229E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830e1e30
	if (cr6.eq) goto loc_830E1E30;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x830e1e5c
	if (cr6.eq) goto loc_830E1E5C;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x830e1e5c
	if (cr6.eq) goto loc_830E1E5C;
loc_830E1E30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830E1E3C:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x830e1e4c
	if (cr6.eq) goto loc_830E1E4C;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830e1e30
	if (!cr6.eq) goto loc_830E1E30;
loc_830E1E4C:
	// lwz r11,5356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5356);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x830e1e60
	if (!cr6.eq) goto loc_830E1E60;
loc_830E1E5C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_830E1E60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E1E68"))) PPC_WEAK_FUNC(sub_830E1E68);
PPC_FUNC_IMPL(__imp__sub_830E1E68) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r31,4456(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// bl 0x830e0f00
	ctx.lr = 0x830E1E94;
	sub_830E0F00(ctx, base);
	// addi r9,r3,-5
	ctx.r9.s64 = ctx.r3.s64 + -5;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// bne cr6,0x830e1eb0
	if (!cr6.eq) goto loc_830E1EB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e1ee8
	goto loc_830E1EE8;
loc_830E1EB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e1ed8
	if (!cr6.eq) goto loc_830E1ED8;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// beq cr6,0x830e1ed8
	if (cr6.eq) goto loc_830E1ED8;
	// cmpwi cr6,r31,10
	cr6.compare<int32_t>(ctx.r31.s32, 10, xer);
	// beq cr6,0x830e1ed8
	if (cr6.eq) goto loc_830E1ED8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a474e0
	ctx.lr = 0x830E1ED4;
	sub_82A474E0(ctx, base);
	// b 0x830e1ee8
	goto loc_830E1EE8;
loc_830E1ED8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a225d0
	ctx.lr = 0x830E1EE4;
	sub_82A225D0(ctx, base);
	// bl 0x8291ae08
	ctx.lr = 0x830E1EE8;
	sub_8291AE08(ctx, base);
loc_830E1EE8:
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

__attribute__((alias("__imp__sub_830E1F00"))) PPC_WEAK_FUNC(sub_830E1F00);
PPC_FUNC_IMPL(__imp__sub_830E1F00) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4460(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4460);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x830e1f34
	if (cr6.eq) goto loc_830E1F34;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e1f80
	goto loc_830E1F80;
loc_830E1F34:
	// bl 0x830e1e68
	ctx.lr = 0x830E1F38;
	sub_830E1E68(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830e1f64
	if (cr6.eq) goto loc_830E1F64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x830e1f64
	if (cr6.eq) goto loc_830E1F64;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x830e1f5c
	if (cr6.eq) goto loc_830E1F5C;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x830e1f68
	if (!cr6.eq) goto loc_830E1F68;
loc_830E1F5C:
	// li r31,15
	ctx.r31.s64 = 15;
	// b 0x830e1f68
	goto loc_830E1F68;
loc_830E1F64:
	// li r31,45
	ctx.r31.s64 = 45;
loc_830E1F68:
	// lfs f1,4464(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a29110
	ctx.lr = 0x830E1F70;
	sub_82A29110(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_830E1F80:
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

__attribute__((alias("__imp__sub_830E1F98"))) PPC_WEAK_FUNC(sub_830E1F98);
PPC_FUNC_IMPL(__imp__sub_830E1F98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830E1FA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r29,132(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x830e1e68
	ctx.lr = 0x830E1FC0;
	sub_830E1E68(ctx, base);
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// lwz r8,4456(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4456);
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmpwi cr6,r8,10
	cr6.compare<int32_t>(ctx.r8.s32, 10, xer);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// beq cr6,0x830e1ff0
	if (cr6.eq) goto loc_830E1FF0;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830e1ff0
	if (!cr6.eq) goto loc_830E1FF0;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830E1FF0:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// li r9,2
	ctx.r9.s64 = 2;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// subfc r7,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// li r31,3
	ctx.r31.s64 = 3;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// clrlwi r28,r4,24
	ctx.r28.u64 = ctx.r4.u32 & 0xFF;
	// beq cr6,0x830e20b4
	if (cr6.eq) goto loc_830E20B4;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r30,r11,36400
	ctx.r30.u64 = ctx.r11.u64 | 36400;
loc_830E2024:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830E202C;
	sub_82A225D0(ctx, base);
	// mullw r11,r31,r30
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// li r4,4
	ctx.r4.s64 = 4;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82919698
	ctx.lr = 0x830E203C;
	sub_82919698(ctx, base);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// sthx r8,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
	// blt cr6,0x830e2024
	if (cr6.lt) goto loc_830E2024;
	// rlwinm r11,r28,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1FE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// xori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 ^ 2;
	// rlwinm r8,r28,1,23,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1FE;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lhzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// lhzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x830e2098
	if (!cr6.eq) goto loc_830E2098;
	// li r31,2
	ctx.r31.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830E2098:
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// adde r31,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830E20B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830E20BC;
	sub_82A225D0(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r11,8025
	ctx.r10.u64 = ctx.r11.u64 | 8025;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830e20e4
	if (cr6.eq) goto loc_830E20E4;
	// lwz r11,5180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5180);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r31,r8,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_830E20E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E20F0"))) PPC_WEAK_FUNC(sub_830E20F0);
PPC_FUNC_IMPL(__imp__sub_830E20F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830E20F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a22ac0
	ctx.lr = 0x830E2114;
	sub_82A22AC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830e2284
	if (cr6.eq) goto loc_830E2284;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_830E212C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830e212c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E212C;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x830e2228
	if (!cr6.lt) goto loc_830E2228;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e21c8
	if (cr6.eq) goto loc_830E21C8;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E2168;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e21c8
	if (cr6.eq) goto loc_830E21C8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E2180;
	sub_82A0C710(ctx, base);
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x830E218C;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e2228
	if (cr6.eq) goto loc_830E2228;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_830E21A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a477e0
	ctx.lr = 0x830E21B0;
	sub_82A477E0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x830e21a4
	if (cr6.lt) goto loc_830E21A4;
	// b 0x830e2228
	goto loc_830E2228;
loc_830E21C8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a229e8
	ctx.lr = 0x830E21DC;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830e2228
	if (cr6.eq) goto loc_830E2228;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
loc_830E2228:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a225d0
	ctx.lr = 0x830E2234;
	sub_82A225D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_830E2240:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r5,255
	cr6.compare<int32_t>(ctx.r5.s32, 255, xer);
	// beq cr6,0x830e2274
	if (cr6.eq) goto loc_830E2274;
	// cmpwi cr6,r5,32
	cr6.compare<int32_t>(ctx.r5.s32, 32, xer);
	// bge cr6,0x830e2274
	if (!cr6.lt) goto loc_830E2274;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8291adc0
	ctx.lr = 0x830E2260;
	sub_8291ADC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x8291a868
	ctx.lr = 0x830E226C;
	sub_8291A868(ctx, base);
	// cmplw cr6,r25,r3
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, xer);
	// ble cr6,0x830e2290
	if (!cr6.gt) goto loc_830E2290;
loc_830E2274:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// blt cr6,0x830e2240
	if (cr6.lt) goto loc_830E2240;
loc_830E2284:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E2290:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E229C"))) PPC_WEAK_FUNC(sub_830E229C);
PPC_FUNC_IMPL(__imp__sub_830E229C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E22A0"))) PPC_WEAK_FUNC(sub_830E22A0);
PPC_FUNC_IMPL(__imp__sub_830E22A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830E22A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830e22c8
	if (cr6.eq) goto loc_830E22C8;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_830E22C8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a22ac0
	ctx.lr = 0x830E22D4;
	sub_82A22AC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830e2444
	if (cr6.eq) goto loc_830E2444;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_830E22EC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830e22ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E22EC;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x830e23e8
	if (!cr6.lt) goto loc_830E23E8;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e2388
	if (cr6.eq) goto loc_830E2388;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E2328;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e2388
	if (cr6.eq) goto loc_830E2388;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E2340;
	sub_82A0C710(ctx, base);
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x830E234C;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e23e8
	if (cr6.eq) goto loc_830E23E8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_830E2364:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a477e0
	ctx.lr = 0x830E2370;
	sub_82A477E0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x830e2364
	if (cr6.lt) goto loc_830E2364;
	// b 0x830e23e8
	goto loc_830E23E8;
loc_830E2388:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a229e8
	ctx.lr = 0x830E239C;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830e23e8
	if (cr6.eq) goto loc_830E23E8;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
loc_830E23E8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a225d0
	ctx.lr = 0x830E23F4;
	sub_82A225D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_830E2400:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r5,255
	cr6.compare<int32_t>(ctx.r5.s32, 255, xer);
	// beq cr6,0x830e2434
	if (cr6.eq) goto loc_830E2434;
	// cmpwi cr6,r5,32
	cr6.compare<int32_t>(ctx.r5.s32, 32, xer);
	// bge cr6,0x830e2434
	if (!cr6.lt) goto loc_830E2434;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8291adc0
	ctx.lr = 0x830E2420;
	sub_8291ADC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x8291a868
	ctx.lr = 0x830E242C;
	sub_8291A868(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830e2450
	if (!cr6.eq) goto loc_830E2450;
loc_830E2434:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// blt cr6,0x830e2400
	if (cr6.lt) goto loc_830E2400;
loc_830E2444:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E2450:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x830e2468
	if (cr6.eq) goto loc_830E2468;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
loc_830E2468:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2474"))) PPC_WEAK_FUNC(sub_830E2474);
PPC_FUNC_IMPL(__imp__sub_830E2474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E2478"))) PPC_WEAK_FUNC(sub_830E2478);
PPC_FUNC_IMPL(__imp__sub_830E2478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830E2480;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830E2498;
	sub_82A0C738(ctx, base);
	// lwz r9,-3564(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r8,255
	ctx.r8.s64 = 255;
	// lwz r26,6132(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6132);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_830E24B4:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830e24b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E24B4;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x830e25a8
	if (!cr6.lt) goto loc_830E25A8;
	// lwz r11,232(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e2548
	if (cr6.eq) goto loc_830E2548;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E24E8;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e2548
	if (cr6.eq) goto loc_830E2548;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E2500;
	sub_82A0C710(ctx, base);
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x830E250C;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e25a8
	if (cr6.eq) goto loc_830E25A8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_830E2524:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a477e0
	ctx.lr = 0x830E2530;
	sub_82A477E0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x830e2524
	if (cr6.lt) goto loc_830E2524;
	// b 0x830e25a8
	goto loc_830E25A8;
loc_830E2548:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a229e8
	ctx.lr = 0x830E255C;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830e25a8
	if (cr6.eq) goto loc_830E25A8;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
loc_830E25A8:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-30704
	ctx.r31.s64 = ctx.r11.s64 + -30704;
loc_830E25B8:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// beq cr6,0x830e2650
	if (cr6.eq) goto loc_830E2650;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a16248
	ctx.lr = 0x830E25CC;
	sub_82A16248(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be4eb8
	ctx.lr = 0x830E25D8;
	sub_82BE4EB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82a26da0
	ctx.lr = 0x830E25EC;
	sub_82A26DA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e2608
	if (!cr6.eq) goto loc_830E2608;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x830e2630
	goto loc_830E2630;
loc_830E2608:
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x830e2628
	if (!cr6.eq) goto loc_830E2628;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830e262c
	if (cr6.eq) goto loc_830E262C;
loc_830E2628:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E262C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830E2630:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e2650
	if (!cr6.eq) goto loc_830E2650;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830e266c
	if (!cr6.eq) goto loc_830E266C;
loc_830E2650:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,6
	cr6.compare<uint32_t>(ctx.r29.u32, 6, xer);
	// blt cr6,0x830e25b8
	if (cr6.lt) goto loc_830E25B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E266C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2678"))) PPC_WEAK_FUNC(sub_830E2678);
PPC_FUNC_IMPL(__imp__sub_830E2678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830E2680;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830E2698;
	sub_82A0C738(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_830E26AC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830e26ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E26AC;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x830e27a4
	if (!cr6.lt) goto loc_830E27A4;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e2744
	if (cr6.eq) goto loc_830E2744;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E26E4;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e2744
	if (cr6.eq) goto loc_830E2744;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E26FC;
	sub_82A0C710(ctx, base);
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x830E2708;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e27a4
	if (cr6.eq) goto loc_830E27A4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_830E2720:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a477e0
	ctx.lr = 0x830E272C;
	sub_82A477E0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x830e2720
	if (cr6.lt) goto loc_830E2720;
	// b 0x830e27a4
	goto loc_830E27A4;
loc_830E2744:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a229e8
	ctx.lr = 0x830E2758;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830e27a4
	if (cr6.eq) goto loc_830E27A4;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
loc_830E27A4:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_830E27AC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// beq cr6,0x830e27d0
	if (cr6.eq) goto loc_830E27D0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a16248
	ctx.lr = 0x830E27C0;
	sub_82A16248(ctx, base);
	// bl 0x83767d18
	ctx.lr = 0x830E27C4;
	sub_83767D18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x830e27ec
	if (cr6.eq) goto loc_830E27EC;
loc_830E27D0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// blt cr6,0x830e27ac
	if (cr6.lt) goto loc_830E27AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830E27EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E27F8"))) PPC_WEAK_FUNC(sub_830E27F8);
PPC_FUNC_IMPL(__imp__sub_830E27F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830E2800;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a225d0
	ctx.lr = 0x830E2818;
	sub_82A225D0(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_830E282C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830e282c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E282C;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x830e2928
	if (!cr6.lt) goto loc_830E2928;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e28c8
	if (cr6.eq) goto loc_830E28C8;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E2868;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e28c8
	if (cr6.eq) goto loc_830E28C8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E2880;
	sub_82A0C710(ctx, base);
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x830E288C;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e2928
	if (cr6.eq) goto loc_830E2928;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_830E28A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a477e0
	ctx.lr = 0x830E28B0;
	sub_82A477E0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x830e28a4
	if (cr6.lt) goto loc_830E28A4;
	// b 0x830e2928
	goto loc_830E2928;
loc_830E28C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a229e8
	ctx.lr = 0x830E28DC;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830e2928
	if (cr6.eq) goto loc_830E2928;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
loc_830E2928:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_830E2930:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r5,255
	cr6.compare<int32_t>(ctx.r5.s32, 255, xer);
	// beq cr6,0x830e2960
	if (cr6.eq) goto loc_830E2960;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8291adc0
	ctx.lr = 0x830E2948;
	sub_8291ADC0(ctx, base);
	// li r4,45
	ctx.r4.s64 = 45;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x8291a868
	ctx.lr = 0x830E2954;
	sub_8291A868(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e297c
	if (!cr6.eq) goto loc_830E297C;
loc_830E2960:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// blt cr6,0x830e2930
	if (cr6.lt) goto loc_830E2930;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E297C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2988"))) PPC_WEAK_FUNC(sub_830E2988);
PPC_FUNC_IMPL(__imp__sub_830E2988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830E2990;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830E29A8;
	sub_82A0C738(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_830E29BC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830e29bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E29BC;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x830e2ab4
	if (!cr6.lt) goto loc_830E2AB4;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e2a54
	if (cr6.eq) goto loc_830E2A54;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E29F4;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e2a54
	if (cr6.eq) goto loc_830E2A54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E2A0C;
	sub_82A0C710(ctx, base);
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x830E2A18;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e2ab4
	if (cr6.eq) goto loc_830E2AB4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_830E2A30:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a477e0
	ctx.lr = 0x830E2A3C;
	sub_82A477E0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x830e2a30
	if (cr6.lt) goto loc_830E2A30;
	// b 0x830e2ab4
	goto loc_830E2AB4;
loc_830E2A54:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a229e8
	ctx.lr = 0x830E2A68;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830e2ab4
	if (cr6.eq) goto loc_830E2AB4;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
loc_830E2AB4:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_830E2ABC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// beq cr6,0x830e2ae0
	if (cr6.eq) goto loc_830E2AE0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a16248
	ctx.lr = 0x830E2AD0;
	sub_82A16248(ctx, base);
	// bl 0x83530640
	ctx.lr = 0x830E2AD4;
	sub_83530640(ctx, base);
	// lbz r11,85(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 85);
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// ble cr6,0x830e2afc
	if (!cr6.gt) goto loc_830E2AFC;
loc_830E2AE0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// blt cr6,0x830e2abc
	if (cr6.lt) goto loc_830E2ABC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830E2AFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2B08"))) PPC_WEAK_FUNC(sub_830E2B08);
PPC_FUNC_IMPL(__imp__sub_830E2B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830E2B10;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x830e2b34
	if (cr6.eq) goto loc_830E2B34;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_830E2B34:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a225d0
	ctx.lr = 0x830E2B40;
	sub_82A225D0(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_830E2B54:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830e2b54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E2B54;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x830e2c50
	if (!cr6.lt) goto loc_830E2C50;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e2bf0
	if (cr6.eq) goto loc_830E2BF0;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E2B90;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e2bf0
	if (cr6.eq) goto loc_830E2BF0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E2BA8;
	sub_82A0C710(ctx, base);
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x830E2BB4;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e2c50
	if (cr6.eq) goto loc_830E2C50;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_830E2BCC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a477e0
	ctx.lr = 0x830E2BD8;
	sub_82A477E0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x830e2bcc
	if (cr6.lt) goto loc_830E2BCC;
	// b 0x830e2c50
	goto loc_830E2C50;
loc_830E2BF0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a229e8
	ctx.lr = 0x830E2C04;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830e2c50
	if (cr6.eq) goto loc_830E2C50;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
loc_830E2C50:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_830E2C58:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r31,255
	cr6.compare<int32_t>(ctx.r31.s32, 255, xer);
	// beq cr6,0x830e2cb8
	if (cr6.eq) goto loc_830E2CB8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8291adc0
	ctx.lr = 0x830E2C74;
	sub_8291ADC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x8291a868
	ctx.lr = 0x830E2C80;
	sub_8291A868(ctx, base);
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8291adc0
	ctx.lr = 0x830E2C94;
	sub_8291ADC0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x8291a868
	ctx.lr = 0x830E2CA0;
	sub_8291A868(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x830e2cb8
	if (!cr6.eq) goto loc_830E2CB8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// ble cr6,0x830e2cd4
	if (!cr6.gt) goto loc_830E2CD4;
loc_830E2CB8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,6
	cr6.compare<uint32_t>(ctx.r29.u32, 6, xer);
	// blt cr6,0x830e2c58
	if (cr6.lt) goto loc_830E2C58;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830E2CD4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x830e2cec
	if (cr6.eq) goto loc_830E2CEC;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
loc_830E2CEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2CF8"))) PPC_WEAK_FUNC(sub_830E2CF8);
PPC_FUNC_IMPL(__imp__sub_830E2CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830E2D00;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r8,-3564(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r26,132(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r10,292(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 292);
	// lwz r9,4456(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x830e2e98
	if (cr6.eq) goto loc_830E2E98;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_830E2D40:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830e2d40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E2D40;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x830e2e34
	if (!cr6.lt) goto loc_830E2E34;
	// lwz r11,232(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 232);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e2dd4
	if (cr6.eq) goto loc_830E2DD4;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E2D74;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e2dd4
	if (cr6.eq) goto loc_830E2DD4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E2D8C;
	sub_82A0C710(ctx, base);
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x830E2D98;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e2e34
	if (cr6.eq) goto loc_830E2E34;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_830E2DB0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a477e0
	ctx.lr = 0x830E2DBC;
	sub_82A477E0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x830e2db0
	if (cr6.lt) goto loc_830E2DB0;
	// b 0x830e2e34
	goto loc_830E2E34;
loc_830E2DD4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a229e8
	ctx.lr = 0x830E2DE8;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830e2e34
	if (cr6.eq) goto loc_830E2E34;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
loc_830E2E34:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// lfs f31,-9980(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9980);
	ctx.f31.f64 = double(temp.f32);
loc_830E2E44:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r31,255
	cr6.compare<int32_t>(ctx.r31.s32, 255, xer);
	// beq cr6,0x830e2e88
	if (cr6.eq) goto loc_830E2E88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830E2E58;
	sub_82A225D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8291adc0
	ctx.lr = 0x830E2E64;
	sub_8291ADC0(ctx, base);
	// lbz r11,4076(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4076);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e2e88
	if (!cr6.eq) goto loc_830E2E88;
	// lwz r11,4080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4080);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x830e2e88
	if (!cr6.eq) goto loc_830E2E88;
	// lfs f0,4148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x830e2ea8
	if (cr6.gt) goto loc_830E2EA8;
loc_830E2E88:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,6
	cr6.compare<uint32_t>(ctx.r29.u32, 6, xer);
	// blt cr6,0x830e2e44
	if (cr6.lt) goto loc_830E2E44;
loc_830E2E98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E2EA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E2EB8"))) PPC_WEAK_FUNC(sub_830E2EB8);
PPC_FUNC_IMPL(__imp__sub_830E2EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830E2EC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830E2ED8;
	sub_82A0C738(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_830E2EEC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830e2eec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E2EEC;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x830e3040
	if (!cr6.lt) goto loc_830E3040;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e2f84
	if (cr6.eq) goto loc_830E2F84;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E2F24;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e2f84
	if (cr6.eq) goto loc_830E2F84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E2F3C;
	sub_82A0C710(ctx, base);
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x830E2F48;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e3040
	if (cr6.eq) goto loc_830E3040;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_830E2F60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a477e0
	ctx.lr = 0x830E2F6C;
	sub_82A477E0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x830e2f60
	if (cr6.lt) goto loc_830E2F60;
	// b 0x830e3040
	goto loc_830E3040;
loc_830E2F84:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a229e8
	ctx.lr = 0x830E2F98;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830e3040
	if (cr6.eq) goto loc_830E3040;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// addi r6,r11,6
	ctx.r6.s64 = ctx.r11.s64 + 6;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r9,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r8,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r4,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lwzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r9,r7,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_830E3040:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_830E3048:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// beq cr6,0x830e306c
	if (cr6.eq) goto loc_830E306C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a16248
	ctx.lr = 0x830E305C;
	sub_82A16248(ctx, base);
	// bl 0x83530640
	ctx.lr = 0x830E3060;
	sub_83530640(ctx, base);
	// lbz r11,54(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 54);
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(ctx.r11.u32, 28, xer);
	// bge cr6,0x830e3088
	if (!cr6.lt) goto loc_830E3088;
loc_830E306C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// blt cr6,0x830e3048
	if (cr6.lt) goto loc_830E3048;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830E3088:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3094"))) PPC_WEAK_FUNC(sub_830E3094);
PPC_FUNC_IMPL(__imp__sub_830E3094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E3098"))) PPC_WEAK_FUNC(sub_830E3098);
PPC_FUNC_IMPL(__imp__sub_830E3098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830E30A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830E30B8;
	sub_82A0C738(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_830E30CC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830e30cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E30CC;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x830e3220
	if (!cr6.lt) goto loc_830E3220;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e3164
	if (cr6.eq) goto loc_830E3164;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E3104;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e3164
	if (cr6.eq) goto loc_830E3164;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E311C;
	sub_82A0C710(ctx, base);
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x830E3128;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e3220
	if (cr6.eq) goto loc_830E3220;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_830E3140:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a477e0
	ctx.lr = 0x830E314C;
	sub_82A477E0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x830e3140
	if (cr6.lt) goto loc_830E3140;
	// b 0x830e3220
	goto loc_830E3220;
loc_830E3164:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a229e8
	ctx.lr = 0x830E3178;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830e3220
	if (cr6.eq) goto loc_830E3220;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// addi r6,r11,6
	ctx.r6.s64 = ctx.r11.s64 + 6;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r9,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r8,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r4,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lwzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r9,r7,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_830E3220:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_830E3228:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// beq cr6,0x830e324c
	if (cr6.eq) goto loc_830E324C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a16248
	ctx.lr = 0x830E323C;
	sub_82A16248(ctx, base);
	// bl 0x83530640
	ctx.lr = 0x830E3240;
	sub_83530640(ctx, base);
	// lbz r11,54(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 54);
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// ble cr6,0x830e3268
	if (!cr6.gt) goto loc_830E3268;
loc_830E324C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// blt cr6,0x830e3228
	if (cr6.lt) goto loc_830E3228;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830E3268:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3274"))) PPC_WEAK_FUNC(sub_830E3274);
PPC_FUNC_IMPL(__imp__sub_830E3274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E3278"))) PPC_WEAK_FUNC(sub_830E3278);
PPC_FUNC_IMPL(__imp__sub_830E3278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830E3280;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830e32a0
	if (cr6.eq) goto loc_830E32A0;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_830E32A0:
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830E32B0;
	sub_82A0C738(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_830E32C4:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830e32c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E32C4;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x830e3418
	if (!cr6.lt) goto loc_830E3418;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e335c
	if (cr6.eq) goto loc_830E335C;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E32FC;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e335c
	if (cr6.eq) goto loc_830E335C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E3314;
	sub_82A0C710(ctx, base);
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x830E3320;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e3418
	if (cr6.eq) goto loc_830E3418;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_830E3338:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a477e0
	ctx.lr = 0x830E3344;
	sub_82A477E0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x830e3338
	if (cr6.lt) goto loc_830E3338;
	// b 0x830e3418
	goto loc_830E3418;
loc_830E335C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a229e8
	ctx.lr = 0x830E3370;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830e3418
	if (cr6.eq) goto loc_830E3418;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// addi r6,r11,6
	ctx.r6.s64 = ctx.r11.s64 + 6;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r9,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r8,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r4,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lwzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r9,r7,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_830E3418:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_830E3420:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// beq cr6,0x830e3444
	if (cr6.eq) goto loc_830E3444;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a16248
	ctx.lr = 0x830E3434;
	sub_82A16248(ctx, base);
	// bl 0x83530640
	ctx.lr = 0x830E3438;
	sub_83530640(ctx, base);
	// lbz r11,55(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 55);
	// cmplwi cr6,r11,190
	cr6.compare<uint32_t>(ctx.r11.u32, 190, xer);
	// bge cr6,0x830e3460
	if (!cr6.lt) goto loc_830E3460;
loc_830E3444:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// blt cr6,0x830e3420
	if (cr6.lt) goto loc_830E3420;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E3460:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x830e3478
	if (cr6.eq) goto loc_830E3478;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
loc_830E3478:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3484"))) PPC_WEAK_FUNC(sub_830E3484);
PPC_FUNC_IMPL(__imp__sub_830E3484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E3488"))) PPC_WEAK_FUNC(sub_830E3488);
PPC_FUNC_IMPL(__imp__sub_830E3488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x830E3490;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r22,6132(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6132);
	// bl 0x82a0c738
	ctx.lr = 0x830E34AC;
	sub_82A0C738(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a26a18
	ctx.lr = 0x830E34C0;
	sub_82A26A18(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,-30656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30656);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x830e34f0
	if (!cr6.eq) goto loc_830E34F0;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830e34f4
	if (cr6.eq) goto loc_830E34F4;
loc_830E34F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E34F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e37dc
	if (!cr6.eq) goto loc_830E37DC;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_830E3510:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830e3510
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E3510;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x830e3664
	if (!cr6.lt) goto loc_830E3664;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e35a8
	if (cr6.eq) goto loc_830E35A8;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E3548;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e35a8
	if (cr6.eq) goto loc_830E35A8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E3560;
	sub_82A0C710(ctx, base);
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x830E356C;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e3664
	if (cr6.eq) goto loc_830E3664;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_830E3584:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a477e0
	ctx.lr = 0x830E3590;
	sub_82A477E0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x830e3584
	if (cr6.lt) goto loc_830E3584;
	// b 0x830e3664
	goto loc_830E3664;
loc_830E35A8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a229e8
	ctx.lr = 0x830E35BC;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830e3664
	if (cr6.eq) goto loc_830E3664;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// addi r6,r11,6
	ctx.r6.s64 = ctx.r11.s64 + 6;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r30,r10,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r9,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r8,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r4,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lwzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r9,r7,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
loc_830E3664:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r24,r1,96
	ctx.r24.s64 = ctx.r1.s64 + 96;
	// ori r25,r10,47264
	ctx.r25.u64 = ctx.r10.u64 | 47264;
	// addi r27,r11,-30704
	ctx.r27.s64 = ctx.r11.s64 + -30704;
loc_830E367C:
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// beq cr6,0x830e37cc
	if (cr6.eq) goto loc_830E37CC;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a16248
	ctx.lr = 0x830E3690;
	sub_82A16248(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82a16c18
	ctx.lr = 0x830E3698;
	sub_82A16C18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e37dc
	if (cr6.eq) goto loc_830E37DC;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r29,r22,560
	ctx.r29.s64 = ctx.r22.s64 + 560;
	// li r30,23472
	ctx.r30.s64 = 23472;
loc_830E36B8:
	// cmpwi cr6,r28,10
	cr6.compare<int32_t>(ctx.r28.s32, 10, xer);
	// add r31,r30,r29
	ctx.r31.u64 = ctx.r30.u64 + ctx.r29.u64;
	// blt cr6,0x830e36c8
	if (cr6.lt) goto loc_830E36C8;
	// add r31,r29,r25
	ctx.r31.u64 = ctx.r29.u64 + ctx.r25.u64;
loc_830E36C8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830e36e0
	if (!cr6.eq) goto loc_830E36E0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// b 0x830e3708
	goto loc_830E3708;
loc_830E36E0:
	// lhz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x830e3700
	if (!cr6.eq) goto loc_830E3700;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830e3704
	if (cr6.eq) goto loc_830E3704;
loc_830E3700:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E3704:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830E3708:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e37bc
	if (!cr6.eq) goto loc_830E37BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// xor r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x830e373c
	if (!cr6.eq) goto loc_830E373C;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e3740
	if (cr6.eq) goto loc_830E3740;
loc_830E373C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E3740:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e37bc
	if (cr6.eq) goto loc_830E37BC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82be4eb8
	ctx.lr = 0x830E3758;
	sub_82BE4EB8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e3774
	if (!cr6.eq) goto loc_830E3774;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x830e379c
	goto loc_830E379C;
loc_830E3774:
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x830e3794
	if (!cr6.eq) goto loc_830E3794;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830e3798
	if (cr6.eq) goto loc_830E3798;
loc_830E3794:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E3798:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830E379C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e37b4
	if (cr6.eq) goto loc_830E37B4;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x830e37e8
	if (cr6.eq) goto loc_830E37E8;
loc_830E37B4:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_830E37BC:
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r30,23632
	cr6.compare<uint32_t>(ctx.r30.u32, 23632, xer);
	// blt cr6,0x830e36b8
	if (cr6.lt) goto loc_830E36B8;
loc_830E37CC:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplwi cr6,r23,6
	cr6.compare<uint32_t>(ctx.r23.u32, 6, xer);
	// blt cr6,0x830e367c
	if (cr6.lt) goto loc_830E367C;
loc_830E37DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_830E37E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E37F4"))) PPC_WEAK_FUNC(sub_830E37F4);
PPC_FUNC_IMPL(__imp__sub_830E37F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E37F8"))) PPC_WEAK_FUNC(sub_830E37F8);
PPC_FUNC_IMPL(__imp__sub_830E37F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830E3800;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830e3820
	if (cr6.eq) goto loc_830E3820;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_830E3820:
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830E3830;
	sub_82A0C738(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_830E3844:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830e3844
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E3844;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x830e3998
	if (!cr6.lt) goto loc_830E3998;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e38dc
	if (cr6.eq) goto loc_830E38DC;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E387C;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e38dc
	if (cr6.eq) goto loc_830E38DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E3894;
	sub_82A0C710(ctx, base);
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x830E38A0;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e3998
	if (cr6.eq) goto loc_830E3998;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_830E38B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a477e0
	ctx.lr = 0x830E38C4;
	sub_82A477E0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x830e38b8
	if (cr6.lt) goto loc_830E38B8;
	// b 0x830e3998
	goto loc_830E3998;
loc_830E38DC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a229e8
	ctx.lr = 0x830E38F0;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830e3998
	if (cr6.eq) goto loc_830E3998;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// addi r6,r11,6
	ctx.r6.s64 = ctx.r11.s64 + 6;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r30,r10,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r9,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r8,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r4,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lwzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r9,r7,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_830E3998:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_830E39A0:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// beq cr6,0x830e39fc
	if (cr6.eq) goto loc_830E39FC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a16440
	ctx.lr = 0x830E39B4;
	sub_82A16440(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830d6de8
	ctx.lr = 0x830E39CC;
	sub_830D6DE8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830d6de8
	ctx.lr = 0x830E39E4;
	sub_830D6DE8(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e39fc
	if (cr6.eq) goto loc_830E39FC;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e3a18
	if (!cr6.eq) goto loc_830E3A18;
loc_830E39FC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// blt cr6,0x830e39a0
	if (cr6.lt) goto loc_830E39A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E3A18:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x830e3a30
	if (cr6.eq) goto loc_830E3A30;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
loc_830E3A30:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3A3C"))) PPC_WEAK_FUNC(sub_830E3A3C);
PPC_FUNC_IMPL(__imp__sub_830E3A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E3A40"))) PPC_WEAK_FUNC(sub_830E3A40);
PPC_FUNC_IMPL(__imp__sub_830E3A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830E3A48;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830e3a68
	if (cr6.eq) goto loc_830E3A68;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_830E3A68:
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830E3A78;
	sub_82A0C738(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_830E3A8C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830e3a8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E3A8C;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x830e3be0
	if (!cr6.lt) goto loc_830E3BE0;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e3b24
	if (cr6.eq) goto loc_830E3B24;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E3AC4;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e3b24
	if (cr6.eq) goto loc_830E3B24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E3ADC;
	sub_82A0C710(ctx, base);
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x830E3AE8;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e3be0
	if (cr6.eq) goto loc_830E3BE0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_830E3B00:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a477e0
	ctx.lr = 0x830E3B0C;
	sub_82A477E0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x830e3b00
	if (cr6.lt) goto loc_830E3B00;
	// b 0x830e3be0
	goto loc_830E3BE0;
loc_830E3B24:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a229e8
	ctx.lr = 0x830E3B38;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830e3be0
	if (cr6.eq) goto loc_830E3BE0;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// addi r6,r11,6
	ctx.r6.s64 = ctx.r11.s64 + 6;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r30,r10,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r9,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r8,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r4,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lwzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r9,r7,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_830E3BE0:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_830E3BE8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// beq cr6,0x830e3c44
	if (cr6.eq) goto loc_830E3C44;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a16440
	ctx.lr = 0x830E3BFC;
	sub_82A16440(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830d6de8
	ctx.lr = 0x830E3C14;
	sub_830D6DE8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830d6de8
	ctx.lr = 0x830E3C2C;
	sub_830D6DE8(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e3c44
	if (cr6.eq) goto loc_830E3C44;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e3c60
	if (!cr6.eq) goto loc_830E3C60;
loc_830E3C44:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// blt cr6,0x830e3be8
	if (cr6.lt) goto loc_830E3BE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E3C60:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x830e3c78
	if (cr6.eq) goto loc_830E3C78;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
loc_830E3C78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3C84"))) PPC_WEAK_FUNC(sub_830E3C84);
PPC_FUNC_IMPL(__imp__sub_830E3C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E3C88"))) PPC_WEAK_FUNC(sub_830E3C88);
PPC_FUNC_IMPL(__imp__sub_830E3C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830E3C90;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830e3cb0
	if (cr6.eq) goto loc_830E3CB0;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_830E3CB0:
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r26,6132(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6132);
	// bl 0x82a0c738
	ctx.lr = 0x830E3CC4;
	sub_82A0C738(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_830E3CD8:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830e3cd8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E3CD8;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x830e3e2c
	if (!cr6.lt) goto loc_830E3E2C;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e3d70
	if (cr6.eq) goto loc_830E3D70;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E3D10;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e3d70
	if (cr6.eq) goto loc_830E3D70;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E3D28;
	sub_82A0C710(ctx, base);
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x830E3D34;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e3e2c
	if (cr6.eq) goto loc_830E3E2C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_830E3D4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a477e0
	ctx.lr = 0x830E3D58;
	sub_82A477E0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x830e3d4c
	if (cr6.lt) goto loc_830E3D4C;
	// b 0x830e3e2c
	goto loc_830E3E2C;
loc_830E3D70:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a229e8
	ctx.lr = 0x830E3D84;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830e3e2c
	if (cr6.eq) goto loc_830E3E2C;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// addi r6,r11,6
	ctx.r6.s64 = ctx.r11.s64 + 6;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r9,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r8,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r4,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lwzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r9,r7,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
loc_830E3E2C:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,-30704
	ctx.r30.s64 = ctx.r11.s64 + -30704;
loc_830E3E3C:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// beq cr6,0x830e3f28
	if (cr6.eq) goto loc_830E3F28;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a16248
	ctx.lr = 0x830E3E50;
	sub_82A16248(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a16c18
	ctx.lr = 0x830E3E58;
	sub_82A16C18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e3f38
	if (cr6.eq) goto loc_830E3F38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be4eb8
	ctx.lr = 0x830E3E70;
	sub_82BE4EB8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830e3e90
	if (!cr6.eq) goto loc_830E3E90;
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x830e3eb4
	goto loc_830E3EB4;
loc_830E3E90:
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bne cr6,0x830e3eac
	if (!cr6.eq) goto loc_830E3EAC;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830e3eb0
	if (cr6.eq) goto loc_830E3EB0;
loc_830E3EAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E3EB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830E3EB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e3f38
	if (!cr6.eq) goto loc_830E3F38;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830e3ed8
	if (!cr6.eq) goto loc_830E3ED8;
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x830e3f00
	goto loc_830E3F00;
loc_830E3ED8:
	// lhz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 24);
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x830e3ef8
	if (!cr6.eq) goto loc_830E3EF8;
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830e3efc
	if (cr6.eq) goto loc_830E3EFC;
loc_830E3EF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E3EFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830E3F00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e3f28
	if (cr6.eq) goto loc_830E3F28;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a26da0
	ctx.lr = 0x830E3F1C;
	sub_82A26DA0(ctx, base);
	// lhz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e3f44
	if (cr6.eq) goto loc_830E3F44;
loc_830E3F28:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r28,6
	cr6.compare<uint32_t>(ctx.r28.u32, 6, xer);
	// blt cr6,0x830e3e3c
	if (cr6.lt) goto loc_830E3E3C;
loc_830E3F38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830E3F44:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x830e3f5c
	if (cr6.eq) goto loc_830E3F5C;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r9.u32);
loc_830E3F5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E3F68"))) PPC_WEAK_FUNC(sub_830E3F68);
PPC_FUNC_IMPL(__imp__sub_830E3F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830E3F70;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830E3F88;
	sub_82A0C738(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_830E3F9C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830e3f9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E3F9C;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x830e40f0
	if (!cr6.lt) goto loc_830E40F0;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e4034
	if (cr6.eq) goto loc_830E4034;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830E3FD4;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e4034
	if (cr6.eq) goto loc_830E4034;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830E3FEC;
	sub_82A0C710(ctx, base);
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x830E3FF8;
	sub_825832E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e40f0
	if (cr6.eq) goto loc_830E40F0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_830E4010:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a477e0
	ctx.lr = 0x830E401C;
	sub_82A477E0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x830e4010
	if (cr6.lt) goto loc_830E4010;
	// b 0x830e40f0
	goto loc_830E40F0;
loc_830E4034:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a229e8
	ctx.lr = 0x830E4048;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830e40f0
	if (cr6.eq) goto loc_830E40F0;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// addi r6,r11,6
	ctx.r6.s64 = ctx.r11.s64 + 6;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r9,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r8,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r4,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lwzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r9,r7,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_830E40F0:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_830E40F8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// beq cr6,0x830e412c
	if (cr6.eq) goto loc_830E412C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a16440
	ctx.lr = 0x830E410C;
	sub_82A16440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,34
	ctx.r5.s64 = 34;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d6de8
	ctx.lr = 0x830E4120;
	sub_830D6DE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e4148
	if (!cr6.eq) goto loc_830E4148;
loc_830E412C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// blt cr6,0x830e40f8
	if (cr6.lt) goto loc_830E40F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E4148:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E4154"))) PPC_WEAK_FUNC(sub_830E4154);
PPC_FUNC_IMPL(__imp__sub_830E4154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E4158"))) PPC_WEAK_FUNC(sub_830E4158);
PPC_FUNC_IMPL(__imp__sub_830E4158) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x830e4180
	if (cr6.lt) goto loc_830E4180;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e41ac
	goto loc_830E41AC;
loc_830E4180:
	// addic r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfe r30,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x830a6bf8
	ctx.lr = 0x830E4190;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E4194;
	sub_8357ECF8(ctx, base);
	// li r9,11
	ctx.r9.s64 = 11;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// and r5,r30,r9
	ctx.r5.u64 = ctx.r30.u64 & ctx.r9.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830ae198
	ctx.lr = 0x830E41A8;
	sub_830AE198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_830E41AC:
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

__attribute__((alias("__imp__sub_830E41C4"))) PPC_WEAK_FUNC(sub_830E41C4);
PPC_FUNC_IMPL(__imp__sub_830E41C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E41C8"))) PPC_WEAK_FUNC(sub_830E41C8);
PPC_FUNC_IMPL(__imp__sub_830E41C8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x830e41f4
	if (!cr6.lt) goto loc_830E41F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830e421c
	goto loc_830E421C;
loc_830E41F4:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x830e4204
	if (!cr6.lt) goto loc_830E4204;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830e421c
	goto loc_830E421C;
loc_830E4204:
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
loc_830E421C:
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830e4234
	if (cr6.lt) goto loc_830E4234;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e4238
	if (cr6.lt) goto loc_830E4238;
loc_830E4234:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E4238:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e4478
	if (cr6.eq) goto loc_830E4478;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x830e4478
	if (!cr6.lt) goto loc_830E4478;
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(ctx.r30.u32, 12, xer);
	// bge cr6,0x830e4478
	if (!cr6.lt) goto loc_830E4478;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830E4260;
	sub_82A0C738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a164c8
	ctx.lr = 0x830E4268;
	sub_82A164C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82be4eb8
	ctx.lr = 0x830E4274;
	sub_82BE4EB8(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r11,r11,-30588
	ctx.r11.s64 = ctx.r11.s64 + -30588;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830e4298
	if (!cr6.eq) goto loc_830E4298;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x830e42c0
	goto loc_830E42C0;
loc_830E4298:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x830e42b8
	if (!cr6.eq) goto loc_830E42B8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830e42bc
	if (cr6.eq) goto loc_830E42BC;
loc_830E42B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E42BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830E42C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e4478
	if (!cr6.eq) goto loc_830E4478;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830a7028
	ctx.lr = 0x830E42D4;
	sub_830A7028(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830a7120
	ctx.lr = 0x830E42E0;
	sub_830A7120(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x830e430c
	if (!cr6.eq) goto loc_830E430C;
	// li r11,1
	ctx.r11.s64 = 1;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830a8950
	ctx.lr = 0x830E4308;
	sub_830A8950(ctx, base);
	// b 0x830e445c
	goto loc_830E445C;
loc_830E430C:
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// bne cr6,0x830e4338
	if (!cr6.eq) goto loc_830E4338;
	// li r11,4
	ctx.r11.s64 = 4;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830a8950
	ctx.lr = 0x830E4334;
	sub_830A8950(ctx, base);
	// b 0x830e445c
	goto loc_830E445C;
loc_830E4338:
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// bne cr6,0x830e4364
	if (!cr6.eq) goto loc_830E4364;
	// li r11,24
	ctx.r11.s64 = 24;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830a8950
	ctx.lr = 0x830E4360;
	sub_830A8950(ctx, base);
	// b 0x830e445c
	goto loc_830E445C;
loc_830E4364:
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bne cr6,0x830e4390
	if (!cr6.eq) goto loc_830E4390;
	// li r11,25
	ctx.r11.s64 = 25;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830a8950
	ctx.lr = 0x830E438C;
	sub_830A8950(ctx, base);
	// b 0x830e445c
	goto loc_830E445C;
loc_830E4390:
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// bne cr6,0x830e43bc
	if (!cr6.eq) goto loc_830E43BC;
	// li r11,28
	ctx.r11.s64 = 28;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830a8950
	ctx.lr = 0x830E43B8;
	sub_830A8950(ctx, base);
	// b 0x830e445c
	goto loc_830E445C;
loc_830E43BC:
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// bne cr6,0x830e43e8
	if (!cr6.eq) goto loc_830E43E8;
	// li r11,29
	ctx.r11.s64 = 29;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830a8950
	ctx.lr = 0x830E43E4;
	sub_830A8950(ctx, base);
	// b 0x830e445c
	goto loc_830E445C;
loc_830E43E8:
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// bne cr6,0x830e43f8
	if (!cr6.eq) goto loc_830E43F8;
	// li r11,40
	ctx.r11.s64 = 40;
	// b 0x830e4444
	goto loc_830E4444;
loc_830E43F8:
	// cmplwi cr6,r30,7
	cr6.compare<uint32_t>(ctx.r30.u32, 7, xer);
	// bne cr6,0x830e4408
	if (!cr6.eq) goto loc_830E4408;
	// li r11,41
	ctx.r11.s64 = 41;
	// b 0x830e4444
	goto loc_830E4444;
loc_830E4408:
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// bne cr6,0x830e4418
	if (!cr6.eq) goto loc_830E4418;
	// li r11,42
	ctx.r11.s64 = 42;
	// b 0x830e4444
	goto loc_830E4444;
loc_830E4418:
	// cmplwi cr6,r30,9
	cr6.compare<uint32_t>(ctx.r30.u32, 9, xer);
	// bne cr6,0x830e4428
	if (!cr6.eq) goto loc_830E4428;
	// li r11,43
	ctx.r11.s64 = 43;
	// b 0x830e4444
	goto loc_830E4444;
loc_830E4428:
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(ctx.r30.u32, 10, xer);
	// bne cr6,0x830e4438
	if (!cr6.eq) goto loc_830E4438;
	// li r11,51
	ctx.r11.s64 = 51;
	// b 0x830e4444
	goto loc_830E4444;
loc_830E4438:
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bne cr6,0x830e4468
	if (!cr6.eq) goto loc_830E4468;
	// li r11,74
	ctx.r11.s64 = 74;
loc_830E4444:
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830a8910
	ctx.lr = 0x830E445C;
	sub_830A8910(ctx, base);
loc_830E445C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e4468
	if (cr6.eq) goto loc_830E4468;
	// li r31,1
	ctx.r31.s64 = 1;
loc_830E4468:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83102db0
	ctx.lr = 0x830E4470;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x830e447c
	goto loc_830E447C;
loc_830E4478:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E447C:
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

__attribute__((alias("__imp__sub_830E4494"))) PPC_WEAK_FUNC(sub_830E4494);
PPC_FUNC_IMPL(__imp__sub_830E4494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E4498"))) PPC_WEAK_FUNC(sub_830E4498);
PPC_FUNC_IMPL(__imp__sub_830E4498) {
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
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x830e44c8
	if (cr6.lt) goto loc_830E44C8;
	// bne cr6,0x830e44d4
	if (!cr6.eq) goto loc_830E44D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830e44cc
	goto loc_830E44CC;
loc_830E44C8:
	// li r4,1
	ctx.r4.s64 = 1;
loc_830E44CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830f33b8
	ctx.lr = 0x830E44D4;
	sub_830F33B8(ctx, base);
loc_830E44D4:
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

__attribute__((alias("__imp__sub_830E44E8"))) PPC_WEAK_FUNC(sub_830E44E8);
PPC_FUNC_IMPL(__imp__sub_830E44E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x830e4558
	if (!cr6.lt) goto loc_830E4558;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e4510
	if (cr6.eq) goto loc_830E4510;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// beq cr6,0x830e4510
	if (cr6.eq) goto loc_830E4510;
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x830e4514
	if (!cr6.eq) goto loc_830E4514;
loc_830E4510:
	// li r11,16
	ctx.r11.s64 = 16;
loc_830E4514:
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bge cr6,0x830e4558
	if (!cr6.lt) goto loc_830E4558;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x830e4558
	if (!cr6.lt) goto loc_830E4558;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830e4534
	if (!cr6.eq) goto loc_830E4534;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x830e4550
	goto loc_830E4550;
loc_830E4534:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x830e4544
	if (!cr6.eq) goto loc_830E4544;
	// addi r3,r4,16
	ctx.r3.s64 = ctx.r4.s64 + 16;
	// b 0x830e4550
	goto loc_830E4550;
loc_830E4544:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x830e4558
	if (!cr6.eq) goto loc_830E4558;
	// addi r3,r4,32
	ctx.r3.s64 = ctx.r4.s64 + 32;
loc_830E4550:
	// cmpwi cr6,r3,56
	cr6.compare<int32_t>(ctx.r3.s32, 56, xer);
	// bltlr cr6
	if (cr6.lt) return;
loc_830E4558:
	// li r3,56
	ctx.r3.s64 = 56;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E4560"))) PPC_WEAK_FUNC(sub_830E4560);
PPC_FUNC_IMPL(__imp__sub_830E4560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830E4568;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,255
	ctx.r3.s64 = 255;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addis r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 65536;
	// addi r31,r31,23412
	ctx.r31.s64 = ctx.r31.s64 + 23412;
	// addi r30,r31,768
	ctx.r30.s64 = ctx.r31.s64 + 768;
	// lwz r11,788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// lwz r28,28(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830e45b8
	if (cr6.lt) goto loc_830E45B8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830e45b8
	if (!cr6.lt) goto loc_830E45B8;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830e45b8
	if (cr6.lt) goto loc_830E45B8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e45bc
	if (cr6.lt) goto loc_830E45BC;
loc_830E45B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E45BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e45d4
	if (cr6.eq) goto loc_830E45D4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// ld r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 20);
	// bl 0x82a2b388
	ctx.lr = 0x830E45D4;
	sub_82A2B388(ctx, base);
loc_830E45D4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x830e45ec
	if (cr6.lt) goto loc_830E45EC;
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830E45EC:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r27,255
	ctx.r27.s64 = 255;
	// srawi r10,r11,7
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830e4680
	if (cr6.eq) goto loc_830E4680;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830e4618
	if (cr6.lt) goto loc_830E4618;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e461c
	if (cr6.lt) goto loc_830E461C;
loc_830E4618:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E461C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e4680
	if (cr6.eq) goto loc_830E4680;
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, xer);
	// bne cr6,0x830e4680
	if (!cr6.eq) goto loc_830E4680;
	// li r31,0
	ctx.r31.s64 = 0;
loc_830E4634:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a22b40
	ctx.lr = 0x830E4644;
	sub_82A22B40(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x830e4670
	if (cr6.eq) goto loc_830E4670;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,10
	cr6.compare<int32_t>(ctx.r31.s32, 10, xer);
	// blt cr6,0x830e4634
	if (cr6.lt) goto loc_830E4634;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830E4670:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// bl 0x82a2b388
	ctx.lr = 0x830E467C;
	sub_82A2B388(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_830E4680:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E468C"))) PPC_WEAK_FUNC(sub_830E468C);
PPC_FUNC_IMPL(__imp__sub_830E468C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E4690"))) PPC_WEAK_FUNC(sub_830E4690);
PPC_FUNC_IMPL(__imp__sub_830E4690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830E4698;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lwz r10,-3564(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r27,292(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// blt cr6,0x830e46c4
	if (cr6.lt) goto loc_830E46C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E46C4:
	// li r30,0
	ctx.r30.s64 = 0;
	// mulli r29,r11,11
	ctx.r29.s64 = ctx.r11.s64 * 11;
loc_830E46CC:
	// add. r31,r29,r30
	ctx.r31.u64 = ctx.r29.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x830e46e0
	if (cr0.lt) goto loc_830E46E0;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e46e4
	if (cr6.lt) goto loc_830E46E4;
loc_830E46E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E46E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e4754
	if (cr6.eq) goto loc_830E4754;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830e4704
	if (cr6.lt) goto loc_830E4704;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e4708
	if (cr6.lt) goto loc_830E4708;
loc_830E4704:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E4708:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e4728
	if (cr6.eq) goto loc_830E4728;
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830e472c
	goto loc_830E472C;
loc_830E4728:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E472C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e4754
	if (cr6.eq) goto loc_830E4754;
	// lwz r26,0(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x830a6bf8
	ctx.lr = 0x830E4740;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E4744;
	sub_8357ECF8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x830ae198
	ctx.lr = 0x830E4754;
	sub_830AE198(ctx, base);
loc_830E4754:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x830e46cc
	if (cr6.lt) goto loc_830E46CC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E476C"))) PPC_WEAK_FUNC(sub_830E476C);
PPC_FUNC_IMPL(__imp__sub_830E476C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E4770"))) PPC_WEAK_FUNC(sub_830E4770);
PPC_FUNC_IMPL(__imp__sub_830E4770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830E4778;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x830e4798
	if (cr6.lt) goto loc_830E4798;
loc_830E478C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E4798:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a229e8
	ctx.lr = 0x830E47AC;
	sub_82A229E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x830e478c
	if (cr6.eq) goto loc_830E478C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830E47CC;
	sub_82A0C738(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,0
	ctx.r31.s64 = 0;
loc_830E47E4:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830e4820
	if (cr6.eq) goto loc_830E4820;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// beq cr6,0x830e4820
	if (cr6.eq) goto loc_830E4820;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x830e4824
	if (!cr6.eq) goto loc_830E4824;
loc_830E4820:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830E4824:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830e486c
	if (cr6.eq) goto loc_830E486C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a29bf8
	ctx.lr = 0x830E483C;
	sub_82A29BF8(ctx, base);
	// lwz r26,0(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x830a6bf8
	ctx.lr = 0x830E4848;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E484C;
	sub_8357ECF8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x830ae198
	ctx.lr = 0x830E485C;
	sub_830AE198(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// blt cr6,0x830e47e4
	if (cr6.lt) goto loc_830E47E4;
loc_830E486C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E4878"))) PPC_WEAK_FUNC(sub_830E4878);
PPC_FUNC_IMPL(__imp__sub_830E4878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830E4880;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,24224
	ctx.r11.s64 = ctx.r11.s64 + 24224;
	// addi r31,r11,224
	ctx.r31.s64 = ctx.r11.s64 + 224;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830e48b8
	if (!cr6.eq) goto loc_830E48B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830E48B8:
	// li r30,255
	ctx.r30.s64 = 255;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
loc_830E48C8:
	// subfc r9,r8,r10
	xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// rlwinm r11,r5,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFF0;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x830e48f4
	if (cr6.lt) goto loc_830E48F4;
	// cmpwi cr6,r9,22
	cr6.compare<int32_t>(ctx.r9.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e48f8
	if (cr6.lt) goto loc_830E48F8;
loc_830E48F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E48F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e4988
	if (cr6.eq) goto loc_830E4988;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x830e4914
	if (cr6.lt) goto loc_830E4914;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830e4928
	goto loc_830E4928;
loc_830E4914:
	// addi r11,r10,17
	ctx.r11.s64 = ctx.r10.s64 + 17;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// srawi r5,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
loc_830E4928:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e49a0
	if (!cr6.eq) goto loc_830E49A0;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bge cr6,0x830e4950
	if (!cr6.lt) goto loc_830E4950;
	// addi r11,r10,17
	ctx.r11.s64 = ctx.r10.s64 + 17;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// srawi r5,r6,5
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 5;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
loc_830E4950:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e4984
	if (!cr6.eq) goto loc_830E4984;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bge cr6,0x830e4978
	if (!cr6.lt) goto loc_830E4978;
	// addi r11,r10,17
	ctx.r11.s64 = ctx.r10.s64 + 17;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// srawi r5,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
loc_830E4978:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e4988
	if (cr6.eq) goto loc_830E4988;
loc_830E4984:
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_830E4988:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x830e48c8
	if (cr6.lt) goto loc_830E48C8;
	// b 0x830e49a4
	goto loc_830E49A4;
loc_830E49A0:
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_830E49A4:
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x830a6bf8
	ctx.lr = 0x830E49AC;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E49B0;
	sub_8357ECF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830ae198
	ctx.lr = 0x830E49C0;
	sub_830AE198(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x830a6bf8
	ctx.lr = 0x830E49CC;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E49D0;
	sub_8357ECF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x830ae198
	ctx.lr = 0x830E49E0;
	sub_830AE198(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x830e49f4
	if (cr6.lt) goto loc_830E49F4;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e49f8
	if (cr6.lt) goto loc_830E49F8;
loc_830E49F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E49F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e4a20
	if (cr6.eq) goto loc_830E4A20;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x830a6bf8
	ctx.lr = 0x830E4A0C;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E4A10;
	sub_8357ECF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x830ae198
	ctx.lr = 0x830E4A20;
	sub_830AE198(ctx, base);
loc_830E4A20:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E4A2C"))) PPC_WEAK_FUNC(sub_830E4A2C);
PPC_FUNC_IMPL(__imp__sub_830E4A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E4A30"))) PPC_WEAK_FUNC(sub_830E4A30);
PPC_FUNC_IMPL(__imp__sub_830E4A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x830E4A38;
	__savegprlr_17(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,36(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x830e4a60
	if (cr6.lt) goto loc_830E4A60;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_830E4A60:
	// bl 0x830a6bf8
	ctx.lr = 0x830E4A64;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E4A68;
	sub_8357ECF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830ae338
	ctx.lr = 0x830E4A78;
	sub_830AE338(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r19,1
	ctx.r19.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830e4aac
	if (cr6.lt) goto loc_830E4AAC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830e4aac
	if (!cr6.lt) goto loc_830E4AAC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830e4aac
	if (cr6.lt) goto loc_830E4AAC;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// blt cr6,0x830e4ab0
	if (cr6.lt) goto loc_830E4AB0;
loc_830E4AAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E4AB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e4ae8
	if (cr6.eq) goto loc_830E4AE8;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x82a2b388
	ctx.lr = 0x830E4AC8;
	sub_82A2B388(ctx, base);
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830a6bf8
	ctx.lr = 0x830E4AD4;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E4AD8;
	sub_8357ECF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830ae198
	ctx.lr = 0x830E4AE8;
	sub_830AE198(ctx, base);
loc_830E4AE8:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,132(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// addis r25,r9,1
	ctx.r25.s64 = ctx.r9.s64 + 65536;
	// lwz r21,292(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// addi r25,r25,27152
	ctx.r25.s64 = ctx.r25.s64 + 27152;
	// bl 0x82a22b40
	ctx.lr = 0x830E4B10;
	sub_82A22B40(ctx, base);
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,132(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 132);
	// bl 0x82a22b40
	ctx.lr = 0x830E4B24;
	sub_82A22B40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830a7028
	ctx.lr = 0x830E4B2C;
	sub_830A7028(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830a7120
	ctx.lr = 0x830E4B38;
	sub_830A7120(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r22,255
	ctx.r22.s64 = 255;
	// li r23,255
	ctx.r23.s64 = 255;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830e4b6c
	if (cr6.lt) goto loc_830E4B6C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830e4b6c
	if (!cr6.lt) goto loc_830E4B6C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830e4b6c
	if (cr6.lt) goto loc_830E4B6C;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// blt cr6,0x830e4b70
	if (cr6.lt) goto loc_830E4B70;
loc_830E4B6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E4B70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e4b8c
	if (cr6.eq) goto loc_830E4B8C;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// ld r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4);
	// bl 0x82a2b388
	ctx.lr = 0x830E4B88;
	sub_82A2B388(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_830E4B8C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830e4bb8
	if (cr6.lt) goto loc_830E4BB8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830e4bb8
	if (!cr6.lt) goto loc_830E4BB8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830e4bb8
	if (cr6.lt) goto loc_830E4BB8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// blt cr6,0x830e4bbc
	if (cr6.lt) goto loc_830E4BBC;
loc_830E4BB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E4BBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e4c0c
	if (cr6.eq) goto loc_830E4C0C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x830e4bec
	if (!cr6.gt) goto loc_830E4BEC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x830e4be4
	if (!cr6.gt) goto loc_830E4BE4;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x830e4bec
	if (!cr6.eq) goto loc_830E4BEC;
loc_830E4BE4:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x830e4bf0
	goto loc_830E4BF0;
loc_830E4BEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E4BF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e4c0c
	if (cr6.eq) goto loc_830E4C0C;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// ld r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4);
	// bl 0x82a2b388
	ctx.lr = 0x830E4C08;
	sub_82A2B388(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_830E4C0C:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,-30588
	ctx.r29.s64 = ctx.r11.s64 + -30588;
loc_830E4C1C:
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r25
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// cmpwi cr6,r8,9
	cr6.compare<int32_t>(ctx.r8.s32, 9, xer);
	// bne cr6,0x830e4dd4
	if (!cr6.eq) goto loc_830E4DD4;
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r25
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x830e4c54
	if (cr6.lt) goto loc_830E4C54;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// blt cr6,0x830e4c58
	if (cr6.lt) goto loc_830E4C58;
loc_830E4C54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E4C58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e4dd4
	if (cr6.eq) goto loc_830E4DD4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x830e4c78
	if (cr6.lt) goto loc_830E4C78;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// blt cr6,0x830e4c7c
	if (cr6.lt) goto loc_830E4C7C;
loc_830E4C78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E4C7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e4c9c
	if (cr6.eq) goto loc_830E4C9C;
	// add r11,r30,r21
	ctx.r11.u64 = ctx.r30.u64 + ctx.r21.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830e4ca0
	goto loc_830E4CA0;
loc_830E4C9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E4CA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e4dd4
	if (cr6.eq) goto loc_830E4DD4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x830e4cbc
	if (!cr6.lt) goto loc_830E4CBC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830e4ce4
	goto loc_830E4CE4;
loc_830E4CBC:
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// bge cr6,0x830e4ccc
	if (!cr6.lt) goto loc_830E4CCC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830e4ce4
	goto loc_830E4CE4;
loc_830E4CCC:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r30
	xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// eqv r9,r11,r30
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r30.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
loc_830E4CE4:
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830E4CF0;
	sub_82A0C738(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a164c8
	ctx.lr = 0x830E4CF8;
	sub_82A164C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82be4eb8
	ctx.lr = 0x830E4D04;
	sub_82BE4EB8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e4d20
	if (!cr6.eq) goto loc_830E4D20;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x830e4d48
	goto loc_830E4D48;
loc_830E4D20:
	// lhz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x830e4d40
	if (!cr6.eq) goto loc_830E4D40;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// beq cr6,0x830e4d44
	if (cr6.eq) goto loc_830E4D44;
loc_830E4D40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E4D44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830E4D48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e4dd4
	if (!cr6.eq) goto loc_830E4DD4;
	// cmpw cr6,r22,r30
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r30.s32, xer);
	// beq cr6,0x830e4da8
	if (cr6.eq) goto loc_830E4DA8;
	// cmpw cr6,r23,r30
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r30.s32, xer);
	// beq cr6,0x830e4da8
	if (cr6.eq) goto loc_830E4DA8;
	// stb r19,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r19.u8);
	// ori r20,r20,1
	ctx.r20.u64 = ctx.r20.u64 | 1;
	// ld r18,88(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r17,r1,80
	ctx.r17.s64 = ctx.r1.s64 + 80;
	// bl 0x830a7028
	ctx.lr = 0x830E4D7C;
	sub_830A7028(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x830a7120
	ctx.lr = 0x830E4D88;
	sub_830A7120(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x830a8950
	ctx.lr = 0x830E4D9C;
	sub_830A8950(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x830e4dac
	if (cr6.eq) goto loc_830E4DAC;
loc_830E4DA8:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_830E4DAC:
	// clrlwi r10,r20,31
	ctx.r10.u64 = ctx.r20.u32 & 0x1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830e4dc8
	if (cr6.eq) goto loc_830E4DC8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r20,r20,0,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x83102db0
	ctx.lr = 0x830E4DC8;
	sub_83102DB0(ctx, base);
loc_830E4DC8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e4dfc
	if (!cr6.eq) goto loc_830E4DFC;
loc_830E4DD4:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x830e4c1c
	if (cr6.lt) goto loc_830E4C1C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83102db0
	ctx.lr = 0x830E4DF0;
	sub_83102DB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_830E4DFC:
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x830a6bf8
	ctx.lr = 0x830E4E04;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E4E08;
	sub_8357ECF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x830ae198
	ctx.lr = 0x830E4E18;
	sub_830AE198(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83102db0
	ctx.lr = 0x830E4E20;
	sub_83102DB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E4E2C"))) PPC_WEAK_FUNC(sub_830E4E2C);
PPC_FUNC_IMPL(__imp__sub_830E4E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E4E30"))) PPC_WEAK_FUNC(sub_830E4E30);
PPC_FUNC_IMPL(__imp__sub_830E4E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x830E4E38;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,36(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,2
	cr6.compare<int32_t>(ctx.r23.s32, 2, xer);
	// blt cr6,0x830e4e58
	if (cr6.lt) goto loc_830E4E58;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_830E4E58:
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830E4E68;
	sub_82A0C738(ctx, base);
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// addic r10,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// lwz r31,0(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// subfe r26,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r26.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r30,6132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// lwz r29,232(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// addi r22,r30,8
	ctx.r22.s64 = ctx.r30.s64 + 8;
	// bl 0x830a6bf8
	ctx.lr = 0x830E4E8C;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E4E90;
	sub_8357ECF8(ctx, base);
	// li r28,11
	ctx.r28.s64 = 11;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// and r5,r26,r28
	ctx.r5.u64 = ctx.r26.u64 & ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830ae198
	ctx.lr = 0x830E4EA4;
	sub_830AE198(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830e4f74
	if (cr6.eq) goto loc_830E4F74;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830e4f74
	if (cr6.eq) goto loc_830E4F74;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a17120
	ctx.lr = 0x830E4ECC;
	sub_82A17120(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e4f74
	if (cr6.eq) goto loc_830E4F74;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r11,42
	ctx.r8.u64 = ctx.r11.u64 | 42;
	// ori r9,r9,44
	ctx.r9.u64 = ctx.r9.u64 | 44;
loc_830E4EEC:
	// addi r11,r10,390
	ctx.r11.s64 = ctx.r10.s64 + 390;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e4f74
	if (cr6.eq) goto loc_830E4F74;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x830e4f30
	if (cr6.eq) goto loc_830E4F30;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x830e4f28
	if (cr6.eq) goto loc_830E4F28;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// blt cr6,0x830e4eec
	if (cr6.lt) goto loc_830E4EEC;
	// b 0x830e4f74
	goto loc_830E4F74;
loc_830E4F28:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x830e4f34
	goto loc_830E4F34;
loc_830E4F30:
	// li r31,0
	ctx.r31.s64 = 0;
loc_830E4F34:
	// lwz r26,0(r20)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// bl 0x830a6bf8
	ctx.lr = 0x830E4F3C;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E4F40;
	sub_8357ECF8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x830ae198
	ctx.lr = 0x830E4F50;
	sub_830AE198(ctx, base);
	// addic r11,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// subfe r31,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r26,0(r20)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// bl 0x830a6bf8
	ctx.lr = 0x830E4F60;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E4F64;
	sub_8357ECF8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// and r5,r31,r28
	ctx.r5.u64 = ctx.r31.u64 & ctx.r28.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x830ae198
	ctx.lr = 0x830E4F74;
	sub_830AE198(ctx, base);
loc_830E4F74:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// addi r26,r10,-30588
	ctx.r26.s64 = ctx.r10.s64 + -30588;
	// bge cr6,0x830e5024
	if (!cr6.lt) goto loc_830E5024;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830e5024
	if (!cr6.eq) goto loc_830E5024;
	// ld r31,16(r22)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r22.u32 + 16);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// bl 0x830d7068
	ctx.lr = 0x830E4FA0;
	sub_830D7068(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e4fc0
	if (!cr6.eq) goto loc_830E4FC0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x830e4fe8
	goto loc_830E4FE8;
loc_830E4FC0:
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x830e4fe0
	if (!cr6.eq) goto loc_830E4FE0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830e4fe4
	if (cr6.eq) goto loc_830E4FE4;
loc_830E4FE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E4FE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830E4FE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e5024
	if (!cr6.eq) goto loc_830E5024;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830E4FFC;
	sub_82A0C738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a16a60
	ctx.lr = 0x830E5004;
	sub_82A16A60(ctx, base);
	// lwz r31,0(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830a6bf8
	ctx.lr = 0x830E5010;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E5014;
	sub_8357ECF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// bl 0x830ae198
	ctx.lr = 0x830E5024;
	sub_830AE198(ctx, base);
loc_830E5024:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830e51b4
	if (cr6.eq) goto loc_830E51B4;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830e51b4
	if (cr6.eq) goto loc_830E51B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a17298
	ctx.lr = 0x830E504C;
	sub_82A17298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e51b4
	if (cr6.eq) goto loc_830E51B4;
	// lwz r11,1556(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1556);
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// bge cr6,0x830e51b4
	if (!cr6.lt) goto loc_830E51B4;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,1720(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1720);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x830e51b4
	if (!cr6.eq) goto loc_830E51B4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a50018
	ctx.lr = 0x830E5080;
	sub_82A50018(ctx, base);
	// clrlwi r24,r3,24
	ctx.r24.u64 = ctx.r3.u32 & 0xFF;
	// li r25,255
	ctx.r25.s64 = 255;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x830e5198
	if (cr6.eq) goto loc_830E5198;
loc_830E5094:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a50278
	ctx.lr = 0x830E50A4;
	sub_82A50278(ctx, base);
	// ld r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// std r27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r27.u64);
	// lhz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x830e50cc
	if (!cr6.eq) goto loc_830E50CC;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x830e50f0
	goto loc_830E50F0;
loc_830E50CC:
	// lhz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x830e50e8
	if (!cr6.eq) goto loc_830E50E8;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830e50ec
	if (cr6.eq) goto loc_830E50EC;
loc_830E50E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E50EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830E50F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e5184
	if (!cr6.eq) goto loc_830E5184;
	// li r31,0
	ctx.r31.s64 = 0;
loc_830E5100:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a16968
	ctx.lr = 0x830E5110;
	sub_82A16968(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x830e5128
	if (!cr6.eq) goto loc_830E5128;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x830e5150
	goto loc_830E5150;
loc_830E5128:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x830e5148
	if (!cr6.eq) goto loc_830E5148;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830e514c
	if (cr6.eq) goto loc_830E514C;
loc_830E5148:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E514C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830E5150:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e516c
	if (!cr6.eq) goto loc_830E516C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x830e5100
	if (cr6.lt) goto loc_830E5100;
	// b 0x830e517c
	goto loc_830E517C;
loc_830E516C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a16a60
	ctx.lr = 0x830E5178;
	sub_82A16A60(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_830E517C:
	// cmpwi cr6,r25,255
	cr6.compare<int32_t>(ctx.r25.s32, 255, xer);
	// bne cr6,0x830e5198
	if (!cr6.eq) goto loc_830E5198;
loc_830E5184:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r28,r24
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, xer);
	// blt cr6,0x830e5094
	if (cr6.lt) goto loc_830E5094;
loc_830E5198:
	// lwz r31,0(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// bl 0x830a6bf8
	ctx.lr = 0x830E51A0;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E51A4;
	sub_8357ECF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x830ae198
	ctx.lr = 0x830E51B4;
	sub_830AE198(ctx, base);
loc_830E51B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E51C0"))) PPC_WEAK_FUNC(sub_830E51C0);
PPC_FUNC_IMPL(__imp__sub_830E51C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830E51C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r29,-3564(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,6132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e5248
	if (cr6.eq) goto loc_830E5248;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x830e5248
	if (!cr6.lt) goto loc_830E5248;
	// ld r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-30588
	ctx.r4.s64 = ctx.r11.s64 + -30588;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// bl 0x825a2298
	ctx.lr = 0x830E5208;
	sub_825A2298(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830e5248
	if (cr6.eq) goto loc_830E5248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a0c738
	ctx.lr = 0x830E5220;
	sub_82A0C738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a16a60
	ctx.lr = 0x830E5228;
	sub_82A16A60(ctx, base);
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830a6bf8
	ctx.lr = 0x830E5234;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E5238;
	sub_8357ECF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830ae198
	ctx.lr = 0x830E5248;
	sub_830AE198(ctx, base);
loc_830E5248:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E5254"))) PPC_WEAK_FUNC(sub_830E5254);
PPC_FUNC_IMPL(__imp__sub_830E5254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E5258"))) PPC_WEAK_FUNC(sub_830E5258);
PPC_FUNC_IMPL(__imp__sub_830E5258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830E5260;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x830e5280
	if (cr6.lt) goto loc_830E5280;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E5280:
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r26,292(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r28,6112(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// bl 0x82a0c710
	ctx.lr = 0x830E5298;
	sub_82A0C710(ctx, base);
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// li r29,0
	ctx.r29.s64 = 0;
	// mulli r25,r31,11
	ctx.r25.s64 = ctx.r31.s64 * 11;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_830E52A8:
	// add. r31,r25,r29
	ctx.r31.u64 = ctx.r25.u64 + ctx.r29.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x830e52bc
	if (cr0.lt) goto loc_830E52BC;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e52c0
	if (cr6.lt) goto loc_830E52C0;
loc_830E52BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E52C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e53c4
	if (cr6.eq) goto loc_830E53C4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830e52e0
	if (cr6.lt) goto loc_830E52E0;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e52e4
	if (cr6.lt) goto loc_830E52E4;
loc_830E52E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E52E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e5304
	if (cr6.eq) goto loc_830E5304;
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830e5308
	goto loc_830E5308;
loc_830E5304:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E5308:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e53c4
	if (cr6.eq) goto loc_830E53C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x830E5320;
	sub_82A0C788(ctx, base);
	// addi r11,r3,1280
	ctx.r11.s64 = ctx.r3.s64 + 1280;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82a48068
	ctx.lr = 0x830E5350;
	sub_82A48068(ctx, base);
	// rlwinm r7,r3,0,20,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x830e53c4
	if (cr6.eq) goto loc_830E53C4;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d7740
	ctx.lr = 0x830E5374;
	sub_830D7740(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e53c4
	if (cr6.eq) goto loc_830E53C4;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,23
	ctx.r5.s64 = 23;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d7740
	ctx.lr = 0x830E5398;
	sub_830D7740(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e53c4
	if (cr6.eq) goto loc_830E53C4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d6de8
	ctx.lr = 0x830E53B8;
	sub_830D6DE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e53dc
	if (!cr6.eq) goto loc_830E53DC;
loc_830E53C4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// blt cr6,0x830e52a8
	if (cr6.lt) goto loc_830E52A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E53DC:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x830a6bf8
	ctx.lr = 0x830E53E4;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E53E8;
	sub_8357ECF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830ae198
	ctx.lr = 0x830E53F8;
	sub_830AE198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E5404"))) PPC_WEAK_FUNC(sub_830E5404);
PPC_FUNC_IMPL(__imp__sub_830E5404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E5408"))) PPC_WEAK_FUNC(sub_830E5408);
PPC_FUNC_IMPL(__imp__sub_830E5408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830E5410;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
	// addi r30,r30,26988
	ctx.r30.s64 = ctx.r30.s64 + 26988;
loc_830E542C:
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r31,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r31
	ctx.r11.u64 = ctx.r7.u64 & ctx.r31.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r5,20
	cr6.compare<uint32_t>(ctx.r5.u32, 20, xer);
	// bne cr6,0x830e546c
	if (!cr6.eq) goto loc_830E546C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830e5470
	if (cr6.eq) goto loc_830E5470;
loc_830E546C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E5470:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e548c
	if (!cr6.eq) goto loc_830E548C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x830e542c
	if (cr6.lt) goto loc_830E542C;
	// b 0x830e54a4
	goto loc_830E54A4;
loc_830E548C:
	// bl 0x830a6bf8
	ctx.lr = 0x830E5490;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E5494;
	sub_8357ECF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mulli r5,r31,11
	ctx.r5.s64 = ctx.r31.s64 * 11;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830ae198
	ctx.lr = 0x830E54A4;
	sub_830AE198(ctx, base);
loc_830E54A4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_830E54A8:
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r31,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r31
	ctx.r11.u64 = ctx.r7.u64 & ctx.r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r4,56(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 56);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x830e54f4
	if (!cr6.eq) goto loc_830E54F4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x830e54a8
	if (cr6.lt) goto loc_830E54A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830E54F4:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x830a6bf8
	ctx.lr = 0x830E54FC;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E5500;
	sub_8357ECF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mulli r5,r31,11
	ctx.r5.s64 = ctx.r31.s64 * 11;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x830ae198
	ctx.lr = 0x830E5510;
	sub_830AE198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E551C"))) PPC_WEAK_FUNC(sub_830E551C);
PPC_FUNC_IMPL(__imp__sub_830E551C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E5520"))) PPC_WEAK_FUNC(sub_830E5520);
PPC_FUNC_IMPL(__imp__sub_830E5520) {
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
	ctx.lr = 0x830E5528;
	__savegprlr_16(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r18,36(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x830e5550
	if (cr6.lt) goto loc_830E5550;
loc_830E5544:
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_830E5550:
	// li r19,0
	ctx.r19.s64 = 0;
	// cmplwi cr6,r16,5
	cr6.compare<uint32_t>(ctx.r16.u32, 5, xer);
	// bne cr6,0x830e5590
	if (!cr6.eq) goto loc_830E5590;
	// bl 0x830ff290
	ctx.lr = 0x830E5560;
	sub_830FF290(ctx, base);
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x830ff290
	ctx.lr = 0x830E5568;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x830E556C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x830e5544
	if (!cr6.eq) goto loc_830E5544;
	// cmpw cr6,r28,r18
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r18.s32, xer);
	// bne cr6,0x830e558c
	if (!cr6.eq) goto loc_830E558C;
	// cmplwi cr6,r31,53
	cr6.compare<uint32_t>(ctx.r31.u32, 53, xer);
	// beq cr6,0x830e558c
	if (cr6.eq) goto loc_830E558C;
	// cmplwi cr6,r31,58
	cr6.compare<uint32_t>(ctx.r31.u32, 58, xer);
	// bne cr6,0x830e5544
	if (!cr6.eq) goto loc_830E5544;
loc_830E558C:
	// li r19,1
	ctx.r19.s64 = 1;
loc_830E5590:
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r21,6132(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6132);
	// bl 0x82a0c738
	ctx.lr = 0x830E55A4;
	sub_82A0C738(ctx, base);
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c710
	ctx.lr = 0x830E55B8;
	sub_82A0C710(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r8,r3,3612
	ctx.r8.s64 = ctx.r3.s64 + 3612;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_830E55D0:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830e55d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830E55D0;
	// addi r23,r8,15304
	ctx.r23.s64 = ctx.r8.s64 + 15304;
	// li r27,0
	ctx.r27.s64 = 0;
	// mulli r22,r28,11
	ctx.r22.s64 = ctx.r28.s64 * 11;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_830E55E8:
	// add. r29,r22,r27
	ctx.r29.u64 = ctx.r22.u64 + ctx.r27.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt 0x830e55fc
	if (cr0.lt) goto loc_830E55FC;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e5600
	if (cr6.lt) goto loc_830E5600;
loc_830E55FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E5600:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e56f4
	if (cr6.eq) goto loc_830E56F4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82a164c8
	ctx.lr = 0x830E5618;
	sub_82A164C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a16c18
	ctx.lr = 0x830E5620;
	sub_82A16C18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e56f4
	if (cr6.eq) goto loc_830E56F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83530640
	ctx.lr = 0x830E5634;
	sub_83530640(ctx, base);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,11
	cr6.compare<uint32_t>(ctx.r27.u32, 11, xer);
	// bge cr6,0x830e564c
	if (!cr6.lt) goto loc_830E564C;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x830e5650
	goto loc_830E5650;
loc_830E564C:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
loc_830E5650:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e566c
	if (!cr6.eq) goto loc_830E566C;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830e56f4
	if (!cr6.eq) goto loc_830E56F4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e5674
	if (cr6.eq) goto loc_830E5674;
loc_830E566C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830e56f4
	if (cr6.eq) goto loc_830E56F4;
loc_830E5674:
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e56b8
	if (cr6.eq) goto loc_830E56B8;
	// cmpw cr6,r28,r18
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r18.s32, xer);
	// bne cr6,0x830e56dc
	if (!cr6.eq) goto loc_830E56DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be4eb8
	ctx.lr = 0x830E5694;
	sub_82BE4EB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82a26da0
	ctx.lr = 0x830E56A8;
	sub_82A26DA0(ctx, base);
	// lhz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 164);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830e56f4
	if (!cr6.eq) goto loc_830E56F4;
	// b 0x830e56dc
	goto loc_830E56DC;
loc_830E56B8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x830d9680
	ctx.lr = 0x830E56C4;
	sub_830D9680(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x830e56f4
	if (cr6.gt) goto loc_830E56F4;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,80
	cr6.compare<uint32_t>(ctx.r11.u32, 80, xer);
	// blt cr6,0x830e56f4
	if (cr6.lt) goto loc_830E56F4;
loc_830E56DC:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// rlwinm r10,r25,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3FC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r25,r8,24
	ctx.r25.u64 = ctx.r8.u32 & 0xFF;
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u32);
loc_830E56F4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpwi cr6,r27,11
	cr6.compare<int32_t>(ctx.r27.s32, 11, xer);
	// blt cr6,0x830e55e8
	if (cr6.lt) goto loc_830E55E8;
	// clrlwi r31,r25,24
	ctx.r31.u64 = ctx.r25.u32 & 0xFF;
	// lwz r30,-3564(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830e57e4
	if (cr6.eq) goto loc_830E57E4;
	// lwz r9,392(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lwz r8,292(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// twllei r31,0
	// twllei r31,0
	// twllei r31,0
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,4472(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4472);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// divwu r4,r7,r31
	ctx.r4.u32 = PPCDivide(ctx.r7.u32, ctx.r31.u32);
	// divwu r3,r5,r31
	ctx.r3.u32 = PPCDivide(ctx.r5.u32, ctx.r31.u32);
	// rotlwi r11,r6,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r10,r6,r31
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r31.s32);
	// mullw r8,r4,r31
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r31.s32);
	// mullw r4,r3,r31
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mullw r3,r10,r31
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// subf r11,r8,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r8.s64;
	// subf r10,r4,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r4.s64;
	// andc r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 & ~ctx.r9.u64;
	// subf r8,r3,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r3.s64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// twlgei r9,-1
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// beq cr6,0x830e57e4
	if (cr6.eq) goto loc_830E57E4;
	// rlwinm r8,r10,2,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// rlwinm r3,r11,2,22,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// rlwinm r10,r7,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E57A4:
	// lwzx r29,r8,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r3,r4
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// stwx r29,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r29.u32);
	// stwx r27,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r27.u32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// lwzx r29,r10,r7
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stwx r29,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r29.u32);
	// stwx r27,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r27.u32);
	// lwzx r29,r6,r5
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// stwx r29,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r29.u32);
	// stwx r27,r6,r5
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r27.u32);
	// blt cr6,0x830e57a4
	if (cr6.lt) goto loc_830E57A4;
loc_830E57E4:
	// li r27,255
	ctx.r27.s64 = 255;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830e589c
	if (cr6.eq) goto loc_830E589C;
	// lwz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// twllei r31,0
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r9,r10,r31
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r31.s32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mullw r7,r9,r31
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// andc r5,r31,r8
	ctx.r5.u64 = ctx.r31.u64 & ~ctx.r8.u64;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// twlgei r5,-1
	// beq cr6,0x830e589c
	if (cr6.eq) goto loc_830E589C;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_830E582C:
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830e41c8
	ctx.lr = 0x830E5848;
	sub_830E41C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830e5898
	if (!cr6.eq) goto loc_830E5898;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r31,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subfc r5,r31,r9
	xer.ca = ctx.r9.u32 >= ctx.r31.u32;
	ctx.r5.s64 = ctx.r9.s64 - ctx.r31.s64;
	// rlwinm r4,r9,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// clrlwi r29,r8,24
	ctx.r29.u64 = ctx.r8.u32 & 0xFF;
	// subfe r3,r4,r6
	temp.u8 = (~ctx.r4.u32 + ctx.r6.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// and r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 & ctx.r9.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x830e582c
	if (cr6.lt) goto loc_830E582C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_830E5898:
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_830E589C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E58A8"))) PPC_WEAK_FUNC(sub_830E58A8);
PPC_FUNC_IMPL(__imp__sub_830E58A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x830E58B0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addis r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 65536;
	// addi r31,r31,26208
	ctx.r31.s64 = ctx.r31.s64 + 26208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a45490
	ctx.lr = 0x830E58D4;
	sub_82A45490(ctx, base);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r25,255
	ctx.r25.s64 = 255;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addis r23,r9,1
	ctx.r23.s64 = ctx.r9.s64 + 65536;
	// addi r23,r23,23412
	ctx.r23.s64 = ctx.r23.s64 + 23412;
	// lwz r11,788(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 788);
	// lwz r22,28(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830e591c
	if (cr6.lt) goto loc_830E591C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830e591c
	if (!cr6.lt) goto loc_830E591C;
	// lwz r11,792(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 792);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830e591c
	if (cr6.lt) goto loc_830E591C;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e5920
	if (cr6.lt) goto loc_830E5920;
loc_830E591C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E5920:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e593c
	if (cr6.eq) goto loc_830E593C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// ld r4,788(r23)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r23.u32 + 788);
	// bl 0x82a2b388
	ctx.lr = 0x830E5938;
	sub_82A2B388(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_830E593C:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r21,r8,27,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addis r26,r7,1
	ctx.r26.s64 = ctx.r7.s64 + 65536;
	// addi r26,r26,24528
	ctx.r26.s64 = ctx.r26.s64 + 24528;
	// bge cr6,0x830e5cfc
	if (!cr6.lt) goto loc_830E5CFC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830e5cfc
	if (!cr6.lt) goto loc_830E5CFC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830e5a18
	if (cr6.eq) goto loc_830E5A18;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e5a18
	if (cr6.eq) goto loc_830E5A18;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a45490
	ctx.lr = 0x830E5994;
	sub_82A45490(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_830E599C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a22b40
	ctx.lr = 0x830E59AC;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x830e5a18
	if (cr6.gt) goto loc_830E5A18;
	// bne cr6,0x830e59e0
	if (!cr6.eq) goto loc_830E59E0;
	// ld r20,4(r3)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x830a6bf8
	ctx.lr = 0x830E59D0;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E59D4;
	sub_8357ECF8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x830ae150
	ctx.lr = 0x830E59E0;
	sub_830AE150(ctx, base);
loc_830E59E0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x830e5a0c
	if (!cr6.eq) goto loc_830E5A0C;
	// ld r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4);
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x830a6bf8
	ctx.lr = 0x830E59FC;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E5A00;
	sub_8357ECF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x830ae150
	ctx.lr = 0x830E5A0C;
	sub_830AE150(ctx, base);
loc_830E5A0C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,10
	cr6.compare<int32_t>(ctx.r29.s32, 10, xer);
	// blt cr6,0x830e599c
	if (cr6.lt) goto loc_830E599C;
loc_830E5A18:
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x830e5ad4
	if (!cr6.eq) goto loc_830E5AD4;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,22272
	ctx.r9.s64 = ctx.r9.s64 + 22272;
	// ld r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 92);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// beq cr6,0x830e5ad4
	if (cr6.eq) goto loc_830E5AD4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830e5a74
	if (cr6.lt) goto loc_830E5A74;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x830e5a74
	if (!cr6.lt) goto loc_830E5A74;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x830e5a74
	if (cr6.lt) goto loc_830E5A74;
	// cmpwi cr6,r8,32
	cr6.compare<int32_t>(ctx.r8.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e5a78
	if (cr6.lt) goto loc_830E5A78;
loc_830E5A74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E5A78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e5ad4
	if (cr6.eq) goto loc_830E5AD4;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x830e5aa0
	if (!cr6.eq) goto loc_830E5AA0;
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830e5aa4
	if (cr6.eq) goto loc_830E5AA4;
loc_830E5AA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E5AA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830e5ad4
	if (cr6.eq) goto loc_830E5AD4;
	// ld r30,92(r9)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 92);
	// li r31,2
	ctx.r31.s64 = 2;
	// bl 0x830a6bf8
	ctx.lr = 0x830E5AC4;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E5AC8;
	sub_8357ECF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x830ae150
	ctx.lr = 0x830E5AD4;
	sub_830AE150(ctx, base);
loc_830E5AD4:
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x830e5af0
	if (cr6.eq) goto loc_830E5AF0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x830e5af0
	if (cr6.eq) goto loc_830E5AF0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x830e5b30
	if (!cr6.eq) goto loc_830E5B30;
loc_830E5AF0:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// blt cr6,0x830e5b04
	if (cr6.lt) goto loc_830E5B04;
	// cmpwi cr6,r25,22
	cr6.compare<int32_t>(ctx.r25.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e5b08
	if (cr6.lt) goto loc_830E5B08;
loc_830E5B04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E5B08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e5b30
	if (cr6.eq) goto loc_830E5B30;
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x830a6bf8
	ctx.lr = 0x830E5B1C;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E5B20;
	sub_8357ECF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// bl 0x830ae198
	ctx.lr = 0x830E5B30;
	sub_830AE198(ctx, base);
loc_830E5B30:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830e4560
	ctx.lr = 0x830E5B38;
	sub_830E4560(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830e5b50
	if (cr6.lt) goto loc_830E5B50;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e5b54
	if (cr6.lt) goto loc_830E5B54;
loc_830E5B50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E5B54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e5b7c
	if (cr6.eq) goto loc_830E5B7C;
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x830a6bf8
	ctx.lr = 0x830E5B68;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E5B6C;
	sub_8357ECF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x830ae198
	ctx.lr = 0x830E5B7C;
	sub_830AE198(ctx, base);
loc_830E5B7C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, xer);
	// bne cr6,0x830e5c80
	if (!cr6.eq) goto loc_830E5C80;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,4(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r7,12(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r31,255
	ctx.r31.s64 = 255;
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r30,r7,r8
	ctx.r30.s64 = ctx.r8.s64 - ctx.r7.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// li r8,3
	ctx.r8.s64 = 3;
loc_830E5BAC:
	// subfc r9,r8,r10
	xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfc r5,r8,r10
	xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r5.s64 = ctx.r10.s64 - ctx.r8.s64;
	// and r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 & ctx.r11.u64;
	// subfe r7,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r9,r3,4,20,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFF0;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// add r5,r9,r26
	ctx.r5.u64 = ctx.r9.u64 + ctx.r26.u64;
	// rlwinm r11,r6,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFF0;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x830e5bf0
	if (cr6.lt) goto loc_830E5BF0;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x830e5bf4
	if (cr6.lt) goto loc_830E5BF4;
loc_830E5BF0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_830E5BF4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830e5c18
	if (cr6.eq) goto loc_830E5C18;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830e5c10
	if (cr6.eq) goto loc_830E5C10;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x830e5c18
	if (!cr6.gt) goto loc_830E5C18;
loc_830E5C10:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_830E5C18:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x830e5bac
	if (cr6.lt) goto loc_830E5BAC;
	// bl 0x83740858
	ctx.lr = 0x830E5C30;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x830e5c80
	if (!cr6.lt) goto loc_830E5C80;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830e5c54
	if (cr6.lt) goto loc_830E5C54;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e5c58
	if (cr6.lt) goto loc_830E5C58;
loc_830E5C54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E5C58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e5c80
	if (cr6.eq) goto loc_830E5C80;
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x830a6bf8
	ctx.lr = 0x830E5C6C;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E5C70;
	sub_8357ECF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// bl 0x830ae198
	ctx.lr = 0x830E5C80;
	sub_830AE198(ctx, base);
loc_830E5C80:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82a2a310
	ctx.lr = 0x830E5C8C;
	sub_82A2A310(ctx, base);
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830a6bf8
	ctx.lr = 0x830E5C98;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E5C9C;
	sub_8357ECF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// bl 0x830ae198
	ctx.lr = 0x830E5CAC;
	sub_830AE198(ctx, base);
	// lwz r31,24(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830e5cc4
	if (cr6.lt) goto loc_830E5CC4;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e5cc8
	if (cr6.lt) goto loc_830E5CC8;
loc_830E5CC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E5CC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e5cf0
	if (cr6.eq) goto loc_830E5CF0;
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x830a6bf8
	ctx.lr = 0x830E5CDC;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E5CE0;
	sub_8357ECF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// bl 0x830ae198
	ctx.lr = 0x830E5CF0;
	sub_830AE198(ctx, base);
loc_830E5CF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_830E5CFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E5D08"))) PPC_WEAK_FUNC(sub_830E5D08);
PPC_FUNC_IMPL(__imp__sub_830E5D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830E5D10;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,2
	ctx.r31.s64 = 2;
	// lwz r29,132(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22ac0
	ctx.lr = 0x830E5D2C;
	sub_82A22AC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x830e5d44
	if (!cr6.gt) goto loc_830E5D44;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22a50
	ctx.lr = 0x830E5D40;
	sub_82A22A50(ctx, base);
	// lwz r31,324(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
loc_830E5D44:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addis r26,r10,1
	ctx.r26.s64 = ctx.r10.s64 + 65536;
	// addis r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 65536;
	// addi r26,r26,23412
	ctx.r26.s64 = ctx.r26.s64 + 23412;
	// addi r29,r29,22272
	ctx.r29.s64 = ctx.r29.s64 + 22272;
	// addi r27,r26,92
	ctx.r27.s64 = ctx.r26.s64 + 92;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830e5ec0
	if (!cr6.lt) goto loc_830E5EC0;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// bne cr6,0x830e5ec0
	if (!cr6.eq) goto loc_830E5EC0;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x830e4560
	ctx.lr = 0x830E5D84;
	sub_830E4560(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830e5d9c
	if (cr6.lt) goto loc_830E5D9C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e5da0
	if (cr6.lt) goto loc_830E5DA0;
loc_830E5D9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E5DA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e5dc8
	if (cr6.eq) goto loc_830E5DC8;
	// lwz r25,0(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830a6bf8
	ctx.lr = 0x830E5DB4;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E5DB8;
	sub_8357ECF8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830ae198
	ctx.lr = 0x830E5DC8;
	sub_830AE198(ctx, base);
loc_830E5DC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a44eb8
	ctx.lr = 0x830E5DD4;
	sub_82A44EB8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x830e5e44
	if (!cr6.eq) goto loc_830E5E44;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e5e44
	if (cr6.eq) goto loc_830E5E44;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a2a310
	ctx.lr = 0x830E5DF8;
	sub_82A2A310(ctx, base);
	// lwz r31,28(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830e5e10
	if (cr6.lt) goto loc_830E5E10;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e5e14
	if (cr6.lt) goto loc_830E5E14;
loc_830E5E10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E5E14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e5e44
	if (cr6.eq) goto loc_830E5E44;
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, xer);
	// beq cr6,0x830e5e44
	if (cr6.eq) goto loc_830E5E44;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830a6bf8
	ctx.lr = 0x830E5E30;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E5E34;
	sub_8357ECF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x830ae198
	ctx.lr = 0x830E5E44;
	sub_830AE198(ctx, base);
loc_830E5E44:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a2a310
	ctx.lr = 0x830E5E50;
	sub_82A2A310(ctx, base);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x830a6bf8
	ctx.lr = 0x830E5E5C;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E5E60;
	sub_8357ECF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x830ae198
	ctx.lr = 0x830E5E70;
	sub_830AE198(ctx, base);
	// lwz r31,24(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830e5e88
	if (cr6.lt) goto loc_830E5E88;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e5e8c
	if (cr6.lt) goto loc_830E5E8C;
loc_830E5E88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E5E8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e5eb4
	if (cr6.eq) goto loc_830E5EB4;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830a6bf8
	ctx.lr = 0x830E5EA0;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E5EA4;
	sub_8357ECF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// bl 0x830ae198
	ctx.lr = 0x830E5EB4;
	sub_830AE198(ctx, base);
loc_830E5EB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830E5EC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E5ECC"))) PPC_WEAK_FUNC(sub_830E5ECC);
PPC_FUNC_IMPL(__imp__sub_830E5ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E5ED0"))) PPC_WEAK_FUNC(sub_830E5ED0);
PPC_FUNC_IMPL(__imp__sub_830E5ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x830E5ED8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,36(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,2
	cr6.compare<int32_t>(ctx.r23.s32, 2, xer);
	// blt cr6,0x830e5ef8
	if (cr6.lt) goto loc_830E5EF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830E5EF8:
	// addic r11,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// li r9,11
	ctx.r9.s64 = 11;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x830e5f18
	if (!cr6.lt) goto loc_830E5F18;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x830e5f40
	goto loc_830E5F40;
loc_830E5F18:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x830e5f28
	if (!cr6.lt) goto loc_830E5F28;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x830e5f40
	goto loc_830E5F40;
loc_830E5F28:
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
	// clrlwi r28,r7,31
	ctx.r28.u64 = ctx.r7.u32 & 0x1;
loc_830E5F40:
	// lwz r30,0(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x830a6bf8
	ctx.lr = 0x830E5F48;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E5F4C;
	sub_8357ECF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830ae198
	ctx.lr = 0x830E5F5C;
	sub_830AE198(ctx, base);
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4456(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bgt cr6,0x830e6424
	if (cr6.gt) goto loc_830E6424;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r24,6132(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r26,392(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r27,192(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// li r25,255
	ctx.r25.s64 = 255;
	// bl 0x830e5520
	ctx.lr = 0x830E5F94;
	sub_830E5520(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830e5520
	ctx.lr = 0x830E5FA8;
	sub_830E5520(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830e5fc0
	if (cr6.lt) goto loc_830E5FC0;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e5fc4
	if (cr6.lt) goto loc_830E5FC4;
loc_830E5FC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E5FC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e605c
	if (cr6.eq) goto loc_830E605C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830E5FDC;
	sub_82A0C738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a164c8
	ctx.lr = 0x830E5FE4;
	sub_82A164C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82be4eb8
	ctx.lr = 0x830E5FF0;
	sub_82BE4EB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82a26da0
	ctx.lr = 0x830E6004;
	sub_82A26DA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x830E600C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// beq cr6,0x830e6024
	if (cr6.eq) goto loc_830E6024;
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830e6028
	if (!cr6.eq) goto loc_830E6028;
loc_830E6024:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830E6028:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e6054
	if (cr6.eq) goto loc_830E6054;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8261a110
	ctx.lr = 0x830E603C;
	sub_8261A110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e6054
	if (cr6.eq) goto loc_830E6054;
	// lhz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e605c
	if (cr6.eq) goto loc_830E605C;
loc_830E6054:
	// li r31,255
	ctx.r31.s64 = 255;
	// b 0x830e6070
	goto loc_830E6070;
loc_830E605C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830e6070
	if (cr6.lt) goto loc_830E6070;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e6074
	if (cr6.lt) goto loc_830E6074;
loc_830E6070:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E6074:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e6088
	if (cr6.eq) goto loc_830E6088;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// b 0x830e60b0
	goto loc_830E60B0;
loc_830E6088:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x830e609c
	if (cr6.lt) goto loc_830E609C;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e60a0
	if (cr6.lt) goto loc_830E60A0;
loc_830E609C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E60A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e60b0
	if (cr6.eq) goto loc_830E60B0;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
loc_830E60B0:
	// li r30,255
	ctx.r30.s64 = 255;
	// li r29,255
	ctx.r29.s64 = 255;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// blt cr6,0x830e60cc
	if (cr6.lt) goto loc_830E60CC;
	// cmpwi cr6,r25,22
	cr6.compare<int32_t>(ctx.r25.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e60d0
	if (cr6.lt) goto loc_830E60D0;
loc_830E60CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E60D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e6104
	if (!cr6.eq) goto loc_830E6104;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830e5520
	ctx.lr = 0x830E60EC;
	sub_830E5520(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830e5520
	ctx.lr = 0x830E6100;
	sub_830E5520(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_830E6104:
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830e82f8
	ctx.lr = 0x830E6114;
	sub_830E82F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e6140
	if (!cr6.eq) goto loc_830E6140;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830e82f8
	ctx.lr = 0x830E6130;
	sub_830E82F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x830e6144
	if (cr6.eq) goto loc_830E6144;
loc_830E6140:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830E6144:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830e6184
	if (cr6.eq) goto loc_830E6184;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a26930
	ctx.lr = 0x830E615C;
	sub_82A26930(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e6184
	if (cr6.eq) goto loc_830E6184;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,48710
	ctx.r10.u64 = ctx.r11.u64 | 48710;
	// lbzx r11,r24,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r10.u32);
	// addi r9,r11,-3
	ctx.r9.s64 = ctx.r11.s64 + -3;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r6,r31
	ctx.r31.u64 = ctx.r6.u64 & ctx.r31.u64;
loc_830E6184:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a342a0
	ctx.lr = 0x830E618C;
	sub_82A342A0(ctx, base);
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bne cr6,0x830e6298
	if (!cr6.eq) goto loc_830E6298;
	// lis r11,21845
	ctx.r11.s64 = 1431633920;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// ori r8,r11,21846
	ctx.r8.u64 = ctx.r11.u64 | 21846;
	// mulhw r11,r9,r8
	ctx.r11.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x830e6374
	if (!cr0.eq) goto loc_830E6374;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x830e61dc
	if (cr6.lt) goto loc_830E61DC;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e61e0
	if (cr6.lt) goto loc_830E61E0;
loc_830E61DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E61E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e6224
	if (cr6.eq) goto loc_830E6224;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x830e6200
	if (cr6.lt) goto loc_830E6200;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e6204
	if (cr6.lt) goto loc_830E6204;
loc_830E6200:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E6204:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e6224
	if (cr6.eq) goto loc_830E6224;
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e6370
	if (cr6.eq) goto loc_830E6370;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// b 0x830e6374
	goto loc_830E6374;
loc_830E6224:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x830e6238
	if (cr6.lt) goto loc_830E6238;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e623c
	if (cr6.lt) goto loc_830E623C;
loc_830E6238:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E623C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e626c
	if (!cr6.eq) goto loc_830E626C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x830e625c
	if (cr6.lt) goto loc_830E625C;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e6260
	if (cr6.lt) goto loc_830E6260;
loc_830E625C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E6260:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e6374
	if (cr6.eq) goto loc_830E6374;
loc_830E626C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x830e6280
	if (cr6.lt) goto loc_830E6280;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e6284
	if (cr6.lt) goto loc_830E6284;
loc_830E6280:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E6284:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e6370
	if (cr6.eq) goto loc_830E6370;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// b 0x830e6374
	goto loc_830E6374;
loc_830E6298:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x830e62ac
	if (cr6.lt) goto loc_830E62AC;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e62b0
	if (cr6.lt) goto loc_830E62B0;
loc_830E62AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E62B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e62c8
	if (cr6.eq) goto loc_830E62C8;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e6370
	if (!cr6.eq) goto loc_830E6370;
loc_830E62C8:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x830e62dc
	if (cr6.lt) goto loc_830E62DC;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e62e0
	if (cr6.lt) goto loc_830E62E0;
loc_830E62DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E62E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e6314
	if (cr6.eq) goto loc_830E6314;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e6374
	if (!cr6.eq) goto loc_830E6374;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a269f8
	ctx.lr = 0x830E6300;
	sub_82A269F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e6374
	if (!cr6.eq) goto loc_830E6374;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// b 0x830e6374
	goto loc_830E6374;
loc_830E6314:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x830e6328
	if (cr6.lt) goto loc_830E6328;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e632c
	if (cr6.lt) goto loc_830E632C;
loc_830E6328:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E632C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e6374
	if (cr6.eq) goto loc_830E6374;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e6374
	if (!cr6.eq) goto loc_830E6374;
	// lis r11,26214
	ctx.r11.s64 = 1717960704;
	// lbz r9,7(r24)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + 7);
	// ori r8,r11,26215
	ctx.r8.u64 = ctx.r11.u64 | 26215;
	// mulhw r7,r9,r8
	ctx.r7.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r11,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x830e6374
	if (!cr0.eq) goto loc_830E6374;
loc_830E6370:
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
loc_830E6374:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bge cr6,0x830e63c8
	if (!cr6.lt) goto loc_830E63C8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830e63c8
	if (!cr6.eq) goto loc_830E63C8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// ld r5,24(r24)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a26da0
	ctx.lr = 0x830E6398;
	sub_82A26DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8261a110
	ctx.lr = 0x830E63A0;
	sub_8261A110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e63c8
	if (cr6.eq) goto loc_830E63C8;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830e63c8
	if (cr6.eq) goto loc_830E63C8;
	// li r25,255
	ctx.r25.s64 = 255;
	// b 0x830e63dc
	goto loc_830E63DC;
loc_830E63C8:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// blt cr6,0x830e63dc
	if (cr6.lt) goto loc_830E63DC;
	// cmpwi cr6,r25,22
	cr6.compare<int32_t>(ctx.r25.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830e63e0
	if (cr6.lt) goto loc_830E63E0;
loc_830E63DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E63E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e6424
	if (cr6.eq) goto loc_830E6424;
	// lwz r31,0(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x830a6bf8
	ctx.lr = 0x830E63F4;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E63F8;
	sub_8357ECF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x830ae198
	ctx.lr = 0x830E6408;
	sub_830AE198(ctx, base);
	// lwz r31,0(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x830a6bf8
	ctx.lr = 0x830E6410;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830E6414;
	sub_8357ECF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// bl 0x830ae198
	ctx.lr = 0x830E6424;
	sub_830AE198(ctx, base);
loc_830E6424:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E6430"))) PPC_WEAK_FUNC(sub_830E6430);
PPC_FUNC_IMPL(__imp__sub_830E6430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,144
	ctx.r10.s64 = 144;
	// li r9,145
	ctx.r9.s64 = 145;
	// li r8,147
	ctx.r8.s64 = 147;
	// stw r10,-384(r1)
	PPC_STORE_U32(ctx.r1.u32 + -384, ctx.r10.u32);
	// li r7,146
	ctx.r7.s64 = 146;
	// stw r9,-380(r1)
	PPC_STORE_U32(ctx.r1.u32 + -380, ctx.r9.u32);
	// stw r8,-376(r1)
	PPC_STORE_U32(ctx.r1.u32 + -376, ctx.r8.u32);
	// li r6,140
	ctx.r6.s64 = 140;
	// stw r7,-372(r1)
	PPC_STORE_U32(ctx.r1.u32 + -372, ctx.r7.u32);
	// li r5,86
	ctx.r5.s64 = 86;
	// li r4,85
	ctx.r4.s64 = 85;
	// stw r6,-368(r1)
	PPC_STORE_U32(ctx.r1.u32 + -368, ctx.r6.u32);
	// li r10,88
	ctx.r10.s64 = 88;
	// stw r5,-364(r1)
	PPC_STORE_U32(ctx.r1.u32 + -364, ctx.r5.u32);
	// li r9,84
	ctx.r9.s64 = 84;
	// stw r4,-360(r1)
	PPC_STORE_U32(ctx.r1.u32 + -360, ctx.r4.u32);
	// li r8,87
	ctx.r8.s64 = 87;
	// stw r10,-356(r1)
	PPC_STORE_U32(ctx.r1.u32 + -356, ctx.r10.u32);
	// li r7,90
	ctx.r7.s64 = 90;
	// stw r9,-352(r1)
	PPC_STORE_U32(ctx.r1.u32 + -352, ctx.r9.u32);
	// stw r8,-348(r1)
	PPC_STORE_U32(ctx.r1.u32 + -348, ctx.r8.u32);
	// li r6,89
	ctx.r6.s64 = 89;
	// stw r7,-344(r1)
	PPC_STORE_U32(ctx.r1.u32 + -344, ctx.r7.u32);
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,95
	ctx.r4.s64 = 95;
	// stw r6,-340(r1)
	PPC_STORE_U32(ctx.r1.u32 + -340, ctx.r6.u32);
	// li r10,96
	ctx.r10.s64 = 96;
	// stw r5,-336(r1)
	PPC_STORE_U32(ctx.r1.u32 + -336, ctx.r5.u32);
	// li r9,94
	ctx.r9.s64 = 94;
	// stw r4,-332(r1)
	PPC_STORE_U32(ctx.r1.u32 + -332, ctx.r4.u32);
	// li r8,97
	ctx.r8.s64 = 97;
	// stw r10,-328(r1)
	PPC_STORE_U32(ctx.r1.u32 + -328, ctx.r10.u32);
	// li r7,111
	ctx.r7.s64 = 111;
	// stw r9,-324(r1)
	PPC_STORE_U32(ctx.r1.u32 + -324, ctx.r9.u32);
	// stw r8,-320(r1)
	PPC_STORE_U32(ctx.r1.u32 + -320, ctx.r8.u32);
	// li r6,112
	ctx.r6.s64 = 112;
	// stw r7,-316(r1)
	PPC_STORE_U32(ctx.r1.u32 + -316, ctx.r7.u32);
	// li r5,114
	ctx.r5.s64 = 114;
	// li r4,121
	ctx.r4.s64 = 121;
	// stw r6,-312(r1)
	PPC_STORE_U32(ctx.r1.u32 + -312, ctx.r6.u32);
	// li r10,136
	ctx.r10.s64 = 136;
	// stw r5,-308(r1)
	PPC_STORE_U32(ctx.r1.u32 + -308, ctx.r5.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r4,-304(r1)
	PPC_STORE_U32(ctx.r1.u32 + -304, ctx.r4.u32);
	// li r8,14
	ctx.r8.s64 = 14;
	// stw r10,-300(r1)
	PPC_STORE_U32(ctx.r1.u32 + -300, ctx.r10.u32);
	// li r7,21
	ctx.r7.s64 = 21;
	// stw r9,-296(r1)
	PPC_STORE_U32(ctx.r1.u32 + -296, ctx.r9.u32);
	// li r6,22
	ctx.r6.s64 = 22;
	// stw r8,-292(r1)
	PPC_STORE_U32(ctx.r1.u32 + -292, ctx.r8.u32);
	// stw r7,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r7.u32);
	// li r5,26
	ctx.r5.s64 = 26;
	// li r4,30
	ctx.r4.s64 = 30;
	// stw r6,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r6.u32);
	// li r10,31
	ctx.r10.s64 = 31;
	// stw r5,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r5.u32);
	// li r9,120
	ctx.r9.s64 = 120;
	// stw r4,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r4.u32);
	// li r8,153
	ctx.r8.s64 = 153;
	// stw r10,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r10.u32);
	// li r7,149
	ctx.r7.s64 = 149;
	// stw r9,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r9.u32);
	// li r6,110
	ctx.r6.s64 = 110;
	// stw r8,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r8.u32);
	// stw r7,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r7.u32);
	// li r11,159
	ctx.r11.s64 = 159;
	// li r5,101
	ctx.r5.s64 = 101;
	// stw r6,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r6.u32);
	// li r4,102
	ctx.r4.s64 = 102;
	// stw r11,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r11.u32);
	// li r10,103
	ctx.r10.s64 = 103;
	// stw r5,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r5.u32);
	// li r9,104
	ctx.r9.s64 = 104;
	// stw r4,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r4.u32);
	// li r8,105
	ctx.r8.s64 = 105;
	// stw r10,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r10.u32);
	// li r7,106
	ctx.r7.s64 = 106;
	// stw r9,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r9.u32);
	// stw r8,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r8.u32);
	// li r6,107
	ctx.r6.s64 = 107;
	// stw r7,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r7.u32);
	// li r5,108
	ctx.r5.s64 = 108;
	// stw r6,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r6.u32);
	// li r4,109
	ctx.r4.s64 = 109;
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// stw r5,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r5.u32);
	// li r10,46
	ctx.r10.s64 = 46;
	// stw r4,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// li r9,47
	ctx.r9.s64 = 47;
	// li r8,48
	ctx.r8.s64 = 48;
	// stw r10,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// li r7,42
	ctx.r7.s64 = 42;
	// stw r9,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r9.u32);
	// li r6,43
	ctx.r6.s64 = 43;
	// stw r8,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r8.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// stw r7,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r7.u32);
	// li r4,38
	ctx.r4.s64 = 38;
	// stw r6,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r6.u32);
	// stw r5,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r5.u32);
	// li r10,39
	ctx.r10.s64 = 39;
	// stw r4,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r4.u32);
	// li r9,40
	ctx.r9.s64 = 40;
	// li r8,55
	ctx.r8.s64 = 55;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// li r7,53
	ctx.r7.s64 = 53;
	// stw r9,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r9.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// stw r8,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r8.u32);
	// li r5,51
	ctx.r5.s64 = 51;
	// stw r7,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r7.u32);
	// li r4,52
	ctx.r4.s64 = 52;
	// stw r6,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r6.u32);
	// stw r5,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r5.u32);
	// li r10,54
	ctx.r10.s64 = 54;
	// stw r4,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r4.u32);
	// li r9,56
	ctx.r9.s64 = 56;
	// li r8,57
	ctx.r8.s64 = 57;
	// stw r10,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// li r7,60
	ctx.r7.s64 = 60;
	// stw r9,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r9.u32);
	// li r6,61
	ctx.r6.s64 = 61;
	// stw r8,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r8.u32);
	// li r5,62
	ctx.r5.s64 = 62;
	// stw r7,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r7.u32);
	// li r4,63
	ctx.r4.s64 = 63;
	// stw r6,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r6.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r5,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r5.u32);
	// li r9,65
	ctx.r9.s64 = 65;
	// stw r4,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r4.u32);
	// li r8,59
	ctx.r8.s64 = 59;
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// li r7,66
	ctx.r7.s64 = 66;
	// stw r9,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r9.u32);
	// li r6,67
	ctx.r6.s64 = 67;
	// stw r8,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r8.u32);
	// li r5,68
	ctx.r5.s64 = 68;
	// stw r7,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r7.u32);
	// li r4,70
	ctx.r4.s64 = 70;
	// stw r6,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r6.u32);
	// li r10,82
	ctx.r10.s64 = 82;
	// stw r5,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r5.u32);
	// li r9,72
	ctx.r9.s64 = 72;
	// stw r4,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r4.u32);
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r11,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// li r7,74
	ctx.r7.s64 = 74;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// li r6,75
	ctx.r6.s64 = 75;
	// stw r10,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r10.u32);
	// li r5,77
	ctx.r5.s64 = 77;
	// stw r9,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r9.u32);
	// li r4,83
	ctx.r4.s64 = 83;
	// stw r8,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r8.u32);
	// stw r7,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r7.u32);
	// li r11,129
	ctx.r11.s64 = 129;
	// stw r6,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r6.u32);
	// li r10,122
	ctx.r10.s64 = 122;
	// stw r5,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r5.u32);
	// li r9,123
	ctx.r9.s64 = 123;
	// stw r4,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r4.u32);
	// li r8,124
	ctx.r8.s64 = 124;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// li r7,125
	ctx.r7.s64 = 125;
	// stw r10,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r10.u32);
	// li r6,130
	ctx.r6.s64 = 130;
	// stw r9,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r9.u32);
	// li r5,131
	ctx.r5.s64 = 131;
	// stw r8,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r8.u32);
	// stw r7,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r7.u32);
	// li r4,132
	ctx.r4.s64 = 132;
	// stw r6,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r6.u32);
	// li r11,133
	ctx.r11.s64 = 133;
	// stw r5,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r5.u32);
	// li r10,100
	ctx.r10.s64 = 100;
	// li r9,41
	ctx.r9.s64 = 41;
	// stw r4,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r4.u32);
	// li r8,45
	ctx.r8.s64 = 45;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// li r7,49
	ctx.r7.s64 = 49;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// li r6,69
	ctx.r6.s64 = 69;
	// stw r9,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r9.u32);
	// li r5,71
	ctx.r5.s64 = 71;
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r7,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
	// cmplwi cr6,r3,96
	cr6.compare<uint32_t>(ctx.r3.u32, 96, xer);
	// stw r6,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r6.u32);
	// stw r5,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// blt cr6,0x830e6734
	if (cr6.lt) goto loc_830E6734;
	// li r3,159
	ctx.r3.s64 = 159;
	// blr 
	return;
loc_830E6734:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-384
	ctx.r10.s64 = ctx.r1.s64 + -384;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E6744"))) PPC_WEAK_FUNC(sub_830E6744);
PPC_FUNC_IMPL(__imp__sub_830E6744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E6748"))) PPC_WEAK_FUNC(sub_830E6748);
PPC_FUNC_IMPL(__imp__sub_830E6748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x830e6758
	if (cr6.lt) goto loc_830E6758;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830E6758:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// li r7,4522
	ctx.r7.s64 = 4522;
	// ori r6,r11,35496
	ctx.r6.u64 = ctx.r11.u64 | 35496;
	// ori r5,r10,40352
	ctx.r5.u64 = ctx.r10.u64 | 40352;
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// stw r6,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r6.u32);
	// stw r5,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r5.u32);
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E6788"))) PPC_WEAK_FUNC(sub_830E6788);
PPC_FUNC_IMPL(__imp__sub_830E6788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x830e6798
	if (cr6.lt) goto loc_830E6798;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830E6798:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// li r9,52
	ctx.r9.s64 = 52;
	// li r8,108
	ctx.r8.s64 = 108;
	// li r7,109
	ctx.r7.s64 = 109;
	// sth r9,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r9.u16);
	// sth r8,-14(r1)
	PPC_STORE_U16(ctx.r1.u32 + -14, ctx.r8.u16);
	// sth r7,-12(r1)
	PPC_STORE_U16(ctx.r1.u32 + -12, ctx.r7.u16);
	// lhzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E67C0"))) PPC_WEAK_FUNC(sub_830E67C0);
PPC_FUNC_IMPL(__imp__sub_830E67C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
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

__attribute__((alias("__imp__sub_830E67D0"))) PPC_WEAK_FUNC(sub_830E67D0);
PPC_FUNC_IMPL(__imp__sub_830E67D0) {
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
	// bl 0x830ff290
	ctx.lr = 0x830E67E0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// beq cr6,0x830e67f8
	if (cr6.eq) goto loc_830E67F8;
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x830e67fc
	if (!cr6.eq) goto loc_830E67FC;
loc_830E67F8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_830E67FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E680C"))) PPC_WEAK_FUNC(sub_830E680C);
PPC_FUNC_IMPL(__imp__sub_830E680C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E6810"))) PPC_WEAK_FUNC(sub_830E6810);
PPC_FUNC_IMPL(__imp__sub_830E6810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,6132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e6834
	if (!cr6.eq) goto loc_830E6834;
loc_830E6824:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,-30424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30424);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_830E6834:
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bge cr6,0x830e6824
	if (!cr6.lt) goto loc_830E6824;
	// mulli r10,r5,8248
	ctx.r10.s64 = ctx.r5.s64 * 8248;
	// lis r9,0
	ctx.r9.s64 = 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r9,48952
	ctx.r7.u64 = ctx.r9.u64 | 48952;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E6858"))) PPC_WEAK_FUNC(sub_830E6858);
PPC_FUNC_IMPL(__imp__sub_830E6858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,6132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e6874
	if (!cr6.eq) goto loc_830E6874;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830E6874:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,48709
	ctx.r9.u64 = ctx.r10.u64 | 48709;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E688C"))) PPC_WEAK_FUNC(sub_830E688C);
PPC_FUNC_IMPL(__imp__sub_830E688C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E6890"))) PPC_WEAK_FUNC(sub_830E6890);
PPC_FUNC_IMPL(__imp__sub_830E6890) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,6132(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830e698c
	if (cr6.eq) goto loc_830E698C;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26900
	ctx.lr = 0x830E68C8;
	sub_82A26900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e698c
	if (cr6.eq) goto loc_830E698C;
	// lbz r5,568(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 568);
	// addi r10,r31,560
	ctx.r10.s64 = ctx.r31.s64 + 560;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830e6990
	if (cr6.eq) goto loc_830E6990;
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-30424(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -30424);
	// rlwinm r6,r7,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0x3FFF;
loc_830E6900:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x830e6914
	if (cr6.lt) goto loc_830E6914;
	// addi r10,r9,720
	ctx.r10.s64 = ctx.r9.s64 + 720;
	// b 0x830e6924
	goto loc_830E6924;
loc_830E6914:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_830E6924:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r4,r11,14,18,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// bne cr6,0x830e6948
	if (!cr6.eq) goto loc_830E6948;
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830e694c
	if (cr6.eq) goto loc_830E694C;
loc_830E6948:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E694C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e6974
	if (!cr6.eq) goto loc_830E6974;
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x830e6974
	if (!cr6.eq) goto loc_830E6974;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_830E6974:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// blt cr6,0x830e6900
	if (cr6.lt) goto loc_830E6900;
	// b 0x830e6990
	goto loc_830E6990;
loc_830E698C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E6990:
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

__attribute__((alias("__imp__sub_830E69A8"))) PPC_WEAK_FUNC(sub_830E69A8);
PPC_FUNC_IMPL(__imp__sub_830E69A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830E69B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,6132(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830e6b68
	if (cr6.eq) goto loc_830E6B68;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26900
	ctx.lr = 0x830E69DC;
	sub_82A26900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e6b68
	if (cr6.eq) goto loc_830E6B68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26f20
	ctx.lr = 0x830E69F4;
	sub_82A26F20(ctx, base);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lwz r30,-30424(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30424);
	// rlwinm r28,r30,14,18,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, xer);
	// bne cr6,0x830e6a24
	if (!cr6.eq) goto loc_830E6A24;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830e6a28
	if (cr6.eq) goto loc_830E6A28;
loc_830E6A24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E6A28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e6b68
	if (!cr6.eq) goto loc_830E6B68;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// addi r8,r31,560
	ctx.r8.s64 = ctx.r31.s64 + 560;
	// lbz r10,568(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e6b68
	if (cr6.eq) goto loc_830E6B68;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830e6a68
	if (cr6.eq) goto loc_830E6A68;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x830e6b68
	if (!cr6.lt) goto loc_830E6B68;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830e6a78
	if (!cr6.eq) goto loc_830E6A78;
loc_830E6A68:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x830e6b68
	if (cr6.eq) goto loc_830E6B68;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830e6a80
	if (cr6.eq) goto loc_830E6A80;
loc_830E6A78:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x830e6a84
	goto loc_830E6A84;
loc_830E6A80:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_830E6A84:
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x830e6b5c
	if (cr6.eq) goto loc_830E6B5C;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
loc_830E6AA0:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x830e6ab4
	if (cr6.lt) goto loc_830E6AB4;
	// addi r9,r8,720
	ctx.r9.s64 = ctx.r8.s64 + 720;
	// b 0x830e6ac4
	goto loc_830E6AC4;
loc_830E6AB4:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_830E6AC4:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// bne cr6,0x830e6ae8
	if (!cr6.eq) goto loc_830E6AE8;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830e6aec
	if (cr6.eq) goto loc_830E6AEC;
loc_830E6AE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E6AEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e6b08
	if (!cr6.eq) goto loc_830E6B08;
	// lbz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x830e6b28
	if (cr6.eq) goto loc_830E6B28;
loc_830E6B08:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// blt cr6,0x830e6aa0
	if (cr6.lt) goto loc_830E6AA0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830E6B28:
	// lbz r10,5(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lbz r8,7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r9,7(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// subf r5,r8,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r8.s64;
loc_830E6B5C:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830E6B68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E6B74"))) PPC_WEAK_FUNC(sub_830E6B74);
PPC_FUNC_IMPL(__imp__sub_830E6B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E6B78"))) PPC_WEAK_FUNC(sub_830E6B78);
PPC_FUNC_IMPL(__imp__sub_830E6B78) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,6132(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830e6c88
	if (cr6.eq) goto loc_830E6C88;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26900
	ctx.lr = 0x830E6BB0;
	sub_82A26900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e6c88
	if (cr6.eq) goto loc_830E6C88;
	// lbz r4,568(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 568);
	// addi r10,r31,560
	ctx.r10.s64 = ctx.r31.s64 + 560;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830e6c8c
	if (cr6.eq) goto loc_830E6C8C;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,-30424(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30424);
	// rlwinm r5,r6,14,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0x3FFF;
loc_830E6BE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x830e6bfc
	if (cr6.lt) goto loc_830E6BFC;
	// addi r10,r8,720
	ctx.r10.s64 = ctx.r8.s64 + 720;
	// b 0x830e6c0c
	goto loc_830E6C0C;
loc_830E6BFC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_830E6C0C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bne cr6,0x830e6c30
	if (!cr6.eq) goto loc_830E6C30;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830e6c34
	if (cr6.eq) goto loc_830E6C34;
loc_830E6C30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E6C34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e6c70
	if (!cr6.eq) goto loc_830E6C70;
	// lbz r11,5(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// lbz r10,7(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bne cr6,0x830e6c70
	if (!cr6.eq) goto loc_830E6C70;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_830E6C70:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// blt cr6,0x830e6be8
	if (cr6.lt) goto loc_830E6BE8;
	// b 0x830e6c8c
	goto loc_830E6C8C;
loc_830E6C88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E6C8C:
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

__attribute__((alias("__imp__sub_830E6CA4"))) PPC_WEAK_FUNC(sub_830E6CA4);
PPC_FUNC_IMPL(__imp__sub_830E6CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E6CA8"))) PPC_WEAK_FUNC(sub_830E6CA8);
PPC_FUNC_IMPL(__imp__sub_830E6CA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830E6CB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,6132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// addi r31,r3,560
	ctx.r31.s64 = ctx.r3.s64 + 560;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e6df0
	if (cr6.eq) goto loc_830E6DF0;
	// li r4,160
	ctx.r4.s64 = 160;
	// bl 0x82a26900
	ctx.lr = 0x830E6CDC;
	sub_82A26900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e6df0
	if (cr6.eq) goto loc_830E6DF0;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// lbz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// subfic r10,r30,0
	xer.ca = ctx.r30.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r30.s64;
	// ori r8,r11,65535
	ctx.r8.u64 = ctx.r11.u64 | 65535;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r3,30
	ctx.r3.s64 = 30;
	// li r9,0
	ctx.r9.s64 = 0;
	// and r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830e6df4
	if (cr6.eq) goto loc_830E6DF4;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r7,r31,16
	ctx.r7.s64 = ctx.r31.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,-30424(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30424);
	// rlwinm r31,r4,14,18,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x3FFF;
loc_830E6D28:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x830e6d3c
	if (cr6.lt) goto loc_830E6D3C;
	// addi r10,r7,720
	ctx.r10.s64 = ctx.r7.s64 + 720;
	// b 0x830e6d4c
	goto loc_830E6D4C;
loc_830E6D3C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_830E6D4C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r28,r11,14,18,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, xer);
	// bne cr6,0x830e6d70
	if (!cr6.eq) goto loc_830E6D70;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830e6d74
	if (cr6.eq) goto loc_830E6D74;
loc_830E6D70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E6D74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e6dd4
	if (!cr6.eq) goto loc_830E6DD4;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e6d94
	if (cr6.eq) goto loc_830E6D94;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x830e6d98
	goto loc_830E6D98;
loc_830E6D94:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_830E6D98:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830e6dac
	if (cr6.eq) goto loc_830E6DAC;
	// subfc r10,r8,r11
	xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r8.s64;
	// eqv r28,r8,r11
	ctx.r28.u64 = ~(ctx.r8.u64 ^ ctx.r11.u64);
	// b 0x830e6db4
	goto loc_830E6DB4;
loc_830E6DAC:
	// subfc r10,r11,r8
	xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r8.s64 - ctx.r11.s64;
	// eqv r28,r11,r8
	ctx.r28.u64 = ~(ctx.r11.u64 ^ ctx.r8.u64);
loc_830E6DB4:
	// rlwinm r10,r28,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830e6dd4
	if (cr6.eq) goto loc_830E6DD4;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_830E6DD4:
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// blt cr6,0x830e6d28
	if (cr6.lt) goto loc_830E6D28;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830E6DF0:
	// li r3,30
	ctx.r3.s64 = 30;
loc_830E6DF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E6DFC"))) PPC_WEAK_FUNC(sub_830E6DFC);
PPC_FUNC_IMPL(__imp__sub_830E6DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E6E00"))) PPC_WEAK_FUNC(sub_830E6E00);
PPC_FUNC_IMPL(__imp__sub_830E6E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x830E6E08;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r21,132(r10)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r16,6132(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// beq cr6,0x830e6f8c
	if (cr6.eq) goto loc_830E6F8C;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x830e6f8c
	if (cr6.eq) goto loc_830E6F8C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e6f8c
	if (cr6.eq) goto loc_830E6F8C;
	// lwz r11,4456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x830e6e70
	if (!cr6.eq) goto loc_830E6E70;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830E6E58;
	sub_82A225D0(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r11,8025
	ctx.r10.u64 = ctx.r11.u64 | 8025;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830e6e74
	if (!cr6.eq) goto loc_830E6E74;
loc_830E6E70:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_830E6E74:
	// clrlwi r19,r11,24
	ctx.r19.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// addi r22,r28,8
	ctx.r22.s64 = ctx.r28.s64 + 8;
	// ori r18,r11,8036
	ctx.r18.u64 = ctx.r11.u64 | 8036;
	// ori r20,r10,36400
	ctx.r20.u64 = ctx.r10.u64 | 36400;
	// lis r17,-31772
	ctx.r17.s64 = -2082209792;
loc_830E6EA0:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a26a18
	ctx.lr = 0x830E6EB0;
	sub_82A26A18(ctx, base);
	// lwz r11,-30424(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -30424);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x830e6edc
	if (!cr6.eq) goto loc_830E6EDC;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830e6ee0
	if (cr6.eq) goto loc_830E6EE0;
loc_830E6EDC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_830E6EE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e6f8c
	if (!cr6.eq) goto loc_830E6F8C;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// clrlwi r29,r19,24
	ctx.r29.u64 = ctx.r19.u32 & 0xFF;
loc_830E6EF8:
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r23.u32);
	// bne cr6,0x830e6f28
	if (!cr6.eq) goto loc_830E6F28;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830E6F14;
	sub_82A225D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r25,r3
	ctx.r3.u64 = ctx.r25.u64 + ctx.r3.u64;
	// bl 0x82919698
	ctx.lr = 0x830E6F20;
	sub_82919698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stwx r11,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r11.u32);
loc_830E6F28:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,5
	cr6.compare<int32_t>(ctx.r31.s32, 5, xer);
	// blt cr6,0x830e6ef8
	if (cr6.lt) goto loc_830E6EF8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830e6f64
	if (cr6.eq) goto loc_830E6F64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830E6F44;
	sub_82A225D0(ctx, base);
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// bge cr6,0x830e6f58
	if (!cr6.lt) goto loc_830E6F58;
	// add r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 + ctx.r26.u64;
	// lbzx r11,r11,r18
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r18.u32);
	// b 0x830e6f5c
	goto loc_830E6F5C;
loc_830E6F58:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_830E6F5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_830E6F64:
	// addi r27,r27,5
	ctx.r27.s64 = ctx.r27.s64 + 5;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// add r25,r25,r20
	ctx.r25.u64 = ctx.r25.u64 + ctx.r20.u64;
	// addi r22,r22,20
	ctx.r22.s64 = ctx.r22.s64 + 20;
	// cmpwi cr6,r27,12
	cr6.compare<int32_t>(ctx.r27.s32, 12, xer);
	// blt cr6,0x830e6ea0
	if (cr6.lt) goto loc_830E6EA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_830E6F8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E6F98"))) PPC_WEAK_FUNC(sub_830E6F98);
PPC_FUNC_IMPL(__imp__sub_830E6F98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830E6FA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,6132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e7048
	if (cr6.eq) goto loc_830E7048;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x830e7048
	if (!cr6.lt) goto loc_830E7048;
	// mulli r10,r4,8248
	ctx.r10.s64 = ctx.r4.s64 * 8248;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 65536;
	// addic. r29,r29,-16600
	xer.ca = ctx.r29.u32 > 16599;
	ctx.r29.s64 = ctx.r29.s64 + -16600;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x830e7048
	if (cr0.eq) goto loc_830E7048;
	// lwz r11,7484(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7484);
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830e7048
	if (cr6.eq) goto loc_830E7048;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,6976
	ctx.r30.s64 = ctx.r29.s64 + 6976;
loc_830E6FF4:
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// blt cr6,0x830e7004
	if (cr6.lt) goto loc_830E7004;
	// addi r4,r29,7424
	ctx.r4.s64 = ctx.r29.s64 + 7424;
loc_830E7004:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x830E7010;
	sub_831CE980(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a4d888
	ctx.lr = 0x830E7018;
	sub_82A4D888(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x830e7024
	if (!cr6.eq) goto loc_830E7024;
	// li r28,1
	ctx.r28.s64 = 1;
loc_830E7024:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x830E702C;
	sub_83102DB0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// blt cr6,0x830e6ff4
	if (cr6.lt) goto loc_830E6FF4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830E7048:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7054"))) PPC_WEAK_FUNC(sub_830E7054);
PPC_FUNC_IMPL(__imp__sub_830E7054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7058"))) PPC_WEAK_FUNC(sub_830E7058);
PPC_FUNC_IMPL(__imp__sub_830E7058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r10,48716
	ctx.r9.u64 = ctx.r10.u64 | 48716;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r8,6132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bne cr6,0x830e708c
	if (!cr6.eq) goto loc_830E708C;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830E708C:
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bne cr6,0x830e70a4
	if (!cr6.eq) goto loc_830E70A4;
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830E70A4:
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bne cr6,0x830e70bc
	if (!cr6.eq) goto loc_830E70BC;
	// addi r11,r11,-18
	ctx.r11.s64 = ctx.r11.s64 + -18;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830E70BC:
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bne cr6,0x830e70d4
	if (!cr6.eq) goto loc_830E70D4;
	// addi r11,r11,-19
	ctx.r11.s64 = ctx.r11.s64 + -19;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830E70D4:
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// bne cr6,0x830e70ec
	if (!cr6.eq) goto loc_830E70EC;
	// addi r11,r11,-23
	ctx.r11.s64 = ctx.r11.s64 + -23;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830E70EC:
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// bne cr6,0x830e7104
	if (!cr6.eq) goto loc_830E7104;
	// addi r11,r11,-34
	ctx.r11.s64 = ctx.r11.s64 + -34;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830E7104:
	// cmplwi cr6,r4,7
	cr6.compare<uint32_t>(ctx.r4.u32, 7, xer);
	// bne cr6,0x830e711c
	if (!cr6.eq) goto loc_830E711C;
	// addi r11,r11,-35
	ctx.r11.s64 = ctx.r11.s64 + -35;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830E711C:
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// bne cr6,0x830e7134
	if (!cr6.eq) goto loc_830E7134;
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830E7134:
	// cmplwi cr6,r4,9
	cr6.compare<uint32_t>(ctx.r4.u32, 9, xer);
	// bne cr6,0x830e7164
	if (!cr6.eq) goto loc_830E7164;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// beq cr6,0x830e7158
	if (cr6.eq) goto loc_830E7158;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// beq cr6,0x830e7158
	if (cr6.eq) goto loc_830E7158;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830e715c
	if (!cr6.eq) goto loc_830E715C;
loc_830E7158:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830E715C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_830E7164:
	// cmplwi cr6,r4,10
	cr6.compare<uint32_t>(ctx.r4.u32, 10, xer);
	// bne cr6,0x830e717c
	if (!cr6.eq) goto loc_830E717C;
	// addi r11,r11,-46
	ctx.r11.s64 = ctx.r11.s64 + -46;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830E717C:
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// bne cr6,0x830e71ac
	if (!cr6.eq) goto loc_830E71AC;
	// cmplwi cr6,r11,49
	cr6.compare<uint32_t>(ctx.r11.u32, 49, xer);
	// beq cr6,0x830e71a0
	if (cr6.eq) goto loc_830E71A0;
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(ctx.r11.u32, 50, xer);
	// beq cr6,0x830e71a0
	if (cr6.eq) goto loc_830E71A0;
	// cmplwi cr6,r11,51
	cr6.compare<uint32_t>(ctx.r11.u32, 51, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830e71a4
	if (!cr6.eq) goto loc_830E71A4;
loc_830E71A0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830E71A4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_830E71AC:
	// cmplwi cr6,r4,12
	cr6.compare<uint32_t>(ctx.r4.u32, 12, xer);
	// bne cr6,0x830e71c4
	if (!cr6.eq) goto loc_830E71C4;
	// addi r11,r11,-49
	ctx.r11.s64 = ctx.r11.s64 + -49;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830E71C4:
	// cmplwi cr6,r4,13
	cr6.compare<uint32_t>(ctx.r4.u32, 13, xer);
	// bne cr6,0x830e71dc
	if (!cr6.eq) goto loc_830E71DC;
	// addi r11,r11,-50
	ctx.r11.s64 = ctx.r11.s64 + -50;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830E71DC:
	// cmplwi cr6,r4,14
	cr6.compare<uint32_t>(ctx.r4.u32, 14, xer);
	// bne cr6,0x830e71f4
	if (!cr6.eq) goto loc_830E71F4;
	// addi r11,r11,-51
	ctx.r11.s64 = ctx.r11.s64 + -51;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830E71F4:
	// cmplwi cr6,r4,15
	cr6.compare<uint32_t>(ctx.r4.u32, 15, xer);
	// bne cr6,0x830e720c
	if (!cr6.eq) goto loc_830E720C;
	// addi r11,r11,-59
	ctx.r11.s64 = ctx.r11.s64 + -59;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830E720C:
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// bne cr6,0x830e7224
	if (!cr6.eq) goto loc_830E7224;
	// addi r11,r11,-60
	ctx.r11.s64 = ctx.r11.s64 + -60;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830E7224:
	// cmplwi cr6,r4,17
	cr6.compare<uint32_t>(ctx.r4.u32, 17, xer);
	// bne cr6,0x830e723c
	if (!cr6.eq) goto loc_830E723C;
	// addi r11,r11,-62
	ctx.r11.s64 = ctx.r11.s64 + -62;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830E723C:
	// cmplwi cr6,r4,18
	cr6.compare<uint32_t>(ctx.r4.u32, 18, xer);
	// bne cr6,0x830e726c
	if (!cr6.eq) goto loc_830E726C;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// beq cr6,0x830e7260
	if (cr6.eq) goto loc_830E7260;
	// cmplwi cr6,r11,69
	cr6.compare<uint32_t>(ctx.r11.u32, 69, xer);
	// beq cr6,0x830e7260
	if (cr6.eq) goto loc_830E7260;
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830e7264
	if (!cr6.eq) goto loc_830E7264;
loc_830E7260:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830E7264:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_830E726C:
	// cmplwi cr6,r4,19
	cr6.compare<uint32_t>(ctx.r4.u32, 19, xer);
	// bne cr6,0x830e7284
	if (!cr6.eq) goto loc_830E7284;
	// addi r11,r11,-71
	ctx.r11.s64 = ctx.r11.s64 + -71;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830E7284:
	// cmplwi cr6,r4,20
	cr6.compare<uint32_t>(ctx.r4.u32, 20, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r11,r11,-86
	ctx.r11.s64 = ctx.r11.s64 + -86;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E729C"))) PPC_WEAK_FUNC(sub_830E729C);
PPC_FUNC_IMPL(__imp__sub_830E729C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E72A0"))) PPC_WEAK_FUNC(sub_830E72A0);
PPC_FUNC_IMPL(__imp__sub_830E72A0) {
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
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,6132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e72f4
	if (cr6.eq) goto loc_830E72F4;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bge cr6,0x830e72f4
	if (!cr6.lt) goto loc_830E72F4;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x830e72dc
	if (cr6.eq) goto loc_830E72DC;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x830e72f4
	if (!cr6.eq) goto loc_830E72F4;
loc_830E72DC:
	// bl 0x82a26828
	ctx.lr = 0x830E72E0;
	sub_82A26828(ctx, base);
	// bl 0x83742270
	ctx.lr = 0x830E72E4;
	sub_83742270(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e72f8
	if (!cr6.eq) goto loc_830E72F8;
loc_830E72F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E72F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7308"))) PPC_WEAK_FUNC(sub_830E7308);
PPC_FUNC_IMPL(__imp__sub_830E7308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830E7310;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,10
	cr6.compare<uint32_t>(ctx.r4.u32, 10, xer);
	// blt cr6,0x830e7330
	if (cr6.lt) goto loc_830E7330;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830E7330:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(ctx.r31.u32, 7, xer);
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bne cr6,0x830e741c
	if (!cr6.eq) goto loc_830E741C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,6132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// bl 0x830d9750
	ctx.lr = 0x830E739C;
	sub_830D9750(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830e73c0
	if (cr6.eq) goto loc_830E73C0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830E73C0:
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a26868
	ctx.lr = 0x830E73CC;
	sub_82A26868(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e741c
	if (cr6.eq) goto loc_830E741C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a26828
	ctx.lr = 0x830E73E0;
	sub_82A26828(ctx, base);
	// bl 0x83741ee8
	ctx.lr = 0x830E73E4;
	sub_83741EE8(ctx, base);
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bne cr6,0x830e7404
	if (!cr6.eq) goto loc_830E7404;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e72a0
	ctx.lr = 0x830E73F4;
	sub_830E72A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x830e7408
	if (cr6.eq) goto loc_830E7408;
loc_830E7404:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830E7408:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_830E741C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7430"))) PPC_WEAK_FUNC(sub_830E7430);
PPC_FUNC_IMPL(__imp__sub_830E7430) {
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
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x830e75cc
	if (!cr6.lt) goto loc_830E75CC;
	// cmplwi cr6,r5,14
	cr6.compare<uint32_t>(ctx.r5.u32, 14, xer);
	// bge cr6,0x830e75cc
	if (!cr6.lt) goto loc_830E75CC;
	// cmplwi cr6,r6,8
	cr6.compare<uint32_t>(ctx.r6.u32, 8, xer);
	// bge cr6,0x830e75cc
	if (!cr6.lt) goto loc_830E75CC;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mulli r10,r4,8248
	ctx.r10.s64 = ctx.r4.s64 * 8248;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,6132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addic. r11,r11,-16600
	xer.ca = ctx.r11.u32 > 16599;
	ctx.r11.s64 = ctx.r11.s64 + -16600;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x830e75cc
	if (cr0.eq) goto loc_830E75CC;
	// mulli r10,r6,56
	ctx.r10.s64 = ctx.r6.s64 * 56;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,6976
	ctx.r31.s64 = ctx.r11.s64 + 6976;
	// cmplwi cr6,r5,7
	cr6.compare<uint32_t>(ctx.r5.u32, 7, xer);
	// bne cr6,0x830e74a4
	if (!cr6.eq) goto loc_830E74A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4d8a0
	ctx.lr = 0x830E749C;
	sub_82A4D8A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x830e75d0
	goto loc_830E75D0;
loc_830E74A4:
	// cmplwi cr6,r5,8
	cr6.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// bne cr6,0x830e74e8
	if (!cr6.eq) goto loc_830E74E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4d8a0
	ctx.lr = 0x830E74B4;
	sub_82A4D8A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e74d8
	if (cr6.eq) goto loc_830E74D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4d940
	ctx.lr = 0x830E74C8;
	sub_82A4D940(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x830e74dc
	if (!cr6.eq) goto loc_830E74DC;
loc_830E74D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E74DC:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x830e75d0
	goto loc_830E75D0;
loc_830E74E8:
	// cmplwi cr6,r5,9
	cr6.compare<uint32_t>(ctx.r5.u32, 9, xer);
	// bne cr6,0x830e752c
	if (!cr6.eq) goto loc_830E752C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4d8a0
	ctx.lr = 0x830E74F8;
	sub_82A4D8A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e751c
	if (cr6.eq) goto loc_830E751C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4d9a0
	ctx.lr = 0x830E750C;
	sub_82A4D9A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x830e7520
	if (!cr6.eq) goto loc_830E7520;
loc_830E751C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E7520:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x830e75d0
	goto loc_830E75D0;
loc_830E752C:
	// cmplwi cr6,r5,10
	cr6.compare<uint32_t>(ctx.r5.u32, 10, xer);
	// bne cr6,0x830e7578
	if (!cr6.eq) goto loc_830E7578;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4d888
	ctx.lr = 0x830E753C;
	sub_82A4D888(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x830e75a4
	if (!cr6.eq) goto loc_830E75A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4d940
	ctx.lr = 0x830E754C;
	sub_82A4D940(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e75a4
	if (!cr6.eq) goto loc_830E75A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4d9a0
	ctx.lr = 0x830E7560;
	sub_82A4D9A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e75a4
	if (!cr6.eq) goto loc_830E75A4;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x830e75d0
	goto loc_830E75D0;
loc_830E7578:
	// cmplwi cr6,r5,11
	cr6.compare<uint32_t>(ctx.r5.u32, 11, xer);
	// beq cr6,0x830e75ac
	if (cr6.eq) goto loc_830E75AC;
	// cmplwi cr6,r5,12
	cr6.compare<uint32_t>(ctx.r5.u32, 12, xer);
	// beq cr6,0x830e75bc
	if (cr6.eq) goto loc_830E75BC;
	// cmplwi cr6,r5,13
	cr6.compare<uint32_t>(ctx.r5.u32, 13, xer);
	// bne cr6,0x830e75a4
	if (!cr6.eq) goto loc_830E75A4;
	// cmplwi cr6,r5,13
	cr6.compare<uint32_t>(ctx.r5.u32, 13, xer);
	// bne cr6,0x830e75a4
	if (!cr6.eq) goto loc_830E75A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4d9d0
	ctx.lr = 0x830E75A0;
	sub_82A4D9D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830E75A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x830e75d0
	goto loc_830E75D0;
loc_830E75AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4d8f0
	ctx.lr = 0x830E75B4;
	sub_82A4D8F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x830e75d0
	goto loc_830E75D0;
loc_830E75BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4d970
	ctx.lr = 0x830E75C4;
	sub_82A4D970(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x830e75d0
	goto loc_830E75D0;
loc_830E75CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E75D0:
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

__attribute__((alias("__imp__sub_830E75E8"))) PPC_WEAK_FUNC(sub_830E75E8);
PPC_FUNC_IMPL(__imp__sub_830E75E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830E75F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-3564(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3564);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r3,159
	ctx.r3.s64 = 159;
	// lwz r31,6132(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// beq cr6,0x830e7654
	if (cr6.eq) goto loc_830E7654;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830e766c
	if (!cr6.lt) goto loc_830E766C;
	// mulli r11,r11,8248
	ctx.r11.s64 = ctx.r11.s64 * 8248;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-8604
	ctx.r10.s64 = ctx.r10.s64 + -8604;
	// lwz r9,132(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r3,120(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r8,140(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830E7654:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26828
	ctx.lr = 0x830E765C;
	sub_82A26828(ctx, base);
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,24356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24356);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_830E766C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7674"))) PPC_WEAK_FUNC(sub_830E7674);
PPC_FUNC_IMPL(__imp__sub_830E7674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7678"))) PPC_WEAK_FUNC(sub_830E7678);
PPC_FUNC_IMPL(__imp__sub_830E7678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830E7680;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x830e75e8
	ctx.lr = 0x830E76A4;
	sub_830E75E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830e6430
	ctx.lr = 0x830E76B0;
	sub_830E6430(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, xer);
	// beq cr6,0x830e76cc
	if (cr6.eq) goto loc_830E76CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83741af0
	ctx.lr = 0x830E76C4;
	sub_83741AF0(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// bne cr6,0x830e76d0
	if (!cr6.eq) goto loc_830E76D0;
loc_830E76CC:
	// li r29,1
	ctx.r29.s64 = 1;
loc_830E76D0:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x830e7708
	if (!cr6.eq) goto loc_830E7708;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x830e7708
	if (!cr6.eq) goto loc_830E7708;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r29
	ctx.r3.u64 = ctx.r6.u64 & ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830E7708:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7714"))) PPC_WEAK_FUNC(sub_830E7714);
PPC_FUNC_IMPL(__imp__sub_830E7714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7718"))) PPC_WEAK_FUNC(sub_830E7718);
PPC_FUNC_IMPL(__imp__sub_830E7718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830E7720;
	__savegprlr_29(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// clrlwi r31,r6,24
	ctx.r31.u64 = ctx.r6.u32 & 0xFF;
	// lwz r3,36(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// lhz r30,32(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r5,r4,14,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x3FFF;
	// li r9,23472
	ctx.r9.s64 = 23472;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r6,6132(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r7,r11,47264
	ctx.r7.u64 = ctx.r11.u64 | 47264;
loc_830E7750:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r11,r6,560
	ctx.r11.s64 = ctx.r6.s64 + 560;
	// beq cr6,0x830e7770
	if (cr6.eq) goto loc_830E7770;
	// cmpwi cr6,r8,10
	cr6.compare<int32_t>(ctx.r8.s32, 10, xer);
	// bge cr6,0x830e7780
	if (!cr6.lt) goto loc_830E7780;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// b 0x830e7784
	goto loc_830E7784;
loc_830E7770:
	// cmpwi cr6,r8,10
	cr6.compare<int32_t>(ctx.r8.s32, 10, xer);
	// bge cr6,0x830e7780
	if (!cr6.lt) goto loc_830E7780;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x830e7784
	goto loc_830E7784;
loc_830E7780:
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_830E7784:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r29,r10,14,18,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r29,r5
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, xer);
	// bne cr6,0x830e77a8
	if (!cr6.eq) goto loc_830E77A8;
	// xor r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// clrlwi r10,r10,14
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x830e77ac
	if (cr6.eq) goto loc_830E77AC;
loc_830E77A8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830E77AC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830e7804
	if (cr6.eq) goto loc_830E7804;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830e77d0
	if (!cr6.eq) goto loc_830E77D0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x830e77f8
	goto loc_830E77F8;
loc_830E77D0:
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r29,r30,16
	ctx.r29.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bne cr6,0x830e77f0
	if (!cr6.eq) goto loc_830E77F0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x830e77f4
	if (cr6.eq) goto loc_830E77F4;
loc_830E77F0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830E77F4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_830E77F8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830e7824
	if (!cr6.eq) goto loc_830E7824;
loc_830E7804:
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r9,23632
	cr6.compare<uint32_t>(ctx.r9.u32, 23632, xer);
	// blt cr6,0x830e7750
	if (cr6.lt) goto loc_830E7750;
	// addis r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 65536;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r3,r3,-17712
	ctx.r3.s64 = ctx.r3.s64 + -17712;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830E7824:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E782C"))) PPC_WEAK_FUNC(sub_830E782C);
PPC_FUNC_IMPL(__imp__sub_830E782C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7830"))) PPC_WEAK_FUNC(sub_830E7830);
PPC_FUNC_IMPL(__imp__sub_830E7830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r6,r5,24
	ctx.r6.u64 = ctx.r5.u32 & 0xFF;
	// li r10,23472
	ctx.r10.s64 = 23472;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r7,6132(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r8,r11,47264
	ctx.r8.u64 = ctx.r11.u64 | 47264;
loc_830E7850:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r11,r7,560
	ctx.r11.s64 = ctx.r7.s64 + 560;
	// beq cr6,0x830e7870
	if (cr6.eq) goto loc_830E7870;
	// cmpwi cr6,r9,10
	cr6.compare<int32_t>(ctx.r9.s32, 10, xer);
	// bge cr6,0x830e7880
	if (!cr6.lt) goto loc_830E7880;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// b 0x830e7884
	goto loc_830E7884;
loc_830E7870:
	// cmpwi cr6,r9,10
	cr6.compare<int32_t>(ctx.r9.s32, 10, xer);
	// bge cr6,0x830e7880
	if (!cr6.lt) goto loc_830E7880;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x830e7884
	goto loc_830E7884;
loc_830E7880:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_830E7884:
	// lbz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x830e78b0
	if (cr6.eq) goto loc_830E78B0;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,23632
	cr6.compare<uint32_t>(ctx.r10.u32, 23632, xer);
	// blt cr6,0x830e7850
	if (cr6.lt) goto loc_830E7850;
	// addis r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 65536;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r3,r3,-17712
	ctx.r3.s64 = ctx.r3.s64 + -17712;
	// blr 
	return;
loc_830E78B0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E78B8"))) PPC_WEAK_FUNC(sub_830E78B8);
PPC_FUNC_IMPL(__imp__sub_830E78B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830E78C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fctidz f11,f0
	ctx.f11.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// fctiwz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fctiwz f9,f12
	ctx.f9.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// lwz r26,28(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,6132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// bl 0x82a26a18
	ctx.lr = 0x830E791C;
	sub_82A26A18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830d7500
	ctx.lr = 0x830E7928;
	sub_830D7500(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x830e79bc
	if (!cr6.eq) goto loc_830E79BC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e7718
	ctx.lr = 0x830E7948;
	sub_830E7718(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r11,r11,-30472
	ctx.r11.s64 = ctx.r11.s64 + -30472;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830e796c
	if (!cr6.eq) goto loc_830E796C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x830e7994
	goto loc_830E7994;
loc_830E796C:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x830e798c
	if (!cr6.eq) goto loc_830E798C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830e7990
	if (cr6.eq) goto loc_830E7990;
loc_830E798C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E7990:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830E7994:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e7abc
	if (!cr6.eq) goto loc_830E7ABC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lbz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x827b4418
	ctx.lr = 0x830E79B0;
	sub_827B4418(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830E79BC:
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// bne cr6,0x830e79fc
	if (!cr6.eq) goto loc_830E79FC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e7830
	ctx.lr = 0x830E79D4;
	sub_830E7830(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r11,-30472
	ctx.r4.s64 = ctx.r11.s64 + -30472;
	// bl 0x825a2298
	ctx.lr = 0x830E79E8;
	sub_825A2298(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830e7abc
	if (cr6.eq) goto loc_830E7ABC;
	// lbz r3,13(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// b 0x830e7aac
	goto loc_830E7AAC;
loc_830E79FC:
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// bne cr6,0x830e7abc
	if (!cr6.eq) goto loc_830E7ABC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e7718
	ctx.lr = 0x830E7A18;
	sub_830E7718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e7830
	ctx.lr = 0x830E7A2C;
	sub_830E7830(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d9520
	ctx.lr = 0x830E7A38;
	sub_830D9520(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830e7abc
	if (cr6.eq) goto loc_830E7ABC;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// addi r28,r11,-30472
	ctx.r28.s64 = ctx.r11.s64 + -30472;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x825a2298
	ctx.lr = 0x830E7A58;
	sub_825A2298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e7abc
	if (cr6.eq) goto loc_830E7ABC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// bl 0x825a2298
	ctx.lr = 0x830E7A70;
	sub_825A2298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e7abc
	if (cr6.eq) goto loc_830E7ABC;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lbz r30,13(r29)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + 13);
	// li r5,5
	ctx.r5.s64 = 5;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bne cr6,0x830e7a9c
	if (!cr6.eq) goto loc_830E7A9C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_830E7A9C:
	// bl 0x8291a868
	ctx.lr = 0x830E7AA0;
	sub_8291A868(ctx, base);
	// lbz r10,13(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 13);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_830E7AAC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x827b4418
	ctx.lr = 0x830E7AB8;
	sub_827B4418(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_830E7ABC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7AC8"))) PPC_WEAK_FUNC(sub_830E7AC8);
PPC_FUNC_IMPL(__imp__sub_830E7AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830E7AD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r30,r4,24
	ctx.r30.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r30,51
	cr6.compare<uint32_t>(ctx.r30.u32, 51, xer);
	// bge cr6,0x830e7aec
	if (!cr6.lt) goto loc_830E7AEC;
loc_830E7AE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830E7AEC:
	// li r11,57
	ctx.r11.s64 = 57;
	// li r10,64
	ctx.r10.s64 = 64;
	// subfc r9,r11,r30
	xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfc r6,r10,r30
	xer.ca = ctx.r30.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r30.s64 - ctx.r10.s64;
	// clrlwi r31,r7,31
	ctx.r31.u64 = ctx.r7.u32 & 0x1;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// bne cr6,0x830e7b20
	if (!cr6.eq) goto loc_830E7B20;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e7ae0
	if (cr6.eq) goto loc_830E7AE0;
loc_830E7B20:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r29,292(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x830e1e68
	ctx.lr = 0x830E7B30;
	sub_830E1E68(ctx, base);
	// lfs f1,4464(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a29110
	ctx.lr = 0x830E7B3C;
	sub_82A29110(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r10,r30,-51
	ctx.r10.s64 = ctx.r30.s64 + -51;
	// bne cr6,0x830e7b4c
	if (!cr6.eq) goto loc_830E7B4C;
	// addi r10,r30,-58
	ctx.r10.s64 = ctx.r30.s64 + -58;
loc_830E7B4C:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,90
	cr6.compare<uint32_t>(ctx.r9.u32, 90, xer);
	// blt cr6,0x830e7b84
	if (cr6.lt) goto loc_830E7B84;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// beq cr6,0x830e7b70
	if (cr6.eq) goto loc_830E7B70;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// bne cr6,0x830e7b74
	if (!cr6.eq) goto loc_830E7B74;
loc_830E7B70:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830E7B74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830E7B84:
	// cmplwi cr6,r9,45
	cr6.compare<uint32_t>(ctx.r9.u32, 45, xer);
	// blt cr6,0x830e7bc4
	if (cr6.lt) goto loc_830E7BC4;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x830e7bec
	if (!cr6.eq) goto loc_830E7BEC;
	// addi r11,r3,45
	ctx.r11.s64 = ctx.r3.s64 + 45;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, xer);
	// blt cr6,0x830e7ba4
	if (cr6.lt) goto loc_830E7BA4;
	// li r11,89
	ctx.r11.s64 = 89;
loc_830E7BA4:
	// li r9,15
	ctx.r9.s64 = 15;
	// divwu r8,r11,r9
	ctx.r8.u32 = PPCDivide(ctx.r11.u32, ctx.r9.u32);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830E7BC4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x830e7bec
	if (!cr6.eq) goto loc_830E7BEC;
	// cmplwi cr6,r3,45
	cr6.compare<uint32_t>(ctx.r3.u32, 45, xer);
	// blt cr6,0x830e7bd8
	if (cr6.lt) goto loc_830E7BD8;
	// li r3,44
	ctx.r3.s64 = 44;
loc_830E7BD8:
	// li r11,15
	ctx.r11.s64 = 15;
	// divwu r9,r3,r11
	ctx.r9.u32 = PPCDivide(ctx.r3.u32, ctx.r11.u32);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_830E7BEC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7BF8"))) PPC_WEAK_FUNC(sub_830E7BF8);
PPC_FUNC_IMPL(__imp__sub_830E7BF8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,6132(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x830e7c7c
	if (cr6.gt) goto loc_830E7C7C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,48708
	ctx.r10.u64 = ctx.r11.u64 | 48708;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830e7c7c
	if (cr6.eq) goto loc_830E7C7C;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26898
	ctx.lr = 0x830E7C40;
	sub_82A26898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e7c64
	if (!cr6.eq) goto loc_830E7C64;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26868
	ctx.lr = 0x830E7C58;
	sub_82A26868(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e7c7c
	if (cr6.eq) goto loc_830E7C7C;
loc_830E7C64:
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
loc_830E7C7C:
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

__attribute__((alias("__imp__sub_830E7C94"))) PPC_WEAK_FUNC(sub_830E7C94);
PPC_FUNC_IMPL(__imp__sub_830E7C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7C98"))) PPC_WEAK_FUNC(sub_830E7C98);
PPC_FUNC_IMPL(__imp__sub_830E7C98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// blt cr6,0x830e7cac
	if (cr6.lt) goto loc_830E7CAC;
loc_830E7CA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830E7CAC:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,6132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bge cr6,0x830e7ca4
	if (!cr6.lt) goto loc_830E7CA4;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x830e7cd4
	if (cr6.eq) goto loc_830E7CD4;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x830e7ca4
	if (!cr6.eq) goto loc_830E7CA4;
loc_830E7CD4:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e7d04
	if (cr6.eq) goto loc_830E7D04;
	// mulli r11,r9,8248
	ctx.r11.s64 = ctx.r9.s64 * 8248;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-16600
	ctx.r10.s64 = ctx.r10.s64 + -16600;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x830e7ca4
	if (!cr6.lt) goto loc_830E7CA4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x830e7ca4
	if (!cr6.eq) goto loc_830E7CA4;
loc_830E7D04:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7D0C"))) PPC_WEAK_FUNC(sub_830E7D0C);
PPC_FUNC_IMPL(__imp__sub_830E7D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7D10"))) PPC_WEAK_FUNC(sub_830E7D10);
PPC_FUNC_IMPL(__imp__sub_830E7D10) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x830e7c98
	ctx.lr = 0x830E7D34;
	sub_830E7C98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e7d8c
	if (cr6.eq) goto loc_830E7D8C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,6132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// lbz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bgt cr6,0x830e7d8c
	if (cr6.gt) goto loc_830E7D8C;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e7d74
	if (cr6.eq) goto loc_830E7D74;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x830d7068
	ctx.lr = 0x830E7D6C;
	sub_830D7068(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// bne cr6,0x830e7d8c
	if (!cr6.eq) goto loc_830E7D8C;
loc_830E7D74:
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
loc_830E7D8C:
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

__attribute__((alias("__imp__sub_830E7DA4"))) PPC_WEAK_FUNC(sub_830E7DA4);
PPC_FUNC_IMPL(__imp__sub_830E7DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7DA8"))) PPC_WEAK_FUNC(sub_830E7DA8);
PPC_FUNC_IMPL(__imp__sub_830E7DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830E7DB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,6132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x830e7de4
	if (!cr6.gt) goto loc_830E7DE4;
loc_830E7DD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830E7DE4:
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a26898
	ctx.lr = 0x830E7DF0;
	sub_82A26898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e7e14
	if (!cr6.eq) goto loc_830E7E14;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a26868
	ctx.lr = 0x830E7E08;
	sub_82A26868(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e7dd8
	if (cr6.eq) goto loc_830E7DD8;
loc_830E7E14:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e7e30
	if (cr6.eq) goto loc_830E7E30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d7068
	ctx.lr = 0x830E7E28;
	sub_830D7068(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// bne cr6,0x830e7dd8
	if (!cr6.eq) goto loc_830E7DD8;
loc_830E7E30:
	// mulli r10,r31,8248
	ctx.r10.s64 = ctx.r31.s64 * 8248;
	// li r11,2
	ctx.r11.s64 = 2;
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// subfc r9,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r6,r31,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// addis r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 65536;
	// subfe r4,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r5,-16600
	ctx.r5.s64 = ctx.r5.s64 + -16600;
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x830e7dd8
	if (!cr6.lt) goto loc_830E7DD8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x830e7dd8
	if (!cr6.eq) goto loc_830E7DD8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7E78"))) PPC_WEAK_FUNC(sub_830E7E78);
PPC_FUNC_IMPL(__imp__sub_830E7E78) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,6132(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bge cr6,0x830e7f6c
	if (!cr6.lt) goto loc_830E7F6C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830e7f6c
	if (!cr6.eq) goto loc_830E7F6C;
	// bl 0x830d7068
	ctx.lr = 0x830E7EAC;
	sub_830D7068(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-30472
	ctx.r11.s64 = ctx.r11.s64 + -30472;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830e7edc
	if (!cr6.eq) goto loc_830E7EDC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x830e7f04
	goto loc_830E7F04;
loc_830E7EDC:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x830e7efc
	if (!cr6.eq) goto loc_830E7EFC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830e7f00
	if (cr6.eq) goto loc_830E7F00;
loc_830E7EFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E7F00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830E7F04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e7f6c
	if (!cr6.eq) goto loc_830E7F6C;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x830e7f6c
	if (!cr6.lt) goto loc_830E7F6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// bl 0x82a26da0
	ctx.lr = 0x830E7F24;
	sub_82A26DA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8261a110
	ctx.lr = 0x830E7F2C;
	sub_8261A110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e7f50
	if (cr6.eq) goto loc_830E7F50;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830e7f54
	if (!cr6.eq) goto loc_830E7F54;
loc_830E7F50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E7F54:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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
loc_830E7F6C:
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

__attribute__((alias("__imp__sub_830E7F84"))) PPC_WEAK_FUNC(sub_830E7F84);
PPC_FUNC_IMPL(__imp__sub_830E7F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7F88"))) PPC_WEAK_FUNC(sub_830E7F88);
PPC_FUNC_IMPL(__imp__sub_830E7F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830E7F90;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// lwz r29,292(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r28,6132(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// bge cr6,0x830e8094
	if (!cr6.lt) goto loc_830E8094;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r11,r9,65535
	ctx.r11.u64 = ctx.r9.u64 | 65535;
	// oris r7,r10,65532
	ctx.r7.u64 = ctx.r10.u64 | 4294705152;
	// oris r6,r8,65532
	ctx.r6.u64 = ctx.r8.u64 | 4294705152;
	// or r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 | ctx.r11.u64;
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x830e6e00
	ctx.lr = 0x830E7FF8;
	sub_830E6E00(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830e8094
	if (cr6.eq) goto loc_830E8094;
	// mulli r11,r31,8248
	ctx.r11.s64 = ctx.r31.s64 * 8248;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-16600
	ctx.r11.s64 = ctx.r11.s64 + -16600;
	// bge cr6,0x830e802c
	if (!cr6.lt) goto loc_830E802C;
	// mulli r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 * 56;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,6976
	ctx.r31.s64 = ctx.r11.s64 + 6976;
	// b 0x830e8030
	goto loc_830E8030;
loc_830E802C:
	// addi r31,r11,7424
	ctx.r31.s64 = ctx.r11.s64 + 7424;
loc_830E8030:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,4456(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4456);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82a4d888
	ctx.lr = 0x830E8040;
	sub_82A4D888(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830e8110
	if (cr6.eq) goto loc_830E8110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4d888
	ctx.lr = 0x830E8050;
	sub_82A4D888(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x830e8110
	if (cr6.eq) goto loc_830E8110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4d888
	ctx.lr = 0x830E8060;
	sub_82A4D888(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x830e8110
	if (cr6.eq) goto loc_830E8110;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e80a0
	if (!cr6.eq) goto loc_830E80A0;
	// cmpwi cr6,r29,10
	cr6.compare<int32_t>(ctx.r29.s32, 10, xer);
	// bne cr6,0x830e8088
	if (!cr6.eq) goto loc_830E8088;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e80a0
	if (!cr6.eq) goto loc_830E80A0;
loc_830E8088:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e811c
	if (!cr6.eq) goto loc_830E811C;
loc_830E8094:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830E80A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4d8a0
	ctx.lr = 0x830E80A8;
	sub_82A4D8A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e80d8
	if (cr6.eq) goto loc_830E80D8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4ef18
	ctx.lr = 0x830E80C4;
	sub_82A4EF18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e80d8
	if (cr6.eq) goto loc_830E80D8;
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x830e8128
	goto loc_830E8128;
loc_830E80D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4d8f0
	ctx.lr = 0x830E80E0;
	sub_82A4D8F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e811c
	if (cr6.eq) goto loc_830E811C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4ef50
	ctx.lr = 0x830E80FC;
	sub_82A4EF50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e811c
	if (cr6.eq) goto loc_830E811C;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x830e8128
	goto loc_830E8128;
loc_830E8110:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e8128
	if (cr6.eq) goto loc_830E8128;
loc_830E811C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4d888
	ctx.lr = 0x830E8124;
	sub_82A4D888(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
loc_830E8128:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r10,r24,24
	ctx.r10.u64 = ctx.r24.u32 & 0xFF;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8144"))) PPC_WEAK_FUNC(sub_830E8144);
PPC_FUNC_IMPL(__imp__sub_830E8144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8148"))) PPC_WEAK_FUNC(sub_830E8148);
PPC_FUNC_IMPL(__imp__sub_830E8148) {
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
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x830e81cc
	if (!cr6.lt) goto loc_830E81CC;
	// cmplwi cr6,r10,14
	cr6.compare<uint32_t>(ctx.r10.u32, 14, xer);
	// bge cr6,0x830e81cc
	if (!cr6.lt) goto loc_830E81CC;
	// cmplwi cr6,r6,8
	cr6.compare<uint32_t>(ctx.r6.u32, 8, xer);
	// bge cr6,0x830e81cc
	if (!cr6.lt) goto loc_830E81CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830e8188
	if (!cr6.eq) goto loc_830E8188;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x830e81a4
	goto loc_830E81A4;
loc_830E8188:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x830e8198
	if (!cr6.eq) goto loc_830E8198;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x830e81a4
	goto loc_830E81A4;
loc_830E8198:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x830e81b8
	if (!cr6.eq) goto loc_830E81B8;
	// li r6,3
	ctx.r6.s64 = 3;
loc_830E81A4:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x830e7f88
	ctx.lr = 0x830E81B4;
	sub_830E7F88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830E81B8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830E81CC:
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

__attribute__((alias("__imp__sub_830E81E0"))) PPC_WEAK_FUNC(sub_830E81E0);
PPC_FUNC_IMPL(__imp__sub_830E81E0) {
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
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x830e82e0
	if (!cr6.lt) goto loc_830E82E0;
	// cmplwi cr6,r10,14
	cr6.compare<uint32_t>(ctx.r10.u32, 14, xer);
	// bge cr6,0x830e82e0
	if (!cr6.lt) goto loc_830E82E0;
	// cmplwi cr6,r6,8
	cr6.compare<uint32_t>(ctx.r6.u32, 8, xer);
	// bge cr6,0x830e82e0
	if (!cr6.lt) goto loc_830E82E0;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,6132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e8234
	if (cr6.eq) goto loc_830E8234;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,48709
	ctx.r8.u64 = ctx.r9.u64 | 48709;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r11,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
loc_830E8234:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e82e0
	if (cr6.eq) goto loc_830E82E0;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// beq cr6,0x830e8254
	if (cr6.eq) goto loc_830E8254;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830e8258
	if (!cr6.eq) goto loc_830E8258;
loc_830E8254:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830E8258:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x830e8270
	if (cr6.eq) goto loc_830E8270;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830e8274
	if (!cr6.eq) goto loc_830E8274;
loc_830E8270:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830E8274:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x830e82bc
	if (cr6.eq) goto loc_830E82BC;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// beq cr6,0x830e82bc
	if (cr6.eq) goto loc_830E82BC;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// beq cr6,0x830e829c
	if (cr6.eq) goto loc_830E829C;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x830e82cc
	if (!cr6.eq) goto loc_830E82CC;
loc_830E829C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x830e7f88
	ctx.lr = 0x830E82A8;
	sub_830E7F88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830E82BC:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x830e7f88
	ctx.lr = 0x830E82C8;
	sub_830E7F88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830E82CC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830E82E0:
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

__attribute__((alias("__imp__sub_830E82F4"))) PPC_WEAK_FUNC(sub_830E82F4);
PPC_FUNC_IMPL(__imp__sub_830E82F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E82F8"))) PPC_WEAK_FUNC(sub_830E82F8);
PPC_FUNC_IMPL(__imp__sub_830E82F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830E8300;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x830e8324
	if (cr6.lt) goto loc_830E8324;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830E8324:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// bgt cr6,0x830e836c
	if (cr6.gt) goto loc_830E836C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_830E8334:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e8148
	ctx.lr = 0x830E8348;
	sub_830E8148(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e8404
	if (!cr6.eq) goto loc_830E8404;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// blt cr6,0x830e8334
	if (cr6.lt) goto loc_830E8334;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830E836C:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x830e83b8
	if (cr6.lt) goto loc_830E83B8;
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// bgt cr6,0x830e83b8
	if (cr6.gt) goto loc_830E83B8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_830E8380:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e81e0
	ctx.lr = 0x830E8394;
	sub_830E81E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e8404
	if (!cr6.eq) goto loc_830E8404;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// blt cr6,0x830e8380
	if (cr6.lt) goto loc_830E8380;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830E83B8:
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(ctx.r31.u32, 7, xer);
	// blt cr6,0x830e8408
	if (cr6.lt) goto loc_830E8408;
	// cmplwi cr6,r31,13
	cr6.compare<uint32_t>(ctx.r31.u32, 13, xer);
	// bgt cr6,0x830e8408
	if (cr6.gt) goto loc_830E8408;
	// li r30,0
	ctx.r30.s64 = 0;
loc_830E83CC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830e7430
	ctx.lr = 0x830E83E0;
	sub_830E7430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e8404
	if (!cr6.eq) goto loc_830E8404;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// blt cr6,0x830e83cc
	if (cr6.lt) goto loc_830E83CC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830E8404:
	// li r27,1
	ctx.r27.s64 = 1;
loc_830E8408:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8414"))) PPC_WEAK_FUNC(sub_830E8414);
PPC_FUNC_IMPL(__imp__sub_830E8414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8418"))) PPC_WEAK_FUNC(sub_830E8418);
PPC_FUNC_IMPL(__imp__sub_830E8418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830E8420;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x830e8444
	if (cr6.lt) goto loc_830E8444;
loc_830E8438:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830E8444:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,6132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// lbz r11,24024(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24024);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bge cr6,0x830e8438
	if (!cr6.lt) goto loc_830E8438;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x830e8438
	if (!cr6.eq) goto loc_830E8438;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// bgt cr6,0x830e84a8
	if (cr6.gt) goto loc_830E84A8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e8148
	ctx.lr = 0x830E8484;
	sub_830E8148(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e8540
	if (!cr6.eq) goto loc_830E8540;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e8148
	ctx.lr = 0x830E84A4;
	sub_830E8148(ctx, base);
	// b 0x830e8534
	goto loc_830E8534;
loc_830E84A8:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x830e84f0
	if (cr6.lt) goto loc_830E84F0;
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// bgt cr6,0x830e84f0
	if (cr6.gt) goto loc_830E84F0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e81e0
	ctx.lr = 0x830E84CC;
	sub_830E81E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e8540
	if (!cr6.eq) goto loc_830E8540;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e81e0
	ctx.lr = 0x830E84EC;
	sub_830E81E0(ctx, base);
	// b 0x830e8534
	goto loc_830E8534;
loc_830E84F0:
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(ctx.r31.u32, 7, xer);
	// blt cr6,0x830e8544
	if (cr6.lt) goto loc_830E8544;
	// cmplwi cr6,r31,13
	cr6.compare<uint32_t>(ctx.r31.u32, 13, xer);
	// bgt cr6,0x830e8544
	if (cr6.gt) goto loc_830E8544;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e7430
	ctx.lr = 0x830E8514;
	sub_830E7430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e8540
	if (!cr6.eq) goto loc_830E8540;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e7430
	ctx.lr = 0x830E8534;
	sub_830E7430(ctx, base);
loc_830E8534:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e8544
	if (cr6.eq) goto loc_830E8544;
loc_830E8540:
	// li r28,1
	ctx.r28.s64 = 1;
loc_830E8544:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8550"))) PPC_WEAK_FUNC(sub_830E8550);
PPC_FUNC_IMPL(__imp__sub_830E8550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830E8558;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x830e75e8
	ctx.lr = 0x830E857C;
	sub_830E75E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83742b00
	ctx.lr = 0x830E8584;
	sub_83742B00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e8740
	if (cr6.eq) goto loc_830E8740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83742958
	ctx.lr = 0x830E8598;
	sub_83742958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e8740
	if (!cr6.eq) goto loc_830E8740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83741ee8
	ctx.lr = 0x830E85AC;
	sub_83741EE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83742bd0
	ctx.lr = 0x830E85BC;
	sub_83742BD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83742270
	ctx.lr = 0x830E85C8;
	sub_83742270(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837429d0
	ctx.lr = 0x830E85D4;
	sub_837429D0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bne cr6,0x830e85f4
	if (!cr6.eq) goto loc_830E85F4;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E85F4:
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bne cr6,0x830e8614
	if (!cr6.eq) goto loc_830E8614;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E8614:
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// bne cr6,0x830e862c
	if (!cr6.eq) goto loc_830E862C;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E862C:
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bne cr6,0x830e8644
	if (!cr6.eq) goto loc_830E8644;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E8644:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bne cr6,0x830e867c
	if (!cr6.eq) goto loc_830E867C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e872c
	if (cr6.eq) goto loc_830E872C;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830e8730
	if (cr6.eq) goto loc_830E8730;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E867C:
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bne cr6,0x830e869c
	if (!cr6.eq) goto loc_830E869C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e872c
	if (cr6.eq) goto loc_830E872C;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// b 0x830e8724
	goto loc_830E8724;
loc_830E869C:
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bne cr6,0x830e86bc
	if (!cr6.eq) goto loc_830E86BC;
	// addi r11,r29,-8
	ctx.r11.s64 = ctx.r29.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E86BC:
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(ctx.r11.u32, 19, xer);
	// bne cr6,0x830e86f4
	if (!cr6.eq) goto loc_830E86F4;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e872c
	if (cr6.eq) goto loc_830E872C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830e8730
	if (cr6.eq) goto loc_830E8730;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E86F4:
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bne cr6,0x830e8734
	if (!cr6.eq) goto loc_830E8734;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830e872c
	if (cr6.eq) goto loc_830E872C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830e872c
	if (!cr6.eq) goto loc_830E872C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
loc_830E8724:
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x830e8730
	if (!cr6.eq) goto loc_830E8730;
loc_830E872C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_830E8730:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
loc_830E8734:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830E8740:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E874C"))) PPC_WEAK_FUNC(sub_830E874C);
PPC_FUNC_IMPL(__imp__sub_830E874C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

