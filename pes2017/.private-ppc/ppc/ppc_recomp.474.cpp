#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8392A8B8"))) PPC_WEAK_FUNC(sub_8392A8B8);
PPC_FUNC_IMPL(__imp__sub_8392A8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8392A8C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r29,r11,-25532
	ctx.r29.s64 = ctx.r11.s64 + -25532;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r29,-108
	ctx.r4.s64 = ctx.r29.s64 + -108;
	// bl 0x8259cc28
	ctx.lr = 0x8392A8F4;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8392a908
	if (!cr6.eq) goto loc_8392A908;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8392A908:
	// lis r6,54
	ctx.r6.s64 = 3538944;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// ori r6,r6,18
	ctx.r6.u64 = ctx.r6.u64 | 18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x8392A91C;
	sub_8392DBE8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392a93c
	if (cr6.lt) goto loc_8392A93C;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x8392A93C;
	sub_825952B8(ctx, base);
loc_8392A93C:
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// addi r4,r29,-92
	ctx.r4.s64 = ctx.r29.s64 + -92;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8392A964;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8392a978
	if (!cr6.eq) goto loc_8392A978;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8392A978:
	// lis r6,54
	ctx.r6.s64 = 3538944;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// ori r6,r6,17
	ctx.r6.u64 = ctx.r6.u64 | 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x8392A98C;
	sub_8392DBE8(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392a9a8
	if (cr6.lt) goto loc_8392A9A8;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x8392A9A8;
	sub_825952B8(ctx, base);
loc_8392A9A8:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// lwz r28,-13648(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13648);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r28,19
	cr6.compare<int32_t>(ctx.r28.s32, 19, xer);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x8392aa38
	if (!cr6.eq) goto loc_8392AA38;
	// addi r4,r29,-76
	ctx.r4.s64 = ctx.r29.s64 + -76;
	// bctrl 
	ctx.lr = 0x8392A9E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r29,-60
	ctx.r4.s64 = ctx.r29.s64 + -60;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x8392A9EC;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8392aa00
	if (!cr6.eq) goto loc_8392AA00;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8392AA00:
	// lis r6,54
	ctx.r6.s64 = 3538944;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// ori r6,r6,118
	ctx.r6.u64 = ctx.r6.u64 | 118;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x8392AA14;
	sub_8392DBE8(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392aaf8
	if (cr6.lt) goto loc_8392AAF8;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x8392AA30;
	sub_825952B8(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8392AA38:
	// addi r4,r29,-40
	ctx.r4.s64 = ctx.r29.s64 + -40;
	// bctrl 
	ctx.lr = 0x8392AA40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x8392AA4C;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8392aa60
	if (!cr6.eq) goto loc_8392AA60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8392AA60:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,-25240
	ctx.r10.s64 = ctx.r11.s64 + -25240;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r28,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// bl 0x8392dbe8
	ctx.lr = 0x8392AA7C;
	sub_8392DBE8(ctx, base);
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8392aa98
	if (cr6.lt) goto loc_8392AA98;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x8392AA98;
	sub_825952B8(ctx, base);
loc_8392AA98:
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// bl 0x837b0c10
	ctx.lr = 0x8392AAB0;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8392aac4
	if (!cr6.eq) goto loc_8392AAC4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8392AAC4:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r10,r11,-25328
	ctx.r10.s64 = ctx.r11.s64 + -25328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r28,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// bl 0x8392dbe8
	ctx.lr = 0x8392AADC;
	sub_8392DBE8(ctx, base);
	// lwz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8392aaf8
	if (cr6.lt) goto loc_8392AAF8;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x8392AAF8;
	sub_825952B8(ctx, base);
loc_8392AAF8:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392AB00"))) PPC_WEAK_FUNC(sub_8392AB00);
PPC_FUNC_IMPL(__imp__sub_8392AB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,11200(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11200);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392AB0C"))) PPC_WEAK_FUNC(sub_8392AB0C);
PPC_FUNC_IMPL(__imp__sub_8392AB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392AB10"))) PPC_WEAK_FUNC(sub_8392AB10);
PPC_FUNC_IMPL(__imp__sub_8392AB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,180
	ctx.r11.s64 = ctx.r11.s64 + 180;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
loc_8392AB34:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8392ab34
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8392AB34;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392AB44"))) PPC_WEAK_FUNC(sub_8392AB44);
PPC_FUNC_IMPL(__imp__sub_8392AB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392AB48"))) PPC_WEAK_FUNC(sub_8392AB48);
PPC_FUNC_IMPL(__imp__sub_8392AB48) {
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
	// bl 0x83911640
	ctx.lr = 0x8392AB60;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8392abac
	if (cr6.eq) goto loc_8392ABAC;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x8392ab94
	if (cr6.eq) goto loc_8392AB94;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x8392ab94
	if (cr6.eq) goto loc_8392AB94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d640
	ctx.lr = 0x8392AB80;
	sub_8392D640(ctx, base);
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
loc_8392AB94:
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_8392ABAC:
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

__attribute__((alias("__imp__sub_8392ABC4"))) PPC_WEAK_FUNC(sub_8392ABC4);
PPC_FUNC_IMPL(__imp__sub_8392ABC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392ABC8"))) PPC_WEAK_FUNC(sub_8392ABC8);
PPC_FUNC_IMPL(__imp__sub_8392ABC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8392ABD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8392ABF4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392ac2c
	if (cr6.eq) goto loc_8392AC2C;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x8392AC14;
	sub_8392CFC8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-24088
	ctx.r10.s64 = ctx.r11.s64 + -24088;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392AC2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392AC38"))) PPC_WEAK_FUNC(sub_8392AC38);
PPC_FUNC_IMPL(__imp__sub_8392AC38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lbz r9,180(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 180);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8392ac58
	if (cr6.eq) goto loc_8392AC58;
	// lwz r11,184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8392ac5c
	if (cr6.eq) goto loc_8392AC5C;
loc_8392AC58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8392AC5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392ac70
	if (!cr6.eq) goto loc_8392AC70;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8392AC70:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8392ac88
	if (cr6.eq) goto loc_8392AC88;
	// lwz r11,184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8392ac8c
	if (cr6.eq) goto loc_8392AC8C;
loc_8392AC88:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8392AC8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392AC9C"))) PPC_WEAK_FUNC(sub_8392AC9C);
PPC_FUNC_IMPL(__imp__sub_8392AC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392ACA0"))) PPC_WEAK_FUNC(sub_8392ACA0);
PPC_FUNC_IMPL(__imp__sub_8392ACA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x8392ACA8;
	__savegprlr_22(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83911640
	ctx.lr = 0x8392ACB4;
	sub_83911640(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8392ACBC;
	sub_831156E8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r24,56(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r29,r11,-24184
	ctx.r29.s64 = ctx.r11.s64 + -24184;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r4,r29,-524
	ctx.r4.s64 = ctx.r29.s64 + -524;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8392ACE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r25,15
	ctx.r25.s64 = 15;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// bl 0x83911640
	ctx.lr = 0x8392AD00;
	sub_83911640(ctx, base);
	// li r23,-1
	ctx.r23.s64 = -1;
	// li r22,2
	ctx.r22.s64 = 2;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8392af10
	if (cr6.eq) goto loc_8392AF10;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x8392af10
	if (cr6.eq) goto loc_8392AF10;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x8392af10
	if (cr6.eq) goto loc_8392AF10;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// bne cr6,0x8392ae7c
	if (!cr6.eq) goto loc_8392AE7C;
	// addi r4,r29,-216
	ctx.r4.s64 = ctx.r29.s64 + -216;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x837b0c10
	ctx.lr = 0x8392AD34;
	sub_837B0C10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e290
	ctx.lr = 0x8392AD54;
	sub_8392E290(ctx, base);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x8387e8e0
	ctx.lr = 0x8392AD5C;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-204
	ctx.r4.s64 = ctx.r29.s64 + -204;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x837b0c10
	ctx.lr = 0x8392AD68;
	sub_837B0C10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e290
	ctx.lr = 0x8392AD88;
	sub_8392E290(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x8387e8e0
	ctx.lr = 0x8392AD90;
	sub_8387E8E0(ctx, base);
loc_8392AD90:
	// addi r4,r29,-120
	ctx.r4.s64 = ctx.r29.s64 + -120;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392ddc0
	ctx.lr = 0x8392ADA4;
	sub_8392DDC0(ctx, base);
	// addi r4,r29,-96
	ctx.r4.s64 = ctx.r29.s64 + -96;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392ddc0
	ctx.lr = 0x8392ADB8;
	sub_8392DDC0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r29,-72
	ctx.r4.s64 = ctx.r29.s64 + -72;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392ADD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392ade8
	if (cr6.eq) goto loc_8392ADE8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x8392ADE8;
	sub_82D2AEC8(ctx, base);
loc_8392ADE8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r29,-52
	ctx.r4.s64 = ctx.r29.s64 + -52;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392AE04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392ae18
	if (cr6.eq) goto loc_8392AE18;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x8392AE18;
	sub_82D2AEC8(ctx, base);
loc_8392AE18:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x8312d698
	ctx.lr = 0x8392AE24;
	sub_8312D698(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x8392AE38;
	sub_8259CB28(ctx, base);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x8387e8e0
	ctx.lr = 0x8392AE40;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x837b0c10
	ctx.lr = 0x8392AE4C;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8392ae60
	if (!cr6.eq) goto loc_8392AE60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8392AE60:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8392AE70;
	sub_8392DC70(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x8387e8e0
	ctx.lr = 0x8392AE78;
	sub_8387E8E0(ctx, base);
	// b 0x8392b2f4
	goto loc_8392B2F4;
loc_8392AE7C:
	// addi r4,r29,-188
	ctx.r4.s64 = ctx.r29.s64 + -188;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x837b0c10
	ctx.lr = 0x8392AE88;
	sub_837B0C10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e290
	ctx.lr = 0x8392AEA8;
	sub_8392E290(ctx, base);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x8387e8e0
	ctx.lr = 0x8392AEB0;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-176
	ctx.r4.s64 = ctx.r29.s64 + -176;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x837b0c10
	ctx.lr = 0x8392AEBC;
	sub_837B0C10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e290
	ctx.lr = 0x8392AEDC;
	sub_8392E290(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x8387e8e0
	ctx.lr = 0x8392AEE4;
	sub_8387E8E0(ctx, base);
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bne cr6,0x8392ad90
	if (!cr6.eq) goto loc_8392AD90;
	// addi r4,r29,-160
	ctx.r4.s64 = ctx.r29.s64 + -160;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e320
	ctx.lr = 0x8392AEFC;
	sub_8392E320(ctx, base);
	// addi r4,r29,-140
	ctx.r4.s64 = ctx.r29.s64 + -140;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e320
	ctx.lr = 0x8392AF0C;
	sub_8392E320(ctx, base);
	// b 0x8392ae18
	goto loc_8392AE18;
loc_8392AF10:
	// stw r25,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r25.u32);
	// addi r4,r29,-432
	ctx.r4.s64 = ctx.r29.s64 + -432;
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r30.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r30,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r30.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8259cc28
	ctx.lr = 0x8392AF2C;
	sub_8259CC28(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e290
	ctx.lr = 0x8392AF4C;
	sub_8392E290(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392af68
	if (cr6.lt) goto loc_8392AF68;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x8392AF68;
	sub_825952B8(ctx, base);
loc_8392AF68:
	// stw r25,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r25.u32);
	// addi r4,r29,-420
	ctx.r4.s64 = ctx.r29.s64 + -420;
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r30.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8392AF90;
	sub_8259CC28(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e290
	ctx.lr = 0x8392AFB0;
	sub_8392E290(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392afcc
	if (cr6.lt) goto loc_8392AFCC;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x8392AFCC;
	sub_825952B8(ctx, base);
loc_8392AFCC:
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// addi r4,r29,-404
	ctx.r4.s64 = ctx.r29.s64 + -404;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r25,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r25.u32);
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8392AFF4;
	sub_8259CC28(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e290
	ctx.lr = 0x8392B014;
	sub_8392E290(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392b030
	if (cr6.lt) goto loc_8392B030;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x8392B030;
	sub_825952B8(ctx, base);
loc_8392B030:
	// stw r25,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r25.u32);
	// addi r4,r29,-384
	ctx.r4.s64 = ctx.r29.s64 + -384;
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// li r5,19
	ctx.r5.s64 = 19;
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r30.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8392B058;
	sub_8259CC28(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e290
	ctx.lr = 0x8392B078;
	sub_8392E290(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392b094
	if (cr6.lt) goto loc_8392B094;
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x8392B094;
	sub_825952B8(ctx, base);
loc_8392B094:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r29,-364
	ctx.r4.s64 = ctx.r29.s64 + -364;
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392B0BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r29,-352
	ctx.r4.s64 = ctx.r29.s64 + -352;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8392B0DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8392b104
	if (cr6.eq) goto loc_8392B104;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392b104
	if (cr6.eq) goto loc_8392B104;
	// bl 0x82d2b0f8
	ctx.lr = 0x8392B0F0;
	sub_82D2B0F8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83545640
	ctx.lr = 0x8392B104;
	sub_83545640(ctx, base);
loc_8392B104:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r29,-332
	ctx.r4.s64 = ctx.r29.s64 + -332;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392B120;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r29,-316
	ctx.r4.s64 = ctx.r29.s64 + -316;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8392B140;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8392b168
	if (cr6.eq) goto loc_8392B168;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392b168
	if (cr6.eq) goto loc_8392B168;
	// bl 0x82d2b0f8
	ctx.lr = 0x8392B154;
	sub_82D2B0F8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83545640
	ctx.lr = 0x8392B168;
	sub_83545640(ctx, base);
loc_8392B168:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// addi r26,r11,11204
	ctx.r26.s64 = ctx.r11.s64 + 11204;
loc_8392B174:
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83815208
	ctx.lr = 0x8392B180;
	sub_83815208(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392b1f0
	if (cr6.eq) goto loc_8392B1F0;
	// bl 0x82d4bb00
	ctx.lr = 0x8392B190;
	sub_82D4BB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82d4c470
	ctx.lr = 0x8392B1A0;
	sub_82D4C470(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392b1b4
	if (cr6.lt) goto loc_8392B1B4;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8392b1b8
	goto loc_8392B1B8;
loc_8392B1B4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8392B1B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83812c80
	ctx.lr = 0x8392B1C0;
	sub_83812C80(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392b1dc
	if (cr6.lt) goto loc_8392B1DC;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,448(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x825952b8
	ctx.lr = 0x8392B1DC;
	sub_825952B8(ctx, base);
loc_8392B1DC:
	// stw r25,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r25.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// stb r30,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r30.u8);
	// bl 0x83812c48
	ctx.lr = 0x8392B1F0;
	sub_83812C48(ctx, base);
loc_8392B1F0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(ctx.r27.u32, 2, xer);
	// blt cr6,0x8392b174
	if (cr6.lt) goto loc_8392B174;
	// addi r4,r29,-296
	ctx.r4.s64 = ctx.r29.s64 + -296;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392ddc0
	ctx.lr = 0x8392B214;
	sub_8392DDC0(ctx, base);
	// addi r4,r29,-276
	ctx.r4.s64 = ctx.r29.s64 + -276;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392ddc0
	ctx.lr = 0x8392B228;
	sub_8392DDC0(ctx, base);
	// stw r25,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r25.u32);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// addi r4,r29,-256
	ctx.r4.s64 = ctx.r29.s64 + -256;
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8259cc28
	ctx.lr = 0x8392B244;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r28,r11,100
	ctx.r28.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8392b258
	if (!cr6.eq) goto loc_8392B258;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8392B258:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8312d698
	ctx.lr = 0x8392B264;
	sub_8312D698(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8392B278;
	sub_8392DC70(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392b294
	if (cr6.lt) goto loc_8392B294;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x825952b8
	ctx.lr = 0x8392B294;
	sub_825952B8(ctx, base);
loc_8392B294:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r25,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r25.u32);
	// stw r30,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r30.u8);
	// blt cr6,0x8392b2bc
	if (cr6.lt) goto loc_8392B2BC;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x8392B2BC;
	sub_825952B8(ctx, base);
loc_8392B2BC:
	// stw r25,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r25.u32);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
	// bl 0x8310e010
	ctx.lr = 0x8392B2CC;
	sub_8310E010(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r29,-240
	ctx.r4.s64 = ctx.r29.s64 + -240;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x8392b2f0
	if (cr6.eq) goto loc_8392B2F0;
	// addi r4,r29,-228
	ctx.r4.s64 = ctx.r29.s64 + -228;
loc_8392B2F0:
	// bctrl 
	ctx.lr = 0x8392B2F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8392B2F4:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8312d6e8
	ctx.lr = 0x8392B300;
	sub_8312D6E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x8392B314;
	sub_8259CB28(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392b330
	if (cr6.lt) goto loc_8392B330;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x825952b8
	ctx.lr = 0x8392B330;
	sub_825952B8(ctx, base);
loc_8392B330:
	// stw r25,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r25.u32);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// stw r30,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r30.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r30,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r30.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r25,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r25.u32);
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8392B358;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8392b36c
	if (!cr6.eq) goto loc_8392B36C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8392B36C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8392B37C;
	sub_8392DC70(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392b398
	if (cr6.lt) goto loc_8392B398;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x8392B398;
	sub_825952B8(ctx, base);
loc_8392B398:
	// stw r25,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r25.u32);
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r30.u8);
	// bl 0x83911640
	ctx.lr = 0x8392B3A8;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x8392b468
	if (!cr6.eq) goto loc_8392B468;
	// bl 0x831156e8
	ctx.lr = 0x8392B3B4;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8312d698
	ctx.lr = 0x8392B3C4;
	sub_8312D698(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x8392B3D8;
	sub_8259CB28(ctx, base);
	// lwz r10,500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8392b3f4
	if (cr6.lt) goto loc_8392B3F4;
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,480(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x825952b8
	ctx.lr = 0x8392B3F4;
	sub_825952B8(ctx, base);
loc_8392B3F4:
	// stw r25,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r25.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r30.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r30,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r30.u8);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r25,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r25.u32);
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// stb r30,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8392B41C;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8392b430
	if (!cr6.eq) goto loc_8392B430;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8392B430:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8392B440;
	sub_8392DC70(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392b45c
	if (cr6.lt) goto loc_8392B45C;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x825952b8
	ctx.lr = 0x8392B45C;
	sub_825952B8(ctx, base);
loc_8392B45C:
	// stw r25,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r25.u32);
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// stb r30,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r30.u8);
loc_8392B468:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392b484
	if (cr6.lt) goto loc_8392B484;
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x8392B484;
	sub_825952B8(ctx, base);
loc_8392B484:
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392B48C"))) PPC_WEAK_FUNC(sub_8392B48C);
PPC_FUNC_IMPL(__imp__sub_8392B48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392B490"))) PPC_WEAK_FUNC(sub_8392B490);
PPC_FUNC_IMPL(__imp__sub_8392B490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,11360(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11360);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392B49C"))) PPC_WEAK_FUNC(sub_8392B49C);
PPC_FUNC_IMPL(__imp__sub_8392B49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392B4A0"))) PPC_WEAK_FUNC(sub_8392B4A0);
PPC_FUNC_IMPL(__imp__sub_8392B4A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392B4A8"))) PPC_WEAK_FUNC(sub_8392B4A8);
PPC_FUNC_IMPL(__imp__sub_8392B4A8) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,25648
	ctx.r9.s64 = ctx.r11.s64 + 25648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8392b4dc
	if (cr6.eq) goto loc_8392B4DC;
	// bl 0x82416268
	ctx.lr = 0x8392B4D8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8392B4DC:
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

__attribute__((alias("__imp__sub_8392B4F0"))) PPC_WEAK_FUNC(sub_8392B4F0);
PPC_FUNC_IMPL(__imp__sub_8392B4F0) {
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
	// li r11,36
	ctx.r11.s64 = 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8392B518;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392b55c
	if (cr6.eq) goto loc_8392B55C;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8392cfc8
	ctx.lr = 0x8392B538;
	sub_8392CFC8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-23592
	ctx.r10.s64 = ctx.r11.s64 + -23592;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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
loc_8392B55C:
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

__attribute__((alias("__imp__sub_8392B574"))) PPC_WEAK_FUNC(sub_8392B574);
PPC_FUNC_IMPL(__imp__sub_8392B574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392B578"))) PPC_WEAK_FUNC(sub_8392B578);
PPC_FUNC_IMPL(__imp__sub_8392B578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8392B5AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392B5BC"))) PPC_WEAK_FUNC(sub_8392B5BC);
PPC_FUNC_IMPL(__imp__sub_8392B5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392B5C0"))) PPC_WEAK_FUNC(sub_8392B5C0);
PPC_FUNC_IMPL(__imp__sub_8392B5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8392B5C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bge cr6,0x8392b8a4
	if (!cr6.lt) goto loc_8392B8A4;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-23200
	ctx.r3.s64 = ctx.r11.s64 + -23200;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x83523fd8
	ctx.lr = 0x8392B5F4;
	sub_83523FD8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8392b600
	if (!cr6.eq) goto loc_8392B600;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8392B600:
	// cmplwi cr6,r28,20
	cr6.compare<uint32_t>(ctx.r28.u32, 20, xer);
	// bgt cr6,0x8392b8a4
	if (cr6.gt) goto loc_8392B8A4;
	// lis r12,-31853
	ctx.r12.s64 = -2087518208;
	// rlwinm r0,r28,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18912
	ctx.r12.s64 = ctx.r12.s64 + -18912;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r28.u32) {
	case 0:
		goto loc_8392B674;
	case 1:
		goto loc_8392B8A4;
	case 2:
		goto loc_8392B694;
	case 3:
		goto loc_8392B6B4;
	case 4:
		goto loc_8392B6C8;
	case 5:
		goto loc_8392B6DC;
	case 6:
		goto loc_8392B6F0;
	case 7:
		goto loc_8392B704;
	case 8:
		goto loc_8392B718;
	case 9:
		goto loc_8392B738;
	case 10:
		goto loc_8392B74C;
	case 11:
		goto loc_8392B76C;
	case 12:
		goto loc_8392B78C;
	case 13:
		goto loc_8392B7AC;
	case 14:
		goto loc_8392B7CC;
	case 15:
		goto loc_8392B7EC;
	case 16:
		goto loc_8392B80C;
	case 17:
		goto loc_8392B830;
	case 18:
		goto loc_8392B850;
	case 19:
		goto loc_8392B870;
	case 20:
		goto loc_8392B890;
	default:
		return;
	}
	// lwz r28,-18828(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18828);
	// lwz r28,-18268(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18268);
	// lwz r28,-18796(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18796);
	// lwz r28,-18764(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18764);
	// lwz r28,-18744(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18744);
	// lwz r28,-18724(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18724);
	// lwz r28,-18704(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18704);
	// lwz r28,-18684(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18684);
	// lwz r28,-18664(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18664);
	// lwz r28,-18632(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18632);
	// lwz r28,-18612(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18612);
	// lwz r28,-18580(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18580);
	// lwz r28,-18548(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18548);
	// lwz r28,-18516(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18516);
	// lwz r28,-18484(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18484);
	// lwz r28,-18452(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18452);
	// lwz r28,-18420(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18420);
	// lwz r28,-18384(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18384);
	// lwz r28,-18352(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r28,-18320(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18320);
	// lwz r28,-18288(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18288);
loc_8392B674:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392b8a4
	if (!cr6.eq) goto loc_8392B8A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8393a0c8
	ctx.lr = 0x8392B68C;
	sub_8393A0C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B694:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392b8a4
	if (!cr6.eq) goto loc_8392B8A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83939cc8
	ctx.lr = 0x8392B6AC;
	sub_83939CC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B6B4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83939008
	ctx.lr = 0x8392B6C0;
	sub_83939008(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B6C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392a848
	ctx.lr = 0x8392B6D4;
	sub_8392A848(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B6DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392abc8
	ctx.lr = 0x8392B6E8;
	sub_8392ABC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B6F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83937f00
	ctx.lr = 0x8392B6FC;
	sub_83937F00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B704:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83936eb8
	ctx.lr = 0x8392B710;
	sub_83936EB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B718:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392b8a4
	if (!cr6.eq) goto loc_8392B8A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839360c0
	ctx.lr = 0x8392B730;
	sub_839360C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B738:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83935e80
	ctx.lr = 0x8392B744;
	sub_83935E80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B74C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392b8a4
	if (!cr6.eq) goto loc_8392B8A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839358b8
	ctx.lr = 0x8392B764;
	sub_839358B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B76C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392b8a4
	if (!cr6.eq) goto loc_8392B8A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83934cb0
	ctx.lr = 0x8392B784;
	sub_83934CB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B78C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392b8a4
	if (!cr6.eq) goto loc_8392B8A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83934498
	ctx.lr = 0x8392B7A4;
	sub_83934498(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B7AC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392b8a4
	if (!cr6.eq) goto loc_8392B8A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83933e80
	ctx.lr = 0x8392B7C4;
	sub_83933E80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B7CC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392b8a4
	if (!cr6.eq) goto loc_8392B8A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83933108
	ctx.lr = 0x8392B7E4;
	sub_83933108(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B7EC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392b8a4
	if (!cr6.eq) goto loc_8392B8A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83932d38
	ctx.lr = 0x8392B804;
	sub_83932D38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B80C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392b8a4
	if (!cr6.eq) goto loc_8392B8A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83931a60
	ctx.lr = 0x8392B828;
	sub_83931A60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B830:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392b8a4
	if (!cr6.eq) goto loc_8392B8A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83930ad0
	ctx.lr = 0x8392B848;
	sub_83930AD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B850:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392b8a4
	if (!cr6.eq) goto loc_8392B8A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392f878
	ctx.lr = 0x8392B868;
	sub_8392F878(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B870:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392b8a4
	if (!cr6.eq) goto loc_8392B8A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392ed50
	ctx.lr = 0x8392B888;
	sub_8392ED50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B890:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e690
	ctx.lr = 0x8392B89C;
	sub_8392E690(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B8A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392B8B0"))) PPC_WEAK_FUNC(sub_8392B8B0);
PPC_FUNC_IMPL(__imp__sub_8392B8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8392B8B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bge cr6,0x8392b980
	if (!cr6.lt) goto loc_8392B980;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-23172
	ctx.r3.s64 = ctx.r11.s64 + -23172;
	// bl 0x83523fd8
	ctx.lr = 0x8392B8E4;
	sub_83523FD8(ctx, base);
	// cmplwi cr6,r28,5
	cr6.compare<uint32_t>(ctx.r28.u32, 5, xer);
	// bgt cr6,0x8392b980
	if (cr6.gt) goto loc_8392B980;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8392b938
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392B938;
	// bdzf 4*cr6+eq,0x8392b920
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392B920;
	// bdzf 4*cr6+eq,0x8392b950
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392B950;
	// bdzf 4*cr6+eq,0x8392b980
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392B980;
	// bne cr6,0x8392b968
	if (!cr6.eq) goto loc_8392B968;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8391d368
	ctx.lr = 0x8392B918;
	sub_8391D368(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B920:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8391cd90
	ctx.lr = 0x8392B930;
	sub_8391CD90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B938:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8393a6e8
	ctx.lr = 0x8392B948;
	sub_8393A6E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B950:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8391c800
	ctx.lr = 0x8392B960;
	sub_8391C800(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B968:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839297c0
	ctx.lr = 0x8392B978;
	sub_839297C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392B980:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392B98C"))) PPC_WEAK_FUNC(sub_8392B98C);
PPC_FUNC_IMPL(__imp__sub_8392B98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392B990"))) PPC_WEAK_FUNC(sub_8392B990);
PPC_FUNC_IMPL(__imp__sub_8392B990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8392B998;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,21
	cr6.compare<uint32_t>(ctx.r5.u32, 21, xer);
	// bge cr6,0x8392bc00
	if (!cr6.lt) goto loc_8392BC00;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x8392B9BC;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392b9d0
	if (cr6.eq) goto loc_8392B9D0;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bne cr6,0x8392bc00
	if (!cr6.eq) goto loc_8392BC00;
loc_8392B9D0:
	// bl 0x831156e8
	ctx.lr = 0x8392B9D4;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,35220
	ctx.r9.u64 = ctx.r11.u64 | 35220;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,3
	cr6.compare<int32_t>(ctx.r8.s32, 3, xer);
	// bne cr6,0x8392b9fc
	if (!cr6.eq) goto loc_8392B9FC;
	// cmplwi cr6,r31,9
	cr6.compare<uint32_t>(ctx.r31.u32, 9, xer);
	// beq cr6,0x8392b9fc
	if (cr6.eq) goto loc_8392B9FC;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// bne cr6,0x8392bc00
	if (!cr6.eq) goto loc_8392BC00;
loc_8392B9FC:
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bne cr6,0x8392ba68
	if (!cr6.eq) goto loc_8392BA68;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x8392bc00
	if (cr6.gt) goto loc_8392BC00;
	// lis r12,-31853
	ctx.r12.s64 = -2087518208;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17868
	ctx.r12.s64 = ctx.r12.s64 + -17868;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8392BA68;
	case 1:
		goto loc_8392BA68;
	case 2:
		goto loc_8392BC00;
	case 3:
		goto loc_8392BA68;
	case 4:
		goto loc_8392BC00;
	case 5:
		goto loc_8392BC00;
	case 6:
		goto loc_8392BC00;
	case 7:
		goto loc_8392BC00;
	case 8:
		goto loc_8392BC00;
	case 9:
		goto loc_8392BC00;
	case 10:
		goto loc_8392BC00;
	case 11:
		goto loc_8392BC00;
	case 12:
		goto loc_8392BA68;
	default:
		return;
	}
	// lwz r28,-17816(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17816);
	// lwz r28,-17816(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17816);
	// lwz r28,-17408(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17408);
	// lwz r28,-17816(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17816);
	// lwz r28,-17408(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17408);
	// lwz r28,-17408(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17408);
	// lwz r28,-17408(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17408);
	// lwz r28,-17408(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17408);
	// lwz r28,-17408(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17408);
	// lwz r28,-17408(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17408);
	// lwz r28,-17408(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17408);
	// lwz r28,-17408(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17408);
	// lwz r28,-17816(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17816);
loc_8392BA68:
	// cmplwi cr6,r31,20
	cr6.compare<uint32_t>(ctx.r31.u32, 20, xer);
	// bgt cr6,0x8392bc00
	if (cr6.gt) goto loc_8392BC00;
	// lis r12,-31853
	ctx.r12.s64 = -2087518208;
	// rlwinm r0,r31,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17784
	ctx.r12.s64 = ctx.r12.s64 + -17784;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r31.u32) {
	case 0:
		goto loc_8392BADC;
	case 1:
		goto loc_8392BC00;
	case 2:
		goto loc_8392BAEC;
	case 3:
		goto loc_8392BAFC;
	case 4:
		goto loc_8392BC00;
	case 5:
		goto loc_8392BC00;
	case 6:
		goto loc_8392BB0C;
	case 7:
		goto loc_8392BB1C;
	case 8:
		goto loc_8392BB2C;
	case 9:
		goto loc_8392BB3C;
	case 10:
		goto loc_8392BB4C;
	case 11:
		goto loc_8392BBA8;
	case 12:
		goto loc_8392BB7C;
	case 13:
		goto loc_8392BB98;
	case 14:
		goto loc_8392BB5C;
	case 15:
		goto loc_8392BB6C;
	case 16:
		goto loc_8392BBB8;
	case 17:
		goto loc_8392BBC8;
	case 18:
		goto loc_8392BBD4;
	case 19:
		goto loc_8392BBE0;
	case 20:
		goto loc_8392BBF0;
	default:
		return;
	}
	// lwz r28,-17700(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17700);
	// lwz r28,-17408(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17408);
	// lwz r28,-17684(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17684);
	// lwz r28,-17668(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17668);
	// lwz r28,-17408(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17408);
	// lwz r28,-17408(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17408);
	// lwz r28,-17652(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17652);
	// lwz r28,-17636(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17636);
	// lwz r28,-17620(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17620);
	// lwz r28,-17604(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17604);
	// lwz r28,-17588(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17588);
	// lwz r28,-17496(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17496);
	// lwz r28,-17540(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17540);
	// lwz r28,-17512(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17512);
	// lwz r28,-17572(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17572);
	// lwz r28,-17556(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17556);
	// lwz r28,-17480(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17480);
	// lwz r28,-17464(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17464);
	// lwz r28,-17452(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17452);
	// lwz r28,-17440(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17440);
	// lwz r28,-17424(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -17424);
loc_8392BADC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8393a140
	ctx.lr = 0x8392BAE4;
	sub_8393A140(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392BAEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83939d48
	ctx.lr = 0x8392BAF4;
	sub_83939D48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392BAFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83938e28
	ctx.lr = 0x8392BB04;
	sub_83938E28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392BB0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839378a8
	ctx.lr = 0x8392BB14;
	sub_839378A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392BB1C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83936b20
	ctx.lr = 0x8392BB24;
	sub_83936B20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392BB2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839361e8
	ctx.lr = 0x8392BB34;
	sub_839361E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392BB3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83935de0
	ctx.lr = 0x8392BB44;
	sub_83935DE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392BB4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839357c0
	ctx.lr = 0x8392BB54;
	sub_839357C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392BB5C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83932f10
	ctx.lr = 0x8392BB64;
	sub_83932F10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392BB6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83932a28
	ctx.lr = 0x8392BB74;
	sub_83932A28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392BB7C:
	// bl 0x830ff290
	ctx.lr = 0x8392BB80;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x8392BB84;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
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
loc_8392BB98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83933f00
	ctx.lr = 0x8392BBA0;
	sub_83933F00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392BBA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83934b80
	ctx.lr = 0x8392BBB0;
	sub_83934B80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392BBB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83931b38
	ctx.lr = 0x8392BBC0;
	sub_83931B38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392BBC8:
	// bl 0x8392f978
	ctx.lr = 0x8392BBCC;
	sub_8392F978(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392BBD4:
	// bl 0x8392f978
	ctx.lr = 0x8392BBD8;
	sub_8392F978(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392BBE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392ec30
	ctx.lr = 0x8392BBE8;
	sub_8392EC30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392BBF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392e4f8
	ctx.lr = 0x8392BBF8;
	sub_8392E4F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392BC00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392BC0C"))) PPC_WEAK_FUNC(sub_8392BC0C);
PPC_FUNC_IMPL(__imp__sub_8392BC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392BC10"))) PPC_WEAK_FUNC(sub_8392BC10);
PPC_FUNC_IMPL(__imp__sub_8392BC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8392BC18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,6
	cr6.compare<uint32_t>(ctx.r5.u32, 6, xer);
	// bge cr6,0x8392bcb8
	if (!cr6.lt) goto loc_8392BCB8;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bge cr6,0x8392bcb8
	if (!cr6.lt) goto loc_8392BCB8;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x8392BC48;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392bcb8
	if (!cr6.eq) goto loc_8392BCB8;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// beq cr6,0x8392bcb8
	if (cr6.eq) goto loc_8392BCB8;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bgt cr6,0x8392bcb8
	if (cr6.gt) goto loc_8392BCB8;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8392bca4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392BCA4;
	// bdzf 4*cr6+eq,0x8392bc90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392BC90;
	// bne cr6,0x8392bc84
	if (!cr6.eq) goto loc_8392BC84;
loc_8392BC84:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392BC90:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8391ccf8
	ctx.lr = 0x8392BC9C;
	sub_8391CCF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392BCA4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8393a450
	ctx.lr = 0x8392BCB0;
	sub_8393A450(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392BCB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392BCC4"))) PPC_WEAK_FUNC(sub_8392BCC4);
PPC_FUNC_IMPL(__imp__sub_8392BCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392BCC8"))) PPC_WEAK_FUNC(sub_8392BCC8);
PPC_FUNC_IMPL(__imp__sub_8392BCC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,116(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// bl 0x82a0c738
	ctx.lr = 0x8392BCF4;
	sub_82A0C738(ctx, base);
	// subfic r4,r31,10
	xer.ca = ctx.r31.u32 <= 10;
	ctx.r4.s64 = 10 - ctx.r31.s64;
	// bl 0x82a16188
	ctx.lr = 0x8392BCFC;
	sub_82A16188(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8392BD04;
	sub_831156E8(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addis r3,r10,5
	ctx.r3.s64 = ctx.r10.s64 + 327680;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x83123ba8
	ctx.lr = 0x8392BD30;
	sub_83123BA8(ctx, base);
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

__attribute__((alias("__imp__sub_8392BD48"))) PPC_WEAK_FUNC(sub_8392BD48);
PPC_FUNC_IMPL(__imp__sub_8392BD48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8392BD50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x8392BD5C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x8392BD64;
	sub_82D33DB0(ctx, base);
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x8392bd88
	if (!cr6.eq) goto loc_8392BD88;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8392BD88:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392bdc0
	if (cr6.eq) goto loc_8392BDC0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,-22476
	ctx.r11.s64 = ctx.r9.s64 + -22476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8392BDB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8392BDC0:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r29,r11,-22476
	ctx.r29.s64 = ctx.r11.s64 + -22476;
	// addi r4,r29,-52
	ctx.r4.s64 = ctx.r29.s64 + -52;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8392BDE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8392be70
	if (cr6.lt) goto loc_8392BE70;
	// beq cr6,0x8392be38
	if (cr6.eq) goto loc_8392BE38;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x8392beec
	if (!cr6.lt) goto loc_8392BEEC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392BE1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r30,35
	ctx.r30.s64 = 2293760;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r30,r30,30
	ctx.r30.u64 = ctx.r30.u64 | 30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d29598
	ctx.lr = 0x8392BE30;
	sub_82D29598(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8392BE38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392BE54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r30,2
	ctx.r30.s64 = 131072;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r30,r30,24
	ctx.r30.u64 = ctx.r30.u64 | 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d29598
	ctx.lr = 0x8392BE68;
	sub_82D29598(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8392BE70:
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,128(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x8392bec8
	if (cr6.eq) goto loc_8392BEC8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x8392bea0
	if (cr6.eq) goto loc_8392BEA0;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x8392bed0
	if (!cr6.eq) goto loc_8392BED0;
	// lis r30,35
	ctx.r30.s64 = 2293760;
	// ori r30,r30,137
	ctx.r30.u64 = ctx.r30.u64 | 137;
	// b 0x8392bed0
	goto loc_8392BED0;
loc_8392BEA0:
	// lfs f13,132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-312(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -312);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8392bebc
	if (cr6.lt) goto loc_8392BEBC;
	// lis r30,36
	ctx.r30.s64 = 2359296;
	// ori r30,r30,135
	ctx.r30.u64 = ctx.r30.u64 | 135;
	// b 0x8392bed0
	goto loc_8392BED0;
loc_8392BEBC:
	// lis r30,13
	ctx.r30.s64 = 851968;
	// ori r30,r30,43
	ctx.r30.u64 = ctx.r30.u64 | 43;
	// b 0x8392bed0
	goto loc_8392BED0;
loc_8392BEC8:
	// lis r30,990
	ctx.r30.s64 = 64880640;
	// ori r30,r30,213
	ctx.r30.u64 = ctx.r30.u64 | 213;
loc_8392BED0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,-36
	ctx.r4.s64 = ctx.r29.s64 + -36;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392BEEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8392BEEC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d29598
	ctx.lr = 0x8392BEF8;
	sub_82D29598(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392BF00"))) PPC_WEAK_FUNC(sub_8392BF00);
PPC_FUNC_IMPL(__imp__sub_8392BF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8392BF08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,128(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// bl 0x8392bcc8
	ctx.lr = 0x8392BF28;
	sub_8392BCC8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// addi r27,r11,-22460
	ctx.r27.s64 = ctx.r11.s64 + -22460;
	// beq cr6,0x8392bf74
	if (cr6.eq) goto loc_8392BF74;
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(ctx.r30.s32, 5, xer);
	// beq cr6,0x8392bf54
	if (cr6.eq) goto loc_8392BF54;
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(ctx.r30.s32, 6, xer);
	// bne cr6,0x8392bf80
	if (!cr6.eq) goto loc_8392BF80;
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x8392bf78
	goto loc_8392BF78;
loc_8392BF54:
	// lfs f13,132(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-328(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -328);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8392bf6c
	if (cr6.lt) goto loc_8392BF6C;
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x8392bf78
	goto loc_8392BF78;
loc_8392BF6C:
	// li r4,20
	ctx.r4.s64 = 20;
	// b 0x8392bf78
	goto loc_8392BF78;
loc_8392BF74:
	// li r4,21
	ctx.r4.s64 = 21;
loc_8392BF78:
	// bl 0x8314b3a8
	ctx.lr = 0x8392BF7C;
	sub_8314B3A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8392BF80:
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392BF98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrldi r4,r31,56
	ctx.r4.u64 = ctx.r31.u64 & 0xFF;
	// bl 0x82d45d88
	ctx.lr = 0x8392BFA0;
	sub_82D45D88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392BFA8"))) PPC_WEAK_FUNC(sub_8392BFA8);
PPC_FUNC_IMPL(__imp__sub_8392BFA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8392BFB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8392bcc8
	ctx.lr = 0x8392BFC4;
	sub_8392BCC8(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r9,-22444
	ctx.r4.s64 = ctx.r9.s64 + -22444;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8392BFE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,116(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 116);
	// bl 0x82a0c738
	ctx.lr = 0x8392C000;
	sub_82A0C738(ctx, base);
	// subfic r4,r29,10
	xer.ca = ctx.r29.u32 <= 10;
	ctx.r4.s64 = 10 - ctx.r29.s64;
	// bl 0x82a16188
	ctx.lr = 0x8392C008;
	sub_82A16188(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8392C010;
	sub_831156E8(ctx, base);
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,116(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 116);
	// bl 0x8312b810
	ctx.lr = 0x8392C028;
	sub_8312B810(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8392c048
	if (cr6.eq) goto loc_8392C048;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d4ba30
	ctx.lr = 0x8392C040;
	sub_82D4BA30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392C048:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,188(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,96
	ctx.r4.s64 = 96;
	// rlwinm r31,r10,24,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// bl 0x83120738
	ctx.lr = 0x8392C068;
	sub_83120738(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8392c15c
	if (cr6.gt) goto loc_8392C15C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8392c150
	if (cr6.eq) goto loc_8392C150;
	// bdz 0x8392c120
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8392C120;
	// bdz 0x8392c0f0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8392C0F0;
	// bdz 0x8392c0c0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8392C0C0;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392c0b0
	if (cr6.eq) goto loc_8392C0B0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82d4ba30
	ctx.lr = 0x8392C0A8;
	sub_82D4BA30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392C0B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d4ba30
	ctx.lr = 0x8392C0B8;
	sub_82D4BA30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392C0C0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392c0e0
	if (cr6.eq) goto loc_8392C0E0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82d4ba30
	ctx.lr = 0x8392C0D8;
	sub_82D4BA30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392C0E0:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d4ba30
	ctx.lr = 0x8392C0E8;
	sub_82D4BA30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392C0F0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392c110
	if (cr6.eq) goto loc_8392C110;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82d4ba30
	ctx.lr = 0x8392C108;
	sub_82D4BA30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392C110:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d4ba30
	ctx.lr = 0x8392C118;
	sub_82D4BA30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392C120:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392c140
	if (cr6.eq) goto loc_8392C140;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82d4ba30
	ctx.lr = 0x8392C138;
	sub_82D4BA30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392C140:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d4ba30
	ctx.lr = 0x8392C148;
	sub_82D4BA30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392C150:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d4ba30
	ctx.lr = 0x8392C15C;
	sub_82D4BA30(ctx, base);
loc_8392C15C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392C164"))) PPC_WEAK_FUNC(sub_8392C164);
PPC_FUNC_IMPL(__imp__sub_8392C164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392C168"))) PPC_WEAK_FUNC(sub_8392C168);
PPC_FUNC_IMPL(__imp__sub_8392C168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8392C170;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-22400
	ctx.r31.s64 = ctx.r11.s64 + -22400;
	// addi r3,r4,100
	ctx.r3.s64 = ctx.r4.s64 + 100;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8392C19C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392c1fc
	if (cr6.eq) goto loc_8392C1FC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8392bcc8
	ctx.lr = 0x8392C1B4;
	sub_8392BCC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x83120738
	ctx.lr = 0x8392C1C8;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8392c1dc
	if (cr6.eq) goto loc_8392C1DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8392C1DC:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8392c1fc
	if (cr6.eq) goto loc_8392C1FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392C1FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8392C1FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392C204"))) PPC_WEAK_FUNC(sub_8392C204);
PPC_FUNC_IMPL(__imp__sub_8392C204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392C208"))) PPC_WEAK_FUNC(sub_8392C208);
PPC_FUNC_IMPL(__imp__sub_8392C208) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8392bcc8
	ctx.lr = 0x8392C228;
	sub_8392BCC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x83123700
	ctx.lr = 0x8392C23C;
	sub_83123700(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x8392C24C;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8392c278
	if (!cr6.eq) goto loc_8392C278;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// addi r11,r9,-22372
	ctx.r11.s64 = ctx.r9.s64 + -22372;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// b 0x8392c28c
	goto loc_8392C28C;
loc_8392C278:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r4,r10,-22372
	ctx.r4.s64 = ctx.r10.s64 + -22372;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8392C28C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8392C294;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_8392C2AC"))) PPC_WEAK_FUNC(sub_8392C2AC);
PPC_FUNC_IMPL(__imp__sub_8392C2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392C2B0"))) PPC_WEAK_FUNC(sub_8392C2B0);
PPC_FUNC_IMPL(__imp__sub_8392C2B0) {
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
	// bl 0x82d19a68
	ctx.lr = 0x8392C2C8;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r4,r11,-22576
	ctx.r4.s64 = ctx.r11.s64 + -22576;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8392C2E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392c334
	if (cr6.eq) goto loc_8392C334;
	// bl 0x82d2fe58
	ctx.lr = 0x8392C2F0;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392c334
	if (cr6.eq) goto loc_8392C334;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d3d908
	ctx.lr = 0x8392C300;
	sub_82D3D908(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x8392c31c
	if (!cr6.gt) goto loc_8392C31C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8392c328
	goto loc_8392C328;
loc_8392C31C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8392c328
	if (!cr6.lt) goto loc_8392C328;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8392C328:
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392bd48
	ctx.lr = 0x8392C334;
	sub_8392BD48(ctx, base);
loc_8392C334:
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

__attribute__((alias("__imp__sub_8392C348"))) PPC_WEAK_FUNC(sub_8392C348);
PPC_FUNC_IMPL(__imp__sub_8392C348) {
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
	// bl 0x82d19a68
	ctx.lr = 0x8392C360;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r4,r11,-22564
	ctx.r4.s64 = ctx.r11.s64 + -22564;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8392C37C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392c3cc
	if (cr6.eq) goto loc_8392C3CC;
	// bl 0x82d2fe58
	ctx.lr = 0x8392C388;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392c3cc
	if (cr6.eq) goto loc_8392C3CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d3d8a8
	ctx.lr = 0x8392C398;
	sub_82D3D8A8(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x8392c3b4
	if (!cr6.gt) goto loc_8392C3B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8392c3c0
	goto loc_8392C3C0;
loc_8392C3B4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8392c3c0
	if (!cr6.lt) goto loc_8392C3C0;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8392C3C0:
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392bd48
	ctx.lr = 0x8392C3CC;
	sub_8392BD48(ctx, base);
loc_8392C3CC:
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

__attribute__((alias("__imp__sub_8392C3E0"))) PPC_WEAK_FUNC(sub_8392C3E0);
PPC_FUNC_IMPL(__imp__sub_8392C3E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8392C3E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r8,116(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// mulli r7,r8,11
	ctx.r7.s64 = ctx.r8.s64 * 11;
	// subf r6,r5,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r5.s64;
	// addic. r10,r6,10
	xer.ca = ctx.r6.u32 > 4294967285;
	ctx.r10.s64 = ctx.r6.s64 + 10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8392c428
	if (cr0.lt) goto loc_8392C428;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// blt cr6,0x8392c42c
	if (cr6.lt) goto loc_8392C42C;
loc_8392C428:
	// li r8,0
	ctx.r8.s64 = 0;
loc_8392C42C:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8392c44c
	if (cr6.eq) goto loc_8392C44C;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r9,5768(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5768);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r10,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8392c450
	goto loc_8392C450;
loc_8392C44C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8392C450:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8392c474
	if (!cr6.eq) goto loc_8392C474;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x8392C470;
	sub_82D2B608(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
loc_8392C474:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x8392c48c
	if (!cr6.eq) goto loc_8392C48C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8392C48C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x8392c4b0
	if (cr6.eq) goto loc_8392C4B0;
	// bl 0x8392c208
	ctx.lr = 0x8392C4A8;
	sub_8392C208(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8392C4B0:
	// bl 0x8392bf00
	ctx.lr = 0x8392C4B4;
	sub_8392BF00(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8392bfa8
	ctx.lr = 0x8392C4C4;
	sub_8392BFA8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8392c168
	ctx.lr = 0x8392C4D4;
	sub_8392C168(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392C4DC"))) PPC_WEAK_FUNC(sub_8392C4DC);
PPC_FUNC_IMPL(__imp__sub_8392C4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392C4E0"))) PPC_WEAK_FUNC(sub_8392C4E0);
PPC_FUNC_IMPL(__imp__sub_8392C4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8392C4E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x8392C4F8;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x8392C500;
	sub_82D33DB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x8392C508;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x82d21408
	ctx.lr = 0x8392C520;
	sub_82D21408(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,116(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// bl 0x82a0c710
	ctx.lr = 0x8392C534;
	sub_82A0C710(ctx, base);
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// subfic r4,r31,10
	xer.ca = ctx.r31.u32 <= 10;
	ctx.r4.s64 = 10 - ctx.r31.s64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,-30988
	ctx.r3.s64 = ctx.r3.s64 + -30988;
	// bl 0x82917550
	ctx.lr = 0x8392C54C;
	sub_82917550(ctx, base);
	// addi r28,r29,100
	ctx.r28.s64 = ctx.r29.s64 + 100;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x82d2d510
	ctx.lr = 0x8392C564;
	sub_82D2D510(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d39310
	ctx.lr = 0x8392C56C;
	sub_82D39310(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392bcc8
	ctx.lr = 0x8392C578;
	sub_8392BCC8(ctx, base);
	// lwz r9,100(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r8,-22552
	ctx.r4.s64 = ctx.r8.s64 + -22552;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8392C598;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392c608
	if (cr6.eq) goto loc_8392C608;
	// addi r4,r27,56
	ctx.r4.s64 = ctx.r27.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x8392C5B0;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x8392C5C4;
	sub_82D291E0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392c5e4
	if (cr6.lt) goto loc_8392C5E4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8392C5E4;
	sub_825952B8(ctx, base);
loc_8392C5E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392c3e0
	ctx.lr = 0x8392C608;
	sub_8392C3E0(ctx, base);
loc_8392C608:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392C610"))) PPC_WEAK_FUNC(sub_8392C610);
PPC_FUNC_IMPL(__imp__sub_8392C610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8392C618;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x8392c640
	if (!cr6.eq) goto loc_8392C640;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8392C640:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392c66c
	if (!cr6.eq) goto loc_8392C66C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x8392C65C;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x8392C66C;
	sub_82D19788(ctx, base);
loc_8392C66C:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x839283a0
	ctx.lr = 0x8392C680;
	sub_839283A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x8392C688;
	sub_82D19A68(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392C6AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,12(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82d19a78
	ctx.lr = 0x8392C6BC;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x8392C6C4;
	sub_82D33DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x8392C6D0;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r28,r11,-22612
	ctx.r28.s64 = ctx.r11.s64 + -22612;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-28
	ctx.r4.s64 = ctx.r28.s64 + -28;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8392C6F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d2fe58
	ctx.lr = 0x8392C6F8;
	sub_82D2FE58(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,128(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 128);
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bne cr6,0x8392c718
	if (!cr6.eq) goto loc_8392C718;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8392C718:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// lis r4,12
	ctx.r4.s64 = 786432;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8392c770
	if (cr6.eq) goto loc_8392C770;
	// ori r4,r4,41
	ctx.r4.u64 = ctx.r4.u64 | 41;
	// bl 0x82d30340
	ctx.lr = 0x8392C738;
	sub_82D30340(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8392C748;
	sub_82D2AEC8(ctx, base);
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// addi r3,r27,100
	ctx.r3.s64 = ctx.r27.s64 + 100;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392C760;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,37
	ctx.r4.s64 = 2424832;
	// ori r4,r4,27
	ctx.r4.u64 = ctx.r4.u64 | 27;
	// bl 0x82d29598
	ctx.lr = 0x8392C76C;
	sub_82D29598(ctx, base);
	// b 0x8392c788
	goto loc_8392C788;
loc_8392C770:
	// ori r4,r4,28
	ctx.r4.u64 = ctx.r4.u64 | 28;
	// bl 0x82d30340
	ctx.lr = 0x8392C778;
	sub_82D30340(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d3d968
	ctx.lr = 0x8392C788;
	sub_82D3D968(ctx, base);
loc_8392C788:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392bd48
	ctx.lr = 0x8392C790;
	sub_8392BD48(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_8392C794:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392c4e0
	ctx.lr = 0x8392C7A0;
	sub_8392C4E0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x8392c794
	if (cr6.lt) goto loc_8392C794;
	// lwz r11,120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfic r30,r11,10
	xer.ca = ctx.r11.u32 <= 10;
	ctx.r30.s64 = 10 - ctx.r11.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x8392C7C4;
	sub_82D1EAC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x8392C7D0;
	sub_82D33DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8392C7EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82d3c750
	ctx.lr = 0x8392C7F0;
	sub_82D3C750(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d198d0
	ctx.lr = 0x8392C7FC;
	sub_82D198D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392C808"))) PPC_WEAK_FUNC(sub_8392C808);
PPC_FUNC_IMPL(__imp__sub_8392C808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8392C810;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r4,r11,-22656
	ctx.r4.s64 = ctx.r11.s64 + -22656;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d253f8
	ctx.lr = 0x8392C834;
	sub_82D253F8(ctx, base);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r10,-22272
	ctx.r8.s64 = ctx.r10.s64 + -22272;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// addi r5,r6,-22824
	ctx.r5.s64 = ctx.r6.s64 + -22824;
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bl 0x825b4670
	ctx.lr = 0x8392C87C;
	sub_825B4670(ctx, base);
	// lis r30,-31768
	ctx.r30.s64 = -2081947648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r30,11620
	ctx.r29.s64 = ctx.r30.s64 + 11620;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d20ae0
	ctx.lr = 0x8392C890;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x8392C89C;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,11620(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11620);
	// bl 0x82d23390
	ctx.lr = 0x8392C8AC;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d17e60
	ctx.lr = 0x8392C8B8;
	sub_82D17E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83102db0
	ctx.lr = 0x8392C8C4;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x8392C8D4;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x8392C8E4;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392C8F0"))) PPC_WEAK_FUNC(sub_8392C8F0);
PPC_FUNC_IMPL(__imp__sub_8392C8F0) {
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
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-22272
	ctx.r8.s64 = ctx.r11.s64 + -22272;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// addi r6,r9,-24712
	ctx.r6.s64 = ctx.r9.s64 + -24712;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// addi r30,r3,96
	ctx.r30.s64 = ctx.r3.s64 + 96;
	// stw r6,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0cf8
	ctx.lr = 0x8392C938;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8392c964
	if (cr6.eq) goto loc_8392C964;
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
	ctx.lr = 0x8392C95C;
	sub_8353F3B8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_8392C964:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x8392C96C;
	sub_82D25548(ctx, base);
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

__attribute__((alias("__imp__sub_8392C984"))) PPC_WEAK_FUNC(sub_8392C984);
PPC_FUNC_IMPL(__imp__sub_8392C984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392C988"))) PPC_WEAK_FUNC(sub_8392C988);
PPC_FUNC_IMPL(__imp__sub_8392C988) {
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
	// bl 0x8392c8f0
	ctx.lr = 0x8392C9A8;
	sub_8392C8F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392c9c0
	if (cr6.eq) goto loc_8392C9C0;
	// bl 0x82416268
	ctx.lr = 0x8392C9BC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8392C9C0:
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

__attribute__((alias("__imp__sub_8392C9D8"))) PPC_WEAK_FUNC(sub_8392C9D8);
PPC_FUNC_IMPL(__imp__sub_8392C9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8392C9E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x8392C9EC;
	sub_82D19BB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8392caf0
	if (cr6.lt) goto loc_8392CAF0;
	// lbz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 100);
	// addi r28,r29,96
	ctx.r28.s64 = ctx.r29.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392ca10
	if (!cr6.eq) goto loc_8392CA10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825b4670
	ctx.lr = 0x8392CA10;
	sub_825B4670(ctx, base);
loc_8392CA10:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392ca2c
	if (!cr6.eq) goto loc_8392CA2C;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// stw r10,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r10.u32);
loc_8392CA2C:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// subfic r30,r31,10
	xer.ca = ctx.r31.u32 <= 10;
	ctx.r30.s64 = 10 - ctx.r31.s64;
	// addi r31,r11,112
	ctx.r31.s64 = ctx.r11.s64 + 112;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x8392cad4
	if (cr6.eq) goto loc_8392CAD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x8392CA54;
	sub_82D19788(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subfic r29,r11,10
	xer.ca = ctx.r11.u32 <= 10;
	ctx.r29.s64 = 10 - ctx.r11.s64;
	// bl 0x82d19a78
	ctx.lr = 0x8392CA64;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x8392CA6C;
	sub_82D33DB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d33db0
	ctx.lr = 0x8392CA78;
	sub_82D33DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r29,r10,-22588
	ctx.r29.s64 = ctx.r10.s64 + -22588;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8392CA9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82d3c780
	ctx.lr = 0x8392CAA0;
	sub_82D3C780(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// subfic r4,r30,10
	xer.ca = ctx.r30.u32 <= 10;
	ctx.r4.s64 = 10 - ctx.r30.s64;
	// stb r7,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r7.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x8392CAB8;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8392CAD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82d3c750
	ctx.lr = 0x8392CAD4;
	sub_82D3C750(ctx, base);
loc_8392CAD4:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392caf0
	if (cr6.eq) goto loc_8392CAF0;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x8392CAE8;
	sub_825B33F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_8392CAF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392CAF8"))) PPC_WEAK_FUNC(sub_8392CAF8);
PPC_FUNC_IMPL(__imp__sub_8392CAF8) {
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
	// lbz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 100);
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392cb20
	if (!cr6.eq) goto loc_8392CB20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4670
	ctx.lr = 0x8392CB20;
	sub_825B4670(ctx, base);
loc_8392CB20:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392cb3c
	if (!cr6.eq) goto loc_8392CB3C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_8392CB3C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,137(r11)
	PPC_STORE_U8(ctx.r11.u32 + 137, ctx.r10.u8);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8392cb64
	if (cr6.eq) goto loc_8392CB64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x8392CB5C;
	sub_825B33F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8392CB64:
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

__attribute__((alias("__imp__sub_8392CB78"))) PPC_WEAK_FUNC(sub_8392CB78);
PPC_FUNC_IMPL(__imp__sub_8392CB78) {
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
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,124
	ctx.r4.s64 = 124;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8392CBAC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392cbc4
	if (cr6.eq) goto loc_8392CBC4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8392c808
	ctx.lr = 0x8392CBC0;
	sub_8392C808(ctx, base);
	// b 0x8392cbc8
	goto loc_8392CBC8;
loc_8392CBC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8392CBC8:
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

__attribute__((alias("__imp__sub_8392CBE0"))) PPC_WEAK_FUNC(sub_8392CBE0);
PPC_FUNC_IMPL(__imp__sub_8392CBE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392cbf4
	if (cr6.eq) goto loc_8392CBF4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83b570d0
	sub_83B570D0(ctx, base);
	return;
loc_8392CBF4:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837a5d88
	sub_837A5D88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392CC04"))) PPC_WEAK_FUNC(sub_8392CC04);
PPC_FUNC_IMPL(__imp__sub_8392CC04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392CC08"))) PPC_WEAK_FUNC(sub_8392CC08);
PPC_FUNC_IMPL(__imp__sub_8392CC08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392cc1c
	if (cr6.eq) goto loc_8392CC1C;
	// b 0x83b571f8
	sub_83B571F8(ctx, base);
	return;
loc_8392CC1C:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837a5ea8
	sub_837A5EA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392CC2C"))) PPC_WEAK_FUNC(sub_8392CC2C);
PPC_FUNC_IMPL(__imp__sub_8392CC2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392CC30"))) PPC_WEAK_FUNC(sub_8392CC30);
PPC_FUNC_IMPL(__imp__sub_8392CC30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,50
	ctx.r4.s64 = 50;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x833c9238
	sub_833C9238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392CC40"))) PPC_WEAK_FUNC(sub_8392CC40);
PPC_FUNC_IMPL(__imp__sub_8392CC40) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392cc6c
	if (cr6.eq) goto loc_8392CC6C;
	// bl 0x837a5de0
	ctx.lr = 0x8392CC6C;
	sub_837A5DE0(ctx, base);
loc_8392CC6C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392cc80
	if (cr6.eq) goto loc_8392CC80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b57128
	ctx.lr = 0x8392CC80;
	sub_83B57128(ctx, base);
loc_8392CC80:
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

__attribute__((alias("__imp__sub_8392CC98"))) PPC_WEAK_FUNC(sub_8392CC98);
PPC_FUNC_IMPL(__imp__sub_8392CC98) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392ccc4
	if (cr6.eq) goto loc_8392CCC4;
	// bl 0x837a5de8
	ctx.lr = 0x8392CCC4;
	sub_837A5DE8(ctx, base);
loc_8392CCC4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392ccd8
	if (cr6.eq) goto loc_8392CCD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83b57148
	ctx.lr = 0x8392CCD8;
	sub_83B57148(ctx, base);
loc_8392CCD8:
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

__attribute__((alias("__imp__sub_8392CCF0"))) PPC_WEAK_FUNC(sub_8392CCF0);
PPC_FUNC_IMPL(__imp__sub_8392CCF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x83b57130
	sub_83B57130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392CD00"))) PPC_WEAK_FUNC(sub_8392CD00);
PPC_FUNC_IMPL(__imp__sub_8392CD00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392CD04"))) PPC_WEAK_FUNC(sub_8392CD04);
PPC_FUNC_IMPL(__imp__sub_8392CD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392CD08"))) PPC_WEAK_FUNC(sub_8392CD08);
PPC_FUNC_IMPL(__imp__sub_8392CD08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8392CD10;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,36
	ctx.r30.s64 = 36;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392cd68
	if (cr6.eq) goto loc_8392CD68;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8392CD3C;
	sub_82595150(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392cd5c
	if (cr6.eq) goto loc_8392CD5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392CD5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8392CD5C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8392CD64;
	sub_82595170(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8392CD68:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392cdb0
	if (cr6.eq) goto loc_8392CDB0;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8392CD84;
	sub_82595150(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392cda4
	if (cr6.eq) goto loc_8392CDA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392CDA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8392CDA4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8392CDAC;
	sub_82595170(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_8392CDB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392CDB8"))) PPC_WEAK_FUNC(sub_8392CDB8);
PPC_FUNC_IMPL(__imp__sub_8392CDB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8392CDC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r11,36
	ctx.r11.s64 = 36;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8392ceac
	if (cr6.eq) goto loc_8392CEAC;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x8392CE08;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392ce18
	if (cr6.eq) goto loc_8392CE18;
	// bl 0x837a5d00
	ctx.lr = 0x8392CE14;
	sub_837A5D00(ctx, base);
	// b 0x8392ce1c
	goto loc_8392CE1C;
loc_8392CE18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8392CE1C:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// lbz r9,2(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// lbz r3,1(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stb r30,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r30.u8);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stb r30,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r30.u8);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// stb r30,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r30.u8);
	// bl 0x837b88b8
	ctx.lr = 0x8392CE60;
	sub_837B88B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x8259d6c0
	ctx.lr = 0x8392CE6C;
	sub_8259D6C0(ctx, base);
	// lbz r3,1(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// bl 0x837b88a0
	ctx.lr = 0x8392CE74;
	sub_837B88A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8259d6c0
	ctx.lr = 0x8392CE80;
	sub_8259D6C0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x837a5d28
	ctx.lr = 0x8392CE8C;
	sub_837A5D28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x837a5ea8
	ctx.lr = 0x8392CE98;
	sub_837A5EA8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825d8190
	ctx.lr = 0x8392CEA0;
	sub_825D8190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392CEAC:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8392CEBC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392cecc
	if (cr6.eq) goto loc_8392CECC;
	// bl 0x83b56fc8
	ctx.lr = 0x8392CEC8;
	sub_83B56FC8(ctx, base);
	// b 0x8392ced0
	goto loc_8392CED0;
loc_8392CECC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8392CED0:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83799868
	ctx.lr = 0x8392CEDC;
	sub_83799868(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lbz r3,1(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x837b88a0
	ctx.lr = 0x8392CEEC;
	sub_837B88A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8259d6c0
	ctx.lr = 0x8392CEF8;
	sub_8259D6C0(ctx, base);
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(ctx.r11.u32, 21, xer);
	// blt cr6,0x8392cf24
	if (cr6.lt) goto loc_8392CF24;
	// addi r10,r11,-21
	ctx.r10.s64 = ctx.r11.s64 + -21;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bge cr6,0x8392cf24
	if (!cr6.lt) goto loc_8392CF24;
	// addi r11,r11,-21
	ctx.r11.s64 = ctx.r11.s64 + -21;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-21916
	ctx.r8.s64 = ctx.r10.s64 + -21916;
	// lwzx r30,r9,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_8392CF24:
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r11.u8);
	// bl 0x83b57070
	ctx.lr = 0x8392CF3C;
	sub_83B57070(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83b571f8
	ctx.lr = 0x8392CF48;
	sub_83B571F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x838760e0
	ctx.lr = 0x8392CF50;
	sub_838760E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392CF5C"))) PPC_WEAK_FUNC(sub_8392CF5C);
PPC_FUNC_IMPL(__imp__sub_8392CF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392CF60"))) PPC_WEAK_FUNC(sub_8392CF60);
PPC_FUNC_IMPL(__imp__sub_8392CF60) {
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
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8392CF8C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392cfb0
	if (cr6.eq) goto loc_8392CFB0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8392cdb8
	ctx.lr = 0x8392CF9C;
	sub_8392CDB8(ctx, base);
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
loc_8392CFB0:
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

__attribute__((alias("__imp__sub_8392CFC8"))) PPC_WEAK_FUNC(sub_8392CFC8);
PPC_FUNC_IMPL(__imp__sub_8392CFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// addi r8,r9,25648
	ctx.r8.s64 = ctx.r9.s64 + 25648;
	// stb r6,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r6.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
	// stb r11,41(r3)
	PPC_STORE_U8(ctx.r3.u32 + 41, ctx.r11.u8);
	// stb r11,42(r3)
	PPC_STORE_U8(ctx.r3.u32 + 42, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392D01C"))) PPC_WEAK_FUNC(sub_8392D01C);
PPC_FUNC_IMPL(__imp__sub_8392D01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392D020"))) PPC_WEAK_FUNC(sub_8392D020);
PPC_FUNC_IMPL(__imp__sub_8392D020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8392D028;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392d0d8
	if (!cr6.eq) goto loc_8392D0D8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8392d0d8
	if (cr6.eq) goto loc_8392D0D8;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392d0d8
	if (cr6.eq) goto loc_8392D0D8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392d094
	if (!cr6.eq) goto loc_8392D094;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83815a48
	ctx.lr = 0x8392D06C;
	sub_83815A48(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392d0d8
	if (cr6.eq) goto loc_8392D0D8;
	// bl 0x83815740
	ctx.lr = 0x8392D07C;
	sub_83815740(ctx, base);
	// lbz r11,42(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 42);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392d094
	if (!cr6.eq) goto loc_8392D094;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392D094:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392d0b4
	if (!cr6.eq) goto loc_8392D0B4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82d4b8e0
	ctx.lr = 0x8392D0A8;
	sub_82D4B8E0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392d0d8
	if (cr6.eq) goto loc_8392D0D8;
loc_8392D0B4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x838156d8
	ctx.lr = 0x8392D0BC;
	sub_838156D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392D0D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8392D0D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392D0E4"))) PPC_WEAK_FUNC(sub_8392D0E4);
PPC_FUNC_IMPL(__imp__sub_8392D0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392D0E8"))) PPC_WEAK_FUNC(sub_8392D0E8);
PPC_FUNC_IMPL(__imp__sub_8392D0E8) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392d110
	if (cr6.eq) goto loc_8392D110;
	// bl 0x82d49a78
	ctx.lr = 0x8392D10C;
	sub_82D49A78(ctx, base);
	// b 0x8392d120
	goto loc_8392D120;
loc_8392D110:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392d120
	if (cr6.eq) goto loc_8392D120;
	// bl 0x83815558
	ctx.lr = 0x8392D120;
	sub_83815558(ctx, base);
loc_8392D120:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8392D144"))) PPC_WEAK_FUNC(sub_8392D144);
PPC_FUNC_IMPL(__imp__sub_8392D144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392D148"))) PPC_WEAK_FUNC(sub_8392D148);
PPC_FUNC_IMPL(__imp__sub_8392D148) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392d190
	if (cr6.eq) goto loc_8392D190;
	// lbz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392d190
	if (!cr6.eq) goto loc_8392D190;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x8392D180;
	sub_82D2AEC8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83815740
	ctx.lr = 0x8392D188;
	sub_83815740(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r11.u8);
loc_8392D190:
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

__attribute__((alias("__imp__sub_8392D1A4"))) PPC_WEAK_FUNC(sub_8392D1A4);
PPC_FUNC_IMPL(__imp__sub_8392D1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392D1A8"))) PPC_WEAK_FUNC(sub_8392D1A8);
PPC_FUNC_IMPL(__imp__sub_8392D1A8) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392d1e8
	if (cr6.eq) goto loc_8392D1E8;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x838156d8
	ctx.lr = 0x8392D1D0;
	sub_838156D8(ctx, base);
	// li r5,15
	ctx.r5.s64 = 15;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x8392D1E0;
	sub_82D2AEC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r11.u8);
loc_8392D1E8:
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

__attribute__((alias("__imp__sub_8392D1FC"))) PPC_WEAK_FUNC(sub_8392D1FC);
PPC_FUNC_IMPL(__imp__sub_8392D1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392D200"))) PPC_WEAK_FUNC(sub_8392D200);
PPC_FUNC_IMPL(__imp__sub_8392D200) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392d24c
	if (cr6.eq) goto loc_8392D24C;
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392d24c
	if (!cr6.eq) goto loc_8392D24C;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x8392D238;
	sub_82D2AEC8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x838157a8
	ctx.lr = 0x8392D244;
	sub_838157A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
loc_8392D24C:
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

__attribute__((alias("__imp__sub_8392D260"))) PPC_WEAK_FUNC(sub_8392D260);
PPC_FUNC_IMPL(__imp__sub_8392D260) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392d2ac
	if (cr6.eq) goto loc_8392D2AC;
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392d2ac
	if (cr6.eq) goto loc_8392D2AC;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x8392D298;
	sub_82D2AEC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x838157a8
	ctx.lr = 0x8392D2A4;
	sub_838157A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
loc_8392D2AC:
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

__attribute__((alias("__imp__sub_8392D2C0"))) PPC_WEAK_FUNC(sub_8392D2C0);
PPC_FUNC_IMPL(__imp__sub_8392D2C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392d2f8
	if (cr6.eq) goto loc_8392D2F8;
	// lbz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392d2e8
	if (cr6.eq) goto loc_8392D2E8;
	// b 0x8392d1a8
	sub_8392D1A8(ctx, base);
	return;
loc_8392D2E8:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8392d260
	sub_8392D260(ctx, base);
	return;
loc_8392D2F8:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392d308
	if (cr6.eq) goto loc_8392D308;
	// b 0x8392d200
	sub_8392D200(ctx, base);
	return;
loc_8392D308:
	// b 0x8392d148
	sub_8392D148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392D30C"))) PPC_WEAK_FUNC(sub_8392D30C);
PPC_FUNC_IMPL(__imp__sub_8392D30C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392D310"))) PPC_WEAK_FUNC(sub_8392D310);
PPC_FUNC_IMPL(__imp__sub_8392D310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,11924
	ctx.r10.s64 = ctx.r11.s64 + 11924;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bne cr6,0x8392d330
	if (!cr6.eq) goto loc_8392D330;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8392D330:
	// b 0x82d2bb40
	sub_82D2BB40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392D334"))) PPC_WEAK_FUNC(sub_8392D334);
PPC_FUNC_IMPL(__imp__sub_8392D334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392D338"))) PPC_WEAK_FUNC(sub_8392D338);
PPC_FUNC_IMPL(__imp__sub_8392D338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,11924
	ctx.r10.s64 = ctx.r11.s64 + 11924;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bne cr6,0x8392d358
	if (!cr6.eq) goto loc_8392D358;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8392D358:
	// b 0x82d2bb40
	sub_82D2BB40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392D35C"))) PPC_WEAK_FUNC(sub_8392D35C);
PPC_FUNC_IMPL(__imp__sub_8392D35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392D360"))) PPC_WEAK_FUNC(sub_8392D360);
PPC_FUNC_IMPL(__imp__sub_8392D360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,11924
	ctx.r10.s64 = ctx.r11.s64 + 11924;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bne cr6,0x8392d380
	if (!cr6.eq) goto loc_8392D380;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8392D380:
	// b 0x82d2bb40
	sub_82D2BB40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392D384"))) PPC_WEAK_FUNC(sub_8392D384);
PPC_FUNC_IMPL(__imp__sub_8392D384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392D388"))) PPC_WEAK_FUNC(sub_8392D388);
PPC_FUNC_IMPL(__imp__sub_8392D388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392D390"))) PPC_WEAK_FUNC(sub_8392D390);
PPC_FUNC_IMPL(__imp__sub_8392D390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392D3A0"))) PPC_WEAK_FUNC(sub_8392D3A0);
PPC_FUNC_IMPL(__imp__sub_8392D3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8392D3D8"))) PPC_WEAK_FUNC(sub_8392D3D8);
PPC_FUNC_IMPL(__imp__sub_8392D3D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392D3DC"))) PPC_WEAK_FUNC(sub_8392D3DC);
PPC_FUNC_IMPL(__imp__sub_8392D3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392D3E0"))) PPC_WEAK_FUNC(sub_8392D3E0);
PPC_FUNC_IMPL(__imp__sub_8392D3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11924
	ctx.r9.s64 = ctx.r11.s64 + 11924;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8392D430"))) PPC_WEAK_FUNC(sub_8392D430);
PPC_FUNC_IMPL(__imp__sub_8392D430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392D434"))) PPC_WEAK_FUNC(sub_8392D434);
PPC_FUNC_IMPL(__imp__sub_8392D434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392D438"))) PPC_WEAK_FUNC(sub_8392D438);
PPC_FUNC_IMPL(__imp__sub_8392D438) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bge cr6,0x8392d4b0
	if (!cr6.lt) goto loc_8392D4B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// beq cr6,0x8392d4ac
	if (cr6.eq) goto loc_8392D4AC;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11924
	ctx.r9.s64 = ctx.r11.s64 + 11924;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8392d4ac
	if (cr6.eq) goto loc_8392D4AC;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392d4ac
	if (cr6.eq) goto loc_8392D4AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392D4AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8392D4AC:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8392D4B0:
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

__attribute__((alias("__imp__sub_8392D4C8"))) PPC_WEAK_FUNC(sub_8392D4C8);
PPC_FUNC_IMPL(__imp__sub_8392D4C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8392d438
	sub_8392D438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392D4E8"))) PPC_WEAK_FUNC(sub_8392D4E8);
PPC_FUNC_IMPL(__imp__sub_8392D4E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392D4EC"))) PPC_WEAK_FUNC(sub_8392D4EC);
PPC_FUNC_IMPL(__imp__sub_8392D4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392D4F0"))) PPC_WEAK_FUNC(sub_8392D4F0);
PPC_FUNC_IMPL(__imp__sub_8392D4F0) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392d528
	if (cr6.eq) goto loc_8392D528;
	// lbz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392d524
	if (cr6.eq) goto loc_8392D524;
	// bl 0x8392d1a8
	ctx.lr = 0x8392D520;
	sub_8392D1A8(ctx, base);
	// b 0x8392d528
	goto loc_8392D528;
loc_8392D524:
	// bl 0x8392d260
	ctx.lr = 0x8392D528;
	sub_8392D260(ctx, base);
loc_8392D528:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// beq cr6,0x8392d574
	if (cr6.eq) goto loc_8392D574;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r10,r11,11924
	ctx.r10.s64 = ctx.r11.s64 + 11924;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8392d574
	if (cr6.eq) goto loc_8392D574;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392d574
	if (cr6.eq) goto loc_8392D574;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392D574;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8392D574:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x83815668
	ctx.lr = 0x8392D588;
	sub_83815668(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8392D5A4"))) PPC_WEAK_FUNC(sub_8392D5A4);
PPC_FUNC_IMPL(__imp__sub_8392D5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392D5A8"))) PPC_WEAK_FUNC(sub_8392D5A8);
PPC_FUNC_IMPL(__imp__sub_8392D5A8) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392d5cc
	if (cr6.eq) goto loc_8392D5CC;
	// bl 0x8392d200
	ctx.lr = 0x8392D5CC;
	sub_8392D200(ctx, base);
loc_8392D5CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// beq cr6,0x8392d618
	if (cr6.eq) goto loc_8392D618;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r10,r11,11924
	ctx.r10.s64 = ctx.r11.s64 + 11924;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8392d618
	if (cr6.eq) goto loc_8392D618;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392d618
	if (cr6.eq) goto loc_8392D618;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392D618;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8392D618:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8392D640"))) PPC_WEAK_FUNC(sub_8392D640);
PPC_FUNC_IMPL(__imp__sub_8392D640) {
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
	// bl 0x83911640
	ctx.lr = 0x8392D650;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8392d664
	if (!cr6.gt) goto loc_8392D664;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble cr6,0x8392d668
	if (!cr6.gt) goto loc_8392D668;
loc_8392D664:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8392D668:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392D678"))) PPC_WEAK_FUNC(sub_8392D678);
PPC_FUNC_IMPL(__imp__sub_8392D678) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392D69C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,36
	ctx.r9.s64 = 36;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8392D6B0;
	sub_82595150(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8392D6C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8392D6D0;
	sub_82595170(ctx, base);
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

__attribute__((alias("__imp__sub_8392D6E4"))) PPC_WEAK_FUNC(sub_8392D6E4);
PPC_FUNC_IMPL(__imp__sub_8392D6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392D6E8"))) PPC_WEAK_FUNC(sub_8392D6E8);
PPC_FUNC_IMPL(__imp__sub_8392D6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8392D6F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392d770
	if (!cr6.eq) goto loc_8392D770;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8392D718;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8392D730;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,40(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8392D748;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8392D764;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d200
	ctx.lr = 0x8392D770;
	sub_8392D200(ctx, base);
loc_8392D770:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8392d788
	if (!cr6.eq) goto loc_8392D788;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r11.u8);
loc_8392D788:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392D790"))) PPC_WEAK_FUNC(sub_8392D790);
PPC_FUNC_IMPL(__imp__sub_8392D790) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392d7f8
	if (cr6.eq) goto loc_8392D7F8;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8392d7cc
	if (cr6.eq) goto loc_8392D7CC;
	// bl 0x839283d8
	ctx.lr = 0x8392D7C8;
	sub_839283D8(ctx, base);
	// b 0x8392d7d0
	goto loc_8392D7D0;
loc_8392D7CC:
	// bl 0x839283a0
	ctx.lr = 0x8392D7D0;
	sub_839283A0(ctx, base);
loc_8392D7D0:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392D7F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8392D7F8:
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

__attribute__((alias("__imp__sub_8392D80C"))) PPC_WEAK_FUNC(sub_8392D80C);
PPC_FUNC_IMPL(__imp__sub_8392D80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392D810"))) PPC_WEAK_FUNC(sub_8392D810);
PPC_FUNC_IMPL(__imp__sub_8392D810) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8392da54
	if (cr6.gt) goto loc_8392DA54;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8392d878
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392D878;
	// bdzf 4*cr6+eq,0x8392d89c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392D89C;
	// bdzf 4*cr6+eq,0x8392d920
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392D920;
	// bne cr6,0x8392d9d0
	if (!cr6.eq) goto loc_8392D9D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392D860;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8392da54
	if (cr6.eq) goto loc_8392DA54;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8392da54
	goto loc_8392DA54;
loc_8392D878:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392da54
	if (cr6.eq) goto loc_8392DA54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392D898;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8392da58
	goto loc_8392DA58;
loc_8392D89C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392da54
	if (cr6.eq) goto loc_8392DA54;
	// lbz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392d8e8
	if (!cr6.eq) goto loc_8392D8E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392D8C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8392d8e8
	if (cr6.eq) goto loc_8392D8E8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// b 0x8392da48
	goto loc_8392DA48;
loc_8392D8E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392D8FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8392d914
	if (cr6.eq) goto loc_8392D914;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d438
	ctx.lr = 0x8392D914;
	sub_8392D438(ctx, base);
loc_8392D914:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// b 0x8392da48
	goto loc_8392DA48;
loc_8392D920:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392da54
	if (cr6.eq) goto loc_8392DA54;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r30,r11,11924
	ctx.r30.s64 = ctx.r11.s64 + 11924;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82d2bb40
	ctx.lr = 0x8392D93C;
	sub_82D2BB40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392d964
	if (cr6.eq) goto loc_8392D964;
	// bl 0x83740868
	ctx.lr = 0x8392D94C;
	sub_83740868(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_8392D964:
	// lbz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392d9b8
	if (cr6.eq) goto loc_8392D9B8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8392d988
	if (!cr6.eq) goto loc_8392D988;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8392d98c
	goto loc_8392D98C;
loc_8392D988:
	// bl 0x82d2bb40
	ctx.lr = 0x8392D98C;
	sub_82D2BB40(ctx, base);
loc_8392D98C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392d9b8
	if (cr6.eq) goto loc_8392D9B8;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8392d9b8
	if (cr6.lt) goto loc_8392D9B8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d438
	ctx.lr = 0x8392D9B4;
	sub_8392D438(ctx, base);
	// b 0x8392da54
	goto loc_8392DA54;
loc_8392D9B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392D9CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8392da58
	goto loc_8392DA58;
loc_8392D9D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392da54
	if (cr6.eq) goto loc_8392DA54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392D9F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8392da40
	if (cr6.eq) goto loc_8392DA40;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8392da10
	if (!cr6.eq) goto loc_8392DA10;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8392da1c
	goto loc_8392DA1C;
loc_8392DA10:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r4,r11,-21496
	ctx.r4.s64 = ctx.r11.s64 + -21496;
	// bl 0x82d2bb40
	ctx.lr = 0x8392DA1C;
	sub_82D2BB40(ctx, base);
loc_8392DA1C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392da40
	if (cr6.eq) goto loc_8392DA40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392DA3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8392da58
	goto loc_8392DA58;
loc_8392DA40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
loc_8392DA48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392DA54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8392DA54:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8392DA58:
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

__attribute__((alias("__imp__sub_8392DA70"))) PPC_WEAK_FUNC(sub_8392DA70);
PPC_FUNC_IMPL(__imp__sub_8392DA70) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392dac8
	if (cr6.eq) goto loc_8392DAC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392DAA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8392dac8
	if (cr6.eq) goto loc_8392DAC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d4f0
	ctx.lr = 0x8392DAB4;
	sub_8392D4F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392DAC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8392DAC8:
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

__attribute__((alias("__imp__sub_8392DAE0"))) PPC_WEAK_FUNC(sub_8392DAE0);
PPC_FUNC_IMPL(__imp__sub_8392DAE0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392db48
	if (cr6.eq) goto loc_8392DB48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392DB10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8392db34
	if (!cr6.eq) goto loc_8392DB34;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8392db34
	if (!cr6.eq) goto loc_8392DB34;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d438
	ctx.lr = 0x8392DB34;
	sub_8392D438(ctx, base);
loc_8392DB34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392DB48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8392DB48:
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

__attribute__((alias("__imp__sub_8392DB60"))) PPC_WEAK_FUNC(sub_8392DB60);
PPC_FUNC_IMPL(__imp__sub_8392DB60) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392db98
	if (!cr6.eq) goto loc_8392DB98;
loc_8392DB80:
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
loc_8392DB98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d5a8
	ctx.lr = 0x8392DBA0;
	sub_8392D5A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392db80
	if (cr6.eq) goto loc_8392DB80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392DBC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8392DBD4;
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

__attribute__((alias("__imp__sub_8392DBE8"))) PPC_WEAK_FUNC(sub_8392DBE8);
PPC_FUNC_IMPL(__imp__sub_8392DBE8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8392dc54
	if (cr6.eq) goto loc_8392DC54;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392dc1c
	if (cr6.lt) goto loc_8392DC1C;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_8392DC1C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392DC30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392dc54
	if (cr6.eq) goto loc_8392DC54;
	// bl 0x835d31b0
	ctx.lr = 0x8392DC40;
	sub_835D31B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392dc54
	if (cr6.eq) goto loc_8392DC54;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x8392DC54;
	sub_82D29598(ctx, base);
loc_8392DC54:
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

__attribute__((alias("__imp__sub_8392DC6C"))) PPC_WEAK_FUNC(sub_8392DC6C);
PPC_FUNC_IMPL(__imp__sub_8392DC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392DC70"))) PPC_WEAK_FUNC(sub_8392DC70);
PPC_FUNC_IMPL(__imp__sub_8392DC70) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8392dce4
	if (cr6.eq) goto loc_8392DCE4;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392dca4
	if (cr6.lt) goto loc_8392DCA4;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_8392DCA4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392DCB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392dce4
	if (cr6.eq) goto loc_8392DCE4;
	// bl 0x835d31b0
	ctx.lr = 0x8392DCC8;
	sub_835D31B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392dce4
	if (cr6.eq) goto loc_8392DCE4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x8392DCE4;
	sub_82D291E0(ctx, base);
loc_8392DCE4:
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

__attribute__((alias("__imp__sub_8392DCFC"))) PPC_WEAK_FUNC(sub_8392DCFC);
PPC_FUNC_IMPL(__imp__sub_8392DCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392DD00"))) PPC_WEAK_FUNC(sub_8392DD00);
PPC_FUNC_IMPL(__imp__sub_8392DD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8392DD08;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392dd20
	if (cr6.lt) goto loc_8392DD20;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_8392DD20:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392DD34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392ddb8
	if (cr6.eq) goto loc_8392DDB8;
	// bl 0x82d4bb00
	ctx.lr = 0x8392DD44;
	sub_82D4BB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392dda8
	if (cr6.eq) goto loc_8392DDA8;
	// bl 0x82d4bb60
	ctx.lr = 0x8392DD54;
	sub_82D4BB60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392dda8
	if (cr6.eq) goto loc_8392DDA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d4bc48
	ctx.lr = 0x8392DD68;
	sub_82D4BC48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392ddb8
	if (cr6.eq) goto loc_8392DDB8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d4c720
	ctx.lr = 0x8392DD7C;
	sub_82D4C720(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d4bc48
	ctx.lr = 0x8392DD88;
	sub_82D4BC48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82d328c8
	ctx.lr = 0x8392DD98;
	sub_82D328C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8392DDA0;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392DDA8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8392DDB8;
	sub_82D2AEC8(ctx, base);
loc_8392DDB8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392DDC0"))) PPC_WEAK_FUNC(sub_8392DDC0);
PPC_FUNC_IMPL(__imp__sub_8392DDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8392DDC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392DDEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392defc
	if (cr6.eq) goto loc_8392DEFC;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// beq cr6,0x8392dea0
	if (cr6.eq) goto loc_8392DEA0;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// beq cr6,0x8392de54
	if (cr6.eq) goto loc_8392DE54;
	// bl 0x82d4bb00
	ctx.lr = 0x8392DE0C;
	sub_82D4BB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d4c4e0
	ctx.lr = 0x8392DE1C;
	sub_82D4C4E0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392de30
	if (cr6.lt) goto loc_8392DE30;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8392de34
	goto loc_8392DE34;
loc_8392DE30:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8392DE34:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392DE4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x8392dee8
	goto loc_8392DEE8;
loc_8392DE54:
	// bl 0x82d4bb00
	ctx.lr = 0x8392DE58;
	sub_82D4BB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d4c570
	ctx.lr = 0x8392DE68;
	sub_82D4C570(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392de7c
	if (cr6.lt) goto loc_8392DE7C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8392de80
	goto loc_8392DE80;
loc_8392DE7C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8392DE80:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392DE98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x8392dee8
	goto loc_8392DEE8;
loc_8392DEA0:
	// bl 0x82d4bb00
	ctx.lr = 0x8392DEA4;
	sub_82D4BB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d4c600
	ctx.lr = 0x8392DEB4;
	sub_82D4C600(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392dec8
	if (cr6.lt) goto loc_8392DEC8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8392decc
	goto loc_8392DECC;
loc_8392DEC8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8392DECC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392DEE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
loc_8392DEE8:
	// bl 0x8387e8e0
	ctx.lr = 0x8392DEEC;
	sub_8387E8E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8392DEFC;
	sub_82D2AEC8(ctx, base);
loc_8392DEFC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392DF04"))) PPC_WEAK_FUNC(sub_8392DF04);
PPC_FUNC_IMPL(__imp__sub_8392DF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392DF08"))) PPC_WEAK_FUNC(sub_8392DF08);
PPC_FUNC_IMPL(__imp__sub_8392DF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8392DF10;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// beq cr6,0x8392e198
	if (cr6.eq) goto loc_8392E198;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392df44
	if (cr6.lt) goto loc_8392DF44;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_8392DF44:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392DF58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392e198
	if (cr6.eq) goto loc_8392E198;
	// bl 0x82d4bb00
	ctx.lr = 0x8392DF68;
	sub_82D4BB00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392e188
	if (cr6.eq) goto loc_8392E188;
	// bl 0x82d4bb60
	ctx.lr = 0x8392DF78;
	sub_82D4BB60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392e188
	if (cr6.eq) goto loc_8392E188;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82d4bb00
	ctx.lr = 0x8392DF8C;
	sub_82D4BB00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d4bc28
	ctx.lr = 0x8392DF94;
	sub_82D4BC28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392dfc4
	if (cr6.eq) goto loc_8392DFC4;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bne cr6,0x8392dfbc
	if (!cr6.eq) goto loc_8392DFBC;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// b 0x8392e060
	goto loc_8392E060;
loc_8392DFBC:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x8392e060
	goto loc_8392E060;
loc_8392DFC4:
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// bgt cr6,0x8392e060
	if (cr6.gt) goto loc_8392E060;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x8392e048
	if (cr6.eq) goto loc_8392E048;
	// bdz 0x8392dfe4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8392DFE4;
	// bdz 0x8392e050
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8392E050;
	// bdz 0x8392dfe4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8392DFE4;
loc_8392DFE4:
	// bl 0x83911640
	ctx.lr = 0x8392DFE8;
	sub_83911640(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// bne cr6,0x8392dffc
	if (!cr6.eq) goto loc_8392DFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8392e008
	goto loc_8392E008;
loc_8392DFFC:
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// bne cr6,0x8392e008
	if (!cr6.eq) goto loc_8392E008;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8392E008:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8392e020
	if (cr6.eq) goto loc_8392E020;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8392e034
	if (cr6.eq) goto loc_8392E034;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8392e198
	if (!cr6.eq) goto loc_8392E198;
loc_8392E020:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// b 0x8392e060
	goto loc_8392E060;
loc_8392E034:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x8392e060
	goto loc_8392E060;
loc_8392E048:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8392e060
	goto loc_8392E060;
loc_8392E050:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r31,r11,6
	ctx.r31.s64 = ctx.r11.s64 + 6;
loc_8392E060:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// beq cr6,0x8392e0fc
	if (cr6.eq) goto loc_8392E0FC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392e0d4
	if (cr6.eq) goto loc_8392E0D4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x8392e088
	if (cr6.eq) goto loc_8392E088;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x8392e0d4
	if (!cr6.eq) goto loc_8392E0D4;
loc_8392E088:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392e0d4
	if (!cr6.eq) goto loc_8392E0D4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d4c470
	ctx.lr = 0x8392E0A4;
	sub_82D4C470(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d4bba0
	ctx.lr = 0x8392E0B4;
	sub_82D4BBA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d328c8
	ctx.lr = 0x8392E0C4;
	sub_82D328C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8392E0CC;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8392E0D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d4bba0
	ctx.lr = 0x8392E0E0;
	sub_82D4BBA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x82d32830
	ctx.lr = 0x8392E0F4;
	sub_82D32830(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8392E0FC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392e160
	if (cr6.eq) goto loc_8392E160;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x8392e114
	if (cr6.eq) goto loc_8392E114;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x8392e160
	if (!cr6.eq) goto loc_8392E160;
loc_8392E114:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392e160
	if (!cr6.eq) goto loc_8392E160;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d4c400
	ctx.lr = 0x8392E130;
	sub_82D4C400(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d4bb78
	ctx.lr = 0x8392E140;
	sub_82D4BB78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d328c8
	ctx.lr = 0x8392E150;
	sub_82D328C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8392E158;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8392E160:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d4bb78
	ctx.lr = 0x8392E16C;
	sub_82D4BB78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x82d32830
	ctx.lr = 0x8392E180;
	sub_82D32830(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8392E188:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8392E198;
	sub_82D2AEC8(ctx, base);
loc_8392E198:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392E1A0"))) PPC_WEAK_FUNC(sub_8392E1A0);
PPC_FUNC_IMPL(__imp__sub_8392E1A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8392E1A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x8392E1DC;
	sub_82D042A8(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8392E1F0;
	sub_8392DC70(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8392e210
	if (cr6.lt) goto loc_8392E210;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8392E210;
	sub_825952B8(ctx, base);
loc_8392E210:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392E218"))) PPC_WEAK_FUNC(sub_8392E218);
PPC_FUNC_IMPL(__imp__sub_8392E218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8392E220;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// beq cr6,0x8392e284
	if (cr6.eq) goto loc_8392E284;
	// cmpwi cr6,r7,5
	cr6.compare<int32_t>(ctx.r7.s32, 5, xer);
	// bne cr6,0x8392e264
	if (!cr6.eq) goto loc_8392E264;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392E260;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8392E264:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392df08
	ctx.lr = 0x8392E284;
	sub_8392DF08(ctx, base);
loc_8392E284:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392E28C"))) PPC_WEAK_FUNC(sub_8392E28C);
PPC_FUNC_IMPL(__imp__sub_8392E28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392E290"))) PPC_WEAK_FUNC(sub_8392E290);
PPC_FUNC_IMPL(__imp__sub_8392E290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8392E298;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r25,r11,100
	ctx.r25.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8392e2c8
	if (!cr6.eq) goto loc_8392E2C8;
	// li r25,0
	ctx.r25.s64 = 0;
loc_8392E2C8:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// beq cr6,0x8392e314
	if (cr6.eq) goto loc_8392E314;
	// cmpwi cr6,r6,5
	cr6.compare<int32_t>(ctx.r6.s32, 5, xer);
	// bne cr6,0x8392e2f4
	if (!cr6.eq) goto loc_8392E2F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392E2F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8392E2F4:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392df08
	ctx.lr = 0x8392E314;
	sub_8392DF08(ctx, base);
loc_8392E314:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392E31C"))) PPC_WEAK_FUNC(sub_8392E31C);
PPC_FUNC_IMPL(__imp__sub_8392E31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392E320"))) PPC_WEAK_FUNC(sub_8392E320);
PPC_FUNC_IMPL(__imp__sub_8392E320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8392E328;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8392E33C;
	sub_831156E8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,52(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392E35C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392e3e0
	if (cr6.eq) goto loc_8392E3E0;
	// addis r3,r30,5
	ctx.r3.s64 = ctx.r30.s64 + 327680;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123a08
	ctx.lr = 0x8392E378;
	sub_83123A08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x837b0c10
	ctx.lr = 0x8392E388;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x8392E39C;
	sub_82D291E0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392e3bc
	if (cr6.lt) goto loc_8392E3BC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8392E3BC;
	sub_825952B8(ctx, base);
loc_8392E3BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8392E3E0;
	sub_82D2AEC8(ctx, base);
loc_8392E3E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392E3E8"))) PPC_WEAK_FUNC(sub_8392E3E8);
PPC_FUNC_IMPL(__imp__sub_8392E3E8) {
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
	// bl 0x83911640
	ctx.lr = 0x8392E3F8;
	sub_83911640(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bgt cr6,0x8392e4e0
	if (cr6.gt) goto loc_8392E4E0;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8392e458
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392E458;
	// bdzf 4*cr6+eq,0x8392e474
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392E474;
	// bdzf 4*cr6+eq,0x8392e490
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392E490;
	// bdzf 4*cr6+eq,0x8392e43c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392E43C;
	// bdzf 4*cr6+eq,0x8392e4ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392E4AC;
	// bne cr6,0x8392e4c8
	if (!cr6.eq) goto loc_8392E4C8;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r11,r11,-20756
	ctx.r11.s64 = ctx.r11.s64 + -20756;
	// addi r3,r11,-336
	ctx.r3.s64 = ctx.r11.s64 + -336;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392E43C:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r11,r11,-20756
	ctx.r11.s64 = ctx.r11.s64 + -20756;
	// addi r3,r11,-280
	ctx.r3.s64 = ctx.r11.s64 + -280;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392E458:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r11,r11,-20756
	ctx.r11.s64 = ctx.r11.s64 + -20756;
	// addi r3,r11,-224
	ctx.r3.s64 = ctx.r11.s64 + -224;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392E474:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r11,r11,-20756
	ctx.r11.s64 = ctx.r11.s64 + -20756;
	// addi r3,r11,-168
	ctx.r3.s64 = ctx.r11.s64 + -168;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392E490:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r11,r11,-20756
	ctx.r11.s64 = ctx.r11.s64 + -20756;
	// addi r3,r11,-112
	ctx.r3.s64 = ctx.r11.s64 + -112;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392E4AC:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r11,r11,-20756
	ctx.r11.s64 = ctx.r11.s64 + -20756;
	// addi r3,r11,-56
	ctx.r3.s64 = ctx.r11.s64 + -56;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392E4C8:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r3,r11,-20756
	ctx.r3.s64 = ctx.r11.s64 + -20756;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392E4E0:
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

__attribute__((alias("__imp__sub_8392E4F4"))) PPC_WEAK_FUNC(sub_8392E4F4);
PPC_FUNC_IMPL(__imp__sub_8392E4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392E4F8"))) PPC_WEAK_FUNC(sub_8392E4F8);
PPC_FUNC_IMPL(__imp__sub_8392E4F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392e514
	if (cr6.eq) goto loc_8392E514;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8392e518
	if (cr6.eq) goto loc_8392E518;
loc_8392E514:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8392E518:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392E520"))) PPC_WEAK_FUNC(sub_8392E520);
PPC_FUNC_IMPL(__imp__sub_8392E520) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392e588
	if (!cr6.eq) goto loc_8392E588;
	// bl 0x8392e3e8
	ctx.lr = 0x8392E544;
	sub_8392E3E8(ctx, base);
	// bl 0x82d12d18
	ctx.lr = 0x8392E548;
	sub_82D12D18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392e56c
	if (!cr6.eq) goto loc_8392E56C;
loc_8392E554:
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
loc_8392E56C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d6e8
	ctx.lr = 0x8392E574;
	sub_8392D6E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392e554
	if (cr6.eq) goto loc_8392E554;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
loc_8392E588:
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

__attribute__((alias("__imp__sub_8392E5A0"))) PPC_WEAK_FUNC(sub_8392E5A0);
PPC_FUNC_IMPL(__imp__sub_8392E5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,12084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12084);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392E5AC"))) PPC_WEAK_FUNC(sub_8392E5AC);
PPC_FUNC_IMPL(__imp__sub_8392E5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392E5B0"))) PPC_WEAK_FUNC(sub_8392E5B0);
PPC_FUNC_IMPL(__imp__sub_8392E5B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lbz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 180);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392E5BC"))) PPC_WEAK_FUNC(sub_8392E5BC);
PPC_FUNC_IMPL(__imp__sub_8392E5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392E5C0"))) PPC_WEAK_FUNC(sub_8392E5C0);
PPC_FUNC_IMPL(__imp__sub_8392E5C0) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,181(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 181);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8392e60c
	if (cr6.eq) goto loc_8392E60C;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-20572
	ctx.r4.s64 = ctx.r11.s64 + -20572;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8392E604;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8392E60C:
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

__attribute__((alias("__imp__sub_8392E620"))) PPC_WEAK_FUNC(sub_8392E620);
PPC_FUNC_IMPL(__imp__sub_8392E620) {
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
	// bl 0x83911640
	ctx.lr = 0x8392E638;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8392e64c
	if (!cr6.gt) goto loc_8392E64C;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8392e650
	if (!cr6.gt) goto loc_8392E650;
loc_8392E64C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8392E650:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392e674
	if (cr6.eq) goto loc_8392E674;
	// li r3,3
	ctx.r3.s64 = 3;
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
loc_8392E674:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d640
	ctx.lr = 0x8392E67C;
	sub_8392D640(ctx, base);
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

__attribute__((alias("__imp__sub_8392E690"))) PPC_WEAK_FUNC(sub_8392E690);
PPC_FUNC_IMPL(__imp__sub_8392E690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8392E698;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8392E6BC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392e6fc
	if (cr6.eq) goto loc_8392E6FC;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x8392E6DC;
	sub_8392CFC8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-20480
	ctx.r9.s64 = ctx.r11.s64 + -20480;
	// stb r10,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392E6FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392E708"))) PPC_WEAK_FUNC(sub_8392E708);
PPC_FUNC_IMPL(__imp__sub_8392E708) {
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
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-20480
	ctx.r10.s64 = ctx.r11.s64 + -20480;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8392e3e8
	ctx.lr = 0x8392E734;
	sub_8392E3E8(ctx, base);
	// bl 0x82d12668
	ctx.lr = 0x8392E738;
	sub_82D12668(ctx, base);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,25648
	ctx.r7.s64 = ctx.r9.s64 + 25648;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8392e75c
	if (cr6.eq) goto loc_8392E75C;
	// bl 0x82416268
	ctx.lr = 0x8392E758;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8392E75C:
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

__attribute__((alias("__imp__sub_8392E774"))) PPC_WEAK_FUNC(sub_8392E774);
PPC_FUNC_IMPL(__imp__sub_8392E774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392E778"))) PPC_WEAK_FUNC(sub_8392E778);
PPC_FUNC_IMPL(__imp__sub_8392E778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8392E780;
	__savegprlr_25(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r28,r10,180
	ctx.r28.s64 = ctx.r10.s64 + 180;
	// addi r30,r11,-20584
	ctx.r30.s64 = ctx.r11.s64 + -20584;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,-116
	ctx.r4.s64 = ctx.r30.s64 + -116;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392E7B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83911640
	ctx.lr = 0x8392E7B8;
	sub_83911640(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// bl 0x831156e8
	ctx.lr = 0x8392E7D4;
	sub_831156E8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r4,56(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// bl 0x8312d698
	ctx.lr = 0x8392E7E4;
	sub_8312D698(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cb28
	ctx.lr = 0x8392E7F8;
	sub_8259CB28(ctx, base);
	// lwz r8,292(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// li r25,2
	ctx.r25.s64 = 2;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x8392e818
	if (cr6.lt) goto loc_8392E818;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x8392E818;
	sub_825952B8(ctx, base);
loc_8392E818:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r27,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r27.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r29,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r29.u32);
	// stb r29,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r29.u8);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// bge cr6,0x8392e844
	if (!cr6.lt) goto loc_8392E844;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_8392E844:
	// lis r4,11
	ctx.r4.s64 = 720896;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,260
	ctx.r4.u64 = ctx.r4.u64 | 260;
	// bl 0x82d042a8
	ctx.lr = 0x8392E854;
	sub_82D042A8(ctx, base);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r4,r30,-92
	ctx.r4.s64 = ctx.r30.s64 + -92;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x8392E870;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8392e884
	if (!cr6.eq) goto loc_8392E884;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8392E884:
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8392E894;
	sub_8392DC70(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392e8b0
	if (cr6.lt) goto loc_8392E8B0;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x8392E8B0;
	sub_825952B8(ctx, base);
loc_8392E8B0:
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// bl 0x83911640
	ctx.lr = 0x8392E8C0;
	sub_83911640(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bgt cr6,0x8392e914
	if (cr6.gt) goto loc_8392E914;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8392e914
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392E914;
	// bdzf 4*cr6+eq,0x8392e900
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392E900;
	// bdzf 4*cr6+eq,0x8392e914
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392E914;
	// bdzf 4*cr6+eq,0x8392e8e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392E8E8;
	// bdzf 4*cr6+eq,0x8392e914
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392E914;
	// bne cr6,0x8392e8e8
	if (!cr6.eq) goto loc_8392E8E8;
loc_8392E8E8:
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392ddc0
	ctx.lr = 0x8392E8FC;
	sub_8392DDC0(ctx, base);
	// b 0x8392e958
	goto loc_8392E958;
loc_8392E900:
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e320
	ctx.lr = 0x8392E910;
	sub_8392E320(ctx, base);
	// b 0x8392e958
	goto loc_8392E958;
loc_8392E914:
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392ddc0
	ctx.lr = 0x8392E928;
	sub_8392DDC0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392E944;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392e958
	if (cr6.eq) goto loc_8392E958;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x8392E958;
	sub_82D2AEC8(ctx, base);
loc_8392E958:
	// cmpwi cr6,r26,5
	cr6.compare<int32_t>(ctx.r26.s32, 5, xer);
	// beq cr6,0x8392e9b4
	if (cr6.eq) goto loc_8392E9B4;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x8392E96C;
	sub_837B0C10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e290
	ctx.lr = 0x8392E98C;
	sub_8392E290(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392e9a8
	if (cr6.lt) goto loc_8392E9A8;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x8392E9A8;
	sub_825952B8(ctx, base);
loc_8392E9A8:
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
loc_8392E9B4:
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(ctx.r26.s32, 4, xer);
	// bne cr6,0x8392ea10
	if (!cr6.eq) goto loc_8392EA10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x8392E9C8;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8392e9dc
	if (!cr6.eq) goto loc_8392E9DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8392E9DC:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dd00
	ctx.lr = 0x8392E9E8;
	sub_8392DD00(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392ea04
	if (cr6.lt) goto loc_8392EA04;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x8392EA04;
	sub_825952B8(ctx, base);
loc_8392EA04:
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r29.u32);
	// stb r29,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r29.u8);
loc_8392EA10:
	// bl 0x831156e8
	ctx.lr = 0x8392EA14;
	sub_831156E8(ctx, base);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b9f8
	ctx.lr = 0x8392EA1C;
	sub_8312B9F8(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392ea38
	if (cr6.lt) goto loc_8392EA38;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x8392EA38;
	sub_825952B8(ctx, base);
loc_8392EA38:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// blt cr6,0x8392ea60
	if (cr6.lt) goto loc_8392EA60;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x8392EA60;
	sub_825952B8(ctx, base);
loc_8392EA60:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392EA68"))) PPC_WEAK_FUNC(sub_8392EA68);
PPC_FUNC_IMPL(__imp__sub_8392EA68) {
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
	// bl 0x83911640
	ctx.lr = 0x8392EA78;
	sub_83911640(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bgt cr6,0x8392eb60
	if (cr6.gt) goto loc_8392EB60;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8392ead8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392EAD8;
	// bdzf 4*cr6+eq,0x8392eaf4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392EAF4;
	// bdzf 4*cr6+eq,0x8392eb10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392EB10;
	// bdzf 4*cr6+eq,0x8392eabc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392EABC;
	// bdzf 4*cr6+eq,0x8392eb2c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8392EB2C;
	// bne cr6,0x8392eb48
	if (!cr6.eq) goto loc_8392EB48;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r11,r11,-19808
	ctx.r11.s64 = ctx.r11.s64 + -19808;
	// addi r3,r11,-264
	ctx.r3.s64 = ctx.r11.s64 + -264;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392EABC:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r11,r11,-19808
	ctx.r11.s64 = ctx.r11.s64 + -19808;
	// addi r3,r11,-220
	ctx.r3.s64 = ctx.r11.s64 + -220;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392EAD8:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r11,r11,-19808
	ctx.r11.s64 = ctx.r11.s64 + -19808;
	// addi r3,r11,-176
	ctx.r3.s64 = ctx.r11.s64 + -176;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392EAF4:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r11,r11,-19808
	ctx.r11.s64 = ctx.r11.s64 + -19808;
	// addi r3,r11,-132
	ctx.r3.s64 = ctx.r11.s64 + -132;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392EB10:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r11,r11,-19808
	ctx.r11.s64 = ctx.r11.s64 + -19808;
	// addi r3,r11,-88
	ctx.r3.s64 = ctx.r11.s64 + -88;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392EB2C:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r11,r11,-19808
	ctx.r11.s64 = ctx.r11.s64 + -19808;
	// addi r3,r11,-44
	ctx.r3.s64 = ctx.r11.s64 + -44;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392EB48:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r3,r11,-19808
	ctx.r3.s64 = ctx.r11.s64 + -19808;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392EB60:
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

__attribute__((alias("__imp__sub_8392EB74"))) PPC_WEAK_FUNC(sub_8392EB74);
PPC_FUNC_IMPL(__imp__sub_8392EB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392EB78"))) PPC_WEAK_FUNC(sub_8392EB78);
PPC_FUNC_IMPL(__imp__sub_8392EB78) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392ebd8
	if (!cr6.eq) goto loc_8392EBD8;
	// bl 0x8392ea68
	ctx.lr = 0x8392EB9C;
	sub_8392EA68(ctx, base);
	// bl 0x82d12d18
	ctx.lr = 0x8392EBA0;
	sub_82D12D18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392ebc4
	if (!cr6.eq) goto loc_8392EBC4;
loc_8392EBAC:
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
loc_8392EBC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d6e8
	ctx.lr = 0x8392EBCC;
	sub_8392D6E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392ebac
	if (cr6.eq) goto loc_8392EBAC;
loc_8392EBD8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392ec18
	if (cr6.eq) goto loc_8392EC18;
	// bl 0x83911640
	ctx.lr = 0x8392EBE8;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8392ec10
	if (!cr6.eq) goto loc_8392EC10;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-19760
	ctx.r4.s64 = ctx.r11.s64 + -19760;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8392EC10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8392EC10:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
loc_8392EC18:
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

__attribute__((alias("__imp__sub_8392EC30"))) PPC_WEAK_FUNC(sub_8392EC30);
PPC_FUNC_IMPL(__imp__sub_8392EC30) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,248(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 248);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392EC38"))) PPC_WEAK_FUNC(sub_8392EC38);
PPC_FUNC_IMPL(__imp__sub_8392EC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,12228(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12228);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392EC44"))) PPC_WEAK_FUNC(sub_8392EC44);
PPC_FUNC_IMPL(__imp__sub_8392EC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392EC48"))) PPC_WEAK_FUNC(sub_8392EC48);
PPC_FUNC_IMPL(__imp__sub_8392EC48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lbz r3,248(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 248);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392EC54"))) PPC_WEAK_FUNC(sub_8392EC54);
PPC_FUNC_IMPL(__imp__sub_8392EC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392EC58"))) PPC_WEAK_FUNC(sub_8392EC58);
PPC_FUNC_IMPL(__imp__sub_8392EC58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,248(r11)
	PPC_STORE_U8(ctx.r11.u32 + 248, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392EC68"))) PPC_WEAK_FUNC(sub_8392EC68);
PPC_FUNC_IMPL(__imp__sub_8392EC68) {
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
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r3,r10,100
	ctx.r3.s64 = ctx.r10.s64 + 100;
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x82d2d580
	ctx.lr = 0x8392EC98;
	sub_82D2D580(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392ed38
	if (cr6.eq) goto loc_8392ED38;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// beq cr6,0x8392ecfc
	if (cr6.eq) goto loc_8392ECFC;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// beq cr6,0x8392ecd4
	if (cr6.eq) goto loc_8392ECD4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// addi r11,r9,-19412
	ctx.r11.s64 = ctx.r9.s64 + -19412;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// b 0x8392ed30
	goto loc_8392ED30;
loc_8392ECD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,-19412
	ctx.r30.s64 = ctx.r10.s64 + -19412;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8392ECF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x8392ed20
	goto loc_8392ED20;
loc_8392ECFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,-19412
	ctx.r30.s64 = ctx.r10.s64 + -19412;
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8392ED1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
loc_8392ED20:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_8392ED30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8392ED38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8392ED38:
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

__attribute__((alias("__imp__sub_8392ED50"))) PPC_WEAK_FUNC(sub_8392ED50);
PPC_FUNC_IMPL(__imp__sub_8392ED50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8392ED58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8392ED7C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392edc4
	if (cr6.eq) goto loc_8392EDC4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x8392ED9C;
	sub_8392CFC8(ctx, base);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-19160
	ctx.r9.s64 = ctx.r10.s64 + -19160;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8392EDC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392EDD0"))) PPC_WEAK_FUNC(sub_8392EDD0);
PPC_FUNC_IMPL(__imp__sub_8392EDD0) {
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
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-19160
	ctx.r10.s64 = ctx.r11.s64 + -19160;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8392ea68
	ctx.lr = 0x8392EDFC;
	sub_8392EA68(ctx, base);
	// bl 0x82d12668
	ctx.lr = 0x8392EE00;
	sub_82D12668(ctx, base);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,25648
	ctx.r7.s64 = ctx.r9.s64 + 25648;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8392ee24
	if (cr6.eq) goto loc_8392EE24;
	// bl 0x82416268
	ctx.lr = 0x8392EE20;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8392EE24:
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

__attribute__((alias("__imp__sub_8392EE3C"))) PPC_WEAK_FUNC(sub_8392EE3C);
PPC_FUNC_IMPL(__imp__sub_8392EE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392EE40"))) PPC_WEAK_FUNC(sub_8392EE40);
PPC_FUNC_IMPL(__imp__sub_8392EE40) {
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
	ctx.lr = 0x8392EE48;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,99
	cr6.compare<uint32_t>(ctx.r5.u32, 99, xer);
	// ble cr6,0x8392ee6c
	if (!cr6.gt) goto loc_8392EE6C;
	// li r26,99
	ctx.r26.s64 = 99;
loc_8392EE6C:
	// bl 0x83911640
	ctx.lr = 0x8392EE70;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8392ef00
	if (!cr6.eq) goto loc_8392EF00;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r11,r11,-19260
	ctx.r11.s64 = ctx.r11.s64 + -19260;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-136
	ctx.r4.s64 = ctx.r11.s64 + -136;
	// beq cr6,0x8392eea8
	if (cr6.eq) goto loc_8392EEA8;
	// addi r4,r11,-116
	ctx.r4.s64 = ctx.r11.s64 + -116;
loc_8392EEA8:
	// bl 0x8259d6c0
	ctx.lr = 0x8392EEAC;
	sub_8259D6C0(ctx, base);
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8392eec0
	if (!cr6.eq) goto loc_8392EEC0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8392EEC0:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x8392EED0;
	sub_8392E1A0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392f304
	if (cr6.lt) goto loc_8392F304;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8392EEF0;
	sub_825952B8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8392EF00:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// cmplwi cr6,r26,10
	cr6.compare<uint32_t>(ctx.r26.u32, 10, xer);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r31,r11,-19260
	ctx.r31.s64 = ctx.r11.s64 + -19260;
	// bge cr6,0x8392f094
	if (!cr6.lt) goto loc_8392F094;
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// bl 0x837b0c10
	ctx.lr = 0x8392EF1C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x837b0c10
	ctx.lr = 0x8392EF28;
	sub_837B0C10(ctx, base);
	// mulli r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 * 28;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8392ef44
	if (cr6.lt) goto loc_8392EF44;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8392EF44:
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r10,100
	ctx.r3.s64 = ctx.r10.s64 + 100;
	// lwz r11,100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392EF60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8392efc4
	if (!cr6.eq) goto loc_8392EFC4;
	// addi r31,r1,200
	ctx.r31.s64 = ctx.r1.s64 + 200;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,2
	ctx.r28.s64 = 2;
loc_8392EF80:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392efa0
	if (cr6.lt) goto loc_8392EFA0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x825952b8
	ctx.lr = 0x8392EFA0;
	sub_825952B8(ctx, base);
loc_8392EFA0:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// bge 0x8392ef80
	if (!cr0.lt) goto loc_8392EF80;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8392EFC4:
	// bl 0x82d4bb00
	ctx.lr = 0x8392EFC8;
	sub_82D4BB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// clrlwi r5,r26,24
	ctx.r5.u64 = ctx.r26.u32 & 0xFF;
	// bl 0x82d4c690
	ctx.lr = 0x8392EFD8;
	sub_82D4C690(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392efec
	if (cr6.lt) goto loc_8392EFEC;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8392eff0
	goto loc_8392EFF0;
loc_8392EFEC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8392EFF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392F008;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x8392F010;
	sub_8387E8E0(ctx, base);
	// bl 0x83911640
	ctx.lr = 0x8392F014;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8392f03c
	if (!cr6.eq) goto loc_8392F03C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f3,14612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14612);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82d2b250
	ctx.lr = 0x8392F03C;
	sub_82D2B250(ctx, base);
loc_8392F03C:
	// addi r31,r1,200
	ctx.r31.s64 = ctx.r1.s64 + 200;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,2
	ctx.r28.s64 = 2;
loc_8392F050:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392f070
	if (cr6.lt) goto loc_8392F070;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x825952b8
	ctx.lr = 0x8392F070;
	sub_825952B8(ctx, base);
loc_8392F070:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// bge 0x8392f050
	if (!cr0.lt) goto loc_8392F050;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8392F094:
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// bl 0x837b0c10
	ctx.lr = 0x8392F09C;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x837b0c10
	ctx.lr = 0x8392F0A8;
	sub_837B0C10(ctx, base);
	// mulli r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 * 28;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8392f0c4
	if (cr6.lt) goto loc_8392F0C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8392F0C4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392F0E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8392f140
	if (!cr6.eq) goto loc_8392F140;
	// addi r31,r1,200
	ctx.r31.s64 = ctx.r1.s64 + 200;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,2
	ctx.r28.s64 = 2;
loc_8392F0FC:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392f11c
	if (cr6.lt) goto loc_8392F11C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// bl 0x825952b8
	ctx.lr = 0x8392F11C;
	sub_825952B8(ctx, base);
loc_8392F11C:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// bge 0x8392f0fc
	if (!cr0.lt) goto loc_8392F0FC;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8392F140:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x8392F14C;
	sub_82D2AEC8(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x8392F158;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// bl 0x837b0c10
	ctx.lr = 0x8392F164;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x837b0c10
	ctx.lr = 0x8392F170;
	sub_837B0C10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// bl 0x837b0c10
	ctx.lr = 0x8392F17C;
	sub_837B0C10(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r9,-13108
	ctx.r9.s64 = -859045888;
	// rlwinm r25,r30,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f30,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lfs f31,14612(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14612);
	ctx.f31.f64 = double(temp.f32);
	// li r24,10
	ctx.r24.s64 = 10;
	// ori r28,r9,52429
	ctx.r28.u64 = ctx.r9.u64 | 52429;
loc_8392F1A4:
	// mulhwu r9,r26,r28
	ctx.r9.u64 = (uint64_t(ctx.r26.u32) * uint64_t(ctx.r28.u32)) >> 32;
	// add r10,r25,r29
	ctx.r10.u64 = ctx.r25.u64 + ctx.r29.u64;
	// rlwinm r11,r9,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r9,r10,28
	ctx.r9.s64 = ctx.r10.s64 * 28;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,20(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// subf r30,r7,r26
	ctx.r30.s64 = ctx.r26.s64 - ctx.r7.s64;
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x8392f1dc
	if (cr6.lt) goto loc_8392F1DC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8392F1DC:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392F1F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392f314
	if (cr6.eq) goto loc_8392F314;
	// bl 0x82d4bb00
	ctx.lr = 0x8392F208;
	sub_82D4BB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// bl 0x82d4c690
	ctx.lr = 0x8392F218;
	sub_82D4C690(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392f22c
	if (cr6.lt) goto loc_8392F22C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8392f230
	goto loc_8392F230;
loc_8392F22C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8392F230:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392F248;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x8392F250;
	sub_8387E8E0(ctx, base);
	// bl 0x83911640
	ctx.lr = 0x8392F254;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8392f274
	if (!cr6.eq) goto loc_8392F274;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d2b250
	ctx.lr = 0x8392F274;
	sub_82D2B250(ctx, base);
loc_8392F274:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// divwu r26,r26,r24
	ctx.r26.u32 = PPCDivide(ctx.r26.u32, ctx.r24.u32);
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x8392f1a4
	if (cr6.lt) goto loc_8392F1A4;
	// addi r31,r1,352
	ctx.r31.s64 = ctx.r1.s64 + 352;
	// li r30,3
	ctx.r30.s64 = 3;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r28,2
	ctx.r28.s64 = 2;
loc_8392F294:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392f2b4
	if (cr6.lt) goto loc_8392F2B4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x825952b8
	ctx.lr = 0x8392F2B4;
	sub_825952B8(ctx, base);
loc_8392F2B4:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// bge 0x8392f294
	if (!cr0.lt) goto loc_8392F294;
	// addi r31,r1,200
	ctx.r31.s64 = ctx.r1.s64 + 200;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8392F2D0:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392f2f0
	if (cr6.lt) goto loc_8392F2F0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x825952b8
	ctx.lr = 0x8392F2F0;
	sub_825952B8(ctx, base);
loc_8392F2F0:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// bge 0x8392f2d0
	if (!cr0.lt) goto loc_8392F2D0;
loc_8392F304:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8392F314:
	// addi r31,r1,352
	ctx.r31.s64 = ctx.r1.s64 + 352;
	// li r30,3
	ctx.r30.s64 = 3;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r28,2
	ctx.r28.s64 = 2;
loc_8392F324:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392f344
	if (cr6.lt) goto loc_8392F344;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// bl 0x825952b8
	ctx.lr = 0x8392F344;
	sub_825952B8(ctx, base);
loc_8392F344:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// bge 0x8392f324
	if (!cr0.lt) goto loc_8392F324;
	// addi r31,r1,200
	ctx.r31.s64 = ctx.r1.s64 + 200;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8392F360:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392f380
	if (cr6.lt) goto loc_8392F380;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x825952b8
	ctx.lr = 0x8392F380;
	sub_825952B8(ctx, base);
loc_8392F380:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// bge 0x8392f360
	if (!cr0.lt) goto loc_8392F360;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392F3A4"))) PPC_WEAK_FUNC(sub_8392F3A4);
PPC_FUNC_IMPL(__imp__sub_8392F3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392F3A8"))) PPC_WEAK_FUNC(sub_8392F3A8);
PPC_FUNC_IMPL(__imp__sub_8392F3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8392F3B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83911640
	ctx.lr = 0x8392F3BC;
	sub_83911640(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// addi r31,r11,-19492
	ctx.r31.s64 = ctx.r11.s64 + -19492;
	// beq cr6,0x8392f484
	if (cr6.eq) goto loc_8392F484;
	// addi r4,r31,-240
	ctx.r4.s64 = ctx.r31.s64 + -240;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x8392F3E4;
	sub_837B0C10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392e290
	ctx.lr = 0x8392F404;
	sub_8392E290(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392f424
	if (cr6.lt) goto loc_8392F424;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x8392F424;
	sub_825952B8(ctx, base);
loc_8392F424:
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// addi r4,r31,-228
	ctx.r4.s64 = ctx.r31.s64 + -228;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r26,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r26.u8);
	// bl 0x837b0c10
	ctx.lr = 0x8392F43C;
	sub_837B0C10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392e290
	ctx.lr = 0x8392F45C;
	sub_8392E290(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8392f478
	if (cr6.lt) goto loc_8392F478;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x8392F478;
	sub_825952B8(ctx, base);
loc_8392F478:
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// stb r26,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r26.u8);
loc_8392F484:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8392f664
	if (cr6.gt) goto loc_8392F664;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8392f54c
	if (cr6.eq) goto loc_8392F54C;
	// bdz 0x8392f4ac
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8392F4AC;
	// bdz 0x8392f54c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8392F54C;
	// bdz 0x8392f664
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8392F664;
	// b 0x8392f5d8
	goto loc_8392F5D8;
loc_8392F4AC:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// bl 0x83911eb8
	ctx.lr = 0x8392F4C4;
	sub_83911EB8(ctx, base);
	// addi r4,r31,-172
	ctx.r4.s64 = ctx.r31.s64 + -172;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x8392F4D0;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8392f4e4
	if (!cr6.eq) goto loc_8392F4E4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8392F4E4:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8392F4F4;
	sub_8392DC70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x8392F4FC;
	sub_8387E8E0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83911eb8
	ctx.lr = 0x8392F508;
	sub_83911EB8(ctx, base);
	// addi r4,r31,-156
	ctx.r4.s64 = ctx.r31.s64 + -156;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x8392F514;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8392f528
	if (!cr6.eq) goto loc_8392F528;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8392F528:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8392F538;
	sub_8392DC70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x8392F540;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8392F548;
	sub_8387E8E0(ctx, base);
	// b 0x8392f68c
	goto loc_8392F68C;
loc_8392F54C:
	// addi r4,r31,-140
	ctx.r4.s64 = ctx.r31.s64 + -140;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392ddc0
	ctx.lr = 0x8392F560;
	sub_8392DDC0(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392ddc0
	ctx.lr = 0x8392F574;
	sub_8392DDC0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392F590;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392f5a4
	if (cr6.eq) goto loc_8392F5A4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x8392F5A4;
	sub_82D2AEC8(ctx, base);
loc_8392F5A4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392F5C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392f68c
	if (cr6.eq) goto loc_8392F68C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x8392F5D4;
	sub_82D2AEC8(ctx, base);
	// b 0x8392f68c
	goto loc_8392F68C;
loc_8392F5D8:
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392ddc0
	ctx.lr = 0x8392F5EC;
	sub_8392DDC0(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392ddc0
	ctx.lr = 0x8392F600;
	sub_8392DDC0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392F61C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392f630
	if (cr6.eq) goto loc_8392F630;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x8392F630;
	sub_82D2AEC8(ctx, base);
loc_8392F630:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392F64C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392f68c
	if (cr6.eq) goto loc_8392F68C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x8392F660;
	sub_82D2AEC8(ctx, base);
	// b 0x8392f68c
	goto loc_8392F68C;
loc_8392F664:
	// addi r4,r31,-212
	ctx.r4.s64 = ctx.r31.s64 + -212;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392ddc0
	ctx.lr = 0x8392F678;
	sub_8392DDC0(ctx, base);
	// addi r4,r31,-192
	ctx.r4.s64 = ctx.r31.s64 + -192;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392ddc0
	ctx.lr = 0x8392F68C;
	sub_8392DDC0(ctx, base);
loc_8392F68C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,248
	ctx.r29.s64 = ctx.r11.s64 + 248;
	// lbz r5,249(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 249);
	// bl 0x8392ee40
	ctx.lr = 0x8392F6A4;
	sub_8392EE40(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r5,2(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392ee40
	ctx.lr = 0x8392F6B4;
	sub_8392EE40(ctx, base);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_8392F6B8:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8392F6BC:
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// bl 0x8392ec68
	ctx.lr = 0x8392F6DC;
	sub_8392EC68(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// blt cr6,0x8392f6bc
	if (cr6.lt) goto loc_8392F6BC;
	// addi r28,r28,5
	ctx.r28.s64 = ctx.r28.s64 + 5;
	// cmpwi cr6,r28,10
	cr6.compare<int32_t>(ctx.r28.s32, 10, xer);
	// blt cr6,0x8392f6b8
	if (cr6.lt) goto loc_8392F6B8;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8392F6FC"))) PPC_WEAK_FUNC(sub_8392F6FC);
PPC_FUNC_IMPL(__imp__sub_8392F6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392F700"))) PPC_WEAK_FUNC(sub_8392F700);
PPC_FUNC_IMPL(__imp__sub_8392F700) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// addi r30,r11,248
	ctx.r30.s64 = ctx.r11.s64 + 248;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8392f7e8
	if (!cr6.eq) goto loc_8392F7E8;
	// lwz r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r5,48(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x8392f79c
	if (cr6.eq) goto loc_8392F79C;
	// bl 0x8392ec68
	ctx.lr = 0x8392F758;
	sub_8392EC68(ctx, base);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r4,r30
	ctx.r11.u64 = ctx.r4.u64 + ctx.r30.u64;
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// bl 0x8392ee40
	ctx.lr = 0x8392F76C;
	sub_8392EE40(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8392f784
	if (!cr6.eq) goto loc_8392F784;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x8392f7e8
	goto loc_8392F7E8;
loc_8392F784:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// b 0x8392f7e8
	goto loc_8392F7E8;
loc_8392F79C:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8392f7e8
	if (!cr6.eq) goto loc_8392F7E8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8392f7e8
	if (!cr6.eq) goto loc_8392F7E8;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392f7e8
	if (cr6.eq) goto loc_8392F7E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r4,r10,-19472
	ctx.r4.s64 = ctx.r10.s64 + -19472;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8392F7E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8392F7E8:
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

__attribute__((alias("__imp__sub_8392F800"))) PPC_WEAK_FUNC(sub_8392F800);
PPC_FUNC_IMPL(__imp__sub_8392F800) {
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
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x8392F820;
	sub_8392CFC8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-17856
	ctx.r8.s64 = ctx.r9.s64 + -17856;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stb r11,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r11.u8);
	// stb r11,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r11.u8);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stb r7,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r7.u8);
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

__attribute__((alias("__imp__sub_8392F874"))) PPC_WEAK_FUNC(sub_8392F874);
PPC_FUNC_IMPL(__imp__sub_8392F874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392F878"))) PPC_WEAK_FUNC(sub_8392F878);
PPC_FUNC_IMPL(__imp__sub_8392F878) {
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
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8392F8AC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392f8c4
	if (cr6.eq) goto loc_8392F8C4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8392f800
	ctx.lr = 0x8392F8C0;
	sub_8392F800(ctx, base);
	// b 0x8392f8c8
	goto loc_8392F8C8;
loc_8392F8C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8392F8C8:
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

__attribute__((alias("__imp__sub_8392F8E0"))) PPC_WEAK_FUNC(sub_8392F8E0);
PPC_FUNC_IMPL(__imp__sub_8392F8E0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392f95c
	if (!cr6.eq) goto loc_8392F95C;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,12376(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12376);
	// bl 0x82d12d18
	ctx.lr = 0x8392F910;
	sub_82D12D18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8392f924
	if (!cr6.eq) goto loc_8392F924;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8392f960
	goto loc_8392F960;
loc_8392F924:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d6e8
	ctx.lr = 0x8392F92C;
	sub_8392D6E8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r10,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r10.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8392f954
	if (cr6.eq) goto loc_8392F954;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x8392F954;
	sub_82D2AEC8(ctx, base);
loc_8392F954:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8392f960
	goto loc_8392F960;
loc_8392F95C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8392F960:
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

__attribute__((alias("__imp__sub_8392F978"))) PPC_WEAK_FUNC(sub_8392F978);
PPC_FUNC_IMPL(__imp__sub_8392F978) {
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
	// bl 0x830ff290
	ctx.lr = 0x8392F988;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8392F98C;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-15
	ctx.r11.s64 = ctx.r3.s64 + -15;
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392F9A8"))) PPC_WEAK_FUNC(sub_8392F9A8);
PPC_FUNC_IMPL(__imp__sub_8392F9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,12372(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12372);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8392F9B4"))) PPC_WEAK_FUNC(sub_8392F9B4);
PPC_FUNC_IMPL(__imp__sub_8392F9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8392F9B8"))) PPC_WEAK_FUNC(sub_8392F9B8);
PPC_FUNC_IMPL(__imp__sub_8392F9B8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x825832e0
	ctx.lr = 0x8392F9CC;
	sub_825832E0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bgt cr6,0x8392fc04
	if (cr6.gt) goto loc_8392FC04;
	// lis r12,-31853
	ctx.r12.s64 = -2087518208;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-1552
	ctx.r12.s64 = ctx.r12.s64 + -1552;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8392FA3C;
	case 1:
		goto loc_8392FB74;
	case 2:
		goto loc_8392FA54;
	case 3:
		goto loc_8392FA6C;
	case 4:
		goto loc_8392FA84;
	case 5:
		goto loc_8392FB2C;
	case 6:
		goto loc_8392FA9C;
	case 7:
		goto loc_8392FAB4;
	case 8:
		goto loc_8392FACC;
	case 9:
		goto loc_8392FAE4;
	case 10:
		goto loc_8392FAFC;
	case 11:
		goto loc_8392FB14;
	case 12:
		goto loc_8392FB44;
	case 13:
		goto loc_8392FB5C;
	case 14:
		goto loc_8392FB8C;
	case 15:
		goto loc_8392FBA4;
	case 16:
		goto loc_8392FBBC;
	case 17:
		goto loc_8392FBD4;
	case 18:
		goto loc_8392FBEC;
	default:
		return;
	}
	// lwz r28,-1476(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1476);
	// lwz r28,-1164(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1164);
	// lwz r28,-1452(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1452);
	// lwz r28,-1428(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1428);
	// lwz r28,-1404(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1404);
	// lwz r28,-1236(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1236);
	// lwz r28,-1380(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1380);
	// lwz r28,-1356(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1356);
	// lwz r28,-1332(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1332);
	// lwz r28,-1308(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1308);
	// lwz r28,-1284(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1284);
	// lwz r28,-1260(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1260);
	// lwz r28,-1212(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1212);
	// lwz r28,-1188(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1188);
	// lwz r28,-1140(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1140);
	// lwz r28,-1116(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1116);
	// lwz r28,-1092(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1092);
	// lwz r28,-1068(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1068);
	// lwz r28,-1044(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1044);
loc_8392FA3C:
	// lis r3,23
	ctx.r3.s64 = 1507328;
	// ori r3,r3,387
	ctx.r3.u64 = ctx.r3.u64 | 387;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392FA54:
	// lis r3,23
	ctx.r3.s64 = 1507328;
	// ori r3,r3,440
	ctx.r3.u64 = ctx.r3.u64 | 440;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392FA6C:
	// lis r3,23
	ctx.r3.s64 = 1507328;
	// ori r3,r3,397
	ctx.r3.u64 = ctx.r3.u64 | 397;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392FA84:
	// lis r3,23
	ctx.r3.s64 = 1507328;
	// ori r3,r3,388
	ctx.r3.u64 = ctx.r3.u64 | 388;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392FA9C:
	// lis r3,23
	ctx.r3.s64 = 1507328;
	// ori r3,r3,395
	ctx.r3.u64 = ctx.r3.u64 | 395;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392FAB4:
	// lis r3,23
	ctx.r3.s64 = 1507328;
	// ori r3,r3,398
	ctx.r3.u64 = ctx.r3.u64 | 398;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392FACC:
	// lis r3,23
	ctx.r3.s64 = 1507328;
	// ori r3,r3,390
	ctx.r3.u64 = ctx.r3.u64 | 390;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392FAE4:
	// lis r3,23
	ctx.r3.s64 = 1507328;
	// ori r3,r3,402
	ctx.r3.u64 = ctx.r3.u64 | 402;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392FAFC:
	// lis r3,23
	ctx.r3.s64 = 1507328;
	// ori r3,r3,389
	ctx.r3.u64 = ctx.r3.u64 | 389;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392FB14:
	// lis r3,23
	ctx.r3.s64 = 1507328;
	// ori r3,r3,386
	ctx.r3.u64 = ctx.r3.u64 | 386;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392FB2C:
	// lis r3,23
	ctx.r3.s64 = 1507328;
	// ori r3,r3,427
	ctx.r3.u64 = ctx.r3.u64 | 427;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392FB44:
	// lis r3,23
	ctx.r3.s64 = 1507328;
	// ori r3,r3,424
	ctx.r3.u64 = ctx.r3.u64 | 424;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392FB5C:
	// lis r3,23
	ctx.r3.s64 = 1507328;
	// ori r3,r3,425
	ctx.r3.u64 = ctx.r3.u64 | 425;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392FB74:
	// lis r3,23
	ctx.r3.s64 = 1507328;
	// ori r3,r3,426
	ctx.r3.u64 = ctx.r3.u64 | 426;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392FB8C:
	// lis r3,23
	ctx.r3.s64 = 1507328;
	// ori r3,r3,428
	ctx.r3.u64 = ctx.r3.u64 | 428;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392FBA4:
	// lis r3,23
	ctx.r3.s64 = 1507328;
	// ori r3,r3,449
	ctx.r3.u64 = ctx.r3.u64 | 449;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392FBBC:
	// lis r3,23
	ctx.r3.s64 = 1507328;
	// ori r3,r3,429
	ctx.r3.u64 = ctx.r3.u64 | 429;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392FBD4:
	// lis r3,23
	ctx.r3.s64 = 1507328;
	// ori r3,r3,430
	ctx.r3.u64 = ctx.r3.u64 | 430;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392FBEC:
	// lis r3,10
	ctx.r3.s64 = 655360;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8392FC04:
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

__attribute__((alias("__imp__sub_8392FC18"))) PPC_WEAK_FUNC(sub_8392FC18);
PPC_FUNC_IMPL(__imp__sub_8392FC18) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392FC3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31768
	ctx.r9.s64 = -2081947648;
	// lwz r3,12376(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12376);
	// bl 0x82d12668
	ctx.lr = 0x8392FC48;
	sub_82D12668(ctx, base);
	// li r8,36
	ctx.r8.s64 = 36;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8392FC5C;
	sub_82595150(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8392FC74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8392FC7C;
	sub_82595170(ctx, base);
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

__attribute__((alias("__imp__sub_8392FC90"))) PPC_WEAK_FUNC(sub_8392FC90);
PPC_FUNC_IMPL(__imp__sub_8392FC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8392FC98;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,432(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f8200
	ctx.lr = 0x8392FCC0;
	sub_831F8200(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,12496(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12496);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// blt cr6,0x8392fd04
	if (cr6.lt) goto loc_8392FD04;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8392FD04:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82a181b8
	ctx.lr = 0x8392FD18;
	sub_82A181B8(ctx, base);
	// bl 0x82a2f3b0
	ctx.lr = 0x8392FD1C;
	sub_82A2F3B0(ctx, base);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f11,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fdivs f31,f9,f8
	ctx.f31.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fcmpu cr6,f11,f31
	cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// beq cr6,0x8392fe2c
	if (cr6.eq) goto loc_8392FE2C;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stfs f31,56(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r30,r11,-17992
	ctx.r30.s64 = ctx.r11.s64 + -17992;
	// lfs f30,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x8392fd9c
	if (!cr6.gt) goto loc_8392FD9C;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8392fd9c
	if (!cr6.eq) goto loc_8392FD9C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392FD90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r9.u8);
	// b 0x8392fda4
	goto loc_8392FDA4;
loc_8392FD9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
loc_8392FDA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// lfs f29,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// ble cr6,0x8392fdbc
	if (!cr6.gt) goto loc_8392FDBC;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x8392fdc8
	goto loc_8392FDC8;
loc_8392FDBC:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bge cr6,0x8392fdc8
	if (!cr6.lt) goto loc_8392FDC8;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
loc_8392FDC8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815d38
	ctx.lr = 0x8392FDD4;
	sub_83815D38(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x83815b68
	ctx.lr = 0x8392FDE0;
	sub_83815B68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815b48
	ctx.lr = 0x8392FDF0;
	sub_83815B48(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815be8
	ctx.lr = 0x8392FE04;
	sub_83815BE8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815bd8
	ctx.lr = 0x8392FE14;
	sub_83815BD8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x838153c8
	ctx.lr = 0x8392FE24;
	sub_838153C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815cb8
	ctx.lr = 0x8392FE2C;
	sub_83815CB8(ctx, base);
loc_8392FE2C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_8392FE40"))) PPC_WEAK_FUNC(sub_8392FE40);
PPC_FUNC_IMPL(__imp__sub_8392FE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8392FE48;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r28,432(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x839301f8
	if (cr6.eq) goto loc_839301F8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831f8200
	ctx.lr = 0x8392FE74;
	sub_831F8200(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8392FE80;
	sub_82A181B8(ctx, base);
	// bl 0x82a2f370
	ctx.lr = 0x8392FE84;
	sub_82A2F370(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r27,-1
	ctx.r27.s64 = -1;
	// subfc r11,r3,r11
	xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// subfze r10,r27
	temp.u8 = ~ctx.r27.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r27.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stb r10,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r10.u8);
	// addi r30,r11,-18380
	ctx.r30.s64 = ctx.r11.s64 + -18380;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-276
	ctx.r4.s64 = ctx.r30.s64 + -276;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x8392FEB4;
	sub_82D2E228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392ff38
	if (cr6.eq) goto loc_8392FF38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-256
	ctx.r4.s64 = ctx.r30.s64 + -256;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392FED8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r30,-240
	ctx.r4.s64 = ctx.r30.s64 + -240;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8392FEF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r30,-220
	ctx.r4.s64 = ctx.r30.s64 + -220;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x8392FF00;
	sub_837B0C10(ctx, base);
	// addi r4,r29,100
	ctx.r4.s64 = ctx.r29.s64 + 100;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x8392FF14;
	sub_8392E1A0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8392FF1C;
	sub_8387E8E0(ctx, base);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r30,-208
	ctx.r4.s64 = ctx.r30.s64 + -208;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8392FF38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8392FF38:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8392FF40;
	sub_82A181B8(ctx, base);
	// bl 0x82a2f390
	ctx.lr = 0x8392FF44;
	sub_82A2F390(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// subfc r11,r3,r11
	xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r3,r10,100
	ctx.r3.s64 = ctx.r10.s64 + 100;
	// subfze r10,r27
	temp.u8 = ~ctx.r27.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r27.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r30,-196
	ctx.r4.s64 = ctx.r30.s64 + -196;
	// stb r10,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r10.u8);
	// bl 0x82d2e228
	ctx.lr = 0x8392FF68;
	sub_82D2E228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8392ffec
	if (cr6.eq) goto loc_8392FFEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-176
	ctx.r4.s64 = ctx.r30.s64 + -176;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8392FF8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r30,-160
	ctx.r4.s64 = ctx.r30.s64 + -160;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8392FFA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r30,-140
	ctx.r4.s64 = ctx.r30.s64 + -140;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x8392FFB4;
	sub_837B0C10(ctx, base);
	// addi r4,r29,100
	ctx.r4.s64 = ctx.r29.s64 + 100;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x8392FFC8;
	sub_8392E1A0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8392FFD0;
	sub_8387E8E0(ctx, base);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r30,-128
	ctx.r4.s64 = ctx.r30.s64 + -128;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8392FFEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8392FFEC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8392FFF4;
	sub_82A181B8(ctx, base);
	// bl 0x82a2f3b0
	ctx.lr = 0x8392FFF8;
	sub_82A2F3B0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subfc r11,r3,r11
	xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r3,r10,100
	ctx.r3.s64 = ctx.r10.s64 + 100;
	// subfze r10,r27
	temp.u8 = ~ctx.r27.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r27.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r30,-116
	ctx.r4.s64 = ctx.r30.s64 + -116;
	// stb r10,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r10.u8);
	// bl 0x82d2e228
	ctx.lr = 0x8393001C;
	sub_82D2E228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839300a0
	if (cr6.eq) goto loc_839300A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-96
	ctx.r4.s64 = ctx.r30.s64 + -96;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83930040;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r30,-80
	ctx.r4.s64 = ctx.r30.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8393005C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x83930068;
	sub_837B0C10(ctx, base);
	// addi r4,r29,100
	ctx.r4.s64 = ctx.r29.s64 + 100;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x8393007C;
	sub_8392E1A0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83930084;
	sub_8387E8E0(ctx, base);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x839300A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839300A0:
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815d38
	ctx.lr = 0x839300AC;
	sub_83815D38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x839300C0;
	sub_83815B68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815b68
	ctx.lr = 0x839300D0;
	sub_83815B68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815b48
	ctx.lr = 0x839300E0;
	sub_83815B48(ctx, base);
	// clrldi r10,r25,32
	ctx.r10.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x83815be8
	ctx.lr = 0x83930104;
	sub_83815BE8(ctx, base);
	// clrldi r9,r28,32
	ctx.r9.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// frsp f30,f11
	ctx.f30.f64 = double(float(ctx.f11.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83815be8
	ctx.lr = 0x83930128;
	sub_83815BE8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815bd8
	ctx.lr = 0x83930138;
	sub_83815BD8(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,48(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// bl 0x838153c8
	ctx.lr = 0x83930148;
	sub_838153C8(ctx, base);
	// clrldi r7,r26,32
	ctx.r7.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// frsp f1,f9
	ctx.f1.f64 = double(float(ctx.f9.f64));
	// bl 0x83815be8
	ctx.lr = 0x83930168;
	sub_83815BE8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815be8
	ctx.lr = 0x83930178;
	sub_83815BE8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815bd8
	ctx.lr = 0x83930188;
	sub_83815BD8(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,48(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// bl 0x838153c8
	ctx.lr = 0x83930198;
	sub_838153C8(ctx, base);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83815d38
	ctx.lr = 0x839301A4;
	sub_83815D38(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x839301B0;
	sub_83815B68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83815b48
	ctx.lr = 0x839301BC;
	sub_83815B48(ctx, base);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,48(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// bl 0x838153c8
	ctx.lr = 0x839301CC;
	sub_838153C8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83815cb8
	ctx.lr = 0x839301D4;
	sub_83815CB8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815cb8
	ctx.lr = 0x839301DC;
	sub_83815CB8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839301F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839301F8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83930208"))) PPC_WEAK_FUNC(sub_83930208);
PPC_FUNC_IMPL(__imp__sub_83930208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83930210;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,432(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8200
	ctx.lr = 0x83930238;
	sub_831F8200(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a181b8
	ctx.lr = 0x83930244;
	sub_82A181B8(ctx, base);
	// bl 0x82a2f3b0
	ctx.lr = 0x83930248;
	sub_82A2F3B0(ctx, base);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// bl 0x82a181b8
	ctx.lr = 0x83930264;
	sub_82A181B8(ctx, base);
	// bl 0x82a2f390
	ctx.lr = 0x83930268;
	sub_82A2F390(ctx, base);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f29,f11
	ctx.f29.f64 = double(float(ctx.f11.f64));
	// bl 0x82a181b8
	ctx.lr = 0x83930284;
	sub_82A181B8(ctx, base);
	// bl 0x82a2f370
	ctx.lr = 0x83930288;
	sub_82A2F370(ctx, base);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r31,r11,-18052
	ctx.r31.s64 = ctx.r11.s64 + -18052;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f0,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// frsp f31,f9
	ctx.f31.f64 = double(float(ctx.f9.f64));
	// fcmpu cr6,f30,f0
	cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393047c
	if (!cr6.eq) goto loc_8393047C;
	// addi r4,r31,-316
	ctx.r4.s64 = ctx.r31.s64 + -316;
	// bl 0x82d2e228
	ctx.lr = 0x839302C4;
	sub_82D2E228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83930348
	if (cr6.eq) goto loc_83930348;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-296
	ctx.r4.s64 = ctx.r31.s64 + -296;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839302EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,-958
	ctx.r4.s64 = ctx.r31.s64 + -958;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x839302F8;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-276
	ctx.r4.s64 = ctx.r31.s64 + -276;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x83930304;
	sub_837B0C10(ctx, base);
	// addi r4,r29,100
	ctx.r4.s64 = ctx.r29.s64 + 100;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83930318;
	sub_8392DC70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83930320;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83930328;
	sub_8387E8E0(ctx, base);
	// stb r27,45(r30)
	PPC_STORE_U8(ctx.r30.u32 + 45, ctx.r27.u8);
	// addi r4,r31,-264
	ctx.r4.s64 = ctx.r31.s64 + -264;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83930348;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83930348:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r31,-252
	ctx.r4.s64 = ctx.r31.s64 + -252;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x83930358;
	sub_82D2E228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839303d8
	if (cr6.eq) goto loc_839303D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-232
	ctx.r4.s64 = ctx.r31.s64 + -232;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393037C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,-957
	ctx.r4.s64 = ctx.r31.s64 + -957;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x83930388;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-212
	ctx.r4.s64 = ctx.r31.s64 + -212;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83930394;
	sub_837B0C10(ctx, base);
	// addi r4,r29,100
	ctx.r4.s64 = ctx.r29.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x839303A8;
	sub_8392DC70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x839303B0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x839303B8;
	sub_8387E8E0(ctx, base);
	// stb r27,46(r30)
	PPC_STORE_U8(ctx.r30.u32 + 46, ctx.r27.u8);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,-200
	ctx.r4.s64 = ctx.r31.s64 + -200;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839303D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839303D8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r31,-188
	ctx.r4.s64 = ctx.r31.s64 + -188;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x839303E8;
	sub_82D2E228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393063c
	if (cr6.eq) goto loc_8393063C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-168
	ctx.r4.s64 = ctx.r31.s64 + -168;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393040C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,-906
	ctx.r4.s64 = ctx.r31.s64 + -906;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x83930418;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83930424;
	sub_837B0C10(ctx, base);
	// addi r4,r29,100
	ctx.r4.s64 = ctx.r29.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83930438;
	sub_8392DC70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83930440;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83930448;
	sub_8387E8E0(ctx, base);
	// stb r27,47(r30)
	PPC_STORE_U8(ctx.r30.u32 + 47, ctx.r27.u8);
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83930468;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8393047C:
	// addi r4,r31,-124
	ctx.r4.s64 = ctx.r31.s64 + -124;
	// bl 0x82d2e228
	ctx.lr = 0x83930484;
	sub_82D2E228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393050c
	if (cr6.eq) goto loc_8393050C;
	// clrldi r11,r26,32
	ctx.r11.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x83930500
	if (cr6.lt) goto loc_83930500;
	// lbz r11,45(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 45);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83930500
	if (!cr6.eq) goto loc_83930500;
	// stb r28,45(r30)
	PPC_STORE_U8(ctx.r30.u32 + 45, ctx.r28.u8);
	// addi r3,r31,-104
	ctx.r3.s64 = ctx.r31.s64 + -104;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eab70
	ctx.lr = 0x839304E0;
	sub_830EAB70(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839304FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8393050c
	goto loc_8393050C;
loc_83930500:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8393050c
	if (!cr6.lt) goto loc_8393050C;
	// stb r27,45(r30)
	PPC_STORE_U8(ctx.r30.u32 + 45, ctx.r27.u8);
loc_8393050C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x8393051C;
	sub_82D2E228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393059c
	if (cr6.eq) goto loc_8393059C;
	// clrldi r11,r26,32
	ctx.r11.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x83930590
	if (cr6.lt) goto loc_83930590;
	// lbz r11,46(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 46);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83930590
	if (!cr6.eq) goto loc_83930590;
	// stb r28,46(r30)
	PPC_STORE_U8(ctx.r30.u32 + 46, ctx.r28.u8);
	// addi r3,r31,-56
	ctx.r3.s64 = ctx.r31.s64 + -56;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eab70
	ctx.lr = 0x83930570;
	sub_830EAB70(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393058C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8393059c
	goto loc_8393059C;
loc_83930590:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x8393059c
	if (!cr6.lt) goto loc_8393059C;
	// stb r27,46(r30)
	PPC_STORE_U8(ctx.r30.u32 + 46, ctx.r27.u8);
loc_8393059C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x839305AC;
	sub_82D2E228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8393063c
	if (cr6.eq) goto loc_8393063C;
	// clrldi r11,r26,32
	ctx.r11.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x83930630
	if (cr6.lt) goto loc_83930630;
	// lbz r11,47(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 47);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83930630
	if (!cr6.eq) goto loc_83930630;
	// stb r28,47(r30)
	PPC_STORE_U8(ctx.r30.u32 + 47, ctx.r28.u8);
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eab70
	ctx.lr = 0x83930600;
	sub_830EAB70(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393061C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83930630:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x8393063c
	if (!cr6.lt) goto loc_8393063C;
	// stb r27,47(r30)
	PPC_STORE_U8(ctx.r30.u32 + 47, ctx.r27.u8);
loc_8393063C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83930650"))) PPC_WEAK_FUNC(sub_83930650);
PPC_FUNC_IMPL(__imp__sub_83930650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83930658;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x831f8200
	ctx.lr = 0x83930670;
	sub_831F8200(ctx, base);
	// lwz r10,52(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// beq cr6,0x839307e0
	if (cr6.eq) goto loc_839307E0;
	// lis r10,-13108
	ctx.r10.s64 = -859045888;
	// stw r3,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r3.u32);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r26,49
	ctx.r26.s64 = 49;
	// ori r27,r10,52429
	ctx.r27.u64 = ctx.r10.u64 | 52429;
	// li r25,10
	ctx.r25.s64 = 10;
	// addi r29,r11,-18012
	ctx.r29.s64 = ctx.r11.s64 + -18012;
loc_839306B0:
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x839306C0;
	sub_8259CC28(ctx, base);
	// extsb r30,r26
	ctx.r30.s64 = ctx.r26.s8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b142a0
	ctx.lr = 0x839306D0;
	sub_82B142A0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x839306e4
	if (!cr6.lt) goto loc_839306E4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_839306E4:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839306FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x8393070C;
	sub_8259CC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b142a0
	ctx.lr = 0x83930718;
	sub_82B142A0(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x8393072c
	if (!cr6.lt) goto loc_8393072C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_8393072C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x83930738;
	sub_82D2E228(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839307b0
	if (cr6.eq) goto loc_839307B0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x83930754;
	sub_8259CC28(ctx, base);
	// mulhwu r11,r31,r27
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r27.u32)) >> 32;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r9,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r9.s64;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// bl 0x82b142a0
	ctx.lr = 0x8393077C;
	sub_82B142A0(ctx, base);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83930790
	if (!cr6.lt) goto loc_83930790;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_83930790:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839307A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// divwu. r31,r31,r25
	ctx.r31.u32 = PPCDivide(ctx.r31.u32, ctx.r25.u32);
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x839307c0
	if (cr0.eq) goto loc_839307C0;
loc_839307B0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r11,r26,-48
	ctx.r11.s64 = ctx.r26.s64 + -48;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// ble cr6,0x839306b0
	if (!cr6.gt) goto loc_839306B0;
loc_839307C0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839307e0
	if (cr6.lt) goto loc_839307E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839307E0;
	sub_825952B8(ctx, base);
loc_839307E0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839307E8"))) PPC_WEAK_FUNC(sub_839307E8);
PPC_FUNC_IMPL(__imp__sub_839307E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839307F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// bl 0x8392fe40
	ctx.lr = 0x83930810;
	sub_8392FE40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83930650
	ctx.lr = 0x83930818;
	sub_83930650(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83930208
	ctx.lr = 0x83930820;
	sub_83930208(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r9,-18664
	ctx.r30.s64 = ctx.r9.s64 + -18664;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83930844;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83930860;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x83930870;
	sub_82D2AEC8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x83930894;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839308a8
	if (!cr6.eq) goto loc_839308A8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_839308A8:
	// lis r6,23
	ctx.r6.s64 = 1507328;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ori r6,r6,407
	ctx.r6.u64 = ctx.r6.u64 | 407;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x839308BC;
	sub_8392DBE8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839308dc
	if (cr6.lt) goto loc_839308DC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839308DC;
	sub_825952B8(ctx, base);
loc_839308DC:
	// stb r29,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r29.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839308E8"))) PPC_WEAK_FUNC(sub_839308E8);
PPC_FUNC_IMPL(__imp__sub_839308E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839308F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82a18a88
	ctx.lr = 0x83930910;
	sub_82A18A88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a18eb8
	ctx.lr = 0x83930918;
	sub_82A18EB8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839309f0
	if (cr6.eq) goto loc_839309F0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832e0
	ctx.lr = 0x8393092C;
	sub_825832E0(ctx, base);
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// beq cr6,0x839309f0
	if (cr6.eq) goto loc_839309F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-24636
	ctx.r10.s64 = ctx.r11.s64 + -24636;
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// bl 0x825bb510
	ctx.lr = 0x8393095C;
	sub_825BB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82a19260
	ctx.lr = 0x83930968;
	sub_82A19260(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83930980
	if (cr6.eq) goto loc_83930980;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825a8ca0
	ctx.lr = 0x8393097C;
	sub_825A8CA0(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
loc_83930980:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r29,r11,-17964
	ctx.r29.s64 = ctx.r11.s64 + -17964;
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// bl 0x837b0c10
	ctx.lr = 0x83930994;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839309a4
	if (cr6.eq) goto loc_839309A4;
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
loc_839309A4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392f9b8
	ctx.lr = 0x839309B0;
	sub_8392F9B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x839309C4;
	sub_8392DBE8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x839309CC;
	sub_8387E8E0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839309E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a8d40
	ctx.lr = 0x839309F0;
	sub_825A8D40(ctx, base);
loc_839309F0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839309F8"))) PPC_WEAK_FUNC(sub_839309F8);
PPC_FUNC_IMPL(__imp__sub_839309F8) {
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
	// bl 0x83930650
	ctx.lr = 0x83930A10;
	sub_83930650(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392fc90
	ctx.lr = 0x83930A18;
	sub_8392FC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839308e8
	ctx.lr = 0x83930A20;
	sub_839308E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83930208
	ctx.lr = 0x83930A28;
	sub_83930208(ctx, base);
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

__attribute__((alias("__imp__sub_83930A3C"))) PPC_WEAK_FUNC(sub_83930A3C);
PPC_FUNC_IMPL(__imp__sub_83930A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83930A40"))) PPC_WEAK_FUNC(sub_83930A40);
PPC_FUNC_IMPL(__imp__sub_83930A40) {
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
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x83930A60;
	sub_8392CFC8(ctx, base);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r9,-16688
	ctx.r8.s64 = ctx.r9.s64 + -16688;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// std r11,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// stb r10,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r10.u8);
	// stb r11,83(r31)
	PPC_STORE_U8(ctx.r31.u32 + 83, ctx.r11.u8);
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
	// stb r11,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r11.u8);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stb r10,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_83930AC8"))) PPC_WEAK_FUNC(sub_83930AC8);
PPC_FUNC_IMPL(__imp__sub_83930AC8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83930AD0"))) PPC_WEAK_FUNC(sub_83930AD0);
PPC_FUNC_IMPL(__imp__sub_83930AD0) {
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
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83930B04;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83930b1c
	if (cr6.eq) goto loc_83930B1C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83930a40
	ctx.lr = 0x83930B18;
	sub_83930A40(ctx, base);
	// b 0x83930b20
	goto loc_83930B20;
loc_83930B1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83930B20:
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

__attribute__((alias("__imp__sub_83930B38"))) PPC_WEAK_FUNC(sub_83930B38);
PPC_FUNC_IMPL(__imp__sub_83930B38) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83930bc0
	if (!cr6.eq) goto loc_83930BC0;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,12524(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12524);
	// bl 0x82d12d18
	ctx.lr = 0x83930B68;
	sub_82D12D18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83930b7c
	if (!cr6.eq) goto loc_83930B7C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83930bc4
	goto loc_83930BC4;
loc_83930B7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d6e8
	ctx.lr = 0x83930B84;
	sub_8392D6E8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r10.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r10,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r10.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r9,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r9.u8);
	// beq cr6,0x83930bb8
	if (cr6.eq) goto loc_83930BB8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x83930BB8;
	sub_82D2AEC8(ctx, base);
loc_83930BB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83930bc4
	goto loc_83930BC4;
loc_83930BC0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83930BC4:
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

__attribute__((alias("__imp__sub_83930BDC"))) PPC_WEAK_FUNC(sub_83930BDC);
PPC_FUNC_IMPL(__imp__sub_83930BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83930BE0"))) PPC_WEAK_FUNC(sub_83930BE0);
PPC_FUNC_IMPL(__imp__sub_83930BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,12500(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12500);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83930BEC"))) PPC_WEAK_FUNC(sub_83930BEC);
PPC_FUNC_IMPL(__imp__sub_83930BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83930BF0"))) PPC_WEAK_FUNC(sub_83930BF0);
PPC_FUNC_IMPL(__imp__sub_83930BF0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// stb r11,81(r3)
	PPC_STORE_U8(ctx.r3.u32 + 81, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83930C00"))) PPC_WEAK_FUNC(sub_83930C00);
PPC_FUNC_IMPL(__imp__sub_83930C00) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83930C24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31768
	ctx.r9.s64 = -2081947648;
	// lwz r3,12524(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12524);
	// bl 0x82d12668
	ctx.lr = 0x83930C30;
	sub_82D12668(ctx, base);
	// li r8,36
	ctx.r8.s64 = 36;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83930C44;
	sub_82595150(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83930C5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83930C64;
	sub_82595170(ctx, base);
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

__attribute__((alias("__imp__sub_83930C78"))) PPC_WEAK_FUNC(sub_83930C78);
PPC_FUNC_IMPL(__imp__sub_83930C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r3,192(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 192);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83930C8C"))) PPC_WEAK_FUNC(sub_83930C8C);
PPC_FUNC_IMPL(__imp__sub_83930C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83930C90"))) PPC_WEAK_FUNC(sub_83930C90);
PPC_FUNC_IMPL(__imp__sub_83930C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83930C98;
	__savegprlr_22(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// bl 0x82a18220
	ctx.lr = 0x83930CAC;
	sub_82A18220(ctx, base);
	// li r10,10
	ctx.r10.s64 = 10;
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// divwu r7,r3,r10
	ctx.r7.u32 = PPCDivide(ctx.r3.u32, ctx.r10.u32);
	// ori r11,r11,52429
	ctx.r11.u64 = ctx.r11.u64 | 52429;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mulhwu r5,r7,r11
	ctx.r5.u64 = (uint64_t(ctx.r7.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// rlwinm r9,r5,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// stw r31,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r31.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// subf r9,r3,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r3.s64;
	// stw r31,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r31.u32);
	// stw r31,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r31.u32);
	// subf r7,r9,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r9.s64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// divwu r6,r7,r10
	ctx.r6.u32 = PPCDivide(ctx.r7.u32, ctx.r10.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// mulhwu r3,r6,r11
	ctx.r3.u64 = (uint64_t(ctx.r6.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// rlwinm r11,r3,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r9,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subf r7,r11,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r11.s64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// divwu r6,r7,r10
	ctx.r6.u32 = PPCDivide(ctx.r7.u32, ctx.r10.u32);
	// mulhwu r4,r6,r4
	ctx.r4.u64 = (uint64_t(ctx.r6.u32) * uint64_t(ctx.r4.u32)) >> 32;
	// rlwinm r11,r4,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// subf r9,r11,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r11.s64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// divwu r7,r9,r10
	ctx.r7.u32 = PPCDivide(ctx.r9.u32, ctx.r10.u32);
	// mulhwu r6,r7,r5
	ctx.r6.u64 = (uint64_t(ctx.r7.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// rlwinm r11,r6,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// subf r3,r4,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r4.s64;
	// addi r22,r11,-16824
	ctx.r22.s64 = ctx.r11.s64 + -16824;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r24,r10,12504
	ctx.r24.s64 = ctx.r10.s64 + 12504;
loc_83930D94:
	// lwzx r28,r29,r8
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// lwzx r4,r29,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r24.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x83930DAC;
	sub_82D2E228(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83930e04
	if (cr6.eq) goto loc_83930E04;
	// addi r4,r22,-120
	ctx.r4.s64 = ctx.r22.s64 + -120;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x83930DC8;
	sub_8259CC28(ctx, base);
	// addi r11,r28,48
	ctx.r11.s64 = ctx.r28.s64 + 48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82b142a0
	ctx.lr = 0x83930DD8;
	sub_82B142A0(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x83930dec
	if (!cr6.lt) goto loc_83930DEC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_83930DEC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83930E04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83930E04:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r29,20
	cr6.compare<uint32_t>(ctx.r29.u32, 20, xer);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x83930d94
	if (cr6.lt) goto loc_83930D94;
	// lbz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 84);
	// stb r31,82(r30)
	PPC_STORE_U8(ctx.r30.u32 + 82, ctx.r31.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83930e40
	if (!cr6.eq) goto loc_83930E40;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a18200
	ctx.lr = 0x83930E30;
	sub_82A18200(ctx, base);
	// subf r11,r25,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r25.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,84(r30)
	PPC_STORE_U8(ctx.r30.u32 + 84, ctx.r9.u8);
loc_83930E40:
	// lbz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 80);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83930f3c
	if (cr6.eq) goto loc_83930F3C;
	// lbz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83930f3c
	if (cr6.eq) goto loc_83930F3C;
	// lbz r11,83(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 83);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83930f3c
	if (!cr6.eq) goto loc_83930F3C;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83930f3c
	if (cr6.eq) goto loc_83930F3C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a18200
	ctx.lr = 0x83930E78;
	sub_82A18200(ctx, base);
	// cmplwi cr6,r3,30000
	cr6.compare<uint32_t>(ctx.r3.u32, 30000, xer);
	// ble cr6,0x83930ed4
	if (!cr6.gt) goto loc_83930ED4;
	// cmplwi cr6,r25,10000
	cr6.compare<uint32_t>(ctx.r25.u32, 10000, xer);
	// bgt cr6,0x83930ecc
	if (cr6.gt) goto loc_83930ECC;
	// addi r3,r22,-112
	ctx.r3.s64 = ctx.r22.s64 + -112;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eab70
	ctx.lr = 0x83930EA4;
	sub_830EAB70(ctx, base);
	// stw r25,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r25.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r22,-96
	ctx.r4.s64 = ctx.r22.s64 + -96;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83930EC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r31,83(r30)
	PPC_STORE_U8(ctx.r30.u32 + 83, ctx.r31.u8);
	// b 0x83930f3c
	goto loc_83930F3C;
loc_83930ECC:
	// addi r4,r22,-80
	ctx.r4.s64 = ctx.r22.s64 + -80;
	// b 0x83930f24
	goto loc_83930F24;
loc_83930ED4:
	// cmplwi cr6,r25,5000
	cr6.compare<uint32_t>(ctx.r25.u32, 5000, xer);
	// bgt cr6,0x83930f20
	if (cr6.gt) goto loc_83930F20;
	// addi r3,r22,-64
	ctx.r3.s64 = ctx.r22.s64 + -64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eab70
	ctx.lr = 0x83930EF8;
	sub_830EAB70(ctx, base);
	// stw r25,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r25.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r22,-48
	ctx.r4.s64 = ctx.r22.s64 + -48;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83930F18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r31,83(r30)
	PPC_STORE_U8(ctx.r30.u32 + 83, ctx.r31.u8);
	// b 0x83930f3c
	goto loc_83930F3C;
loc_83930F20:
	// addi r4,r22,-32
	ctx.r4.s64 = ctx.r22.s64 + -32;
loc_83930F24:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83930F3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83930F3C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a47e40
	ctx.lr = 0x83930F44;
	sub_82A47E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83930fd0
	if (!cr6.eq) goto loc_83930FD0;
	// lbz r11,83(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 83);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83930fd0
	if (cr6.eq) goto loc_83930FD0;
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// divwu r9,r25,r11
	ctx.r9.u32 = PPCDivide(ctx.r25.u32, ctx.r11.u32);
	// divwu r8,r10,r11
	ctx.r8.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x83930f9c
	if (cr6.eq) goto loc_83930F9C;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83930f9c
	if (cr6.eq) goto loc_83930F9C;
	// addi r3,r22,-16
	ctx.r3.s64 = ctx.r22.s64 + -16;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eab70
	ctx.lr = 0x83930F98;
	sub_830EAB70(ctx, base);
	// stw r25,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r25.u32);
loc_83930F9C:
	// lbz r11,85(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 85);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83930fd0
	if (!cr6.eq) goto loc_83930FD0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x83930fd0
	if (!cr6.eq) goto loc_83930FD0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eab70
	ctx.lr = 0x83930FCC;
	sub_830EAB70(ctx, base);
	// stb r31,85(r30)
	PPC_STORE_U8(ctx.r30.u32 + 85, ctx.r31.u8);
loc_83930FD0:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83930ff0
	if (cr6.lt) goto loc_83930FF0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83930FF0;
	sub_825952B8(ctx, base);
loc_83930FF0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83930FF8"))) PPC_WEAK_FUNC(sub_83930FF8);
PPC_FUNC_IMPL(__imp__sub_83930FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83931000;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// addi r30,r11,-16788
	ctx.r30.s64 = ctx.r11.s64 + -16788;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// bl 0x8259cc28
	ctx.lr = 0x8393103C;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x83931058
	if (!cr6.eq) goto loc_83931058;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x825a1eb8
	ctx.lr = 0x83931054;
	sub_825A1EB8(ctx, base);
	// b 0x83931064
	goto loc_83931064;
loc_83931058:
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82b142a0
	ctx.lr = 0x83931064;
	sub_82B142A0(ctx, base);
loc_83931064:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83931078
	if (!cr6.lt) goto loc_83931078;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_83931078:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x83931084;
	sub_82D2E228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839310b4
	if (cr6.eq) goto loc_839310B4;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x839310b0
	if (!cr6.eq) goto loc_839310B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_839310B0:
	// bctrl 
	ctx.lr = 0x839310B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839310B4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839310d4
	if (cr6.lt) goto loc_839310D4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839310D4;
	sub_825952B8(ctx, base);
loc_839310D4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839310DC"))) PPC_WEAK_FUNC(sub_839310DC);
PPC_FUNC_IMPL(__imp__sub_839310DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839310E0"))) PPC_WEAK_FUNC(sub_839310E0);
PPC_FUNC_IMPL(__imp__sub_839310E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839310E8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// addi r30,r10,-17228
	ctx.r30.s64 = ctx.r10.s64 + -17228;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,-96
	ctx.r4.s64 = ctx.r30.s64 + -96;
	// lwz r28,432(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8393112C;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r29,r11,100
	ctx.r29.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83931140
	if (!cr6.eq) goto loc_83931140;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_83931140:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da1d10
	ctx.lr = 0x83931148;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83931160
	if (cr6.eq) goto loc_83931160;
	// lis r6,108
	ctx.r6.s64 = 7077888;
	// ori r6,r6,11
	ctx.r6.u64 = ctx.r6.u64 | 11;
	// b 0x8393117c
	goto loc_8393117C;
loc_83931160:
	// bl 0x831156e8
	ctx.lr = 0x83931164;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,35260
	ctx.r9.u64 = ctx.r11.u64 | 35260;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x83131890
	ctx.lr = 0x83931178;
	sub_83131890(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8393117C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x8393118C;
	sub_8392DBE8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839311ac
	if (cr6.lt) goto loc_839311AC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839311AC;
	sub_825952B8(ctx, base);
loc_839311AC:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// bl 0x82a18270
	ctx.lr = 0x839311C0;
	sub_82A18270(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a18240
	ctx.lr = 0x839311CC;
	sub_82A18240(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subfic r10,r11,1
	xer.ca = ctx.r11.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r11.s64;
	// add r29,r3,r10
	ctx.r29.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a18240
	ctx.lr = 0x839311E0;
	sub_82A18240(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// bge cr6,0x8393120c
	if (!cr6.lt) goto loc_8393120C;
loc_839311E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83930ff8
	ctx.lr = 0x839311F8;
	sub_83930FF8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x82a18240
	ctx.lr = 0x83931204;
	sub_82A18240(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// blt cr6,0x839311e8
	if (cr6.lt) goto loc_839311E8;
loc_8393120C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dad028
	ctx.lr = 0x83931214;
	sub_82DAD028(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-80
	ctx.r4.s64 = ctx.r30.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83931234;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83931250;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8393126C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83931288;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x83931298;
	sub_82D2AEC8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839312B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r25,-31772
	ctx.r25.s64 = -2082209792;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839312f0
	if (cr6.eq) goto loc_839312F0;
	// bl 0x835d31b0
	ctx.lr = 0x839312C8;
	sub_835D31B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839312D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-13652(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13652);
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// bne cr6,0x839312f0
	if (!cr6.eq) goto loc_839312F0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d28498
	ctx.lr = 0x839312F0;
	sub_82D28498(ctx, base);
loc_839312F0:
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83815d38
	ctx.lr = 0x839312FC;
	sub_83815D38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x83931310;
	sub_83815B68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83815b48
	ctx.lr = 0x83931320;
	sub_83815B48(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8393133c
	if (cr6.eq) goto loc_8393133C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835d31b0
	ctx.lr = 0x83931334;
	sub_835D31B0(ctx, base);
	// lfs f0,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83931340
	goto loc_83931340;
loc_8393133C:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_83931340:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f13,-11316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11316);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x83815be8
	ctx.lr = 0x83931358;
	sub_83815BE8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x83931360;
	sub_82A181B8(ctx, base);
	// bl 0x82a2f510
	ctx.lr = 0x83931364;
	sub_82A2F510(ctx, base);
	// subfic r10,r3,1
	xer.ca = ctx.r3.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r3.s64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// bl 0x83815bd8
	ctx.lr = 0x8393137C;
	sub_83815BD8(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,48(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// bl 0x838153c8
	ctx.lr = 0x8393138C;
	sub_838153C8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r6,100(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x839313A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839313c4
	if (cr6.eq) goto loc_839313C4;
	// lwz r11,-13652(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13652);
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// bne cr6,0x839313c4
	if (!cr6.eq) goto loc_839313C4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d28498
	ctx.lr = 0x839313C4;
	sub_82D28498(ctx, base);
loc_839313C4:
	// stb r24,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r24.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r24,83(r31)
	PPC_STORE_U8(ctx.r31.u32 + 83, ctx.r24.u8);
	// stb r24,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r24.u8);
	// bl 0x83815cb8
	ctx.lr = 0x839313D8;
	sub_83815CB8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839313E4"))) PPC_WEAK_FUNC(sub_839313E4);
PPC_FUNC_IMPL(__imp__sub_839313E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839313E8"))) PPC_WEAK_FUNC(sub_839313E8);
PPC_FUNC_IMPL(__imp__sub_839313E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839313F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r25,432(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82dad028
	ctx.lr = 0x83931410;
	sub_82DAD028(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// addi r26,r11,-16956
	ctx.r26.s64 = ctx.r11.s64 + -16956;
	// beq cr6,0x83931460
	if (cr6.eq) goto loc_83931460;
	// stb r27,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r27.u8);
	// addi r4,r26,-260
	ctx.r4.s64 = ctx.r26.s64 + -260;
	// stb r27,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r27.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83931450;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// std r27,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r27.u64);
	// std r27,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r27.u64);
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// stb r29,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r29.u8);
loc_83931460:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8314cac8
	ctx.lr = 0x83931468;
	sub_8314CAC8(ctx, base);
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8393149c
	if (!cr6.eq) goto loc_8393149C;
	// lbz r11,193(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 193);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8393149c
	if (!cr6.eq) goto loc_8393149C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a18220
	ctx.lr = 0x8393148C;
	sub_82A18220(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839314ac
	if (cr6.eq) goto loc_839314AC;
	// stb r29,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r29.u8);
	// b 0x839314ac
	goto loc_839314AC;
loc_8393149C:
	// lbz r11,193(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 193);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839314ac
	if (!cr6.eq) goto loc_839314AC;
	// stb r27,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r27.u8);
loc_839314AC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a182b0
	ctx.lr = 0x839314B4;
	sub_82A182B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839314d0
	if (cr6.eq) goto loc_839314D0;
	// stb r27,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r27.u8);
	// stb r27,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r27.u8);
	// stb r27,83(r31)
	PPC_STORE_U8(ctx.r31.u32 + 83, ctx.r27.u8);
	// b 0x83931588
	goto loc_83931588;
loc_839314D0:
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8393156c
	if (!cr6.eq) goto loc_8393156C;
	// lbz r11,193(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 193);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8393156c
	if (!cr6.eq) goto loc_8393156C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a18240
	ctx.lr = 0x839314F0;
	sub_82A18240(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// ble cr6,0x8393158c
	if (!cr6.gt) goto loc_8393158C;
	// addi r4,r26,-252
	ctx.r4.s64 = ctx.r26.s64 + -252;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x83931508;
	sub_837B0C10(ctx, base);
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(ctx.r30.u32, 10, xer);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bne cr6,0x83931524
	if (!cr6.eq) goto loc_83931524;
	// addi r4,r26,-240
	ctx.r4.s64 = ctx.r26.s64 + -240;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x825a1eb8
	ctx.lr = 0x83931520;
	sub_825A1EB8(ctx, base);
	// b 0x83931530
	goto loc_83931530;
loc_83931524:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82b142a0
	ctx.lr = 0x83931530;
	sub_82B142A0(ctx, base);
loc_83931530:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83931544
	if (!cr6.lt) goto loc_83931544;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_83931544:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8393155C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r29,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r29.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83931568;
	sub_8387E8E0(ctx, base);
	// b 0x8393158c
	goto loc_8393158C;
loc_8393156C:
	// lbz r11,193(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 193);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83931588
	if (cr6.eq) goto loc_83931588;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a18240
	ctx.lr = 0x83931580;
	sub_82A18240(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8393158c
	if (!cr6.eq) goto loc_8393158C;
loc_83931588:
	// stb r27,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r27.u8);
loc_8393158C:
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839315dc
	if (cr6.eq) goto loc_839315DC;
	// lbz r10,81(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839315bc
	if (cr6.eq) goto loc_839315BC;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// addi r4,r26,-236
	ctx.r4.s64 = ctx.r26.s64 + -236;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839315fc
	if (!cr6.eq) goto loc_839315FC;
	// addi r4,r26,-220
	ctx.r4.s64 = ctx.r26.s64 + -220;
	// b 0x839315fc
	goto loc_839315FC;
loc_839315BC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839315dc
	if (cr6.eq) goto loc_839315DC;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// addi r4,r26,-212
	ctx.r4.s64 = ctx.r26.s64 + -212;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839315fc
	if (!cr6.eq) goto loc_839315FC;
	// addi r4,r26,-192
	ctx.r4.s64 = ctx.r26.s64 + -192;
	// b 0x839315fc
	goto loc_839315FC;
loc_839315DC:
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83931614
	if (cr6.eq) goto loc_83931614;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// addi r4,r26,-184
	ctx.r4.s64 = ctx.r26.s64 + -184;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839315fc
	if (!cr6.eq) goto loc_839315FC;
	// addi r4,r26,-164
	ctx.r4.s64 = ctx.r26.s64 + -164;
loc_839315FC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83931614;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83931614:
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83931658
	if (cr6.eq) goto loc_83931658;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a181b8
	ctx.lr = 0x83931628;
	sub_82A181B8(ctx, base);
	// bl 0x82a2f530
	ctx.lr = 0x8393162C;
	sub_82A2F530(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r26,-152
	ctx.r4.s64 = ctx.r26.s64 + -152;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x83931654
	if (!cr6.eq) goto loc_83931654;
	// addi r4,r26,-132
	ctx.r4.s64 = ctx.r26.s64 + -132;
loc_83931654:
	// bctrl 
	ctx.lr = 0x83931658;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83931658:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a18420
	ctx.lr = 0x83931660;
	sub_82A18420(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83931678
	if (!cr6.eq) goto loc_83931678;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a18420
	ctx.lr = 0x83931670;
	sub_82A18420(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83931684
	if (cr6.eq) goto loc_83931684;
loc_83931678:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83930c90
	ctx.lr = 0x83931684;
	sub_83930C90(ctx, base);
loc_83931684:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a18270
	ctx.lr = 0x8393168C;
	sub_82A18270(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// blt cr6,0x839316e8
	if (cr6.lt) goto loc_839316E8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a18240
	ctx.lr = 0x839316A4;
	sub_82A18240(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839316e8
	if (cr6.eq) goto loc_839316E8;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// ble cr6,0x83931730
	if (!cr6.gt) goto loc_83931730;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a18240
	ctx.lr = 0x839316C0;
	sub_82A18240(ctx, base);
	// subf r29,r28,r3
	ctx.r29.s64 = ctx.r3.s64 - ctx.r28.s64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_839316C8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83930ff8
	ctx.lr = 0x839316D8;
	sub_83930FF8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// ble cr6,0x839316c8
	if (!cr6.gt) goto loc_839316C8;
	// b 0x8393172c
	goto loc_8393172C;
loc_839316E8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a18240
	ctx.lr = 0x839316F0;
	sub_82A18240(ctx, base);
	// subfic r11,r28,1
	xer.ca = ctx.r28.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r28.s64;
	// add r30,r3,r11
	ctx.r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a18240
	ctx.lr = 0x83931700;
	sub_82A18240(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// bge cr6,0x8393172c
	if (!cr6.lt) goto loc_8393172C;
loc_83931708:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83930ff8
	ctx.lr = 0x83931718;
	sub_83930FF8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82a18240
	ctx.lr = 0x83931724;
	sub_82A18240(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x83931708
	if (cr6.lt) goto loc_83931708;
loc_8393172C:
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
loc_83931730:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a181b8
	ctx.lr = 0x83931738;
	sub_82A181B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a2f510
	ctx.lr = 0x83931740;
	sub_82A2F510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2f4d8
	ctx.lr = 0x8393174C;
	sub_82A2F4D8(ctx, base);
	// li r29,15
	ctx.r29.s64 = 15;
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// ble cr6,0x83931858
	if (!cr6.gt) goto loc_83931858;
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// addi r5,r26,-116
	ctx.r5.s64 = ctx.r26.s64 + -116;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x831d0b08
	ctx.lr = 0x83931774;
	sub_831D0B08(ctx, base);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
loc_83931788:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83931788
	if (!cr6.eq) goto loc_83931788;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x839317B0;
	sub_8259CC28(ctx, base);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// addi r4,r26,-108
	ctx.r4.s64 = ctx.r26.s64 + -108;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x839317CC;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839317e0
	if (!cr6.eq) goto loc_839317E0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_839317E0:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x839317F0;
	sub_8392DC70(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393180c
	if (cr6.lt) goto loc_8393180C;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x8393180C;
	sub_825952B8(ctx, base);
loc_8393180C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// blt cr6,0x83931834
	if (cr6.lt) goto loc_83931834;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x83931834;
	sub_825952B8(ctx, base);
loc_83931834:
	// clrlwi r30,r24,24
	ctx.r30.u64 = ctx.r24.u32 & 0xFF;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// addi r4,r26,-92
	ctx.r4.s64 = ctx.r26.s64 + -92;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// bne cr6,0x8393186c
	if (!cr6.eq) goto loc_8393186C;
	// addi r4,r26,-60
	ctx.r4.s64 = ctx.r26.s64 + -60;
	// b 0x8393186c
	goto loc_8393186C;
loc_83931858:
	// clrlwi r30,r24,24
	ctx.r30.u64 = ctx.r24.u32 & 0xFF;
	// addi r4,r26,-40
	ctx.r4.s64 = ctx.r26.s64 + -40;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8393186c
	if (!cr6.eq) goto loc_8393186C;
	// addi r4,r26,-12
	ctx.r4.s64 = ctx.r26.s64 + -12;
loc_8393186C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83931884;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x839318f4
	if (cr6.eq) goto loc_839318F4;
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r27,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r27.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r27,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r27.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cc28
	ctx.lr = 0x839318A8;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839318bc
	if (!cr6.eq) goto loc_839318BC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_839318BC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825832e0
	ctx.lr = 0x839318C4;
	sub_825832E0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x839318D8;
	sub_8392DBE8(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839318f4
	if (cr6.lt) goto loc_839318F4;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x839318F4;
	sub_825952B8(ctx, base);
loc_839318F4:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839318FC"))) PPC_WEAK_FUNC(sub_839318FC);
PPC_FUNC_IMPL(__imp__sub_839318FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83931900"))) PPC_WEAK_FUNC(sub_83931900);
PPC_FUNC_IMPL(__imp__sub_83931900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// beq cr6,0x8393191c
	if (cr6.eq) goto loc_8393191C;
	// addi r11,r11,-16024
	ctx.r11.s64 = ctx.r11.s64 + -16024;
	// addi r3,r11,-20
	ctx.r3.s64 = ctx.r11.s64 + -20;
	// blr 
	return;
loc_8393191C:
	// addi r3,r11,-16024
	ctx.r3.s64 = ctx.r11.s64 + -16024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83931924"))) PPC_WEAK_FUNC(sub_83931924);
PPC_FUNC_IMPL(__imp__sub_83931924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83931928"))) PPC_WEAK_FUNC(sub_83931928);
PPC_FUNC_IMPL(__imp__sub_83931928) {
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
	// bl 0x831156e8
	ctx.lr = 0x83931940;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,35391
	ctx.r9.u64 = ctx.r11.u64 | 35391;
	// lbzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8393196c
	if (!cr6.eq) goto loc_8393196C;
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8393196c
	if (!cr6.eq) goto loc_8393196C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83931984
	goto loc_83931984;
loc_8393196C:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83931990
	if (!cr6.eq) goto loc_83931990;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83931990
	if (!cr6.eq) goto loc_83931990;
	// li r4,1
	ctx.r4.s64 = 1;
loc_83931984:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d2aec8
	ctx.lr = 0x83931990;
	sub_82D2AEC8(ctx, base);
loc_83931990:
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

__attribute__((alias("__imp__sub_839319A4"))) PPC_WEAK_FUNC(sub_839319A4);
PPC_FUNC_IMPL(__imp__sub_839319A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839319A8"))) PPC_WEAK_FUNC(sub_839319A8);
PPC_FUNC_IMPL(__imp__sub_839319A8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x839319D0;
	sub_8392CFC8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lis r8,-31768
	ctx.r8.s64 = -2081947648;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r9,-15768
	ctx.r6.s64 = ctx.r9.s64 + -15768;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,20056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// li r3,26
	ctx.r3.s64 = 26;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// li r4,52
	ctx.r4.s64 = 52;
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// stb r5,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r5.u8);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lfs f0,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r11,12716(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 12716);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stb r30,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r30.u8);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// std r11,60(r31)
	PPC_STORE_U64(ctx.r31.u32 + 60, ctx.r11.u64);
	// stb r6,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r6.u8);
	// stb r6,70(r31)
	PPC_STORE_U8(ctx.r31.u32 + 70, ctx.r6.u8);
	// stb r6,71(r31)
	PPC_STORE_U8(ctx.r31.u32 + 71, ctx.r6.u8);
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

__attribute__((alias("__imp__sub_83931A5C"))) PPC_WEAK_FUNC(sub_83931A5C);
PPC_FUNC_IMPL(__imp__sub_83931A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83931A60"))) PPC_WEAK_FUNC(sub_83931A60);
PPC_FUNC_IMPL(__imp__sub_83931A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83931A68;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,36
	ctx.r11.s64 = 36;
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
	// li r4,84
	ctx.r4.s64 = 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83931A90;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83931ab0
	if (cr6.eq) goto loc_83931AB0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839319a8
	ctx.lr = 0x83931AA8;
	sub_839319A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83931AB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83931ABC"))) PPC_WEAK_FUNC(sub_83931ABC);
PPC_FUNC_IMPL(__imp__sub_83931ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83931AC0"))) PPC_WEAK_FUNC(sub_83931AC0);
PPC_FUNC_IMPL(__imp__sub_83931AC0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83931AE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31768
	ctx.r9.s64 = -2081947648;
	// lwz r3,12668(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12668);
	// bl 0x82d12668
	ctx.lr = 0x83931AF0;
	sub_82D12668(ctx, base);
	// li r8,36
	ctx.r8.s64 = 36;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83931B04;
	sub_82595150(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83931B1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83931B24;
	sub_82595170(ctx, base);
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

__attribute__((alias("__imp__sub_83931B38"))) PPC_WEAK_FUNC(sub_83931B38);
PPC_FUNC_IMPL(__imp__sub_83931B38) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83931b64
	if (!cr6.eq) goto loc_83931B64;
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
loc_83931B64:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,412(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a52d68
	ctx.lr = 0x83931B78;
	sub_82A52D68(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83931b9c
	if (cr6.eq) goto loc_83931B9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a52cb8
	ctx.lr = 0x83931B8C;
	sub_82A52CB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83931ba0
	if (cr6.eq) goto loc_83931BA0;
loc_83931B9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83931BA0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_83931BB8"))) PPC_WEAK_FUNC(sub_83931BB8);
PPC_FUNC_IMPL(__imp__sub_83931BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83931BC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d273d8
	ctx.lr = 0x83931BCC;
	sub_82D273D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83931bf0
	if (cr6.eq) goto loc_83931BF0;
	// bl 0x82d273d8
	ctx.lr = 0x83931BD8;
	sub_82D273D8(ctx, base);
	// bl 0x82d27440
	ctx.lr = 0x83931BDC;
	sub_82D27440(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83931bf0
	if (cr6.eq) goto loc_83931BF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83931BF0:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,412(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// bl 0x831156e8
	ctx.lr = 0x83931C00;
	sub_831156E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,52(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// addis r31,r8,6
	ctx.r31.s64 = ctx.r8.s64 + 393216;
	// addi r31,r31,-30316
	ctx.r31.s64 = ctx.r31.s64 + -30316;
	// lbz r30,171(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 171);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8353b168
	ctx.lr = 0x83931C24;
	sub_8353B168(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83931c58
	if (cr6.eq) goto loc_83931C58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83931C40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83931c58
	if (cr6.eq) goto loc_83931C58;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stb r10,171(r31)
	PPC_STORE_U8(ctx.r31.u32 + 171, ctx.r10.u8);
loc_83931C58:
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x83931b38
	ctx.lr = 0x83931C60;
	sub_83931B38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83931C68"))) PPC_WEAK_FUNC(sub_83931C68);
PPC_FUNC_IMPL(__imp__sub_83931C68) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x83931C84;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,35391
	ctx.r9.u64 = ctx.r11.u64 | 35391;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83931cac
	if (!cr6.eq) goto loc_83931CAC;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x83931CAC;
	sub_82D2AEC8(ctx, base);
loc_83931CAC:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,412(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// bl 0x831156e8
	ctx.lr = 0x83931CBC;
	sub_831156E8(ctx, base);
	// lis r8,5
	ctx.r8.s64 = 327680;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,-31754
	ctx.r10.s64 = -2081030144;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// ori r7,r8,35220
	ctx.r7.u64 = ctx.r8.u64 | 35220;
	// li r5,13
	ctx.r5.s64 = 13;
	// lwz r3,21944(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21944);
	// lwzx r31,r9,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// bl 0x83089b80
	ctx.lr = 0x83931CE0;
	sub_83089B80(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83931cf4
	if (cr6.eq) goto loc_83931CF4;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x83931d2c
	if (!cr6.eq) goto loc_83931D2C;
loc_83931CF4:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r11,-16000
	ctx.r31.s64 = ctx.r11.s64 + -16000;
	// addi r3,r10,100
	ctx.r3.s64 = ctx.r10.s64 + 100;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82d2e228
	ctx.lr = 0x83931D0C;
	sub_82D2E228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83931d2c
	if (cr6.eq) goto loc_83931D2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83931D2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83931D2C:
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

__attribute__((alias("__imp__sub_83931D44"))) PPC_WEAK_FUNC(sub_83931D44);
PPC_FUNC_IMPL(__imp__sub_83931D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83931D48"))) PPC_WEAK_FUNC(sub_83931D48);
PPC_FUNC_IMPL(__imp__sub_83931D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83931D50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r4,r9,-16533
	ctx.r4.s64 = ctx.r9.s64 + -16533;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8259cc28
	ctx.lr = 0x83931D84;
	sub_8259CC28(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,229
	ctx.r4.u64 = ctx.r4.u64 | 229;
	// bl 0x82d042a8
	ctx.lr = 0x83931D9C;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83931DA8"))) PPC_WEAK_FUNC(sub_83931DA8);
PPC_FUNC_IMPL(__imp__sub_83931DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83931DB0;
	__savegprlr_22(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r27,412(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// bl 0x831156e8
	ctx.lr = 0x83931DEC;
	sub_831156E8(ctx, base);
	// lis r9,5
	ctx.r9.s64 = 327680;
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,-31754
	ctx.r10.s64 = -2081030144;
	// ori r7,r9,35220
	ctx.r7.u64 = ctx.r9.u64 | 35220;
	// lwz r4,100(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// li r5,13
	ctx.r5.s64 = 13;
	// lwz r3,21944(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21944);
	// lwzx r27,r8,r7
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x83089b80
	ctx.lr = 0x83931E10;
	sub_83089B80(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r23,-1
	ctx.r23.s64 = -1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r26,r11,-16533
	ctx.r26.s64 = ctx.r11.s64 + -16533;
	// beq cr6,0x83931e90
	if (cr6.eq) goto loc_83931E90;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// beq cr6,0x83931e90
	if (cr6.eq) goto loc_83931E90;
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// bl 0x82d042a8
	ctx.lr = 0x83931E4C;
	sub_82D042A8(ctx, base);
	// lis r4,109
	ctx.r4.s64 = 7143424;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// bl 0x82d042a8
	ctx.lr = 0x83931E5C;
	sub_82D042A8(ctx, base);
	// addi r5,r26,333
	ctx.r5.s64 = ctx.r26.s64 + 333;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82ab6970
	ctx.lr = 0x83931E6C;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825a1da8
	ctx.lr = 0x83931E80;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8387e8e0
	ctx.lr = 0x83931E88;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x83931E90;
	sub_8387E8E0(ctx, base);
loc_83931E90:
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x83931EB8;
	sub_8259CC28(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,229
	ctx.r4.u64 = ctx.r4.u64 | 229;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d042a8
	ctx.lr = 0x83931ED0;
	sub_82D042A8(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bge cr6,0x83931ee4
	if (!cr6.lt) goto loc_83931EE4;
	// addi r29,r1,144
	ctx.r29.s64 = ctx.r1.s64 + 144;
loc_83931EE4:
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x83931F00;
	sub_8259CC28(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// ori r4,r4,229
	ctx.r4.u64 = ctx.r4.u64 | 229;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d042a8
	ctx.lr = 0x83931F18;
	sub_82D042A8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83931f2c
	if (!cr6.lt) goto loc_83931F2C;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_83931F2C:
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ori r4,r4,148
	ctx.r4.u64 = ctx.r4.u64 | 148;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82d042a8
	ctx.lr = 0x83931F40;
	sub_82D042A8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83931f60
	if (cr6.lt) goto loc_83931F60;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x83931F60;
	sub_825952B8(ctx, base);
loc_83931F60:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x83931f88
	if (cr6.lt) goto loc_83931F88;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x83931F88;
	sub_825952B8(ctx, base);
loc_83931F88:
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825a1da8
	ctx.lr = 0x83931FA8;
	sub_825A1DA8(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83931fbc
	if (!cr6.lt) goto loc_83931FBC;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_83931FBC:
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
loc_83931FCC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83931fcc
	if (!cr6.eq) goto loc_83931FCC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83931FF0;
	sub_8259CC28(ctx, base);
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// addi r4,r26,337
	ctx.r4.s64 = ctx.r26.s64 + 337;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8259cc28
	ctx.lr = 0x8393200C;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83932020
	if (!cr6.eq) goto loc_83932020;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_83932020:
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83932030;
	sub_8392DC70(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8393204c
	if (cr6.lt) goto loc_8393204C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x8393204C;
	sub_825952B8(ctx, base);
loc_8393204C:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// blt cr6,0x83932074
	if (cr6.lt) goto loc_83932074;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x83932074;
	sub_825952B8(ctx, base);
loc_83932074:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// blt cr6,0x8393209c
	if (cr6.lt) goto loc_8393209C;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x8393209C;
	sub_825952B8(ctx, base);
loc_8393209C:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// blt cr6,0x839320c4
	if (cr6.lt) goto loc_839320C4;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x839320C4;
	sub_825952B8(ctx, base);
loc_839320C4:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839320CC"))) PPC_WEAK_FUNC(sub_839320CC);
PPC_FUNC_IMPL(__imp__sub_839320CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839320D0"))) PPC_WEAK_FUNC(sub_839320D0);
PPC_FUNC_IMPL(__imp__sub_839320D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839320D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8393252c
	if (!cr6.eq) goto loc_8393252C;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,12668(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12668);
	// bl 0x82d12d18
	ctx.lr = 0x839320F8;
	sub_82D12D18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83932110
	if (!cr6.eq) goto loc_83932110;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83932110:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d6e8
	ctx.lr = 0x83932118;
	sub_8392D6E8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r29,r11,-16060
	ctx.r29.s64 = ctx.r11.s64 + -16060;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r29,-474
	ctx.r4.s64 = ctx.r29.s64 + -474;
	// bl 0x837b0c10
	ctx.lr = 0x83932130;
	sub_837B0C10(ctx, base);
	// addi r4,r29,-124
	ctx.r4.s64 = ctx.r29.s64 + -124;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x8393213C;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83932154
	if (!cr6.eq) goto loc_83932154;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_83932154:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83932164;
	sub_8392DC70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x8393216C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83932174;
	sub_8387E8E0(ctx, base);
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// stb r28,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r28.u8);
	// stw r28,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r28.u32);
	// stb r28,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r28.u8);
	// stw r28,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r28.u32);
	// stb r28,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r28.u8);
	// lwz r11,-3564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r30,412(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// lfs f1,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lbz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// bl 0x839119d8
	ctx.lr = 0x839321CC;
	sub_839119D8(ctx, base);
	// lbz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// lfs f1,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// bl 0x839119d8
	ctx.lr = 0x839321E4;
	sub_839119D8(ctx, base);
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x83931da8
	ctx.lr = 0x8393220C;
	sub_83931DA8(ctx, base);
	// lbz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// li r26,-1
	ctx.r26.s64 = -1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8393240c
	if (cr6.eq) goto loc_8393240C;
	// lbz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 60);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// lfs f1,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x839119d8
	ctx.lr = 0x83932234;
	sub_839119D8(ctx, base);
	// addi r4,r29,-112
	ctx.r4.s64 = ctx.r29.s64 + -112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x83932240;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r27,r11,100
	ctx.r27.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83932254
	if (!cr6.eq) goto loc_83932254;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_83932254:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x83931d48
	ctx.lr = 0x83932268;
	sub_83931D48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393227C;
	sub_8392DC70(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x83932284;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8393228C;
	sub_8387E8E0(ctx, base);
	// lfs f0,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// addi r4,r29,-92
	ctx.r4.s64 = ctx.r29.s64 + -92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x839322A0;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839322b4
	if (!cr6.eq) goto loc_839322B4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_839322B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x83931d48
	ctx.lr = 0x839322C8;
	sub_83931D48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x839322DC;
	sub_8392DC70(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x839322E4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x839322EC;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,-76
	ctx.r4.s64 = ctx.r29.s64 + -76;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x839322F8;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393230c
	if (!cr6.eq) goto loc_8393230C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8393230C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x83931d48
	ctx.lr = 0x83932320;
	sub_83931D48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83932334;
	sub_8392DC70(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x8393233C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83932344;
	sub_8387E8E0(ctx, base);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,273
	ctx.r4.u64 = ctx.r4.u64 | 273;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x83932358;
	sub_82D042A8(ctx, base);
	// addi r4,r29,-60
	ctx.r4.s64 = ctx.r29.s64 + -60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x83932364;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83932378
	if (!cr6.eq) goto loc_83932378;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_83932378:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83932388;
	sub_8392DC70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83932390;
	sub_8387E8E0(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x82d042a8
	ctx.lr = 0x839323A0;
	sub_82D042A8(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// ori r4,r4,118
	ctx.r4.u64 = ctx.r4.u64 | 118;
	// bl 0x82d042a8
	ctx.lr = 0x839323B0;
	sub_82D042A8(ctx, base);
	// addi r4,r29,-48
	ctx.r4.s64 = ctx.r29.s64 + -48;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1eb8
	ctx.lr = 0x839323C0;
	sub_825A1EB8(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x839323D4;
	sub_825A1DA8(ctx, base);
	// addi r4,r29,-44
	ctx.r4.s64 = ctx.r29.s64 + -44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x839323E0;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839323f4
	if (!cr6.eq) goto loc_839323F4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_839323F4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83932404;
	sub_8392DC70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8393240C;
	sub_8387E8E0(ctx, base);
loc_8393240C:
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x83932418;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393242c
	if (!cr6.eq) goto loc_8393242C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8393242C:
	// lis r6,103
	ctx.r6.s64 = 6750208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r6,r6,118
	ctx.r6.u64 = ctx.r6.u64 | 118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x83932440;
	sub_8392DBE8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83932448;
	sub_8387E8E0(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// bl 0x82d042a8
	ctx.lr = 0x83932458;
	sub_82D042A8(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x82d042a8
	ctx.lr = 0x83932468;
	sub_82D042A8(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// ori r4,r4,10
	ctx.r4.u64 = ctx.r4.u64 | 10;
	// bl 0x82d042a8
	ctx.lr = 0x83932478;
	sub_82D042A8(ctx, base);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1eb8
	ctx.lr = 0x83932488;
	sub_825A1EB8(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x8393249C;
	sub_825A1DA8(ctx, base);
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1eb8
	ctx.lr = 0x839324AC;
	sub_825A1EB8(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x839324C0;
	sub_825A1DA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x839324CC;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839324e0
	if (!cr6.eq) goto loc_839324E0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_839324E0:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x839324F0;
	sub_8392DC70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x839324F8;
	sub_8387E8E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r11,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r11.u8);
	// bl 0x8387e8e0
	ctx.lr = 0x83932508;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x83932510;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x83932518;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83932520;
	sub_8387E8E0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8393252C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83932538"))) PPC_WEAK_FUNC(sub_83932538);
PPC_FUNC_IMPL(__imp__sub_83932538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83932540;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r27,412(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// bl 0x831156e8
	ctx.lr = 0x8393255C;
	sub_831156E8(ctx, base);
	// lis r10,5
	ctx.r10.s64 = 327680;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r8,r10,35391
	ctx.r8.u64 = ctx.r10.u64 | 35391;
	// lbzx r30,r9,r8
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// bne cr6,0x8393261c
	if (!cr6.eq) goto loc_8393261C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d2aff8
	ctx.lr = 0x8393257C;
	sub_82D2AFF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8393261c
	if (!cr6.eq) goto loc_8393261C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
loc_83932594:
	// bl 0x82d2aec8
	ctx.lr = 0x83932598;
	sub_82D2AEC8(ctx, base);
loc_83932598:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lbz r10,38(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 38);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r26,r11,-15872
	ctx.r26.s64 = ctx.r11.s64 + -15872;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839326a8
	if (cr6.eq) goto loc_839326A8;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83932890
	if (!cr6.eq) goto loc_83932890;
	// stb r25,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r25.u8);
	// addi r4,r26,-108
	ctx.r4.s64 = ctx.r26.s64 + -108;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x839325CC;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839325e0
	if (!cr6.eq) goto loc_839325E0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_839325E0:
	// lis r6,103
	ctx.r6.s64 = 6750208;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// ori r6,r6,49
	ctx.r6.u64 = ctx.r6.u64 | 49;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x839325F4;
	sub_8392DBE8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x839325FC;
	sub_8387E8E0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r26,-92
	ctx.r4.s64 = ctx.r26.s64 + -92;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83932618;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83932890
	goto loc_83932890;
loc_8393261C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83932598
	if (!cr6.eq) goto loc_83932598;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a52d68
	ctx.lr = 0x8393262C;
	sub_82A52D68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83932670
	if (cr6.eq) goto loc_83932670;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a52cb8
	ctx.lr = 0x83932640;
	sub_82A52CB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83932670
	if (cr6.eq) goto loc_83932670;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d2aff8
	ctx.lr = 0x83932654;
	sub_82D2AFF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83932598
	if (!cr6.eq) goto loc_83932598;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83932594
	goto loc_83932594;
loc_83932670:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-15872
	ctx.r11.s64 = ctx.r11.s64 + -15872;
	// addi r4,r11,-112
	ctx.r4.s64 = ctx.r11.s64 + -112;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83932694;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_839326A8:
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83932710
	if (!cr6.eq) goto loc_83932710;
	// stb r28,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r28.u8);
	// addi r4,r26,-72
	ctx.r4.s64 = ctx.r26.s64 + -72;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x839326C4;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839326d8
	if (!cr6.eq) goto loc_839326D8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_839326D8:
	// lis r6,103
	ctx.r6.s64 = 6750208;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// ori r6,r6,118
	ctx.r6.u64 = ctx.r6.u64 | 118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x839326EC;
	sub_8392DBE8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x839326F4;
	sub_8387E8E0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r26,-56
	ctx.r4.s64 = ctx.r26.s64 + -56;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83932710;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83932710:
	// lwz r29,80(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x83932738
	if (!cr6.eq) goto loc_83932738;
	// addi r4,r27,84
	ctx.r4.s64 = ctx.r27.s64 + 84;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x825a2298
	ctx.lr = 0x8393272C;
	sub_825A2298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83932890
	if (cr6.eq) goto loc_83932890;
loc_83932738:
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r10,84(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// addi r30,r27,84
	ctx.r30.s64 = ctx.r27.s64 + 84;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r9,88(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stb r25,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r25.u8);
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x839327a0
	if (!cr6.eq) goto loc_839327A0;
	// bl 0x831156e8
	ctx.lr = 0x83932770;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8312d738
	ctx.lr = 0x83932780;
	sub_8312D738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x83932794;
	sub_8259CB28(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x8393279C;
	sub_8387E8E0(ctx, base);
	// b 0x83932810
	goto loc_83932810;
loc_839327A0:
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(ctx.r11.s32, 23, xer);
	// bge cr6,0x83932810
	if (!cr6.lt) goto loc_83932810;
	// li r10,11
	ctx.r10.s64 = 11;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r29,r6,31
	ctx.r29.u64 = ctx.r6.u32 & 0x1;
	// bl 0x831156e8
	ctx.lr = 0x839327C4;
	sub_831156E8(ctx, base);
	// lwz r5,52(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addis r30,r5,5
	ctx.r30.s64 = ctx.r5.s64 + 327680;
	// addi r30,r30,14904
	ctx.r30.s64 = ctx.r30.s64 + 14904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83123d18
	ctx.lr = 0x839327DC;
	sub_83123D18(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8393280c
	if (cr6.eq) goto loc_8393280C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,88(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83123c88
	ctx.lr = 0x839327F8;
	sub_83123C88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x8259d6c0
	ctx.lr = 0x83932808;
	sub_8259D6C0(ctx, base);
	// b 0x83932810
	goto loc_83932810;
loc_8393280C:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_83932810:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83932850
	if (cr6.eq) goto loc_83932850;
	// addi r4,r26,-36
	ctx.r4.s64 = ctx.r26.s64 + -36;
	// bl 0x837b0c10
	ctx.lr = 0x83932828;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393283c
	if (!cr6.eq) goto loc_8393283C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_8393283C:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393284C;
	sub_8392DC70(ctx, base);
	// b 0x83932880
	goto loc_83932880;
loc_83932850:
	// addi r4,r26,-24
	ctx.r4.s64 = ctx.r26.s64 + -24;
	// bl 0x837b0c10
	ctx.lr = 0x83932858;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393286c
	if (!cr6.eq) goto loc_8393286C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_8393286C:
	// lis r6,33
	ctx.r6.s64 = 2162688;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// ori r6,r6,96
	ctx.r6.u64 = ctx.r6.u64 | 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x83932880;
	sub_8392DBE8(ctx, base);
loc_83932880:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83932888;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83932890;
	sub_8387E8E0(ctx, base);
loc_83932890:
	// lwz r7,32(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r8,28(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lfs f13,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// lfs f0,-23488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f31,f6,f9
	ctx.f31.f64 = double(float(ctx.f6.f64 / ctx.f9.f64));
	// fmuls f5,f31,f0
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fcmpu cr6,f7,f5
	cr6.compare(ctx.f7.f64, ctx.f5.f64);
	// beq cr6,0x83932908
	if (cr6.eq) goto loc_83932908;
	// addi r4,r26,-12
	ctx.r4.s64 = ctx.r26.s64 + -12;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83815d38
	ctx.lr = 0x839328E4;
	sub_83815D38(ctx, base);
	// stfs f31,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x839328F4;
	sub_83815B68(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x838153c8
	ctx.lr = 0x83932900;
	sub_838153C8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83815cb8
	ctx.lr = 0x83932908;
	sub_83815CB8(ctx, base);
loc_83932908:
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83932a0c
	if (cr6.eq) goto loc_83932A0C;
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,64(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x83932934
	if (!cr6.eq) goto loc_83932934;
	// lfs f0,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x83932988
	if (cr6.eq) goto loc_83932988;
loc_83932934:
	// lbz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 68);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x839119d8
	ctx.lr = 0x83932948;
	sub_839119D8(ctx, base);
	// lbz r10,76(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 76);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f1,72(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// bl 0x839119d8
	ctx.lr = 0x83932960;
	sub_839119D8(ctx, base);
	// lfs f0,64(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,72(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83931da8
	ctx.lr = 0x83932988;
	sub_83931DA8(ctx, base);
loc_83932988:
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,56(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x83932a0c
	if (cr6.eq) goto loc_83932A0C;
	// lbz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 60);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x839119d8
	ctx.lr = 0x839329AC;
	sub_839119D8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x839329B8;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839329cc
	if (!cr6.eq) goto loc_839329CC;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_839329CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83931d48
	ctx.lr = 0x839329E0;
	sub_83931D48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x839329F4;
	sub_8392DC70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x839329FC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83932A04;
	sub_8387E8E0(ctx, base);
	// lfs f0,56(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
loc_83932A0C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83932A18"))) PPC_WEAK_FUNC(sub_83932A18);
PPC_FUNC_IMPL(__imp__sub_83932A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,12824(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12824);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83932A24"))) PPC_WEAK_FUNC(sub_83932A24);
PPC_FUNC_IMPL(__imp__sub_83932A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83932A28"))) PPC_WEAK_FUNC(sub_83932A28);
PPC_FUNC_IMPL(__imp__sub_83932A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lbz r11,3648(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3648);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83932a5c
	if (!cr6.eq) goto loc_83932A5C;
	// lbz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 308);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83932a5c
	if (cr6.eq) goto loc_83932A5C;
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,312(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
loc_83932A5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83932A64"))) PPC_WEAK_FUNC(sub_83932A64);
PPC_FUNC_IMPL(__imp__sub_83932A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83932A68"))) PPC_WEAK_FUNC(sub_83932A68);
PPC_FUNC_IMPL(__imp__sub_83932A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lbz r11,3648(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3648);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83932aa0
	if (!cr6.eq) goto loc_83932AA0;
	// lbz r11,308(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 308);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83932aa0
	if (cr6.eq) goto loc_83932AA0;
	// lwz r11,316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	// li r9,28
	ctx.r9.s64 = 28;
	// lwz r8,312(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// li r11,1
	ctx.r11.s64 = 1;
	// divw. r6,r7,r9
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x83932aa4
	if (!cr0.eq) goto loc_83932AA4;
loc_83932AA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83932AA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83932ac0
	if (cr6.eq) goto loc_83932AC0;
	// lbz r11,308(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 308);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x83932ac4
	if (!cr6.eq) goto loc_83932AC4;
loc_83932AC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83932AC4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83932ACC"))) PPC_WEAK_FUNC(sub_83932ACC);
PPC_FUNC_IMPL(__imp__sub_83932ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83932AD0"))) PPC_WEAK_FUNC(sub_83932AD0);
PPC_FUNC_IMPL(__imp__sub_83932AD0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// addi r4,r10,-15356
	ctx.r4.s64 = ctx.r10.s64 + -15356;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83932B08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83932b68
	if (cr6.eq) goto loc_83932B68;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83932b28
	if (cr6.lt) goto loc_83932B28;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83932b2c
	goto loc_83932B2C;
loc_83932B28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_83932B2C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x83932B34;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x83932B48;
	sub_82D291E0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83932b68
	if (cr6.lt) goto loc_83932B68;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83932B68;
	sub_825952B8(ctx, base);
loc_83932B68:
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

__attribute__((alias("__imp__sub_83932B80"))) PPC_WEAK_FUNC(sub_83932B80);
PPC_FUNC_IMPL(__imp__sub_83932B80) {
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
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83545640
	ctx.lr = 0x83932BA0;
	sub_83545640(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,28
	ctx.r10.s64 = 28;
	// addi r11,r11,308
	ctx.r11.s64 = ctx.r11.s64 + 308;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r8,r4,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r4.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x83932bc8
	if (cr0.eq) goto loc_83932BC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83932ad0
	ctx.lr = 0x83932BC8;
	sub_83932AD0(ctx, base);
loc_83932BC8:
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

__attribute__((alias("__imp__sub_83932BDC"))) PPC_WEAK_FUNC(sub_83932BDC);
PPC_FUNC_IMPL(__imp__sub_83932BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83932BE0"))) PPC_WEAK_FUNC(sub_83932BE0);
PPC_FUNC_IMPL(__imp__sub_83932BE0) {
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
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x83932C00;
	sub_8392CFC8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-15256
	ctx.r9.s64 = ctx.r11.s64 + -15256;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r8,r10,-22824
	ctx.r8.s64 = ctx.r10.s64 + -22824;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lfs f1,-15376(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8392d388
	ctx.lr = 0x83932C3C;
	sub_8392D388(ctx, base);
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

__attribute__((alias("__imp__sub_83932C54"))) PPC_WEAK_FUNC(sub_83932C54);
PPC_FUNC_IMPL(__imp__sub_83932C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83932C58"))) PPC_WEAK_FUNC(sub_83932C58);
PPC_FUNC_IMPL(__imp__sub_83932C58) {
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
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-15256
	ctx.r9.s64 = ctx.r11.s64 + -15256;
	// addi r8,r10,-24712
	ctx.r8.s64 = ctx.r10.s64 + -24712;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 + 44;
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0cf8
	ctx.lr = 0x83932C94;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83932cc0
	if (cr6.eq) goto loc_83932CC0;
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
	ctx.lr = 0x83932CB8;
	sub_8353F3B8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_83932CC0:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,25648
	ctx.r10.s64 = ctx.r11.s64 + 25648;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83932CE4"))) PPC_WEAK_FUNC(sub_83932CE4);
PPC_FUNC_IMPL(__imp__sub_83932CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83932CE8"))) PPC_WEAK_FUNC(sub_83932CE8);
PPC_FUNC_IMPL(__imp__sub_83932CE8) {
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
	// bl 0x83932c58
	ctx.lr = 0x83932D08;
	sub_83932C58(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83932d20
	if (cr6.eq) goto loc_83932D20;
	// bl 0x82416268
	ctx.lr = 0x83932D1C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83932D20:
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

__attribute__((alias("__imp__sub_83932D38"))) PPC_WEAK_FUNC(sub_83932D38);
PPC_FUNC_IMPL(__imp__sub_83932D38) {
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
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83932D6C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83932d84
	if (cr6.eq) goto loc_83932D84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83932be0
	ctx.lr = 0x83932D80;
	sub_83932BE0(ctx, base);
	// b 0x83932d88
	goto loc_83932D88;
loc_83932D84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83932D88:
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

__attribute__((alias("__imp__sub_83932DA0"))) PPC_WEAK_FUNC(sub_83932DA0);
PPC_FUNC_IMPL(__imp__sub_83932DA0) {
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
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// addi r3,r5,28
	ctx.r3.s64 = ctx.r5.s64 + 28;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83915a50
	ctx.lr = 0x83932DD0;
	sub_83915A50(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r4,-28
	ctx.r3.s64 = ctx.r4.s64 + -28;
	// bl 0x838adab0
	ctx.lr = 0x83932DE4;
	sub_838ADAB0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83932E08"))) PPC_WEAK_FUNC(sub_83932E08);
PPC_FUNC_IMPL(__imp__sub_83932E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,28
	ctx.r10.s64 = 28;
	// addi r3,r11,308
	ctx.r3.s64 = ctx.r11.s64 + 308;
	// lwz r9,316(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// lwz r8,312(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw. r6,r7,r10
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// b 0x83932da0
	sub_83932DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83932E2C"))) PPC_WEAK_FUNC(sub_83932E2C);
PPC_FUNC_IMPL(__imp__sub_83932E2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83932E30"))) PPC_WEAK_FUNC(sub_83932E30);
PPC_FUNC_IMPL(__imp__sub_83932E30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,17
	ctx.r3.s64 = ctx.r11.s64 + 17;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83932E44"))) PPC_WEAK_FUNC(sub_83932E44);
PPC_FUNC_IMPL(__imp__sub_83932E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83932E48"))) PPC_WEAK_FUNC(sub_83932E48);
PPC_FUNC_IMPL(__imp__sub_83932E48) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83932E6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83932e80
	if (!cr6.eq) goto loc_83932E80;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83932E80:
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

__attribute__((alias("__imp__sub_83932E94"))) PPC_WEAK_FUNC(sub_83932E94);
PPC_FUNC_IMPL(__imp__sub_83932E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83932E98"))) PPC_WEAK_FUNC(sub_83932E98);
PPC_FUNC_IMPL(__imp__sub_83932E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x83932f04
	if (cr6.gt) goto loc_83932F04;
	// lis r12,-31853
	ctx.r12.s64 = -2087518208;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11968
	ctx.r12.s64 = ctx.r12.s64 + 11968;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83932F04;
	case 1:
		goto loc_83932F04;
	case 2:
		goto loc_83932F04;
	case 3:
		goto loc_83932EF4;
	case 4:
		goto loc_83932EF4;
	case 5:
		goto loc_83932EF4;
	case 6:
		goto loc_83932EEC;
	case 7:
		goto loc_83932EFC;
	case 8:
		goto loc_83932EFC;
	case 9:
		goto loc_83932EFC;
	case 10:
		goto loc_83932EFC;
	default:
		return;
	}
	// lwz r28,12036(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12036);
	// lwz r28,12036(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12036);
	// lwz r28,12036(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12036);
	// lwz r28,12020(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12020);
	// lwz r28,12020(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12020);
	// lwz r28,12020(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12020);
	// lwz r28,12012(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12012);
	// lwz r28,12028(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12028);
	// lwz r28,12028(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12028);
	// lwz r28,12028(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12028);
	// lwz r28,12028(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12028);
loc_83932EEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83932EF4:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_83932EFC:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83932F04:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83932F0C"))) PPC_WEAK_FUNC(sub_83932F0C);
PPC_FUNC_IMPL(__imp__sub_83932F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83932F10"))) PPC_WEAK_FUNC(sub_83932F10);
PPC_FUNC_IMPL(__imp__sub_83932F10) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x83932F28;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83932F2C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// beq cr6,0x83932f78
	if (cr6.eq) goto loc_83932F78;
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// beq cr6,0x83932f78
	if (cr6.eq) goto loc_83932F78;
	// lbz r11,3648(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3648);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83932f78
	if (!cr6.eq) goto loc_83932F78;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r9,292(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
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
loc_83932F78:
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

__attribute__((alias("__imp__sub_83932F90"))) PPC_WEAK_FUNC(sub_83932F90);
PPC_FUNC_IMPL(__imp__sub_83932F90) {
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
	// bl 0x83932e98
	ctx.lr = 0x83932FA0;
	sub_83932E98(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83932ff8
	if (cr6.gt) goto loc_83932FF8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83932ff8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83932FF8;
	// bdzf 4*cr6+eq,0x83932ff8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83932FF8;
	// bne cr6,0x83932fdc
	if (!cr6.eq) goto loc_83932FDC;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r10,r11,12968
	ctx.r10.s64 = ctx.r11.s64 + 12968;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83932FDC:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r10,r11,12968
	ctx.r10.s64 = ctx.r11.s64 + 12968;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83932FF8:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,12968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12968);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83933010"))) PPC_WEAK_FUNC(sub_83933010);
PPC_FUNC_IMPL(__imp__sub_83933010) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x83933034;
	sub_82A1AAA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83933058
	if (cr6.eq) goto loc_83933058;
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
loc_83933058:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83932f10
	ctx.lr = 0x83933060;
	sub_83932F10(ctx, base);
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

__attribute__((alias("__imp__sub_83933074"))) PPC_WEAK_FUNC(sub_83933074);
PPC_FUNC_IMPL(__imp__sub_83933074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83933078"))) PPC_WEAK_FUNC(sub_83933078);
PPC_FUNC_IMPL(__imp__sub_83933078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x8393309C;
	sub_8392CFC8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// addi r10,r11,-14264
	ctx.r10.s64 = ctx.r11.s64 + -14264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8391b0c8
	ctx.lr = 0x839330B4;
	sub_8391B0C8(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r11,292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// lwz r8,296(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw. r6,r7,r9
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x839330ec
	if (cr0.eq) goto loc_839330EC;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_839330E0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x839330e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839330E0;
loc_839330EC:
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

__attribute__((alias("__imp__sub_83933108"))) PPC_WEAK_FUNC(sub_83933108);
PPC_FUNC_IMPL(__imp__sub_83933108) {
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
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8393313C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83933154
	if (cr6.eq) goto loc_83933154;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83933078
	ctx.lr = 0x83933150;
	sub_83933078(ctx, base);
	// b 0x83933158
	goto loc_83933158;
loc_83933154:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83933158:
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

__attribute__((alias("__imp__sub_83933170"))) PPC_WEAK_FUNC(sub_83933170);
PPC_FUNC_IMPL(__imp__sub_83933170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r5,20
	ctx.r11.s64 = ctx.r5.s64 + 20;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// beq cr6,0x839331b0
	if (cr6.eq) goto loc_839331B0;
	// addi r7,r11,-20
	ctx.r7.s64 = ctx.r11.s64 + -20;
loc_83933184:
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83933194:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83933194
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83933194;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r7,r7,20
	ctx.r7.s64 = ctx.r7.s64 + 20;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x83933184
	if (!cr6.eq) goto loc_83933184;
loc_839331B0:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839331C4"))) PPC_WEAK_FUNC(sub_839331C4);
PPC_FUNC_IMPL(__imp__sub_839331C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839331C8"))) PPC_WEAK_FUNC(sub_839331C8);
PPC_FUNC_IMPL(__imp__sub_839331C8) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r4,r11,292
	ctx.r4.s64 = ctx.r11.s64 + 292;
	// lwz r5,292(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,296(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// subf r8,r5,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r5.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x839331fc
	if (cr0.eq) goto loc_839331FC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83933170
	ctx.lr = 0x839331FC;
	sub_83933170(ctx, base);
loc_839331FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8393320C"))) PPC_WEAK_FUNC(sub_8393320C);
PPC_FUNC_IMPL(__imp__sub_8393320C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83933210"))) PPC_WEAK_FUNC(sub_83933210);
PPC_FUNC_IMPL(__imp__sub_83933210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83933218;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x8393322C;
	sub_831156E8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// bl 0x831156e8
	ctx.lr = 0x83933244;
	sub_831156E8(ctx, base);
	// lwz r31,52(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x83911640
	ctx.lr = 0x8393324C;
	sub_83911640(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x83933298
	if (!cr6.eq) goto loc_83933298;
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123a08
	ctx.lr = 0x83933268;
	sub_83123A08(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83933270:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83933270
	if (!cr6.eq) goto loc_83933270;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83933294;
	sub_8259CC28(ctx, base);
	// b 0x839332a4
	goto loc_839332A4;
loc_83933298:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83911eb8
	ctx.lr = 0x839332A4;
	sub_83911EB8(ctx, base);
loc_839332A4:
	// bl 0x83911640
	ctx.lr = 0x839332A8;
	sub_83911640(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r31,r11,-14796
	ctx.r31.s64 = ctx.r11.s64 + -14796;
	// beq cr6,0x83933300
	if (cr6.eq) goto loc_83933300;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83933300
	if (cr6.eq) goto loc_83933300;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x83933300
	if (cr6.eq) goto loc_83933300;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x839332D4;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839332e8
	if (!cr6.eq) goto loc_839332E8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_839332E8:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392dc70
	ctx.lr = 0x839332F8;
	sub_8392DC70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83933300;
	sub_8387E8E0(ctx, base);
loc_83933300:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bne cr6,0x83933364
	if (!cr6.eq) goto loc_83933364;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83933314;
	sub_837B0C10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392e290
	ctx.lr = 0x83933334;
	sub_8392E290(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83933354
	if (cr6.lt) goto loc_83933354;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x83933354;
	sub_825952B8(ctx, base);
loc_83933354:
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// b 0x839333bc
	goto loc_839333BC;
loc_83933364:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x83933370;
	sub_837B0C10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8392e290
	ctx.lr = 0x83933390;
	sub_8392E290(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839333b0
	if (cr6.lt) goto loc_839333B0;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x839333B0;
	sub_825952B8(ctx, base);
loc_839333B0:
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stb r28,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r28.u8);
loc_839333BC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839333d8
	if (cr6.lt) goto loc_839333D8;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x839333D8;
	sub_825952B8(ctx, base);
loc_839333D8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839333E0"))) PPC_WEAK_FUNC(sub_839333E0);
PPC_FUNC_IMPL(__imp__sub_839333E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839333E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83933210
	ctx.lr = 0x839333F4;
	sub_83933210(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r28,56(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r24,60(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bge cr6,0x8393364c
	if (!cr6.lt) goto loc_8393364C;
	// cmpwi cr6,r28,32
	cr6.compare<int32_t>(ctx.r28.s32, 32, xer);
	// bge cr6,0x8393364c
	if (!cr6.lt) goto loc_8393364C;
	// cmpwi cr6,r24,32
	cr6.compare<int32_t>(ctx.r24.s32, 32, xer);
	// bge cr6,0x8393364c
	if (!cr6.lt) goto loc_8393364C;
	// bl 0x83911640
	ctx.lr = 0x83933420;
	sub_83911640(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,15
	ctx.r25.s64 = 15;
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r27,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r27.u8);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83911eb8
	ctx.lr = 0x83933444;
	sub_83911EB8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r26,r11,-14740
	ctx.r26.s64 = ctx.r11.s64 + -14740;
	// bne cr6,0x83933468
	if (!cr6.eq) goto loc_83933468;
	// addi r4,r26,-48
	ctx.r4.s64 = ctx.r26.s64 + -48;
	// bl 0x837b0c10
	ctx.lr = 0x83933460;
	sub_837B0C10(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x83933474
	goto loc_83933474;
loc_83933468:
	// addi r4,r26,-40
	ctx.r4.s64 = ctx.r26.s64 + -40;
	// bl 0x837b0c10
	ctx.lr = 0x83933470;
	sub_837B0C10(ctx, base);
	// li r6,5
	ctx.r6.s64 = 5;
loc_83933474:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e290
	ctx.lr = 0x83933490;
	sub_8392E290(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83933498;
	sub_8387E8E0(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x8393349C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addis r30,r11,5
	ctx.r30.s64 = ctx.r11.s64 + 327680;
	// addi r30,r30,14904
	ctx.r30.s64 = ctx.r30.s64 + 14904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83123a08
	ctx.lr = 0x839334B4;
	sub_83123A08(ctx, base);
	// lhz r10,808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, xer);
	// bge cr6,0x839334d0
	if (!cr6.lt) goto loc_839334D0;
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lbz r29,512(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 512);
	// b 0x839334d4
	goto loc_839334D4;
loc_839334D0:
	// lbz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_839334D4:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// bl 0x83123ba8
	ctx.lr = 0x839334F4;
	sub_83123BA8(ctx, base);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// addi r6,r3,56
	ctx.r6.s64 = ctx.r3.s64 + 56;
	// clrlwi r5,r29,24
	ctx.r5.u64 = ctx.r29.u32 & 0xFF;
	// ori r4,r4,285
	ctx.r4.u64 = ctx.r4.u64 | 285;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x8393350C;
	sub_82D042A8(ctx, base);
	// addi r4,r26,-32
	ctx.r4.s64 = ctx.r26.s64 + -32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x83933518;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393352c
	if (!cr6.eq) goto loc_8393352C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8393352C:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393353C;
	sub_8392DC70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83933544;
	sub_8387E8E0(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83123a08
	ctx.lr = 0x83933550;
	sub_83123A08(ctx, base);
	// lhz r11,808(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, xer);
	// bge cr6,0x8393356c
	if (!cr6.lt) goto loc_8393356C;
	// add r11,r3,r24
	ctx.r11.u64 = ctx.r3.u64 + ctx.r24.u64;
	// lbz r29,512(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 512);
	// b 0x83933570
	goto loc_83933570;
loc_8393356C:
	// lbz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_83933570:
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// bl 0x83123ba8
	ctx.lr = 0x83933590;
	sub_83123BA8(ctx, base);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// addi r6,r3,56
	ctx.r6.s64 = ctx.r3.s64 + 56;
	// clrlwi r5,r29,24
	ctx.r5.u64 = ctx.r29.u32 & 0xFF;
	// ori r4,r4,285
	ctx.r4.u64 = ctx.r4.u64 | 285;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x839335A8;
	sub_82D042A8(ctx, base);
	// addi r4,r26,-16
	ctx.r4.s64 = ctx.r26.s64 + -16;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x839335B4;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839335c8
	if (!cr6.eq) goto loc_839335C8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_839335C8:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x839335D8;
	sub_8392DC70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x839335E0;
	sub_8387E8E0(ctx, base);
	// bl 0x83911640
	ctx.lr = 0x839335E4;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83933634
	if (cr6.eq) goto loc_83933634;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83933634
	if (cr6.eq) goto loc_83933634;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x83933634
	if (cr6.eq) goto loc_83933634;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x83933608;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8393361c
	if (!cr6.eq) goto loc_8393361C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8393361C:
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8393362C;
	sub_8392DC70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x83933634;
	sub_8387E8E0(ctx, base);
loc_83933634:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8393363C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83933644;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x8393364C;
	sub_8387E8E0(ctx, base);
loc_8393364C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83933654"))) PPC_WEAK_FUNC(sub_83933654);
PPC_FUNC_IMPL(__imp__sub_83933654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83933658"))) PPC_WEAK_FUNC(sub_83933658);
PPC_FUNC_IMPL(__imp__sub_83933658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83933660;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83933210
	ctx.lr = 0x8393366C;
	sub_83933210(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r29,r11,-14628
	ctx.r29.s64 = ctx.r11.s64 + -14628;
	// addi r4,r29,-100
	ctx.r4.s64 = ctx.r29.s64 + -100;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83933690;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r26,56(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bge cr6,0x839337c4
	if (!cr6.lt) goto loc_839337C4;
	// cmpwi cr6,r26,32
	cr6.compare<int32_t>(ctx.r26.s32, 32, xer);
	// bge cr6,0x839337c4
	if (!cr6.lt) goto loc_839337C4;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x839336f4
	if (cr6.eq) goto loc_839336F4;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x839336ec
	if (cr6.eq) goto loc_839336EC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x839336e4
	if (cr6.eq) goto loc_839336E4;
	// addi r4,r29,-84
	ctx.r4.s64 = ctx.r29.s64 + -84;
	// b 0x83933704
	goto loc_83933704;
loc_839336E4:
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// b 0x83933704
	goto loc_83933704;
loc_839336EC:
	// addi r4,r29,-48
	ctx.r4.s64 = ctx.r29.s64 + -48;
	// b 0x839336f8
	goto loc_839336F8;
loc_839336F4:
	// addi r4,r29,-72
	ctx.r4.s64 = ctx.r29.s64 + -72;
loc_839336F8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83933704:
	// bctrl 
	ctx.lr = 0x83933708;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x831156e8
	ctx.lr = 0x8393370C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addis r27,r11,5
	ctx.r27.s64 = ctx.r11.s64 + 327680;
	// addi r27,r27,14904
	ctx.r27.s64 = ctx.r27.s64 + 14904;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83123a08
	ctx.lr = 0x83933724;
	sub_83123A08(ctx, base);
	// lhz r10,808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// cmplw cr6,r26,r9
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, xer);
	// bge cr6,0x83933740
	if (!cr6.lt) goto loc_83933740;
	// add r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 + ctx.r26.u64;
	// lbz r28,512(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 512);
	// b 0x83933744
	goto loc_83933744;
loc_83933740:
	// lbz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_83933744:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83123ba8
	ctx.lr = 0x8393376C;
	sub_83123BA8(ctx, base);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// addi r6,r3,56
	ctx.r6.s64 = ctx.r3.s64 + 56;
	// clrlwi r5,r28,24
	ctx.r5.u64 = ctx.r28.u32 & 0xFF;
	// ori r4,r4,285
	ctx.r4.u64 = ctx.r4.u64 | 285;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x83933784;
	sub_82D042A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83933790;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839337a4
	if (!cr6.eq) goto loc_839337A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_839337A4:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x839337B4;
	sub_8392DC70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x839337BC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x839337C4;
	sub_8387E8E0(ctx, base);
loc_839337C4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839337CC"))) PPC_WEAK_FUNC(sub_839337CC);
PPC_FUNC_IMPL(__imp__sub_839337CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839337D0"))) PPC_WEAK_FUNC(sub_839337D0);
PPC_FUNC_IMPL(__imp__sub_839337D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839337D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83933210
	ctx.lr = 0x839337E4;
	sub_83933210(ctx, base);
	// bl 0x83911640
	ctx.lr = 0x839337E8;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83933810
	if (cr6.eq) goto loc_83933810;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83933810
	if (cr6.eq) goto loc_83933810;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83933810
	if (cr6.eq) goto loc_83933810;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r28,r11,-14560
	ctx.r28.s64 = ctx.r11.s64 + -14560;
	// addi r4,r28,-40
	ctx.r4.s64 = ctx.r28.s64 + -40;
	// b 0x8393381c
	goto loc_8393381C;
loc_83933810:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r28,r11,-14560
	ctx.r28.s64 = ctx.r11.s64 + -14560;
	// addi r4,r28,-52
	ctx.r4.s64 = ctx.r28.s64 + -52;
loc_8393381C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83933834;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r27,56(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bge cr6,0x839339d8
	if (!cr6.lt) goto loc_839339D8;
	// cmpwi cr6,r27,32
	cr6.compare<int32_t>(ctx.r27.s32, 32, xer);
	// bge cr6,0x839339d8
	if (!cr6.lt) goto loc_839339D8;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x83933884
	if (cr6.eq) goto loc_83933884;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x83933878
	if (cr6.eq) goto loc_83933878;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x839339d8
	if (!cr6.eq) goto loc_839339D8;
	// lis r30,11
	ctx.r30.s64 = 720896;
	// ori r30,r30,276
	ctx.r30.u64 = ctx.r30.u64 | 276;
	// b 0x8393388c
	goto loc_8393388C;
loc_83933878:
	// lis r30,11
	ctx.r30.s64 = 720896;
	// ori r30,r30,274
	ctx.r30.u64 = ctx.r30.u64 | 274;
	// b 0x8393388c
	goto loc_8393388C;
loc_83933884:
	// lis r30,11
	ctx.r30.s64 = 720896;
	// ori r30,r30,275
	ctx.r30.u64 = ctx.r30.u64 | 275;
loc_8393388C:
	// bl 0x83911640
	ctx.lr = 0x83933890;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x839338e0
	if (cr6.eq) goto loc_839338E0;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x839338e0
	if (cr6.eq) goto loc_839338E0;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x839338e0
	if (cr6.eq) goto loc_839338E0;
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x839338B4;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839338c8
	if (!cr6.eq) goto loc_839338C8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_839338C8:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x839338D8;
	sub_8392DBE8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x83933914
	goto loc_83933914;
loc_839338E0:
	// addi r4,r28,-28
	ctx.r4.s64 = ctx.r28.s64 + -28;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x839338EC;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83933900
	if (!cr6.eq) goto loc_83933900;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83933900:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x83933910;
	sub_8392DBE8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
loc_83933914:
	// bl 0x8387e8e0
	ctx.lr = 0x83933918;
	sub_8387E8E0(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x8393391C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addis r29,r11,5
	ctx.r29.s64 = ctx.r11.s64 + 327680;
	// addi r29,r29,14904
	ctx.r29.s64 = ctx.r29.s64 + 14904;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123a08
	ctx.lr = 0x83933934;
	sub_83123A08(ctx, base);
	// lhz r10,808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, xer);
	// bge cr6,0x83933950
	if (!cr6.lt) goto loc_83933950;
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lbz r30,512(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 512);
	// b 0x83933954
	goto loc_83933954;
loc_83933950:
	// lbz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_83933954:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123ba8
	ctx.lr = 0x83933980;
	sub_83123BA8(ctx, base);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// addi r6,r3,56
	ctx.r6.s64 = ctx.r3.s64 + 56;
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// ori r4,r4,285
	ctx.r4.u64 = ctx.r4.u64 | 285;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x83933998;
	sub_82D042A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x839339A4;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x839339b8
	if (!cr6.eq) goto loc_839339B8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_839339B8:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x839339C8;
	sub_8392DC70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x839339D0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x839339D8;
	sub_8387E8E0(ctx, base);
loc_839339D8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839339E0"))) PPC_WEAK_FUNC(sub_839339E0);
PPC_FUNC_IMPL(__imp__sub_839339E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839339E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83933d8c
	if (cr6.gt) goto loc_83933D8C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83933a20
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83933A20;
	// bdzf 4*cr6+eq,0x83933a28
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83933A28;
	// bne cr6,0x83933a34
	if (!cr6.eq) goto loc_83933A34;
	// lis r28,10
	ctx.r28.s64 = 655360;
	// ori r28,r28,8
	ctx.r28.u64 = ctx.r28.u64 | 8;
	// b 0x83933a3c
	goto loc_83933A3C;
loc_83933A20:
	// lis r28,10
	ctx.r28.s64 = 655360;
	// b 0x83933a3c
	goto loc_83933A3C;
loc_83933A28:
	// lis r28,990
	ctx.r28.s64 = 64880640;
	// ori r28,r28,213
	ctx.r28.u64 = ctx.r28.u64 | 213;
	// b 0x83933a3c
	goto loc_83933A3C;
loc_83933A34:
	// lis r28,10
	ctx.r28.s64 = 655360;
	// ori r28,r28,2
	ctx.r28.u64 = ctx.r28.u64 | 2;
loc_83933A3C:
	// bl 0x83911640
	ctx.lr = 0x83933A40;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83933c2c
	if (cr6.eq) goto loc_83933C2C;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83933c2c
	if (cr6.eq) goto loc_83933C2C;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x83933c2c
	if (cr6.eq) goto loc_83933C2C;
	// bl 0x83911640
	ctx.lr = 0x83933A5C;
	sub_83911640(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// addi r30,r11,-14368
	ctx.r30.s64 = ctx.r11.s64 + -14368;
	// bne cr6,0x83933ad4
	if (!cr6.eq) goto loc_83933AD4;
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x837b0c10
	ctx.lr = 0x83933A78;
	sub_837B0C10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e290
	ctx.lr = 0x83933A98;
	sub_8392E290(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x83933AA0;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x83933AAC;
	sub_837B0C10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e290
	ctx.lr = 0x83933ACC;
	sub_8392E290(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x83933AD4;
	sub_8387E8E0(ctx, base);
loc_83933AD4:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83911eb8
	ctx.lr = 0x83933AF8;
	sub_83911EB8(ctx, base);
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x837b0c10
	ctx.lr = 0x83933B04;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83933b18
	if (!cr6.eq) goto loc_83933B18;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83933B18:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83933B28;
	sub_8392DC70(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x8387e8e0
	ctx.lr = 0x83933B30;
	sub_8387E8E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83911eb8
	ctx.lr = 0x83933B3C;
	sub_83911EB8(ctx, base);
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x83933B48;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83933b5c
	if (!cr6.eq) goto loc_83933B5C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83933B5C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dc70
	ctx.lr = 0x83933B6C;
	sub_8392DC70(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x83933B74;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x837b0c10
	ctx.lr = 0x83933B80;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83933b94
	if (!cr6.eq) goto loc_83933B94;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83933B94:
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x83933BA4;
	sub_8392E1A0(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8387e8e0
	ctx.lr = 0x83933BAC;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x83933BB8;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83933bcc
	if (!cr6.eq) goto loc_83933BCC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83933BCC:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x83933BDC;
	sub_8392E1A0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83933BE4;
	sub_8387E8E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x83933BF0;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83933c04
	if (!cr6.eq) goto loc_83933C04;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83933C04:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x83933C14;
	sub_8392DBE8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x83933C1C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83933C24;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83933C2C:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r30,r11,-14368
	ctx.r30.s64 = ctx.r11.s64 + -14368;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-176
	ctx.r4.s64 = ctx.r30.s64 + -176;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x83933C44;
	sub_82D2E228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-164
	ctx.r4.s64 = ctx.r30.s64 + -164;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x83933C54;
	sub_837B0C10(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r4,r29,100
	ctx.r4.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x83933c64
	if (!cr6.eq) goto loc_83933C64;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83933C64:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e218
	ctx.lr = 0x83933C84;
	sub_8392E218(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x83933C8C;
	sub_8387E8E0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-156
	ctx.r4.s64 = ctx.r30.s64 + -156;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x83933C9C;
	sub_82D2E228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-144
	ctx.r4.s64 = ctx.r30.s64 + -144;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x837b0c10
	ctx.lr = 0x83933CAC;
	sub_837B0C10(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r4,r29,100
	ctx.r4.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x83933cbc
	if (!cr6.eq) goto loc_83933CBC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83933CBC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e218
	ctx.lr = 0x83933CDC;
	sub_8392E218(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x83933CE4;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-136
	ctx.r4.s64 = ctx.r30.s64 + -136;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x837b0c10
	ctx.lr = 0x83933CF0;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83933d04
	if (!cr6.eq) goto loc_83933D04;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83933D04:
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x83933D14;
	sub_8392E1A0(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8387e8e0
	ctx.lr = 0x83933D1C;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-124
	ctx.r4.s64 = ctx.r30.s64 + -124;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x837b0c10
	ctx.lr = 0x83933D28;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83933d3c
	if (!cr6.eq) goto loc_83933D3C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83933D3C:
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392e1a0
	ctx.lr = 0x83933D4C;
	sub_8392E1A0(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8387e8e0
	ctx.lr = 0x83933D54;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-112
	ctx.r4.s64 = ctx.r30.s64 + -112;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x837b0c10
	ctx.lr = 0x83933D60;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x83933d74
	if (!cr6.eq) goto loc_83933D74;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83933D74:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x83933D84;
	sub_8392DBE8(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8387e8e0
	ctx.lr = 0x83933D8C;
	sub_8387E8E0(ctx, base);
loc_83933D8C:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83933D94"))) PPC_WEAK_FUNC(sub_83933D94);
PPC_FUNC_IMPL(__imp__sub_83933D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83933D98"))) PPC_WEAK_FUNC(sub_83933D98);
PPC_FUNC_IMPL(__imp__sub_83933D98) {
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
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83545640
	ctx.lr = 0x83933DB8;
	sub_83545640(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83911748
	ctx.lr = 0x83933DC0;
	sub_83911748(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83932e98
	ctx.lr = 0x83933DC8;
	sub_83932E98(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83933e58
	if (cr6.gt) goto loc_83933E58;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83933e04
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83933E04;
	// bdzf 4*cr6+eq,0x83933e20
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83933E20;
	// bne cr6,0x83933e3c
	if (!cr6.eq) goto loc_83933E3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839333e0
	ctx.lr = 0x83933DF0;
	sub_839333E0(ctx, base);
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
loc_83933E04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83933658
	ctx.lr = 0x83933E0C;
	sub_83933658(ctx, base);
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
loc_83933E20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839337d0
	ctx.lr = 0x83933E28;
	sub_839337D0(ctx, base);
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
loc_83933E3C:
	// bl 0x83911640
	ctx.lr = 0x83933E40;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x83933e50
	if (!cr6.eq) goto loc_83933E50;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
loc_83933E50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839339e0
	ctx.lr = 0x83933E58;
	sub_839339E0(ctx, base);
loc_83933E58:
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

__attribute__((alias("__imp__sub_83933E6C"))) PPC_WEAK_FUNC(sub_83933E6C);
PPC_FUNC_IMPL(__imp__sub_83933E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83933E70"))) PPC_WEAK_FUNC(sub_83933E70);
PPC_FUNC_IMPL(__imp__sub_83933E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,13120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13120);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83933E7C"))) PPC_WEAK_FUNC(sub_83933E7C);
PPC_FUNC_IMPL(__imp__sub_83933E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83933E80"))) PPC_WEAK_FUNC(sub_83933E80);
PPC_FUNC_IMPL(__imp__sub_83933E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83933E88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83933EAC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83933ef4
	if (cr6.eq) goto loc_83933EF4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x83933ECC;
	sub_8392CFC8(ctx, base);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-13496
	ctx.r9.s64 = ctx.r10.s64 + -13496;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83933EF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83933F00"))) PPC_WEAK_FUNC(sub_83933F00);
PPC_FUNC_IMPL(__imp__sub_83933F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83933f24
	if (cr6.eq) goto loc_83933F24;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_83933F24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83933F2C"))) PPC_WEAK_FUNC(sub_83933F2C);
PPC_FUNC_IMPL(__imp__sub_83933F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

