#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_839A58A8"))) PPC_WEAK_FUNC(sub_839A58A8);
PPC_FUNC_IMPL(__imp__sub_839A58A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839A58B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x839A58BC;
	sub_82DAD2E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a599c
	if (cr6.eq) goto loc_839A599C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82db0a88
	ctx.lr = 0x839A58D0;
	sub_82DB0A88(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// clrlwi r25,r3,24
	ctx.r25.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r30,r29,72
	ctx.r30.s64 = ctx.r29.s64 + 72;
	// li r27,3
	ctx.r27.s64 = 3;
loc_839A58E4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x839a58f8
	if (cr6.eq) goto loc_839A58F8;
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// beq cr6,0x839a5948
	if (cr6.eq) goto loc_839A5948;
loc_839A58F8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a592c
	if (cr6.eq) goto loc_839A592C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x839a5948
	if (!cr6.eq) goto loc_839A5948;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839a36d8
	ctx.lr = 0x839A5918;
	sub_839A36D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a5948
	if (cr6.eq) goto loc_839A5948;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// b 0x839a5948
	goto loc_839A5948;
loc_839A592C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839a3fd0
	ctx.lr = 0x839A5938;
	sub_839A3FD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a5948
	if (cr6.eq) goto loc_839A5948;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_839A5948:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x839a58e4
	if (cr6.lt) goto loc_839A58E4;
	// bl 0x830fe8a0
	ctx.lr = 0x839A595C;
	sub_830FE8A0(ctx, base);
	// bl 0x835240d8
	ctx.lr = 0x839A5960;
	sub_835240D8(ctx, base);
	// ld r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,3000
	cr6.compare<uint64_t>(ctx.r10.u64, 3000, xer);
	// blt cr6,0x839a597c
	if (cr6.lt) goto loc_839A597C;
	// std r3,80(r29)
	PPC_STORE_U64(ctx.r29.u32 + 80, ctx.r3.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x839a5980
	goto loc_839A5980;
loc_839A597C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_839A5980:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a599c
	if (cr6.eq) goto loc_839A599C;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x839a599c
	if (cr6.eq) goto loc_839A599C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839a4518
	ctx.lr = 0x839A599C;
	sub_839A4518(ctx, base);
loc_839A599C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A59A4"))) PPC_WEAK_FUNC(sub_839A59A4);
PPC_FUNC_IMPL(__imp__sub_839A59A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A59A8"))) PPC_WEAK_FUNC(sub_839A59A8);
PPC_FUNC_IMPL(__imp__sub_839A59A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r7,-31742
	ctx.r7.s64 = -2080243712;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r11,r11,-18904
	ctx.r11.s64 = ctx.r11.s64 + -18904;
	// lwz r10,-18696(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -18696);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839a5b68
	if (!cr6.eq) goto loc_839A5B68;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r9,56
	ctx.r9.s64 = 56;
	// stw r10,-18696(r7)
	PPC_STORE_U32(ctx.r7.u32 + -18696, ctx.r10.u32);
	// li r10,52
	ctx.r10.s64 = 52;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// li r8,99
	ctx.r8.s64 = 99;
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// li r10,84
	ctx.r10.s64 = 84;
	// li r9,99
	ctx.r9.s64 = 99;
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// li r10,25
	ctx.r10.s64 = 25;
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,34
	ctx.r9.s64 = 34;
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// li r8,83
	ctx.r8.s64 = 83;
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// li r10,99
	ctx.r10.s64 = 99;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r8,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r9,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r8,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// li r8,34
	ctx.r8.s64 = 34;
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// li r9,84
	ctx.r9.s64 = 84;
	// stw r8,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r8.u32);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r9,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r9.u32);
	// li r10,26
	ctx.r10.s64 = 26;
	// li r9,34
	ctx.r9.s64 = 34;
	// stw r8,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r8.u32);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// li r8,99
	ctx.r8.s64 = 99;
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r9,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r9.u32);
	// li r9,83
	ctx.r9.s64 = 83;
	// stw r8,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r8.u32);
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// li r8,35
	ctx.r8.s64 = 35;
	// li r10,47
	ctx.r10.s64 = 47;
	// stw r9,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r9.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r8,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r8.u32);
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r9,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r9.u32);
	// li r10,35
	ctx.r10.s64 = 35;
	// stw r8,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r8.u32);
	// li r9,47
	ctx.r9.s64 = 47;
	// li r8,84
	ctx.r8.s64 = 84;
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// stw r9,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r9.u32);
	// li r10,99
	ctx.r10.s64 = 99;
	// stw r8,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r8.u32);
	// li r9,35
	ctx.r9.s64 = 35;
	// li r8,47
	ctx.r8.s64 = 47;
	// stw r10,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// stw r9,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r9.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r8,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r8.u32);
	// li r9,99
	ctx.r9.s64 = 99;
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r10,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r10.u32);
	// stw r9,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r9.u32);
	// li r10,47
	ctx.r10.s64 = 47;
	// stw r8,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r8.u32);
	// li r9,21
	ctx.r9.s64 = 21;
	// li r8,83
	ctx.r8.s64 = 83;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// stw r9,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r9.u32);
	// stw r8,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r8.u32);
loc_839A5B68:
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r6,r5,24
	ctx.r6.u64 = ctx.r5.u32 & 0xFF;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lwzx r4,r10,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x839a5bb8
	if (cr6.gt) goto loc_839A5BB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_839A5BB8:
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,99
	cr6.compare<uint32_t>(ctx.r11.u32, 99, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// li r11,104
	ctx.r11.s64 = 104;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A5BD0"))) PPC_WEAK_FUNC(sub_839A5BD0);
PPC_FUNC_IMPL(__imp__sub_839A5BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839A5BD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// sth r3,166(r1)
	PPC_STORE_U16(ctx.r1.u32 + 166, ctx.r3.u16);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// bge cr6,0x839a5cac
	if (!cr6.lt) goto loc_839A5CAC;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x839a59a8
	ctx.lr = 0x839A5C0C;
	sub_839A59A8(ctx, base);
	// lbz r30,166(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 166);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r28,167(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 167);
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// bgt cr6,0x839a5c54
	if (cr6.gt) goto loc_839A5C54;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bgt cr6,0x839a5c54
	if (cr6.gt) goto loc_839A5C54;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x839a5c54
	if (cr6.gt) goto loc_839A5C54;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x839a5c54
	if (cr6.gt) goto loc_839A5C54;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839A5C54:
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x839a59a8
	ctx.lr = 0x839A5C74;
	sub_839A59A8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bgt cr6,0x839a5cac
	if (cr6.gt) goto loc_839A5CAC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bgt cr6,0x839a5cac
	if (cr6.gt) goto loc_839A5CAC;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x839a5cac
	if (cr6.gt) goto loc_839A5CAC;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x839a5cb0
	if (!cr6.gt) goto loc_839A5CB0;
loc_839A5CAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839A5CB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A5CB8"))) PPC_WEAK_FUNC(sub_839A5CB8);
PPC_FUNC_IMPL(__imp__sub_839A5CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// sth r3,22(r1)
	PPC_STORE_U16(ctx.r1.u32 + 22, ctx.r3.u16);
	// sth r4,30(r1)
	PPC_STORE_U16(ctx.r1.u32 + 30, ctx.r4.u16);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x839a5e20
	if (cr6.gt) goto loc_839A5E20;
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// addi r10,r10,24384
	ctx.r10.s64 = ctx.r10.s64 + 24384;
	// lis r12,-31846
	ctx.r12.s64 = -2087059456;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23788
	ctx.r12.s64 = ctx.r12.s64 + 23788;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_839A5D1C;
	case 1:
		goto loc_839A5D2C;
	case 2:
		goto loc_839A5D40;
	case 3:
		goto loc_839A5D8C;
	case 4:
		goto loc_839A5D50;
	case 5:
		goto loc_839A5D60;
	case 6:
		goto loc_839A5D74;
	case 7:
		goto loc_839A5D94;
	case 8:
		goto loc_839A5DAC;
	case 9:
		goto loc_839A5DC0;
	case 10:
		goto loc_839A5D9C;
	case 11:
		goto loc_839A5DD0;
	default:
		return;
	}
	// lwz r28,23836(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 23836);
	// lwz r28,23852(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 23852);
	// lwz r28,23872(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 23872);
	// lwz r28,23948(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 23948);
	// lwz r28,23888(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 23888);
	// lwz r28,23904(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 23904);
	// lwz r28,23924(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 23924);
	// lwz r28,23956(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 23956);
	// lwz r28,23980(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 23980);
	// lwz r28,24000(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24000);
	// lwz r28,23964(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 23964);
	// lwz r28,24016(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24016);
loc_839A5D1C:
	// lbz r11,31(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 31);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x839a5d34
	if (cr6.gt) goto loc_839A5D34;
loc_839A5D2C:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x839a5dd4
	goto loc_839A5DD4;
loc_839A5D34:
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x839a5d48
	if (cr6.lt) goto loc_839A5D48;
loc_839A5D40:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x839a5dd4
	goto loc_839A5DD4;
loc_839A5D48:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x839a5dd4
	goto loc_839A5DD4;
loc_839A5D50:
	// lbz r11,31(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 31);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x839a5d68
	if (cr6.gt) goto loc_839A5D68;
loc_839A5D60:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x839a5dd4
	goto loc_839A5DD4;
loc_839A5D68:
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x839a5d7c
	if (cr6.lt) goto loc_839A5D7C;
loc_839A5D74:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x839a5dd4
	goto loc_839A5DD4;
loc_839A5D7C:
	// lbz r8,30(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 30);
	// lwz r11,68(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// bgt cr6,0x839a5d94
	if (cr6.gt) goto loc_839A5D94;
loc_839A5D8C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x839a5dd4
	goto loc_839A5DD4;
loc_839A5D94:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x839a5dd4
	goto loc_839A5DD4;
loc_839A5D9C:
	// lbz r11,31(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 31);
	// lwz r9,140(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x839a5db4
	if (cr6.gt) goto loc_839A5DB4;
loc_839A5DAC:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x839a5dd4
	goto loc_839A5DD4;
loc_839A5DB4:
	// lwz r9,152(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x839a5dc8
	if (cr6.lt) goto loc_839A5DC8;
loc_839A5DC0:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x839a5dd4
	goto loc_839A5DD4;
loc_839A5DC8:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x839a5dd4
	goto loc_839A5DD4;
loc_839A5DD0:
	// li r11,11
	ctx.r11.s64 = 11;
loc_839A5DD4:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r9,22(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 22);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bgt cr6,0x839a5e20
	if (cr6.gt) goto loc_839A5E20;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// bgt cr6,0x839a5e20
	if (cr6.gt) goto loc_839A5E20;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lbz r9,23(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 23);
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// bgt cr6,0x839a5e20
	if (cr6.gt) goto loc_839A5E20;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_839A5E20:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A5E28"))) PPC_WEAK_FUNC(sub_839A5E28);
PPC_FUNC_IMPL(__imp__sub_839A5E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// subfic r9,r11,47
	xer.ca = ctx.r11.u32 <= 47;
	ctx.r9.s64 = 47 - ctx.r11.s64;
	// subfic r8,r10,104
	xer.ca = ctx.r10.u32 <= 104;
	ctx.r8.s64 = 104 - ctx.r10.s64;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// stb r8,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A5E44"))) PPC_WEAK_FUNC(sub_839A5E44);
PPC_FUNC_IMPL(__imp__sub_839A5E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A5E48"))) PPC_WEAK_FUNC(sub_839A5E48);
PPC_FUNC_IMPL(__imp__sub_839A5E48) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x839a5e68
	if (!cr6.lt) goto loc_839A5E68;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x839a5e88
	goto loc_839A5E88;
loc_839A5E68:
	// lfs f13,8(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x839a5e84
	if (!cr6.gt) goto loc_839A5E84;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x839a5e88
	goto loc_839A5E88;
loc_839A5E84:
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_839A5E88:
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x839a5ea4
	if (cr6.lt) goto loc_839A5EA4;
	// lfs f13,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x839a5eb0
	if (!cr6.gt) goto loc_839A5EB0;
loc_839A5EA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_839A5EB0:
	// stfs f2,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A5EB8"))) PPC_WEAK_FUNC(sub_839A5EB8);
PPC_FUNC_IMPL(__imp__sub_839A5EB8) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A5EC4"))) PPC_WEAK_FUNC(sub_839A5EC4);
PPC_FUNC_IMPL(__imp__sub_839A5EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A5EC8"))) PPC_WEAK_FUNC(sub_839A5EC8);
PPC_FUNC_IMPL(__imp__sub_839A5EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839A5ED0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A5EE0;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,528
	ctx.r11.s64 = ctx.r31.s64 * 528;
	// lbz r10,41(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 41);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r11,1072
	ctx.r27.s64 = ctx.r11.s64 + 1072;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A5EFC:
	// lbzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x839a5f18
	if (cr6.eq) goto loc_839A5F18;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x839a5efc
	if (cr6.lt) goto loc_839A5EFC;
	// b 0x839a5f20
	goto loc_839A5F20;
loc_839A5F18:
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x839a5f94
	if (cr6.lt) goto loc_839A5F94;
loc_839A5F20:
	// li r31,0
	ctx.r31.s64 = 0;
loc_839A5F24:
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// bge cr6,0x839a5f34
	if (!cr6.lt) goto loc_839A5F34;
	// lbzx r5,r31,r30
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// b 0x839a5f38
	goto loc_839A5F38;
loc_839A5F34:
	// li r5,255
	ctx.r5.s64 = 255;
loc_839A5F38:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a0478
	ctx.lr = 0x839A5F44;
	sub_839A0478(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399f180
	ctx.lr = 0x839A5F4C;
	sub_8399F180(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// ble cr6,0x839a5f68
	if (!cr6.gt) goto loc_839A5F68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399f180
	ctx.lr = 0x839A5F60;
	sub_8399F180(ctx, base);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_839A5F68:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x839a5f24
	if (cr6.lt) goto loc_839A5F24;
	// cmplwi cr6,r28,32
	cr6.compare<uint32_t>(ctx.r28.u32, 32, xer);
	// bge cr6,0x839a5f8c
	if (!cr6.lt) goto loc_839A5F8C;
	// lbzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r30.u32);
	// stb r11,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839A5F8C:
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r11.u8);
loc_839A5F94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A5F9C"))) PPC_WEAK_FUNC(sub_839A5F9C);
PPC_FUNC_IMPL(__imp__sub_839A5F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A5FA0"))) PPC_WEAK_FUNC(sub_839A5FA0);
PPC_FUNC_IMPL(__imp__sub_839A5FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x839A5FA8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A5FB8;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,528
	ctx.r11.s64 = ctx.r31.s64 * 528;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r24,r11,1072
	ctx.r24.s64 = ctx.r11.s64 + 1072;
	// bl 0x8399f8b8
	ctx.lr = 0x839A5FC8;
	sub_8399F8B8(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r23,255
	ctx.r23.s64 = 255;
loc_839A5FD0:
	// clrlwi r30,r26,24
	ctx.r30.u64 = ctx.r26.u32 & 0xFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// add r25,r30,r28
	ctx.r25.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r10,32(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 32);
loc_839A5FE8:
	// lbzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x839a6004
	if (cr6.eq) goto loc_839A6004;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x839a5fe8
	if (cr6.lt) goto loc_839A5FE8;
	// b 0x839a600c
	goto loc_839A600C;
loc_839A6004:
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x839a6098
	if (cr6.lt) goto loc_839A6098;
loc_839A600C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_839A6010:
	// cmplwi cr6,r26,3
	cr6.compare<uint32_t>(ctx.r26.u32, 3, xer);
	// beq cr6,0x839a6020
	if (cr6.eq) goto loc_839A6020;
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(ctx.r26.u32, 4, xer);
	// bne cr6,0x839a6028
	if (!cr6.eq) goto loc_839A6028;
loc_839A6020:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x839a6074
	if (cr6.eq) goto loc_839A6074;
loc_839A6028:
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// bge cr6,0x839a6038
	if (!cr6.lt) goto loc_839A6038;
	// lbzx r5,r31,r28
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// b 0x839a603c
	goto loc_839A603C;
loc_839A6038:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_839A603C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a0478
	ctx.lr = 0x839A6048;
	sub_839A0478(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399f138
	ctx.lr = 0x839A6054;
	sub_8399F138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// ble cr6,0x839a6074
	if (!cr6.gt) goto loc_839A6074;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399f138
	ctx.lr = 0x839A606C;
	sub_8399F138(ctx, base);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_839A6074:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x839a6010
	if (cr6.lt) goto loc_839A6010;
	// cmplwi cr6,r27,32
	cr6.compare<uint32_t>(ctx.r27.u32, 32, xer);
	// bge cr6,0x839a6090
	if (!cr6.lt) goto loc_839A6090;
	// lbzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r28.u32);
	// b 0x839a6094
	goto loc_839A6094;
loc_839A6090:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_839A6094:
	// stb r11,32(r25)
	PPC_STORE_U8(ctx.r25.u32 + 32, ctx.r11.u8);
loc_839A6098:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r26,6
	cr6.compare<uint32_t>(ctx.r26.u32, 6, xer);
	// blt cr6,0x839a5fd0
	if (cr6.lt) goto loc_839A5FD0;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r9,r28,38
	ctx.r9.s64 = ctx.r28.s64 + 38;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_839A60B0:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A60B8:
	// lbzx r8,r11,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// beq cr6,0x839a60d4
	if (cr6.eq) goto loc_839A60D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x839a60b8
	if (cr6.lt) goto loc_839A60B8;
	// b 0x839a60dc
	goto loc_839A60DC;
loc_839A60D4:
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x839a60e0
	if (cr6.lt) goto loc_839A60E0;
loc_839A60DC:
	// stb r23,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r23.u8);
loc_839A60E0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x839a60b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839A60B0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A60F0"))) PPC_WEAK_FUNC(sub_839A60F0);
PPC_FUNC_IMPL(__imp__sub_839A60F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839A60F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A6108;
	sub_8399F8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399f950
	ctx.lr = 0x839A6110;
	sub_8399F950(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A6118;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ec58
	ctx.lr = 0x839A6134;
	sub_8399EC58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A613C"))) PPC_WEAK_FUNC(sub_839A613C);
PPC_FUNC_IMPL(__imp__sub_839A613C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A6140"))) PPC_WEAK_FUNC(sub_839A6140);
PPC_FUNC_IMPL(__imp__sub_839A6140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839A6148;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A6158;
	sub_8399F8B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8399fa70
	ctx.lr = 0x839A6160;
	sub_8399FA70(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A6168;
	sub_8399F8B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A6170;
	sub_8399F8B8(ctx, base);
	// mulli r31,r29,532
	ctx.r31.s64 = ctx.r29.s64 * 532;
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea10
	ctx.lr = 0x839A6184;
	sub_8399EA10(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// clrlwi r4,r27,24
	ctx.r4.u64 = ctx.r27.u32 & 0xFF;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x839a0818
	ctx.lr = 0x839A619C;
	sub_839A0818(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A61A4"))) PPC_WEAK_FUNC(sub_839A61A4);
PPC_FUNC_IMPL(__imp__sub_839A61A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A61A8"))) PPC_WEAK_FUNC(sub_839A61A8);
PPC_FUNC_IMPL(__imp__sub_839A61A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r8,0
	ctx.r8.s64 = 0;
loc_839A61AC:
	// add r9,r8,r3
	ctx.r9.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lbz r11,38(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 38);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x839a6254
	if (cr6.eq) goto loc_839A6254;
	// cntlzw r7,r4
	ctx.r7.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x839a623c
	if (!cr6.eq) goto loc_839A623C;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x839a62b4
	if (cr6.eq) goto loc_839A62B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_839A61E0:
	// lbzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x839a622c
	if (cr6.eq) goto loc_839A622C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// blt cr6,0x839a61e0
	if (cr6.lt) goto loc_839A61E0;
loc_839A61F8:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x839a6224
	if (!cr6.lt) goto loc_839A6224;
loc_839A6208:
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r9,38(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 38);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// stb r9,37(r10)
	PPC_STORE_U8(ctx.r10.u32 + 37, ctx.r9.u8);
	// blt cr6,0x839a6208
	if (cr6.lt) goto loc_839A6208;
loc_839A6224:
	// stb r5,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r5.u8);
	// blr 
	return;
loc_839A622C:
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x839a61f8
	if (!cr6.lt) goto loc_839A61F8;
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// beq cr6,0x839a628c
	if (cr6.eq) goto loc_839A628C;
loc_839A623C:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x839a61ac
	if (cr6.lt) goto loc_839A61AC;
	// blr 
	return;
loc_839A6254:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x839a6280
	if (!cr6.lt) goto loc_839A6280;
loc_839A6264:
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r9,38(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 38);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// stb r9,37(r10)
	PPC_STORE_U8(ctx.r10.u32 + 37, ctx.r9.u8);
	// blt cr6,0x839a6264
	if (cr6.lt) goto loc_839A6264;
loc_839A6280:
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// blr 
	return;
loc_839A628C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_839A6290:
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r9,38(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 38);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// stb r9,37(r10)
	PPC_STORE_U8(ctx.r10.u32 + 37, ctx.r9.u8);
	// blt cr6,0x839a6290
	if (cr6.lt) goto loc_839A6290;
	// stb r5,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r5.u8);
	// blr 
	return;
loc_839A62B4:
	// stb r5,38(r9)
	PPC_STORE_U8(ctx.r9.u32 + 38, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A62BC"))) PPC_WEAK_FUNC(sub_839A62BC);
PPC_FUNC_IMPL(__imp__sub_839A62BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A62C0"))) PPC_WEAK_FUNC(sub_839A62C0);
PPC_FUNC_IMPL(__imp__sub_839A62C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839A62C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x839a6310
	if (!cr6.eq) goto loc_839A6310;
	// bl 0x8399f8b8
	ctx.lr = 0x839A62E0;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
loc_839A62F0:
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399eb30
	ctx.lr = 0x839A62FC;
	sub_8399EB30(ctx, base);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, xer);
	// beq cr6,0x839a631c
	if (cr6.eq) goto loc_839A631C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x839a62f0
	if (cr6.lt) goto loc_839A62F0;
loc_839A6310:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839A631C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399ee20
	ctx.lr = 0x839A6328;
	sub_8399EE20(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,118
	ctx.r10.s64 = ctx.r1.s64 + 118;
loc_839A6330:
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// beq cr6,0x839a6364
	if (cr6.eq) goto loc_839A6364;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x839a6330
	if (cr6.lt) goto loc_839A6330;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399ee10
	ctx.lr = 0x839A6358;
	sub_8399EE10(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839A6364:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x839a6390
	if (!cr6.lt) goto loc_839A6390;
	// addi r9,r1,118
	ctx.r9.s64 = ctx.r1.s64 + 118;
	// addi r8,r1,117
	ctx.r8.s64 = ctx.r1.s64 + 117;
loc_839A6374:
	// lbzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// stbx r7,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// blt cr6,0x839a6374
	if (cr6.lt) goto loc_839A6374;
loc_839A6390:
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399ee10
	ctx.lr = 0x839A63A4;
	sub_8399EE10(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A63B0"))) PPC_WEAK_FUNC(sub_839A63B0);
PPC_FUNC_IMPL(__imp__sub_839A63B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839A63B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_839A63DC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r4,r8
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, xer);
	// beq cr6,0x839a63fc
	if (cr6.eq) goto loc_839A63FC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// blt cr6,0x839a63dc
	if (cr6.lt) goto loc_839A63DC;
	// b 0x839a6400
	goto loc_839A6400;
loc_839A63FC:
	// li r9,1
	ctx.r9.s64 = 1;
loc_839A6400:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a649c
	if (!cr6.eq) goto loc_839A649C;
	// bl 0x8399f8b8
	ctx.lr = 0x839A6410;
	sub_8399F8B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A6418;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea10
	ctx.lr = 0x839A6430;
	sub_8399EA10(ctx, base);
	// mulli r11,r30,528
	ctx.r11.s64 = ctx.r30.s64 * 528;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x839a0478
	ctx.lr = 0x839A6448;
	sub_839A0478(ctx, base);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stb r29,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r29.u8);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_839A6458:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// bge cr6,0x839a648c
	if (!cr6.lt) goto loc_839A648C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8399f0f0
	ctx.lr = 0x839A646C;
	sub_8399F0F0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// stbx r3,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u8);
	// ble cr6,0x839a648c
	if (!cr6.gt) goto loc_839A648C;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_839A648C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x839a6458
	if (cr6.lt) goto loc_839A6458;
loc_839A649C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A64A8"))) PPC_WEAK_FUNC(sub_839A64A8);
PPC_FUNC_IMPL(__imp__sub_839A64A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bge cr6,0x839a64d8
	if (!cr6.lt) goto loc_839A64D8;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bge cr6,0x839a64d8
	if (!cr6.lt) goto loc_839A64D8;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r9,r10,26124
	ctx.r9.s64 = ctx.r10.s64 + 26124;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// blr 
	return;
loc_839A64D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A64E0"))) PPC_WEAK_FUNC(sub_839A64E0);
PPC_FUNC_IMPL(__imp__sub_839A64E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839A6528;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,88(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x839A6540;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-31768
	ctx.r6.s64 = -2081947648;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f31,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// addi r4,r6,24364
	ctx.r4.s64 = ctx.r6.s64 + 24364;
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// lfs f13,25552(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 25552);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lfs f0,-24912(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,11796(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11796);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f11,-25104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-18728(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18728);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f4,f11
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fmuls f13,f3,f10
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fadds f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fmuls f12,f2,f4
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subfic r5,r11,47
	xer.ca = ctx.r11.u32 <= 47;
	ctx.r5.s64 = 47 - ctx.r11.s64;
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fadds f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fmuls f7,f8,f3
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// stfs f7,20(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// fmuls f0,f2,f4
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r11,24364(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24364);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f1,32(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f3
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
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

__attribute__((alias("__imp__sub_839A665C"))) PPC_WEAK_FUNC(sub_839A665C);
PPC_FUNC_IMPL(__imp__sub_839A665C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A6660"))) PPC_WEAK_FUNC(sub_839A6660);
PPC_FUNC_IMPL(__imp__sub_839A6660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839A6668;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x839a66cc
	if (cr6.eq) goto loc_839A66CC;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// beq cr6,0x839a66c0
	if (cr6.eq) goto loc_839A66C0;
	// lwz r29,100(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	// addi r30,r5,100
	ctx.r30.s64 = ctx.r5.s64 + 100;
	// bl 0x839affe0
	ctx.lr = 0x839A6694;
	sub_839AFFE0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839A66A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839a64e0
	ctx.lr = 0x839A66B4;
	sub_839A64E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839A66C0:
	// li r28,2
	ctx.r28.s64 = 2;
	// li r27,4
	ctx.r27.s64 = 4;
	// b 0x839a66d4
	goto loc_839A66D4;
loc_839A66CC:
	// li r28,1
	ctx.r28.s64 = 1;
	// li r27,3
	ctx.r27.s64 = 3;
loc_839A66D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r29,100(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	// addi r30,r5,100
	ctx.r30.s64 = ctx.r5.s64 + 100;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x839affe0
	ctx.lr = 0x839A66F8;
	sub_839AFFE0(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839A670C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839A6724;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,104(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x839A673C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// std r5,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r5.u64);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x839b0008
	ctx.lr = 0x839A6760;
	sub_839B0008(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839A6774;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a67e4
	if (cr6.eq) goto loc_839A67E4;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839A67A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839A67BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// std r7,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r7.u64);
loc_839A67E4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x839b0008
	ctx.lr = 0x839A67F0;
	sub_839B0008(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839A6804;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a6848
	if (cr6.eq) goto loc_839A6848;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839A6828;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f9,36(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f11,32(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_839A6848:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lfs f11,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r11,24364
	ctx.r6.s64 = ctx.r11.s64 + 24364;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lwz r10,24364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24364);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lfs f13,7472(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7472);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lfs f12,20052(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20052);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,12(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// subf r3,r10,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lfs f0,-24912(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f9,112(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fdivs f2,f10,f4
	ctx.f2.f64 = double(float(ctx.f10.f64 / ctx.f4.f64));
	// fdivs f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 / ctx.f5.f64));
	// fmuls f1,f3,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f1,48(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fmuls f13,f2,f12
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fadds f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fnmsubs f7,f8,f3,f10
	ctx.f7.f64 = double(float(-(ctx.f8.f64 * ctx.f3.f64 - ctx.f10.f64)));
	// stfs f7,40(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lfs f6,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// subfic r7,r10,47
	xer.ca = ctx.r10.u32 <= 47;
	ctx.r7.s64 = 47 - ctx.r10.s64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f5,112(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fadds f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fnmsubs f0,f1,f2,f6
	ctx.f0.f64 = double(float(-(ctx.f1.f64 * ctx.f2.f64 - ctx.f6.f64)));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A692C"))) PPC_WEAK_FUNC(sub_839A692C);
PPC_FUNC_IMPL(__imp__sub_839A692C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A6930"))) PPC_WEAK_FUNC(sub_839A6930);
PPC_FUNC_IMPL(__imp__sub_839A6930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839A6978;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_839A69B0"))) PPC_WEAK_FUNC(sub_839A69B0);
PPC_FUNC_IMPL(__imp__sub_839A69B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839A69F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_839A6A30"))) PPC_WEAK_FUNC(sub_839A6A30);
PPC_FUNC_IMPL(__imp__sub_839A6A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a6a5c
	if (cr6.eq) goto loc_839A6A5C;
	// lfs f0,32(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,36(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_839A6A5C:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lbz r8,1(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r31,r11,24576
	ctx.r31.s64 = ctx.r11.s64 + 24576;
	// lfs f12,48(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,40(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lis r30,-32222
	ctx.r30.s64 = -2111700992;
	// lfs f10,52(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,24576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24576);
	// lfs f9,44(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,-24912(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r7,r11,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r11.s64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,-26260(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// std r5,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r5.u64);
	// lfd f8,-32(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r10.u64);
	// lfd f7,-32(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// std r9,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r9.u64);
	// lfd f6,-32(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r8,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r8.u64);
	// lfd f5,-32(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f2,f8
	ctx.f2.f64 = double(ctx.f8.s64);
	// fcfid f3,f7
	ctx.f3.f64 = double(ctx.f7.s64);
	// fcfid f8,f6
	ctx.f8.f64 = double(ctx.f6.s64);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f6,f2
	ctx.f6.f64 = double(float(ctx.f2.f64));
	// frsp f7,f3
	ctx.f7.f64 = double(float(ctx.f3.f64));
	// frsp f1,f4
	ctx.f1.f64 = double(float(ctx.f4.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// fadds f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fadds f5,f1,f0
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fdivs f1,f3,f4
	ctx.f1.f64 = double(float(ctx.f3.f64 / ctx.f4.f64));
	// fdivs f2,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 / ctx.f6.f64));
	// fsubs f0,f13,f2
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fmadds f13,f12,f1,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f11.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f12,f10,f0,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A6B24"))) PPC_WEAK_FUNC(sub_839A6B24);
PPC_FUNC_IMPL(__imp__sub_839A6B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A6B28"))) PPC_WEAK_FUNC(sub_839A6B28);
PPC_FUNC_IMPL(__imp__sub_839A6B28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a6b48
	if (cr6.eq) goto loc_839A6B48;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,52
	ctx.r10.s64 = 52;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// blr 
	return;
loc_839A6B48:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lfs f0,44(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// lfs f12,40(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r11,24576
	ctx.r8.s64 = ctx.r11.s64 + 24576;
	// lfs f10,52(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lfs f9,48(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lwz r9,24576(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24576);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lfs f0,-26260(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f7,-16(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fdivs f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// fcfid f4,f8
	ctx.f4.f64 = double(ctx.f8.s64);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fdivs f3,f11,f9
	ctx.f3.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// fsubs f1,f0,f5
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// frsp f0,f4
	ctx.f0.f64 = double(float(ctx.f4.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f13,f2,f3
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fctiwz f10,f12
	ctx.f10.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfd f10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A6BE8"))) PPC_WEAK_FUNC(sub_839A6BE8);
PPC_FUNC_IMPL(__imp__sub_839A6BE8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f9,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f6,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fadds f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fadds f9,f6,f12
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// blt cr6,0x839a6c34
	if (cr6.lt) goto loc_839A6C34;
	// fcmpu cr6,f0,f8
	cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x839a6c30
	if (!cr6.gt) goto loc_839A6C30;
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
	// b 0x839a6c34
	goto loc_839A6C34;
loc_839A6C30:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_839A6C34:
	// fcmpu cr6,f10,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x839a6c44
	if (!cr6.lt) goto loc_839A6C44;
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// b 0x839a6c50
	goto loc_839A6C50;
loc_839A6C44:
	// fcmpu cr6,f10,f8
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// bgt cr6,0x839a6c50
	if (cr6.gt) goto loc_839A6C50;
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
loc_839A6C50:
	// fcmpu cr6,f11,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x839a6c6c
	if (cr6.lt) goto loc_839A6C6C;
	// fcmpu cr6,f11,f9
	cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// ble cr6,0x839a6c68
	if (!cr6.gt) goto loc_839A6C68;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// b 0x839a6c6c
	goto loc_839A6C6C;
loc_839A6C68:
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
loc_839A6C6C:
	// fcmpu cr6,f7,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f7.f64, ctx.f12.f64);
	// bge cr6,0x839a6c7c
	if (!cr6.lt) goto loc_839A6C7C;
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// b 0x839a6c88
	goto loc_839A6C88;
loc_839A6C7C:
	// fcmpu cr6,f7,f9
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f7.f64, ctx.f9.f64);
	// bgt cr6,0x839a6c88
	if (cr6.gt) goto loc_839A6C88;
	// fmr f9,f7
	ctx.f9.f64 = ctx.f7.f64;
loc_839A6C88:
	// fsubs f10,f8,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f11,f9,f12
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x839a6cb4
	if (!cr6.lt) goto loc_839A6CB4;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_839A6CB4:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A6CC4"))) PPC_WEAK_FUNC(sub_839A6CC4);
PPC_FUNC_IMPL(__imp__sub_839A6CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A6CC8"))) PPC_WEAK_FUNC(sub_839A6CC8);
PPC_FUNC_IMPL(__imp__sub_839A6CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
loc_839A6CD8:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x839a6d20
	if (cr6.lt) goto loc_839A6D20;
	// beq cr6,0x839a6d08
	if (cr6.eq) goto loc_839A6D08;
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// bge cr6,0x839a6d4c
	if (!cr6.lt) goto loc_839A6D4C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a6d34
	if (!cr6.lt) goto loc_839A6D34;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,66(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 66);
	// b 0x839a6d38
	goto loc_839A6D38;
loc_839A6D08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a6d34
	if (!cr6.lt) goto loc_839A6D34;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// b 0x839a6d38
	goto loc_839A6D38;
loc_839A6D20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a6d34
	if (!cr6.lt) goto loc_839A6D34;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// b 0x839a6d38
	goto loc_839A6D38;
loc_839A6D34:
	// li r11,13
	ctx.r11.s64 = 13;
loc_839A6D38:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x839a6d4c
	if (!cr6.gt) goto loc_839A6D4C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x839a6d50
	if (!cr6.gt) goto loc_839A6D50;
loc_839A6D4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A6D50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a6d60
	if (cr6.eq) goto loc_839A6D60;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_839A6D60:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// blt cr6,0x839a6cd8
	if (cr6.lt) goto loc_839A6CD8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A6D70"))) PPC_WEAK_FUNC(sub_839A6D70);
PPC_FUNC_IMPL(__imp__sub_839A6D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
loc_839A6D80:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x839a6dc8
	if (cr6.lt) goto loc_839A6DC8;
	// beq cr6,0x839a6db0
	if (cr6.eq) goto loc_839A6DB0;
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// bge cr6,0x839a6df4
	if (!cr6.lt) goto loc_839A6DF4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a6ddc
	if (!cr6.lt) goto loc_839A6DDC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,66(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 66);
	// b 0x839a6de0
	goto loc_839A6DE0;
loc_839A6DB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a6ddc
	if (!cr6.lt) goto loc_839A6DDC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// b 0x839a6de0
	goto loc_839A6DE0;
loc_839A6DC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a6ddc
	if (!cr6.lt) goto loc_839A6DDC;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// b 0x839a6de0
	goto loc_839A6DE0;
loc_839A6DDC:
	// li r11,13
	ctx.r11.s64 = 13;
loc_839A6DE0:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x839a6df4
	if (cr6.lt) goto loc_839A6DF4;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x839a6df8
	if (!cr6.gt) goto loc_839A6DF8;
loc_839A6DF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A6DF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a6e08
	if (cr6.eq) goto loc_839A6E08;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_839A6E08:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// blt cr6,0x839a6d80
	if (cr6.lt) goto loc_839A6D80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A6E18"))) PPC_WEAK_FUNC(sub_839A6E18);
PPC_FUNC_IMPL(__imp__sub_839A6E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
loc_839A6E28:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x839a6e70
	if (cr6.lt) goto loc_839A6E70;
	// beq cr6,0x839a6e58
	if (cr6.eq) goto loc_839A6E58;
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// bge cr6,0x839a6e9c
	if (!cr6.lt) goto loc_839A6E9C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a6e84
	if (!cr6.lt) goto loc_839A6E84;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,66(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 66);
	// b 0x839a6e88
	goto loc_839A6E88;
loc_839A6E58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a6e84
	if (!cr6.lt) goto loc_839A6E84;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// b 0x839a6e88
	goto loc_839A6E88;
loc_839A6E70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a6e84
	if (!cr6.lt) goto loc_839A6E84;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// b 0x839a6e88
	goto loc_839A6E88;
loc_839A6E84:
	// li r11,13
	ctx.r11.s64 = 13;
loc_839A6E88:
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// blt cr6,0x839a6e9c
	if (cr6.lt) goto loc_839A6E9C;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x839a6ea0
	if (!cr6.gt) goto loc_839A6EA0;
loc_839A6E9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A6EA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a6eb0
	if (cr6.eq) goto loc_839A6EB0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_839A6EB0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// blt cr6,0x839a6e28
	if (cr6.lt) goto loc_839A6E28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A6EC0"))) PPC_WEAK_FUNC(sub_839A6EC0);
PPC_FUNC_IMPL(__imp__sub_839A6EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839A6EC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A6EE0;
	sub_8399F8B8(ctx, base);
	// mulli r30,r31,532
	ctx.r30.s64 = ctx.r31.s64 * 532;
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea10
	ctx.lr = 0x839A6EF4;
	sub_8399EA10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A6EFC;
	sub_8399F8B8(ctx, base);
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea10
	ctx.lr = 0x839A6F0C;
	sub_8399EA10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,255
	cr6.compare<int32_t>(ctx.r29.s32, 255, xer);
	// beq cr6,0x839a6fac
	if (cr6.eq) goto loc_839A6FAC;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x839a6fac
	if (cr6.eq) goto loc_839A6FAC;
	// bl 0x8399f8b8
	ctx.lr = 0x839A6F24;
	sub_8399F8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399f988
	ctx.lr = 0x839A6F2C;
	sub_8399F988(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A6F34;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8399fe30
	ctx.lr = 0x839A6F44;
	sub_8399FE30(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839A6F48;
	sub_8399F8B8(ctx, base);
	// mulli r31,r31,528
	ctx.r31.s64 = ctx.r31.s64 * 528;
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x839a0478
	ctx.lr = 0x839A6F60;
	sub_839A0478(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839A6F64;
	sub_8399F8B8(ctx, base);
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// bl 0x839a0478
	ctx.lr = 0x839A6F78;
	sub_839A0478(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x839a9f28
	ctx.lr = 0x839A6F80;
	sub_839A9F28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a6fb8
	if (cr6.eq) goto loc_839A6FB8;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x839a6fec
	if (!cr6.eq) goto loc_839A6FEC;
	// clrlwi r5,r26,24
	ctx.r5.u64 = ctx.r26.u32 & 0xFF;
	// clrlwi r4,r27,24
	ctx.r4.u64 = ctx.r27.u32 & 0xFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82acc960
	ctx.lr = 0x839A6FA4;
	sub_82ACC960(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839a6fec
	if (!cr6.eq) goto loc_839A6FEC;
loc_839A6FAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_839A6FB8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a9f28
	ctx.lr = 0x839A6FC0;
	sub_839A9F28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a6fec
	if (cr6.eq) goto loc_839A6FEC;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x839a6fec
	if (!cr6.eq) goto loc_839A6FEC;
	// clrlwi r5,r26,24
	ctx.r5.u64 = ctx.r26.u32 & 0xFF;
	// clrlwi r4,r28,24
	ctx.r4.u64 = ctx.r28.u32 & 0xFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82acc960
	ctx.lr = 0x839A6FE4;
	sub_82ACC960(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x839a6fac
	if (cr6.eq) goto loc_839A6FAC;
loc_839A6FEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A6FF8"))) PPC_WEAK_FUNC(sub_839A6FF8);
PPC_FUNC_IMPL(__imp__sub_839A6FF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x839A7000;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x8399f8b8
	ctx.lr = 0x839A701C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// bl 0x8399f8b8
	ctx.lr = 0x839A702C;
	sub_8399F8B8(ctx, base);
	// mulli r10,r30,528
	ctx.r10.s64 = ctx.r30.s64 * 528;
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r24,r11,1072
	ctx.r24.s64 = ctx.r11.s64 + 1072;
	// bl 0x8399ea10
	ctx.lr = 0x839A7044;
	sub_8399EA10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399ea10
	ctx.lr = 0x839A7054;
	sub_8399EA10(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,1
	cr6.compare<uint32_t>(ctx.r23.u32, 1, xer);
	// bne cr6,0x839a7080
	if (!cr6.eq) goto loc_839A7080;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399ea10
	ctx.lr = 0x839A706C;
	sub_8399EA10(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399ea10
	ctx.lr = 0x839A707C;
	sub_8399EA10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_839A7080:
	// bl 0x839a9a80
	ctx.lr = 0x839A7084;
	sub_839A9A80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a71d8
	if (cr6.eq) goto loc_839A71D8;
	// bl 0x830ff290
	ctx.lr = 0x839A7094;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839A7098;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x839a71d8
	if (!cr6.eq) goto loc_839A71D8;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,192(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// bl 0x82a0c738
	ctx.lr = 0x839A70B4;
	sub_82A0C738(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82a16440
	ctx.lr = 0x839A70BC;
	sub_82A16440(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
loc_839A70C0:
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x839a70d0
	if (cr6.lt) goto loc_839A70D0;
	// li r10,23
	ctx.r10.s64 = 23;
loc_839A70D0:
	// mulli r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 * 112;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// subf r7,r3,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r3.s64;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r4,r29
	ctx.r9.u64 = ctx.r4.u64 & ctx.r29.u64;
	// blt cr6,0x839a70fc
	if (cr6.lt) goto loc_839A70FC;
	// li r10,23
	ctx.r10.s64 = 23;
loc_839A70FC:
	// mulli r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 * 112;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// subf r6,r3,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r3.s64;
	// subfic r5,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r8,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// blt cr6,0x839a7128
	if (cr6.lt) goto loc_839A7128;
	// li r10,23
	ctx.r10.s64 = 23;
loc_839A7128:
	// mulli r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 * 112;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// subf r6,r3,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r3.s64;
	// subfic r5,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r8,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// blt cr6,0x839a7154
	if (cr6.lt) goto loc_839A7154;
	// li r10,23
	ctx.r10.s64 = 23;
loc_839A7154:
	// mulli r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 * 112;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// subf r6,r3,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r3.s64;
	// subfic r5,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r8,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// blt cr6,0x839a7180
	if (cr6.lt) goto loc_839A7180;
	// li r10,23
	ctx.r10.s64 = 23;
loc_839A7180:
	// mulli r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 * 112;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// subf r6,r3,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r3.s64;
	// subfic r5,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r8,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// blt cr6,0x839a71ac
	if (cr6.lt) goto loc_839A71AC;
	// li r10,23
	ctx.r10.s64 = 23;
loc_839A71AC:
	// mulli r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 * 112;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r8,24
	cr6.compare<uint32_t>(ctx.r8.u32, 24, xer);
	// subf r6,r3,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r3.s64;
	// subfic r5,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r10,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 & ctx.r9.u64;
	// blt cr6,0x839a70c0
	if (cr6.lt) goto loc_839A70C0;
loc_839A71D8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a0478
	ctx.lr = 0x839A71E8;
	sub_839A0478(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x839A71EC;
	sub_825832E0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// and r31,r9,r29
	ctx.r31.u64 = ctx.r9.u64 & ctx.r29.u64;
	// bl 0x839a0478
	ctx.lr = 0x839A7208;
	sub_839A0478(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x839A720C;
	sub_825832E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x839a7240
	if (cr6.eq) goto loc_839A7240;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a0478
	ctx.lr = 0x839A7224;
	sub_839A0478(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x839A7228;
	sub_825832E0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r31
	ctx.r3.u64 = ctx.r8.u64 & ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_839A7240:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A724C"))) PPC_WEAK_FUNC(sub_839A724C);
PPC_FUNC_IMPL(__imp__sub_839A724C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A7250"))) PPC_WEAK_FUNC(sub_839A7250);
PPC_FUNC_IMPL(__imp__sub_839A7250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x839A7258;
	__savegprlr_23(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mulli r24,r3,532
	ctx.r24.s64 = ctx.r3.s64 * 532;
	// bl 0x8399f8b8
	ctx.lr = 0x839A7270;
	sub_8399F8B8(ctx, base);
	// add r11,r3,r24
	ctx.r11.u64 = ctx.r3.u64 + ctx.r24.u64;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// bl 0x8399f8b8
	ctx.lr = 0x839A727C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,528
	ctx.r11.s64 = ctx.r31.s64 * 528;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r29,r11,1072
	ctx.r29.s64 = ctx.r11.s64 + 1072;
	// bl 0x8399ea10
	ctx.lr = 0x839A7294;
	sub_8399EA10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8399ea10
	ctx.lr = 0x839A72A4;
	sub_8399EA10(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a0478
	ctx.lr = 0x839A72B8;
	sub_839A0478(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x839a0478
	ctx.lr = 0x839A72C8;
	sub_839A0478(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a9f28
	ctx.lr = 0x839A72D0;
	sub_839A9F28(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839a72f0
	if (!cr6.eq) goto loc_839A72F0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x839a9f28
	ctx.lr = 0x839A72E4;
	sub_839A9F28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a7300
	if (cr6.eq) goto loc_839A7300;
loc_839A72F0:
	// cmpwi cr6,r28,11
	cr6.compare<int32_t>(ctx.r28.s32, 11, xer);
	// bge cr6,0x839a7440
	if (!cr6.lt) goto loc_839A7440;
	// cmpwi cr6,r27,11
	cr6.compare<int32_t>(ctx.r27.s32, 11, xer);
	// bge cr6,0x839a7440
	if (!cr6.lt) goto loc_839A7440;
loc_839A7300:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x839a731c
	if (!cr6.eq) goto loc_839A731C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x839a9f28
	ctx.lr = 0x839A7310;
	sub_839A9F28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a7440
	if (!cr6.eq) goto loc_839A7440;
loc_839A731C:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x839a7338
	if (!cr6.eq) goto loc_839A7338;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a9f28
	ctx.lr = 0x839A732C;
	sub_839A9F28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a7440
	if (!cr6.eq) goto loc_839A7440;
loc_839A7338:
	// bl 0x8399f8b8
	ctx.lr = 0x839A733C;
	sub_8399F8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399f950
	ctx.lr = 0x839A7344;
	sub_8399F950(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839a73cc
	if (!cr6.eq) goto loc_839A73CC;
	// bl 0x8399f8b8
	ctx.lr = 0x839A7350;
	sub_8399F8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399f988
	ctx.lr = 0x839A7358;
	sub_8399F988(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8399edb0
	ctx.lr = 0x839A736C;
	sub_8399EDB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839aa9a8
	ctx.lr = 0x839A7374;
	sub_839AA9A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a7384
	if (cr6.eq) goto loc_839A7384;
	// li r29,1
	ctx.r29.s64 = 1;
loc_839A7384:
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
	// clrlwi r4,r28,24
	ctx.r4.u64 = ctx.r28.u32 & 0xFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82acc960
	ctx.lr = 0x839A7398;
	sub_82ACC960(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// clrlwi r4,r27,24
	ctx.r4.u64 = ctx.r27.u32 & 0xFF;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82acc960
	ctx.lr = 0x839A73AC;
	sub_82ACC960(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839a62c0
	ctx.lr = 0x839A73BC;
	sub_839A62C0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839a62c0
	ctx.lr = 0x839A73CC;
	sub_839A62C0(ctx, base);
loc_839A73CC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8399e9b8
	ctx.lr = 0x839A73DC;
	sub_8399E9B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8399ee20
	ctx.lr = 0x839A73E8;
	sub_8399EE20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x839a5ec8
	ctx.lr = 0x839A73F4;
	sub_839A5EC8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x839a5fa0
	ctx.lr = 0x839A7400;
	sub_839A5FA0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8399ee10
	ctx.lr = 0x839A740C;
	sub_8399EE10(ctx, base);
	// lbz r5,145(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 145);
	// lbz r9,146(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 146);
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// bne cr6,0x839a742c
	if (!cr6.eq) goto loc_839A742C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839a0818
	ctx.lr = 0x839A742C;
	sub_839A0818(ctx, base);
loc_839A742C:
	// bl 0x8399f8b8
	ctx.lr = 0x839A7430;
	sub_8399F8B8(ctx, base);
	// add r11,r24,r3
	ctx.r11.u64 = ctx.r24.u64 + ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82abff78
	ctx.lr = 0x839A7440;
	sub_82ABFF78(ctx, base);
loc_839A7440:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A7448"))) PPC_WEAK_FUNC(sub_839A7448);
PPC_FUNC_IMPL(__imp__sub_839A7448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839A7450;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x839a6ff8
	ctx.lr = 0x839A7468;
	sub_839A6FF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a7638
	if (cr6.eq) goto loc_839A7638;
	// bl 0x8399f8b8
	ctx.lr = 0x839A7478;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mulli r24,r31,528
	ctx.r24.s64 = ctx.r31.s64 * 528;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// bl 0x8399f8b8
	ctx.lr = 0x839A748C;
	sub_8399F8B8(ctx, base);
	// add r11,r3,r24
	ctx.r11.u64 = ctx.r3.u64 + ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r30,r11,1072
	ctx.r30.s64 = ctx.r11.s64 + 1072;
	// bl 0x8399ea10
	ctx.lr = 0x839A74A0;
	sub_8399EA10(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399ea10
	ctx.lr = 0x839A74B0;
	sub_8399EA10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// bne cr6,0x839a74dc
	if (!cr6.eq) goto loc_839A74DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399ea10
	ctx.lr = 0x839A74C8;
	sub_8399EA10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399ea10
	ctx.lr = 0x839A74D8;
	sub_8399EA10(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_839A74DC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8399f510
	ctx.lr = 0x839A74E8;
	sub_8399F510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8399f510
	ctx.lr = 0x839A74F8;
	sub_8399F510(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x839a7518
	if (!cr6.eq) goto loc_839A7518;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x839a751c
	if (cr6.eq) goto loc_839A751C;
loc_839A7518:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A751C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a753c
	if (!cr6.eq) goto loc_839A753C;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x839a7540
	if (cr6.eq) goto loc_839A7540;
loc_839A753C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A7540:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a755c
	if (cr6.eq) goto loc_839A755C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8399f580
	ctx.lr = 0x839A7558;
	sub_8399F580(ctx, base);
	// b 0x839a7620
	goto loc_839A7620;
loc_839A755C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839a7590
	if (!cr6.eq) goto loc_839A7590;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x839a7578
	if (cr6.eq) goto loc_839A7578;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8399f580
	ctx.lr = 0x839A7578;
	sub_8399F580(ctx, base);
loc_839A7578:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x839a7590
	if (cr6.eq) goto loc_839A7590;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8399f580
	ctx.lr = 0x839A7590;
	sub_8399F580(ctx, base);
loc_839A7590:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82a47da0
	ctx.lr = 0x839A759C;
	sub_82A47DA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a7620
	if (cr6.eq) goto loc_839A7620;
loc_839A75A8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a0368
	ctx.lr = 0x839A75B8;
	sub_839A0368(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399eed0
	ctx.lr = 0x839A75C0;
	sub_8399EED0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a75f0
	if (cr6.eq) goto loc_839A75F0;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a47da0
	ctx.lr = 0x839A75E0;
	sub_82A47DA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x839a75a8
	if (cr6.lt) goto loc_839A75A8;
	// b 0x839a7620
	goto loc_839A7620;
loc_839A75F0:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399eea0
	ctx.lr = 0x839A7608;
	sub_8399EEA0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x839a0328
	ctx.lr = 0x839A7620;
	sub_839A0328(ctx, base);
loc_839A7620:
	// bl 0x8399f8b8
	ctx.lr = 0x839A7624;
	sub_8399F8B8(ctx, base);
	// add r11,r24,r3
	ctx.r11.u64 = ctx.r24.u64 + ctx.r3.u64;
	// li r5,528
	ctx.r5.s64 = 528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,1072
	ctx.r3.s64 = ctx.r11.s64 + 1072;
	// bl 0x831ce980
	ctx.lr = 0x839A7638;
	sub_831CE980(ctx, base);
loc_839A7638:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A7640"))) PPC_WEAK_FUNC(sub_839A7640);
PPC_FUNC_IMPL(__imp__sub_839A7640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x839A7648;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r24,-1
	ctx.r24.s64 = -1;
	// bl 0x8399f8b8
	ctx.lr = 0x839A7660;
	sub_8399F8B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8399f950
	ctx.lr = 0x839A7668;
	sub_8399F950(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulli r25,r26,532
	ctx.r25.s64 = ctx.r26.s64 * 532;
	// bl 0x8399f8b8
	ctx.lr = 0x839A7674;
	sub_8399F8B8(ctx, base);
	// add r11,r3,r25
	ctx.r11.u64 = ctx.r3.u64 + ctx.r25.u64;
	// clrlwi r23,r30,24
	ctx.r23.u64 = ctx.r30.u32 & 0xFF;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// clrlwi r27,r31,24
	ctx.r27.u64 = ctx.r31.u32 & 0xFF;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8399ecc0
	ctx.lr = 0x839A7694;
	sub_8399ECC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x839a7700
	if (cr6.lt) goto loc_839A7700;
	// li r29,10
	ctx.r29.s64 = 10;
loc_839A76A4:
	// clrlwi r31,r29,24
	ctx.r31.u64 = ctx.r29.u32 & 0xFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8399ec88
	ctx.lr = 0x839A76B8;
	sub_8399EC88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x839a76d0
	if (cr6.eq) goto loc_839A76D0;
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x839a76a4
	if (!cr0.eq) goto loc_839A76A4;
	// b 0x839a7700
	goto loc_839A7700;
loc_839A76D0:
	// bl 0x8399f8b8
	ctx.lr = 0x839A76D4;
	sub_8399F8B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8399f950
	ctx.lr = 0x839A76DC;
	sub_8399F950(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A76E4;
	sub_8399F8B8(ctx, base);
	// add r11,r25,r3
	ctx.r11.u64 = ctx.r25.u64 + ctx.r3.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ec58
	ctx.lr = 0x839A76FC;
	sub_8399EC58(ctx, base);
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
loc_839A7700:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// clrlwi r5,r22,24
	ctx.r5.u64 = ctx.r22.u32 & 0xFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8399ec58
	ctx.lr = 0x839A7714;
	sub_8399EC58(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A7720"))) PPC_WEAK_FUNC(sub_839A7720);
PPC_FUNC_IMPL(__imp__sub_839A7720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839A7728;
	__savegprlr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mulli r31,r3,532
	ctx.r31.s64 = ctx.r3.s64 * 532;
	// bl 0x8399f8b8
	ctx.lr = 0x839A773C;
	sub_8399F8B8(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399ee20
	ctx.lr = 0x839A7750;
	sub_8399EE20(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839A7754;
	sub_8399F8B8(ctx, base);
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea10
	ctx.lr = 0x839A7764;
	sub_8399EA10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A776C;
	sub_8399F8B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8399f988
	ctx.lr = 0x839A7774;
	sub_8399F988(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// clrlwi r31,r27,24
	ctx.r31.u64 = ctx.r27.u32 & 0xFF;
	// bl 0x8399edb0
	ctx.lr = 0x839A778C;
	sub_8399EDB0(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x839a77d4
	if (cr6.lt) goto loc_839A77D4;
	// beq cr6,0x839a77bc
	if (cr6.eq) goto loc_839A77BC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x839a77e8
	if (!cr6.lt) goto loc_839A77E8;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a77e8
	if (!cr6.lt) goto loc_839A77E8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r4,66(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 66);
	// b 0x839a77ec
	goto loc_839A77EC;
loc_839A77BC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a77e8
	if (!cr6.lt) goto loc_839A77E8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r4,33(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// b 0x839a77ec
	goto loc_839A77EC;
loc_839A77D4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a77e8
	if (!cr6.lt) goto loc_839A77E8;
	// lbzx r4,r11,r3
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// b 0x839a77ec
	goto loc_839A77EC;
loc_839A77E8:
	// li r4,13
	ctx.r4.s64 = 13;
loc_839A77EC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a61a8
	ctx.lr = 0x839A77F8;
	sub_839A61A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8399ee10
	ctx.lr = 0x839A7804;
	sub_8399EE10(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A780C"))) PPC_WEAK_FUNC(sub_839A780C);
PPC_FUNC_IMPL(__imp__sub_839A780C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A7810"))) PPC_WEAK_FUNC(sub_839A7810);
PPC_FUNC_IMPL(__imp__sub_839A7810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839A7818;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,12
	cr6.compare<uint32_t>(ctx.r4.u32, 12, xer);
	// bgt cr6,0x839a787c
	if (cr6.gt) goto loc_839A787C;
	// lis r12,-31846
	ctx.r12.s64 = -2087059456;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,30792
	ctx.r12.s64 = ctx.r12.s64 + 30792;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u32) {
	case 0:
		goto loc_839A793C;
	case 1:
		goto loc_839A793C;
	case 2:
		goto loc_839A787C;
	case 3:
		goto loc_839A787C;
	case 4:
		goto loc_839A793C;
	case 5:
		goto loc_839A793C;
	case 6:
		goto loc_839A787C;
	case 7:
		goto loc_839A787C;
	case 8:
		goto loc_839A793C;
	case 9:
		goto loc_839A787C;
	case 10:
		goto loc_839A787C;
	case 11:
		goto loc_839A793C;
	case 12:
		goto loc_839A793C;
	default:
		return;
	}
	// lwz r28,31036(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 31036);
	// lwz r28,31036(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 31036);
	// lwz r28,30844(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 30844);
	// lwz r28,30844(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 30844);
	// lwz r28,31036(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 31036);
	// lwz r28,31036(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 31036);
	// lwz r28,30844(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 30844);
	// lwz r28,30844(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 30844);
	// lwz r28,31036(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 31036);
	// lwz r28,30844(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 30844);
	// lwz r28,30844(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 30844);
	// lwz r28,31036(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 31036);
	// lwz r28,31036(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 31036);
loc_839A787C:
	// bl 0x8399f8b8
	ctx.lr = 0x839A7880;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a793c
	if (cr6.eq) goto loc_839A793C;
	// bl 0x8399f8b8
	ctx.lr = 0x839A788C;
	sub_8399F8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399f988
	ctx.lr = 0x839A7894;
	sub_8399F988(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A789C;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8399fe30
	ctx.lr = 0x839A78AC;
	sub_8399FE30(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
loc_839A78B4:
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// blt cr6,0x839a78f8
	if (cr6.lt) goto loc_839A78F8;
	// beq cr6,0x839a78e0
	if (cr6.eq) goto loc_839A78E0;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bge cr6,0x839a7910
	if (!cr6.lt) goto loc_839A7910;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a7910
	if (!cr6.lt) goto loc_839A7910;
	// addi r8,r1,146
	ctx.r8.s64 = ctx.r1.s64 + 146;
	// lbzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// b 0x839a7914
	goto loc_839A7914;
loc_839A78E0:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a7910
	if (!cr6.lt) goto loc_839A7910;
	// addi r8,r1,113
	ctx.r8.s64 = ctx.r1.s64 + 113;
	// lbzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// b 0x839a7914
	goto loc_839A7914;
loc_839A78F8:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a7910
	if (!cr6.lt) goto loc_839A7910;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// b 0x839a7914
	goto loc_839A7914;
loc_839A7910:
	// li r11,13
	ctx.r11.s64 = 13;
loc_839A7914:
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bne cr6,0x839a7928
	if (!cr6.eq) goto loc_839A7928;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x839a7948
	if (!cr6.eq) goto loc_839A7948;
loc_839A7928:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// blt cr6,0x839a78b4
	if (cr6.lt) goto loc_839A78B4;
loc_839A793C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839A7948:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A7954"))) PPC_WEAK_FUNC(sub_839A7954);
PPC_FUNC_IMPL(__imp__sub_839A7954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A7958"))) PPC_WEAK_FUNC(sub_839A7958);
PPC_FUNC_IMPL(__imp__sub_839A7958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839A7960;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lfs f2,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f1,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x839a6b28
	ctx.lr = 0x839A7998;
	sub_839A6B28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839a5bd0
	ctx.lr = 0x839A79A8;
	sub_839A5BD0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839a7a8c
	if (!cr6.eq) goto loc_839A7A8C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r31,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r31.u16);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r31,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r31.u16);
	// clrlwi r31,r9,24
	ctx.r31.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r29,r8,24
	ctx.r29.u64 = ctx.r8.u32 & 0xFF;
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lhz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// stb r29,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r29.u8);
	// bl 0x839a5bd0
	ctx.lr = 0x839A79EC;
	sub_839A5BD0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x839a7a08
	if (cr6.eq) goto loc_839A7A08;
	// lbz r11,83(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// b 0x839a7a8c
	goto loc_839A7A8C;
loc_839A7A08:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// bl 0x839a5bd0
	ctx.lr = 0x839A7A14;
	sub_839A5BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a7a80
	if (!cr6.eq) goto loc_839A7A80;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r10,r10,254
	ctx.r10.s64 = ctx.r10.s64 + 254;
	// addi r9,r11,254
	ctx.r9.s64 = ctx.r11.s64 + 254;
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r29,r9,24
	ctx.r29.u64 = ctx.r9.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// lhz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// stb r29,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r29.u8);
	// bl 0x839a5bd0
	ctx.lr = 0x839A7A4C;
	sub_839A5BD0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x839a7a68
	if (cr6.eq) goto loc_839A7A68;
	// lbz r11,83(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// b 0x839a7a8c
	goto loc_839A7A8C;
loc_839A7A68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// bl 0x839a5bd0
	ctx.lr = 0x839A7A74;
	sub_839A5BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a7a8c
	if (cr6.eq) goto loc_839A7A8C;
loc_839A7A80:
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r29,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r29.u8);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_839A7A8C:
	// clrlwi r31,r26,24
	ctx.r31.u64 = ctx.r26.u32 & 0xFF;
	// clrlwi r29,r28,24
	ctx.r29.u64 = ctx.r28.u32 & 0xFF;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ac0388
	ctx.lr = 0x839A7AA8;
	sub_82AC0388(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x839a7afc
	if (cr6.lt) goto loc_839A7AFC;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// beq cr6,0x839a7ae0
	if (cr6.eq) goto loc_839A7AE0;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x839a7b0c
	if (!cr6.lt) goto loc_839A7B0C;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a7b0c
	if (!cr6.lt) goto loc_839A7B0C;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stb r30,66(r11)
	PPC_STORE_U8(ctx.r11.u32 + 66, ctx.r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839A7AE0:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a7b0c
	if (!cr6.lt) goto loc_839A7B0C;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stb r30,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839A7AFC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a7b0c
	if (!cr6.lt) goto loc_839A7B0C;
	// stbx r30,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r30.u8);
loc_839A7B0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A7B14"))) PPC_WEAK_FUNC(sub_839A7B14);
PPC_FUNC_IMPL(__imp__sub_839A7B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A7B18"))) PPC_WEAK_FUNC(sub_839A7B18);
PPC_FUNC_IMPL(__imp__sub_839A7B18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
loc_839A7B28:
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x839a7b88
	if (cr6.lt) goto loc_839A7B88;
	// beq cr6,0x839a7b64
	if (cr6.eq) goto loc_839A7B64;
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// bge cr6,0x839a7ba4
	if (!cr6.lt) goto loc_839A7BA4;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a7b5c
	if (!cr6.lt) goto loc_839A7B5C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r11,77
	ctx.r11.s64 = ctx.r11.s64 + 77;
	// b 0x839a7ba8
	goto loc_839A7BA8;
loc_839A7B5C:
	// addi r11,r4,77
	ctx.r11.s64 = ctx.r4.s64 + 77;
	// b 0x839a7ba8
	goto loc_839A7BA8;
loc_839A7B64:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a7b80
	if (!cr6.lt) goto loc_839A7B80;
	// addi r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 + 22;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// b 0x839a7ba8
	goto loc_839A7BA8;
loc_839A7B80:
	// addi r11,r4,44
	ctx.r11.s64 = ctx.r4.s64 + 44;
	// b 0x839a7ba8
	goto loc_839A7BA8;
loc_839A7B88:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a7ba4
	if (!cr6.lt) goto loc_839A7BA4;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// b 0x839a7ba8
	goto loc_839A7BA8;
loc_839A7BA4:
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
loc_839A7BA8:
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// sth r11,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// blt cr6,0x839a7c1c
	if (cr6.lt) goto loc_839A7C1C;
	// beq cr6,0x839a7bf0
	if (cr6.eq) goto loc_839A7BF0;
	// cmplwi cr6,r7,3
	cr6.compare<uint32_t>(ctx.r7.u32, 3, xer);
	// bge cr6,0x839a7c44
	if (!cr6.lt) goto loc_839A7C44;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a7c44
	if (!cr6.lt) goto loc_839A7C44;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// lbz r5,-15(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -15);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,77
	ctx.r10.s64 = ctx.r11.s64 + 77;
	// stb r6,77(r11)
	PPC_STORE_U8(ctx.r11.u32 + 77, ctx.r6.u8);
	// stb r5,78(r11)
	PPC_STORE_U8(ctx.r11.u32 + 78, ctx.r5.u8);
	// b 0x839a7c44
	goto loc_839A7C44;
loc_839A7BF0:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a7c44
	if (!cr6.lt) goto loc_839A7C44;
	// addi r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 + 22;
	// lbz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// lbz r6,-15(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -15);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// b 0x839a7c44
	goto loc_839A7C44;
loc_839A7C1C:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a7c44
	if (!cr6.lt) goto loc_839A7C44;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// lbz r5,-15(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -15);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,11
	ctx.r10.s64 = ctx.r11.s64 + 11;
	// stb r6,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r6.u8);
	// stb r5,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r5.u8);
loc_839A7C44:
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x839a7c88
	if (cr6.lt) goto loc_839A7C88;
	// beq cr6,0x839a7c70
	if (cr6.eq) goto loc_839A7C70;
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// bge cr6,0x839a7c9c
	if (!cr6.lt) goto loc_839A7C9C;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a7c9c
	if (!cr6.lt) goto loc_839A7C9C;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r11,66(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 66);
	// b 0x839a7ca0
	goto loc_839A7CA0;
loc_839A7C70:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a7c9c
	if (!cr6.lt) goto loc_839A7C9C;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// b 0x839a7ca0
	goto loc_839A7CA0;
loc_839A7C88:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a7c9c
	if (!cr6.lt) goto loc_839A7C9C;
	// lbzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// b 0x839a7ca0
	goto loc_839A7CA0;
loc_839A7C9C:
	// li r11,13
	ctx.r11.s64 = 13;
loc_839A7CA0:
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// blt cr6,0x839a7cec
	if (cr6.lt) goto loc_839A7CEC;
	// beq cr6,0x839a7cd0
	if (cr6.eq) goto loc_839A7CD0;
	// cmplwi cr6,r7,3
	cr6.compare<uint32_t>(ctx.r7.u32, 3, xer);
	// bge cr6,0x839a7cfc
	if (!cr6.lt) goto loc_839A7CFC;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x839a7cfc
	if (!cr6.lt) goto loc_839A7CFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stb r9,66(r10)
	PPC_STORE_U8(ctx.r10.u32 + 66, ctx.r9.u8);
	// b 0x839a7cfc
	goto loc_839A7CFC;
loc_839A7CD0:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x839a7cfc
	if (!cr6.lt) goto loc_839A7CFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stb r9,33(r10)
	PPC_STORE_U8(ctx.r10.u32 + 33, ctx.r9.u8);
	// b 0x839a7cfc
	goto loc_839A7CFC;
loc_839A7CEC:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x839a7cfc
	if (!cr6.lt) goto loc_839A7CFC;
	// stbx r11,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u8);
loc_839A7CFC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x839a7b28
	if (cr6.lt) goto loc_839A7B28;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A7D10"))) PPC_WEAK_FUNC(sub_839A7D10);
PPC_FUNC_IMPL(__imp__sub_839A7D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r8,-31768
	ctx.r8.s64 = -2081947648;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// lfs f12,24348(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24348);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lfs f13,24344(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24344);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f4,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// lfs f2,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// frsp f12,f8
	ctx.f12.f64 = double(float(ctx.f8.f64));
	// lfs f31,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f31.f64 = double(temp.f32);
	// fdivs f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f30,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// frsp f11,f7
	ctx.f11.f64 = double(float(ctx.f7.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f10,f6
	ctx.f10.f64 = double(float(ctx.f6.f64));
	// fadds f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f9,f5,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// fmuls f0,f1,f11
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fsubs f5,f8,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fsubs f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmuls f1,f5,f1
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmadds f9,f4,f0,f2
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fmuls f13,f7,f3
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f3,f6,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fadds f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fmadds f10,f31,f13,f30
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fadds f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// fmadds f6,f12,f4,f2
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f7,f11,f31,f30
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f30.f64));
	// beq cr6,0x839a7e44
	if (cr6.eq) goto loc_839A7E44;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lfs f5,23372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23372);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,26160(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26160);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f0,f5
	cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// bge cr6,0x839a7e18
	if (!cr6.lt) goto loc_839A7E18;
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
loc_839A7E18:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,11432(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11432);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x839a7e2c
	if (!cr6.gt) goto loc_839A7E2C;
	// fadds f6,f6,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
loc_839A7E2C:
	// fcmpu cr6,f13,f5
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f5.f64);
	// bge cr6,0x839a7e38
	if (!cr6.lt) goto loc_839A7E38;
	// fsubs f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
loc_839A7E38:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x839a7e44
	if (!cr6.gt) goto loc_839A7E44;
	// fadds f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
loc_839A7E44:
	// fsubs f0,f6,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f13,f7,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// beq cr6,0x839a7e84
	if (cr6.eq) goto loc_839A7E84;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ld r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x839a6be8
	ctx.lr = 0x839A7E84;
	sub_839A6BE8(ctx, base);
loc_839A7E84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A7E9C"))) PPC_WEAK_FUNC(sub_839A7E9C);
PPC_FUNC_IMPL(__imp__sub_839A7E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A7EA0"))) PPC_WEAK_FUNC(sub_839A7EA0);
PPC_FUNC_IMPL(__imp__sub_839A7EA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839A7EA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x8399f8b8
	ctx.lr = 0x839A7EC0;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a7f08
	if (cr6.eq) goto loc_839A7F08;
	// bl 0x8399f8b8
	ctx.lr = 0x839A7ECC;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// li r5,532
	ctx.r5.s64 = 532;
	// bl 0x831ce980
	ctx.lr = 0x839A7EE4;
	sub_831CE980(ctx, base);
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399edb0
	ctx.lr = 0x839A7EF4;
	sub_8399EDB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a6cc8
	ctx.lr = 0x839A7F00;
	sub_839A6CC8(ctx, base);
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839A7F08:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A7F14"))) PPC_WEAK_FUNC(sub_839A7F14);
PPC_FUNC_IMPL(__imp__sub_839A7F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A7F18"))) PPC_WEAK_FUNC(sub_839A7F18);
PPC_FUNC_IMPL(__imp__sub_839A7F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839A7F20;
	__savegprlr_28(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x8399f8b8
	ctx.lr = 0x839A7F38;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a7f80
	if (cr6.eq) goto loc_839A7F80;
	// bl 0x8399f8b8
	ctx.lr = 0x839A7F44;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// li r5,532
	ctx.r5.s64 = 532;
	// bl 0x831ce980
	ctx.lr = 0x839A7F5C;
	sub_831CE980(ctx, base);
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399edb0
	ctx.lr = 0x839A7F6C;
	sub_8399EDB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a6d70
	ctx.lr = 0x839A7F78;
	sub_839A6D70(ctx, base);
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839A7F80:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A7F8C"))) PPC_WEAK_FUNC(sub_839A7F8C);
PPC_FUNC_IMPL(__imp__sub_839A7F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A7F90"))) PPC_WEAK_FUNC(sub_839A7F90);
PPC_FUNC_IMPL(__imp__sub_839A7F90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839A7F98;
	__savegprlr_28(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x8399f8b8
	ctx.lr = 0x839A7FB0;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a7ff8
	if (cr6.eq) goto loc_839A7FF8;
	// bl 0x8399f8b8
	ctx.lr = 0x839A7FBC;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// li r5,532
	ctx.r5.s64 = 532;
	// bl 0x831ce980
	ctx.lr = 0x839A7FD4;
	sub_831CE980(ctx, base);
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399edb0
	ctx.lr = 0x839A7FE4;
	sub_8399EDB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a6e18
	ctx.lr = 0x839A7FF0;
	sub_839A6E18(ctx, base);
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839A7FF8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A8004"))) PPC_WEAK_FUNC(sub_839A8004);
PPC_FUNC_IMPL(__imp__sub_839A8004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A8008"))) PPC_WEAK_FUNC(sub_839A8008);
PPC_FUNC_IMPL(__imp__sub_839A8008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839A8010;
	__savegprlr_27(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A802C;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a80c8
	if (cr6.eq) goto loc_839A80C8;
	// bl 0x8399f8b8
	ctx.lr = 0x839A8038;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// li r5,532
	ctx.r5.s64 = 532;
	// bl 0x831ce980
	ctx.lr = 0x839A8050;
	sub_831CE980(ctx, base);
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399edb0
	ctx.lr = 0x839A8060;
	sub_8399EDB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a6cc8
	ctx.lr = 0x839A806C;
	sub_839A6CC8(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x839a80c8
	if (!cr6.eq) goto loc_839A80C8;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x839a8088
	if (!cr6.gt) goto loc_839A8088;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x839a808c
	if (!cr6.gt) goto loc_839A808C;
loc_839A8088:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A808C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a80c8
	if (cr6.eq) goto loc_839A80C8;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x839a80ac
	if (!cr6.gt) goto loc_839A80AC;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x839a80b0
	if (!cr6.gt) goto loc_839A80B0;
loc_839A80AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A80B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a80c8
	if (!cr6.eq) goto loc_839A80C8;
loc_839A80BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839A80C8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839a7f18
	ctx.lr = 0x839A80D8;
	sub_839A7F18(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x839a8128
	if (!cr6.eq) goto loc_839A8128;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// blt cr6,0x839a80f4
	if (cr6.lt) goto loc_839A80F4;
	// cmpwi cr6,r28,8
	cr6.compare<int32_t>(ctx.r28.s32, 8, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x839a80f8
	if (!cr6.gt) goto loc_839A80F8;
loc_839A80F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A80F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a8128
	if (cr6.eq) goto loc_839A8128;
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(ctx.r27.s32, 4, xer);
	// blt cr6,0x839a8118
	if (cr6.lt) goto loc_839A8118;
	// cmpwi cr6,r27,8
	cr6.compare<int32_t>(ctx.r27.s32, 8, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x839a811c
	if (!cr6.gt) goto loc_839A811C;
loc_839A8118:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A811C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a80bc
	if (cr6.eq) goto loc_839A80BC;
loc_839A8128:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839a7f90
	ctx.lr = 0x839A8138;
	sub_839A7F90(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x839a818c
	if (!cr6.eq) goto loc_839A818C;
	// cmpwi cr6,r28,9
	cr6.compare<int32_t>(ctx.r28.s32, 9, xer);
	// blt cr6,0x839a8154
	if (cr6.lt) goto loc_839A8154;
	// cmpwi cr6,r28,12
	cr6.compare<int32_t>(ctx.r28.s32, 12, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x839a8158
	if (!cr6.gt) goto loc_839A8158;
loc_839A8154:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A8158:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a818c
	if (cr6.eq) goto loc_839A818C;
	// cmpwi cr6,r27,9
	cr6.compare<int32_t>(ctx.r27.s32, 9, xer);
	// blt cr6,0x839a8178
	if (cr6.lt) goto loc_839A8178;
	// cmpwi cr6,r27,12
	cr6.compare<int32_t>(ctx.r27.s32, 12, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x839a817c
	if (!cr6.gt) goto loc_839A817C;
loc_839A8178:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A817C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a8190
	if (cr6.eq) goto loc_839A8190;
loc_839A818C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839A8190:
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A8198"))) PPC_WEAK_FUNC(sub_839A8198);
PPC_FUNC_IMPL(__imp__sub_839A8198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839A81A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A81BC;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a8258
	if (cr6.eq) goto loc_839A8258;
	// bl 0x8399f8b8
	ctx.lr = 0x839A81C8;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// li r5,532
	ctx.r5.s64 = 532;
	// bl 0x831ce980
	ctx.lr = 0x839A81E0;
	sub_831CE980(ctx, base);
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399edb0
	ctx.lr = 0x839A81F0;
	sub_8399EDB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a6cc8
	ctx.lr = 0x839A81FC;
	sub_839A6CC8(ctx, base);
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bne cr6,0x839a8258
	if (!cr6.eq) goto loc_839A8258;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x839a8218
	if (!cr6.gt) goto loc_839A8218;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x839a821c
	if (!cr6.gt) goto loc_839A821C;
loc_839A8218:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A821C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a8258
	if (!cr6.eq) goto loc_839A8258;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x839a823c
	if (!cr6.gt) goto loc_839A823C;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x839a8240
	if (!cr6.gt) goto loc_839A8240;
loc_839A823C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A8240:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a8258
	if (cr6.eq) goto loc_839A8258;
loc_839A824C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839A8258:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839a7f18
	ctx.lr = 0x839A8268;
	sub_839A7F18(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bne cr6,0x839a82b8
	if (!cr6.eq) goto loc_839A82B8;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// blt cr6,0x839a8284
	if (cr6.lt) goto loc_839A8284;
	// cmpwi cr6,r28,8
	cr6.compare<int32_t>(ctx.r28.s32, 8, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x839a8288
	if (!cr6.gt) goto loc_839A8288;
loc_839A8284:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A8288:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a82b8
	if (!cr6.eq) goto loc_839A82B8;
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(ctx.r27.s32, 4, xer);
	// blt cr6,0x839a82a8
	if (cr6.lt) goto loc_839A82A8;
	// cmpwi cr6,r27,8
	cr6.compare<int32_t>(ctx.r27.s32, 8, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x839a82ac
	if (!cr6.gt) goto loc_839A82AC;
loc_839A82A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A82AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a824c
	if (!cr6.eq) goto loc_839A824C;
loc_839A82B8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839a7f90
	ctx.lr = 0x839A82C8;
	sub_839A7F90(ctx, base);
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bne cr6,0x839a831c
	if (!cr6.eq) goto loc_839A831C;
	// cmpwi cr6,r28,9
	cr6.compare<int32_t>(ctx.r28.s32, 9, xer);
	// blt cr6,0x839a82e4
	if (cr6.lt) goto loc_839A82E4;
	// cmpwi cr6,r28,12
	cr6.compare<int32_t>(ctx.r28.s32, 12, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x839a82e8
	if (!cr6.gt) goto loc_839A82E8;
loc_839A82E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A82E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a831c
	if (!cr6.eq) goto loc_839A831C;
	// cmpwi cr6,r27,9
	cr6.compare<int32_t>(ctx.r27.s32, 9, xer);
	// blt cr6,0x839a8308
	if (cr6.lt) goto loc_839A8308;
	// cmpwi cr6,r27,12
	cr6.compare<int32_t>(ctx.r27.s32, 12, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x839a830c
	if (!cr6.gt) goto loc_839A830C;
loc_839A8308:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A830C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a8320
	if (!cr6.eq) goto loc_839A8320;
loc_839A831C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839A8320:
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A8328"))) PPC_WEAK_FUNC(sub_839A8328);
PPC_FUNC_IMPL(__imp__sub_839A8328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839A8330;
	__savegprlr_27(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x839a8008
	ctx.lr = 0x839A834C;
	sub_839A8008(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a8380
	if (!cr6.eq) goto loc_839A8380;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839a8198
	ctx.lr = 0x839A8370;
	sub_839A8198(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x839a8384
	if (cr6.eq) goto loc_839A8384;
loc_839A8380:
	// li r11,1
	ctx.r11.s64 = 1;
loc_839A8384:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A8390"))) PPC_WEAK_FUNC(sub_839A8390);
PPC_FUNC_IMPL(__imp__sub_839A8390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x839A8398;
	__savegprlr_23(ctx, base);
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x839A83C0;
	sub_82AC0AF0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83149418
	ctx.lr = 0x839A83C8;
	sub_83149418(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,296
	ctx.r9.s64 = ctx.r1.s64 + 296;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_839A83D8:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x839a83e8
	if (!cr6.lt) goto loc_839A83E8;
	// lbzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// b 0x839a83ec
	goto loc_839A83EC;
loc_839A83E8:
	// li r10,255
	ctx.r10.s64 = 255;
loc_839A83EC:
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x839a83d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839A83D8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82abfda0
	ctx.lr = 0x839A8404;
	sub_82ABFDA0(ctx, base);
	// lbz r11,41(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 41);
	// lbz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lbz r9,33(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// lbz r8,34(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 34);
	// lbz r7,35(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 35);
	// lbz r6,36(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 36);
	// lbz r5,37(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 37);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// bl 0x82d8c428
	ctx.lr = 0x839A8444;
	sub_82D8C428(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r31,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r31.u32);
	// stb r4,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r4.u8);
	// bl 0x839aa3a0
	ctx.lr = 0x839A8454;
	sub_839AA3A0(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stb r3,440(r1)
	PPC_STORE_U8(ctx.r1.u32 + 440, ctx.r3.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a8558
	if (cr6.eq) goto loc_839A8558;
	// bl 0x8399f8b8
	ctx.lr = 0x839A8468;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,528
	ctx.r11.s64 = ctx.r29.s64 * 528;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r11,1072
	ctx.r26.s64 = ctx.r11.s64 + 1072;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r27,r1,444
	ctx.r27.s64 = ctx.r1.s64 + 444;
	// addi r29,r11,24248
	ctx.r29.s64 = ctx.r11.s64 + 24248;
loc_839A8484:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a8498
	if (!cr6.lt) goto loc_839A8498;
	// lbzx r30,r11,r25
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// b 0x839a849c
	goto loc_839A849C;
loc_839A8498:
	// li r30,13
	ctx.r30.s64 = 13;
loc_839A849C:
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// bge cr6,0x839a84ac
	if (!cr6.lt) goto loc_839A84AC;
	// lbzx r5,r31,r28
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// b 0x839a84b0
	goto loc_839A84B0;
loc_839A84AC:
	// li r5,255
	ctx.r5.s64 = 255;
loc_839A84B0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a0478
	ctx.lr = 0x839A84BC;
	sub_839A0478(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8399f3d0
	ctx.lr = 0x839A84C8;
	sub_8399F3D0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a84e4
	if (!cr6.eq) goto loc_839A84E4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x839a850c
	goto loc_839A850C;
loc_839A84E4:
	// lhz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x839a8504
	if (!cr6.eq) goto loc_839A8504;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x839a8508
	if (cr6.eq) goto loc_839A8508;
loc_839A8504:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A8508:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_839A850C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a8548
	if (!cr6.eq) goto loc_839A8548;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399f1e0
	ctx.lr = 0x839A8524;
	sub_8399F1E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a8548
	if (cr6.eq) goto loc_839A8548;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// bge cr6,0x839a8540
	if (!cr6.lt) goto loc_839A8540;
	// lbzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// b 0x839a8544
	goto loc_839A8544;
loc_839A8540:
	// li r11,255
	ctx.r11.s64 = 255;
loc_839A8544:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_839A8548:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x839a8484
	if (cr6.lt) goto loc_839A8484;
loc_839A8558:
	// lis r31,0
	ctx.r31.s64 = 0;
	// ori r31,r31,65535
	ctx.r31.u64 = ctx.r31.u64 | 65535;
	// bl 0x839a9af8
	ctx.lr = 0x839A8564;
	sub_839A9AF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a8598
	if (!cr6.eq) goto loc_839A8598;
	// bl 0x831156e8
	ctx.lr = 0x839A8574;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8399f8b8
	ctx.lr = 0x839A857C;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x839a8598
	if (cr6.eq) goto loc_839A8598;
	// addis r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 12582912;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x83126788
	ctx.lr = 0x839A8594;
	sub_83126788(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_839A8598:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a85c4
	if (cr6.eq) goto loc_839A85C4;
	// bl 0x839aa5d8
	ctx.lr = 0x839A85AC;
	sub_839AA5D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x8314ab58
	ctx.lr = 0x839A85C0;
	sub_8314AB58(ctx, base);
	// b 0x839a85dc
	goto loc_839A85DC;
loc_839A85C4:
	// bl 0x839aa5d8
	ctx.lr = 0x839A85C8;
	sub_839AA5D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x8314aa40
	ctx.lr = 0x839A85DC;
	sub_8314AA40(ctx, base);
loc_839A85DC:
	// li r9,32
	ctx.r9.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,300
	ctx.r10.s64 = ctx.r1.s64 + 300;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_839A85EC:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x839a85fc
	if (!cr6.lt) goto loc_839A85FC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stbx r9,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r9.u8);
loc_839A85FC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x839a85ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839A85EC;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stb r11,41(r28)
	PPC_STORE_U8(ctx.r28.u32 + 41, ctx.r11.u8);
	// stb r6,32(r28)
	PPC_STORE_U8(ctx.r28.u32 + 32, ctx.r6.u8);
	// stb r9,33(r28)
	PPC_STORE_U8(ctx.r28.u32 + 33, ctx.r9.u8);
	// stb r7,34(r28)
	PPC_STORE_U8(ctx.r28.u32 + 34, ctx.r7.u8);
	// stb r5,35(r28)
	PPC_STORE_U8(ctx.r28.u32 + 35, ctx.r5.u8);
	// stb r3,36(r28)
	PPC_STORE_U8(ctx.r28.u32 + 36, ctx.r3.u8);
	// stb r10,37(r28)
	PPC_STORE_U8(ctx.r28.u32 + 37, ctx.r10.u8);
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A8648"))) PPC_WEAK_FUNC(sub_839A8648);
PPC_FUNC_IMPL(__imp__sub_839A8648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839A8650;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A8664;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a8768
	if (cr6.eq) goto loc_839A8768;
	// bl 0x8399f8b8
	ctx.lr = 0x839A8670;
	sub_8399F8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399f950
	ctx.lr = 0x839A8678;
	sub_8399F950(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A8680;
	sub_8399F8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399f988
	ctx.lr = 0x839A8688;
	sub_8399F988(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A8690;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// bl 0x82ac0af0
	ctx.lr = 0x839A86A4;
	sub_82AC0AF0(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839A86A8;
	sub_8399F8B8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8399fda0
	ctx.lr = 0x839A86B4;
	sub_8399FDA0(ctx, base);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x839a86f8
	if (cr6.lt) goto loc_839A86F8;
	// beq cr6,0x839a86e4
	if (cr6.eq) goto loc_839A86E4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x839a870c
	if (!cr6.lt) goto loc_839A870C;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a870c
	if (!cr6.lt) goto loc_839A870C;
	// addi r10,r1,178
	ctx.r10.s64 = ctx.r1.s64 + 178;
	// b 0x839a8708
	goto loc_839A8708;
loc_839A86E4:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a870c
	if (!cr6.lt) goto loc_839A870C;
	// addi r10,r1,145
	ctx.r10.s64 = ctx.r1.s64 + 145;
	// b 0x839a8708
	goto loc_839A8708;
loc_839A86F8:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a870c
	if (!cr6.lt) goto loc_839A870C;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_839A8708:
	// stbx r29,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u8);
loc_839A870C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// clrlwi r4,r28,24
	ctx.r4.u64 = ctx.r28.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8399ed80
	ctx.lr = 0x839A871C;
	sub_8399ED80(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839A8720;
	sub_8399F8B8(ctx, base);
	// mulli r31,r31,460
	ctx.r31.s64 = ctx.r31.s64 * 460;
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399f6e8
	ctx.lr = 0x839A8738;
	sub_8399F6E8(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x8399f8b8
	ctx.lr = 0x839A8748;
	sub_8399F8B8(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f6a8
	ctx.lr = 0x839A8768;
	sub_8399F6A8(ctx, base);
loc_839A8768:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A8770"))) PPC_WEAK_FUNC(sub_839A8770);
PPC_FUNC_IMPL(__imp__sub_839A8770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x839A8778;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x839a5bd0
	ctx.lr = 0x839A879C;
	sub_839A5BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a87c4
	if (cr6.eq) goto loc_839A87C4;
	// li r11,13
	ctx.r11.s64 = 13;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_839A87C4:
	// li r27,13
	ctx.r27.s64 = 13;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r10,26200
	ctx.r29.s64 = ctx.r10.s64 + 26200;
loc_839A87DC:
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839a5bd0
	ctx.lr = 0x839A87EC;
	sub_839A5BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a8814
	if (!cr6.eq) goto loc_839A8814;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x839a87dc
	if (cr6.lt) goto loc_839A87DC;
	// b 0x839a881c
	goto loc_839A881C;
loc_839A8814:
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// li r25,1
	ctx.r25.s64 = 1;
loc_839A881C:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r27,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r27.u32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r10,26164
	ctx.r29.s64 = ctx.r10.s64 + 26164;
loc_839A8830:
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839a5bd0
	ctx.lr = 0x839A8840;
	sub_839A5BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a8868
	if (cr6.eq) goto loc_839A8868;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x839a7810
	ctx.lr = 0x839A885C;
	sub_839A7810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a888c
	if (!cr6.eq) goto loc_839A888C;
loc_839A8868:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x839a8830
	if (cr6.lt) goto loc_839A8830;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_839A888C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stw r31,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A88A0"))) PPC_WEAK_FUNC(sub_839A88A0);
PPC_FUNC_IMPL(__imp__sub_839A88A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839A88A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x8399f8b8
	ctx.lr = 0x839A88CC;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a8978
	if (cr6.eq) goto loc_839A8978;
	// bl 0x8399f8b8
	ctx.lr = 0x839A88D8;
	sub_8399F8B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8399f988
	ctx.lr = 0x839A88E0;
	sub_8399F988(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// beq cr6,0x839a890c
	if (cr6.eq) goto loc_839A890C;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x839a8924
	goto loc_839A8924;
loc_839A890C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839A8924;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839A8924:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lfs f2,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r29,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r29.u8);
	// bl 0x839a6b28
	ctx.lr = 0x839A8948;
	sub_839A6B28(ctx, base);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,47
	cr6.compare<uint32_t>(ctx.r9.u32, 47, xer);
	// ble cr6,0x839a895c
	if (!cr6.gt) goto loc_839A895C;
	// li r11,47
	ctx.r11.s64 = 47;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_839A895C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lhz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839a8770
	ctx.lr = 0x839A8970;
	sub_839A8770(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_839A8978:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A8984"))) PPC_WEAK_FUNC(sub_839A8984);
PPC_FUNC_IMPL(__imp__sub_839A8984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A8988"))) PPC_WEAK_FUNC(sub_839A8988);
PPC_FUNC_IMPL(__imp__sub_839A8988) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// b 0x839a7b18
	sub_839A7B18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A8990"))) PPC_WEAK_FUNC(sub_839A8990);
PPC_FUNC_IMPL(__imp__sub_839A8990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839A8998;
	__savegprlr_27(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A89B0;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a8ab8
	if (cr6.eq) goto loc_839A8AB8;
	// bl 0x8399f8b8
	ctx.lr = 0x839A89BC;
	sub_8399F8B8(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839A89C0;
	sub_8399F8B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8399f950
	ctx.lr = 0x839A89C8;
	sub_8399F950(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839aa9a8
	ctx.lr = 0x839A89D4;
	sub_839AA9A8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x839a89fc
	if (!cr6.eq) goto loc_839A89FC;
	// bl 0x8399f8b8
	ctx.lr = 0x839A89E0;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// clrlwi r6,r28,24
	ctx.r6.u64 = ctx.r28.u32 & 0xFF;
	// bl 0x8399feb8
	ctx.lr = 0x839A89F4;
	sub_8399FEB8(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// b 0x839a8aa8
	goto loc_839A8AA8;
loc_839A89FC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a8a80
	if (cr6.eq) goto loc_839A8A80;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bge cr6,0x839a8a5c
	if (!cr6.lt) goto loc_839A8A5C;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x839a8a38
	if (!cr6.lt) goto loc_839A8A38;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r9,r10,26124
	ctx.r9.s64 = ctx.r10.s64 + 26124;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r7,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// b 0x839a8a3c
	goto loc_839A8A3C;
loc_839A8A38:
	// li r30,0
	ctx.r30.s64 = 0;
loc_839A8A3C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x839a7b18
	ctx.lr = 0x839A8A50;
	sub_839A7B18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839A8A5C:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82ac0af0
	ctx.lr = 0x839A8A64;
	sub_82AC0AF0(ctx, base);
	// addi r11,r30,253
	ctx.r11.s64 = ctx.r30.s64 + 253;
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x83155950
	ctx.lr = 0x839A8A78;
	sub_83155950(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// b 0x839a8aa8
	goto loc_839A8AA8;
loc_839A8A80:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ac0af0
	ctx.lr = 0x839A8A88;
	sub_82AC0AF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ac0800
	ctx.lr = 0x839A8A90;
	sub_82AC0800(ctx, base);
	// addi r11,r30,255
	ctx.r11.s64 = ctx.r30.s64 + 255;
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83155950
	ctx.lr = 0x839A8AA4;
	sub_83155950(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_839A8AA8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x839a7b18
	ctx.lr = 0x839A8AB8;
	sub_839A7B18(ctx, base);
loc_839A8AB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A8AC4"))) PPC_WEAK_FUNC(sub_839A8AC4);
PPC_FUNC_IMPL(__imp__sub_839A8AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A8AC8"))) PPC_WEAK_FUNC(sub_839A8AC8);
PPC_FUNC_IMPL(__imp__sub_839A8AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839A8AD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A8AE0;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// bl 0x8399f8b8
	ctx.lr = 0x839A8AF0;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399f950
	ctx.lr = 0x839A8AF8;
	sub_8399F950(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A8B00;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399f988
	ctx.lr = 0x839A8B08;
	sub_8399F988(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ac0af0
	ctx.lr = 0x839A8B14;
	sub_82AC0AF0(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839A8B18;
	sub_8399F8B8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8399fda0
	ctx.lr = 0x839A8B24;
	sub_8399FDA0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839a8990
	ctx.lr = 0x839A8B38;
	sub_839A8990(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// clrlwi r4,r28,24
	ctx.r4.u64 = ctx.r28.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399ed80
	ctx.lr = 0x839A8B48;
	sub_8399ED80(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x839a8b68
	if (!cr6.eq) goto loc_839A8B68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399ee20
	ctx.lr = 0x839A8B5C;
	sub_8399EE20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399ee10
	ctx.lr = 0x839A8B68;
	sub_8399EE10(ctx, base);
loc_839A8B68:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A8B70"))) PPC_WEAK_FUNC(sub_839A8B70);
PPC_FUNC_IMPL(__imp__sub_839A8B70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839A8B78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r7,-31742
	ctx.r7.s64 = -2080243712;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r11,-18688
	ctx.r11.s64 = ctx.r11.s64 + -18688;
	// lwz r10,-18496(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -18496);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839a8d20
	if (!cr6.eq) goto loc_839A8D20;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r9,104
	ctx.r9.s64 = 104;
	// stw r10,-18496(r7)
	PPC_STORE_U32(ctx.r7.u32 + -18496, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// li r10,83
	ctx.r10.s64 = 83;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// li r8,21
	ctx.r8.s64 = 21;
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// li r10,84
	ctx.r10.s64 = 84;
	// li r9,104
	ctx.r9.s64 = 104;
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,25
	ctx.r9.s64 = 25;
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// li r10,83
	ctx.r10.s64 = 83;
	// li r9,26
	ctx.r9.s64 = 26;
	// stw r8,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// li r8,21
	ctx.r8.s64 = 21;
	// stw r9,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// li r10,21
	ctx.r10.s64 = 21;
	// li r9,83
	ctx.r9.s64 = 83;
	// stw r8,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// li r8,34
	ctx.r8.s64 = 34;
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// li r9,84
	ctx.r9.s64 = 84;
	// stw r8,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r8.u32);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r9,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r9.u32);
	// li r10,35
	ctx.r10.s64 = 35;
	// li r9,47
	ctx.r9.s64 = 47;
	// stw r8,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r8.u32);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// li r8,104
	ctx.r8.s64 = 104;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r9.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r8,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r8.u32);
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// li r8,35
	ctx.r8.s64 = 35;
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r9,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r9.u32);
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r8,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r8.u32);
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// li r8,83
	ctx.r8.s64 = 83;
	// stw r9,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r9.u32);
	// li r10,41
	ctx.r10.s64 = 41;
	// li r9,47
	ctx.r9.s64 = 47;
	// stw r8,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r8.u32);
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// li r8,21
	ctx.r8.s64 = 21;
	// stw r9,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r9.u32);
	// li r10,83
	ctx.r10.s64 = 83;
	// li r9,35
	ctx.r9.s64 = 35;
	// stw r8,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r8.u32);
	// stw r10,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// li r8,47
	ctx.r8.s64 = 47;
	// stw r9,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r9.u32);
	// li r10,84
	ctx.r10.s64 = 84;
	// li r9,104
	ctx.r9.s64 = 104;
	// stw r8,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r8.u32);
	// stw r10,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r10.u32);
	// stw r9,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r9.u32);
loc_839A8D20:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x839a8d60
	if (cr6.eq) goto loc_839A8D60;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// addi r7,r9,26212
	ctx.r7.s64 = ctx.r9.s64 + 26212;
loc_839A8D3C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x839a8d54
	if (cr6.eq) goto loc_839A8D54;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// or r28,r6,r28
	ctx.r28.u64 = ctx.r6.u64 | ctx.r28.u64;
loc_839A8D54:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x839a8d3c
	if (!cr6.eq) goto loc_839A8D3C;
loc_839A8D60:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x839a8db0
	if (cr6.eq) goto loc_839A8DB0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r8
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r8.u32, xer);
	// beq cr6,0x839a8dac
	if (cr6.eq) goto loc_839A8DAC;
loc_839A8D7C:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stw r4,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r4.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x839a8d7c
	if (!cr6.eq) goto loc_839A8D7C;
loc_839A8DAC:
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_839A8DB0:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,12
	ctx.r29.s64 = 12;
loc_839A8DBC:
	// and r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 & ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a8dd4
	if (!cr6.eq) goto loc_839A8DD4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831b0e08
	ctx.lr = 0x839A8DD4;
	sub_831B0E08(ctx, base);
loc_839A8DD4:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// rotlwi r30,r30,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// bne 0x839a8dbc
	if (!cr0.eq) goto loc_839A8DBC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A8DEC"))) PPC_WEAK_FUNC(sub_839A8DEC);
PPC_FUNC_IMPL(__imp__sub_839A8DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A8DF0"))) PPC_WEAK_FUNC(sub_839A8DF0);
PPC_FUNC_IMPL(__imp__sub_839A8DF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839A8DF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A8E0C;
	sub_8399F8B8(ctx, base);
	// addi r11,r29,1028
	ctx.r11.s64 = ctx.r29.s64 + 1028;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bl 0x839aa5d8
	ctx.lr = 0x839A8E1C;
	sub_839AA5D8(ctx, base);
	// lhz r9,808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// clrlwi r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// bge cr6,0x839a8e40
	if (!cr6.lt) goto loc_839A8E40;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x839a8e40
	if (cr6.eq) goto loc_839A8E40;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r10,512(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 512);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
loc_839A8E40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A8E48"))) PPC_WEAK_FUNC(sub_839A8E48);
PPC_FUNC_IMPL(__imp__sub_839A8E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839A8E50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A8E60;
	sub_8399F8B8(ctx, base);
	// addi r11,r29,1028
	ctx.r11.s64 = ctx.r29.s64 + 1028;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bl 0x839aa5d8
	ctx.lr = 0x839A8E70;
	sub_839AA5D8(ctx, base);
	// addi r27,r3,1209
	ctx.r27.s64 = ctx.r3.s64 + 1209;
	// bl 0x831156e8
	ctx.lr = 0x839A8E78;
	sub_831156E8(ctx, base);
	// lis r9,5
	ctx.r9.s64 = 327680;
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r31,r9,14904
	ctx.r31.u64 = ctx.r9.u64 | 14904;
	// add r3,r8,r31
	ctx.r3.u64 = ctx.r8.u64 + ctx.r31.u64;
	// bl 0x83123778
	ctx.lr = 0x839A8E8C;
	sub_83123778(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,65535
	cr6.compare<uint32_t>(ctx.r7.u32, 65535, xer);
	// beq cr6,0x839a8eb4
	if (cr6.eq) goto loc_839A8EB4;
	// bl 0x831156e8
	ctx.lr = 0x839A8EA0;
	sub_831156E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c338
	ctx.lr = 0x839A8EAC;
	sub_8311C338(ctx, base);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
loc_839A8EB4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831476d0
	ctx.lr = 0x839A8EC0;
	sub_831476D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x8399f8b8
	ctx.lr = 0x839A8ECC;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// blt cr6,0x839a8ee4
	if (cr6.lt) goto loc_839A8EE4;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bgt cr6,0x839a8ee4
	if (cr6.gt) goto loc_839A8EE4;
	// li r26,1
	ctx.r26.s64 = 1;
loc_839A8EE4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a8fb8
	if (cr6.eq) goto loc_839A8FB8;
	// bl 0x831156e8
	ctx.lr = 0x839A8EF4;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x83123988
	ctx.lr = 0x839A8F04;
	sub_83123988(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_839A8F0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r8,r9,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// cmpw cr6,r8,r30
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, xer);
	// bne cr6,0x839a8f3c
	if (!cr6.eq) goto loc_839A8F3C;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r7,128
	cr6.compare<uint32_t>(ctx.r7.u32, 128, xer);
	// bne cr6,0x839a8f3c
	if (!cr6.eq) goto loc_839A8F3C;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x839a8f50
	if (cr6.eq) goto loc_839A8F50;
loc_839A8F3C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// blt cr6,0x839a8f0c
	if (cr6.lt) goto loc_839A8F0C;
	// b 0x839a8f64
	goto loc_839A8F64;
loc_839A8F50:
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// beq cr6,0x839a8f64
	if (cr6.eq) goto loc_839A8F64;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a9074
	if (cr6.eq) goto loc_839A9074;
loc_839A8F64:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_839A8F6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r8,r9,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// cmpw cr6,r8,r30
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, xer);
	// bne cr6,0x839a8f98
	if (!cr6.eq) goto loc_839A8F98;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r7,128
	cr6.compare<uint32_t>(ctx.r7.u32, 128, xer);
	// bne cr6,0x839a8f98
	if (!cr6.eq) goto loc_839A8F98;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839a9074
	if (cr6.eq) goto loc_839A9074;
loc_839A8F98:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// blt cr6,0x839a8f6c
	if (cr6.lt) goto loc_839A8F6C;
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839A8FB8:
	// bl 0x831156e8
	ctx.lr = 0x839A8FBC;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x83123968
	ctx.lr = 0x839A8FCC;
	sub_83123968(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_839A8FD4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r8,r9,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// cmpw cr6,r8,r30
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, xer);
	// bne cr6,0x839a9004
	if (!cr6.eq) goto loc_839A9004;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x839a9004
	if (!cr6.eq) goto loc_839A9004;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x839a9018
	if (cr6.eq) goto loc_839A9018;
loc_839A9004:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// blt cr6,0x839a8fd4
	if (cr6.lt) goto loc_839A8FD4;
	// b 0x839a902c
	goto loc_839A902C;
loc_839A9018:
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// beq cr6,0x839a902c
	if (cr6.eq) goto loc_839A902C;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a9074
	if (cr6.eq) goto loc_839A9074;
loc_839A902C:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_839A9034:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r8,r9,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// cmpw cr6,r8,r30
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, xer);
	// bne cr6,0x839a9060
	if (!cr6.eq) goto loc_839A9060;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x839a9060
	if (!cr6.eq) goto loc_839A9060;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839a9074
	if (cr6.eq) goto loc_839A9074;
loc_839A9060:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// blt cr6,0x839a9034
	if (cr6.lt) goto loc_839A9034;
	// li r10,10
	ctx.r10.s64 = 10;
loc_839A9074:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A9080"))) PPC_WEAK_FUNC(sub_839A9080);
PPC_FUNC_IMPL(__imp__sub_839A9080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839A9088;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x839a9af8
	ctx.lr = 0x839A90A4;
	sub_839A9AF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a90cc
	if (cr6.eq) goto loc_839A90CC;
	// bl 0x831156e8
	ctx.lr = 0x839A90B4;
	sub_831156E8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8312bb20
	ctx.lr = 0x839A90C8;
	sub_8312BB20(ctx, base);
	// b 0x839a90ec
	goto loc_839A90EC;
loc_839A90CC:
	// bl 0x8399f8b8
	ctx.lr = 0x839A90D0;
	sub_8399F8B8(ctx, base);
	// addi r11,r31,1028
	ctx.r11.s64 = ctx.r31.s64 + 1028;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bl 0x839aa5d8
	ctx.lr = 0x839A90E0;
	sub_839AA5D8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82b81268
	ctx.lr = 0x839A90EC;
	sub_82B81268(ctx, base);
loc_839A90EC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r9,r11,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r7,r11,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,21700(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21700);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f4,0(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,0(r28)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,0(r27)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A9154"))) PPC_WEAK_FUNC(sub_839A9154);
PPC_FUNC_IMPL(__imp__sub_839A9154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A9158"))) PPC_WEAK_FUNC(sub_839A9158);
PPC_FUNC_IMPL(__imp__sub_839A9158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// ble cr6,0x839a917c
	if (!cr6.gt) goto loc_839A917C;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// ble cr6,0x839a917c
	if (!cr6.gt) goto loc_839A917C;
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_839A917C:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// li r10,255
	ctx.r10.s64 = 255;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bge cr6,0x839a9194
	if (!cr6.lt) goto loc_839A9194;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// b 0x839a9198
	goto loc_839A9198;
loc_839A9194:
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
loc_839A9198:
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bge cr6,0x839a91b0
	if (!cr6.lt) goto loc_839A91B0;
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// b 0x839a91b4
	goto loc_839A91B4;
loc_839A91B0:
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
loc_839A91B4:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bge cr6,0x839a91cc
	if (!cr6.lt) goto loc_839A91CC;
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// blr 
	return;
loc_839A91CC:
	// stb r10,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A91D4"))) PPC_WEAK_FUNC(sub_839A91D4);
PPC_FUNC_IMPL(__imp__sub_839A91D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A91D8"))) PPC_WEAK_FUNC(sub_839A91D8);
PPC_FUNC_IMPL(__imp__sub_839A91D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lbz r5,162(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 162);
	// lbz r4,161(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 161);
	// lbz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// lfd f0,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// bl 0x8314f920
	ctx.lr = 0x839A9220;
	sub_8314F920(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lbz r5,170(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 170);
	// lbz r4,169(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 169);
	// lbz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// bl 0x8314f920
	ctx.lr = 0x839A9234;
	sub_8314F920(ctx, base);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x8314fae8
	ctx.lr = 0x839A9250;
	sub_8314FAE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A9260"))) PPC_WEAK_FUNC(sub_839A9260);
PPC_FUNC_IMPL(__imp__sub_839A9260) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,21588(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21588);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f12,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x839a92f8
	if (!cr6.gt) goto loc_839A92F8;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x839a928c
	if (cr6.lt) goto loc_839A928C;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_839A928C:
	// fmuls f13,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fctidz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lbz r11,-9(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x839a9300
	if (!cr6.gt) goto loc_839A9300;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x839a92b8
	if (cr6.lt) goto loc_839A92B8;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_839A92B8:
	// fctidz f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lbz r11,-9(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x839a92e0
	if (!cr6.gt) goto loc_839A92E0;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x839a92e4
	if (!cr6.lt) goto loc_839A92E4;
loc_839A92E0:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_839A92E4:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lbz r11,-9(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// blr 
	return;
loc_839A92F8:
	// fmr f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f12.f64;
	// b 0x839a928c
	goto loc_839A928C;
loc_839A9300:
	// fmr f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f12.f64;
	// b 0x839a92b8
	goto loc_839A92B8;
}

__attribute__((alias("__imp__sub_839A9308"))) PPC_WEAK_FUNC(sub_839A9308);
PPC_FUNC_IMPL(__imp__sub_839A9308) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f9,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x839a9330
	if (!cr6.gt) goto loc_839A9330;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x839a9334
	goto loc_839A9334;
loc_839A9330:
	// fsel f0,f0,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
loc_839A9334:
	// stfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x839a9350
	if (!cr6.gt) goto loc_839A9350;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x839a9354
	goto loc_839A9354;
loc_839A9350:
	// fsel f0,f0,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
loc_839A9354:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x839a9370
	if (!cr6.gt) goto loc_839A9370;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x839a9374
	goto loc_839A9374;
loc_839A9370:
	// fsel f0,f0,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
loc_839A9374:
	// stfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x839a938c
	if (!cr6.gt) goto loc_839A938C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x839a9390
	goto loc_839A9390;
loc_839A938C:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_839A9390:
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f13
	cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// ble cr6,0x839a93a0
	if (!cr6.gt) goto loc_839A93A0;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
loc_839A93A0:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x839a93ac
	if (!cr6.lt) goto loc_839A93AC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_839A93AC:
	// fcmpu cr6,f10,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x839a93b8
	if (!cr6.lt) goto loc_839A93B8;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_839A93B8:
	// fsubs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,-27732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27732);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x839a93dc
	if (!cr6.lt) goto loc_839A93DC;
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f9,0(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f9,0(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x839a940c
	goto loc_839A940C;
loc_839A93DC:
	// fdivs f13,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fsubs f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f6,0(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f3,0(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_839A940C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,9104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f12,f13,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fmadds f6,f7,f13,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f6,0(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// fmadds f3,f4,f13,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f3,0(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x839a9460
	if (!cr6.gt) goto loc_839A9460;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x839a9464
	goto loc_839A9464;
loc_839A9460:
	// fsel f0,f0,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
loc_839A9464:
	// stfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x839a947c
	if (!cr6.gt) goto loc_839A947C;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x839a9480
	goto loc_839A9480;
loc_839A947C:
	// fsel f0,f0,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
loc_839A9480:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x839a9498
	if (!cr6.gt) goto loc_839A9498;
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
loc_839A9498:
	// fsel f0,f0,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A94A4"))) PPC_WEAK_FUNC(sub_839A94A4);
PPC_FUNC_IMPL(__imp__sub_839A94A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A94A8"))) PPC_WEAK_FUNC(sub_839A94A8);
PPC_FUNC_IMPL(__imp__sub_839A94A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839A94B0;
	__savegprlr_26(ctx, base);
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x839a9af8
	ctx.lr = 0x839A94D0;
	sub_839A9AF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a950c
	if (cr6.eq) goto loc_839A950C;
	// bl 0x831156e8
	ctx.lr = 0x839A94E0;
	sub_831156E8(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8312c158
	ctx.lr = 0x839A9504;
	sub_8312C158(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839A950C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839a8e48
	ctx.lr = 0x839A9518;
	sub_839A8E48(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839aab88
	ctx.lr = 0x839A9524;
	sub_839AAB88(ctx, base);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// clrlwi r4,r26,24
	ctx.r4.u64 = ctx.r26.u32 & 0xFF;
	// addi r3,r3,1209
	ctx.r3.s64 = ctx.r3.s64 + 1209;
	// bl 0x825a1920
	ctx.lr = 0x839A9540;
	sub_825A1920(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A9548"))) PPC_WEAK_FUNC(sub_839A9548);
PPC_FUNC_IMPL(__imp__sub_839A9548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839A9550;
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
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x839a94a8
	ctx.lr = 0x839A9570;
	sub_839A94A8(ctx, base);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfs f0,21700(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21700);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f4,0(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,0(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,0(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A95D4"))) PPC_WEAK_FUNC(sub_839A95D4);
PPC_FUNC_IMPL(__imp__sub_839A95D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A95D8"))) PPC_WEAK_FUNC(sub_839A95D8);
PPC_FUNC_IMPL(__imp__sub_839A95D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839A95E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r30.u8);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stb r30,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r30.u8);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// addi r29,r3,2
	ctx.r29.s64 = ctx.r3.s64 + 2;
	// addi r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 1;
	// bl 0x8399f8b8
	ctx.lr = 0x839A960C;
	sub_8399F8B8(ctx, base);
	// lwz r3,4116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4116);
	// bl 0x839aa5d8
	ctx.lr = 0x839A9614;
	sub_839AA5D8(ctx, base);
	// addi r27,r3,1209
	ctx.r27.s64 = ctx.r3.s64 + 1209;
	// bl 0x8399f8b8
	ctx.lr = 0x839A961C;
	sub_8399F8B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4116);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8314f868
	ctx.lr = 0x839A9630;
	sub_8314F868(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_839A9634:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// cmpw cr6,r9,r3
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, xer);
	// bne cr6,0x839a9660
	if (!cr6.eq) goto loc_839A9660;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r8,r9,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x839a9660
	if (!cr6.eq) goto loc_839A9660;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// cmpw cr6,r10,r26
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, xer);
	// beq cr6,0x839a9678
	if (cr6.eq) goto loc_839A9678;
loc_839A9660:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(ctx.r30.u32, 10, xer);
	// blt cr6,0x839a9634
	if (cr6.lt) goto loc_839A9634;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_839A9678:
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(ctx.r30.u32, 10, xer);
	// beq cr6,0x839a970c
	if (cr6.eq) goto loc_839A970C;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a96b8
	if (cr6.eq) goto loc_839A96B8;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825a1920
	ctx.lr = 0x839A96A8;
	sub_825A1920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839a9158
	ctx.lr = 0x839A96B0;
	sub_839A9158(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_839A96B8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// blt cr6,0x839a96e4
	if (cr6.lt) goto loc_839A96E4;
	// li r11,255
	ctx.r11.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// bl 0x839a9158
	ctx.lr = 0x839A96DC;
	sub_839A9158(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_839A96E4:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// stb r9,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r9.u8);
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stb r8,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r8.u8);
	// bl 0x839a9158
	ctx.lr = 0x839A970C;
	sub_839A9158(ctx, base);
loc_839A970C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A9714"))) PPC_WEAK_FUNC(sub_839A9714);
PPC_FUNC_IMPL(__imp__sub_839A9714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A9718"))) PPC_WEAK_FUNC(sub_839A9718);
PPC_FUNC_IMPL(__imp__sub_839A9718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839A9720;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r4,2
	ctx.r5.s64 = ctx.r4.s64 + 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839a94a8
	ctx.lr = 0x839A9750;
	sub_839A94A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839a9158
	ctx.lr = 0x839A9758;
	sub_839A9158(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rldicr r8,r11,8,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r6,r10,8,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// or r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rldicr r4,r5,40,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 40) & 0xFFFFFF0000000000;
	// rldicr r3,r3,40,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 40) & 0xFFFFFF0000000000;
	// bl 0x839a91d8
	ctx.lr = 0x839A9784;
	sub_839A91D8(ctx, base);
	// lis r27,-32209
	ctx.r27.s64 = -2110849024;
	// lfd f0,26616(r27)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r27.u32 + 26616);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x839a98f8
	if (!cr6.lt) goto loc_839A98F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r7,1(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stb r11,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r11.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// stb r11,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r11.u8);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r29,r1,160
	ctx.r29.s64 = ctx.r1.s64 + 160;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// stb r7,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r7.u8);
	// lfd f31,9000(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stb r6,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r6.u8);
	// stb r10,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r10.u8);
	// stb r10,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r10.u8);
loc_839A97EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// bl 0x839a95d8
	ctx.lr = 0x839A97FC;
	sub_839A95D8(ctx, base);
	// stfd f31,128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f31.u64);
	// stfd f31,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f31.u64);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stfd f31,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f31.u64);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stfd f31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f31.u64);
	// lbz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// stfd f31,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f31.u64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfd f31,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f31.u64);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r25,1(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r24,2(r31)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// stb r26,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r26.u8);
	// stb r25,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r25.u8);
	// stb r24,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r24.u8);
	// bl 0x8314f920
	ctx.lr = 0x839A9860;
	sub_8314F920(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lbz r5,86(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r4,85(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x8314f920
	ctx.lr = 0x839A9874;
	sub_8314F920(ctx, base);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x8314fae8
	ctx.lr = 0x839A9890;
	sub_8314FAE8(ctx, base);
	// lfd f0,26616(r27)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r27.u32 + 26616);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x839a98f8
	if (!cr6.lt) goto loc_839A98F8;
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// ble cr6,0x839a98c4
	if (!cr6.gt) goto loc_839A98C4;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
loc_839A98C4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(ctx.r28.u32, 4, xer);
	// blt cr6,0x839a97ec
	if (cr6.lt) goto loc_839A97EC;
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x839a98f8
	if (!cr6.gt) goto loc_839A98F8;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// stb r8,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r8.u8);
loc_839A98F8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A9908"))) PPC_WEAK_FUNC(sub_839A9908);
PPC_FUNC_IMPL(__imp__sub_839A9908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839A9910;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x839a9548
	ctx.lr = 0x839A9940;
	sub_839A9548(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839A9944;
	sub_8399F8B8(ctx, base);
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lwz r11,4116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4116);
	// lwz r10,24672(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24672);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x839a9974
	if (!cr6.eq) goto loc_839A9974;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839a9978
	if (cr6.eq) goto loc_839A9978;
loc_839A9974:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_839A9978:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a9998
	if (!cr6.eq) goto loc_839A9998;
	// bl 0x8399f8b8
	ctx.lr = 0x839A9988;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x839a999c
	if (!cr6.eq) goto loc_839A999C;
loc_839A9998:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_839A999C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a9a4c
	if (cr6.eq) goto loc_839A9A4C;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lfs f3,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stb r31,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r31.u8);
	// stb r31,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r31.u8);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// bl 0x839a9260
	ctx.lr = 0x839A99D4;
	sub_839A9260(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x839a9158
	ctx.lr = 0x839A99DC;
	sub_839A9158(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x839a9718
	ctx.lr = 0x839A99E8;
	sub_839A9718(ctx, base);
	// lbz r5,81(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfs f0,21700(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21700);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f4,0(r27)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,0(r26)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,0(r25)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_839A9A4C:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r25)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// bl 0x839a9308
	ctx.lr = 0x839A9A74;
	sub_839A9308(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A9A7C"))) PPC_WEAK_FUNC(sub_839A9A7C);
PPC_FUNC_IMPL(__imp__sub_839A9A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A9A80"))) PPC_WEAK_FUNC(sub_839A9A80);
PPC_FUNC_IMPL(__imp__sub_839A9A80) {
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
	// bl 0x8399f8b8
	ctx.lr = 0x839A9A90;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a9ae4
	if (cr6.eq) goto loc_839A9AE4;
	// bl 0x8399f8b8
	ctx.lr = 0x839A9A9C;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x839a9ae4
	if (cr6.gt) goto loc_839A9AE4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839a9ad0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A9AD0;
	// bdzf 4*cr6+eq,0x839a9ae4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A9AE4;
	// bdzf 4*cr6+eq,0x839a9ad0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A9AD0;
	// bdzf 4*cr6+eq,0x839a9ae4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A9AE4;
	// bdzf 4*cr6+eq,0x839a9ae4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A9AE4;
	// bdzf 4*cr6+eq,0x839a9ae4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A9AE4;
	// bdzf 4*cr6+eq,0x839a9ae4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A9AE4;
	// bne cr6,0x839a9ad0
	if (!cr6.eq) goto loc_839A9AD0;
loc_839A9AD0:
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
loc_839A9AE4:
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

__attribute__((alias("__imp__sub_839A9AF8"))) PPC_WEAK_FUNC(sub_839A9AF8);
PPC_FUNC_IMPL(__imp__sub_839A9AF8) {
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
	// bl 0x8399f8b8
	ctx.lr = 0x839A9B08;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a9b5c
	if (cr6.eq) goto loc_839A9B5C;
	// bl 0x8399f8b8
	ctx.lr = 0x839A9B14;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x839a9b5c
	if (cr6.gt) goto loc_839A9B5C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839a9b48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A9B48;
	// bdzf 4*cr6+eq,0x839a9b5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A9B5C;
	// bdzf 4*cr6+eq,0x839a9b48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A9B48;
	// bdzf 4*cr6+eq,0x839a9b48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A9B48;
	// bdzf 4*cr6+eq,0x839a9b5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A9B5C;
	// bdzf 4*cr6+eq,0x839a9b5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A9B5C;
	// bdzf 4*cr6+eq,0x839a9b5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A9B5C;
	// bne cr6,0x839a9b48
	if (!cr6.eq) goto loc_839A9B48;
loc_839A9B48:
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
loc_839A9B5C:
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

__attribute__((alias("__imp__sub_839A9B70"))) PPC_WEAK_FUNC(sub_839A9B70);
PPC_FUNC_IMPL(__imp__sub_839A9B70) {
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
	// bl 0x839a9af8
	ctx.lr = 0x839A9B80;
	sub_839A9AF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a9ba0
	if (cr6.eq) goto loc_839A9BA0;
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
loc_839A9BA0:
	// bl 0x8399f8b8
	ctx.lr = 0x839A9BA4;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a9bd0
	if (cr6.eq) goto loc_839A9BD0;
	// bl 0x8399f8b8
	ctx.lr = 0x839A9BB0;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
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
loc_839A9BD0:
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

__attribute__((alias("__imp__sub_839A9BE4"))) PPC_WEAK_FUNC(sub_839A9BE4);
PPC_FUNC_IMPL(__imp__sub_839A9BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A9BE8"))) PPC_WEAK_FUNC(sub_839A9BE8);
PPC_FUNC_IMPL(__imp__sub_839A9BE8) {
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
	// bl 0x8399f8b8
	ctx.lr = 0x839A9C08;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a9c38
	if (cr6.eq) goto loc_839A9C38;
	// bl 0x8399f8b8
	ctx.lr = 0x839A9C14;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ee78
	ctx.lr = 0x839A9C28;
	sub_8399EE78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a9c3c
	if (!cr6.eq) goto loc_839A9C3C;
loc_839A9C38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839A9C3C:
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

__attribute__((alias("__imp__sub_839A9C54"))) PPC_WEAK_FUNC(sub_839A9C54);
PPC_FUNC_IMPL(__imp__sub_839A9C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A9C58"))) PPC_WEAK_FUNC(sub_839A9C58);
PPC_FUNC_IMPL(__imp__sub_839A9C58) {
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
	// bl 0x8399f8b8
	ctx.lr = 0x839A9C70;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a9cc0
	if (cr6.eq) goto loc_839A9CC0;
	// bl 0x8399f8b8
	ctx.lr = 0x839A9C7C;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// blt cr6,0x839a9ca8
	if (cr6.lt) goto loc_839A9CA8;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bgt cr6,0x839a9ca8
	if (cr6.gt) goto loc_839A9CA8;
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
loc_839A9CA8:
	// bl 0x8399f8b8
	ctx.lr = 0x839A9CAC;
	sub_8399F8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839a0750
	ctx.lr = 0x839A9CB4;
	sub_839A0750(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// ble cr6,0x839a9cc4
	if (!cr6.gt) goto loc_839A9CC4;
loc_839A9CC0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_839A9CC4:
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

__attribute__((alias("__imp__sub_839A9CD8"))) PPC_WEAK_FUNC(sub_839A9CD8);
PPC_FUNC_IMPL(__imp__sub_839A9CD8) {
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
	// bl 0x8399f8b8
	ctx.lr = 0x839A9CE8;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a9d84
	if (cr6.eq) goto loc_839A9D84;
	// bl 0x8399f8b8
	ctx.lr = 0x839A9CF4;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x839a9d84
	if (cr6.gt) goto loc_839A9D84;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839a9d84
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A9D84;
	// bdzf 4*cr6+eq,0x839a9d84
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A9D84;
	// bdzf 4*cr6+eq,0x839a9d4c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A9D4C;
	// bdzf 4*cr6+eq,0x839a9d38
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A9D38;
	// bdzf 4*cr6+eq,0x839a9d38
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A9D38;
	// bdzf 4*cr6+eq,0x839a9d38
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A9D38;
	// bne cr6,0x839a9d70
	if (!cr6.eq) goto loc_839A9D70;
	// bl 0x830ff290
	ctx.lr = 0x839A9D2C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839A9D30;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// bne cr6,0x839a9d84
	if (!cr6.eq) goto loc_839A9D84;
loc_839A9D38:
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
loc_839A9D4C:
	// bl 0x830ff290
	ctx.lr = 0x839A9D50;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839A9D54;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x839a9d84
	if (!cr6.eq) goto loc_839A9D84;
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
loc_839A9D70:
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
loc_839A9D84:
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

__attribute__((alias("__imp__sub_839A9D98"))) PPC_WEAK_FUNC(sub_839A9D98);
PPC_FUNC_IMPL(__imp__sub_839A9D98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// beq cr6,0x839a9dc0
	if (cr6.eq) goto loc_839A9DC0;
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// beq cr6,0x839a9db0
	if (cr6.eq) goto loc_839A9DB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_839A9DB0:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_839A9DC0:
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A9DCC"))) PPC_WEAK_FUNC(sub_839A9DCC);
PPC_FUNC_IMPL(__imp__sub_839A9DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A9DD0"))) PPC_WEAK_FUNC(sub_839A9DD0);
PPC_FUNC_IMPL(__imp__sub_839A9DD0) {
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
	// li r31,4112
	ctx.r31.s64 = 4112;
	// lis r30,-31768
	ctx.r30.s64 = -2081947648;
loc_839A9DEC:
	// bl 0x8399f8b8
	ctx.lr = 0x839A9DF0;
	sub_8399F8B8(ctx, base);
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// lwz r10,24808(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24808);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x839a9e1c
	if (!cr6.eq) goto loc_839A9E1C;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839a9e20
	if (cr6.eq) goto loc_839A9E20;
loc_839A9E1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A9E20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a9e54
	if (!cr6.eq) goto loc_839A9E54;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r31,4120
	cr6.compare<int32_t>(ctx.r31.s32, 4120, xer);
	// blt cr6,0x839a9dec
	if (cr6.lt) goto loc_839A9DEC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_839A9E3C:
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
loc_839A9E54:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x839a9e3c
	goto loc_839A9E3C;
}

__attribute__((alias("__imp__sub_839A9E5C"))) PPC_WEAK_FUNC(sub_839A9E5C);
PPC_FUNC_IMPL(__imp__sub_839A9E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A9E60"))) PPC_WEAK_FUNC(sub_839A9E60);
PPC_FUNC_IMPL(__imp__sub_839A9E60) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830ff290
	ctx.lr = 0x839A9E78;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x839A9E7C;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a9ea8
	if (cr6.eq) goto loc_839A9EA8;
	// bl 0x8399f8b8
	ctx.lr = 0x839A9E8C;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a9ea8
	if (cr6.eq) goto loc_839A9EA8;
	// bl 0x8399f8b8
	ctx.lr = 0x839A9E98;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x839a9eac
	if (cr6.eq) goto loc_839A9EAC;
loc_839A9EA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839A9EAC:
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

__attribute__((alias("__imp__sub_839A9EC0"))) PPC_WEAK_FUNC(sub_839A9EC0);
PPC_FUNC_IMPL(__imp__sub_839A9EC0) {
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
	// bl 0x83816ad8
	ctx.lr = 0x839A9ED8;
	sub_83816AD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a9f0c
	if (cr6.eq) goto loc_839A9F0C;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x839a9ef4
	if (cr6.eq) goto loc_839A9EF4;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bne cr6,0x839a9f0c
	if (!cr6.eq) goto loc_839A9F0C;
loc_839A9EF4:
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
loc_839A9F0C:
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

__attribute__((alias("__imp__sub_839A9F24"))) PPC_WEAK_FUNC(sub_839A9F24);
PPC_FUNC_IMPL(__imp__sub_839A9F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A9F28"))) PPC_WEAK_FUNC(sub_839A9F28);
PPC_FUNC_IMPL(__imp__sub_839A9F28) {
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
	// bl 0x825832e0
	ctx.lr = 0x839A9F38;
	sub_825832E0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_839A9F50"))) PPC_WEAK_FUNC(sub_839A9F50);
PPC_FUNC_IMPL(__imp__sub_839A9F50) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x839a9af8
	ctx.lr = 0x839A9F70;
	sub_839A9AF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a9ffc
	if (!cr6.eq) goto loc_839A9FFC;
	// bl 0x831156e8
	ctx.lr = 0x839A9F80;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 12582912;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x83126788
	ctx.lr = 0x839A9F90;
	sub_83126788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x825832d8
	ctx.lr = 0x839A9F9C;
	sub_825832D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a9fbc
	if (cr6.eq) goto loc_839A9FBC;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,94
	ctx.r4.s64 = 94;
	// bl 0x83120738
	ctx.lr = 0x839A9FB4;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
loc_839A9FBC:
	// bl 0x830ff290
	ctx.lr = 0x839A9FC0;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x839A9FC4;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a9fe4
	if (cr6.eq) goto loc_839A9FE4;
	// lis r4,562
	ctx.r4.s64 = 36831232;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r4,r4,30
	ctx.r4.u64 = ctx.r4.u64 | 30;
	// b 0x839a9ff8
	goto loc_839A9FF8;
loc_839A9FE4:
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// divwu r11,r31,r11
	ctx.r11.u32 = PPCDivide(ctx.r31.u32, ctx.r11.u32);
	// ori r4,r4,340
	ctx.r4.u64 = ctx.r4.u64 | 340;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
loc_839A9FF8:
	// bl 0x82d042a8
	ctx.lr = 0x839A9FFC;
	sub_82D042A8(ctx, base);
loc_839A9FFC:
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

__attribute__((alias("__imp__sub_839AA014"))) PPC_WEAK_FUNC(sub_839AA014);
PPC_FUNC_IMPL(__imp__sub_839AA014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AA018"))) PPC_WEAK_FUNC(sub_839AA018);
PPC_FUNC_IMPL(__imp__sub_839AA018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839AA020;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839AA034;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839aa110
	if (cr6.eq) goto loc_839AA110;
	// bl 0x8399f8b8
	ctx.lr = 0x839AA040;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839aa110
	if (cr6.eq) goto loc_839AA110;
	// bl 0x8399f8b8
	ctx.lr = 0x839AA05C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,528
	ctx.r11.s64 = ctx.r31.s64 * 528;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,1072
	ctx.r30.s64 = ctx.r11.s64 + 1072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a47da0
	ctx.lr = 0x839AA074;
	sub_82A47DA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839aa110
	if (cr6.eq) goto loc_839AA110;
loc_839AA080:
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a0368
	ctx.lr = 0x839AA090;
	sub_839A0368(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399eed0
	ctx.lr = 0x839AA098;
	sub_8399EED0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839aa0f8
	if (cr6.eq) goto loc_839AA0F8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a47e60
	ctx.lr = 0x839AA0AC;
	sub_82A47E60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839aa0f8
	if (!cr6.eq) goto loc_839AA0F8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399ea10
	ctx.lr = 0x839AA0C4;
	sub_8399EA10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831f8200
	ctx.lr = 0x839AA0D0;
	sub_831F8200(ctx, base);
	// cmpw cr6,r3,r27
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, xer);
	// beq cr6,0x839aa11c
	if (cr6.eq) goto loc_839AA11C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399ea10
	ctx.lr = 0x839AA0E4;
	sub_8399EA10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832e0
	ctx.lr = 0x839AA0F0;
	sub_825832E0(ctx, base);
	// cmpw cr6,r3,r27
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, xer);
	// beq cr6,0x839aa138
	if (cr6.eq) goto loc_839AA138;
loc_839AA0F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82a47da0
	ctx.lr = 0x839AA104;
	sub_82A47DA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x839aa080
	if (cr6.lt) goto loc_839AA080;
loc_839AA110:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AA11C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832e0
	ctx.lr = 0x839AA124;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399ea30
	ctx.lr = 0x839AA130;
	sub_8399EA30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AA138:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831f8200
	ctx.lr = 0x839AA140;
	sub_831F8200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399ea30
	ctx.lr = 0x839AA14C;
	sub_8399EA30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AA154"))) PPC_WEAK_FUNC(sub_839AA154);
PPC_FUNC_IMPL(__imp__sub_839AA154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AA158"))) PPC_WEAK_FUNC(sub_839AA158);
PPC_FUNC_IMPL(__imp__sub_839AA158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839AA160;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839AA174;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839aa284
	if (cr6.eq) goto loc_839AA284;
	// bl 0x8399f8b8
	ctx.lr = 0x839AA180;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839aa250
	if (cr6.eq) goto loc_839AA250;
	// bl 0x8399f8b8
	ctx.lr = 0x839AA19C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,528
	ctx.r11.s64 = ctx.r31.s64 * 528;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,1072
	ctx.r30.s64 = ctx.r11.s64 + 1072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a47da0
	ctx.lr = 0x839AA1B4;
	sub_82A47DA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839aa250
	if (cr6.eq) goto loc_839AA250;
loc_839AA1C0:
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a0368
	ctx.lr = 0x839AA1D0;
	sub_839A0368(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399eed0
	ctx.lr = 0x839AA1D8;
	sub_8399EED0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839aa238
	if (cr6.eq) goto loc_839AA238;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a47e60
	ctx.lr = 0x839AA1EC;
	sub_82A47E60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839aa238
	if (!cr6.eq) goto loc_839AA238;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399ea10
	ctx.lr = 0x839AA204;
	sub_8399EA10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831f8200
	ctx.lr = 0x839AA210;
	sub_831F8200(ctx, base);
	// cmpw cr6,r3,r27
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, xer);
	// beq cr6,0x839aa264
	if (cr6.eq) goto loc_839AA264;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399ea10
	ctx.lr = 0x839AA224;
	sub_8399EA10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832e0
	ctx.lr = 0x839AA230;
	sub_825832E0(ctx, base);
	// cmpw cr6,r3,r27
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, xer);
	// beq cr6,0x839aa274
	if (cr6.eq) goto loc_839AA274;
loc_839AA238:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82a47da0
	ctx.lr = 0x839AA244;
	sub_82A47DA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x839aa1c0
	if (cr6.lt) goto loc_839AA1C0;
loc_839AA250:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399ea10
	ctx.lr = 0x839AA25C;
	sub_8399EA10(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AA264:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832e0
	ctx.lr = 0x839AA26C;
	sub_825832E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AA274:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831f8200
	ctx.lr = 0x839AA27C;
	sub_831F8200(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AA284:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AA290"))) PPC_WEAK_FUNC(sub_839AA290);
PPC_FUNC_IMPL(__imp__sub_839AA290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839AA298;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839AA2A8;
	sub_8399F8B8(ctx, base);
	// mulli r11,r28,528
	ctx.r11.s64 = ctx.r28.s64 * 528;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,1072
	ctx.r31.s64 = ctx.r11.s64 + 1072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a47da0
	ctx.lr = 0x839AA2C0;
	sub_82A47DA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839aa348
	if (cr6.eq) goto loc_839AA348;
loc_839AA2CC:
	// clrlwi r29,r30,24
	ctx.r29.u64 = ctx.r30.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x839a0368
	ctx.lr = 0x839AA2E0;
	sub_839A0368(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8399eed0
	ctx.lr = 0x839AA2E8;
	sub_8399EED0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839aa330
	if (cr6.eq) goto loc_839AA330;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a47e60
	ctx.lr = 0x839AA2FC;
	sub_82A47E60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839aa330
	if (!cr6.eq) goto loc_839AA330;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x839a0368
	ctx.lr = 0x839AA318;
	sub_839A0368(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x8399eeb8
	ctx.lr = 0x839AA324;
	sub_8399EEB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// beq cr6,0x839aa354
	if (cr6.eq) goto loc_839AA354;
loc_839AA330:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82a47da0
	ctx.lr = 0x839AA33C;
	sub_82A47DA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x839aa2cc
	if (cr6.lt) goto loc_839AA2CC;
loc_839AA348:
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AA354:
	// bl 0x8399f8b8
	ctx.lr = 0x839AA358;
	sub_8399F8B8(ctx, base);
	// mulli r11,r28,532
	ctx.r11.s64 = ctx.r28.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ee20
	ctx.lr = 0x839AA36C;
	sub_8399EE20(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
loc_839AA378:
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x839aa394
	if (cr6.eq) goto loc_839AA394;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x839aa378
	if (cr6.lt) goto loc_839AA378;
	// li r11,255
	ctx.r11.s64 = 255;
loc_839AA394:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AA3A0"))) PPC_WEAK_FUNC(sub_839AA3A0);
PPC_FUNC_IMPL(__imp__sub_839AA3A0) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x839a9af8
	ctx.lr = 0x839AA3BC;
	sub_839A9AF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839aa3e0
	if (cr6.eq) goto loc_839AA3E0;
	// bl 0x8399f8b8
	ctx.lr = 0x839AA3CC;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x839aa478
	if (!cr6.eq) goto loc_839AA478;
	// li r3,23
	ctx.r3.s64 = 23;
	// b 0x839aa47c
	goto loc_839AA47C;
loc_839AA3E0:
	// bl 0x831156e8
	ctx.lr = 0x839AA3E4;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x839AA3EC;
	sub_831156E8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r30,52(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x830ff290
	ctx.lr = 0x839AA400;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839AA404;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// blt cr6,0x839aa430
	if (cr6.lt) goto loc_839AA430;
	// bl 0x830ff290
	ctx.lr = 0x839AA410;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839AA414;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bgt cr6,0x839aa430
	if (cr6.gt) goto loc_839AA430;
	// addis r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 12582912;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x83126788
	ctx.lr = 0x839AA428;
	sub_83126788(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x839aa454
	goto loc_839AA454;
loc_839AA430:
	// bl 0x8314f578
	ctx.lr = 0x839AA434;
	sub_8314F578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839aa454
	if (cr6.eq) goto loc_839AA454;
	// addis r3,r30,5
	ctx.r3.s64 = ctx.r30.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123768
	ctx.lr = 0x839AA44C;
	sub_83123768(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_839AA454:
	// bl 0x830ff290
	ctx.lr = 0x839AA458;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839AA45C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x839aa46c
	if (!cr6.eq) goto loc_839AA46C;
	// li r3,18
	ctx.r3.s64 = 18;
	// b 0x839aa47c
	goto loc_839AA47C;
loc_839AA46C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314cad8
	ctx.lr = 0x839AA474;
	sub_8314CAD8(ctx, base);
	// b 0x839aa47c
	goto loc_839AA47C;
loc_839AA478:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839AA47C:
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

__attribute__((alias("__imp__sub_839AA494"))) PPC_WEAK_FUNC(sub_839AA494);
PPC_FUNC_IMPL(__imp__sub_839AA494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AA498"))) PPC_WEAK_FUNC(sub_839AA498);
PPC_FUNC_IMPL(__imp__sub_839AA498) {
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
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// blt cr6,0x839aa4cc
	if (cr6.lt) goto loc_839AA4CC;
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
loc_839AA4CC:
	// bl 0x831156e8
	ctx.lr = 0x839AA4D0;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// lis r9,5
	ctx.r9.s64 = 327680;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r9,35289
	ctx.r7.u64 = ctx.r9.u64 | 35289;
	// li r6,32
	ctx.r6.s64 = 32;
	// lbzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// subfc r3,r6,r5
	xer.ca = ctx.r5.u32 >= ctx.r6.u32;
	ctx.r3.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 & ctx.r5.u64;
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

__attribute__((alias("__imp__sub_839AA510"))) PPC_WEAK_FUNC(sub_839AA510);
PPC_FUNC_IMPL(__imp__sub_839AA510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839AA518;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// bl 0x839a9b70
	ctx.lr = 0x839AA528;
	sub_839A9B70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839aa5c0
	if (cr6.eq) goto loc_839AA5C0;
	// bl 0x831156e8
	ctx.lr = 0x839AA538;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// addis r31,r11,5
	ctx.r31.s64 = ctx.r11.s64 + 327680;
	// lwz r28,164(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
loc_839AA554:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123ad8
	ctx.lr = 0x839AA560;
	sub_83123AD8(ctx, base);
	// ld r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// bne cr6,0x839aa584
	if (!cr6.eq) goto loc_839AA584;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x839aa588
	if (cr6.eq) goto loc_839AA588;
loc_839AA584:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_839AA588:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839aa5d0
	if (!cr6.eq) goto loc_839AA5D0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x839aa554
	if (cr6.lt) goto loc_839AA554;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123ad8
	ctx.lr = 0x839AA5B8;
	sub_83123AD8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839AA5C0:
	// bl 0x831156e8
	ctx.lr = 0x839AA5C4;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c260
	ctx.lr = 0x839AA5D0;
	sub_8311C260(ctx, base);
loc_839AA5D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AA5D8"))) PPC_WEAK_FUNC(sub_839AA5D8);
PPC_FUNC_IMPL(__imp__sub_839AA5D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839AA5E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x839a9b70
	ctx.lr = 0x839AA5EC;
	sub_839A9B70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839aa680
	if (cr6.eq) goto loc_839AA680;
	// bl 0x831156e8
	ctx.lr = 0x839AA5FC;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r28,0
	ctx.r28.s64 = 0;
	// addis r31,r11,5
	ctx.r31.s64 = ctx.r11.s64 + 327680;
	// rlwinm r30,r29,14,18,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 14) & 0x3FFF;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
loc_839AA614:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123a08
	ctx.lr = 0x839AA620;
	sub_83123A08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x839aa644
	if (!cr6.eq) goto loc_839AA644;
	// xor r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r29.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839aa648
	if (cr6.eq) goto loc_839AA648;
loc_839AA644:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_839AA648:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839aa690
	if (!cr6.eq) goto loc_839AA690;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x839aa614
	if (cr6.lt) goto loc_839AA614;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123a08
	ctx.lr = 0x839AA678;
	sub_83123A08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839AA680:
	// bl 0x831156e8
	ctx.lr = 0x839AA684;
	sub_831156E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x839AA690;
	sub_8311C148(ctx, base);
loc_839AA690:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AA698"))) PPC_WEAK_FUNC(sub_839AA698);
PPC_FUNC_IMPL(__imp__sub_839AA698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839AA6A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839AA6B4;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// bl 0x8399f8b8
	ctx.lr = 0x839AA6C4;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,528
	ctx.r11.s64 = ctx.r31.s64 * 528;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x831ce980
	ctx.lr = 0x839AA6DC;
	sub_831CE980(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x839aa748
	if (cr6.eq) goto loc_839AA748;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(ctx.r28.s32, -1, xer);
	// beq cr6,0x839aa748
	if (cr6.eq) goto loc_839AA748;
	// li r30,0
	ctx.r30.s64 = 0;
loc_839AA6F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399ea10
	ctx.lr = 0x839AA700;
	sub_8399EA10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// bge cr6,0x839aa73c
	if (!cr6.lt) goto loc_839AA73C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x839a0478
	ctx.lr = 0x839AA71C;
	sub_839A0478(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x839AA720;
	sub_825832D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839aa73c
	if (cr6.eq) goto loc_839AA73C;
	// ld r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// beq cr6,0x839aa754
	if (cr6.eq) goto loc_839AA754;
loc_839AA73C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// blt cr6,0x839aa6f4
	if (cr6.lt) goto loc_839AA6F4;
loc_839AA748:
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839AA754:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AA760"))) PPC_WEAK_FUNC(sub_839AA760);
PPC_FUNC_IMPL(__imp__sub_839AA760) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839AA780;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399f950
	ctx.lr = 0x839AA788;
	sub_8399F950(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x839aa798
	if (cr6.lt) goto loc_839AA798;
loc_839AA790:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x839aa7b8
	goto loc_839AA7B8;
loc_839AA798:
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// bge cr6,0x839aa790
	if (!cr6.lt) goto loc_839AA790;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r8,r10,27044
	ctx.r8.s64 = ctx.r10.s64 + 27044;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
loc_839AA7B8:
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

__attribute__((alias("__imp__sub_839AA7D0"))) PPC_WEAK_FUNC(sub_839AA7D0);
PPC_FUNC_IMPL(__imp__sub_839AA7D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839AA7D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839AA7E8;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399f950
	ctx.lr = 0x839AA7F0;
	sub_8399F950(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839AA7F8;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399f950
	ctx.lr = 0x839AA800;
	sub_8399F950(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x839aa810
	if (cr6.lt) goto loc_839AA810;
loc_839AA808:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x839aa830
	goto loc_839AA830;
loc_839AA810:
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// bge cr6,0x839aa808
	if (!cr6.lt) goto loc_839AA808;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r8,r10,27044
	ctx.r8.s64 = ctx.r10.s64 + 27044;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r7,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
loc_839AA830:
	// bl 0x8399f8b8
	ctx.lr = 0x839AA834;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399edb0
	ctx.lr = 0x839AA850;
	sub_8399EDB0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399ed80
	ctx.lr = 0x839AA860;
	sub_8399ED80(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AA868"))) PPC_WEAK_FUNC(sub_839AA868);
PPC_FUNC_IMPL(__imp__sub_839AA868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839AA870;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839AA880;
	sub_8399F8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399f950
	ctx.lr = 0x839AA888;
	sub_8399F950(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839AA890;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839aa8b4
	if (cr6.eq) goto loc_839AA8B4;
	// bl 0x8399f8b8
	ctx.lr = 0x839AA89C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ee58
	ctx.lr = 0x839AA8B4;
	sub_8399EE58(ctx, base);
loc_839AA8B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AA8BC"))) PPC_WEAK_FUNC(sub_839AA8BC);
PPC_FUNC_IMPL(__imp__sub_839AA8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AA8C0"))) PPC_WEAK_FUNC(sub_839AA8C0);
PPC_FUNC_IMPL(__imp__sub_839AA8C0) {
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
	// cmplwi cr6,r4,24
	cr6.compare<uint32_t>(ctx.r4.u32, 24, xer);
	// bge cr6,0x839aa918
	if (!cr6.lt) goto loc_839AA918;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x839aa498
	ctx.lr = 0x839AA8E8;
	sub_839AA498(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x839AA8F0;
	sub_831156E8(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r9,1
	ctx.r9.s64 = 1;
	// mulli r10,r10,2800
	ctx.r10.s64 = ctx.r10.s64 * 2800;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// slw r8,r9,r31
	ctx.r8.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r7,708(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 708);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// stw r6,708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 708, ctx.r6.u32);
loc_839AA918:
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

__attribute__((alias("__imp__sub_839AA930"))) PPC_WEAK_FUNC(sub_839AA930);
PPC_FUNC_IMPL(__imp__sub_839AA930) {
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
	// cmplwi cr6,r4,24
	cr6.compare<uint32_t>(ctx.r4.u32, 24, xer);
	// bge cr6,0x839aa98c
	if (!cr6.lt) goto loc_839AA98C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x839aa498
	ctx.lr = 0x839AA958;
	sub_839AA498(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x839AA960;
	sub_831156E8(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r9,1
	ctx.r9.s64 = 1;
	// mulli r10,r10,2800
	ctx.r10.s64 = ctx.r10.s64 * 2800;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// slw r7,r9,r31
	ctx.r7.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r6,708(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 708);
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// addic r4,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r3,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x839aa990
	goto loc_839AA990;
loc_839AA98C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839AA990:
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

__attribute__((alias("__imp__sub_839AA9A8"))) PPC_WEAK_FUNC(sub_839AA9A8);
PPC_FUNC_IMPL(__imp__sub_839AA9A8) {
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
	// bl 0x8399f8b8
	ctx.lr = 0x839AA9C0;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839aa9f4
	if (cr6.eq) goto loc_839AA9F4;
	// bl 0x8399f8b8
	ctx.lr = 0x839AA9CC;
	sub_8399F8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399f950
	ctx.lr = 0x839AA9D4;
	sub_8399F950(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839a9be8
	ctx.lr = 0x839AA9E0;
	sub_839A9BE8(ctx, base);
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
loc_839AA9F4:
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

__attribute__((alias("__imp__sub_839AAA0C"))) PPC_WEAK_FUNC(sub_839AAA0C);
PPC_FUNC_IMPL(__imp__sub_839AAA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AAA10"))) PPC_WEAK_FUNC(sub_839AAA10);
PPC_FUNC_IMPL(__imp__sub_839AAA10) {
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
	ctx.lr = 0x839AAA20;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x839AAA24;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839aaa90
	if (cr6.eq) goto loc_839AAA90;
	// bl 0x82dad2e0
	ctx.lr = 0x839AAA34;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839aaa90
	if (cr6.eq) goto loc_839AAA90;
	// bl 0x839a9dd0
	ctx.lr = 0x839AAA40;
	sub_839A9DD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839aaa7c
	if (!cr6.eq) goto loc_839AAA7C;
	// bl 0x82dad2e0
	ctx.lr = 0x839AAA50;
	sub_82DAD2E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82db0a88
	ctx.lr = 0x839AAA58;
	sub_82DB0A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839aaa7c
	if (!cr6.eq) goto loc_839AAA7C;
	// bl 0x82dad2e0
	ctx.lr = 0x839AAA68;
	sub_82DAD2E0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82db0a88
	ctx.lr = 0x839AAA70;
	sub_82DB0A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839aaabc
	if (cr6.eq) goto loc_839AAABC;
loc_839AAA7C:
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
loc_839AAA90:
	// bl 0x8399f8b8
	ctx.lr = 0x839AAA94;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x839aaabc
	if (cr6.eq) goto loc_839AAABC;
	// bl 0x830ff290
	ctx.lr = 0x839AAAA4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839AAAA8;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// beq cr6,0x839aaabc
	if (cr6.eq) goto loc_839AAABC;
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x839aaac0
	if (!cr6.eq) goto loc_839AAAC0;
loc_839AAABC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_839AAAC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839AAAD0"))) PPC_WEAK_FUNC(sub_839AAAD0);
PPC_FUNC_IMPL(__imp__sub_839AAAD0) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839AAAF0;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839aab6c
	if (cr6.eq) goto loc_839AAB6C;
	// bl 0x8399f8b8
	ctx.lr = 0x839AAAFC;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8399fe30
	ctx.lr = 0x839AAB0C;
	sub_8399FE30(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839AAB10;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea10
	ctx.lr = 0x839AAB24;
	sub_8399EA10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x839aab6c
	if (cr6.eq) goto loc_839AAB6C;
	// bl 0x8399f8b8
	ctx.lr = 0x839AAB34;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,528
	ctx.r11.s64 = ctx.r31.s64 * 528;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a0478
	ctx.lr = 0x839AAB4C;
	sub_839A0478(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832e0
	ctx.lr = 0x839AAB54;
	sub_825832E0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x839aab70
	goto loc_839AAB70;
loc_839AAB6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839AAB70:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

__attribute__((alias("__imp__sub_839AAB88"))) PPC_WEAK_FUNC(sub_839AAB88);
PPC_FUNC_IMPL(__imp__sub_839AAB88) {
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
	// bl 0x8399f8b8
	ctx.lr = 0x839AABA0;
	sub_8399F8B8(ctx, base);
	// addi r11,r31,1028
	ctx.r11.s64 = ctx.r31.s64 + 1028;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bl 0x839aa5d8
	ctx.lr = 0x839AABB0;
	sub_839AA5D8(ctx, base);
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

__attribute__((alias("__imp__sub_839AABC4"))) PPC_WEAK_FUNC(sub_839AABC4);
PPC_FUNC_IMPL(__imp__sub_839AABC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AABC8"))) PPC_WEAK_FUNC(sub_839AABC8);
PPC_FUNC_IMPL(__imp__sub_839AABC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x839AABD0;
	__savegprlr_20(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839AABF4;
	sub_8399F8B8(ctx, base);
	// mulli r25,r31,460
	ctx.r25.s64 = ctx.r31.s64 * 460;
	// add r11,r25,r3
	ctx.r11.u64 = ctx.r25.u64 + ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399f6e8
	ctx.lr = 0x839AAC0C;
	sub_8399F6E8(ctx, base);
	// li r20,13
	ctx.r20.s64 = 13;
	// cmplwi cr6,r30,255
	cr6.compare<uint32_t>(ctx.r30.u32, 255, xer);
	// blt cr6,0x839aac24
	if (cr6.lt) goto loc_839AAC24;
	// li r30,255
	ctx.r30.s64 = 255;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// b 0x839aaca0
	goto loc_839AACA0;
loc_839AAC24:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839aac64
	if (cr6.eq) goto loc_839AAC64;
	// bl 0x8399f8b8
	ctx.lr = 0x839AAC34;
	sub_8399F8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399f988
	ctx.lr = 0x839AAC3C;
	sub_8399F988(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839AAC44;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8399fe30
	ctx.lr = 0x839AAC54;
	sub_8399FE30(ctx, base);
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r5,r29,24
	ctx.r5.u64 = ctx.r29.u32 & 0xFF;
	// bl 0x82acc960
	ctx.lr = 0x839AAC60;
	sub_82ACC960(ctx, base);
	// b 0x839aac9c
	goto loc_839AAC9C;
loc_839AAC64:
	// addi r30,r30,11
	ctx.r30.s64 = ctx.r30.s64 + 11;
	// bl 0x8399f8b8
	ctx.lr = 0x839AAC6C;
	sub_8399F8B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839aa158
	ctx.lr = 0x839AAC80;
	sub_839AA158(ctx, base);
	// mulli r11,r31,528
	ctx.r11.s64 = ctx.r31.s64 * 528;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x839a0478
	ctx.lr = 0x839AAC98;
	sub_839A0478(ctx, base);
	// bl 0x8399f098
	ctx.lr = 0x839AAC9C;
	sub_8399F098(ctx, base);
loc_839AAC9C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_839AACA0:
	// clrlwi r22,r28,24
	ctx.r22.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x839aad80
	if (cr6.eq) goto loc_839AAD80;
	// subfic r28,r31,1
	xer.ca = ctx.r31.u32 <= 1;
	ctx.r28.s64 = 1 - ctx.r31.s64;
	// bl 0x8399f8b8
	ctx.lr = 0x839AACB4;
	sub_8399F8B8(ctx, base);
	// mulli r27,r28,532
	ctx.r27.s64 = ctx.r28.s64 * 532;
	// add r11,r27,r3
	ctx.r11.u64 = ctx.r27.u64 + ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// bl 0x8399edb0
	ctx.lr = 0x839AACD0;
	sub_8399EDB0(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x839aace4
	if (!cr6.lt) goto loc_839AACE4;
	// lbzx r29,r31,r3
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// b 0x839aace8
	goto loc_839AACE8;
loc_839AACE4:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_839AACE8:
	// bl 0x8399f8b8
	ctx.lr = 0x839AACEC;
	sub_8399F8B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8399f950
	ctx.lr = 0x839AACF4;
	sub_8399F950(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839AACF8;
	sub_8399F8B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8399f988
	ctx.lr = 0x839AAD00;
	sub_8399F988(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839AAD04;
	sub_8399F8B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839aa9a8
	ctx.lr = 0x839AAD0C;
	sub_839AA9A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839aad4c
	if (cr6.eq) goto loc_839AAD4C;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmpwi cr6,r30,255
	cr6.compare<int32_t>(ctx.r30.s32, 255, xer);
	// bge cr6,0x839aad70
	if (!cr6.lt) goto loc_839AAD70;
	// bl 0x8399f8b8
	ctx.lr = 0x839AAD28;
	sub_8399F8B8(ctx, base);
	// add r11,r27,r3
	ctx.r11.u64 = ctx.r27.u64 + ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x8399edb0
	ctx.lr = 0x839AAD3C;
	sub_8399EDB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82acc960
	ctx.lr = 0x839AAD48;
	sub_82ACC960(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_839AAD4C:
	// cmpwi cr6,r30,255
	cr6.compare<int32_t>(ctx.r30.s32, 255, xer);
	// bge cr6,0x839aad70
	if (!cr6.lt) goto loc_839AAD70;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839aa018
	ctx.lr = 0x839AAD64;
	sub_839AA018(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// b 0x839aad98
	goto loc_839AAD98;
loc_839AAD70:
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x839aad98
	goto loc_839AAD98;
loc_839AAD80:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839aa018
	ctx.lr = 0x839AAD90;
	sub_839AA018(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_839AAD98:
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// stb r21,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r21.u8);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bne cr6,0x839aadb4
	if (!cr6.eq) goto loc_839AADB4;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// b 0x839aae20
	goto loc_839AAE20;
loc_839AADB4:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// bne cr6,0x839aae20
	if (!cr6.eq) goto loc_839AAE20;
	// bl 0x8399f8b8
	ctx.lr = 0x839AADC0;
	sub_8399F8B8(ctx, base);
	// add r11,r25,r3
	ctx.r11.u64 = ctx.r25.u64 + ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f6e8
	ctx.lr = 0x839AADD4;
	sub_8399F6E8(ctx, base);
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839aade8
	if (!cr6.eq) goto loc_839AADE8;
	// stw r20,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
loc_839AADE8:
	// lbz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839aadfc
	if (cr6.eq) goto loc_839AADFC;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_839AADFC:
	// bl 0x8399f8b8
	ctx.lr = 0x839AAE00;
	sub_8399F8B8(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r25,r3
	ctx.r11.u64 = ctx.r25.u64 + ctx.r3.u64;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f6a8
	ctx.lr = 0x839AAE20;
	sub_8399F6A8(ctx, base);
loc_839AAE20:
	// bl 0x8399f8b8
	ctx.lr = 0x839AAE24;
	sub_8399F8B8(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r25,r3
	ctx.r11.u64 = ctx.r25.u64 + ctx.r3.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f6a8
	ctx.lr = 0x839AAE44;
	sub_8399F6A8(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AAE4C"))) PPC_WEAK_FUNC(sub_839AAE4C);
PPC_FUNC_IMPL(__imp__sub_839AAE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AAE50"))) PPC_WEAK_FUNC(sub_839AAE50);
PPC_FUNC_IMPL(__imp__sub_839AAE50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x839AAE58;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// clrlwi r25,r5,24
	ctx.r25.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r23,2
	ctx.r23.s64 = 2;
	// li r24,15
	ctx.r24.s64 = 15;
	// addi r29,r11,26940
	ctx.r29.s64 = ctx.r11.s64 + 26940;
loc_839AAE84:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83165ba8
	ctx.lr = 0x839AAE94;
	sub_83165BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a1da8
	ctx.lr = 0x839AAEA8;
	sub_825A1DA8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839aaec4
	if (cr6.lt) goto loc_839AAEC4;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x839AAEC4;
	sub_825952B8(ctx, base);
loc_839AAEC4:
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// beq cr6,0x839aaf04
	if (cr6.eq) goto loc_839AAF04;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// beq cr6,0x839aaf04
	if (cr6.eq) goto loc_839AAF04;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x839AAEF0;
	sub_825A1EB8(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x839aae84
	if (cr6.lt) goto loc_839AAE84;
loc_839AAF04:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AAF0C"))) PPC_WEAK_FUNC(sub_839AAF0C);
PPC_FUNC_IMPL(__imp__sub_839AAF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AAF10"))) PPC_WEAK_FUNC(sub_839AAF10);
PPC_FUNC_IMPL(__imp__sub_839AAF10) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839AAF34;
	sub_8399F8B8(ctx, base);
	// addi r11,r31,1028
	ctx.r11.s64 = ctx.r31.s64 + 1028;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bl 0x839aa5d8
	ctx.lr = 0x839AAF44;
	sub_839AA5D8(ctx, base);
	// ld r3,504(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 504);
	// bl 0x839aa510
	ctx.lr = 0x839AAF4C;
	sub_839AA510(ctx, base);
	// bl 0x839a9b70
	ctx.lr = 0x839AAF50;
	sub_839A9B70(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839aaf90
	if (cr6.eq) goto loc_839AAF90;
	// bl 0x831156e8
	ctx.lr = 0x839AAF60;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123ad8
	ctx.lr = 0x839AAF74;
	sub_83123AD8(ctx, base);
	// addi r4,r3,52
	ctx.r4.s64 = ctx.r3.s64 + 52;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_839AAF7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839aaf7c
	if (!cr6.eq) goto loc_839AAF7C;
	// b 0x839aafd4
	goto loc_839AAFD4;
loc_839AAF90:
	// lwz r31,140(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x8399f8b8
	ctx.lr = 0x839AAF98;
	sub_8399F8B8(ctx, base);
	// addi r11,r31,1028
	ctx.r11.s64 = ctx.r31.s64 + 1028;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bl 0x839aa5d8
	ctx.lr = 0x839AAFA8;
	sub_839AA5D8(ctx, base);
	// ld r31,504(r3)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 504);
	// bl 0x831156e8
	ctx.lr = 0x839AAFB0;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c260
	ctx.lr = 0x839AAFBC;
	sub_8311C260(ctx, base);
	// addi r4,r3,52
	ctx.r4.s64 = ctx.r3.s64 + 52;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_839AAFC4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839aafc4
	if (!cr6.eq) goto loc_839AAFC4;
loc_839AAFD4:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x839AAFE8;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_839AB000"))) PPC_WEAK_FUNC(sub_839AB000);
PPC_FUNC_IMPL(__imp__sub_839AB000) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839AB020;
	sub_8399F8B8(ctx, base);
	// addi r11,r31,1028
	ctx.r11.s64 = ctx.r31.s64 + 1028;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bl 0x839aa5d8
	ctx.lr = 0x839AB030;
	sub_839AA5D8(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_839AB038:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839ab038
	if (!cr6.eq) goto loc_839AB038;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x839AB05C;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_839AB074"))) PPC_WEAK_FUNC(sub_839AB074);
PPC_FUNC_IMPL(__imp__sub_839AB074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AB078"))) PPC_WEAK_FUNC(sub_839AB078);
PPC_FUNC_IMPL(__imp__sub_839AB078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839AB080;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x831156e8
	ctx.lr = 0x839AB098;
	sub_831156E8(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839AB09C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,528
	ctx.r11.s64 = ctx.r30.s64 * 528;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x839a0478
	ctx.lr = 0x839AB0B4;
	sub_839A0478(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x839AB0B8;
	sub_825832D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ab10c
	if (cr6.eq) goto loc_839AB10C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839ab100
	if (!cr6.eq) goto loc_839AB100;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a8df0
	ctx.lr = 0x839AB0E0;
	sub_839A8DF0(ctx, base);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ori r4,r4,285
	ctx.r4.u64 = ctx.r4.u64 | 285;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d042a8
	ctx.lr = 0x839AB0F8;
	sub_82D042A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AB100:
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x839AB10C;
	sub_8259D6C0(ctx, base);
loc_839AB10C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AB114"))) PPC_WEAK_FUNC(sub_839AB114);
PPC_FUNC_IMPL(__imp__sub_839AB114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AB118"))) PPC_WEAK_FUNC(sub_839AB118);
PPC_FUNC_IMPL(__imp__sub_839AB118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839AB120;
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
	// bl 0x8399f8b8
	ctx.lr = 0x839AB134;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ab1f8
	if (cr6.eq) goto loc_839AB1F8;
	// bl 0x8399f8b8
	ctx.lr = 0x839AB140;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bgt cr6,0x839ab1f8
	if (cr6.gt) goto loc_839AB1F8;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839ab1c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839AB1C0;
	// bdzf 4*cr6+eq,0x839ab1d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839AB1D0;
	// bdzf 4*cr6+eq,0x839ab1e0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839AB1E0;
	// bne cr6,0x839ab1f0
	if (!cr6.eq) goto loc_839AB1F0;
	// mulli r29,r30,460
	ctx.r29.s64 = ctx.r30.s64 * 460;
	// bl 0x8399f8b8
	ctx.lr = 0x839AB174;
	sub_8399F8B8(ctx, base);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// addi r30,r11,2128
	ctx.r30.s64 = ctx.r11.s64 + 2128;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x8399f718
	ctx.lr = 0x839AB190;
	sub_8399F718(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x839ab1a4
	if (!cr6.eq) goto loc_839AB1A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7a980
	ctx.lr = 0x839AB1A4;
	sub_83A7A980(ctx, base);
loc_839AB1A4:
	// bl 0x8399f8b8
	ctx.lr = 0x839AB1A8;
	sub_8399F8B8(ctx, base);
	// add r11,r29,r3
	ctx.r11.u64 = ctx.r29.u64 + ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x839a1338
	ctx.lr = 0x839AB1B8;
	sub_839A1338(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839AB1C0:
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x8399ebb0
	ctx.lr = 0x839AB1C8;
	sub_8399EBB0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839AB1D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399eb98
	ctx.lr = 0x839AB1D8;
	sub_8399EB98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839AB1E0:
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x8399ebc0
	ctx.lr = 0x839AB1E8;
	sub_8399EBC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839AB1F0:
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x8399ebd0
	ctx.lr = 0x839AB1F8;
	sub_8399EBD0(ctx, base);
loc_839AB1F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AB200"))) PPC_WEAK_FUNC(sub_839AB200);
PPC_FUNC_IMPL(__imp__sub_839AB200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839AB208;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x839a7ea0
	ctx.lr = 0x839AB228;
	sub_839A7EA0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839a7f18
	ctx.lr = 0x839AB23C;
	sub_839A7F18(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839a7f90
	ctx.lr = 0x839AB250;
	sub_839A7F90(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// bl 0x82d042a8
	ctx.lr = 0x839AB290;
	sub_82D042A8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d042a8
	ctx.lr = 0x839AB2A0;
	sub_82D042A8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82d042a8
	ctx.lr = 0x839AB2B0;
	sub_82D042A8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r29,r11,26948
	ctx.r29.s64 = ctx.r11.s64 + 26948;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82ab6970
	ctx.lr = 0x839AB2C8;
	sub_82AB6970(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1da8
	ctx.lr = 0x839AB2DC;
	sub_825A1DA8(ctx, base);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8292a448
	ctx.lr = 0x839AB2F4;
	sub_8292A448(ctx, base);
	// addi r5,r29,-4
	ctx.r5.s64 = ctx.r29.s64 + -4;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8292a568
	ctx.lr = 0x839AB304;
	sub_8292A568(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x825a1da8
	ctx.lr = 0x839AB314;
	sub_825A1DA8(ctx, base);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8292a448
	ctx.lr = 0x839AB32C;
	sub_8292A448(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259cb28
	ctx.lr = 0x839AB340;
	sub_8259CB28(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x839ab360
	if (cr6.lt) goto loc_839AB360;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x839AB360;
	sub_825952B8(ctx, base);
loc_839AB360:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x839ab388
	if (cr6.lt) goto loc_839AB388;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x839AB388;
	sub_825952B8(ctx, base);
loc_839AB388:
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
	// blt cr6,0x839ab3b0
	if (cr6.lt) goto loc_839AB3B0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x839AB3B0;
	sub_825952B8(ctx, base);
loc_839AB3B0:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// blt cr6,0x839ab3d8
	if (cr6.lt) goto loc_839AB3D8;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x839AB3D8;
	sub_825952B8(ctx, base);
loc_839AB3D8:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// blt cr6,0x839ab400
	if (cr6.lt) goto loc_839AB400;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x839AB400;
	sub_825952B8(ctx, base);
loc_839AB400:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x839ab428
	if (cr6.lt) goto loc_839AB428;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x839AB428;
	sub_825952B8(ctx, base);
loc_839AB428:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// blt cr6,0x839ab450
	if (cr6.lt) goto loc_839AB450;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x839AB450;
	sub_825952B8(ctx, base);
loc_839AB450:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AB458"))) PPC_WEAK_FUNC(sub_839AB458);
PPC_FUNC_IMPL(__imp__sub_839AB458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839AB460;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x839a6cc8
	ctx.lr = 0x839AB47C;
	sub_839A6CC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839a6d70
	ctx.lr = 0x839AB48C;
	sub_839A6D70(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839a6e18
	ctx.lr = 0x839AB49C;
	sub_839A6E18(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// bl 0x82d042a8
	ctx.lr = 0x839AB4DC;
	sub_82D042A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d042a8
	ctx.lr = 0x839AB4EC;
	sub_82D042A8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82d042a8
	ctx.lr = 0x839AB4FC;
	sub_82D042A8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r29,r11,26956
	ctx.r29.s64 = ctx.r11.s64 + 26956;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82ab6970
	ctx.lr = 0x839AB514;
	sub_82AB6970(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1da8
	ctx.lr = 0x839AB528;
	sub_825A1DA8(ctx, base);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8292a448
	ctx.lr = 0x839AB540;
	sub_8292A448(ctx, base);
	// addi r5,r29,-4
	ctx.r5.s64 = ctx.r29.s64 + -4;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8292a568
	ctx.lr = 0x839AB550;
	sub_8292A568(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x825a1da8
	ctx.lr = 0x839AB560;
	sub_825A1DA8(ctx, base);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8292a448
	ctx.lr = 0x839AB578;
	sub_8292A448(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259cb28
	ctx.lr = 0x839AB58C;
	sub_8259CB28(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x839ab5ac
	if (cr6.lt) goto loc_839AB5AC;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x839AB5AC;
	sub_825952B8(ctx, base);
loc_839AB5AC:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x839ab5d4
	if (cr6.lt) goto loc_839AB5D4;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x839AB5D4;
	sub_825952B8(ctx, base);
loc_839AB5D4:
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
	// blt cr6,0x839ab5fc
	if (cr6.lt) goto loc_839AB5FC;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x839AB5FC;
	sub_825952B8(ctx, base);
loc_839AB5FC:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// blt cr6,0x839ab624
	if (cr6.lt) goto loc_839AB624;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x839AB624;
	sub_825952B8(ctx, base);
loc_839AB624:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// blt cr6,0x839ab64c
	if (cr6.lt) goto loc_839AB64C;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x839AB64C;
	sub_825952B8(ctx, base);
loc_839AB64C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x839ab674
	if (cr6.lt) goto loc_839AB674;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x839AB674;
	sub_825952B8(ctx, base);
loc_839AB674:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// blt cr6,0x839ab69c
	if (cr6.lt) goto loc_839AB69C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x839AB69C;
	sub_825952B8(ctx, base);
loc_839AB69C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AB6A4"))) PPC_WEAK_FUNC(sub_839AB6A4);
PPC_FUNC_IMPL(__imp__sub_839AB6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AB6A8"))) PPC_WEAK_FUNC(sub_839AB6A8);
PPC_FUNC_IMPL(__imp__sub_839AB6A8) {
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
	ctx.lr = 0x839AB6C0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addis r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 131072;
	// addi r10,r10,-26044
	ctx.r10.s64 = ctx.r10.s64 + -26044;
	// blt cr6,0x839ab6e8
	if (cr6.lt) goto loc_839AB6E8;
	// cmpwi cr6,r31,1114
	cr6.compare<int32_t>(ctx.r31.s32, 1114, xer);
	// bge cr6,0x839ab6e8
	if (!cr6.lt) goto loc_839AB6E8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x839ab6ec
	goto loc_839AB6EC;
loc_839AB6E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839AB6EC:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x839ab708
	if (cr6.lt) goto loc_839AB708;
	// cmpwi cr6,r31,1114
	cr6.compare<int32_t>(ctx.r31.s32, 1114, xer);
	// bge cr6,0x839ab708
	if (!cr6.lt) goto loc_839AB708;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
loc_839AB708:
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

__attribute__((alias("__imp__sub_839AB71C"))) PPC_WEAK_FUNC(sub_839AB71C);
PPC_FUNC_IMPL(__imp__sub_839AB71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AB720"))) PPC_WEAK_FUNC(sub_839AB720);
PPC_FUNC_IMPL(__imp__sub_839AB720) {
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
	// bl 0x839aaa10
	ctx.lr = 0x839AB740;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839ab75c
	if (!cr6.eq) goto loc_839AB75C;
	// bl 0x8308e078
	ctx.lr = 0x839AB750;
	sub_8308E078(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x839ab760
	if (cr6.eq) goto loc_839AB760;
loc_839AB75C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839AB760:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ab774
	if (cr6.eq) goto loc_839AB774;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839ab6a8
	ctx.lr = 0x839AB774;
	sub_839AB6A8(ctx, base);
loc_839AB774:
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

__attribute__((alias("__imp__sub_839AB78C"))) PPC_WEAK_FUNC(sub_839AB78C);
PPC_FUNC_IMPL(__imp__sub_839AB78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AB790"))) PPC_WEAK_FUNC(sub_839AB790);
PPC_FUNC_IMPL(__imp__sub_839AB790) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x839aaa10
	ctx.lr = 0x839AB7B0;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839ab7cc
	if (!cr6.eq) goto loc_839AB7CC;
	// bl 0x8308e078
	ctx.lr = 0x839AB7C0;
	sub_8308E078(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x839ab7d0
	if (cr6.eq) goto loc_839AB7D0;
loc_839AB7CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839AB7D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ab814
	if (cr6.eq) goto loc_839AB814;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bgt cr6,0x839ab814
	if (cr6.gt) goto loc_839AB814;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x839ab814
	if (cr6.eq) goto loc_839AB814;
	// bdz 0x839ab808
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839AB808;
	// bdz 0x839ab800
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839AB800;
	// li r4,852
	ctx.r4.s64 = 852;
	// b 0x839ab80c
	goto loc_839AB80C;
loc_839AB800:
	// li r4,853
	ctx.r4.s64 = 853;
	// b 0x839ab80c
	goto loc_839AB80C;
loc_839AB808:
	// li r4,854
	ctx.r4.s64 = 854;
loc_839AB80C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ab720
	ctx.lr = 0x839AB814;
	sub_839AB720(ctx, base);
loc_839AB814:
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

__attribute__((alias("__imp__sub_839AB82C"))) PPC_WEAK_FUNC(sub_839AB82C);
PPC_FUNC_IMPL(__imp__sub_839AB82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AB830"))) PPC_WEAK_FUNC(sub_839AB830);
PPC_FUNC_IMPL(__imp__sub_839AB830) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x839aaa10
	ctx.lr = 0x839AB850;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839ab86c
	if (!cr6.eq) goto loc_839AB86C;
	// bl 0x8308e078
	ctx.lr = 0x839AB860;
	sub_8308E078(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x839ab870
	if (cr6.eq) goto loc_839AB870;
loc_839AB86C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839AB870:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ab928
	if (cr6.eq) goto loc_839AB928;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bgt cr6,0x839ab928
	if (cr6.gt) goto loc_839AB928;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18276
	ctx.r12.s64 = ctx.r12.s64 + -18276;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u32) {
	case 0:
		goto loc_839AB928;
	case 1:
		goto loc_839AB8D4;
	case 2:
		goto loc_839AB8CC;
	case 3:
		goto loc_839AB8DC;
	case 4:
		goto loc_839AB8E4;
	case 5:
		goto loc_839AB8EC;
	case 6:
		goto loc_839AB8F4;
	case 7:
		goto loc_839AB8FC;
	case 8:
		goto loc_839AB904;
	case 9:
		goto loc_839AB90C;
	case 10:
		goto loc_839AB914;
	case 11:
		goto loc_839AB91C;
	default:
		return;
	}
	// lwz r28,-18136(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18136);
	// lwz r28,-18220(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18220);
	// lwz r28,-18228(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18228);
	// lwz r28,-18212(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18212);
	// lwz r28,-18204(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18204);
	// lwz r28,-18196(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18196);
	// lwz r28,-18188(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18188);
	// lwz r28,-18180(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18180);
	// lwz r28,-18172(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18172);
	// lwz r28,-18164(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18164);
	// lwz r28,-18156(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18156);
	// lwz r28,-18148(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18148);
loc_839AB8CC:
	// li r4,838
	ctx.r4.s64 = 838;
	// b 0x839ab920
	goto loc_839AB920;
loc_839AB8D4:
	// li r4,837
	ctx.r4.s64 = 837;
	// b 0x839ab920
	goto loc_839AB920;
loc_839AB8DC:
	// li r4,839
	ctx.r4.s64 = 839;
	// b 0x839ab920
	goto loc_839AB920;
loc_839AB8E4:
	// li r4,840
	ctx.r4.s64 = 840;
	// b 0x839ab920
	goto loc_839AB920;
loc_839AB8EC:
	// li r4,841
	ctx.r4.s64 = 841;
	// b 0x839ab920
	goto loc_839AB920;
loc_839AB8F4:
	// li r4,842
	ctx.r4.s64 = 842;
	// b 0x839ab920
	goto loc_839AB920;
loc_839AB8FC:
	// li r4,843
	ctx.r4.s64 = 843;
	// b 0x839ab920
	goto loc_839AB920;
loc_839AB904:
	// li r4,844
	ctx.r4.s64 = 844;
	// b 0x839ab920
	goto loc_839AB920;
loc_839AB90C:
	// li r4,845
	ctx.r4.s64 = 845;
	// b 0x839ab920
	goto loc_839AB920;
loc_839AB914:
	// li r4,846
	ctx.r4.s64 = 846;
	// b 0x839ab920
	goto loc_839AB920;
loc_839AB91C:
	// li r4,847
	ctx.r4.s64 = 847;
loc_839AB920:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ab720
	ctx.lr = 0x839AB928;
	sub_839AB720(ctx, base);
loc_839AB928:
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

__attribute__((alias("__imp__sub_839AB940"))) PPC_WEAK_FUNC(sub_839AB940);
PPC_FUNC_IMPL(__imp__sub_839AB940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839AB948;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// bl 0x8399f8b8
	ctx.lr = 0x839AB960;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839abb70
	if (cr6.eq) goto loc_839ABB70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839aa9a8
	ctx.lr = 0x839AB970;
	sub_839AA9A8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x839ab98c
	if (!cr6.eq) goto loc_839AB98C;
	// li r4,864
	ctx.r4.s64 = 864;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839ab720
	ctx.lr = 0x839AB984;
	sub_839AB720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839AB98C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839aba04
	if (cr6.eq) goto loc_839ABA04;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x839ab9fc
	if (!cr6.lt) goto loc_839AB9FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839a64a8
	ctx.lr = 0x839AB9AC;
	sub_839A64A8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x839ab9e8
	if (cr6.lt) goto loc_839AB9E8;
	// beq cr6,0x839ab9d4
	if (cr6.eq) goto loc_839AB9D4;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bge cr6,0x839abb70
	if (!cr6.lt) goto loc_839ABB70;
	// li r4,867
	ctx.r4.s64 = 867;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839ab720
	ctx.lr = 0x839AB9CC;
	sub_839AB720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839AB9D4:
	// li r4,866
	ctx.r4.s64 = 866;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839ab720
	ctx.lr = 0x839AB9E0;
	sub_839AB720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839AB9E8:
	// li r4,865
	ctx.r4.s64 = 865;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839ab720
	ctx.lr = 0x839AB9F4;
	sub_839AB720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839AB9FC:
	// addi r11,r31,-3
	ctx.r11.s64 = ctx.r31.s64 + -3;
	// b 0x839aba08
	goto loc_839ABA08;
loc_839ABA04:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
loc_839ABA08:
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x839abb70
	if (cr6.gt) goto loc_839ABB70;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17880
	ctx.r12.s64 = ctx.r12.s64 + -17880;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_839ABA60;
	case 1:
		goto loc_839ABA74;
	case 2:
		goto loc_839ABA88;
	case 3:
		goto loc_839ABA9C;
	case 4:
		goto loc_839ABAB0;
	case 5:
		goto loc_839ABAC4;
	case 6:
		goto loc_839ABAD8;
	case 7:
		goto loc_839ABAEC;
	case 8:
		goto loc_839ABB00;
	case 9:
		goto loc_839ABB14;
	case 10:
		goto loc_839ABB28;
	case 11:
		goto loc_839ABB3C;
	case 12:
		goto loc_839ABB50;
	case 13:
		goto loc_839ABB64;
	default:
		return;
	}
	// lwz r28,-17824(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17824);
	// lwz r28,-17804(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17804);
	// lwz r28,-17784(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17784);
	// lwz r28,-17764(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17764);
	// lwz r28,-17744(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17744);
	// lwz r28,-17724(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17724);
	// lwz r28,-17704(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17704);
	// lwz r28,-17684(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17684);
	// lwz r28,-17664(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17664);
	// lwz r28,-17644(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17644);
	// lwz r28,-17624(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17624);
	// lwz r28,-17604(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17604);
	// lwz r28,-17584(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17584);
	// lwz r28,-17564(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17564);
loc_839ABA60:
	// li r4,868
	ctx.r4.s64 = 868;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839ab720
	ctx.lr = 0x839ABA6C;
	sub_839AB720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839ABA74:
	// li r4,869
	ctx.r4.s64 = 869;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839ab720
	ctx.lr = 0x839ABA80;
	sub_839AB720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839ABA88:
	// li r4,870
	ctx.r4.s64 = 870;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839ab720
	ctx.lr = 0x839ABA94;
	sub_839AB720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839ABA9C:
	// li r4,871
	ctx.r4.s64 = 871;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839ab720
	ctx.lr = 0x839ABAA8;
	sub_839AB720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839ABAB0:
	// li r4,872
	ctx.r4.s64 = 872;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839ab720
	ctx.lr = 0x839ABABC;
	sub_839AB720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839ABAC4:
	// li r4,873
	ctx.r4.s64 = 873;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839ab720
	ctx.lr = 0x839ABAD0;
	sub_839AB720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839ABAD8:
	// li r4,874
	ctx.r4.s64 = 874;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839ab720
	ctx.lr = 0x839ABAE4;
	sub_839AB720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839ABAEC:
	// li r4,875
	ctx.r4.s64 = 875;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839ab720
	ctx.lr = 0x839ABAF8;
	sub_839AB720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839ABB00:
	// li r4,876
	ctx.r4.s64 = 876;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839ab720
	ctx.lr = 0x839ABB0C;
	sub_839AB720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839ABB14:
	// li r4,877
	ctx.r4.s64 = 877;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839ab720
	ctx.lr = 0x839ABB20;
	sub_839AB720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839ABB28:
	// li r4,878
	ctx.r4.s64 = 878;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839ab720
	ctx.lr = 0x839ABB34;
	sub_839AB720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839ABB3C:
	// li r4,879
	ctx.r4.s64 = 879;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839ab720
	ctx.lr = 0x839ABB48;
	sub_839AB720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839ABB50:
	// li r4,880
	ctx.r4.s64 = 880;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839ab720
	ctx.lr = 0x839ABB5C;
	sub_839AB720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839ABB64:
	// li r4,881
	ctx.r4.s64 = 881;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839ab720
	ctx.lr = 0x839ABB70;
	sub_839AB720(ctx, base);
loc_839ABB70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839ABB78"))) PPC_WEAK_FUNC(sub_839ABB78);
PPC_FUNC_IMPL(__imp__sub_839ABB78) {
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
	// lwz r3,120(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839abbb4
	if (cr6.eq) goto loc_839ABBB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839ABBB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
loc_839ABBB4:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839abbd4
	if (cr6.eq) goto loc_839ABBD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839ABBD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
loc_839ABBD4:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839abbf4
	if (cr6.eq) goto loc_839ABBF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839ABBF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
loc_839ABBF4:
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839abc14
	if (cr6.eq) goto loc_839ABC14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839ABC10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
loc_839ABC14:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839abc34
	if (cr6.eq) goto loc_839ABC34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839ABC30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
loc_839ABC34:
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

__attribute__((alias("__imp__sub_839ABC4C"))) PPC_WEAK_FUNC(sub_839ABC4C);
PPC_FUNC_IMPL(__imp__sub_839ABC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839ABC50"))) PPC_WEAK_FUNC(sub_839ABC50);
PPC_FUNC_IMPL(__imp__sub_839ABC50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839ABC58;
	__savegprlr_27(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d253f8
	ctx.lr = 0x839ABC74;
	sub_82D253F8(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// addi r9,r11,29288
	ctx.r9.s64 = ctx.r11.s64 + 29288;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// addi r27,r7,25000
	ctx.r27.s64 = ctx.r7.s64 + 25000;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stb r29,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r29.u8);
	// stb r30,177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 177, ctx.r30.u8);
	// std r30,192(r31)
	PPC_STORE_U64(ctx.r31.u32 + 192, ctx.r30.u64);
	// stb r30,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r30.u8);
	// stb r30,201(r31)
	PPC_STORE_U8(ctx.r31.u32 + 201, ctx.r30.u8);
	// stb r30,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r30.u8);
	// stb r30,203(r31)
	PPC_STORE_U8(ctx.r31.u32 + 203, ctx.r30.u8);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stb r30,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r30.u8);
	// lwz r4,25000(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 25000);
	// bl 0x82d20ae0
	ctx.lr = 0x839ABD04;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x839ABD14;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d17e60
	ctx.lr = 0x839ABD20;
	sub_82D17E60(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x839ABD2C;
	sub_82D199D0(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x839ABD30;
	sub_831156E8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lwz r5,52(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r4,r6,45476
	ctx.r4.u64 = ctx.r6.u64 | 45476;
	// lbzx r3,r5,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839abd4c
	if (!cr6.eq) goto loc_839ABD4C;
	// stb r29,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r29.u8);
loc_839ABD4C:
	// bl 0x831156e8
	ctx.lr = 0x839ABD50;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,45477
	ctx.r9.u64 = ctx.r11.u64 | 45477;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x839abd6c
	if (!cr6.eq) goto loc_839ABD6C;
	// stb r29,201(r31)
	PPC_STORE_U8(ctx.r31.u32 + 201, ctx.r29.u8);
loc_839ABD6C:
	// bl 0x831156e8
	ctx.lr = 0x839ABD70;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,176
	ctx.r5.s64 = 176;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r4,r10,6
	ctx.r4.s64 = ctx.r10.s64 + 393216;
	// addi r4,r4,-30316
	ctx.r4.s64 = ctx.r4.s64 + -30316;
	// bl 0x831ce980
	ctx.lr = 0x839ABD8C;
	sub_831CE980(ctx, base);
	// bl 0x8308e078
	ctx.lr = 0x839ABD90;
	sub_8308E078(ctx, base);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// bne cr6,0x839abe18
	if (!cr6.eq) goto loc_839ABE18;
	// bl 0x839aaa10
	ctx.lr = 0x839ABDA0;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839abe18
	if (!cr6.eq) goto loc_839ABE18;
	// bl 0x830ff290
	ctx.lr = 0x839ABDB0;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x839ABDB4;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839abe18
	if (!cr6.eq) goto loc_839ABE18;
	// subfic r4,r28,1
	xer.ca = ctx.r28.u32 <= 1;
	ctx.r4.s64 = 1 - ctx.r28.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b64ac0
	ctx.lr = 0x839ABDCC;
	sub_82B64AC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839abe18
	if (!cr6.eq) goto loc_839ABE18;
	// bl 0x831156e8
	ctx.lr = 0x839ABDDC;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,45478
	ctx.r9.u64 = ctx.r11.u64 | 45478;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x839abdf8
	if (!cr6.eq) goto loc_839ABDF8;
	// stb r29,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r29.u8);
loc_839ABDF8:
	// bl 0x831156e8
	ctx.lr = 0x839ABDFC;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,45479
	ctx.r9.u64 = ctx.r11.u64 | 45479;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x839abe18
	if (!cr6.eq) goto loc_839ABE18;
	// stb r29,203(r31)
	PPC_STORE_U8(ctx.r31.u32 + 203, ctx.r29.u8);
loc_839ABE18:
	// lbz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839abe30
	if (cr6.eq) goto loc_839ABE30;
	// li r11,35
	ctx.r11.s64 = 35;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x839abe5c
	goto loc_839ABE5C;
loc_839ABE30:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x839b06e0
	ctx.lr = 0x839ABE38;
	sub_839B06E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839abe58
	if (cr6.eq) goto loc_839ABE58;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// li r4,802
	ctx.r4.s64 = 802;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x839ab720
	ctx.lr = 0x839ABE54;
	sub_839AB720(ctx, base);
	// b 0x839abe5c
	goto loc_839ABE5C;
loc_839ABE58:
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
loc_839ABE5C:
	// lwz r29,96(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839ABE64;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,460
	ctx.r11.s64 = ctx.r29.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f7a8
	ctx.lr = 0x839ABE74;
	sub_8399F7A8(ctx, base);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// bl 0x830fe8a0
	ctx.lr = 0x839ABE90;
	sub_830FE8A0(ctx, base);
	// std r3,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r3.u64);
	// bl 0x830fe8a0
	ctx.lr = 0x839ABE98;
	sub_830FE8A0(ctx, base);
	// std r3,192(r31)
	PPC_STORE_U64(ctx.r31.u32 + 192, ctx.r3.u64);
	// bl 0x839a2350
	ctx.lr = 0x839ABEA0;
	sub_839A2350(ctx, base);
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839ABEAC;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,460
	ctx.r11.s64 = ctx.r30.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f8a0
	ctx.lr = 0x839ABEC0;
	sub_8399F8A0(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839ABEC4;
	sub_8399F8B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x839a0f18
	ctx.lr = 0x839ABED0;
	sub_839A0F18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839ABEDC"))) PPC_WEAK_FUNC(sub_839ABEDC);
PPC_FUNC_IMPL(__imp__sub_839ABEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839ABEE0"))) PPC_WEAK_FUNC(sub_839ABEE0);
PPC_FUNC_IMPL(__imp__sub_839ABEE0) {
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
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,29288
	ctx.r9.s64 = ctx.r11.s64 + 29288;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d25548
	ctx.lr = 0x839ABF18;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x839abf30
	if (cr6.eq) goto loc_839ABF30;
	// bl 0x82416268
	ctx.lr = 0x839ABF2C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839ABF30:
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

__attribute__((alias("__imp__sub_839ABF48"))) PPC_WEAK_FUNC(sub_839ABF48);
PPC_FUNC_IMPL(__imp__sub_839ABF48) {
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
	// cmplwi cr6,r4,7
	cr6.compare<uint32_t>(ctx.r4.u32, 7, xer);
	// bgt cr6,0x839abff8
	if (cr6.gt) goto loc_839ABFF8;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839abf94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839ABF94;
	// bdzf 4*cr6+eq,0x839abfb0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839ABFB0;
	// bdzf 4*cr6+eq,0x839abfd0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839ABFD0;
	// bdzf 4*cr6+eq,0x839abfe8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839ABFE8;
	// bdzf 4*cr6+eq,0x839abff8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839ABFF8;
	// bdzf 4*cr6+eq,0x839abff8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839ABFF8;
	// bne cr6,0x839abff0
	if (!cr6.eq) goto loc_839ABFF0;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x839abff4
	goto loc_839ABFF4;
loc_839ABF94:
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839abfa8
	if (cr6.eq) goto loc_839ABFA8;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x839abff4
	goto loc_839ABFF4;
loc_839ABFA8:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x839abff4
	goto loc_839ABFF4;
loc_839ABFB0:
	// li r11,14
	ctx.r11.s64 = 14;
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x8399f8b8
	ctx.lr = 0x839ABFC0;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399f950
	ctx.lr = 0x839ABFC8;
	sub_8399F950(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// b 0x839abff8
	goto loc_839ABFF8;
loc_839ABFD0:
	// li r11,18
	ctx.r11.s64 = 18;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r4,849
	ctx.r4.s64 = 849;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x839ab720
	ctx.lr = 0x839ABFE4;
	sub_839AB720(ctx, base);
	// b 0x839abff8
	goto loc_839ABFF8;
loc_839ABFE8:
	// li r11,23
	ctx.r11.s64 = 23;
	// b 0x839abff4
	goto loc_839ABFF4;
loc_839ABFF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839ABFF4:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_839ABFF8:
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

__attribute__((alias("__imp__sub_839AC010"))) PPC_WEAK_FUNC(sub_839AC010);
PPC_FUNC_IMPL(__imp__sub_839AC010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839ac078
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839AC078;
	// bdzf 4*cr6+eq,0x839ac078
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839AC078;
	// bdzf 4*cr6+eq,0x839ac078
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839AC078;
	// bdzf 4*cr6+eq,0x839ac048
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839AC048;
	// bdzf 4*cr6+eq,0x839ac054
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839AC054;
	// bne cr6,0x839ac060
	if (!cr6.eq) goto loc_839AC060;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blr 
	return;
loc_839AC048:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blr 
	return;
loc_839AC054:
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blr 
	return;
loc_839AC060:
	// lbz r11,201(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 201);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,36
	ctx.r11.s64 = 36;
	// bne cr6,0x839ac074
	if (!cr6.eq) goto loc_839AC074;
	// li r11,0
	ctx.r11.s64 = 0;
loc_839AC074:
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
loc_839AC078:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839AC07C"))) PPC_WEAK_FUNC(sub_839AC07C);
PPC_FUNC_IMPL(__imp__sub_839AC07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AC080"))) PPC_WEAK_FUNC(sub_839AC080);
PPC_FUNC_IMPL(__imp__sub_839AC080) {
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
	// cmplwi cr6,r4,7
	cr6.compare<uint32_t>(ctx.r4.u32, 7, xer);
	// bge cr6,0x839ac168
	if (!cr6.lt) goto loc_839AC168;
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// bgt cr6,0x839ac168
	if (cr6.gt) goto loc_839AC168;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x839ac0ec
	if (cr6.eq) goto loc_839AC0EC;
	// bdz 0x839ac110
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839AC110;
	// bdz 0x839ac110
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839AC110;
	// bdz 0x839ac0d0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839AC0D0;
	// bdz 0x839ac118
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839AC118;
	// bdnz 0x839ac160
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839AC160;
	// li r11,37
	ctx.r11.s64 = 37;
	// b 0x839ac164
	goto loc_839AC164;
loc_839AC0D0:
	// lbz r11,203(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 203);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ac0e4
	if (cr6.eq) goto loc_839AC0E4;
	// li r11,33
	ctx.r11.s64 = 33;
	// b 0x839ac164
	goto loc_839AC164;
loc_839AC0E4:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x839ac164
	goto loc_839AC164;
loc_839AC0EC:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x839aa9a8
	ctx.lr = 0x839AC0F4;
	sub_839AA9A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ac108
	if (cr6.eq) goto loc_839AC108;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x839ac164
	goto loc_839AC164;
loc_839AC108:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x839ac164
	goto loc_839AC164;
loc_839AC110:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x839ac164
	goto loc_839AC164;
loc_839AC118:
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AC120;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399fce8
	ctx.lr = 0x839AC128;
	sub_8399FCE8(ctx, base);
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AC134;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x839a0f18
	ctx.lr = 0x839AC140;
	sub_839A0F18(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AC154;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// b 0x839ac168
	goto loc_839AC168;
loc_839AC160:
	// li r11,9
	ctx.r11.s64 = 9;
loc_839AC164:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_839AC168:
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

__attribute__((alias("__imp__sub_839AC180"))) PPC_WEAK_FUNC(sub_839AC180);
PPC_FUNC_IMPL(__imp__sub_839AC180) {
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
	// lwz r30,96(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839AC1A0;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399fa70
	ctx.lr = 0x839AC1A8;
	sub_8399FA70(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bge cr6,0x839ac1b8
	if (!cr6.lt) goto loc_839AC1B8;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x839ac1d8
	goto loc_839AC1D8;
loc_839AC1B8:
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AC1C0;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399fa70
	ctx.lr = 0x839AC1C8;
	sub_8399FA70(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// li r11,16
	ctx.r11.s64 = 16;
	// beq cr6,0x839ac1d8
	if (cr6.eq) goto loc_839AC1D8;
	// li r11,17
	ctx.r11.s64 = 17;
loc_839AC1D8:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_839AC1F4"))) PPC_WEAK_FUNC(sub_839AC1F4);
PPC_FUNC_IMPL(__imp__sub_839AC1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AC1F8"))) PPC_WEAK_FUNC(sub_839AC1F8);
PPC_FUNC_IMPL(__imp__sub_839AC1F8) {
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
	// bl 0x839aaa10
	ctx.lr = 0x839AC214;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839ac22c
	if (!cr6.eq) goto loc_839AC22C;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x839ac2b8
	goto loc_839AC2B8;
loc_839AC22C:
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AC234;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399fbe8
	ctx.lr = 0x839AC23C;
	sub_8399FBE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// bl 0x839b0c80
	ctx.lr = 0x839AC258;
	sub_839B0C80(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// beq cr6,0x839ac274
	if (cr6.eq) goto loc_839AC274;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x839ac2b8
	if (!cr6.eq) goto loc_839AC2B8;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x839ac2b8
	goto loc_839AC2B8;
loc_839AC274:
	// li r11,13
	ctx.r11.s64 = 13;
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x8399f8b8
	ctx.lr = 0x839AC284;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399fce8
	ctx.lr = 0x839AC28C;
	sub_8399FCE8(ctx, base);
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AC298;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x839a0f18
	ctx.lr = 0x839AC2A4;
	sub_839A0F18(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,332(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839AC2B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839AC2B8:
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

__attribute__((alias("__imp__sub_839AC2D0"))) PPC_WEAK_FUNC(sub_839AC2D0);
PPC_FUNC_IMPL(__imp__sub_839AC2D0) {
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
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ac30c
	if (cr6.eq) goto loc_839AC30C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AC304;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
loc_839AC30C:
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AC314;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399fc20
	ctx.lr = 0x839AC31C;
	sub_8399FC20(ctx, base);
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// beq cr6,0x839ac344
	if (cr6.eq) goto loc_839AC344;
	// cmpwi cr6,r3,12
	cr6.compare<int32_t>(ctx.r3.s32, 12, xer);
	// beq cr6,0x839ac338
	if (cr6.eq) goto loc_839AC338;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x839ac388
	goto loc_839AC388;
loc_839AC338:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x839ac388
	goto loc_839AC388;
loc_839AC344:
	// li r11,13
	ctx.r11.s64 = 13;
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x8399f8b8
	ctx.lr = 0x839AC354;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399fce8
	ctx.lr = 0x839AC35C;
	sub_8399FCE8(ctx, base);
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AC368;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x839a0f18
	ctx.lr = 0x839AC374;
	sub_839A0F18(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,332(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839AC388;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839AC388:
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

__attribute__((alias("__imp__sub_839AC3A0"))) PPC_WEAK_FUNC(sub_839AC3A0);
PPC_FUNC_IMPL(__imp__sub_839AC3A0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r30,96(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// bl 0x8399f8b8
	ctx.lr = 0x839AC3C8;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399fc58
	ctx.lr = 0x839AC3D0;
	sub_8399FC58(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x839ac3e0
	if (!cr6.eq) goto loc_839AC3E0;
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_839AC3E0:
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

__attribute__((alias("__imp__sub_839AC3F8"))) PPC_WEAK_FUNC(sub_839AC3F8);
PPC_FUNC_IMPL(__imp__sub_839AC3F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839AC400;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x839ac458
	if (cr6.lt) goto loc_839AC458;
	// beq cr6,0x839ac430
	if (cr6.eq) goto loc_839AC430;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bge cr6,0x839ac4ec
	if (!cr6.lt) goto loc_839AC4EC;
	// li r11,26
	ctx.r11.s64 = 26;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x839ac478
	goto loc_839AC478;
loc_839AC430:
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x839b0e10
	ctx.lr = 0x839AC43C;
	sub_839B0E10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ac450
	if (cr6.eq) goto loc_839AC450;
	// li r11,28
	ctx.r11.s64 = 28;
	// b 0x839ac478
	goto loc_839AC478;
loc_839AC450:
	// li r11,25
	ctx.r11.s64 = 25;
	// b 0x839ac478
	goto loc_839AC478;
loc_839AC458:
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x839b0e10
	ctx.lr = 0x839AC464;
	sub_839B0E10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,27
	ctx.r11.s64 = 27;
	// bne cr6,0x839ac478
	if (!cr6.eq) goto loc_839AC478;
	// li r11,24
	ctx.r11.s64 = 24;
loc_839AC478:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// clrlwi r29,r30,24
	ctx.r29.u64 = ctx.r30.u32 & 0xFF;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
	// beq cr6,0x839ac4ec
	if (cr6.eq) goto loc_839AC4EC;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ac4c0
	if (cr6.eq) goto loc_839AC4C0;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,12299
	ctx.r10.u64 = ctx.r11.u64 | 12299;
	// stb r28,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r28.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83102fe0
	ctx.lr = 0x839AC4BC;
	sub_83102FE0(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_839AC4C0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x839ac4ec
	if (cr6.eq) goto loc_839AC4EC;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r10,r11,12318
	ctx.r10.u64 = ctx.r11.u64 | 12318;
	// stb r28,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r28.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x83102fe0
	ctx.lr = 0x839AC4EC;
	sub_83102FE0(ctx, base);
loc_839AC4EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AC4F4"))) PPC_WEAK_FUNC(sub_839AC4F4);
PPC_FUNC_IMPL(__imp__sub_839AC4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AC4F8"))) PPC_WEAK_FUNC(sub_839AC4F8);
PPC_FUNC_IMPL(__imp__sub_839AC4F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bne cr6,0x839ac530
	if (!cr6.eq) goto loc_839AC530;
	// lbz r11,202(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 202);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ac524
	if (cr6.eq) goto loc_839AC524;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,202(r3)
	PPC_STORE_U8(ctx.r3.u32 + 202, ctx.r11.u8);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// blr 
	return;
loc_839AC524:
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blr 
	return;
loc_839AC530:
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(ctx.r11.s32, 33, xer);
	// bne cr6,0x839ac558
	if (!cr6.eq) goto loc_839AC558;
	// lbz r11,203(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 203);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ac524
	if (cr6.eq) goto loc_839AC524;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r11,203(r3)
	PPC_STORE_U8(ctx.r3.u32 + 203, ctx.r11.u8);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// blr 
	return;
loc_839AC558:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839AC564"))) PPC_WEAK_FUNC(sub_839AC564);
PPC_FUNC_IMPL(__imp__sub_839AC564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AC568"))) PPC_WEAK_FUNC(sub_839AC568);
PPC_FUNC_IMPL(__imp__sub_839AC568) {
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
	// lbz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 200);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ac5e0
	if (cr6.eq) goto loc_839AC5E0;
	// bl 0x831156e8
	ctx.lr = 0x839AC594;
	sub_831156E8(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r8,r10,45476
	ctx.r8.u64 = ctx.r10.u64 | 45476;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stbx r11,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u8);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stb r7,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r7.u8);
	// bne cr6,0x839ac5d0
	if (!cr6.eq) goto loc_839AC5D0;
	// li r11,36
	ctx.r11.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x839b0670
	ctx.lr = 0x839AC5CC;
	sub_839B0670(ctx, base);
	// b 0x839ac600
	goto loc_839AC600;
loc_839AC5D0:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// li r4,802
	ctx.r4.s64 = 802;
	// bl 0x839ab720
	ctx.lr = 0x839AC5DC;
	sub_839AB720(ctx, base);
	// b 0x839ac600
	goto loc_839AC600;
loc_839AC5E0:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x839b06e0
	ctx.lr = 0x839AC5E8;
	sub_839B06E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x839ac5fc
	if (!cr6.eq) goto loc_839AC5FC;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
loc_839AC5FC:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_839AC600:
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

__attribute__((alias("__imp__sub_839AC618"))) PPC_WEAK_FUNC(sub_839AC618);
PPC_FUNC_IMPL(__imp__sub_839AC618) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// bl 0x839aa9a8
	ctx.lr = 0x839AC634;
	sub_839AA9A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// bne cr6,0x839ac648
	if (!cr6.eq) goto loc_839AC648;
	// li r11,3
	ctx.r11.s64 = 3;
loc_839AC648:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_839AC660"))) PPC_WEAK_FUNC(sub_839AC660);
PPC_FUNC_IMPL(__imp__sub_839AC660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839AC668;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// bl 0x839b0e10
	ctx.lr = 0x839AC67C;
	sub_839B0E10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ac6bc
	if (cr6.eq) goto loc_839AC6BC;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// bne cr6,0x839ac6a4
	if (!cr6.eq) goto loc_839AC6A4;
	// li r11,27
	ctx.r11.s64 = 27;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839AC6A4:
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(ctx.r11.s32, 25, xer);
	// bne cr6,0x839ac724
	if (!cr6.eq) goto loc_839AC724;
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839AC6BC:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r10,23
	ctx.r10.s64 = 23;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
	// beq cr6,0x839ac700
	if (cr6.eq) goto loc_839AC700;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,12298
	ctx.r10.u64 = ctx.r11.u64 | 12298;
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83102fe0
	ctx.lr = 0x839AC6FC;
	sub_83102FE0(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_839AC700:
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r10,r11,12317
	ctx.r10.u64 = ctx.r11.u64 | 12317;
	// stb r29,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x83102fe0
	ctx.lr = 0x839AC724;
	sub_83102FE0(ctx, base);
loc_839AC724:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AC72C"))) PPC_WEAK_FUNC(sub_839AC72C);
PPC_FUNC_IMPL(__imp__sub_839AC72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AC730"))) PPC_WEAK_FUNC(sub_839AC730);
PPC_FUNC_IMPL(__imp__sub_839AC730) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(ctx.r11.u32, 36, xer);
	// bgt cr6,0x839acac8
	if (cr6.gt) goto loc_839ACAC8;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-14484
	ctx.r12.s64 = ctx.r12.s64 + -14484;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_839AC800;
	case 1:
		goto loc_839AC8F0;
	case 2:
		goto loc_839AC8F0;
	case 3:
		goto loc_839AC9E8;
	case 4:
		goto loc_839AC9E8;
	case 5:
		goto loc_839ACAC8;
	case 6:
		goto loc_839ACAC8;
	case 7:
		goto loc_839AC9E8;
	case 8:
		goto loc_839ACAC8;
	case 9:
		goto loc_839AC9E8;
	case 10:
		goto loc_839AC9E8;
	case 11:
		goto loc_839ACAC8;
	case 12:
		goto loc_839ACAC8;
	case 13:
		goto loc_839ACAC8;
	case 14:
		goto loc_839ACAC8;
	case 15:
		goto loc_839ACAC8;
	case 16:
		goto loc_839ACAC8;
	case 17:
		goto loc_839ACAC8;
	case 18:
		goto loc_839AC8F0;
	case 19:
		goto loc_839AC8F0;
	case 20:
		goto loc_839AC9E8;
	case 21:
		goto loc_839AC8F0;
	case 22:
		goto loc_839AC9E8;
	case 23:
		goto loc_839AC8F0;
	case 24:
		goto loc_839ACAC8;
	case 25:
		goto loc_839ACAC8;
	case 26:
		goto loc_839AC8F0;
	case 27:
		goto loc_839ACAC8;
	case 28:
		goto loc_839ACAC8;
	case 29:
		goto loc_839AC8F0;
	case 30:
		goto loc_839ACAC8;
	case 31:
		goto loc_839AC96C;
	case 32:
		goto loc_839AC96C;
	case 33:
		goto loc_839AC9E8;
	case 34:
		goto loc_839ACAC8;
	case 35:
		goto loc_839AC8F0;
	case 36:
		goto loc_839AC8F0;
	default:
		return;
	}
	// lwz r28,-14336(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -14336);
	// lwz r28,-14096(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -14096);
	// lwz r28,-14096(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -14096);
	// lwz r28,-13848(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13848);
	// lwz r28,-13848(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13848);
	// lwz r28,-13624(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13624);
	// lwz r28,-13624(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13624);
	// lwz r28,-13848(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13848);
	// lwz r28,-13624(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13624);
	// lwz r28,-13848(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13848);
	// lwz r28,-13848(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13848);
	// lwz r28,-13624(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13624);
	// lwz r28,-13624(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13624);
	// lwz r28,-13624(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13624);
	// lwz r28,-13624(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13624);
	// lwz r28,-13624(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13624);
	// lwz r28,-13624(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13624);
	// lwz r28,-13624(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13624);
	// lwz r28,-14096(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -14096);
	// lwz r28,-14096(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -14096);
	// lwz r28,-13848(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13848);
	// lwz r28,-14096(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -14096);
	// lwz r28,-13848(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13848);
	// lwz r28,-14096(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -14096);
	// lwz r28,-13624(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13624);
	// lwz r28,-13624(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13624);
	// lwz r28,-14096(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -14096);
	// lwz r28,-13624(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13624);
	// lwz r28,-13624(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13624);
	// lwz r28,-14096(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -14096);
	// lwz r28,-13624(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13624);
	// lwz r28,-13972(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13972);
	// lwz r28,-13972(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13972);
	// lwz r28,-13848(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13848);
	// lwz r28,-13624(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13624);
	// lwz r28,-14096(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -14096);
	// lwz r28,-14096(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -14096);
loc_839AC800:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ac880
	if (cr6.eq) goto loc_839AC880;
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AC814;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399f8e0
	ctx.lr = 0x839AC81C;
	sub_8399F8E0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r10,21716
	ctx.r30.s64 = ctx.r10.s64 + 21716;
	// bne cr6,0x839ac85c
	if (!cr6.eq) goto loc_839AC85C;
	// ori r8,r9,12354
	ctx.r8.u64 = ctx.r9.u64 | 12354;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x83102fe0
	ctx.lr = 0x839AC854;
	sub_83102FE0(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x839ac8bc
	goto loc_839AC8BC;
loc_839AC85C:
	// ori r8,r9,12353
	ctx.r8.u64 = ctx.r9.u64 | 12353;
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x83102fe0
	ctx.lr = 0x839AC878;
	sub_83102FE0(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// b 0x839ac8bc
	goto loc_839AC8BC;
loc_839AC880:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839AC888;
	sub_82D19A68(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,29048
	ctx.r11.s64 = ctx.r11.s64 + 29048;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// bl 0x839b2460
	ctx.lr = 0x839AC8A8;
	sub_839B2460(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839AC8BC;
	sub_83103100(ctx, base);
loc_839AC8BC:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ac8dc
	if (cr6.eq) goto loc_839AC8DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AC8DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839AC8DC:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839acb20
	if (cr6.eq) goto loc_839ACB20;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x839acb1c
	goto loc_839ACB1C;
loc_839AC8F0:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839ac938
	if (!cr6.eq) goto loc_839AC938;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839AC904;
	sub_82D19A68(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,29048
	ctx.r11.s64 = ctx.r11.s64 + 29048;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x839b2460
	ctx.lr = 0x839AC924;
	sub_839B2460(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839AC938;
	sub_83103100(ctx, base);
loc_839AC938:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ac958
	if (cr6.eq) goto loc_839AC958;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AC958;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839AC958:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839acb20
	if (cr6.eq) goto loc_839ACB20;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x839acb1c
	goto loc_839ACB1C;
loc_839AC96C:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839ac9b4
	if (!cr6.eq) goto loc_839AC9B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839AC980;
	sub_82D19A68(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,29048
	ctx.r11.s64 = ctx.r11.s64 + 29048;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x839b2460
	ctx.lr = 0x839AC9A0;
	sub_839B2460(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839AC9B4;
	sub_83103100(ctx, base);
loc_839AC9B4:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ac9d4
	if (cr6.eq) goto loc_839AC9D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AC9D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839AC9D4:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839acb20
	if (cr6.eq) goto loc_839ACB20;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x839acb1c
	goto loc_839ACB1C;
loc_839AC9E8:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839aca28
	if (cr6.eq) goto loc_839ACA28;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r9,12354
	ctx.r8.u64 = ctx.r9.u64 | 12354;
	// addi r30,r10,21716
	ctx.r30.s64 = ctx.r10.s64 + 21716;
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x83102fe0
	ctx.lr = 0x839ACA20;
	sub_83102FE0(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// b 0x839aca94
	goto loc_839ACA94;
loc_839ACA28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839ACA30;
	sub_82D19A68(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r3,r11,29048
	ctx.r3.s64 = ctx.r11.s64 + 29048;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x839b2460
	ctx.lr = 0x839ACA4C;
	sub_839B2460(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839ACA60;
	sub_83103100(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r7,r8,12354
	ctx.r7.u64 = ctx.r8.u64 | 12354;
	// addi r30,r9,21716
	ctx.r30.s64 = ctx.r9.s64 + 21716;
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x83102fe0
	ctx.lr = 0x839ACA90;
	sub_83102FE0(ctx, base);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
loc_839ACA94:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839acab4
	if (cr6.eq) goto loc_839ACAB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839ACAB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839ACAB4:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839acb20
	if (cr6.eq) goto loc_839ACB20;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x839acb1c
	goto loc_839ACB1C;
loc_839ACAC8:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839acaec
	if (cr6.eq) goto loc_839ACAEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839ACAE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
loc_839ACAEC:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839acb0c
	if (cr6.eq) goto loc_839ACB0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839ACB0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839ACB0C:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839acb20
	if (cr6.eq) goto loc_839ACB20;
	// li r4,2
	ctx.r4.s64 = 2;
loc_839ACB1C:
	// bl 0x839b1fc0
	ctx.lr = 0x839ACB20;
	sub_839B1FC0(ctx, base);
loc_839ACB20:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_839ACB38"))) PPC_WEAK_FUNC(sub_839ACB38);
PPC_FUNC_IMPL(__imp__sub_839ACB38) {
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
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x839acb98
	if (cr6.eq) goto loc_839ACB98;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x839acb98
	if (cr6.eq) goto loc_839ACB98;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839acbdc
	if (cr6.eq) goto loc_839ACBDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839ACB7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
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
loc_839ACB98:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839acbdc
	if (!cr6.eq) goto loc_839ACBDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839ACBAC;
	sub_82D19A68(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r3,r11,29080
	ctx.r3.s64 = ctx.r11.s64 + 29080;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x839b2cd8
	ctx.lr = 0x839ACBC8;
	sub_839B2CD8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839ACBDC;
	sub_83103100(ctx, base);
loc_839ACBDC:
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

__attribute__((alias("__imp__sub_839ACBF0"))) PPC_WEAK_FUNC(sub_839ACBF0);
PPC_FUNC_IMPL(__imp__sub_839ACBF0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839ACC08;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r4,r11,29112
	ctx.r4.s64 = ctx.r11.s64 + 29112;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839ACC24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839ACC34;
	sub_82D291E0(ctx, base);
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

__attribute__((alias("__imp__sub_839ACC48"))) PPC_WEAK_FUNC(sub_839ACC48);
PPC_FUNC_IMPL(__imp__sub_839ACC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839ACC50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839accb4
	if (!cr6.eq) goto loc_839ACCB4;
	// bl 0x82d19a68
	ctx.lr = 0x839ACC6C;
	sub_82D19A68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,96(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r27,100(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d199f0
	ctx.lr = 0x839ACC80;
	sub_82D199F0(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,29132
	ctx.r3.s64 = ctx.r11.s64 + 29132;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x839b3548
	ctx.lr = 0x839ACCA0;
	sub_839B3548(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839ACCB4;
	sub_83103100(ctx, base);
loc_839ACCB4:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839accd4
	if (cr6.eq) goto loc_839ACCD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839ACCD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839ACCD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839ACCDC"))) PPC_WEAK_FUNC(sub_839ACCDC);
PPC_FUNC_IMPL(__imp__sub_839ACCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839ACCE0"))) PPC_WEAK_FUNC(sub_839ACCE0);
PPC_FUNC_IMPL(__imp__sub_839ACCE0) {
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
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839acd18
	if (cr6.eq) goto loc_839ACD18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839ACD10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
loc_839ACD18:
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

__attribute__((alias("__imp__sub_839ACD2C"))) PPC_WEAK_FUNC(sub_839ACD2C);
PPC_FUNC_IMPL(__imp__sub_839ACD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839ACD30"))) PPC_WEAK_FUNC(sub_839ACD30);
PPC_FUNC_IMPL(__imp__sub_839ACD30) {
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
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839acd5c
	if (cr6.eq) goto loc_839ACD5C;
	// bl 0x83102fe0
	ctx.lr = 0x839ACD5C;
	sub_83102FE0(ctx, base);
loc_839ACD5C:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839acd70
	if (cr6.eq) goto loc_839ACD70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83102fe0
	ctx.lr = 0x839ACD70;
	sub_83102FE0(ctx, base);
loc_839ACD70:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839acd90
	if (cr6.eq) goto loc_839ACD90;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839ACD90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839ACD90:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839acdb0
	if (cr6.eq) goto loc_839ACDB0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839ACDB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839ACDB0:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839acdd0
	if (cr6.eq) goto loc_839ACDD0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839ACDD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839ACDD0:
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

__attribute__((alias("__imp__sub_839ACDE8"))) PPC_WEAK_FUNC(sub_839ACDE8);
PPC_FUNC_IMPL(__imp__sub_839ACDE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839ACDF0;
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
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x839ace64
	if (cr6.eq) goto loc_839ACE64;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x839ace64
	if (cr6.eq) goto loc_839ACE64;
	// bl 0x82d19a68
	ctx.lr = 0x839ACE14;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,29188
	ctx.r4.s64 = ctx.r11.s64 + 29188;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839ACE30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839ACE38;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,22
	ctx.r4.s64 = 22;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2d510
	ctx.lr = 0x839ACE48;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ace8c
	if (cr6.eq) goto loc_839ACE8C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d3d968
	ctx.lr = 0x839ACE5C;
	sub_82D3D968(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839ACE64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839ACE6C;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,29188
	ctx.r11.s64 = ctx.r11.s64 + 29188;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839ACE8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839ACE8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839ACE94"))) PPC_WEAK_FUNC(sub_839ACE94);
PPC_FUNC_IMPL(__imp__sub_839ACE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839ACE98"))) PPC_WEAK_FUNC(sub_839ACE98);
PPC_FUNC_IMPL(__imp__sub_839ACE98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839ACEA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x839acf80
	if (!cr6.eq) goto loc_839ACF80;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,120(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839acf18
	if (!cr6.eq) goto loc_839ACF18;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r8,r11,21716
	ctx.r8.s64 = ctx.r11.s64 + 21716;
	// ori r9,r10,12319
	ctx.r9.u64 = ctx.r10.u64 | 12319;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// beq cr6,0x839acefc
	if (cr6.eq) goto loc_839ACEFC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83102fe0
	ctx.lr = 0x839ACEFC;
	sub_83102FE0(ctx, base);
loc_839ACEFC:
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839acf80
	if (cr6.eq) goto loc_839ACF80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83102fe0
	ctx.lr = 0x839ACF10;
	sub_83102FE0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839ACF18:
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// addi r29,r11,21716
	ctx.r29.s64 = ctx.r11.s64 + 21716;
	// ori r8,r9,12320
	ctx.r8.u64 = ctx.r9.u64 | 12320;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// beq cr6,0x839acf54
	if (cr6.eq) goto loc_839ACF54;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x83102fe0
	ctx.lr = 0x839ACF54;
	sub_83102FE0(ctx, base);
loc_839ACF54:
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// ori r10,r11,12321
	ctx.r10.u64 = ctx.r11.u64 | 12321;
	// stb r31,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r31.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// beq cr6,0x839acf80
	if (cr6.eq) goto loc_839ACF80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83102fe0
	ctx.lr = 0x839ACF80;
	sub_83102FE0(ctx, base);
loc_839ACF80:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839ACF88"))) PPC_WEAK_FUNC(sub_839ACF88);
PPC_FUNC_IMPL(__imp__sub_839ACF88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839ACF90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839ACF9C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r4,r11,29196
	ctx.r4.s64 = ctx.r11.s64 + 29196;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839ACFB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ad0a0
	if (cr6.eq) goto loc_839AD0A0;
	// bl 0x839a9af8
	ctx.lr = 0x839ACFC8;
	sub_839A9AF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ad05c
	if (cr6.eq) goto loc_839AD05C;
	// bl 0x82d4bb00
	ctx.lr = 0x839ACFD8;
	sub_82D4BB00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ad044
	if (cr6.eq) goto loc_839AD044;
	// bl 0x82d4bb00
	ctx.lr = 0x839ACFE4;
	sub_82D4BB00(ctx, base);
	// bl 0x82d4bb60
	ctx.lr = 0x839ACFE8;
	sub_82D4BB60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ad044
	if (cr6.eq) goto loc_839AD044;
	// lwz r28,96(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d4bb00
	ctx.lr = 0x839AD000;
	sub_82D4BB00(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d4bc28
	ctx.lr = 0x839AD008;
	sub_82D4BC28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ad018
	if (cr6.eq) goto loc_839AD018;
	// li r29,1
	ctx.r29.s64 = 1;
loc_839AD018:
	// lwz r30,96(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x82d4bb00
	ctx.lr = 0x839AD020;
	sub_82D4BB00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d4bbc8
	ctx.lr = 0x839AD028;
	sub_82D4BBC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32830
	ctx.lr = 0x839AD03C;
	sub_82D32830(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839AD044:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839AD054;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839AD05C:
	// lwz r30,96(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AD064;
	sub_8399F8B8(ctx, base);
	// addi r11,r30,1028
	ctx.r11.s64 = ctx.r30.s64 + 1028;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,324(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r5,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r5.u32);
	// beq cr6,0x839ad08c
	if (cr6.eq) goto loc_839AD08C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_839AD08C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d329f8
	ctx.lr = 0x839AD0A0;
	sub_82D329F8(ctx, base);
loc_839AD0A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AD0A8"))) PPC_WEAK_FUNC(sub_839AD0A8);
PPC_FUNC_IMPL(__imp__sub_839AD0A8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bge cr6,0x839ad104
	if (!cr6.lt) goto loc_839AD104;
	// bl 0x82d19a68
	ctx.lr = 0x839AD0D0;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ad104
	if (cr6.eq) goto loc_839AD104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839AD0E0;
	sub_82D19A68(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,25008
	ctx.r9.s64 = ctx.r11.s64 + 25008;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x839AD104;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839AD104:
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

__attribute__((alias("__imp__sub_839AD11C"))) PPC_WEAK_FUNC(sub_839AD11C);
PPC_FUNC_IMPL(__imp__sub_839AD11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AD120"))) PPC_WEAK_FUNC(sub_839AD120);
PPC_FUNC_IMPL(__imp__sub_839AD120) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839a2350
	ctx.lr = 0x839AD13C;
	sub_839A2350(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ad1e4
	if (cr6.eq) goto loc_839AD1E4;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x839ad180
	if (!cr6.eq) goto loc_839AD180;
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AD15C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,460
	ctx.r11.s64 = ctx.r30.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8399f6e8
	ctx.lr = 0x839AD174;
	sub_8399F6E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bne cr6,0x839ad1e4
	if (!cr6.eq) goto loc_839AD1E4;
loc_839AD180:
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x839ad1e4
	if (cr6.eq) goto loc_839AD1E4;
	// lbz r11,177(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839ad1a8
	if (!cr6.eq) goto loc_839AD1A8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_839AD1A8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,12356
	ctx.r8.u64 = ctx.r10.u64 | 12356;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stb r7,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r7.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// beq cr6,0x839ad1e4
	if (cr6.eq) goto loc_839AD1E4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83102fe0
	ctx.lr = 0x839AD1E4;
	sub_83102FE0(ctx, base);
loc_839AD1E4:
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

__attribute__((alias("__imp__sub_839AD1FC"))) PPC_WEAK_FUNC(sub_839AD1FC);
PPC_FUNC_IMPL(__imp__sub_839AD1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AD200"))) PPC_WEAK_FUNC(sub_839AD200);
PPC_FUNC_IMPL(__imp__sub_839AD200) {
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
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ad240
	if (cr6.eq) goto loc_839AD240;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r4,177(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AD240;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839AD240:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ad264
	if (cr6.eq) goto loc_839AD264;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r4,177(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AD264;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839AD264:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839ad294
	if (!cr6.eq) goto loc_839AD294;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ad294
	if (cr6.eq) goto loc_839AD294;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r4,177(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AD294;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839AD294:
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

__attribute__((alias("__imp__sub_839AD2AC"))) PPC_WEAK_FUNC(sub_839AD2AC);
PPC_FUNC_IMPL(__imp__sub_839AD2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AD2B0"))) PPC_WEAK_FUNC(sub_839AD2B0);
PPC_FUNC_IMPL(__imp__sub_839AD2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-11556
	ctx.r12.s64 = ctx.r12.s64 + -11556;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_839AD340;
	case 1:
		goto loc_839AD344;
	case 2:
		goto loc_839AD344;
	case 3:
		goto loc_839AD344;
	case 4:
		goto loc_839AD344;
	case 5:
		goto loc_839AD340;
	case 6:
		goto loc_839AD344;
	case 7:
		goto loc_839AD344;
	case 8:
		goto loc_839AD344;
	case 9:
		goto loc_839AD344;
	case 10:
		goto loc_839AD344;
	case 11:
		goto loc_839AD344;
	case 12:
		goto loc_839AD344;
	case 13:
		goto loc_839AD344;
	case 14:
		goto loc_839AD344;
	case 15:
		goto loc_839AD344;
	case 16:
		goto loc_839AD344;
	case 17:
		goto loc_839AD344;
	case 18:
		goto loc_839AD340;
	case 19:
		goto loc_839AD340;
	case 20:
		goto loc_839AD344;
	case 21:
		goto loc_839AD340;
	case 22:
		goto loc_839AD340;
	case 23:
		goto loc_839AD344;
	case 24:
		goto loc_839AD340;
	default:
		return;
	}
	// lwz r28,-11456(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11456);
	// lwz r28,-11452(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11452);
	// lwz r28,-11452(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11452);
	// lwz r28,-11452(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11452);
	// lwz r28,-11452(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11452);
	// lwz r28,-11456(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11456);
	// lwz r28,-11452(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11452);
	// lwz r28,-11452(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11452);
	// lwz r28,-11452(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11452);
	// lwz r28,-11452(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11452);
	// lwz r28,-11452(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11452);
	// lwz r28,-11452(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11452);
	// lwz r28,-11452(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11452);
	// lwz r28,-11452(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11452);
	// lwz r28,-11452(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11452);
	// lwz r28,-11452(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11452);
	// lwz r28,-11452(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11452);
	// lwz r28,-11452(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11452);
	// lwz r28,-11456(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11456);
	// lwz r28,-11456(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11456);
	// lwz r28,-11452(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11452);
	// lwz r28,-11456(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11456);
	// lwz r28,-11456(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11456);
	// lwz r28,-11452(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11452);
	// lwz r28,-11456(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11456);
loc_839AD340:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839AD344:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839AD348"))) PPC_WEAK_FUNC(sub_839AD348);
PPC_FUNC_IMPL(__imp__sub_839AD348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(ctx.r11.u32, 33, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-11408
	ctx.r12.s64 = ctx.r12.s64 + -11408;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_839AD3F8;
	case 1:
		goto loc_839AD3FC;
	case 2:
		goto loc_839AD3FC;
	case 3:
		goto loc_839AD3F8;
	case 4:
		goto loc_839AD3F8;
	case 5:
		goto loc_839AD3FC;
	case 6:
		goto loc_839AD3FC;
	case 7:
		goto loc_839AD3F8;
	case 8:
		goto loc_839AD3FC;
	case 9:
		goto loc_839AD3F8;
	case 10:
		goto loc_839AD3F8;
	case 11:
		goto loc_839AD3FC;
	case 12:
		goto loc_839AD3FC;
	case 13:
		goto loc_839AD3FC;
	case 14:
		goto loc_839AD3FC;
	case 15:
		goto loc_839AD3FC;
	case 16:
		goto loc_839AD3FC;
	case 17:
		goto loc_839AD3FC;
	case 18:
		goto loc_839AD3FC;
	case 19:
		goto loc_839AD3FC;
	case 20:
		goto loc_839AD3F8;
	case 21:
		goto loc_839AD3FC;
	case 22:
		goto loc_839AD3F8;
	case 23:
		goto loc_839AD3FC;
	case 24:
		goto loc_839AD3FC;
	case 25:
		goto loc_839AD3FC;
	case 26:
		goto loc_839AD3FC;
	case 27:
		goto loc_839AD3FC;
	case 28:
		goto loc_839AD3FC;
	case 29:
		goto loc_839AD3FC;
	case 30:
		goto loc_839AD3FC;
	case 31:
		goto loc_839AD3FC;
	case 32:
		goto loc_839AD3FC;
	case 33:
		goto loc_839AD3F8;
	default:
		return;
	}
	// lwz r28,-11272(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11272);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11272(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11272);
	// lwz r28,-11272(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11272);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11272(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11272);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11272(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11272);
	// lwz r28,-11272(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11272);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11272(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11272);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11272(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11272);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// lwz r28,-11272(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11272);
loc_839AD3F8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_839AD3FC:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839AD400"))) PPC_WEAK_FUNC(sub_839AD400);
PPC_FUNC_IMPL(__imp__sub_839AD400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839AD408;
	__savegprlr_28(ctx, base);
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
	// li r4,216
	ctx.r4.s64 = 216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82595718
	ctx.lr = 0x839AD434;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ad458
	if (cr6.eq) goto loc_839AD458;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839abc50
	ctx.lr = 0x839AD450;
	sub_839ABC50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839AD458:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AD464"))) PPC_WEAK_FUNC(sub_839AD464);
PPC_FUNC_IMPL(__imp__sub_839AD464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AD468"))) PPC_WEAK_FUNC(sub_839AD468);
PPC_FUNC_IMPL(__imp__sub_839AD468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839AD470;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x839AD47C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839AD480;
	sub_830FFAA8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// beq cr6,0x839ad500
	if (cr6.eq) goto loc_839AD500;
	// bl 0x831156e8
	ctx.lr = 0x839AD490;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ad500
	if (cr6.eq) goto loc_839AD500;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bge cr6,0x839ad500
	if (!cr6.lt) goto loc_839AD500;
	// bl 0x839aa498
	ctx.lr = 0x839AD4A8;
	sub_839AA498(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x839AD4B0;
	sub_831156E8(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r10,r10,2800
	ctx.r10.s64 = ctx.r10.s64 * 2800;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839AD4C4;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ad500
	if (cr6.eq) goto loc_839AD500;
	// lwz r28,96(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AD4D4;
	sub_8399F8B8(ctx, base);
	// mulli r11,r28,460
	ctx.r11.s64 = ctx.r28.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f760
	ctx.lr = 0x839AD4E4;
	sub_8399F760(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ad4fc
	if (cr6.eq) goto loc_839AD4FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,705(r31)
	PPC_STORE_U8(ctx.r31.u32 + 705, ctx.r11.u8);
	// b 0x839ad500
	goto loc_839AD500;
loc_839AD4FC:
	// stb r29,705(r31)
	PPC_STORE_U8(ctx.r31.u32 + 705, ctx.r29.u8);
loc_839AD500:
	// lwz r31,152(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839ad520
	if (cr6.eq) goto loc_839AD520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83815cb8
	ctx.lr = 0x839AD514;
	sub_83815CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x839AD51C;
	sub_82416268(ctx, base);
	// stw r29,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r29.u32);
loc_839AD520:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AD52C"))) PPC_WEAK_FUNC(sub_839AD52C);
PPC_FUNC_IMPL(__imp__sub_839AD52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AD530"))) PPC_WEAK_FUNC(sub_839AD530);
PPC_FUNC_IMPL(__imp__sub_839AD530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839AD538;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830fe8c8
	ctx.lr = 0x839AD544;
	sub_830FE8C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830fe8a0
	ctx.lr = 0x839AD54C;
	sub_830FE8A0(ctx, base);
	// ld r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 184);
	// li r28,0
	ctx.r28.s64 = 0;
	// tdllei r30,0
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mulli r9,r10,1000
	ctx.r9.s64 = ctx.r10.s64 * 1000;
	// divdu r8,r9,r30
	ctx.r8.u64 = PPCDivide(ctx.r9.u64, ctx.r30.u64);
	// cmpldi cr6,r8,2000
	cr6.compare<uint64_t>(ctx.r8.u64, 2000, xer);
	// bge cr6,0x839ad574
	if (!cr6.lt) goto loc_839AD574;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x839ad580
	goto loc_839AD580;
loc_839AD574:
	// bl 0x830fe8a0
	ctx.lr = 0x839AD578;
	sub_830FE8A0(ctx, base);
	// std r3,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r3.u64);
	// li r11,1
	ctx.r11.s64 = 1;
loc_839AD580:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ad638
	if (cr6.eq) goto loc_839AD638;
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AD594;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,528
	ctx.r11.s64 = ctx.r30.s64 * 528;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r29,r11,1072
	ctx.r29.s64 = ctx.r11.s64 + 1072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a47da0
	ctx.lr = 0x839AD5AC;
	sub_82A47DA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839ad638
	if (cr6.eq) goto loc_839AD638;
loc_839AD5B8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a0368
	ctx.lr = 0x839AD5C8;
	sub_839A0368(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399eed0
	ctx.lr = 0x839AD5D0;
	sub_8399EED0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ad5f0
	if (cr6.eq) goto loc_839AD5F0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a47e60
	ctx.lr = 0x839AD5E4;
	sub_82A47E60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ad614
	if (cr6.eq) goto loc_839AD614;
loc_839AD5F0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a47da0
	ctx.lr = 0x839AD604;
	sub_82A47DA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x839ad5b8
	if (cr6.lt) goto loc_839AD5B8;
	// b 0x839ad638
	goto loc_839AD638;
loc_839AD614:
	// lbz r11,177(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 177, ctx.r9.u8);
	// bl 0x839ad200
	ctx.lr = 0x839AD630;
	sub_839AD200(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ad120
	ctx.lr = 0x839AD638;
	sub_839AD120(ctx, base);
loc_839AD638:
	// bl 0x830ff290
	ctx.lr = 0x839AD63C;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x839AD640;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ad77c
	if (cr6.eq) goto loc_839AD77C;
	// bl 0x82dad2e0
	ctx.lr = 0x839AD650;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ad77c
	if (cr6.eq) goto loc_839AD77C;
	// bl 0x830fe8c8
	ctx.lr = 0x839AD65C;
	sub_830FE8C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830fe8a0
	ctx.lr = 0x839AD664;
	sub_830FE8A0(ctx, base);
	// ld r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 192);
	// tdllei r30,0
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mulli r9,r10,1000
	ctx.r9.s64 = ctx.r10.s64 * 1000;
	// divdu r8,r9,r30
	ctx.r8.u64 = PPCDivide(ctx.r9.u64, ctx.r30.u64);
	// cmpldi cr6,r8,5000
	cr6.compare<uint64_t>(ctx.r8.u64, 5000, xer);
	// bge cr6,0x839ad688
	if (!cr6.lt) goto loc_839AD688;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x839ad694
	goto loc_839AD694;
loc_839AD688:
	// bl 0x830fe8a0
	ctx.lr = 0x839AD68C;
	sub_830FE8A0(ctx, base);
	// std r3,192(r31)
	PPC_STORE_U64(ctx.r31.u32 + 192, ctx.r3.u64);
	// li r11,1
	ctx.r11.s64 = 1;
loc_839AD694:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ad77c
	if (cr6.eq) goto loc_839AD77C;
	// bl 0x82dad2e0
	ctx.lr = 0x839AD6A4;
	sub_82DAD2E0(ctx, base);
	// lwz r30,228(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// bl 0x839aaa10
	ctx.lr = 0x839AD6AC;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839ad6c4
	if (!cr6.eq) goto loc_839AD6C4;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// beq cr6,0x839ad77c
	if (cr6.eq) goto loc_839AD77C;
loc_839AD6C4:
	// lbz r11,177(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 177, ctx.r9.u8);
	// bl 0x839ad200
	ctx.lr = 0x839AD6E0;
	sub_839AD200(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
	// stb r28,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r28.u8);
	// ori r7,r8,12291
	ctx.r7.u64 = ctx.r8.u64 | 12291;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102fe0
	ctx.lr = 0x839AD70C;
	sub_83102FE0(ctx, base);
	// lis r6,264
	ctx.r6.s64 = 17301504;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// ori r5,r6,12296
	ctx.r5.u64 = ctx.r6.u64 | 12296;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// stb r28,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r28.u8);
	// beq cr6,0x839ad74c
	if (cr6.eq) goto loc_839AD74C;
	// bl 0x82d17e98
	ctx.lr = 0x839AD734;
	sub_82D17E98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ad74c
	if (cr6.eq) goto loc_839AD74C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x83102fe0
	ctx.lr = 0x839AD74C;
	sub_83102FE0(ctx, base);
loc_839AD74C:
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r10,r11,12294
	ctx.r10.u64 = ctx.r11.u64 | 12294;
	// stb r28,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r28.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x831036c0
	ctx.lr = 0x839AD770;
	sub_831036C0(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
loc_839AD77C:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x839ad85c
	if (!cr6.eq) goto loc_839AD85C;
	// bl 0x830ff290
	ctx.lr = 0x839AD78C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839AD790;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x839ad85c
	if (!cr6.eq) goto loc_839AD85C;
	// bl 0x830fe8c8
	ctx.lr = 0x839AD79C;
	sub_830FE8C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830fe8a0
	ctx.lr = 0x839AD7A4;
	sub_830FE8A0(ctx, base);
	// ld r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 192);
	// tdllei r30,0
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mulli r9,r10,1000
	ctx.r9.s64 = ctx.r10.s64 * 1000;
	// divdu r8,r9,r30
	ctx.r8.u64 = PPCDivide(ctx.r9.u64, ctx.r30.u64);
	// cmpldi cr6,r8,3000
	cr6.compare<uint64_t>(ctx.r8.u64, 3000, xer);
	// bge cr6,0x839ad7c8
	if (!cr6.lt) goto loc_839AD7C8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x839ad7d4
	goto loc_839AD7D4;
loc_839AD7C8:
	// bl 0x830fe8a0
	ctx.lr = 0x839AD7CC;
	sub_830FE8A0(ctx, base);
	// std r3,192(r31)
	PPC_STORE_U64(ctx.r31.u32 + 192, ctx.r3.u64);
	// li r11,1
	ctx.r11.s64 = 1;
loc_839AD7D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ad85c
	if (cr6.eq) goto loc_839AD85C;
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AD7E8;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x839a0f88
	ctx.lr = 0x839AD7F0;
	sub_839A0F88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x839ad810
	if (cr6.eq) goto loc_839AD810;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x839ad824
	if (!cr6.eq) goto loc_839AD824;
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AD808;
	sub_8399F8B8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x839ad81c
	goto loc_839AD81C;
loc_839AD810:
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AD818;
	sub_8399F8B8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
loc_839AD81C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x839a0f18
	ctx.lr = 0x839AD824;
	sub_839A0F18(ctx, base);
loc_839AD824:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ad840
	if (cr6.eq) goto loc_839AD840;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AD840;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839AD840:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ad85c
	if (cr6.eq) goto loc_839AD85C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AD85C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839AD85C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AD868"))) PPC_WEAK_FUNC(sub_839AD868);
PPC_FUNC_IMPL(__imp__sub_839AD868) {
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
	// bl 0x839ad348
	ctx.lr = 0x839AD884;
	sub_839AD348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ad914
	if (cr6.eq) goto loc_839AD914;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839ad8d4
	if (!cr6.eq) goto loc_839AD8D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839AD8A4;
	sub_82D19A68(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r3,r11,29064
	ctx.r3.s64 = ctx.r11.s64 + 29064;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x839b3848
	ctx.lr = 0x839AD8C0;
	sub_839B3848(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839AD8D4;
	sub_83103100(ctx, base);
loc_839AD8D4:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x839ad938
	if (!cr6.eq) goto loc_839AD938;
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AD8E8;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399f8e0
	ctx.lr = 0x839AD8F0;
	sub_8399F8E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ad938
	if (cr6.eq) goto loc_839AD938;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AD910;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x839ad938
	goto loc_839AD938;
loc_839AD914:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ad938
	if (cr6.eq) goto loc_839AD938;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AD930;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
loc_839AD938:
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

__attribute__((alias("__imp__sub_839AD950"))) PPC_WEAK_FUNC(sub_839AD950);
PPC_FUNC_IMPL(__imp__sub_839AD950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839AD958;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839AD964;
	sub_82D19A68(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x839ad9d0
	if (cr6.gt) goto loc_839AD9D0;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-9836
	ctx.r12.s64 = ctx.r12.s64 + -9836;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_839AD9BC;
	case 1:
		goto loc_839AD9D0;
	case 2:
		goto loc_839AD9D0;
	case 3:
		goto loc_839AD9D0;
	case 4:
		goto loc_839AD9C4;
	case 5:
		goto loc_839AD9C4;
	case 6:
		goto loc_839AD9D0;
	case 7:
		goto loc_839AD9CC;
	case 8:
		goto loc_839AD9CC;
	case 9:
		goto loc_839AD9CC;
	default:
		return;
	}
	// lwz r28,-9796(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9796);
	// lwz r28,-9776(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9776);
	// lwz r28,-9776(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9776);
	// lwz r28,-9776(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9776);
	// lwz r28,-9788(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9788);
	// lwz r28,-9788(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9788);
	// lwz r28,-9776(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9776);
	// lwz r28,-9780(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9780);
	// lwz r28,-9780(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9780);
	// lwz r28,-9780(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9780);
loc_839AD9BC:
	// li r29,3
	ctx.r29.s64 = 3;
	// b 0x839ad9d0
	goto loc_839AD9D0;
loc_839AD9C4:
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x839ad9d0
	goto loc_839AD9D0;
loc_839AD9CC:
	// li r29,1
	ctx.r29.s64 = 1;
loc_839AD9D0:
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AD9D8;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,460
	ctx.r11.s64 = ctx.r30.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x825832e8
	ctx.lr = 0x839AD9E8;
	sub_825832E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,96(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r26,100(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d199f0
	ctx.lr = 0x839AD9F8;
	sub_82D199F0(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r11,29164
	ctx.r30.s64 = ctx.r11.s64 + 29164;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r30,-12
	ctx.r3.s64 = ctx.r30.s64 + -12;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x839b3d50
	ctx.lr = 0x839ADA1C;
	sub_839B3D50(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839ADA30;
	sub_83103100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839ADA38;
	sub_82D19A68(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839ADA50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839ADA58;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ada88
	if (cr6.eq) goto loc_839ADA88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839ADA68;
	sub_82D19A68(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,25008
	ctx.r10.s64 = ctx.r11.s64 + 25008;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839ADA88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839ADA88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839ADA90"))) PPC_WEAK_FUNC(sub_839ADA90);
PPC_FUNC_IMPL(__imp__sub_839ADA90) {
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
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(ctx.r11.u32, 36, xer);
	// bgt cr6,0x839adbb4
	if (cr6.gt) goto loc_839ADBB4;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-9528
	ctx.r12.s64 = ctx.r12.s64 + -9528;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_839ADB5C;
	case 1:
		goto loc_839ADB5C;
	case 2:
		goto loc_839ADB5C;
	case 3:
		goto loc_839ADBB4;
	case 4:
		goto loc_839ADBB4;
	case 5:
		goto loc_839ADBB4;
	case 6:
		goto loc_839ADBB4;
	case 7:
		goto loc_839ADBB4;
	case 8:
		goto loc_839ADB5C;
	case 9:
		goto loc_839ADBB4;
	case 10:
		goto loc_839ADBB4;
	case 11:
		goto loc_839ADBB4;
	case 12:
		goto loc_839ADB5C;
	case 13:
		goto loc_839ADB5C;
	case 14:
		goto loc_839ADBB4;
	case 15:
		goto loc_839ADB5C;
	case 16:
		goto loc_839ADB5C;
	case 17:
		goto loc_839ADB5C;
	case 18:
		goto loc_839ADBB4;
	case 19:
		goto loc_839ADBB4;
	case 20:
		goto loc_839ADBB4;
	case 21:
		goto loc_839ADBB4;
	case 22:
		goto loc_839ADBB4;
	case 23:
		goto loc_839ADBB4;
	case 24:
		goto loc_839ADB8C;
	case 25:
		goto loc_839ADB8C;
	case 26:
		goto loc_839ADB5C;
	case 27:
		goto loc_839ADB8C;
	case 28:
		goto loc_839ADB8C;
	case 29:
		goto loc_839ADB5C;
	case 30:
		goto loc_839ADB5C;
	case 31:
		goto loc_839ADB5C;
	case 32:
		goto loc_839ADB5C;
	case 33:
		goto loc_839ADB5C;
	case 34:
		goto loc_839ADBB4;
	case 35:
		goto loc_839ADB5C;
	case 36:
		goto loc_839ADB5C;
	default:
		return;
	}
	// lwz r28,-9380(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9380);
	// lwz r28,-9380(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9380);
	// lwz r28,-9380(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9380);
	// lwz r28,-9292(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9292);
	// lwz r28,-9292(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9292);
	// lwz r28,-9292(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9292);
	// lwz r28,-9292(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9292);
	// lwz r28,-9292(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9292);
	// lwz r28,-9380(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9380);
	// lwz r28,-9292(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9292);
	// lwz r28,-9292(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9292);
	// lwz r28,-9292(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9292);
	// lwz r28,-9380(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9380);
	// lwz r28,-9380(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9380);
	// lwz r28,-9292(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9292);
	// lwz r28,-9380(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9380);
	// lwz r28,-9380(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9380);
	// lwz r28,-9380(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9380);
	// lwz r28,-9292(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9292);
	// lwz r28,-9292(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9292);
	// lwz r28,-9292(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9292);
	// lwz r28,-9292(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9292);
	// lwz r28,-9292(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9292);
	// lwz r28,-9292(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9292);
	// lwz r28,-9332(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9332);
	// lwz r28,-9332(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9332);
	// lwz r28,-9380(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9380);
	// lwz r28,-9332(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9332);
	// lwz r28,-9332(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9332);
	// lwz r28,-9380(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9380);
	// lwz r28,-9380(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9380);
	// lwz r28,-9380(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9380);
	// lwz r28,-9380(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9380);
	// lwz r28,-9380(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9380);
	// lwz r28,-9292(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9292);
	// lwz r28,-9380(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9380);
	// lwz r28,-9380(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9380);
loc_839ADB5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839ADB64;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839adbec
	if (cr6.eq) goto loc_839ADBEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839ADB74;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,25008(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25008);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// b 0x839adbe4
	goto loc_839ADBE4;
loc_839ADB8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839ADB94;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839adbec
	if (cr6.eq) goto loc_839ADBEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839ADBA4;
	sub_82D19A68(ctx, base);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r10,r11,25008
	ctx.r10.s64 = ctx.r11.s64 + 25008;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x839adbd8
	goto loc_839ADBD8;
loc_839ADBB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839ADBBC;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839adbec
	if (cr6.eq) goto loc_839ADBEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839ADBCC;
	sub_82D19A68(ctx, base);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r10,r11,25008
	ctx.r10.s64 = ctx.r11.s64 + 25008;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_839ADBD8:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_839ADBE4:
	// li r5,1
	ctx.r5.s64 = 1;
	// bctrl 
	ctx.lr = 0x839ADBEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839ADBEC:
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

__attribute__((alias("__imp__sub_839ADC00"))) PPC_WEAK_FUNC(sub_839ADC00);
PPC_FUNC_IMPL(__imp__sub_839ADC00) {
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
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839adc38
	if (cr6.eq) goto loc_839ADC38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839ADC30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
loc_839ADC38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839ADC40;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,29172
	ctx.r4.s64 = ctx.r11.s64 + 29172;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839ADC5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ada90
	ctx.lr = 0x839ADC64;
	sub_839ADA90(ctx, base);
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

__attribute__((alias("__imp__sub_839ADC78"))) PPC_WEAK_FUNC(sub_839ADC78);
PPC_FUNC_IMPL(__imp__sub_839ADC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839ADC80;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r25,r3,160
	ctx.r25.s64 = ctx.r3.s64 + 160;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// addi r28,r1,100
	ctx.r28.s64 = ctx.r1.s64 + 100;
loc_839ADC9C:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r28,-4
	ctx.r3.s64 = ctx.r28.s64 + -4;
	// bl 0x839a9080
	ctx.lr = 0x839ADCB4;
	sub_839A9080(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x83815bc8
	ctx.lr = 0x839ADCC4;
	sub_83815BC8(ctx, base);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r29,r25,-4
	ctx.r29.s64 = ctx.r25.s64 + -4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_839ADCD0:
	// add r10,r27,r30
	ctx.r10.u64 = ctx.r27.u64 + ctx.r30.u64;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815be8
	ctx.lr = 0x839ADCE8;
	sub_83815BE8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x839adcd0
	if (cr6.lt) goto loc_839ADCD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,152(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x82d19a10
	ctx.lr = 0x839ADD04;
	sub_82D19A10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x838153c8
	ctx.lr = 0x839ADD0C;
	sub_838153C8(ctx, base);
	// addi r27,r27,3
	ctx.r27.s64 = ctx.r27.s64 + 3;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmplwi cr6,r27,6
	cr6.compare<uint32_t>(ctx.r27.u32, 6, xer);
	// blt cr6,0x839adc9c
	if (cr6.lt) goto loc_839ADC9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839acf88
	ctx.lr = 0x839ADD28;
	sub_839ACF88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839ADD30;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r30,r11,27972
	ctx.r30.s64 = ctx.r11.s64 + 27972;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839ADD50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// stb r24,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r24.u8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x839ab000
	ctx.lr = 0x839ADD70;
	sub_839AB000(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82d291e0
	ctx.lr = 0x839ADD84;
	sub_82D291E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f3,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d32f78
	ctx.lr = 0x839ADD98;
	sub_82D32F78(ctx, base);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x839addb8
	if (cr6.lt) goto loc_839ADDB8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839ADDB8;
	sub_825952B8(ctx, base);
loc_839ADDB8:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r24,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r24.u8);
	// bne cr6,0x839ade10
	if (!cr6.eq) goto loc_839ADE10;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x839ade10
	if (!cr6.eq) goto loc_839ADE10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839ADDE4;
	sub_82D19A68(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x839b2460
	ctx.lr = 0x839ADDFC;
	sub_839B2460(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x83103100
	ctx.lr = 0x839ADE10;
	sub_83103100(ctx, base);
loc_839ADE10:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839ADE18"))) PPC_WEAK_FUNC(sub_839ADE18);
PPC_FUNC_IMPL(__imp__sub_839ADE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839ADE20;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839ADE2C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r4,r11,29092
	ctx.r4.s64 = ctx.r11.s64 + 29092;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839ADE48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r8,15
	ctx.r8.s64 = 15;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x839b0030
	ctx.lr = 0x839ADE70;
	sub_839B0030(ctx, base);
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// bne cr6,0x839adec8
	if (!cr6.eq) goto loc_839ADEC8;
	// lwz r29,96(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839ADE84;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,460
	ctx.r11.s64 = ctx.r29.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x825832e8
	ctx.lr = 0x839ADE94;
	sub_825832E8(ctx, base);
	// lwz r29,96(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839ADEA0;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,460
	ctx.r11.s64 = ctx.r29.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f760
	ctx.lr = 0x839ADEB0;
	sub_8399F760(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839adec8
	if (cr6.eq) goto loc_839ADEC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x839b02d8
	ctx.lr = 0x839ADEC8;
	sub_839B02D8(ctx, base);
loc_839ADEC8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839ADEDC;
	sub_82D291E0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839adefc
	if (cr6.lt) goto loc_839ADEFC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839ADEFC;
	sub_825952B8(ctx, base);
loc_839ADEFC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839ADF04"))) PPC_WEAK_FUNC(sub_839ADF04);
PPC_FUNC_IMPL(__imp__sub_839ADF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839ADF08"))) PPC_WEAK_FUNC(sub_839ADF08);
PPC_FUNC_IMPL(__imp__sub_839ADF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839ADF10;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x839ac730
	ctx.lr = 0x839ADF24;
	sub_839AC730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ad868
	ctx.lr = 0x839ADF2C;
	sub_839AD868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839acb38
	ctx.lr = 0x839ADF34;
	sub_839ACB38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ada90
	ctx.lr = 0x839ADF3C;
	sub_839ADA90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839ADF44;
	sub_82D19A68(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(ctx.r11.u32, 36, xer);
	// bgt cr6,0x839ae82c
	if (cr6.gt) goto loc_839AE82C;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8340
	ctx.r12.s64 = ctx.r12.s64 + -8340;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_839AE000;
	case 1:
		goto loc_839AE000;
	case 2:
		goto loc_839AE0B4;
	case 3:
		goto loc_839AE0F8;
	case 4:
		goto loc_839AE120;
	case 5:
		goto loc_839AE144;
	case 6:
		goto loc_839AE168;
	case 7:
		goto loc_839AE18C;
	case 8:
		goto loc_839AE1B0;
	case 9:
		goto loc_839AE1F4;
	case 10:
		goto loc_839AE218;
	case 11:
		goto loc_839AE240;
	case 12:
		goto loc_839AE264;
	case 13:
		goto loc_839AE2A8;
	case 14:
		goto loc_839AE2EC;
	case 15:
		goto loc_839AE3A4;
	case 16:
		goto loc_839AE3E8;
	case 17:
		goto loc_839AE42C;
	case 18:
		goto loc_839AE470;
	case 19:
		goto loc_839AE498;
	case 20:
		goto loc_839AE4CC;
	case 21:
		goto loc_839AE500;
	case 22:
		goto loc_839AE534;
	case 23:
		goto loc_839AE568;
	case 24:
		goto loc_839AE5D8;
	case 25:
		goto loc_839AE610;
	case 26:
		goto loc_839AE648;
	case 27:
		goto loc_839AE590;
	case 28:
		goto loc_839AE5B4;
	case 29:
		goto loc_839AE67C;
	case 30:
		goto loc_839AE6B0;
	case 31:
		goto loc_839AE6B8;
	case 32:
		goto loc_839AE6FC;
	case 33:
		goto loc_839AE76C;
	case 34:
		goto loc_839AE82C;
	case 35:
		goto loc_839AE7BC;
	case 36:
		goto loc_839AE7D0;
	default:
		return;
	}
	// lwz r28,-8192(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8192);
	// lwz r28,-8192(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8192);
	// lwz r28,-8012(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8012);
	// lwz r28,-7944(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7944);
	// lwz r28,-7904(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7904);
	// lwz r28,-7868(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7868);
	// lwz r28,-7832(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7832);
	// lwz r28,-7796(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7796);
	// lwz r28,-7760(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7760);
	// lwz r28,-7692(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7692);
	// lwz r28,-7656(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7656);
	// lwz r28,-7616(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7616);
	// lwz r28,-7580(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7580);
	// lwz r28,-7512(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7512);
	// lwz r28,-7444(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7444);
	// lwz r28,-7260(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7260);
	// lwz r28,-7192(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7192);
	// lwz r28,-7124(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7124);
	// lwz r28,-7056(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7056);
	// lwz r28,-7016(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7016);
	// lwz r28,-6964(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6964);
	// lwz r28,-6912(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6912);
	// lwz r28,-6860(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6860);
	// lwz r28,-6808(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6808);
	// lwz r28,-6696(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6696);
	// lwz r28,-6640(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6640);
	// lwz r28,-6584(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6584);
	// lwz r28,-6768(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6768);
	// lwz r28,-6732(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6732);
	// lwz r28,-6532(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6532);
	// lwz r28,-6480(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6480);
	// lwz r28,-6472(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6472);
	// lwz r28,-6404(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6404);
	// lwz r28,-6292(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6292);
	// lwz r28,-6100(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6100);
	// lwz r28,-6212(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6212);
	// lwz r28,-6192(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -6192);
loc_839AE000:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// bne cr6,0x839ae034
	if (!cr6.eq) goto loc_839AE034;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r11,-648
	ctx.r3.s64 = ctx.r11.s64 + -648;
	// bl 0x839c8e50
	ctx.lr = 0x839AE030;
	sub_839C8E50(ctx, base);
	// b 0x839ae03c
	goto loc_839AE03C;
loc_839AE034:
	// addi r3,r11,-628
	ctx.r3.s64 = ctx.r11.s64 + -628;
	// bl 0x839c7908
	ctx.lr = 0x839AE03C;
	sub_839C7908(ctx, base);
loc_839AE03C:
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x839AE050;
	sub_83103100(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ae82c
	if (cr6.eq) goto loc_839AE82C;
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AE064;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399f8e0
	ctx.lr = 0x839AE06C;
	sub_8399F8E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839ae82c
	if (!cr6.eq) goto loc_839AE82C;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839ae82c
	if (cr6.eq) goto loc_839AE82C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
	// ori r9,r10,12354
	ctx.r9.u64 = ctx.r10.u64 | 12354;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// bl 0x83102fe0
	ctx.lr = 0x839AE0AC;
	sub_83102FE0(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x839ae82c
	goto loc_839AE82C;
loc_839AE0B4:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-616
	ctx.r3.s64 = ctx.r11.s64 + -616;
	// bl 0x839c43a8
	ctx.lr = 0x839AE0D4;
	sub_839C43A8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839AE0E8;
	sub_83103100(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839acc48
	ctx.lr = 0x839AE0F4;
	sub_839ACC48(ctx, base);
	// b 0x839ae82c
	goto loc_839AE82C;
loc_839AE0F8:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r3,r11,-596
	ctx.r3.s64 = ctx.r11.s64 + -596;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x839c2580
	ctx.lr = 0x839AE11C;
	sub_839C2580(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE120:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-584
	ctx.r3.s64 = ctx.r11.s64 + -584;
	// bl 0x839c1448
	ctx.lr = 0x839AE140;
	sub_839C1448(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE144:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-560
	ctx.r3.s64 = ctx.r11.s64 + -560;
	// bl 0x839c0be8
	ctx.lr = 0x839AE164;
	sub_839C0BE8(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE168:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-540
	ctx.r3.s64 = ctx.r11.s64 + -540;
	// bl 0x839c09b8
	ctx.lr = 0x839AE188;
	sub_839C09B8(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE18C:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-524
	ctx.r3.s64 = ctx.r11.s64 + -524;
	// bl 0x839bf780
	ctx.lr = 0x839AE1AC;
	sub_839BF780(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE1B0:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-508
	ctx.r3.s64 = ctx.r11.s64 + -508;
	// bl 0x839be6c0
	ctx.lr = 0x839AE1D0;
	sub_839BE6C0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839AE1E4;
	sub_83103100(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839acc48
	ctx.lr = 0x839AE1F0;
	sub_839ACC48(ctx, base);
	// b 0x839ae82c
	goto loc_839AE82C;
loc_839AE1F4:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-496
	ctx.r3.s64 = ctx.r11.s64 + -496;
	// bl 0x839bdec8
	ctx.lr = 0x839AE214;
	sub_839BDEC8(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE218:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r3,r11,-484
	ctx.r3.s64 = ctx.r11.s64 + -484;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x839bd8e8
	ctx.lr = 0x839AE23C;
	sub_839BD8E8(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE240:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-456
	ctx.r3.s64 = ctx.r11.s64 + -456;
	// bl 0x839bd430
	ctx.lr = 0x839AE260;
	sub_839BD430(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE264:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-428
	ctx.r3.s64 = ctx.r11.s64 + -428;
	// bl 0x839bcc48
	ctx.lr = 0x839AE284;
	sub_839BCC48(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839AE298;
	sub_83103100(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839acc48
	ctx.lr = 0x839AE2A4;
	sub_839ACC48(ctx, base);
	// b 0x839ae82c
	goto loc_839AE82C;
loc_839AE2A8:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-396
	ctx.r3.s64 = ctx.r11.s64 + -396;
	// bl 0x839bccb8
	ctx.lr = 0x839AE2C8;
	sub_839BCCB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839AE2DC;
	sub_83103100(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839acc48
	ctx.lr = 0x839AE2E8;
	sub_839ACC48(ctx, base);
	// b 0x839ae82c
	goto loc_839AE82C;
loc_839AE2EC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839ae37c
	if (!cr6.eq) goto loc_839AE37C;
	// lwz r28,96(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AE300;
	sub_8399F8B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8399f988
	ctx.lr = 0x839AE308;
	sub_8399F988(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lwz r28,96(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AE314;
	sub_8399F8B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8399fce8
	ctx.lr = 0x839AE31C;
	sub_8399FCE8(ctx, base);
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// lwz r28,96(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AE328;
	sub_8399F8B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x839a0f18
	ctx.lr = 0x839AE334;
	sub_839A0F18(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AE348;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// addi r28,r9,21716
	ctx.r28.s64 = ctx.r9.s64 + 21716;
	// ori r7,r8,12299
	ctx.r7.u64 = ctx.r8.u64 | 12299;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r6,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r6.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102fe0
	ctx.lr = 0x839AE378;
	sub_83102FE0(ctx, base);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
loc_839AE37C:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-364
	ctx.r3.s64 = ctx.r11.s64 + -364;
	// bl 0x839bbe70
	ctx.lr = 0x839AE3A0;
	sub_839BBE70(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE3A4:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-348
	ctx.r3.s64 = ctx.r11.s64 + -348;
	// bl 0x839bb9a0
	ctx.lr = 0x839AE3C4;
	sub_839BB9A0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839AE3D8;
	sub_83103100(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839acc48
	ctx.lr = 0x839AE3E4;
	sub_839ACC48(ctx, base);
	// b 0x839ae82c
	goto loc_839AE82C;
loc_839AE3E8:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-328
	ctx.r3.s64 = ctx.r11.s64 + -328;
	// bl 0x839bb318
	ctx.lr = 0x839AE408;
	sub_839BB318(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839AE41C;
	sub_83103100(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839acc48
	ctx.lr = 0x839AE428;
	sub_839ACC48(ctx, base);
	// b 0x839ae82c
	goto loc_839AE82C;
loc_839AE42C:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-304
	ctx.r3.s64 = ctx.r11.s64 + -304;
	// bl 0x839bac48
	ctx.lr = 0x839AE44C;
	sub_839BAC48(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839AE460;
	sub_83103100(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839acc48
	ctx.lr = 0x839AE46C;
	sub_839ACC48(ctx, base);
	// b 0x839ae82c
	goto loc_839AE82C;
loc_839AE470:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r3,r11,-288
	ctx.r3.s64 = ctx.r11.s64 + -288;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x839ba808
	ctx.lr = 0x839AE494;
	sub_839BA808(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE498:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,96(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d199f0
	ctx.lr = 0x839AE4A8;
	sub_82D199F0(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,-272
	ctx.r3.s64 = ctx.r11.s64 + -272;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x839b9358
	ctx.lr = 0x839AE4C8;
	sub_839B9358(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE4CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,96(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d199f0
	ctx.lr = 0x839AE4DC;
	sub_82D199F0(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,-248
	ctx.r3.s64 = ctx.r11.s64 + -248;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x839b8d60
	ctx.lr = 0x839AE4FC;
	sub_839B8D60(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE500:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,96(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d199f0
	ctx.lr = 0x839AE510;
	sub_82D199F0(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,-228
	ctx.r3.s64 = ctx.r11.s64 + -228;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x839b9358
	ctx.lr = 0x839AE530;
	sub_839B9358(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE534:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,96(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d199f0
	ctx.lr = 0x839AE544;
	sub_82D199F0(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,-204
	ctx.r3.s64 = ctx.r11.s64 + -204;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x839b8d60
	ctx.lr = 0x839AE564;
	sub_839B8D60(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE568:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lbz r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-184
	ctx.r3.s64 = ctx.r11.s64 + -184;
	// bl 0x839b86e0
	ctx.lr = 0x839AE58C;
	sub_839B86E0(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE590:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-168
	ctx.r3.s64 = ctx.r11.s64 + -168;
	// bl 0x839b7d30
	ctx.lr = 0x839AE5B0;
	sub_839B7D30(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE5B4:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-144
	ctx.r3.s64 = ctx.r11.s64 + -144;
	// bl 0x839b7d30
	ctx.lr = 0x839AE5D4;
	sub_839B7D30(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE5D8:
	// lwz r28,96(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AE5E0;
	sub_8399F8B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8399fae0
	ctx.lr = 0x839AE5E8;
	sub_8399FAE0(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r3,r11,-120
	ctx.r3.s64 = ctx.r11.s64 + -120;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x839b6f60
	ctx.lr = 0x839AE60C;
	sub_839B6F60(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE610:
	// lwz r28,96(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AE618;
	sub_8399F8B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8399fae0
	ctx.lr = 0x839AE620;
	sub_8399FAE0(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r3,r11,-100
	ctx.r3.s64 = ctx.r11.s64 + -100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x839b7058
	ctx.lr = 0x839AE644;
	sub_839B7058(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE648:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,96(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d199f0
	ctx.lr = 0x839AE658;
	sub_82D199F0(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,-80
	ctx.r3.s64 = ctx.r11.s64 + -80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x839b6ac8
	ctx.lr = 0x839AE678;
	sub_839B6AC8(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE67C:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-60
	ctx.r3.s64 = ctx.r11.s64 + -60;
	// bl 0x839b67b8
	ctx.lr = 0x839AE69C;
	sub_839B67B8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839AE6B0;
	sub_83103100(ctx, base);
loc_839AE6B0:
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x839ae82c
	goto loc_839AE82C;
loc_839AE6B8:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x839b5a10
	ctx.lr = 0x839AE6DC;
	sub_839B5A10(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839AE6F0;
	sub_83103100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839acce0
	ctx.lr = 0x839AE6F8;
	sub_839ACCE0(ctx, base);
	// b 0x839ae82c
	goto loc_839AE82C;
loc_839AE6FC:
	// bl 0x831156e8
	ctx.lr = 0x839AE700;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r28,r11,45478
	ctx.r28.u64 = ctx.r11.u64 | 45478;
	// lbzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839ae724
	if (!cr6.eq) goto loc_839AE724;
	// bl 0x831156e8
	ctx.lr = 0x839AE71C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stbx r27,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r27.u8);
loc_839AE724:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r8,22
	ctx.r8.s64 = 22;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x839b5a10
	ctx.lr = 0x839AE748;
	sub_839B5A10(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839AE75C;
	sub_83103100(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839acc48
	ctx.lr = 0x839AE768;
	sub_839ACC48(ctx, base);
	// b 0x839ae82c
	goto loc_839AE82C;
loc_839AE76C:
	// bl 0x831156e8
	ctx.lr = 0x839AE770;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r28,r11,45479
	ctx.r28.u64 = ctx.r11.u64 | 45479;
	// lbzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839ae794
	if (!cr6.eq) goto loc_839AE794;
	// bl 0x831156e8
	ctx.lr = 0x839AE78C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stbx r27,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r27.u8);
loc_839AE794:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r8,25
	ctx.r8.s64 = 25;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x839b5a10
	ctx.lr = 0x839AE7B8;
	sub_839B5A10(ctx, base);
	// b 0x839ae818
	goto loc_839AE818;
loc_839AE7BC:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// b 0x839ae804
	goto loc_839AE804;
loc_839AE7D0:
	// bl 0x831156e8
	ctx.lr = 0x839AE7D4;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r28,r11,45477
	ctx.r28.u64 = ctx.r11.u64 | 45477;
	// lbzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839ae7f8
	if (!cr6.eq) goto loc_839AE7F8;
	// bl 0x831156e8
	ctx.lr = 0x839AE7F0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stbx r27,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r27.u8);
loc_839AE7F8:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r3,r11,28984
	ctx.r3.s64 = ctx.r11.s64 + 28984;
loc_839AE804:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x839b4e18
	ctx.lr = 0x839AE818;
	sub_839B4E18(ctx, base);
loc_839AE818:
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x839AE82C;
	sub_83103100(ctx, base);
loc_839AE82C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839ae840
	if (cr6.eq) goto loc_839AE840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ade18
	ctx.lr = 0x839AE840;
	sub_839ADE18(ctx, base);
loc_839AE840:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AE848"))) PPC_WEAK_FUNC(sub_839AE848);
PPC_FUNC_IMPL(__imp__sub_839AE848) {
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
	ctx.lr = 0x839AE850;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839AE860;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r26,r11,29180
	ctx.r26.s64 = ctx.r11.s64 + 29180;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r26,-1320
	ctx.r4.s64 = ctx.r26.s64 + -1320;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AE880;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x839ae8a0
	if (cr6.eq) goto loc_839AE8A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839adf08
	ctx.lr = 0x839AE89C;
	sub_839ADF08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
loc_839AE8A0:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839AE8AC;
	sub_82D2AEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839AE8B4;
	sub_82D19A68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r26,-1300
	ctx.r4.s64 = ctx.r26.s64 + -1300;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AE8CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839AE8D4;
	sub_82D19A68(ctx, base);
	// li r4,15472
	ctx.r4.s64 = 15472;
	// bl 0x83545640
	ctx.lr = 0x839AE8DC;
	sub_83545640(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// bl 0x82d19a68
	ctx.lr = 0x839AE8F8;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r26,-1292
	ctx.r4.s64 = ctx.r26.s64 + -1292;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x839AE910;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83911a68
	ctx.lr = 0x839AE918;
	sub_83911A68(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x839ae98c
	if (cr6.eq) goto loc_839AE98C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x839aaf10
	ctx.lr = 0x839AE930;
	sub_839AAF10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839AE944;
	sub_82D291E0(ctx, base);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r30,r1,100
	ctx.r30.s64 = ctx.r1.s64 + 100;
loc_839AE94C:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,-4
	ctx.r3.s64 = ctx.r30.s64 + -4;
	// bl 0x839a9080
	ctx.lr = 0x839AE964;
	sub_839A9080(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x839ae94c
	if (cr6.lt) goto loc_839AE94C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f3,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d32f78
	ctx.lr = 0x839AE988;
	sub_82D32F78(ctx, base);
	// b 0x839ae99c
	goto loc_839AE99C;
loc_839AE98C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839AE99C;
	sub_82D2AEC8(ctx, base);
loc_839AE99C:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839ae9e0
	if (!cr6.eq) goto loc_839AE9E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839AE9B0;
	sub_82D19A68(ctx, base);
	// addi r11,r26,-1268
	ctx.r11.s64 = ctx.r26.s64 + -1268;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x839c93c0
	ctx.lr = 0x839AE9CC;
	sub_839C93C0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839AE9E0;
	sub_83103100(ctx, base);
loc_839AE9E0:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839aea24
	if (!cr6.eq) goto loc_839AEA24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839AE9F4;
	sub_82D19A68(ctx, base);
	// addi r11,r26,-1260
	ctx.r11.s64 = ctx.r26.s64 + -1260;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x839b1bf0
	ctx.lr = 0x839AEA10;
	sub_839B1BF0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839AEA24;
	sub_83103100(ctx, base);
loc_839AEA24:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839aeaa0
	if (!cr6.eq) goto loc_839AEAA0;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839AEA48;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839aea5c
	if (cr6.eq) goto loc_839AEA5C;
	// addi r4,r26,-1240
	ctx.r4.s64 = ctx.r26.s64 + -1240;
	// bl 0x83815d38
	ctx.lr = 0x839AEA58;
	sub_83815D38(ctx, base);
	// b 0x839aea60
	goto loc_839AEA60;
loc_839AEA5C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_839AEA60:
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839aeaa0
	if (cr6.eq) goto loc_839AEAA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83815b28
	ctx.lr = 0x839AEA74;
	sub_83815B28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// addi r29,r31,156
	ctx.r29.s64 = ctx.r31.s64 + 156;
	// li r30,3
	ctx.r30.s64 = 3;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_839AEA88:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x839AEA94;
	sub_83815B68(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// bne 0x839aea88
	if (!cr0.eq) goto loc_839AEA88;
loc_839AEAA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839AEAA8;
	sub_82D19A68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AEAC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x839aeae0
	if (cr6.lt) goto loc_839AEAE0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839AEAE0;
	sub_825952B8(ctx, base);
loc_839AEAE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AEAF0"))) PPC_WEAK_FUNC(sub_839AEAF0);
PPC_FUNC_IMPL(__imp__sub_839AEAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839AEAF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839AEB08;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839aed40
	if (cr6.eq) goto loc_839AED40;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839aeb34
	if (cr6.eq) goto loc_839AEB34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AEB30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
loc_839AEB34:
	// lwz r28,104(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r28,36
	cr6.compare<uint32_t>(ctx.r28.u32, 36, xer);
	// bgt cr6,0x839aed08
	if (cr6.gt) goto loc_839AED08;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r28,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-5288
	ctx.r12.s64 = ctx.r12.s64 + -5288;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r28.u32) {
	case 0:
		goto loc_839AEBEC;
	case 1:
		goto loc_839AEBFC;
	case 2:
		goto loc_839AED40;
	case 3:
		goto loc_839AEC0C;
	case 4:
		goto loc_839AED08;
	case 5:
		goto loc_839AED40;
	case 6:
		goto loc_839AED40;
	case 7:
		goto loc_839AEC1C;
	case 8:
		goto loc_839AED40;
	case 9:
		goto loc_839AEC40;
	case 10:
		goto loc_839AEC58;
	case 11:
		goto loc_839AEC64;
	case 12:
		goto loc_839AED08;
	case 13:
		goto loc_839AED08;
	case 14:
		goto loc_839AEC4C;
	case 15:
		goto loc_839AED40;
	case 16:
		goto loc_839AED40;
	case 17:
		goto loc_839AED08;
	case 18:
		goto loc_839AEC70;
	case 19:
		goto loc_839AED08;
	case 20:
		goto loc_839AED08;
	case 21:
		goto loc_839AED08;
	case 22:
		goto loc_839AED08;
	case 23:
		goto loc_839AEC7C;
	case 24:
		goto loc_839AED08;
	case 25:
		goto loc_839AED08;
	case 26:
		goto loc_839AED08;
	case 27:
		goto loc_839AED08;
	case 28:
		goto loc_839AED08;
	case 29:
		goto loc_839AEC8C;
	case 30:
		goto loc_839AED40;
	case 31:
		goto loc_839AECD8;
	case 32:
		goto loc_839AECD8;
	case 33:
		goto loc_839AECD8;
	case 34:
		goto loc_839AED08;
	case 35:
		goto loc_839AECE4;
	case 36:
		goto loc_839AECF4;
	default:
		return;
	}
	// lwz r28,-5140(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5140);
	// lwz r28,-5124(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5124);
	// lwz r28,-4800(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4800);
	// lwz r28,-5108(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5108);
	// lwz r28,-4856(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4856);
	// lwz r28,-4800(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4800);
	// lwz r28,-4800(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4800);
	// lwz r28,-5092(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5092);
	// lwz r28,-4800(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4800);
	// lwz r28,-5056(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5056);
	// lwz r28,-5032(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5032);
	// lwz r28,-5020(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5020);
	// lwz r28,-4856(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4856);
	// lwz r28,-4856(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4856);
	// lwz r28,-5044(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5044);
	// lwz r28,-4800(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4800);
	// lwz r28,-4800(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4800);
	// lwz r28,-4856(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4856);
	// lwz r28,-5008(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5008);
	// lwz r28,-4856(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4856);
	// lwz r28,-4856(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4856);
	// lwz r28,-4856(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4856);
	// lwz r28,-4856(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4856);
	// lwz r28,-4996(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4996);
	// lwz r28,-4856(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4856);
	// lwz r28,-4856(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4856);
	// lwz r28,-4856(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4856);
	// lwz r28,-4856(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4856);
	// lwz r28,-4856(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4856);
	// lwz r28,-4980(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4980);
	// lwz r28,-4800(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4800);
	// lwz r28,-4904(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4904);
	// lwz r28,-4904(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4904);
	// lwz r28,-4904(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4904);
	// lwz r28,-4856(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4856);
	// lwz r28,-4892(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4892);
	// lwz r28,-4876(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4876);
loc_839AEBEC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839abf48
	ctx.lr = 0x839AEBF8;
	sub_839ABF48(ctx, base);
	// b 0x839aed08
	goto loc_839AED08;
loc_839AEBFC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ac010
	ctx.lr = 0x839AEC08;
	sub_839AC010(ctx, base);
	// b 0x839aed08
	goto loc_839AED08;
loc_839AEC0C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ac080
	ctx.lr = 0x839AEC18;
	sub_839AC080(ctx, base);
	// b 0x839aed08
	goto loc_839AED08;
loc_839AEC1C:
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x839aec34
	if (cr6.lt) goto loc_839AEC34;
	// bne cr6,0x839aed08
	if (!cr6.eq) goto loc_839AED08;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x839aed08
	goto loc_839AED08;
loc_839AEC34:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x839aed08
	goto loc_839AED08;
loc_839AEC40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ac618
	ctx.lr = 0x839AEC48;
	sub_839AC618(ctx, base);
	// b 0x839aed08
	goto loc_839AED08;
loc_839AEC4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ac180
	ctx.lr = 0x839AEC54;
	sub_839AC180(ctx, base);
	// b 0x839aed08
	goto loc_839AED08;
loc_839AEC58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ac1f8
	ctx.lr = 0x839AEC60;
	sub_839AC1F8(ctx, base);
	// b 0x839aed08
	goto loc_839AED08;
loc_839AEC64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ac2d0
	ctx.lr = 0x839AEC6C;
	sub_839AC2D0(ctx, base);
	// b 0x839aed08
	goto loc_839AED08;
loc_839AEC70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ac3a0
	ctx.lr = 0x839AEC78;
	sub_839AC3A0(ctx, base);
	// b 0x839aed08
	goto loc_839AED08;
loc_839AEC7C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ac3f8
	ctx.lr = 0x839AEC88;
	sub_839AC3F8(ctx, base);
	// b 0x839aed08
	goto loc_839AED08;
loc_839AEC8C:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x839b06e0
	ctx.lr = 0x839AEC94;
	sub_839B06E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// subfe r7,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r30,r10,21716
	ctx.r30.s64 = ctx.r10.s64 + 21716;
	// ori r6,r8,12288
	ctx.r6.u64 = ctx.r8.u64 | 12288;
	// stw r7,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839AECD0;
	sub_83103068(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x839aed08
	goto loc_839AED08;
loc_839AECD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ac4f8
	ctx.lr = 0x839AECE0;
	sub_839AC4F8(ctx, base);
	// b 0x839aed08
	goto loc_839AED08;
loc_839AECE4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ac568
	ctx.lr = 0x839AECF0;
	sub_839AC568(ctx, base);
	// b 0x839aed08
	goto loc_839AED08;
loc_839AECF4:
	// lbz r11,201(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 201);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839aed04
	if (cr6.eq) goto loc_839AED04;
	// stb r29,201(r31)
	PPC_STORE_U8(ctx.r31.u32 + 201, ctx.r29.u8);
loc_839AED04:
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
loc_839AED08:
	// cmpwi cr6,r28,37
	cr6.compare<int32_t>(ctx.r28.s32, 37, xer);
	// bge cr6,0x839aed2c
	if (!cr6.lt) goto loc_839AED2C;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,28040
	ctx.r9.s64 = ctx.r11.s64 + 28040;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,37
	cr6.compare<int32_t>(ctx.r11.s32, 37, xer);
	// beq cr6,0x839aed34
	if (cr6.eq) goto loc_839AED34;
	// b 0x839aed30
	goto loc_839AED30;
loc_839AED2C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_839AED30:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_839AED34:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839adf08
	ctx.lr = 0x839AED40;
	sub_839ADF08(ctx, base);
loc_839AED40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AED48"))) PPC_WEAK_FUNC(sub_839AED48);
PPC_FUNC_IMPL(__imp__sub_839AED48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839AED50;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839aed7c
	if (cr6.eq) goto loc_839AED7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AED78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
loc_839AED7C:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839aed9c
	if (cr6.eq) goto loc_839AED9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AED98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
loc_839AED9C:
	// lwz r28,104(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r28,34
	cr6.compare<uint32_t>(ctx.r28.u32, 34, xer);
	// bgt cr6,0x839af00c
	if (cr6.gt) goto loc_839AF00C;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r28,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4672
	ctx.r12.s64 = ctx.r12.s64 + -4672;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r28.u32) {
	case 0:
		goto loc_839AEE4C;
	case 1:
		goto loc_839AEE4C;
	case 2:
		goto loc_839AEE80;
	case 3:
		goto loc_839AF00C;
	case 4:
		goto loc_839AF00C;
	case 5:
		goto loc_839AEEA4;
	case 6:
		goto loc_839AF00C;
	case 7:
		goto loc_839AF00C;
	case 8:
		goto loc_839AEEB0;
	case 9:
		goto loc_839AF00C;
	case 10:
		goto loc_839AF00C;
	case 11:
		goto loc_839AF00C;
	case 12:
		goto loc_839AEF0C;
	case 13:
		goto loc_839AEEE0;
	case 14:
		goto loc_839AEF28;
	case 15:
		goto loc_839AF00C;
	case 16:
		goto loc_839AF00C;
	case 17:
		goto loc_839AF00C;
	case 18:
		goto loc_839AEE80;
	case 19:
		goto loc_839AF00C;
	case 20:
		goto loc_839AF00C;
	case 21:
		goto loc_839AF00C;
	case 22:
		goto loc_839AF00C;
	case 23:
		goto loc_839AF00C;
	case 24:
		goto loc_839AEFA0;
	case 25:
		goto loc_839AEFA0;
	case 26:
		goto loc_839AEFAC;
	case 27:
		goto loc_839AEFAC;
	case 28:
		goto loc_839AEFAC;
	case 29:
		goto loc_839AF00C;
	case 30:
		goto loc_839AF048;
	case 31:
		goto loc_839AF048;
	case 32:
		goto loc_839AF048;
	case 33:
		goto loc_839AF048;
	case 34:
		goto loc_839AF048;
	default:
		return;
	}
	// lwz r28,-4532(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4532);
	// lwz r28,-4532(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4532);
	// lwz r28,-4480(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4480);
	// lwz r28,-4084(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r28,-4084(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r28,-4444(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4444);
	// lwz r28,-4084(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r28,-4084(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r28,-4432(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4432);
	// lwz r28,-4084(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r28,-4084(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r28,-4084(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r28,-4340(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4340);
	// lwz r28,-4384(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4384);
	// lwz r28,-4312(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4312);
	// lwz r28,-4084(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r28,-4084(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r28,-4084(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r28,-4480(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4480);
	// lwz r28,-4084(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r28,-4084(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r28,-4084(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r28,-4084(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r28,-4084(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r28,-4192(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4192);
	// lwz r28,-4192(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4192);
	// lwz r28,-4180(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4180);
	// lwz r28,-4180(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4180);
	// lwz r28,-4180(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4180);
	// lwz r28,-4084(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r28,-4024(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4024);
	// lwz r28,-4024(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4024);
	// lwz r28,-4024(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4024);
	// lwz r28,-4024(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4024);
	// lwz r28,-4024(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4024);
loc_839AEE4C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
	// ori r9,r10,12289
	ctx.r9.u64 = ctx.r10.u64 | 12289;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839AEE78;
	sub_83103068(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x839af00c
	goto loc_839AF00C;
loc_839AEE80:
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AEE88;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399fc90
	ctx.lr = 0x839AEE90;
	sub_8399FC90(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// b 0x839af00c
	goto loc_839AF00C;
loc_839AEEA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ac618
	ctx.lr = 0x839AEEAC;
	sub_839AC618(ctx, base);
	// b 0x839af00c
	goto loc_839AF00C;
loc_839AEEB0:
	// lwz r30,172(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r27,96(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AEEBC;
	sub_8399F8B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x839a0770
	ctx.lr = 0x839AEEC8;
	sub_839A0770(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AEEDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x839af00c
	goto loc_839AF00C;
loc_839AEEE0:
	// lwz r30,172(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r27,96(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AEEEC;
	sub_8399F8B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x839a0770
	ctx.lr = 0x839AEEF8;
	sub_839A0770(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AEF0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839AEF0C:
	// bl 0x839aaa10
	ctx.lr = 0x839AEF10;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// b 0x839af00c
	goto loc_839AF00C;
loc_839AEF28:
	// lwz r30,172(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r27,96(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AEF34;
	sub_8399F8B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x839a0770
	ctx.lr = 0x839AEF40;
	sub_839A0770(ctx, base);
	// lwz r30,108(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r27,96(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AEF4C;
	sub_8399F8B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8399f938
	ctx.lr = 0x839AEF58;
	sub_8399F938(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
	// stb r29,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r29.u8);
	// ori r9,r10,12291
	ctx.r9.u64 = ctx.r10.u64 | 12291;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102fe0
	ctx.lr = 0x839AEF84;
	sub_83102FE0(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,332(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 332);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x839AEF9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x839af00c
	goto loc_839AF00C;
loc_839AEFA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ac660
	ctx.lr = 0x839AEFA8;
	sub_839AC660(ctx, base);
	// b 0x839af00c
	goto loc_839AF00C;
loc_839AEFAC:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
	// beq cr6,0x839aefe4
	if (cr6.eq) goto loc_839AEFE4;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ori r10,r11,12298
	ctx.r10.u64 = ctx.r11.u64 | 12298;
	// stb r29,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r29.u8);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x83102fe0
	ctx.lr = 0x839AEFE0;
	sub_83102FE0(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
loc_839AEFE4:
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// ori r10,r11,12317
	ctx.r10.u64 = ctx.r11.u64 | 12317;
	// stb r29,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x83102fe0
	ctx.lr = 0x839AF008;
	sub_83102FE0(ctx, base);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
loc_839AF00C:
	// cmpwi cr6,r28,37
	cr6.compare<int32_t>(ctx.r28.s32, 37, xer);
	// bge cr6,0x839af034
	if (!cr6.lt) goto loc_839AF034;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,28040
	ctx.r11.s64 = ctx.r11.s64 + 28040;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,37
	cr6.compare<int32_t>(ctx.r11.s32, 37, xer);
	// beq cr6,0x839af03c
	if (cr6.eq) goto loc_839AF03C;
	// b 0x839af038
	goto loc_839AF038;
loc_839AF034:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_839AF038:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_839AF03C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839adf08
	ctx.lr = 0x839AF048;
	sub_839ADF08(ctx, base);
loc_839AF048:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AF050"))) PPC_WEAK_FUNC(sub_839AF050);
PPC_FUNC_IMPL(__imp__sub_839AF050) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x839aeaf0
	sub_839AEAF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AF058"))) PPC_WEAK_FUNC(sub_839AF058);
PPC_FUNC_IMPL(__imp__sub_839AF058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839AF060;
	__savegprlr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r27,8(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addis r11,r28,-264
	ctx.r11.s64 = ctx.r28.s64 + -17301504;
	// addi r11,r11,-12288
	ctx.r11.s64 = ctx.r11.s64 + -12288;
	// cmplwi cr6,r11,69
	cr6.compare<uint32_t>(ctx.r11.u32, 69, xer);
	// bgt cr6,0x839afb18
	if (cr6.gt) goto loc_839AFB18;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-3940
	ctx.r12.s64 = ctx.r12.s64 + -3940;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_839AF500;
	case 1:
		goto loc_839AF51C;
	case 2:
		goto loc_839AF1B4;
	case 3:
		goto loc_839AF6D0;
	case 4:
		goto loc_839AF6D0;
	case 5:
		goto loc_839AF628;
	case 6:
		goto loc_839AFB18;
	case 7:
		goto loc_839AF668;
	case 8:
		goto loc_839AF5DC;
	case 9:
		goto loc_839AF5F8;
	case 10:
		goto loc_839AF780;
	case 11:
		goto loc_839AF780;
	case 12:
		goto loc_839AF230;
	case 13:
		goto loc_839AF338;
	case 14:
		goto loc_839AF628;
	case 15:
		goto loc_839AFB44;
	case 16:
		goto loc_839AF7E0;
	case 17:
		goto loc_839AF814;
	case 18:
		goto loc_839AF848;
	case 19:
		goto loc_839AF914;
	case 20:
		goto loc_839AF574;
	case 21:
		goto loc_839AF530;
	case 22:
		goto loc_839AF628;
	case 23:
		goto loc_839AF700;
	case 24:
		goto loc_839AF778;
	case 25:
		goto loc_839AF798;
	case 26:
		goto loc_839AFB18;
	case 27:
		goto loc_839AF7C8;
	case 28:
		goto loc_839AF780;
	case 29:
		goto loc_839AF780;
	case 30:
		goto loc_839AF780;
	case 31:
		goto loc_839AF630;
	case 32:
		goto loc_839AF630;
	case 33:
		goto loc_839AF630;
	case 34:
		goto loc_839AF630;
	case 35:
		goto loc_839AF630;
	case 36:
		goto loc_839AF630;
	case 37:
		goto loc_839AF630;
	case 38:
		goto loc_839AF630;
	case 39:
		goto loc_839AF630;
	case 40:
		goto loc_839AF630;
	case 41:
		goto loc_839AF64C;
	case 42:
		goto loc_839AF670;
	case 43:
		goto loc_839AF628;
	case 44:
		goto loc_839AF620;
	case 45:
		goto loc_839AF620;
	case 46:
		goto loc_839AF628;
	case 47:
		goto loc_839AFB18;
	case 48:
		goto loc_839AF71C;
	case 49:
		goto loc_839AF740;
	case 50:
		goto loc_839AF994;
	case 51:
		goto loc_839AFB18;
	case 52:
		goto loc_839AFB18;
	case 53:
		goto loc_839AFB18;
	case 54:
		goto loc_839AF6F8;
	case 55:
		goto loc_839AF6F8;
	case 56:
		goto loc_839AF628;
	case 57:
		goto loc_839AF628;
	case 58:
		goto loc_839AF628;
	case 59:
		goto loc_839AF9BC;
	case 60:
		goto loc_839AFA08;
	case 61:
		goto loc_839AFA58;
	case 62:
		goto loc_839AFAA8;
	case 63:
		goto loc_839AFAC0;
	case 64:
		goto loc_839AFAD4;
	case 65:
		goto loc_839AFAF0;
	case 66:
		goto loc_839AFAF0;
	case 67:
		goto loc_839AFB24;
	case 68:
		goto loc_839AF628;
	case 69:
		goto loc_839AFB04;
	default:
		return;
	}
	// lwz r28,-2816(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2816);
	// lwz r28,-2788(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2788);
	// lwz r28,-3660(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3660);
	// lwz r28,-2352(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2352);
	// lwz r28,-2352(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2352);
	// lwz r28,-2520(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2520);
	// lwz r28,-1256(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1256);
	// lwz r28,-2456(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2456);
	// lwz r28,-2596(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2596);
	// lwz r28,-2568(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2568);
	// lwz r28,-2176(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2176);
	// lwz r28,-2176(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2176);
	// lwz r28,-3536(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3536);
	// lwz r28,-3272(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3272);
	// lwz r28,-2520(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2520);
	// lwz r28,-1212(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1212);
	// lwz r28,-2080(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2080);
	// lwz r28,-2028(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2028);
	// lwz r28,-1976(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1976);
	// lwz r28,-1772(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1772);
	// lwz r28,-2700(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2700);
	// lwz r28,-2768(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2768);
	// lwz r28,-2520(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2520);
	// lwz r28,-2304(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2304);
	// lwz r28,-2184(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2184);
	// lwz r28,-2152(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2152);
	// lwz r28,-1256(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1256);
	// lwz r28,-2104(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2104);
	// lwz r28,-2176(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2176);
	// lwz r28,-2176(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2176);
	// lwz r28,-2176(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2176);
	// lwz r28,-2512(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2512);
	// lwz r28,-2512(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2512);
	// lwz r28,-2512(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2512);
	// lwz r28,-2512(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2512);
	// lwz r28,-2512(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2512);
	// lwz r28,-2512(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2512);
	// lwz r28,-2512(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2512);
	// lwz r28,-2512(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2512);
	// lwz r28,-2512(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2512);
	// lwz r28,-2512(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2512);
	// lwz r28,-2484(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2484);
	// lwz r28,-2448(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2448);
	// lwz r28,-2520(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2520);
	// lwz r28,-2528(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2528);
	// lwz r28,-2528(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2528);
	// lwz r28,-2520(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2520);
	// lwz r28,-1256(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1256);
	// lwz r28,-2276(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2276);
	// lwz r28,-2240(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2240);
	// lwz r28,-1644(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1644);
	// lwz r28,-1256(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1256);
	// lwz r28,-1256(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1256);
	// lwz r28,-1256(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1256);
	// lwz r28,-2312(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2312);
	// lwz r28,-2312(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2312);
	// lwz r28,-2520(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2520);
	// lwz r28,-2520(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2520);
	// lwz r28,-2520(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2520);
	// lwz r28,-1604(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1604);
	// lwz r28,-1528(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1528);
	// lwz r28,-1448(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1448);
	// lwz r28,-1368(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1368);
	// lwz r28,-1344(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1344);
	// lwz r28,-1324(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1324);
	// lwz r28,-1296(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1296);
	// lwz r28,-1296(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1296);
	// lwz r28,-1244(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1244);
	// lwz r28,-2520(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2520);
	// lwz r28,-1276(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1276);
loc_839AF1B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839adc00
	ctx.lr = 0x839AF1BC;
	sub_839ADC00(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,21716
	ctx.r29.s64 = ctx.r11.s64 + 21716;
	// ori r9,r10,12342
	ctx.r9.u64 = ctx.r10.u64 | 12342;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r30.u8);
	// bl 0x831036c0
	ctx.lr = 0x839AF1F0;
	sub_831036C0(ctx, base);
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// ori r7,r8,12298
	ctx.r7.u64 = ctx.r8.u64 | 12298;
	// stb r30,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r30.u8);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// bl 0x831036c0
	ctx.lr = 0x839AF214;
	sub_831036C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839aed48
	ctx.lr = 0x839AF21C;
	sub_839AED48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ade18
	ctx.lr = 0x839AF224;
	sub_839ADE18(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AF230:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r29,r11,21716
	ctx.r29.s64 = ctx.r11.s64 + 21716;
	// ori r9,r10,12299
	ctx.r9.u64 = ctx.r10.u64 | 12299;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r29.u32);
	// stw r9,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stb r30,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102fe0
	ctx.lr = 0x839AF260;
	sub_83102FE0(ctx, base);
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// ori r7,r8,12341
	ctx.r7.u64 = ctx.r8.u64 | 12341;
	// stb r30,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r30.u8);
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r7.u32);
	// bl 0x831036c0
	ctx.lr = 0x839AF284;
	sub_831036C0(ctx, base);
	// lis r6,264
	ctx.r6.s64 = 17301504;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// ori r3,r6,12325
	ctx.r3.u64 = ctx.r6.u64 | 12325;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stb r5,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r5.u8);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831036c0
	ctx.lr = 0x839AF2AC;
	sub_831036C0(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x839AF2B0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839AF2B4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// bne cr6,0x839af2f4
	if (!cr6.eq) goto loc_839AF2F4;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839af2d0
	if (cr6.eq) goto loc_839AF2D0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x839af2f4
	if (!cr6.eq) goto loc_839AF2F4;
loc_839AF2D0:
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x83103068
	ctx.lr = 0x839AF2F0;
	sub_83103068(ctx, base);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
loc_839AF2F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839AF2FC;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839afb18
	if (cr6.eq) goto loc_839AFB18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839AF30C;
	sub_82D19A68(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,25008
	ctx.r10.s64 = ctx.r11.s64 + 25008;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839AF32C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AF338:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ad2b0
	ctx.lr = 0x839AF340;
	sub_839AD2B0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r29,r11,21716
	ctx.r29.s64 = ctx.r11.s64 + 21716;
	// beq cr6,0x839af3d8
	if (cr6.eq) goto loc_839AF3D8;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ori r10,r11,12298
	ctx.r10.u64 = ctx.r11.u64 | 12298;
	// stb r30,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x83102fe0
	ctx.lr = 0x839AF37C;
	sub_83102FE0(ctx, base);
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// ori r8,r9,12317
	ctx.r8.u64 = ctx.r9.u64 | 12317;
	// stb r30,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r30.u8);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// bl 0x83102fe0
	ctx.lr = 0x839AF3A0;
	sub_83102FE0(ctx, base);
	// lis r7,264
	ctx.r7.s64 = 17301504;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r6,r7,12342
	ctx.r6.u64 = ctx.r7.u64 | 12342;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x83102fe0
	ctx.lr = 0x839AF3C8;
	sub_83102FE0(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ac730
	ctx.lr = 0x839AF3D4;
	sub_839AC730(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
loc_839AF3D8:
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// ori r10,r11,12340
	ctx.r10.u64 = ctx.r11.u64 | 12340;
	// stb r30,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// bl 0x831036c0
	ctx.lr = 0x839AF3FC;
	sub_831036C0(ctx, base);
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// ori r7,r9,12324
	ctx.r7.u64 = ctx.r9.u64 | 12324;
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
	// stb r8,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r8.u8);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stw r7,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831036c0
	ctx.lr = 0x839AF424;
	sub_831036C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ade18
	ctx.lr = 0x839AF42C;
	sub_839ADE18(ctx, base);
	// lis r6,264
	ctx.r6.s64 = 17301504;
	// stw r29,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// ori r5,r6,12339
	ctx.r5.u64 = ctx.r6.u64 | 12339;
	// stb r30,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, ctx.r30.u8);
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// bl 0x831036c0
	ctx.lr = 0x839AF450;
	sub_831036C0(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x839AF454;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839AF458;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// bne cr6,0x839af498
	if (!cr6.eq) goto loc_839AF498;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839af474
	if (cr6.eq) goto loc_839AF474;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x839af498
	if (!cr6.eq) goto loc_839AF498;
loc_839AF474:
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stb r30,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// bl 0x83103068
	ctx.lr = 0x839AF494;
	sub_83103068(ctx, base);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
loc_839AF498:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ace98
	ctx.lr = 0x839AF4A0;
	sub_839ACE98(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839af4f0
	if (cr6.eq) goto loc_839AF4F0;
	// bl 0x82d19a68
	ctx.lr = 0x839AF4B4;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839afb18
	if (cr6.eq) goto loc_839AFB18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839AF4C4;
	sub_82D19A68(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,25008
	ctx.r10.s64 = ctx.r11.s64 + 25008;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839AF4E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AF4F0:
	// bl 0x839ada90
	ctx.lr = 0x839AF4F4;
	sub_839ADA90(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AF500:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x839aeaf0
	ctx.lr = 0x839AF510;
	sub_839AEAF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AF51C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839aed48
	ctx.lr = 0x839AF524;
	sub_839AED48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AF530:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x839af8fc
	if (!cr6.eq) goto loc_839AF8FC;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839afb18
	if (cr6.eq) goto loc_839AFB18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AF560;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AF574:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x839af8fc
	if (!cr6.eq) goto loc_839AF8FC;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839afb18
	if (!cr6.eq) goto loc_839AFB18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839AF59C;
	sub_82D19A68(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,28024
	ctx.r11.s64 = ctx.r11.s64 + 28024;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r11,-36
	ctx.r3.s64 = ctx.r11.s64 + -36;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x839ca838
	ctx.lr = 0x839AF5BC;
	sub_839CA838(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839AF5D0;
	sub_83103100(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AF5DC:
	// bl 0x830fe8a0
	ctx.lr = 0x839AF5E0;
	sub_830FE8A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r3,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r3.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 177, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ad200
	ctx.lr = 0x839AF5F8;
	sub_839AD200(ctx, base);
loc_839AF5F8:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839af60c
	if (cr6.eq) goto loc_839AF60C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83102fe0
	ctx.lr = 0x839AF60C;
	sub_83102FE0(ctx, base);
loc_839AF60C:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839af620
	if (cr6.eq) goto loc_839AF620;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83102fe0
	ctx.lr = 0x839AF620;
	sub_83102FE0(ctx, base);
loc_839AF620:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// b 0x839afb08
	goto loc_839AFB08;
loc_839AF628:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// b 0x839afb08
	goto loc_839AFB08;
loc_839AF630:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839af620
	if (cr6.eq) goto loc_839AF620;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83102fe0
	ctx.lr = 0x839AF644;
	sub_83102FE0(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// b 0x839afb08
	goto loc_839AFB08;
loc_839AF64C:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r11.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839af668
	if (cr6.eq) goto loc_839AF668;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83102fe0
	ctx.lr = 0x839AF668;
	sub_83102FE0(ctx, base);
loc_839AF668:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// b 0x839afb08
	goto loc_839AFB08;
loc_839AF670:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r11.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839af68c
	if (cr6.eq) goto loc_839AF68C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83102fe0
	ctx.lr = 0x839AF68C;
	sub_83102FE0(ctx, base);
loc_839AF68C:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839af6a0
	if (cr6.eq) goto loc_839AF6A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83102fe0
	ctx.lr = 0x839AF6A0;
	sub_83102FE0(ctx, base);
loc_839AF6A0:
	// bl 0x830fe8a0
	ctx.lr = 0x839AF6A4;
	sub_830FE8A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r3,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r3.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 177, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ad200
	ctx.lr = 0x839AF6BC;
	sub_839AD200(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ad120
	ctx.lr = 0x839AF6C4;
	sub_839AD120(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AF6D0:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839af6e4
	if (cr6.eq) goto loc_839AF6E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83102fe0
	ctx.lr = 0x839AF6E4;
	sub_83102FE0(ctx, base);
loc_839AF6E4:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839af6f8
	if (cr6.eq) goto loc_839AF6F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83102fe0
	ctx.lr = 0x839AF6F8;
	sub_83102FE0(ctx, base);
loc_839AF6F8:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// b 0x839afb08
	goto loc_839AFB08;
loc_839AF700:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839afb18
	if (cr6.eq) goto loc_839AFB18;
	// bl 0x839b35c0
	ctx.lr = 0x839AF710;
	sub_839B35C0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AF71C:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r11.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839afb18
	if (cr6.eq) goto loc_839AFB18;
	// bl 0x839b35c0
	ctx.lr = 0x839AF734;
	sub_839B35C0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AF740:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r11.u8);
	// bl 0x830fe8a0
	ctx.lr = 0x839AF74C;
	sub_830FE8A0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r3,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r3.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 177, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ad200
	ctx.lr = 0x839AF764;
	sub_839AD200(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ad120
	ctx.lr = 0x839AF76C;
	sub_839AD120(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AF778:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ad950
	ctx.lr = 0x839AF780;
	sub_839AD950(ctx, base);
loc_839AF780:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831036c0
	ctx.lr = 0x839AF78C;
	sub_831036C0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AF798:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839adc00
	ctx.lr = 0x839AF7A0;
	sub_839ADC00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831036c0
	ctx.lr = 0x839AF7AC;
	sub_831036C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ace98
	ctx.lr = 0x839AF7B4;
	sub_839ACE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ade18
	ctx.lr = 0x839AF7BC;
	sub_839ADE18(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AF7C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x839acbf0
	ctx.lr = 0x839AF7D4;
	sub_839ACBF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AF7E0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x839af904
	if (cr6.eq) goto loc_839AF904;
	// bl 0x831036c0
	ctx.lr = 0x839AF800;
	sub_831036C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r11,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r11.u8);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AF814:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x839af904
	if (cr6.eq) goto loc_839AF904;
	// bl 0x831036c0
	ctx.lr = 0x839AF834;
	sub_831036C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r11,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r11.u8);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AF848:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// beq cr6,0x839af864
	if (cr6.eq) goto loc_839AF864;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83102fe0
	ctx.lr = 0x839AF864;
	sub_83102FE0(ctx, base);
loc_839AF864:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839af888
	if (cr6.eq) goto loc_839AF888;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AF880;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
loc_839AF888:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839AF890;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r29,r11,28024
	ctx.r29.s64 = ctx.r11.s64 + 28024;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AF8B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x839AF8BC;
	sub_82D2AEC8(ctx, base);
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839af8fc
	if (!cr6.eq) goto loc_839AF8FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839AF8D0;
	sub_82D19A68(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x839ca838
	ctx.lr = 0x839AF8E8;
	sub_839CA838(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x83103100
	ctx.lr = 0x839AF8FC;
	sub_83103100(ctx, base);
loc_839AF8FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839AF904:
	// bl 0x83103068
	ctx.lr = 0x839AF908;
	sub_83103068(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AF914:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r30,r9,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// bl 0x8399f8b8
	ctx.lr = 0x839AF930;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399fc90
	ctx.lr = 0x839AF938;
	sub_8399FC90(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839af94c
	if (!cr6.eq) goto loc_839AF94C;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// b 0x839af954
	goto loc_839AF954;
loc_839AF94C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_839AF954:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AF968;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839afb18
	if (cr6.eq) goto loc_839AFB18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AF984;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AF994:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839afb18
	if (cr6.eq) goto loc_839AFB18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x839acde8
	ctx.lr = 0x839AF9B0;
	sub_839ACDE8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AF9BC:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839af9e0
	if (cr6.eq) goto loc_839AF9E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AF9D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
loc_839AF9E0:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r10,31
	ctx.r10.s64 = 31;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// bl 0x839adf08
	ctx.lr = 0x839AF9FC;
	sub_839ADF08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AFA08:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r30.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839afa30
	if (cr6.eq) goto loc_839AFA30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AFA2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
loc_839AFA30:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// bl 0x839adf08
	ctx.lr = 0x839AFA4C;
	sub_839ADF08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AFA58:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,203(r31)
	PPC_STORE_U8(ctx.r31.u32 + 203, ctx.r30.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839afa80
	if (cr6.eq) goto loc_839AFA80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839AFA7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
loc_839AFA80:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r10,33
	ctx.r10.s64 = 33;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// bl 0x839adf08
	ctx.lr = 0x839AFA9C;
	sub_839ADF08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AFAA8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839acc48
	ctx.lr = 0x839AFAB4;
	sub_839ACC48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AFAC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839acce0
	ctx.lr = 0x839AFAC8;
	sub_839ACCE0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AFAD4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x839ad0a8
	ctx.lr = 0x839AFAE4;
	sub_839AD0A8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AFAF0:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839afb04
	if (cr6.eq) goto loc_839AFB04;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83102fe0
	ctx.lr = 0x839AFB04;
	sub_83102FE0(ctx, base);
loc_839AFB04:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
loc_839AFB08:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839afb18
	if (cr6.eq) goto loc_839AFB18;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83102fe0
	ctx.lr = 0x839AFB18;
	sub_83102FE0(ctx, base);
loc_839AFB18:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839AFB24:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x839af8fc
	if (!cr6.eq) goto loc_839AF8FC;
	// lwz r29,96(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8399f8b8
	ctx.lr = 0x839AFB38;
	sub_8399F8B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x839a0f18
	ctx.lr = 0x839AFB44;
	sub_839A0F18(ctx, base);
loc_839AFB44:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839acd30
	ctx.lr = 0x839AFB50;
	sub_839ACD30(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AFB5C"))) PPC_WEAK_FUNC(sub_839AFB5C);
PPC_FUNC_IMPL(__imp__sub_839AFB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AFB60"))) PPC_WEAK_FUNC(sub_839AFB60);
PPC_FUNC_IMPL(__imp__sub_839AFB60) {
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
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// bgt cr6,0x839afc7c
	if (cr6.gt) goto loc_839AFC7C;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839afbb0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839AFBB0;
	// bdzf 4*cr6+eq,0x839afbec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839AFBEC;
	// bdzf 4*cr6+eq,0x839afc04
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839AFC04;
	// bdzf 4*cr6+eq,0x839afc1c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839AFC1C;
	// bdzf 4*cr6+eq,0x839afc34
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839AFC34;
	// bdzf 4*cr6+eq,0x839afc4c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839AFC4C;
	// bne cr6,0x839afc64
	if (!cr6.eq) goto loc_839AFC64;
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// ori r3,r3,46
	ctx.r3.u64 = ctx.r3.u64 | 46;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839AFBB0:
	// bl 0x839aaa10
	ctx.lr = 0x839AFBB4;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839afbd8
	if (cr6.eq) goto loc_839AFBD8;
	// ori r3,r3,35
	ctx.r3.u64 = ctx.r3.u64 | 35;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839AFBD8:
	// ori r3,r3,50
	ctx.r3.u64 = ctx.r3.u64 | 50;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839AFBEC:
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// ori r3,r3,49
	ctx.r3.u64 = ctx.r3.u64 | 49;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839AFC04:
	// lis r3,50
	ctx.r3.s64 = 3276800;
	// ori r3,r3,25
	ctx.r3.u64 = ctx.r3.u64 | 25;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839AFC1C:
	// lis r3,63
	ctx.r3.s64 = 4128768;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839AFC34:
	// lis r3,990
	ctx.r3.s64 = 64880640;
	// ori r3,r3,567
	ctx.r3.u64 = ctx.r3.u64 | 567;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839AFC4C:
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// ori r3,r3,47
	ctx.r3.u64 = ctx.r3.u64 | 47;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839AFC64:
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// ori r3,r3,56
	ctx.r3.u64 = ctx.r3.u64 | 56;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839AFC7C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839AFC90"))) PPC_WEAK_FUNC(sub_839AFC90);
PPC_FUNC_IMPL(__imp__sub_839AFC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bgt cr6,0x839afd0c
	if (cr6.gt) goto loc_839AFD0C;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x839afcc4
	if (cr6.eq) goto loc_839AFCC4;
	// bdz 0x839afcd0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839AFCD0;
	// bdz 0x839afcdc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839AFCDC;
	// bdz 0x839afce8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839AFCE8;
	// bdz 0x839afcf4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839AFCF4;
	// bdnz 0x839afd00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839AFD00;
	// lis r3,66
	ctx.r3.s64 = 4325376;
	// ori r3,r3,71
	ctx.r3.u64 = ctx.r3.u64 | 71;
	// blr 
	return;
loc_839AFCC4:
	// lis r3,19
	ctx.r3.s64 = 1245184;
	// ori r3,r3,62
	ctx.r3.u64 = ctx.r3.u64 | 62;
	// blr 
	return;
loc_839AFCD0:
	// lis r3,61
	ctx.r3.s64 = 3997696;
	// ori r3,r3,131
	ctx.r3.u64 = ctx.r3.u64 | 131;
	// blr 
	return;
loc_839AFCDC:
	// lis r3,61
	ctx.r3.s64 = 3997696;
	// ori r3,r3,132
	ctx.r3.u64 = ctx.r3.u64 | 132;
	// blr 
	return;
loc_839AFCE8:
	// lis r3,19
	ctx.r3.s64 = 1245184;
	// ori r3,r3,75
	ctx.r3.u64 = ctx.r3.u64 | 75;
	// blr 
	return;
loc_839AFCF4:
	// lis r3,60
	ctx.r3.s64 = 3932160;
	// ori r3,r3,33
	ctx.r3.u64 = ctx.r3.u64 | 33;
	// blr 
	return;
loc_839AFD00:
	// lis r3,19
	ctx.r3.s64 = 1245184;
	// ori r3,r3,65
	ctx.r3.u64 = ctx.r3.u64 | 65;
	// blr 
	return;
loc_839AFD0C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839AFD14"))) PPC_WEAK_FUNC(sub_839AFD14);
PPC_FUNC_IMPL(__imp__sub_839AFD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AFD18"))) PPC_WEAK_FUNC(sub_839AFD18);
PPC_FUNC_IMPL(__imp__sub_839AFD18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x839afd44
	if (cr6.lt) goto loc_839AFD44;
	// beq cr6,0x839afd38
	if (cr6.eq) goto loc_839AFD38;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r4,17
	ctx.r4.s64 = 1114112;
	// ori r4,r4,23
	ctx.r4.u64 = ctx.r4.u64 | 23;
	// b 0x82d042a8
	sub_82D042A8(ctx, base);
	return;
loc_839AFD38:
	// lis r4,17
	ctx.r4.s64 = 1114112;
	// ori r4,r4,22
	ctx.r4.u64 = ctx.r4.u64 | 22;
	// b 0x82d042a8
	sub_82D042A8(ctx, base);
	return;
loc_839AFD44:
	// lis r4,17
	ctx.r4.s64 = 1114112;
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// b 0x82d042a8
	sub_82D042A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AFD50"))) PPC_WEAK_FUNC(sub_839AFD50);
PPC_FUNC_IMPL(__imp__sub_839AFD50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839AFD54"))) PPC_WEAK_FUNC(sub_839AFD54);
PPC_FUNC_IMPL(__imp__sub_839AFD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AFD58"))) PPC_WEAK_FUNC(sub_839AFD58);
PPC_FUNC_IMPL(__imp__sub_839AFD58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x839afd98
	if (!cr6.eq) goto loc_839AFD98;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x839afd8c
	if (cr6.lt) goto loc_839AFD8C;
	// beq cr6,0x839afd80
	if (cr6.eq) goto loc_839AFD80;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r4,19
	ctx.r4.s64 = 1245184;
	// ori r4,r4,71
	ctx.r4.u64 = ctx.r4.u64 | 71;
	// b 0x82d042a8
	sub_82D042A8(ctx, base);
	return;
loc_839AFD80:
	// lis r4,19
	ctx.r4.s64 = 1245184;
	// ori r4,r4,70
	ctx.r4.u64 = ctx.r4.u64 | 70;
	// b 0x82d042a8
	sub_82D042A8(ctx, base);
	return;
loc_839AFD8C:
	// lis r4,19
	ctx.r4.s64 = 1245184;
	// ori r4,r4,69
	ctx.r4.u64 = ctx.r4.u64 | 69;
	// b 0x82d042a8
	sub_82D042A8(ctx, base);
	return;
loc_839AFD98:
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x839afdb4
	if (cr6.eq) goto loc_839AFDB4;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r4,61
	ctx.r4.s64 = 3997696;
	// ori r4,r4,132
	ctx.r4.u64 = ctx.r4.u64 | 132;
	// b 0x82d042a8
	sub_82D042A8(ctx, base);
	return;
loc_839AFDB4:
	// lis r4,61
	ctx.r4.s64 = 3997696;
	// ori r4,r4,131
	ctx.r4.u64 = ctx.r4.u64 | 131;
	// b 0x82d042a8
	sub_82D042A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839AFDC0"))) PPC_WEAK_FUNC(sub_839AFDC0);
PPC_FUNC_IMPL(__imp__sub_839AFDC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839AFDC4"))) PPC_WEAK_FUNC(sub_839AFDC4);
PPC_FUNC_IMPL(__imp__sub_839AFDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AFDC8"))) PPC_WEAK_FUNC(sub_839AFDC8);
PPC_FUNC_IMPL(__imp__sub_839AFDC8) {
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
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// bgt cr6,0x839afee4
	if (cr6.gt) goto loc_839AFEE4;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839afe3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839AFE3C;
	// bdzf 4*cr6+eq,0x839afe54
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839AFE54;
	// bdzf 4*cr6+eq,0x839afe6c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839AFE6C;
	// bdzf 4*cr6+eq,0x839afe84
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839AFE84;
	// bdzf 4*cr6+eq,0x839afe9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839AFE9C;
	// bdzf 4*cr6+eq,0x839afeb4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839AFEB4;
	// bne cr6,0x839afecc
	if (!cr6.eq) goto loc_839AFECC;
	// bl 0x839aaa10
	ctx.lr = 0x839AFE04;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r3,62
	ctx.r3.s64 = 4063232;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839afe28
	if (cr6.eq) goto loc_839AFE28;
	// ori r3,r3,33
	ctx.r3.u64 = ctx.r3.u64 | 33;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839AFE28:
	// ori r3,r3,24
	ctx.r3.u64 = ctx.r3.u64 | 24;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839AFE3C:
	// lis r3,20
	ctx.r3.s64 = 1310720;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839AFE54:
	// lis r3,20
	ctx.r3.s64 = 1310720;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839AFE6C:
	// lis r3,20
	ctx.r3.s64 = 1310720;
	// ori r3,r3,30
	ctx.r3.u64 = ctx.r3.u64 | 30;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839AFE84:
	// lis r3,20
	ctx.r3.s64 = 1310720;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839AFE9C:
	// lis r3,20
	ctx.r3.s64 = 1310720;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839AFEB4:
	// lis r3,20
	ctx.r3.s64 = 1310720;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839AFECC:
	// lis r3,60
	ctx.r3.s64 = 3932160;
	// ori r3,r3,61
	ctx.r3.u64 = ctx.r3.u64 | 61;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839AFEE4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839AFEF8"))) PPC_WEAK_FUNC(sub_839AFEF8);
PPC_FUNC_IMPL(__imp__sub_839AFEF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// subfc r9,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r7,r10,30640
	ctx.r7.s64 = ctx.r10.s64 + 30640;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 & ctx.r3.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839AFF1C"))) PPC_WEAK_FUNC(sub_839AFF1C);
PPC_FUNC_IMPL(__imp__sub_839AFF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AFF20"))) PPC_WEAK_FUNC(sub_839AFF20);
PPC_FUNC_IMPL(__imp__sub_839AFF20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// subfc r9,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r7,r10,30656
	ctx.r7.s64 = ctx.r10.s64 + 30656;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 & ctx.r3.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839AFF44"))) PPC_WEAK_FUNC(sub_839AFF44);
PPC_FUNC_IMPL(__imp__sub_839AFF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AFF48"))) PPC_WEAK_FUNC(sub_839AFF48);
PPC_FUNC_IMPL(__imp__sub_839AFF48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,12
	ctx.r11.s64 = 12;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// subfc r9,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r7,r10,30672
	ctx.r7.s64 = ctx.r10.s64 + 30672;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 & ctx.r3.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839AFF6C"))) PPC_WEAK_FUNC(sub_839AFF6C);
PPC_FUNC_IMPL(__imp__sub_839AFF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AFF70"))) PPC_WEAK_FUNC(sub_839AFF70);
PPC_FUNC_IMPL(__imp__sub_839AFF70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x839aff80
	if (cr6.lt) goto loc_839AFF80;
loc_839AFF78:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_839AFF80:
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x839affac
	if (cr6.lt) goto loc_839AFFAC;
	// beq cr6,0x839affa0
	if (cr6.eq) goto loc_839AFFA0;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bge cr6,0x839aff78
	if (!cr6.lt) goto loc_839AFF78;
	// lis r3,108
	ctx.r3.s64 = 7077888;
	// ori r3,r3,56
	ctx.r3.u64 = ctx.r3.u64 | 56;
	// blr 
	return;
loc_839AFFA0:
	// lis r3,109
	ctx.r3.s64 = 7143424;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// blr 
	return;
loc_839AFFAC:
	// lis r3,109
	ctx.r3.s64 = 7143424;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839AFFB8"))) PPC_WEAK_FUNC(sub_839AFFB8);
PPC_FUNC_IMPL(__imp__sub_839AFFB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// blt cr6,0x839affcc
	if (cr6.lt) goto loc_839AFFCC;
	// lwz r3,25160(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25160);
	// blr 
	return;
loc_839AFFCC:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,25160
	ctx.r9.s64 = ctx.r11.s64 + 25160;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839AFFDC"))) PPC_WEAK_FUNC(sub_839AFFDC);
PPC_FUNC_IMPL(__imp__sub_839AFFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839AFFE0"))) PPC_WEAK_FUNC(sub_839AFFE0);
PPC_FUNC_IMPL(__imp__sub_839AFFE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// blt cr6,0x839afff4
	if (cr6.lt) goto loc_839AFFF4;
	// lwz r3,25176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25176);
	// blr 
	return;
loc_839AFFF4:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,25176
	ctx.r9.s64 = ctx.r11.s64 + 25176;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B0004"))) PPC_WEAK_FUNC(sub_839B0004);
PPC_FUNC_IMPL(__imp__sub_839B0004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B0008"))) PPC_WEAK_FUNC(sub_839B0008);
PPC_FUNC_IMPL(__imp__sub_839B0008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// blt cr6,0x839b001c
	if (cr6.lt) goto loc_839B001C;
	// lwz r3,25204(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25204);
	// blr 
	return;
loc_839B001C:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,25204
	ctx.r9.s64 = ctx.r11.s64 + 25204;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B002C"))) PPC_WEAK_FUNC(sub_839B002C);
PPC_FUNC_IMPL(__imp__sub_839B002C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B0030"))) PPC_WEAK_FUNC(sub_839B0030);
PPC_FUNC_IMPL(__imp__sub_839B0030) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,36
	cr6.compare<uint32_t>(ctx.r4.u32, 36, xer);
	// bgt cr6,0x839b02bc
	if (cr6.gt) goto loc_839B02BC;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,108
	ctx.r12.s64 = ctx.r12.s64 + 108;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_839B010C;
	case 1:
		goto loc_839B0118;
	case 2:
		goto loc_839B0124;
	case 3:
		goto loc_839B0148;
	case 4:
		goto loc_839B0154;
	case 5:
		goto loc_839B0160;
	case 6:
		goto loc_839B016C;
	case 7:
		goto loc_839B01B0;
	case 8:
		goto loc_839B01F4;
	case 9:
		goto loc_839B0200;
	case 10:
		goto loc_839B01A4;
	case 11:
		goto loc_839B01A4;
	case 12:
		goto loc_839B01A4;
	case 13:
		goto loc_839B01A4;
	case 14:
		goto loc_839B020C;
	case 15:
		goto loc_839B0218;
	case 16:
		goto loc_839B0218;
	case 17:
		goto loc_839B0218;
	case 18:
		goto loc_839B0100;
	case 19:
		goto loc_839B0270;
	case 20:
		goto loc_839B027C;
	case 21:
		goto loc_839B0270;
	case 22:
		goto loc_839B027C;
	case 23:
		goto loc_839B0234;
	case 24:
		goto loc_839B024C;
	case 25:
		goto loc_839B0258;
	case 26:
		goto loc_839B0264;
	case 27:
		goto loc_839B0240;
	case 28:
		goto loc_839B0240;
	case 29:
		goto loc_839B010C;
	case 30:
		goto loc_839B010C;
	case 31:
		goto loc_839B0288;
	case 32:
		goto loc_839B0294;
	case 33:
		goto loc_839B02A0;
	case 34:
		goto loc_839B02AC;
	case 35:
		goto loc_839B0118;
	case 36:
		goto loc_839B0118;
	default:
		return;
	}
	// lwz r28,268(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 268);
	// lwz r28,280(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 280);
	// lwz r28,292(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 292);
	// lwz r28,328(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 328);
	// lwz r28,340(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 340);
	// lwz r28,352(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 352);
	// lwz r28,364(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 364);
	// lwz r28,432(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 432);
	// lwz r28,500(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 500);
	// lwz r28,512(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 512);
	// lwz r28,420(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 420);
	// lwz r28,420(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 420);
	// lwz r28,420(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 420);
	// lwz r28,420(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 420);
	// lwz r28,524(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 524);
	// lwz r28,536(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 536);
	// lwz r28,536(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 536);
	// lwz r28,536(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 536);
	// lwz r28,256(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 256);
	// lwz r28,624(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 624);
	// lwz r28,636(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 636);
	// lwz r28,624(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 624);
	// lwz r28,636(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 636);
	// lwz r28,564(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 564);
	// lwz r28,588(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 588);
	// lwz r28,600(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 600);
	// lwz r28,612(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 612);
	// lwz r28,576(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 576);
	// lwz r28,576(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 576);
	// lwz r28,268(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 268);
	// lwz r28,268(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 268);
	// lwz r28,648(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 648);
	// lwz r28,660(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 660);
	// lwz r28,672(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 672);
	// lwz r28,684(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 684);
	// lwz r28,280(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 280);
	// lwz r28,280(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 280);
loc_839B0100:
	// lis r4,50
	ctx.r4.s64 = 3276800;
	// ori r4,r4,25
	ctx.r4.u64 = ctx.r4.u64 | 25;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B010C:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B0118:
	// lis r4,60
	ctx.r4.s64 = 3932160;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B0124:
	// bl 0x839aaa10
	ctx.lr = 0x839B0128;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b0140
	if (cr6.eq) goto loc_839B0140;
	// ori r4,r4,35
	ctx.r4.u64 = ctx.r4.u64 | 35;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B0140:
	// ori r4,r4,50
	ctx.r4.u64 = ctx.r4.u64 | 50;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B0148:
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,46
	ctx.r4.u64 = ctx.r4.u64 | 46;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B0154:
	// lis r4,19
	ctx.r4.s64 = 1245184;
	// ori r4,r4,64
	ctx.r4.u64 = ctx.r4.u64 | 64;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B0160:
	// lis r4,19
	ctx.r4.s64 = 1245184;
	// ori r4,r4,62
	ctx.r4.u64 = ctx.r4.u64 | 62;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B016C:
	// bl 0x8399f8b8
	ctx.lr = 0x839B0170;
	sub_8399F8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399fcc8
	ctx.lr = 0x839B0178;
	sub_8399FCC8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x839b0198
	if (cr6.lt) goto loc_839B0198;
	// beq cr6,0x839b018c
	if (cr6.eq) goto loc_839B018C;
loc_839B0184:
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B018C:
	// lis r4,61
	ctx.r4.s64 = 3997696;
	// ori r4,r4,132
	ctx.r4.u64 = ctx.r4.u64 | 132;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B0198:
	// lis r4,61
	ctx.r4.s64 = 3997696;
	// ori r4,r4,131
	ctx.r4.u64 = ctx.r4.u64 | 131;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B01A4:
	// lis r4,19
	ctx.r4.s64 = 1245184;
	// ori r4,r4,75
	ctx.r4.u64 = ctx.r4.u64 | 75;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B01B0:
	// bl 0x8399f8b8
	ctx.lr = 0x839B01B4;
	sub_8399F8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399f988
	ctx.lr = 0x839B01BC;
	sub_8399F988(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x839b01e8
	if (cr6.lt) goto loc_839B01E8;
	// beq cr6,0x839b01dc
	if (cr6.eq) goto loc_839B01DC;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bge cr6,0x839b0184
	if (!cr6.lt) goto loc_839B0184;
	// lis r4,19
	ctx.r4.s64 = 1245184;
	// ori r4,r4,68
	ctx.r4.u64 = ctx.r4.u64 | 68;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B01DC:
	// lis r4,19
	ctx.r4.s64 = 1245184;
	// ori r4,r4,67
	ctx.r4.u64 = ctx.r4.u64 | 67;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B01E8:
	// lis r4,19
	ctx.r4.s64 = 1245184;
	// ori r4,r4,66
	ctx.r4.u64 = ctx.r4.u64 | 66;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B01F4:
	// lis r4,17
	ctx.r4.s64 = 1114112;
	// ori r4,r4,18
	ctx.r4.u64 = ctx.r4.u64 | 18;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B0200:
	// lis r4,19
	ctx.r4.s64 = 1245184;
	// ori r4,r4,65
	ctx.r4.u64 = ctx.r4.u64 | 65;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B020C:
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,49
	ctx.r4.u64 = ctx.r4.u64 | 49;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B0218:
	// bl 0x8399f8b8
	ctx.lr = 0x839B021C;
	sub_8399F8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399fa70
	ctx.lr = 0x839B0224;
	sub_8399FA70(ctx, base);
	// bl 0x839ca918
	ctx.lr = 0x839B0228;
	sub_839CA918(ctx, base);
	// bl 0x839afdc8
	ctx.lr = 0x839B022C;
	sub_839AFDC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B0234:
	// lis r4,63
	ctx.r4.s64 = 4128768;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B0240:
	// lis r4,69
	ctx.r4.s64 = 4521984;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B024C:
	// lis r4,109
	ctx.r4.s64 = 7143424;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B0258:
	// lis r4,109
	ctx.r4.s64 = 7143424;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B0264:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,56
	ctx.r4.u64 = ctx.r4.u64 | 56;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B0270:
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,47
	ctx.r4.u64 = ctx.r4.u64 | 47;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B027C:
	// lis r4,990
	ctx.r4.s64 = 64880640;
	// ori r4,r4,567
	ctx.r4.u64 = ctx.r4.u64 | 567;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B0288:
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,51
	ctx.r4.u64 = ctx.r4.u64 | 51;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B0294:
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,52
	ctx.r4.u64 = ctx.r4.u64 | 52;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B02A0:
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,55
	ctx.r4.u64 = ctx.r4.u64 | 55;
	// b 0x839b02b4
	goto loc_839B02B4;
loc_839B02AC:
	// lis r4,66
	ctx.r4.s64 = 4325376;
	// ori r4,r4,76
	ctx.r4.u64 = ctx.r4.u64 | 76;
loc_839B02B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d042a8
	ctx.lr = 0x839B02BC;
	sub_82D042A8(ctx, base);
loc_839B02BC:
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

__attribute__((alias("__imp__sub_839B02D4"))) PPC_WEAK_FUNC(sub_839B02D4);
PPC_FUNC_IMPL(__imp__sub_839B02D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B02D8"))) PPC_WEAK_FUNC(sub_839B02D8);
PPC_FUNC_IMPL(__imp__sub_839B02D8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x830ff290
	ctx.lr = 0x839B02F8;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839B02FC;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x839b0330
	if (!cr6.eq) goto loc_839B0330;
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// subfc r9,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r7,r10,30720
	ctx.r7.s64 = ctx.r10.s64 + 30720;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// and r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 & ctx.r31.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// bl 0x82d042a8
	ctx.lr = 0x839B032C;
	sub_82D042A8(ctx, base);
	// b 0x839b0398
	goto loc_839B0398;
loc_839B0330:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x83150518
	ctx.lr = 0x839B0350;
	sub_83150518(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x839b0364
	if (!cr6.lt) goto loc_839B0364;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_839B0364:
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// ori r4,r4,54
	ctx.r4.u64 = ctx.r4.u64 | 54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d042a8
	ctx.lr = 0x839B0378;
	sub_82D042A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839b0398
	if (cr6.lt) goto loc_839B0398;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839B0398;
	sub_825952B8(ctx, base);
loc_839B0398:
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

__attribute__((alias("__imp__sub_839B03B0"))) PPC_WEAK_FUNC(sub_839B03B0);
PPC_FUNC_IMPL(__imp__sub_839B03B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r11,14
	ctx.r11.s64 = 14;
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// subfc r9,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r7,r10,25224
	ctx.r7.s64 = ctx.r10.s64 + 25224;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r4
	ctx.r5.u64 = ctx.r6.u64 & ctx.r4.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_839B03D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839b03d4
	if (!cr6.eq) goto loc_839B03D4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8259cc28
	sub_8259CC28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B03F4"))) PPC_WEAK_FUNC(sub_839B03F4);
PPC_FUNC_IMPL(__imp__sub_839B03F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B03F8"))) PPC_WEAK_FUNC(sub_839B03F8);
PPC_FUNC_IMPL(__imp__sub_839B03F8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,23
	cr6.compare<uint32_t>(ctx.r4.u32, 23, xer);
	// beq cr6,0x839b047c
	if (cr6.eq) goto loc_839B047C;
	// cmplwi cr6,r4,24
	cr6.compare<uint32_t>(ctx.r4.u32, 24, xer);
	// beq cr6,0x839b0470
	if (cr6.eq) goto loc_839B0470;
	// cmplwi cr6,r4,25
	cr6.compare<uint32_t>(ctx.r4.u32, 25, xer);
	// beq cr6,0x839b0464
	if (cr6.eq) goto loc_839B0464;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83160958
	ctx.lr = 0x839B0434;
	sub_83160958(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x839B0448;
	sub_8259CB28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x839B0450;
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
loc_839B0464:
	// lis r4,36
	ctx.r4.s64 = 2359296;
	// ori r4,r4,73
	ctx.r4.u64 = ctx.r4.u64 | 73;
	// b 0x839b0484
	goto loc_839B0484;
loc_839B0470:
	// lis r4,36
	ctx.r4.s64 = 2359296;
	// ori r4,r4,86
	ctx.r4.u64 = ctx.r4.u64 | 86;
	// b 0x839b0484
	goto loc_839B0484;
loc_839B047C:
	// lis r4,36
	ctx.r4.s64 = 2359296;
	// ori r4,r4,87
	ctx.r4.u64 = ctx.r4.u64 | 87;
loc_839B0484:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d042a8
	ctx.lr = 0x839B048C;
	sub_82D042A8(ctx, base);
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

__attribute__((alias("__imp__sub_839B04A0"))) PPC_WEAK_FUNC(sub_839B04A0);
PPC_FUNC_IMPL(__imp__sub_839B04A0) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x839b0528
	if (cr6.gt) goto loc_839B0528;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839b050c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B050C;
	// bdzf 4*cr6+eq,0x839b0528
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B0528;
	// bne cr6,0x839b0528
	if (!cr6.eq) goto loc_839B0528;
	// bl 0x82da1650
	ctx.lr = 0x839B04D8;
	sub_82DA1650(ctx, base);
	// bl 0x82da1620
	ctx.lr = 0x839B04DC;
	sub_82DA1620(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b0528
	if (!cr6.eq) goto loc_839B0528;
	// bl 0x82da1650
	ctx.lr = 0x839B04EC;
	sub_82DA1650(ctx, base);
	// bl 0x82da16c8
	ctx.lr = 0x839B04F0;
	sub_82DA16C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b0504
	if (!cr6.eq) goto loc_839B0504;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x839b0524
	goto loc_839B0524;
loc_839B0504:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_839B050C:
	// bl 0x82da1650
	ctx.lr = 0x839B0510;
	sub_82DA1650(ctx, base);
	// bl 0x82da1620
	ctx.lr = 0x839B0514;
	sub_82DA1620(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b0528
	if (!cr6.eq) goto loc_839B0528;
	// li r11,2
	ctx.r11.s64 = 2;
loc_839B0524:
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_839B0528:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x839b0540
	if (cr6.eq) goto loc_839B0540;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x839b0544
	if (!cr6.eq) goto loc_839B0544;
loc_839B0540:
	// li r11,1
	ctx.r11.s64 = 1;
loc_839B0544:
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

__attribute__((alias("__imp__sub_839B055C"))) PPC_WEAK_FUNC(sub_839B055C);
PPC_FUNC_IMPL(__imp__sub_839B055C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B0560"))) PPC_WEAK_FUNC(sub_839B0560);
PPC_FUNC_IMPL(__imp__sub_839B0560) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x839b0618
	if (cr6.gt) goto loc_839B0618;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839b05fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B05FC;
	// bdzf 4*cr6+eq,0x839b0618
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B0618;
	// bne cr6,0x839b0618
	if (!cr6.eq) goto loc_839B0618;
	// bl 0x82da1650
	ctx.lr = 0x839B0598;
	sub_82DA1650(ctx, base);
	// bl 0x82da1620
	ctx.lr = 0x839B059C;
	sub_82DA1620(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b0618
	if (!cr6.eq) goto loc_839B0618;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839b0610
	if (cr6.eq) goto loc_839B0610;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x839b0610
	if (cr6.eq) goto loc_839B0610;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x839b05d0
	if (!cr6.eq) goto loc_839B05D0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x839b0618
	goto loc_839B0618;
loc_839B05D0:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x839b0618
	if (!cr6.eq) goto loc_839B0618;
	// bl 0x82da1650
	ctx.lr = 0x839B05DC;
	sub_82DA1650(ctx, base);
	// bl 0x82da1588
	ctx.lr = 0x839B05E0;
	sub_82DA1588(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// b 0x839b0618
	goto loc_839B0618;
loc_839B05FC:
	// bl 0x82da1650
	ctx.lr = 0x839B0600;
	sub_82DA1650(ctx, base);
	// bl 0x82da1620
	ctx.lr = 0x839B0604;
	sub_82DA1620(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b0618
	if (!cr6.eq) goto loc_839B0618;
loc_839B0610:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_839B0618:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x839b0630
	if (cr6.eq) goto loc_839B0630;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x839b0634
	if (!cr6.eq) goto loc_839B0634;
loc_839B0630:
	// li r11,1
	ctx.r11.s64 = 1;
loc_839B0634:
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

__attribute__((alias("__imp__sub_839B064C"))) PPC_WEAK_FUNC(sub_839B064C);
PPC_FUNC_IMPL(__imp__sub_839B064C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B0650"))) PPC_WEAK_FUNC(sub_839B0650);
PPC_FUNC_IMPL(__imp__sub_839B0650) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B0670"))) PPC_WEAK_FUNC(sub_839B0670);
PPC_FUNC_IMPL(__imp__sub_839B0670) {
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
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bge cr6,0x839b06c4
	if (!cr6.lt) goto loc_839B06C4;
	// bl 0x839aa498
	ctx.lr = 0x839B0694;
	sub_839AA498(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x839B069C;
	sub_831156E8(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// mulli r10,r10,2800
	ctx.r10.s64 = ctx.r10.s64 * 2800;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x839b06c0
	if (!cr6.eq) goto loc_839B06C0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_839B06C0:
	// stb r10,704(r11)
	PPC_STORE_U8(ctx.r11.u32 + 704, ctx.r10.u8);
loc_839B06C4:
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

__attribute__((alias("__imp__sub_839B06DC"))) PPC_WEAK_FUNC(sub_839B06DC);
PPC_FUNC_IMPL(__imp__sub_839B06DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B06E0"))) PPC_WEAK_FUNC(sub_839B06E0);
PPC_FUNC_IMPL(__imp__sub_839B06E0) {
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
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bge cr6,0x839b0728
	if (!cr6.lt) goto loc_839B0728;
	// bl 0x839aa498
	ctx.lr = 0x839B0704;
	sub_839AA498(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x839B070C;
	sub_831156E8(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r10,r10,2800
	ctx.r10.s64 = ctx.r10.s64 * 2800;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,704(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 704);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x839b072c
	if (!cr6.eq) goto loc_839B072C;
loc_839B0728:
	// li r31,0
	ctx.r31.s64 = 0;
loc_839B072C:
	// bl 0x8399f8b8
	ctx.lr = 0x839B0730;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b0750
	if (cr6.eq) goto loc_839B0750;
	// bl 0x8399f8b8
	ctx.lr = 0x839B073C;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 & ctx.r31.u64;
loc_839B0750:
	// bl 0x839aaa10
	ctx.lr = 0x839B0754;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r31
	ctx.r3.u64 = ctx.r8.u64 & ctx.r31.u64;
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

__attribute__((alias("__imp__sub_839B077C"))) PPC_WEAK_FUNC(sub_839B077C);
PPC_FUNC_IMPL(__imp__sub_839B077C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B0780"))) PPC_WEAK_FUNC(sub_839B0780);
PPC_FUNC_IMPL(__imp__sub_839B0780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x839b07b0
	if (cr6.eq) goto loc_839B07B0;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x839b07a8
	if (cr6.eq) goto loc_839B07A8;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r10,3
	ctx.r10.s64 = 3;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
loc_839B07A8:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_839B07B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B07B8"))) PPC_WEAK_FUNC(sub_839B07B8);
PPC_FUNC_IMPL(__imp__sub_839B07B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839B07C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B07D4;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b0988
	if (cr6.eq) goto loc_839B0988;
	// bl 0x8399f8b8
	ctx.lr = 0x839B07E0;
	sub_8399F8B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8399fda0
	ctx.lr = 0x839B07EC;
	sub_8399FDA0(ctx, base);
	// lbz r11,156(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b090c
	if (cr6.eq) goto loc_839B090C;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,-3
	ctx.r29.s64 = ctx.r31.s64 + -3;
loc_839B0800:
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// bne cr6,0x839b0884
	if (!cr6.eq) goto loc_839B0884;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(ctx.r29.u32, 8, xer);
	// bgt cr6,0x839b08f8
	if (cr6.gt) goto loc_839B08F8;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x839b0844
	if (cr6.eq) goto loc_839B0844;
	// bdz 0x839b084c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B084C;
	// bdz 0x839b0854
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B0854;
	// bdz 0x839b085c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B085C;
	// bdz 0x839b083c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B083C;
	// bdz 0x839b0864
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B0864;
	// bdz 0x839b086c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B086C;
	// bdz 0x839b0874
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B0874;
	// b 0x839b087c
	goto loc_839B087C;
loc_839B083C:
	// li r31,17
	ctx.r31.s64 = 17;
	// b 0x839b08dc
	goto loc_839B08DC;
loc_839B0844:
	// li r31,15
	ctx.r31.s64 = 15;
	// b 0x839b08dc
	goto loc_839B08DC;
loc_839B084C:
	// li r31,6
	ctx.r31.s64 = 6;
	// b 0x839b08dc
	goto loc_839B08DC;
loc_839B0854:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x839b08dc
	goto loc_839B08DC;
loc_839B085C:
	// li r31,16
	ctx.r31.s64 = 16;
	// b 0x839b08dc
	goto loc_839B08DC;
loc_839B0864:
	// li r31,18
	ctx.r31.s64 = 18;
	// b 0x839b08dc
	goto loc_839B08DC;
loc_839B086C:
	// li r31,19
	ctx.r31.s64 = 19;
	// b 0x839b08dc
	goto loc_839B08DC;
loc_839B0874:
	// li r31,20
	ctx.r31.s64 = 20;
	// b 0x839b08dc
	goto loc_839B08DC;
loc_839B087C:
	// li r31,21
	ctx.r31.s64 = 21;
	// b 0x839b08dc
	goto loc_839B08DC;
loc_839B0884:
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(ctx.r29.u32, 8, xer);
	// bgt cr6,0x839b08f8
	if (cr6.gt) goto loc_839B08F8;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x839b08c0
	if (cr6.eq) goto loc_839B08C0;
	// bdz 0x839b084c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B084C;
	// bdz 0x839b0854
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B0854;
	// bdz 0x839b08c8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B08C8;
	// bdz 0x839b08b8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B08B8;
	// bdz 0x839b084c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B084C;
	// bdz 0x839b0854
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B0854;
	// bdz 0x839b08d0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B08D0;
	// b 0x839b08d8
	goto loc_839B08D8;
loc_839B08B8:
	// li r31,14
	ctx.r31.s64 = 14;
	// b 0x839b08dc
	goto loc_839B08DC;
loc_839B08C0:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x839b08dc
	goto loc_839B08DC;
loc_839B08C8:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x839b08dc
	goto loc_839B08DC;
loc_839B08D0:
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x839b08dc
	goto loc_839B08DC;
loc_839B08D8:
	// li r31,4
	ctx.r31.s64 = 4;
loc_839B08DC:
	// bl 0x8399f8b8
	ctx.lr = 0x839B08E0;
	sub_8399F8B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8399f988
	ctx.lr = 0x839B08E8;
	sub_8399F988(ctx, base);
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83155950
	ctx.lr = 0x839B08F8;
	sub_83155950(ctx, base);
loc_839B08F8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x839b0800
	if (cr6.lt) goto loc_839B0800;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839B090C:
	// addi r11,r31,-3
	ctx.r11.s64 = ctx.r31.s64 + -3;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x839b0988
	if (cr6.gt) goto loc_839B0988;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839b094c
	if (cr6.eq) goto loc_839B094C;
	// bdz 0x839b0954
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B0954;
	// bdz 0x839b095c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B095C;
	// bdz 0x839b0964
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B0964;
	// bdz 0x839b0944
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B0944;
	// bdz 0x839b0954
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B0954;
	// bdz 0x839b095c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B095C;
	// bdz 0x839b096c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B096C;
	// b 0x839b0974
	goto loc_839B0974;
loc_839B0944:
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x839b0978
	goto loc_839B0978;
loc_839B094C:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x839b0978
	goto loc_839B0978;
loc_839B0954:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x839b0978
	goto loc_839B0978;
loc_839B095C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x839b0978
	goto loc_839B0978;
loc_839B0964:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x839b0978
	goto loc_839B0978;
loc_839B096C:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x839b0978
	goto loc_839B0978;
loc_839B0974:
	// li r11,4
	ctx.r11.s64 = 4;
loc_839B0978:
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83155950
	ctx.lr = 0x839B0988;
	sub_83155950(ctx, base);
loc_839B0988:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B0990"))) PPC_WEAK_FUNC(sub_839B0990);
PPC_FUNC_IMPL(__imp__sub_839B0990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839B0998;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r10,r10,31440
	ctx.r10.s64 = ctx.r10.s64 + 31440;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_839B09BC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_839B09C0:
	// lbzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x839b09e0
	if (cr6.lt) goto loc_839B09E0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839ca988
	ctx.lr = 0x839B09E0;
	sub_839CA988(ctx, base);
loc_839B09E0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// blt cr6,0x839b09c0
	if (cr6.lt) goto loc_839B09C0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x839b09bc
	if (cr6.lt) goto loc_839B09BC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B0A04"))) PPC_WEAK_FUNC(sub_839B0A04);
PPC_FUNC_IMPL(__imp__sub_839B0A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B0A08"))) PPC_WEAK_FUNC(sub_839B0A08);
PPC_FUNC_IMPL(__imp__sub_839B0A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839B0A10;
	__savegprlr_24(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B0A34;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399f988
	ctx.lr = 0x839B0A3C;
	sub_8399F988(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,160
	ctx.r5.s64 = 160;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x839B0A50;
	sub_831CE980(ctx, base);
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bne cr6,0x839b0a88
	if (!cr6.eq) goto loc_839B0A88;
	// bl 0x8399f8b8
	ctx.lr = 0x839B0A5C;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// clrlwi r6,r24,24
	ctx.r6.u64 = ctx.r24.u32 & 0xFF;
	// bl 0x8399feb8
	ctx.lr = 0x839B0A70;
	sub_8399FEB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82abfda0
	ctx.lr = 0x839B0A7C;
	sub_82ABFDA0(ctx, base);
	// lbz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 252);
	// stb r11,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r11.u8);
	// b 0x839b0af4
	goto loc_839B0AF4;
loc_839B0A88:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x839b0af4
	if (cr6.eq) goto loc_839B0AF4;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// beq cr6,0x839b0af4
	if (cr6.eq) goto loc_839B0AF4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839b07b8
	ctx.lr = 0x839B0AA8;
	sub_839B07B8(ctx, base);
	// lbz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 252);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839b0ad8
	if (cr6.eq) goto loc_839B0AD8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_839B0AB8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839a8988
	ctx.lr = 0x839B0AC8;
	sub_839A8988(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x839b0ab8
	if (cr6.lt) goto loc_839B0AB8;
	// b 0x839b0ae8
	goto loc_839B0AE8;
loc_839B0AD8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839a8988
	ctx.lr = 0x839B0AE8;
	sub_839A8988(ctx, base);
loc_839B0AE8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b0990
	ctx.lr = 0x839B0AF4;
	sub_839B0990(ctx, base);
loc_839B0AF4:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subfc r9,r11,r27
	xer.ca = ctx.r27.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r27.s64 - ctx.r11.s64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// and r4,r6,r27
	ctx.r4.u64 = ctx.r6.u64 & ctx.r27.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stb r29,46(r26)
	PPC_STORE_U8(ctx.r26.u32 + 46, ctx.r29.u8);
	// beq cr6,0x839b0b64
	if (cr6.eq) goto loc_839B0B64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B0B3C;
	sub_8399F8B8(ctx, base);
	// addi r11,r30,1028
	ctx.r11.s64 = ctx.r30.s64 + 1028;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r5,r10,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x839a8390
	ctx.lr = 0x839B0B64;
	sub_839A8390(ctx, base);
loc_839B0B64:
	// bl 0x8399f8b8
	ctx.lr = 0x839B0B68;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399f950
	ctx.lr = 0x839B0B70;
	sub_8399F950(ctx, base);
	// cmplw cr6,r3,r24
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, xer);
	// bne cr6,0x839b0bb4
	if (!cr6.eq) goto loc_839B0BB4;
	// bl 0x8399f8b8
	ctx.lr = 0x839B0B7C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// bl 0x8399f8b8
	ctx.lr = 0x839B0B8C;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399f950
	ctx.lr = 0x839B0B94;
	sub_8399F950(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x8399ed80
	ctx.lr = 0x839B0BA8;
	sub_8399ED80(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399ee10
	ctx.lr = 0x839B0BB4;
	sub_8399EE10(ctx, base);
loc_839B0BB4:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B0BBC"))) PPC_WEAK_FUNC(sub_839B0BBC);
PPC_FUNC_IMPL(__imp__sub_839B0BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B0BC0"))) PPC_WEAK_FUNC(sub_839B0BC0);
PPC_FUNC_IMPL(__imp__sub_839B0BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bgt cr6,0x839b0c74
	if (cr6.gt) goto loc_839B0C74;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,3040
	ctx.r12.s64 = ctx.r12.s64 + 3040;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_839B0C74;
	case 1:
		goto loc_839B0C14;
	case 2:
		goto loc_839B0C1C;
	case 3:
		goto loc_839B0C24;
	case 4:
		goto loc_839B0C2C;
	case 5:
		goto loc_839B0C34;
	case 6:
		goto loc_839B0C3C;
	case 7:
		goto loc_839B0C44;
	case 8:
		goto loc_839B0C4C;
	case 9:
		goto loc_839B0C54;
	case 10:
		goto loc_839B0C5C;
	case 11:
		goto loc_839B0C64;
	case 12:
		goto loc_839B0C6C;
	default:
		return;
	}
	// lwz r28,3188(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3188);
	// lwz r28,3092(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3092);
	// lwz r28,3100(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3100);
	// lwz r28,3108(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3108);
	// lwz r28,3116(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3116);
	// lwz r28,3124(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3124);
	// lwz r28,3132(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3132);
	// lwz r28,3140(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3140);
	// lwz r28,3148(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3148);
	// lwz r28,3156(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3156);
	// lwz r28,3164(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3164);
	// lwz r28,3172(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3172);
	// lwz r28,3180(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3180);
loc_839B0C14:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_839B0C1C:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_839B0C24:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_839B0C2C:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_839B0C34:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_839B0C3C:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_839B0C44:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_839B0C4C:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_839B0C54:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_839B0C5C:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_839B0C64:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_839B0C6C:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_839B0C74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

