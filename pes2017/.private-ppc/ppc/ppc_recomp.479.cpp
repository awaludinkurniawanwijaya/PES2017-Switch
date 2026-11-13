#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_839886B4"))) PPC_WEAK_FUNC(sub_839886B4);
PPC_FUNC_IMPL(__imp__sub_839886B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839886B8"))) PPC_WEAK_FUNC(sub_839886B8);
PPC_FUNC_IMPL(__imp__sub_839886B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839886C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83988734
	if (!cr6.eq) goto loc_83988734;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839886f8
	if (cr6.eq) goto loc_839886F8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// b 0x83988730
	goto loc_83988730;
loc_839886F8:
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83988710;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398872c
	if (cr6.eq) goto loc_8398872C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x83988730
	goto loc_83988730;
loc_8398872C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83988730:
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_83988734:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83988380
	ctx.lr = 0x8398874C;
	sub_83988380(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83988754"))) PPC_WEAK_FUNC(sub_83988754);
PPC_FUNC_IMPL(__imp__sub_83988754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83988758"))) PPC_WEAK_FUNC(sub_83988758);
PPC_FUNC_IMPL(__imp__sub_83988758) {
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
	// lis r10,-31742
	ctx.r10.s64 = -2080243712;
	// lwz r31,-31408(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31408);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839887b0
	if (cr6.eq) goto loc_839887B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r11,-31408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31408, ctx.r11.u32);
	// beq cr6,0x839887b0
	if (cr6.eq) goto loc_839887B0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83988798;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83988228
	ctx.lr = 0x839887A0;
	sub_83988228(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x839887A8;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x839887B0;
	sub_82595170(ctx, base);
loc_839887B0:
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

__attribute__((alias("__imp__sub_839887C4"))) PPC_WEAK_FUNC(sub_839887C4);
PPC_FUNC_IMPL(__imp__sub_839887C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839887C8"))) PPC_WEAK_FUNC(sub_839887C8);
PPC_FUNC_IMPL(__imp__sub_839887C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839887D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8398a668
	ctx.lr = 0x839887EC;
	sub_8398A668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398888c
	if (cr6.eq) goto loc_8398888C;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r29,r27,8
	ctx.r29.s64 = ctx.r27.s64 + 8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x83988814;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398888c
	if (cr6.eq) goto loc_8398888C;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// beq cr6,0x8398884c
	if (cr6.eq) goto loc_8398884C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8398884c
	if (cr6.eq) goto loc_8398884C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x831ce980
	ctx.lr = 0x8398884C;
	sub_831CE980(ctx, base);
loc_8398884C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839886b8
	ctx.lr = 0x83988860;
	sub_839886B8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r11,36932
	ctx.r8.u64 = ctx.r11.u64 | 36932;
	// ori r7,r10,36936
	ctx.r7.u64 = ctx.r10.u64 | 36936;
	// ori r6,r9,36940
	ctx.r6.u64 = ctx.r9.u64 | 36940;
	// li r5,1
	ctx.r5.s64 = 1;
	// stwx r31,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r31.u32);
	// stwx r26,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r26.u32);
	// stwx r29,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r29.u32);
	// stw r5,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r5.u32);
loc_8398888C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83988894"))) PPC_WEAK_FUNC(sub_83988894);
PPC_FUNC_IMPL(__imp__sub_83988894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83988898"))) PPC_WEAK_FUNC(sub_83988898);
PPC_FUNC_IMPL(__imp__sub_83988898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839888A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8398893c
	if (!cr6.eq) goto loc_8398893C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x839888ec
	if (!cr6.eq) goto loc_839888EC;
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x839887c8
	ctx.lr = 0x839888E4;
	sub_839887C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839888EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// beq cr6,0x83988930
	if (cr6.eq) goto loc_83988930;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83988914;
	sub_82595718(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x83988924;
	sub_831CE980(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83988930:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8398893C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83988944"))) PPC_WEAK_FUNC(sub_83988944);
PPC_FUNC_IMPL(__imp__sub_83988944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83988948"))) PPC_WEAK_FUNC(sub_83988948);
PPC_FUNC_IMPL(__imp__sub_83988948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83988950;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8398a888
	ctx.lr = 0x8398896C;
	sub_8398A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398899c
	if (cr6.eq) goto loc_8398899C;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,336(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83988994;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8398899C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83988898
	ctx.lr = 0x839889B8;
	sub_83988898(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839889C0"))) PPC_WEAK_FUNC(sub_839889C0);
PPC_FUNC_IMPL(__imp__sub_839889C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x839889C8;
	__savegprlr_22(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83989198
	if (cr6.eq) goto loc_83989198;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// bl 0x8398a668
	ctx.lr = 0x839889E8;
	sub_8398A668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83989198
	if (cr6.eq) goto loc_83989198;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x8398a888
	ctx.lr = 0x839889FC;
	sub_8398A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83989198
	if (!cr6.eq) goto loc_83989198;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x839891b4
	if (cr6.eq) goto loc_839891B4;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// bne cr6,0x839891b4
	if (!cr6.eq) goto loc_839891B4;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x8398918c
	if (cr6.gt) goto loc_8398918C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8398918c
	if (cr6.eq) goto loc_8398918C;
	// bdz 0x83988a50
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83988A50;
	// bdz 0x83988b20
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83988B20;
	// bdz 0x83988cb4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83988CB4;
	// bdz 0x83988d74
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83988D74;
	// b 0x83988f34
	goto loc_83988F34;
loc_83988A50:
	// addis r28,r30,2
	ctx.r28.s64 = ctx.r30.s64 + 131072;
	// addi r28,r28,-28604
	ctx.r28.s64 = ctx.r28.s64 + -28604;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83988ca0
	if (cr6.eq) goto loc_83988CA0;
	// addis r29,r30,2
	ctx.r29.s64 = ctx.r30.s64 + 131072;
	// addi r29,r29,-28596
	ctx.r29.s64 = ctx.r29.s64 + -28596;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,5000
	cr6.compare<uint32_t>(ctx.r11.u32, 5000, xer);
	// ble cr6,0x83988ca0
	if (!cr6.gt) goto loc_83988CA0;
	// addis r31,r30,2
	ctx.r31.s64 = ctx.r30.s64 + 131072;
	// addi r31,r31,-28592
	ctx.r31.s64 = ctx.r31.s64 + -28592;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83988adc
	if (cr6.eq) goto loc_83988ADC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83988A9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83988ad0
	if (cr6.eq) goto loc_83988AD0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83988ABC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83988AD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83988AD0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83b4b558
	ctx.lr = 0x83988AD8;
	sub_83B4B558(ctx, base);
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
loc_83988ADC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// bl 0x835265a8
	ctx.lr = 0x83988B00;
	sub_835265A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398918c
	if (cr6.eq) goto loc_8398918C;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83988B20:
	// addis r29,r30,2
	ctx.r29.s64 = ctx.r30.s64 + 131072;
	// addi r29,r29,-28592
	ctx.r29.s64 = ctx.r29.s64 + -28592;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83988ca0
	if (cr6.eq) goto loc_83988CA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83988B44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8398918c
	if (!cr6.eq) goto loc_8398918C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addis r24,r30,2
	ctx.r24.s64 = ctx.r30.s64 + 131072;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// addi r24,r24,-28596
	ctx.r24.s64 = ctx.r24.s64 + -28596;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r25,r11,-8
	ctx.r25.s64 = ctx.r11.s64 + -8;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83988B7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83988bfc
	if (!cr6.eq) goto loc_83988BFC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83988B98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrldi r28,r3,32
	ctx.r28.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r28,0
	cr6.compare<uint64_t>(ctx.r28.u64, 0, xer);
	// ble cr6,0x83988bfc
	if (!cr6.gt) goto loc_83988BFC;
	// li r11,32
	ctx.r11.s64 = 32;
	// rotlwi r27,r28,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r26,r27,8
	ctx.r26.s64 = ctx.r27.s64 + 8;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82595718
	ctx.lr = 0x83988BC4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83988bfc
	if (cr6.eq) goto loc_83988BFC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83988BE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x831ce980
	ctx.lr = 0x83988BF4;
	sub_831CE980(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
loc_83988BFC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83b4b558
	ctx.lr = 0x83988C04;
	sub_83B4B558(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// cmpldi cr6,r28,0
	cr6.compare<uint64_t>(ctx.r28.u64, 0, xer);
	// beq cr6,0x83988c2c
	if (cr6.eq) goto loc_83988C2C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83988c2c
	if (cr6.eq) goto loc_83988C2C;
	// clrldi r10,r25,32
	ctx.r10.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// cmpld cr6,r28,r10
	cr6.compare<uint64_t>(ctx.r28.u64, ctx.r10.u64, xer);
	// bge cr6,0x83988c2c
	if (!cr6.lt) goto loc_83988C2C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83988C2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83988c88
	if (cr6.eq) goto loc_83988C88;
	// addis r29,r30,2
	ctx.r29.s64 = ctx.r30.s64 + 131072;
	// addi r29,r29,-28604
	ctx.r29.s64 = ctx.r29.s64 + -28604;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83988c58
	if (cr6.eq) goto loc_83988C58;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x83988C58;
	sub_825952B8(ctx, base);
loc_83988C58:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// rotlwi r11,r28,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// ori r9,r10,36936
	ctx.r9.u64 = ctx.r10.u64 | 36936;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r8,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// stwx r23,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r23.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83988C88:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83988ca0
	if (cr6.eq) goto loc_83988CA0;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x83988CA0;
	sub_825952B8(ctx, base);
loc_83988CA0:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83988CB4:
	// addis r27,r30,2
	ctx.r27.s64 = ctx.r30.s64 + 131072;
	// addis r28,r30,2
	ctx.r28.s64 = ctx.r30.s64 + 131072;
	// addis r31,r30,2
	ctx.r31.s64 = ctx.r30.s64 + 131072;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// addi r27,r27,-28604
	ctx.r27.s64 = ctx.r27.s64 + -28604;
	// addi r28,r28,-28596
	ctx.r28.s64 = ctx.r28.s64 + -28596;
	// addi r31,r31,-28600
	ctx.r31.s64 = ctx.r31.s64 + -28600;
loc_83988CD0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r29,r10,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(ctx.r29.u32, 16, xer);
	// bgt cr6,0x83988cec
	if (cr6.gt) goto loc_83988CEC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_83988CEC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8398a790
	ctx.lr = 0x83988CFC;
	sub_8398A790(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83988d74
	if (cr6.eq) goto loc_83988D74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(ctx.r29.u32, 16, xer);
	// ble cr6,0x83988d1c
	if (!cr6.gt) goto loc_83988D1C;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x83988d20
	goto loc_83988D20;
loc_83988D1C:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_83988D20:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83988d48
	if (cr6.eq) goto loc_83988D48;
	// bgt cr6,0x83988d74
	if (cr6.gt) goto loc_83988D74;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r26,100
	cr6.compare<uint32_t>(ctx.r26.u32, 100, xer);
	// blt cr6,0x83988cd0
	if (cr6.lt) goto loc_83988CD0;
	// b 0x83988d74
	goto loc_83988D74;
loc_83988D48:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83988d60
	if (cr6.eq) goto loc_83988D60;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x83988D60;
	sub_825952B8(ctx, base);
loc_83988D60:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r23,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r23.u32);
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// stw r23,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r23.u32);
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
loc_83988D74:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x8398a668
	ctx.lr = 0x83988D80;
	sub_8398A668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398918c
	if (cr6.eq) goto loc_8398918C;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r31,r30,68
	ctx.r31.s64 = ctx.r30.s64 + 68;
loc_83988D94:
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r6,r6,36864
	ctx.r6.u64 = ctx.r6.u64 | 36864;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// bl 0x8398a7a8
	ctx.lr = 0x83988DAC;
	sub_8398A7A8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83988de4
	if (cr6.eq) goto loc_83988DE4;
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// beq cr6,0x83988dd8
	if (cr6.eq) goto loc_83988DD8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839886b8
	ctx.lr = 0x83988DD8;
	sub_839886B8(ctx, base);
loc_83988DD8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,100
	cr6.compare<uint32_t>(ctx.r29.u32, 100, xer);
	// blt cr6,0x83988d94
	if (cr6.lt) goto loc_83988D94;
loc_83988DE4:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398918c
	if (cr6.eq) goto loc_8398918C;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r23.u32);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x8398c960
	ctx.lr = 0x83988E0C;
	sub_8398C960(ctx, base);
	// lis r10,-31742
	ctx.r10.s64 = -2080243712;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// subf. r8,r4,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lwz r11,-31032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31032);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-31032(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31032, ctx.r11.u32);
	// beq 0x83988f0c
	if (cr0.eq) goto loc_83988F0C;
loc_83988E30:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// lbzx r10,r4,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r27.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x83988ee4
	if (!cr6.gt) goto loc_83988EE4;
	// clrlwi r28,r10,24
	ctx.r28.u64 = ctx.r10.u32 & 0xFF;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_83988E54:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// bne cr6,0x83988ec0
	if (!cr6.eq) goto loc_83988EC0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83988e90
	if (!cr6.eq) goto loc_83988E90;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83988e90
	if (!cr6.eq) goto loc_83988E90;
	// bl 0x83987d40
	ctx.lr = 0x83988E90;
	sub_83987D40(ctx, base);
loc_83988E90:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x83988ec0
	if (!cr6.eq) goto loc_83988EC0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x83988edc
	if (cr6.eq) goto loc_83988EDC;
loc_83988EC0:
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// blt cr6,0x83988e54
	if (cr6.lt) goto loc_83988E54;
	// b 0x83988ee0
	goto loc_83988EE0;
loc_83988EDC:
	// li r26,1
	ctx.r26.s64 = 1;
loc_83988EE0:
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_83988EE4:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83988f08
	if (cr6.eq) goto loc_83988F08;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// blt cr6,0x83988e30
	if (cr6.lt) goto loc_83988E30;
	// b 0x83988f0c
	goto loc_83988F0C;
loc_83988F08:
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_83988F0C:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x83988fb4
	if (!cr6.eq) goto loc_83988FB4;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83988fb4
	if (cr6.eq) goto loc_83988FB4;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// bl 0x82f73d60
	ctx.lr = 0x83988F34;
	sub_82F73D60(ctx, base);
loc_83988F34:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839890fc
	if (cr6.eq) goto loc_839890FC;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x8398c960
	ctx.lr = 0x83988F58;
	sub_8398C960(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x839890d8
	if (!cr6.gt) goto loc_839890D8;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_83988F74:
	// lwz r8,60(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// subf. r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// beq 0x83988fdc
	if (cr0.eq) goto loc_83988FDC;
loc_83988F98:
	// lbzx r5,r4,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// beq cr6,0x83988fd8
	if (cr6.eq) goto loc_83988FD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83988f98
	if (cr6.lt) goto loc_83988F98;
	// b 0x83988fdc
	goto loc_83988FDC;
loc_83988FB4:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398918c
	if (cr6.eq) goto loc_8398918C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83988FCC;
	sub_825952B8(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83988FD8:
	// li r6,1
	ctx.r6.s64 = 1;
loc_83988FDC:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839890c0
	if (!cr6.eq) goto loc_839890C0;
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398901c
	if (cr6.eq) goto loc_8398901C;
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x825952b8
	ctx.lr = 0x8398900C;
	sub_825952B8(ctx, base);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r23,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r23.u32);
loc_8398901C:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x8398907c
	if (!cr6.lt) goto loc_8398907C;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_83989038:
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r11,7
	ctx.r11.s64 = 7;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_83989054:
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83989054
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83989054;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x83989038
	if (cr6.lt) goto loc_83989038;
loc_8398907C:
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r10,r8,28
	ctx.r10.s64 = ctx.r8.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_839890A0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x839890a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839890A0;
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x839890c8
	goto loc_839890C8;
loc_839890C0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
loc_839890C8:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x83988f74
	if (cr6.lt) goto loc_83988F74;
loc_839890D8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839890f0
	if (cr6.eq) goto loc_839890F0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839890F0;
	sub_825952B8(ctx, base);
loc_839890F0:
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
loc_839890FC:
	// lwz r22,60(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r23,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r23.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r23,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r23.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83989114:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83989140
	if (!cr6.eq) goto loc_83989140;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// blt cr6,0x83989114
	if (cr6.lt) goto loc_83989114;
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83989140:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x839887c8
	ctx.lr = 0x83989160;
	sub_839887C8(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83989178
	if (cr6.eq) goto loc_83989178;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x83989178;
	sub_825952B8(ctx, base);
loc_83989178:
	// stb r23,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r23.u8);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r23,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
	// stw r23,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
loc_8398918C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83989198:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,336(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839891B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839891B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839891C0"))) PPC_WEAK_FUNC(sub_839891C0);
PPC_FUNC_IMPL(__imp__sub_839891C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839891C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8398a668
	ctx.lr = 0x839891DC;
	sub_8398A668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83989228
	if (cr6.eq) goto loc_83989228;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8398a888
	ctx.lr = 0x839891F0;
	sub_8398A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83989228
	if (!cr6.eq) goto loc_83989228;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83989234
	if (cr6.lt) goto loc_83989234;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bge cr6,0x83989294
	if (!cr6.lt) goto loc_83989294;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839889c0
	ctx.lr = 0x8398921C;
	sub_839889C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83989294
	if (cr6.eq) goto loc_83989294;
	// bl 0x838336b8
	ctx.lr = 0x83989228;
	sub_838336B8(ctx, base);
loc_83989228:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83989234:
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r6,r6,36864
	ctx.r6.u64 = ctx.r6.u64 | 36864;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8398a7a8
	ctx.lr = 0x83989250;
	sub_8398A7A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83989294
	if (cr6.eq) goto loc_83989294;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83988948
	ctx.lr = 0x83989270;
	sub_83988948(ctx, base);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x83989294
	if (cr6.eq) goto loc_83989294;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839886b8
	ctx.lr = 0x83989294;
	sub_839886B8(ctx, base);
loc_83989294:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839892A0"))) PPC_WEAK_FUNC(sub_839892A0);
PPC_FUNC_IMPL(__imp__sub_839892A0) {
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
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839892e4
	if (!cr6.eq) goto loc_839892E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,86
	cr6.compare<int32_t>(ctx.r11.s32, 86, xer);
	// bgt cr6,0x83989374
	if (cr6.gt) goto loc_83989374;
	// beq cr6,0x839892e4
	if (cr6.eq) goto loc_839892E4;
	// cmpwi cr6,r11,39
	cr6.compare<int32_t>(ctx.r11.s32, 39, xer);
	// bgt cr6,0x839892f8
	if (cr6.gt) goto loc_839892F8;
	// beq cr6,0x83989318
	if (cr6.eq) goto loc_83989318;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x839892e4
	if (cr6.eq) goto loc_839892E4;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x83989400
	if (!cr6.eq) goto loc_83989400;
loc_839892E4:
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
loc_839892F8:
	// cmpwi cr6,r11,85
	cr6.compare<int32_t>(ctx.r11.s32, 85, xer);
	// bgt cr6,0x83989400
	if (cr6.gt) goto loc_83989400;
	// cmpwi cr6,r11,76
	cr6.compare<int32_t>(ctx.r11.s32, 76, xer);
	// bge cr6,0x8398932c
	if (!cr6.lt) goto loc_8398932C;
	// cmpwi cr6,r11,41
	cr6.compare<int32_t>(ctx.r11.s32, 41, xer);
	// blt cr6,0x83989400
	if (cr6.lt) goto loc_83989400;
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(ctx.r11.s32, 42, xer);
	// bgt cr6,0x83989400
	if (cr6.gt) goto loc_83989400;
loc_83989318:
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
loc_8398932C:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839892e4
	if (!cr6.eq) goto loc_839892E4;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83989360
	if (cr6.eq) goto loc_83989360;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,16300
	ctx.r11.s64 = ctx.r11.s64 + 16300;
	// addi r3,r11,-36
	ctx.r3.s64 = ctx.r11.s64 + -36;
	// bl 0x83523fd8
	ctx.lr = 0x83989358;
	sub_83523FD8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83989400
	if (!cr6.eq) goto loc_83989400;
loc_83989360:
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
loc_83989374:
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bgt cr6,0x83989400
	if (cr6.gt) goto loc_83989400;
	// lis r12,-31847
	ctx.r12.s64 = -2087124992;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27752
	ctx.r12.s64 = ctx.r12.s64 + -27752;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_839893DC;
	case 1:
		goto loc_83989400;
	case 2:
		goto loc_83989400;
	case 3:
		goto loc_83989400;
	case 4:
		goto loc_83989400;
	case 5:
		goto loc_83989400;
	case 6:
		goto loc_839892E4;
	case 7:
		goto loc_839892E4;
	case 8:
		goto loc_839892E4;
	case 9:
		goto loc_839892E4;
	case 10:
		goto loc_839892E4;
	case 11:
		goto loc_839892E4;
	case 12:
		goto loc_839892E4;
	case 13:
		goto loc_839892E4;
	case 14:
		goto loc_839892E4;
	case 15:
		goto loc_83989400;
	case 16:
		goto loc_839892E4;
	default:
		return;
	}
	// lwz r28,-27684(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27684);
	// lwz r28,-27648(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27648);
	// lwz r28,-27648(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27648);
	// lwz r28,-27648(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27648);
	// lwz r28,-27648(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27648);
	// lwz r28,-27648(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27648);
	// lwz r28,-27932(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27932);
	// lwz r28,-27932(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27932);
	// lwz r28,-27932(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27932);
	// lwz r28,-27932(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27932);
	// lwz r28,-27932(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27932);
	// lwz r28,-27932(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27932);
	// lwz r28,-27932(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27932);
	// lwz r28,-27932(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27932);
	// lwz r28,-27932(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27932);
	// lwz r28,-27648(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27648);
	// lwz r28,-27932(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27932);
loc_839893DC:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83989318
	if (cr6.eq) goto loc_83989318;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,16300
	ctx.r3.s64 = ctx.r11.s64 + 16300;
	// bl 0x83523fd8
	ctx.lr = 0x839893F8;
	sub_83523FD8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83989318
	if (cr6.eq) goto loc_83989318;
loc_83989400:
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

__attribute__((alias("__imp__sub_83989414"))) PPC_WEAK_FUNC(sub_83989414);
PPC_FUNC_IMPL(__imp__sub_83989414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83989418"))) PPC_WEAK_FUNC(sub_83989418);
PPC_FUNC_IMPL(__imp__sub_83989418) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839892a0
	ctx.lr = 0x8398943C;
	sub_839892A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83989450
	if (cr6.eq) goto loc_83989450;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83989704
	goto loc_83989704;
loc_83989450:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83999ba0
	ctx.lr = 0x83989460;
	sub_83999BA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83989474
	if (cr6.eq) goto loc_83989474;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x83989704
	goto loc_83989704;
loc_83989474:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,100
	ctx.r11.s64 = 100;
	// cmplwi cr6,r10,110
	cr6.compare<uint32_t>(ctx.r10.u32, 110, xer);
	// bgt cr6,0x839896a4
	if (cr6.gt) goto loc_839896A4;
	// lis r12,-31847
	ctx.r12.s64 = -2087124992;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27492
	ctx.r12.s64 = ctx.r12.s64 + -27492;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_83989658;
	case 1:
		goto loc_83989688;
	case 2:
		goto loc_83989688;
	case 3:
		goto loc_83989668;
	case 4:
		goto loc_83989668;
	case 5:
		goto loc_83989668;
	case 6:
		goto loc_83989668;
	case 7:
		goto loc_83989668;
	case 8:
		goto loc_83989670;
	case 9:
		goto loc_83989660;
	case 10:
		goto loc_839896A4;
	case 11:
		goto loc_83989678;
	case 12:
		goto loc_83989678;
	case 13:
		goto loc_83989678;
	case 14:
		goto loc_83989678;
	case 15:
		goto loc_83989678;
	case 16:
		goto loc_839896A4;
	case 17:
		goto loc_83989668;
	case 18:
		goto loc_83989668;
	case 19:
		goto loc_83989668;
	case 20:
		goto loc_83989688;
	case 21:
		goto loc_83989688;
	case 22:
		goto loc_83989668;
	case 23:
		goto loc_83989688;
	case 24:
		goto loc_83989688;
	case 25:
		goto loc_83989658;
	case 26:
		goto loc_83989678;
	case 27:
		goto loc_83989698;
	case 28:
		goto loc_83989670;
	case 29:
		goto loc_83989698;
	case 30:
		goto loc_83989680;
	case 31:
		goto loc_83989668;
	case 32:
		goto loc_83989668;
	case 33:
		goto loc_83989668;
	case 34:
		goto loc_83989668;
	case 35:
		goto loc_83989668;
	case 36:
		goto loc_83989660;
	case 37:
		goto loc_83989660;
	case 38:
		goto loc_83989678;
	case 39:
		goto loc_839896A4;
	case 40:
		goto loc_83989680;
	case 41:
		goto loc_839896A4;
	case 42:
		goto loc_839896A4;
	case 43:
		goto loc_83989698;
	case 44:
		goto loc_83989668;
	case 45:
		goto loc_83989658;
	case 46:
		goto loc_83989678;
	case 47:
		goto loc_83989660;
	case 48:
		goto loc_83989660;
	case 49:
		goto loc_83989660;
	case 50:
		goto loc_83989660;
	case 51:
		goto loc_83989660;
	case 52:
		goto loc_83989660;
	case 53:
		goto loc_83989660;
	case 54:
		goto loc_83989660;
	case 55:
		goto loc_83989668;
	case 56:
		goto loc_83989668;
	case 57:
		goto loc_83989668;
	case 58:
		goto loc_83989658;
	case 59:
		goto loc_83989660;
	case 60:
		goto loc_83989678;
	case 61:
		goto loc_83989670;
	case 62:
		goto loc_83989660;
	case 63:
		goto loc_83989668;
	case 64:
		goto loc_83989660;
	case 65:
		goto loc_83989668;
	case 66:
		goto loc_83989668;
	case 67:
		goto loc_83989668;
	case 68:
		goto loc_83989668;
	case 69:
		goto loc_83989668;
	case 70:
		goto loc_83989668;
	case 71:
		goto loc_83989668;
	case 72:
		goto loc_83989688;
	case 73:
		goto loc_83989688;
	case 74:
		goto loc_83989688;
	case 75:
		goto loc_83989688;
	case 76:
		goto loc_839896A0;
	case 77:
		goto loc_839896A0;
	case 78:
		goto loc_839896A0;
	case 79:
		goto loc_839896A0;
	case 80:
		goto loc_839896A0;
	case 81:
		goto loc_839896A0;
	case 82:
		goto loc_839896A0;
	case 83:
		goto loc_839896A0;
	case 84:
		goto loc_839896A0;
	case 85:
		goto loc_839896A0;
	case 86:
		goto loc_839896A4;
	case 87:
		goto loc_83989688;
	case 88:
		goto loc_83989688;
	case 89:
		goto loc_83989678;
	case 90:
		goto loc_839896A4;
	case 91:
		goto loc_83989658;
	case 92:
		goto loc_83989690;
	case 93:
		goto loc_839896A0;
	case 94:
		goto loc_839896A4;
	case 95:
		goto loc_839896A4;
	case 96:
		goto loc_839896A4;
	case 97:
		goto loc_839896A4;
	case 98:
		goto loc_839896A4;
	case 99:
		goto loc_839896A4;
	case 100:
		goto loc_839896A4;
	case 101:
		goto loc_839896A4;
	case 102:
		goto loc_839896A4;
	case 103:
		goto loc_839896A0;
	case 104:
		goto loc_839896A4;
	case 105:
		goto loc_83989668;
	case 106:
		goto loc_83989698;
	case 107:
		goto loc_83989698;
	case 108:
		goto loc_83989698;
	case 109:
		goto loc_83989698;
	case 110:
		goto loc_83989688;
	default:
		return;
	}
	// lwz r28,-27048(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27048);
	// lwz r28,-27000(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27000);
	// lwz r28,-27000(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27000);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27024(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27024);
	// lwz r28,-27040(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27040);
	// lwz r28,-26972(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26972);
	// lwz r28,-27016(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27016);
	// lwz r28,-27016(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27016);
	// lwz r28,-27016(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27016);
	// lwz r28,-27016(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27016);
	// lwz r28,-27016(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27016);
	// lwz r28,-26972(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26972);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27000(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27000);
	// lwz r28,-27000(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27000);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27000(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27000);
	// lwz r28,-27000(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27000);
	// lwz r28,-27048(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27048);
	// lwz r28,-27016(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27016);
	// lwz r28,-26984(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26984);
	// lwz r28,-27024(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27024);
	// lwz r28,-26984(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26984);
	// lwz r28,-27008(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27008);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27040(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27040);
	// lwz r28,-27040(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27040);
	// lwz r28,-27016(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27016);
	// lwz r28,-26972(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26972);
	// lwz r28,-27008(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27008);
	// lwz r28,-26972(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26972);
	// lwz r28,-26972(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26972);
	// lwz r28,-26984(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26984);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27048(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27048);
	// lwz r28,-27016(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27016);
	// lwz r28,-27040(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27040);
	// lwz r28,-27040(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27040);
	// lwz r28,-27040(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27040);
	// lwz r28,-27040(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27040);
	// lwz r28,-27040(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27040);
	// lwz r28,-27040(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27040);
	// lwz r28,-27040(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27040);
	// lwz r28,-27040(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27040);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27048(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27048);
	// lwz r28,-27040(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27040);
	// lwz r28,-27016(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27016);
	// lwz r28,-27024(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27024);
	// lwz r28,-27040(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27040);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27040(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27040);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-27000(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27000);
	// lwz r28,-27000(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27000);
	// lwz r28,-27000(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27000);
	// lwz r28,-27000(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27000);
	// lwz r28,-26976(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26976);
	// lwz r28,-26976(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26976);
	// lwz r28,-26976(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26976);
	// lwz r28,-26976(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26976);
	// lwz r28,-26976(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26976);
	// lwz r28,-26976(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26976);
	// lwz r28,-26976(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26976);
	// lwz r28,-26976(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26976);
	// lwz r28,-26976(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26976);
	// lwz r28,-26976(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26976);
	// lwz r28,-26972(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26972);
	// lwz r28,-27000(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27000);
	// lwz r28,-27000(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27000);
	// lwz r28,-27016(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27016);
	// lwz r28,-26972(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26972);
	// lwz r28,-27048(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27048);
	// lwz r28,-26992(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26992);
	// lwz r28,-26976(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26976);
	// lwz r28,-26972(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26972);
	// lwz r28,-26972(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26972);
	// lwz r28,-26972(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26972);
	// lwz r28,-26972(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26972);
	// lwz r28,-26972(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26972);
	// lwz r28,-26972(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26972);
	// lwz r28,-26972(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26972);
	// lwz r28,-26972(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26972);
	// lwz r28,-26972(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26972);
	// lwz r28,-26976(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26976);
	// lwz r28,-26972(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26972);
	// lwz r28,-27032(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27032);
	// lwz r28,-26984(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26984);
	// lwz r28,-26984(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26984);
	// lwz r28,-26984(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26984);
	// lwz r28,-26984(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26984);
	// lwz r28,-27000(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -27000);
loc_83989658:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x839896a4
	goto loc_839896A4;
loc_83989660:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x839896a4
	goto loc_839896A4;
loc_83989668:
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x839896a4
	goto loc_839896A4;
loc_83989670:
	// li r11,40
	ctx.r11.s64 = 40;
	// b 0x839896a4
	goto loc_839896A4;
loc_83989678:
	// li r11,70
	ctx.r11.s64 = 70;
	// b 0x839896a4
	goto loc_839896A4;
loc_83989680:
	// li r11,80
	ctx.r11.s64 = 80;
	// b 0x839896a4
	goto loc_839896A4;
loc_83989688:
	// li r11,90
	ctx.r11.s64 = 90;
	// b 0x839896a4
	goto loc_839896A4;
loc_83989690:
	// li r11,60
	ctx.r11.s64 = 60;
	// b 0x839896a4
	goto loc_839896A4;
loc_83989698:
	// li r11,30
	ctx.r11.s64 = 30;
	// b 0x839896a4
	goto loc_839896A4;
loc_839896A0:
	// li r11,100
	ctx.r11.s64 = 100;
loc_839896A4:
	// subfic r10,r11,100
	xer.ca = ctx.r11.u32 <= 100;
	ctx.r10.s64 = 100 - ctx.r11.s64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfs f0,8976(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lis r6,-32230
	ctx.r6.s64 = -2112225280;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f13,-28272(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -28272);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,9008(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmadds f5,f7,f12,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fctidz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_83989704:
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

__attribute__((alias("__imp__sub_8398971C"))) PPC_WEAK_FUNC(sub_8398971C);
PPC_FUNC_IMPL(__imp__sub_8398971C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83989720"))) PPC_WEAK_FUNC(sub_83989720);
PPC_FUNC_IMPL(__imp__sub_83989720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-31024
	ctx.r3.s64 = ctx.r11.s64 + -31024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8398972C"))) PPC_WEAK_FUNC(sub_8398972C);
PPC_FUNC_IMPL(__imp__sub_8398972C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83989730"))) PPC_WEAK_FUNC(sub_83989730);
PPC_FUNC_IMPL(__imp__sub_83989730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lwz r11,-30532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30532);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83989740"))) PPC_WEAK_FUNC(sub_83989740);
PPC_FUNC_IMPL(__imp__sub_83989740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83989754
	if (cr6.eq) goto loc_83989754;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// blr 
	return;
loc_83989754:
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8398978C"))) PPC_WEAK_FUNC(sub_8398978C);
PPC_FUNC_IMPL(__imp__sub_8398978C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83989790"))) PPC_WEAK_FUNC(sub_83989790);
PPC_FUNC_IMPL(__imp__sub_83989790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83989798;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lis r30,-32209
	ctx.r30.s64 = -2110849024;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f31,f0
	ctx.f31.f64 = double(ctx.f0.s64);
	// addi r29,r30,16256
	ctx.r29.s64 = ctx.r30.s64 + 16256;
	// lfd f0,-32(r29)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + -32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmul f1,f31,f0
	ctx.f1.f64 = ctx.f31.f64 * ctx.f0.f64;
	// bl 0x831d18f0
	ctx.lr = 0x839897C8;
	sub_831D18F0(ctx, base);
	// fctidz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f13,0,r31
	PPC_STORE_U32(ctx.r31.u32, ctx.f13.u32);
	// lfd f0,-24(r29)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + -24);
	// fmul f1,f31,f0
	ctx.f1.f64 = ctx.f31.f64 * ctx.f0.f64;
	// bl 0x831d18f0
	ctx.lr = 0x839897DC;
	sub_831D18F0(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// fctidz f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// lfd f0,-16(r29)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + -16);
	// fmul f1,f31,f0
	ctx.f1.f64 = ctx.f31.f64 * ctx.f0.f64;
	// stfiwx f12,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f12.u32);
	// bl 0x831d18f0
	ctx.lr = 0x839897F4;
	sub_831D18F0(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// fctidz f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// lfd f0,-8(r29)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + -8);
	// fmul f1,f31,f0
	ctx.f1.f64 = ctx.f31.f64 * ctx.f0.f64;
	// stfiwx f11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.f11.u32);
	// bl 0x831d18f0
	ctx.lr = 0x8398980C;
	sub_831D18F0(ctx, base);
	// li r8,12
	ctx.r8.s64 = 12;
	// fctidz f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// lfd f0,16256(r30)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16256);
	// fmul f1,f31,f0
	ctx.f1.f64 = ctx.f31.f64 * ctx.f0.f64;
	// stfiwx f10,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.f10.u32);
	// bl 0x831d18f0
	ctx.lr = 0x83989824;
	sub_831D18F0(ctx, base);
	// li r7,16
	ctx.r7.s64 = 16;
	// lis r6,15
	ctx.r6.s64 = 983040;
	// fctidz f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r6,16960
	ctx.r5.u64 = ctx.r6.u64 | 16960;
	// std r5,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r5.u64);
	// stfiwx f9,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.f9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398984C"))) PPC_WEAK_FUNC(sub_8398984C);
PPC_FUNC_IMPL(__imp__sub_8398984C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83989850"))) PPC_WEAK_FUNC(sub_83989850);
PPC_FUNC_IMPL(__imp__sub_83989850) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x83989890
	if (cr6.lt) goto loc_83989890;
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// bl 0x831d1ca8
	ctx.lr = 0x8398987C;
	sub_831D1CA8(ctx, base);
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
loc_83989890:
	// fsubs f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// bl 0x831d18f0
	ctx.lr = 0x83989898;
	sub_831D18F0(ctx, base);
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

__attribute__((alias("__imp__sub_839898AC"))) PPC_WEAK_FUNC(sub_839898AC);
PPC_FUNC_IMPL(__imp__sub_839898AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839898B0"))) PPC_WEAK_FUNC(sub_839898B0);
PPC_FUNC_IMPL(__imp__sub_839898B0) {
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
	// bl 0x83989790
	ctx.lr = 0x839898CC;
	sub_83989790(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// stb r11,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r11.u8);
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// stw r31,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r31.u32);
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
	// stw r31,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r31.u32);
	// stw r31,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// stw r31,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r31.u32);
	// stw r31,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r31.u32);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// stw r30,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r30.u32);
	// bl 0x83a7d958
	ctx.lr = 0x83989908;
	sub_83A7D958(ctx, base);
	// stw r3,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r3.u32);
	// stw r31,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r31.u32);
	// stw r31,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r31.u32);
	// stw r31,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r31.u32);
	// stw r31,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r31.u32);
	// stw r31,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r31.u32);
	// stw r31,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r31.u32);
	// stw r30,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r30.u32);
	// bl 0x83a7d958
	ctx.lr = 0x8398992C;
	sub_83A7D958(ctx, base);
	// stw r3,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r3.u32);
	// stw r31,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r31.u32);
	// stw r31,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r31.u32);
	// stw r31,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r31.u32);
	// stw r31,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r31.u32);
	// stw r31,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r31.u32);
	// stw r31,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r31.u32);
	// stw r30,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r30.u32);
	// bl 0x83a7d958
	ctx.lr = 0x83989950;
	sub_83A7D958(ctx, base);
	// stw r3,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r3.u32);
	// stw r31,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r31.u32);
	// stw r31,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r31.u32);
	// stw r31,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r31.u32);
	// stw r31,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r31.u32);
	// stw r31,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r31.u32);
	// stw r31,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r31.u32);
	// stw r30,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r30.u32);
	// bl 0x83a7d958
	ctx.lr = 0x83989974;
	sub_83A7D958(ctx, base);
	// stw r3,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r3.u32);
	// stw r31,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r31.u32);
	// stw r31,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r31.u32);
	// stw r31,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r31.u32);
	// stw r31,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r31.u32);
	// stw r31,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r31.u32);
	// stw r31,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r31.u32);
	// stw r30,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r30.u32);
	// bl 0x83a7d958
	ctx.lr = 0x83989998;
	sub_83A7D958(ctx, base);
	// stw r3,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r3.u32);
	// stw r31,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r31.u32);
	// stw r31,216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 216, ctx.r31.u32);
	// stw r31,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r31.u32);
	// stw r31,224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 224, ctx.r31.u32);
	// stw r31,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r31.u32);
	// stw r31,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r31.u32);
	// stw r30,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r30.u32);
	// bl 0x83a7d958
	ctx.lr = 0x839899BC;
	sub_83A7D958(ctx, base);
	// stw r3,240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 240, ctx.r3.u32);
	// stw r31,244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 244, ctx.r31.u32);
	// stw r31,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r31.u32);
	// stw r31,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r31.u32);
	// stw r31,256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 256, ctx.r31.u32);
	// stw r31,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r31.u32);
	// stw r31,264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 264, ctx.r31.u32);
	// stw r30,268(r30)
	PPC_STORE_U32(ctx.r30.u32 + 268, ctx.r30.u32);
	// bl 0x83a7d958
	ctx.lr = 0x839899E0;
	sub_83A7D958(ctx, base);
	// stw r3,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r3.u32);
	// stw r31,276(r30)
	PPC_STORE_U32(ctx.r30.u32 + 276, ctx.r31.u32);
	// stw r31,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r31.u32);
	// stw r31,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r31.u32);
	// stw r31,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r31.u32);
	// stw r31,292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 292, ctx.r31.u32);
	// stw r31,296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 296, ctx.r31.u32);
	// stw r30,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r30.u32);
	// bl 0x83a7d958
	ctx.lr = 0x83989A04;
	sub_83A7D958(ctx, base);
	// stw r3,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r3.u32);
	// stw r31,308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 308, ctx.r31.u32);
	// stw r31,312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 312, ctx.r31.u32);
	// stw r31,316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 316, ctx.r31.u32);
	// stw r31,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r31.u32);
	// stw r31,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r31.u32);
	// stw r31,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r31.u32);
	// stw r30,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r30.u32);
	// bl 0x83a7d958
	ctx.lr = 0x83989A28;
	sub_83A7D958(ctx, base);
	// stw r3,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r3.u32);
	// stw r31,340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 340, ctx.r31.u32);
	// stw r31,344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 344, ctx.r31.u32);
	// stw r31,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r31.u32);
	// stw r31,352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 352, ctx.r31.u32);
	// stw r31,356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 356, ctx.r31.u32);
	// stw r31,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r31.u32);
	// stw r30,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r30.u32);
	// bl 0x83a7d958
	ctx.lr = 0x83989A4C;
	sub_83A7D958(ctx, base);
	// stw r3,368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 368, ctx.r3.u32);
	// stw r31,372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 372, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,376(r30)
	PPC_STORE_U32(ctx.r30.u32 + 376, ctx.r31.u32);
	// stw r31,380(r30)
	PPC_STORE_U32(ctx.r30.u32 + 380, ctx.r31.u32);
	// stw r31,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r31.u32);
	// stw r31,388(r30)
	PPC_STORE_U32(ctx.r30.u32 + 388, ctx.r31.u32);
	// stw r31,392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 392, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_83989A84"))) PPC_WEAK_FUNC(sub_83989A84);
PPC_FUNC_IMPL(__imp__sub_83989A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83989A88"))) PPC_WEAK_FUNC(sub_83989A88);
PPC_FUNC_IMPL(__imp__sub_83989A88) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83989b5c
	if (cr6.eq) goto loc_83989B5C;
	// bl 0x83a7d958
	ctx.lr = 0x83989AB4;
	sub_83A7D958(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x83524128
	ctx.lr = 0x83989AC0;
	sub_83524128(ctx, base);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// blt cr6,0x83989b5c
	if (cr6.lt) goto loc_83989B5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// cmpld cr6,r3,r10
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r10.u64, xer);
	// blt cr6,0x83989b5c
	if (cr6.lt) goto loc_83989B5C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83989af4
	if (cr6.lt) goto loc_83989AF4;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
loc_83989AF4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83989b0c
	if (cr6.lt) goto loc_83989B0C;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_83989B0C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83989b24
	if (cr6.lt) goto loc_83989B24;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
loc_83989B24:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83989b3c
	if (cr6.lt) goto loc_83989B3C;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_83989B3C:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83989b54
	if (cr6.lt) goto loc_83989B54;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_83989B54:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83989B5C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83989b70
	if (!cr6.eq) goto loc_83989B70;
	// bl 0x83a7d958
	ctx.lr = 0x83989B6C;
	sub_83A7D958(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_83989B70:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
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

__attribute__((alias("__imp__sub_83989B94"))) PPC_WEAK_FUNC(sub_83989B94);
PPC_FUNC_IMPL(__imp__sub_83989B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83989B98"))) PPC_WEAK_FUNC(sub_83989B98);
PPC_FUNC_IMPL(__imp__sub_83989B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,-31024
	ctx.r10.s64 = ctx.r11.s64 + -31024;
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83989c00
	if (cr6.lt) goto loc_83989C00;
	// lbz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83989be4
	if (cr6.eq) goto loc_83989BE4;
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83989c00
	if (cr6.eq) goto loc_83989C00;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bge cr6,0x83989c00
	if (!cr6.lt) goto loc_83989C00;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// b 0x83989bfc
	goto loc_83989BFC;
loc_83989BE4:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83989bf8
	if (!cr6.eq) goto loc_83989BF8;
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// b 0x83989bfc
	goto loc_83989BFC;
loc_83989BF8:
	// stb r7,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
loc_83989BFC:
	// lwz r11,112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
loc_83989C00:
	// subfc r10,r9,r11
	xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// and r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 & ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83989C1C"))) PPC_WEAK_FUNC(sub_83989C1C);
PPC_FUNC_IMPL(__imp__sub_83989C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83989C20"))) PPC_WEAK_FUNC(sub_83989C20);
PPC_FUNC_IMPL(__imp__sub_83989C20) {
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
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83989c4c
	if (!cr6.eq) goto loc_83989C4C;
loc_83989C44:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83989c88
	goto loc_83989C88;
loc_83989C4C:
	// bl 0x83a7d958
	ctx.lr = 0x83989C50;
	sub_83A7D958(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// subf r31,r11,r3
	ctx.r31.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83524128
	ctx.lr = 0x83989C60;
	sub_83524128(ctx, base);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// blt cr6,0x83989c44
	if (cr6.lt) goto loc_83989C44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83524128
	ctx.lr = 0x83989C70;
	sub_83524128(ctx, base);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// cmpld cr6,r3,r11
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x83989c84
	if (!cr6.lt) goto loc_83989C84;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83989C84:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_83989C88:
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

__attribute__((alias("__imp__sub_83989CA0"))) PPC_WEAK_FUNC(sub_83989CA0);
PPC_FUNC_IMPL(__imp__sub_83989CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stb r11,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r11.u8);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stb r11,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r11.u8);
	// stb r11,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, ctx.r11.u8);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stb r11,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, ctx.r11.u8);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stb r11,136(r3)
	PPC_STORE_U8(ctx.r3.u32 + 136, ctx.r11.u8);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stb r11,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, ctx.r11.u8);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stb r11,152(r3)
	PPC_STORE_U8(ctx.r3.u32 + 152, ctx.r11.u8);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// stb r11,160(r3)
	PPC_STORE_U8(ctx.r3.u32 + 160, ctx.r11.u8);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stb r11,168(r3)
	PPC_STORE_U8(ctx.r3.u32 + 168, ctx.r11.u8);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stb r11,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r11.u8);
	// stw r11,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// stb r11,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, ctx.r11.u8);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// stb r11,192(r3)
	PPC_STORE_U8(ctx.r3.u32 + 192, ctx.r11.u8);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// stb r11,200(r3)
	PPC_STORE_U8(ctx.r3.u32 + 200, ctx.r11.u8);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stb r11,208(r3)
	PPC_STORE_U8(ctx.r3.u32 + 208, ctx.r11.u8);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// stb r11,216(r3)
	PPC_STORE_U8(ctx.r3.u32 + 216, ctx.r11.u8);
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// stb r11,232(r3)
	PPC_STORE_U8(ctx.r3.u32 + 232, ctx.r11.u8);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// stb r11,240(r3)
	PPC_STORE_U8(ctx.r3.u32 + 240, ctx.r11.u8);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// stb r11,248(r3)
	PPC_STORE_U8(ctx.r3.u32 + 248, ctx.r11.u8);
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// stb r11,256(r3)
	PPC_STORE_U8(ctx.r3.u32 + 256, ctx.r11.u8);
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// stb r11,264(r3)
	PPC_STORE_U8(ctx.r3.u32 + 264, ctx.r11.u8);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// stb r11,272(r3)
	PPC_STORE_U8(ctx.r3.u32 + 272, ctx.r11.u8);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// stb r11,280(r3)
	PPC_STORE_U8(ctx.r3.u32 + 280, ctx.r11.u8);
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// stb r11,288(r3)
	PPC_STORE_U8(ctx.r3.u32 + 288, ctx.r11.u8);
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r11.u32);
	// stb r11,296(r3)
	PPC_STORE_U8(ctx.r3.u32 + 296, ctx.r11.u8);
	// stw r11,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// stb r11,304(r3)
	PPC_STORE_U8(ctx.r3.u32 + 304, ctx.r11.u8);
	// stw r11,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r11.u32);
	// stb r11,312(r3)
	PPC_STORE_U8(ctx.r3.u32 + 312, ctx.r11.u8);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// stb r11,320(r3)
	PPC_STORE_U8(ctx.r3.u32 + 320, ctx.r11.u8);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// stb r11,328(r3)
	PPC_STORE_U8(ctx.r3.u32 + 328, ctx.r11.u8);
	// stw r11,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// stb r11,336(r3)
	PPC_STORE_U8(ctx.r3.u32 + 336, ctx.r11.u8);
	// stw r11,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r11.u32);
	// stb r11,344(r3)
	PPC_STORE_U8(ctx.r3.u32 + 344, ctx.r11.u8);
	// stw r11,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r11.u32);
	// stb r11,352(r3)
	PPC_STORE_U8(ctx.r3.u32 + 352, ctx.r11.u8);
	// stw r11,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r11.u32);
	// stb r11,360(r3)
	PPC_STORE_U8(ctx.r3.u32 + 360, ctx.r11.u8);
	// stw r11,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r11.u32);
	// stb r11,368(r3)
	PPC_STORE_U8(ctx.r3.u32 + 368, ctx.r11.u8);
	// stw r11,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r11.u32);
	// stb r11,376(r3)
	PPC_STORE_U8(ctx.r3.u32 + 376, ctx.r11.u8);
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r11.u32);
	// stb r11,384(r3)
	PPC_STORE_U8(ctx.r3.u32 + 384, ctx.r11.u8);
	// stw r11,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r11.u32);
	// stb r11,392(r3)
	PPC_STORE_U8(ctx.r3.u32 + 392, ctx.r11.u8);
	// stw r11,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r11.u32);
	// stb r11,400(r3)
	PPC_STORE_U8(ctx.r3.u32 + 400, ctx.r11.u8);
	// stw r11,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r11.u32);
	// stb r11,408(r3)
	PPC_STORE_U8(ctx.r3.u32 + 408, ctx.r11.u8);
	// stw r11,412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 412, ctx.r11.u32);
	// stb r11,416(r3)
	PPC_STORE_U8(ctx.r3.u32 + 416, ctx.r11.u8);
	// stw r11,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, ctx.r11.u32);
	// stb r11,424(r3)
	PPC_STORE_U8(ctx.r3.u32 + 424, ctx.r11.u8);
	// stw r11,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r11.u32);
	// stb r11,432(r3)
	PPC_STORE_U8(ctx.r3.u32 + 432, ctx.r11.u8);
	// stw r11,436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 436, ctx.r11.u32);
	// stb r11,440(r3)
	PPC_STORE_U8(ctx.r3.u32 + 440, ctx.r11.u8);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// stb r11,448(r3)
	PPC_STORE_U8(ctx.r3.u32 + 448, ctx.r11.u8);
	// stw r11,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r11.u32);
	// stb r11,456(r3)
	PPC_STORE_U8(ctx.r3.u32 + 456, ctx.r11.u8);
	// stw r11,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r11.u32);
	// stb r11,464(r3)
	PPC_STORE_U8(ctx.r3.u32 + 464, ctx.r11.u8);
	// stw r11,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r11.u32);
	// stb r11,472(r3)
	PPC_STORE_U8(ctx.r3.u32 + 472, ctx.r11.u8);
	// stw r11,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r11.u32);
	// stb r11,480(r3)
	PPC_STORE_U8(ctx.r3.u32 + 480, ctx.r11.u8);
	// stw r11,484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 484, ctx.r11.u32);
	// stb r11,488(r3)
	PPC_STORE_U8(ctx.r3.u32 + 488, ctx.r11.u8);
	// stw r11,492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 492, ctx.r11.u32);
	// stb r11,496(r3)
	PPC_STORE_U8(ctx.r3.u32 + 496, ctx.r11.u8);
	// stw r11,500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 500, ctx.r11.u32);
	// stfs f0,508(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 508, temp.u32);
	// stb r11,504(r3)
	PPC_STORE_U8(ctx.r3.u32 + 504, ctx.r11.u8);
	// stb r11,512(r3)
	PPC_STORE_U8(ctx.r3.u32 + 512, ctx.r11.u8);
	// stw r11,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83989EB8"))) PPC_WEAK_FUNC(sub_83989EB8);
PPC_FUNC_IMPL(__imp__sub_83989EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r9,76
	ctx.r9.s64 = 4980736;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r6,r9,19264
	ctx.r6.u64 = ctx.r9.u64 | 19264;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stb r7,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r7.u8);
	// lfs f0,16220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16220);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// std r6,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r6.u64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83989ef4
	if (cr6.eq) goto loc_83989EF4;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// b 0x83989ef8
	goto loc_83989EF8;
loc_83989EF4:
	// lbz r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -32);
loc_83989EF8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83989f08
	if (cr6.eq) goto loc_83989F08;
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// li r9,1
	ctx.r9.s64 = 1;
loc_83989F08:
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83989f1c
	if (cr6.eq) goto loc_83989F1C;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83989f20
	goto loc_83989F20;
loc_83989F1C:
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
loc_83989F20:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83989f30
	if (cr6.eq) goto loc_83989F30;
	// stfs f0,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
loc_83989F30:
	// lbz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83989f44
	if (cr6.eq) goto loc_83989F44;
	// ld r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// b 0x83989f48
	goto loc_83989F48;
loc_83989F44:
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_83989F48:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83989f58
	if (cr6.eq) goto loc_83989F58;
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// li r9,1
	ctx.r9.s64 = 1;
loc_83989F58:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83989f6c
	if (!cr6.eq) goto loc_83989F6C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83989F6C:
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r8,568
	ctx.r11.s64 = ctx.r8.s64 + 568;
	// stb r9,588(r8)
	PPC_STORE_U8(ctx.r8.u32 + 588, ctx.r9.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,568(r8)
	PPC_STORE_U64(ctx.r8.u32 + 568, ctx.r7.u64);
	// std r6,576(r8)
	PPC_STORE_U64(ctx.r8.u32 + 576, ctx.r6.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83989F94"))) PPC_WEAK_FUNC(sub_83989F94);
PPC_FUNC_IMPL(__imp__sub_83989F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83989F98"))) PPC_WEAK_FUNC(sub_83989F98);
PPC_FUNC_IMPL(__imp__sub_83989F98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83989FA0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r11,-31024
	ctx.r29.s64 = ctx.r11.s64 + -31024;
loc_83989FB8:
	// addi r11,r29,116
	ctx.r11.s64 = ctx.r29.s64 + 116;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x83989fe0
	if (cr6.eq) goto loc_83989FE0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x83989fb8
	if (cr6.lt) goto loc_83989FB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83989FE0:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x83989ff4
	if (!cr6.lt) goto loc_83989FF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83989FF4:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// addi r8,r29,364
	ctx.r8.s64 = ctx.r29.s64 + 364;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// lwzx r23,r9,r8
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// blt cr6,0x8398a170
	if (cr6.lt) goto loc_8398A170;
	// subf r25,r10,r11
	ctx.r25.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,460(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 460);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x8398a02c
	if (cr6.lt) goto loc_8398A02C;
	// subf r26,r11,r10
	ctx.r26.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8398A02C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, xer);
	// blt cr6,0x8398a040
	if (cr6.lt) goto loc_8398A040;
	// subf r27,r11,r23
	ctx.r27.s64 = ctx.r23.s64 - ctx.r11.s64;
loc_8398A040:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x8398a058
	if (cr6.lt) goto loc_8398A058;
	// subf r28,r11,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8398A058:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x8398a070
	if (cr6.lt) goto loc_8398A070;
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8398A070:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x83989a88
	ctx.lr = 0x8398A07C;
	sub_83989A88(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x83989a88
	ctx.lr = 0x8398A088;
	sub_83989A88(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x83989a88
	ctx.lr = 0x8398A094;
	sub_83989A88(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x83989a88
	ctx.lr = 0x8398A0A0;
	sub_83989A88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,300
	ctx.r3.s64 = ctx.r31.s64 + 300;
	// bl 0x83989a88
	ctx.lr = 0x8398A0AC;
	sub_83989A88(ctx, base);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// beq cr6,0x8398a0e0
	if (cr6.eq) goto loc_8398A0E0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// beq cr6,0x8398a170
	if (cr6.eq) goto loc_8398A170;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x8398a170
	if (!cr6.lt) goto loc_8398A170;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// b 0x8398a16c
	goto loc_8398A16C;
loc_8398A0E0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398a0f4
	if (!cr6.eq) goto loc_8398A0F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// b 0x8398a16c
	goto loc_8398A16C;
loc_8398A0F4:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// add r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 + ctx.r25.u64;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r7,r11,r26
	ctx.r7.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r6,r9,r27
	ctx.r6.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// stw r5,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r5.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x83989a88
	ctx.lr = 0x8398A13C;
	sub_83989A88(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// bl 0x83989a88
	ctx.lr = 0x8398A148;
	sub_83989A88(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x83989a88
	ctx.lr = 0x8398A154;
	sub_83989A88(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x83989a88
	ctx.lr = 0x8398A160;
	sub_83989A88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x83989a88
	ctx.lr = 0x8398A16C;
	sub_83989A88(ctx, base);
loc_8398A16C:
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
loc_8398A170:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8398a19c
	if (cr6.lt) goto loc_8398A19C;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8398a19c
	if (cr6.lt) goto loc_8398A19C;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8398a1a0
	if (!cr6.lt) goto loc_8398A1A0;
loc_8398A19C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8398A1A0:
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 460);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r23,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r23.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398A1C8"))) PPC_WEAK_FUNC(sub_8398A1C8);
PPC_FUNC_IMPL(__imp__sub_8398A1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8398A1D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32209
	ctx.r27.s64 = -2110849024;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r11,76
	ctx.r11.s64 = 4980736;
	// li r29,1
	ctx.r29.s64 = 1;
	// ori r31,r11,19264
	ctx.r31.u64 = ctx.r11.u64 | 19264;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// lfs f0,16220(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16220);
	ctx.f0.f64 = double(temp.f32);
	// std r31,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r31.u64);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stb r30,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r30.u8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83a7d958
	ctx.lr = 0x8398A208;
	sub_83A7D958(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,16220(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16220);
	ctx.f0.f64 = double(temp.f32);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// stw r3,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r30,20(r28)
	PPC_STORE_U8(ctx.r28.u32 + 20, ctx.r30.u8);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r9.u64);
	// std r8,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r8.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398A240"))) PPC_WEAK_FUNC(sub_8398A240);
PPC_FUNC_IMPL(__imp__sub_8398A240) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x8398a274
	if (!cr6.lt) goto loc_8398A274;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// b 0x8398a288
	goto loc_8398A288;
loc_8398A274:
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// ble cr6,0x8398a284
	if (!cr6.gt) goto loc_8398A284;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x8398a288
	goto loc_8398A288;
loc_8398A284:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_8398A288:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfd f0,9000(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x8398a2b0
	if (cr6.lt) goto loc_8398A2B0;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_8398A2B0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8398a2d4
	if (cr6.eq) goto loc_8398A2D4;
	// fabs f12,f31
	ctx.f12.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-11356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11356);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x8398a2dc
	if (cr6.gt) goto loc_8398A2DC;
loc_8398A2D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8398a2e0
	goto loc_8398A2E0;
loc_8398A2DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8398A2E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398a2f4
	if (cr6.eq) goto loc_8398A2F4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8398a330
	goto loc_8398A330;
loc_8398A2F4:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82eb5ba0
	ctx.lr = 0x8398A300;
	sub_82EB5BA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398a314
	if (cr6.eq) goto loc_8398A314;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8398a330
	goto loc_8398A330;
loc_8398A314:
	// fsubs f13,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,-28272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28272);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8398A330:
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

__attribute__((alias("__imp__sub_8398A348"))) PPC_WEAK_FUNC(sub_8398A348);
PPC_FUNC_IMPL(__imp__sub_8398A348) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398a398
	if (cr6.eq) goto loc_8398A398;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8398A378;
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
	ctx.lr = 0x8398A390;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8398A398;
	sub_82595170(ctx, base);
loc_8398A398:
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

__attribute__((alias("__imp__sub_8398A3AC"))) PPC_WEAK_FUNC(sub_8398A3AC);
PPC_FUNC_IMPL(__imp__sub_8398A3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398A3B0"))) PPC_WEAK_FUNC(sub_8398A3B0);
PPC_FUNC_IMPL(__imp__sub_8398A3B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8398A3B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398a3f4
	if (!cr6.eq) goto loc_8398A3F4;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// bl 0x83a7d958
	ctx.lr = 0x8398A3E0;
	sub_83A7D958(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_8398A3F4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398a40c
	if (!cr6.eq) goto loc_8398A40C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8398A40C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x83a7d958
	ctx.lr = 0x8398A41C;
	sub_83A7D958(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r3,r10,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r10.s64;
	// bl 0x83524128
	ctx.lr = 0x8398A42C;
	sub_83524128(ctx, base);
	// lis r9,15
	ctx.r9.s64 = 983040;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// ori r11,r9,16960
	ctx.r11.u64 = ctx.r9.u64 | 16960;
	// cmpd cr6,r3,r11
	cr6.compare<int64_t>(ctx.r3.s64, ctx.r11.s64, xer);
	// blt cr6,0x8398a4b0
	if (cr6.lt) goto loc_8398A4B0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lfd f13,-18160(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18160);
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fdiv f0,f10,f12
	ctx.f0.f64 = ctx.f10.f64 / ctx.f12.f64;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8398a480
	if (!cr6.lt) goto loc_8398A480;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-4664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4664);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8398a4a0
	goto loc_8398A4A0;
loc_8398A480:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfd f13,-18168(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -18168);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8398a49c
	if (!cr6.gt) goto loc_8398A49C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-4660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4660);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8398a4a0
	goto loc_8398A4A0;
loc_8398A49C:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_8398A4A0:
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8398A4B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398A4BC"))) PPC_WEAK_FUNC(sub_8398A4BC);
PPC_FUNC_IMPL(__imp__sub_8398A4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398A4C0"))) PPC_WEAK_FUNC(sub_8398A4C0);
PPC_FUNC_IMPL(__imp__sub_8398A4C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r10,46(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 46);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398a4e0
	if (cr6.eq) goto loc_8398A4E0;
	// lbz r8,47(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 47);
	// b 0x8398a4e4
	goto loc_8398A4E4;
loc_8398A4E0:
	// lbz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
loc_8398A4E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8398a4f8
	if (!cr6.eq) goto loc_8398A4F8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8398a4fc
	goto loc_8398A4FC;
loc_8398A4F8:
	// stb r8,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r8.u8);
loc_8398A4FC:
	// lbz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398a510
	if (cr6.eq) goto loc_8398A510;
	// lwz r7,52(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// b 0x8398a514
	goto loc_8398A514;
loc_8398A510:
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
loc_8398A514:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8398a524
	if (!cr6.eq) goto loc_8398A524;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8398a528
	goto loc_8398A528;
loc_8398A524:
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
loc_8398A528:
	// lbz r10,56(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398a53c
	if (cr6.eq) goto loc_8398A53C;
	// lbz r8,57(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 57);
	// bne cr6,0x8398a544
	if (!cr6.eq) goto loc_8398A544;
loc_8398A53C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8398a548
	goto loc_8398A548;
loc_8398A544:
	// stb r8,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, ctx.r8.u8);
loc_8398A548:
	// lbz r10,60(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 60);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398a55c
	if (cr6.eq) goto loc_8398A55C;
	// lwz r7,64(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// bne cr6,0x8398a564
	if (!cr6.eq) goto loc_8398A564;
loc_8398A55C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8398a568
	goto loc_8398A568;
loc_8398A564:
	// stw r7,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
loc_8398A568:
	// lbz r10,68(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398a57c
	if (cr6.eq) goto loc_8398A57C;
	// lwz r7,72(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// bne cr6,0x8398a584
	if (!cr6.eq) goto loc_8398A584;
loc_8398A57C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8398a588
	goto loc_8398A588;
loc_8398A584:
	// stw r7,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r7.u32);
loc_8398A588:
	// lbz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 76);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398a59c
	if (cr6.eq) goto loc_8398A59C;
	// lbz r8,77(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 77);
	// bne cr6,0x8398a5a4
	if (!cr6.eq) goto loc_8398A5A4;
loc_8398A59C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8398a5a8
	goto loc_8398A5A8;
loc_8398A5A4:
	// stb r8,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r8.u8);
loc_8398A5A8:
	// lbz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398a5bc
	if (cr6.eq) goto loc_8398A5BC;
	// lfs f0,84(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8398a5c0
	goto loc_8398A5C0;
loc_8398A5BC:
	// lfs f0,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
loc_8398A5C0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8398a5d0
	if (!cr6.eq) goto loc_8398A5D0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8398a5d4
	goto loc_8398A5D4;
loc_8398A5D0:
	// stfs f0,24(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
loc_8398A5D4:
	// lbz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398a5e8
	if (cr6.eq) goto loc_8398A5E8;
	// lfs f0,100(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x8398a5f0
	if (!cr6.eq) goto loc_8398A5F0;
loc_8398A5E8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8398a5f4
	goto loc_8398A5F4;
loc_8398A5F0:
	// stfs f0,28(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
loc_8398A5F4:
	// lbz r10,104(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398a608
	if (cr6.eq) goto loc_8398A608;
	// lwz r7,108(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// bne cr6,0x8398a610
	if (!cr6.eq) goto loc_8398A610;
loc_8398A608:
	// stb r11,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r11.u8);
	// b 0x8398a618
	goto loc_8398A618;
loc_8398A610:
	// stb r6,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r6.u8);
	// stw r7,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r7.u32);
loc_8398A618:
	// lbz r10,112(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 112);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398a62c
	if (cr6.eq) goto loc_8398A62C;
	// lwz r7,116(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// bne cr6,0x8398a634
	if (!cr6.eq) goto loc_8398A634;
loc_8398A62C:
	// stb r11,40(r9)
	PPC_STORE_U8(ctx.r9.u32 + 40, ctx.r11.u8);
	// b 0x8398a63c
	goto loc_8398A63C;
loc_8398A634:
	// stb r6,40(r9)
	PPC_STORE_U8(ctx.r9.u32 + 40, ctx.r6.u8);
	// stw r7,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r7.u32);
loc_8398A63C:
	// lbz r10,120(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 120);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398a650
	if (cr6.eq) goto loc_8398A650;
	// lfs f0,124(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x8398a65c
	if (!cr6.eq) goto loc_8398A65C;
loc_8398A650:
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8398A65C:
	// stb r3,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r3.u8);
	// stfs f0,48(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8398A668"))) PPC_WEAK_FUNC(sub_8398A668);
PPC_FUNC_IMPL(__imp__sub_8398A668) {
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
	// lbz r10,600(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 600);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398a6c4
	if (cr6.eq) goto loc_8398A6C4;
	// lbz r10,601(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 601);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398a6b8
	if (cr6.eq) goto loc_8398A6B8;
	// lbz r11,603(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 603);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r3,602(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 602);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_8398A6B8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8398a6f8
	if (!cr6.eq) goto loc_8398A6F8;
loc_8398A6C4:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398a6fc
	if (cr6.eq) goto loc_8398A6FC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82efe530
	ctx.lr = 0x8398A6D8;
	sub_82EFE530(ctx, base);
	// lbz r10,600(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 600);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398a6f8
	if (cr6.eq) goto loc_8398A6F8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r3,602(r31)
	PPC_STORE_U8(ctx.r31.u32 + 602, ctx.r3.u8);
	// stb r11,603(r31)
	PPC_STORE_U8(ctx.r31.u32 + 603, ctx.r11.u8);
	// stb r10,601(r31)
	PPC_STORE_U8(ctx.r31.u32 + 601, ctx.r10.u8);
loc_8398A6F8:
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_8398A6FC:
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

__attribute__((alias("__imp__sub_8398A714"))) PPC_WEAK_FUNC(sub_8398A714);
PPC_FUNC_IMPL(__imp__sub_8398A714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398A718"))) PPC_WEAK_FUNC(sub_8398A718);
PPC_FUNC_IMPL(__imp__sub_8398A718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8398a728
	if (!cr6.eq) goto loc_8398A728;
	// blr 
	return;
loc_8398A728:
	// b 0x82efe578
	sub_82EFE578(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398A72C"))) PPC_WEAK_FUNC(sub_8398A72C);
PPC_FUNC_IMPL(__imp__sub_8398A72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398A730"))) PPC_WEAK_FUNC(sub_8398A730);
PPC_FUNC_IMPL(__imp__sub_8398A730) {
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
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8398a758
	if (!cr6.eq) goto loc_8398A758;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8398A758:
	// bl 0x82efe590
	ctx.lr = 0x8398A75C;
	sub_82EFE590(ctx, base);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8398A778"))) PPC_WEAK_FUNC(sub_8398A778);
PPC_FUNC_IMPL(__imp__sub_8398A778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8398a788
	if (!cr6.eq) goto loc_8398A788;
	// blr 
	return;
loc_8398A788:
	// b 0x82efe5a8
	sub_82EFE5A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398A78C"))) PPC_WEAK_FUNC(sub_8398A78C);
PPC_FUNC_IMPL(__imp__sub_8398A78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398A790"))) PPC_WEAK_FUNC(sub_8398A790);
PPC_FUNC_IMPL(__imp__sub_8398A790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8398a7a0
	if (!cr6.eq) goto loc_8398A7A0;
	// blr 
	return;
loc_8398A7A0:
	// b 0x82efe5c0
	sub_82EFE5C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398A7A4"))) PPC_WEAK_FUNC(sub_8398A7A4);
PPC_FUNC_IMPL(__imp__sub_8398A7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398A7A8"))) PPC_WEAK_FUNC(sub_8398A7A8);
PPC_FUNC_IMPL(__imp__sub_8398A7A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8398a7b8
	if (!cr6.eq) goto loc_8398A7B8;
	// blr 
	return;
loc_8398A7B8:
	// b 0x82efe5d8
	sub_82EFE5D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398A7BC"))) PPC_WEAK_FUNC(sub_8398A7BC);
PPC_FUNC_IMPL(__imp__sub_8398A7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398A7C0"))) PPC_WEAK_FUNC(sub_8398A7C0);
PPC_FUNC_IMPL(__imp__sub_8398A7C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8398a7d0
	if (!cr6.eq) goto loc_8398A7D0;
	// blr 
	return;
loc_8398A7D0:
	// b 0x82efe608
	sub_82EFE608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398A7D4"))) PPC_WEAK_FUNC(sub_8398A7D4);
PPC_FUNC_IMPL(__imp__sub_8398A7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398A7D8"))) PPC_WEAK_FUNC(sub_8398A7D8);
PPC_FUNC_IMPL(__imp__sub_8398A7D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8398a7e8
	if (!cr6.eq) goto loc_8398A7E8;
	// blr 
	return;
loc_8398A7E8:
	// b 0x82efe620
	sub_82EFE620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398A7EC"))) PPC_WEAK_FUNC(sub_8398A7EC);
PPC_FUNC_IMPL(__imp__sub_8398A7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398A7F0"))) PPC_WEAK_FUNC(sub_8398A7F0);
PPC_FUNC_IMPL(__imp__sub_8398A7F0) {
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
	// lbz r11,600(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 600);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398a834
	if (cr6.eq) goto loc_8398A834;
	// lbz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 676);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398a828
	if (cr6.eq) goto loc_8398A828;
	// lbz r3,677(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 677);
	// li r11,1
	ctx.r11.s64 = 1;
loc_8398A828:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398a870
	if (!cr6.eq) goto loc_8398A870;
loc_8398A834:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8398a854
	if (!cr6.eq) goto loc_8398A854;
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
loc_8398A854:
	// bl 0x82efe668
	ctx.lr = 0x8398A858;
	sub_82EFE668(ctx, base);
	// lbz r11,600(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 600);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398a870
	if (cr6.eq) goto loc_8398A870;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r3,677(r31)
	PPC_STORE_U8(ctx.r31.u32 + 677, ctx.r3.u8);
	// stb r11,676(r31)
	PPC_STORE_U8(ctx.r31.u32 + 676, ctx.r11.u8);
loc_8398A870:
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

__attribute__((alias("__imp__sub_8398A884"))) PPC_WEAK_FUNC(sub_8398A884);
PPC_FUNC_IMPL(__imp__sub_8398A884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398A888"))) PPC_WEAK_FUNC(sub_8398A888);
PPC_FUNC_IMPL(__imp__sub_8398A888) {
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
	// lbz r11,600(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 600);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398a8cc
	if (cr6.eq) goto loc_8398A8CC;
	// lbz r11,678(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 678);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398a8c0
	if (cr6.eq) goto loc_8398A8C0;
	// lbz r3,679(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 679);
	// li r11,1
	ctx.r11.s64 = 1;
loc_8398A8C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398a908
	if (!cr6.eq) goto loc_8398A908;
loc_8398A8CC:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8398a8ec
	if (!cr6.eq) goto loc_8398A8EC;
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
loc_8398A8EC:
	// bl 0x82efe680
	ctx.lr = 0x8398A8F0;
	sub_82EFE680(ctx, base);
	// lbz r11,600(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 600);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398a908
	if (cr6.eq) goto loc_8398A908;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r3,679(r31)
	PPC_STORE_U8(ctx.r31.u32 + 679, ctx.r3.u8);
	// stb r11,678(r31)
	PPC_STORE_U8(ctx.r31.u32 + 678, ctx.r11.u8);
loc_8398A908:
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

__attribute__((alias("__imp__sub_8398A91C"))) PPC_WEAK_FUNC(sub_8398A91C);
PPC_FUNC_IMPL(__imp__sub_8398A91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398A920"))) PPC_WEAK_FUNC(sub_8398A920);
PPC_FUNC_IMPL(__imp__sub_8398A920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8398A928;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stb r28,544(r3)
	PPC_STORE_U8(ctx.r3.u32 + 544, ctx.r28.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 548, ctx.r29.u32);
	// addi r30,r3,544
	ctx.r30.s64 = ctx.r3.s64 + 544;
	// bl 0x83a7d958
	ctx.lr = 0x8398A948;
	sub_83A7D958(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r3.u32);
	// stb r29,556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 556, ctx.r29.u8);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// stb r28,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398A968"))) PPC_WEAK_FUNC(sub_8398A968);
PPC_FUNC_IMPL(__imp__sub_8398A968) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r4.u32);
	// stb r11,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8398A978"))) PPC_WEAK_FUNC(sub_8398A978);
PPC_FUNC_IMPL(__imp__sub_8398A978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8398A980;
	__savegprlr_29(ctx, base);
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
	// lbz r4,5(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// bl 0x839892a0
	ctx.lr = 0x8398A998;
	sub_839892A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398a9b0
	if (cr6.eq) goto loc_8398A9B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8398A9B0:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398a9f8
	if (cr6.eq) goto loc_8398A9F8;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398a9f8
	if (cr6.eq) goto loc_8398A9F8;
	// bl 0x82efb0b0
	ctx.lr = 0x8398A9CC;
	sub_82EFB0B0(ctx, base);
	// bl 0x8398a240
	ctx.lr = 0x8398A9D0;
	sub_8398A240(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r5,5(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x83989418
	ctx.lr = 0x8398A9E4;
	sub_83989418(ctx, base);
	// subfc r11,r29,r3
	xer.ca = ctx.r3.u32 >= ctx.r29.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r29.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8398A9F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398AA04"))) PPC_WEAK_FUNC(sub_8398AA04);
PPC_FUNC_IMPL(__imp__sub_8398AA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398AA08"))) PPC_WEAK_FUNC(sub_8398AA08);
PPC_FUNC_IMPL(__imp__sub_8398AA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8398AA24"))) PPC_WEAK_FUNC(sub_8398AA24);
PPC_FUNC_IMPL(__imp__sub_8398AA24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8398AA28"))) PPC_WEAK_FUNC(sub_8398AA28);
PPC_FUNC_IMPL(__imp__sub_8398AA28) {
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
	// lbz r11,600(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 600);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398aa84
	if (cr6.eq) goto loc_8398AA84;
	// lbz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 652);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398aa70
	if (cr6.eq) goto loc_8398AA70;
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 656);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8398AA70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398aa84
	if (cr6.eq) goto loc_8398AA84;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8398aab8
	goto loc_8398AAB8;
loc_8398AA84:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398aabc
	if (cr6.eq) goto loc_8398AABC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82efe500
	ctx.lr = 0x8398AA98;
	sub_82EFE500(ctx, base);
	// lbz r10,600(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 600);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398aab8
	if (cr6.eq) goto loc_8398AAB8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r3,656(r31)
	PPC_STORE_U8(ctx.r31.u32 + 656, ctx.r3.u8);
	// stw r11,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r11.u32);
	// stb r10,652(r31)
	PPC_STORE_U8(ctx.r31.u32 + 652, ctx.r10.u8);
loc_8398AAB8:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8398AABC:
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

__attribute__((alias("__imp__sub_8398AAD4"))) PPC_WEAK_FUNC(sub_8398AAD4);
PPC_FUNC_IMPL(__imp__sub_8398AAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398AAD8"))) PPC_WEAK_FUNC(sub_8398AAD8);
PPC_FUNC_IMPL(__imp__sub_8398AAD8) {
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
	// lbz r11,600(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 600);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398ab34
	if (cr6.eq) goto loc_8398AB34;
	// lbz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 664);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398ab20
	if (cr6.eq) goto loc_8398AB20;
	// lwz r10,672(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r3,668(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 668);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8398AB20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398ab34
	if (cr6.eq) goto loc_8398AB34;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8398ab68
	goto loc_8398AB68;
loc_8398AB34:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398ab6c
	if (cr6.eq) goto loc_8398AB6C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82efe518
	ctx.lr = 0x8398AB48;
	sub_82EFE518(ctx, base);
	// lbz r10,600(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 600);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398ab68
	if (cr6.eq) goto loc_8398AB68;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r3,668(r31)
	PPC_STORE_U8(ctx.r31.u32 + 668, ctx.r3.u8);
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// stb r10,664(r31)
	PPC_STORE_U8(ctx.r31.u32 + 664, ctx.r10.u8);
loc_8398AB68:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8398AB6C:
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

__attribute__((alias("__imp__sub_8398AB84"))) PPC_WEAK_FUNC(sub_8398AB84);
PPC_FUNC_IMPL(__imp__sub_8398AB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398AB88"))) PPC_WEAK_FUNC(sub_8398AB88);
PPC_FUNC_IMPL(__imp__sub_8398AB88) {
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
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8398abf4
	if (!cr6.eq) goto loc_8398ABF4;
	// addi r3,r3,568
	ctx.r3.s64 = ctx.r3.s64 + 568;
	// bl 0x83989c20
	ctx.lr = 0x8398ABB0;
	sub_83989C20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398abc4
	if (cr6.eq) goto loc_8398ABC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8398abf0
	goto loc_8398ABF0;
loc_8398ABC4:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398abf4
	if (cr6.eq) goto loc_8398ABF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398ABE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8398abf4
	if (cr6.eq) goto loc_8398ABF4;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8398ABF0:
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_8398ABF4:
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

__attribute__((alias("__imp__sub_8398AC0C"))) PPC_WEAK_FUNC(sub_8398AC0C);
PPC_FUNC_IMPL(__imp__sub_8398AC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398AC10"))) PPC_WEAK_FUNC(sub_8398AC10);
PPC_FUNC_IMPL(__imp__sub_8398AC10) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398ac58
	if (cr6.eq) goto loc_8398AC58;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8398AC40;
	sub_82595150(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830ffb40
	ctx.lr = 0x8398AC48;
	sub_830FFB40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8398AC50;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8398AC58;
	sub_82595170(ctx, base);
loc_8398AC58:
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

__attribute__((alias("__imp__sub_8398AC6C"))) PPC_WEAK_FUNC(sub_8398AC6C);
PPC_FUNC_IMPL(__imp__sub_8398AC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398AC70"))) PPC_WEAK_FUNC(sub_8398AC70);
PPC_FUNC_IMPL(__imp__sub_8398AC70) {
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
	// bl 0x82596fe8
	ctx.lr = 0x8398AC90;
	sub_82596FE8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398acc4
	if (cr6.eq) goto loc_8398ACC4;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398acc4
	if (cr6.eq) goto loc_8398ACC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ec0320
	ctx.lr = 0x8398ACB0;
	sub_82EC0320(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x8398ACBC;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8398acd0
	goto loc_8398ACD0;
loc_8398ACC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x8398ACCC;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8398ACD0:
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

__attribute__((alias("__imp__sub_8398ACE8"))) PPC_WEAK_FUNC(sub_8398ACE8);
PPC_FUNC_IMPL(__imp__sub_8398ACE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x8398ACF0;
	__savegprlr_21(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-31024
	ctx.r10.s64 = ctx.r11.s64 + -31024;
loc_8398AD08:
	// addi r11,r10,116
	ctx.r11.s64 = ctx.r10.s64 + 116;
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// beq cr6,0x8398ad30
	if (cr6.eq) goto loc_8398AD30;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// blt cr6,0x8398ad08
	if (cr6.lt) goto loc_8398AD08;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_8398AD30:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x8398ad44
	if (!cr6.lt) goto loc_8398AD44;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_8398AD44:
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r27,96(r8)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r8.u32 + 96);
	// rlwinm r28,r9,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,108(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// addi r25,r10,140
	ctx.r25.s64 = ctx.r10.s64 + 140;
	// lwz r6,112(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// addi r24,r10,236
	ctx.r24.s64 = ctx.r10.s64 + 236;
	// lwz r5,332(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// rlwinm r26,r9,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,336(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// addi r23,r10,364
	ctx.r23.s64 = ctx.r10.s64 + 364;
	// lwz r4,348(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 348);
	// lis r22,-32256
	ctx.r22.s64 = -2113929216;
	// lwz r31,352(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	// lwzx r25,r29,r25
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r25.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r24,r28,r24
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r24.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r26,r26,r23
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r23.u32);
	// lwz r29,8(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f0,9008(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lwz r28,460(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 460);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lbz r23,544(r8)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r8.u32 + 544);
	// stb r21,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r21.u8);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// stw r4,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stb r11,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stb r11,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r11.u8);
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stb r11,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r11.u8);
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// stb r11,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r11.u8);
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// stb r11,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r11.u8);
	// stb r27,193(r1)
	PPC_STORE_U8(ctx.r1.u32 + 193, ctx.r27.u8);
	// beq cr6,0x8398ae34
	if (cr6.eq) goto loc_8398AE34;
	// lbz r9,556(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 556);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8398ae34
	if (cr6.eq) goto loc_8398AE34;
	// lfs f0,560(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x8398ae3c
	goto loc_8398AE3C;
loc_8398AE34:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
loc_8398AE3C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8398ae50
	if (cr6.eq) goto loc_8398AE50;
	// stfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stb r11,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r11.u8);
loc_8398AE50:
	// lwz r10,464(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 464);
	// lbz r9,108(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 108);
	// stb r11,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r11.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// beq cr6,0x8398ae84
	if (cr6.eq) goto loc_8398AE84;
	// lbz r10,100(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 100);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398ae84
	if (cr6.eq) goto loc_8398AE84;
	// lwz r10,104(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x8398ae88
	if (cr6.eq) goto loc_8398AE88;
loc_8398AE84:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8398AE88:
	// stb r10,213(r1)
	PPC_STORE_U8(ctx.r1.u32 + 213, ctx.r10.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r11,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r11.u8);
	// bl 0x82ee65c0
	ctx.lr = 0x8398AE98;
	sub_82EE65C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398AEA4"))) PPC_WEAK_FUNC(sub_8398AEA4);
PPC_FUNC_IMPL(__imp__sub_8398AEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398AEA8"))) PPC_WEAK_FUNC(sub_8398AEA8);
PPC_FUNC_IMPL(__imp__sub_8398AEA8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8398aa28
	ctx.lr = 0x8398AEC4;
	sub_8398AA28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398aee8
	if (!cr6.eq) goto loc_8398AEE8;
loc_8398AED0:
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
loc_8398AEE8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8398af00
	if (cr6.lt) goto loc_8398AF00;
	// bne cr6,0x8398aed0
	if (!cr6.eq) goto loc_8398AED0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8398af04
	goto loc_8398AF04;
loc_8398AF00:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8398AF04:
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8398AF20"))) PPC_WEAK_FUNC(sub_8398AF20);
PPC_FUNC_IMPL(__imp__sub_8398AF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8398AF28;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lbz r4,5(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// bl 0x839892a0
	ctx.lr = 0x8398AF4C;
	sub_839892A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398af6c
	if (cr6.eq) goto loc_8398AF6C;
loc_8398AF58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8398AF6C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ee6e08
	ctx.lr = 0x8398AF74;
	sub_82EE6E08(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398b068
	if (cr6.eq) goto loc_8398B068;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398b068
	if (cr6.eq) goto loc_8398B068;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8398ace8
	ctx.lr = 0x8398AF98;
	sub_8398ACE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398b068
	if (cr6.eq) goto loc_8398B068;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398AFC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f2,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// lfs f30,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f2
	cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bge cr6,0x8398afe0
	if (!cr6.lt) goto loc_8398AFE0;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// b 0x8398aff4
	goto loc_8398AFF4;
loc_8398AFE0:
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// ble cr6,0x8398aff0
	if (!cr6.gt) goto loc_8398AFF0;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x8398aff4
	goto loc_8398AFF4;
loc_8398AFF0:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_8398AFF4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82eb5ba0
	ctx.lr = 0x8398AFFC;
	sub_82EB5BA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398b068
	if (!cr6.eq) goto loc_8398B068;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82eb5ba0
	ctx.lr = 0x8398B014;
	sub_82EB5BA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398af58
	if (!cr6.eq) goto loc_8398AF58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r5,5(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x83989418
	ctx.lr = 0x8398B030;
	sub_83989418(ctx, base);
	// fsubs f13,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,-28272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28272);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfc r9,r10,r3
	xer.ca = ctx.r3.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8398B068:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398B07C"))) PPC_WEAK_FUNC(sub_8398B07C);
PPC_FUNC_IMPL(__imp__sub_8398B07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398B080"))) PPC_WEAK_FUNC(sub_8398B080);
PPC_FUNC_IMPL(__imp__sub_8398B080) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stb r11,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stb r11,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r11.u8);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stb r11,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r11.u8);
	// stb r11,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r11.u8);
	// stb r11,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r11.u8);
	// stb r11,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r11.u8);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stb r11,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r11.u8);
	// stb r11,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, ctx.r11.u8);
	// beq cr6,0x8398b168
	if (cr6.eq) goto loc_8398B168;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8398ace8
	ctx.lr = 0x8398B13C;
	sub_8398ACE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398b168
	if (cr6.eq) goto loc_8398B168;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398B164;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8398b16c
	goto loc_8398B16C;
loc_8398B168:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8398B16C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_8398B184"))) PPC_WEAK_FUNC(sub_8398B184);
PPC_FUNC_IMPL(__imp__sub_8398B184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398B188"))) PPC_WEAK_FUNC(sub_8398B188);
PPC_FUNC_IMPL(__imp__sub_8398B188) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stb r11,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stb r11,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r11.u8);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stb r11,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r11.u8);
	// stb r11,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r11.u8);
	// stb r11,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r11.u8);
	// stb r11,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r11.u8);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stb r11,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r11.u8);
	// stb r11,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, ctx.r11.u8);
	// beq cr6,0x8398b274
	if (cr6.eq) goto loc_8398B274;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8398ace8
	ctx.lr = 0x8398B23C;
	sub_8398ACE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398b274
	if (cr6.eq) goto loc_8398B274;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398B260;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8398B274:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8398B28C"))) PPC_WEAK_FUNC(sub_8398B28C);
PPC_FUNC_IMPL(__imp__sub_8398B28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398B290"))) PPC_WEAK_FUNC(sub_8398B290);
PPC_FUNC_IMPL(__imp__sub_8398B290) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,16408
	ctx.r3.s64 = ctx.r11.s64 + 16408;
	// bl 0x83523fd8
	ctx.lr = 0x8398B2B4;
	sub_83523FD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8398b2d4
	if (cr6.eq) goto loc_8398B2D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8398B2D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee6e08
	ctx.lr = 0x8398B2DC;
	sub_82EE6E08(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398b32c
	if (cr6.eq) goto loc_8398B32C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8398ace8
	ctx.lr = 0x8398B2F4;
	sub_8398ACE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398b32c
	if (cr6.eq) goto loc_8398B32C;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398B318;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8398B32C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8398B344"))) PPC_WEAK_FUNC(sub_8398B344);
PPC_FUNC_IMPL(__imp__sub_8398B344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398B348"))) PPC_WEAK_FUNC(sub_8398B348);
PPC_FUNC_IMPL(__imp__sub_8398B348) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8398aa28
	ctx.lr = 0x8398B35C;
	sub_8398AA28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398b37c
	if (!cr6.eq) goto loc_8398B37C;
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
loc_8398B37C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_8398B39C"))) PPC_WEAK_FUNC(sub_8398B39C);
PPC_FUNC_IMPL(__imp__sub_8398B39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398B3A0"))) PPC_WEAK_FUNC(sub_8398B3A0);
PPC_FUNC_IMPL(__imp__sub_8398B3A0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stb r11,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stb r11,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r11.u8);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stb r11,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r11.u8);
	// stb r11,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r11.u8);
	// stb r11,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r11.u8);
	// stb r11,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r11.u8);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stb r11,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r11.u8);
	// stb r11,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, ctx.r11.u8);
	// beq cr6,0x8398b48c
	if (cr6.eq) goto loc_8398B48C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8398ace8
	ctx.lr = 0x8398B454;
	sub_8398ACE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398b48c
	if (cr6.eq) goto loc_8398B48C;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398B478;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8398B48C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8398B4A8"))) PPC_WEAK_FUNC(sub_8398B4A8);
PPC_FUNC_IMPL(__imp__sub_8398B4A8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398b510
	if (cr6.eq) goto loc_8398B510;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee6e08
	ctx.lr = 0x8398B4D0;
	sub_82EE6E08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8398ace8
	ctx.lr = 0x8398B4DC;
	sub_8398ACE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398b510
	if (cr6.eq) goto loc_8398B510;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398B500;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8398b514
	if (!cr6.eq) goto loc_8398B514;
loc_8398B510:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8398B514:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8398B528"))) PPC_WEAK_FUNC(sub_8398B528);
PPC_FUNC_IMPL(__imp__sub_8398B528) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// beq cr6,0x8398b584
	if (cr6.eq) goto loc_8398B584;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x8398b56c
	if (cr6.eq) goto loc_8398B56C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398b568
	if (cr6.eq) goto loc_8398B568;
loc_8398B560:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8398a348
	ctx.lr = 0x8398B568;
	sub_8398A348(ctx, base);
loc_8398B568:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8398B56C:
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
loc_8398B584:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398b56c
	if (cr6.eq) goto loc_8398B56C;
	// b 0x8398b560
	goto loc_8398B560;
}

__attribute__((alias("__imp__sub_8398B590"))) PPC_WEAK_FUNC(sub_8398B590);
PPC_FUNC_IMPL(__imp__sub_8398B590) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398b618
	if (cr6.eq) goto loc_8398B618;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398b5d8
	if (cr6.eq) goto loc_8398B5D8;
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398b5d8
	if (cr6.eq) goto loc_8398B5D8;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8398b5e0
	goto loc_8398B5E0;
loc_8398B5D8:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8398B5E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398b618
	if (cr6.eq) goto loc_8398B618;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8398b618
	if (cr6.gt) goto loc_8398B618;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398b620
	if (!cr6.eq) goto loc_8398B620;
	// bl 0x83a7d958
	ctx.lr = 0x8398B608;
	sub_83A7D958(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// b 0x8398b620
	goto loc_8398B620;
loc_8398B618:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
loc_8398B620:
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

__attribute__((alias("__imp__sub_8398B638"))) PPC_WEAK_FUNC(sub_8398B638);
PPC_FUNC_IMPL(__imp__sub_8398B638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8398B640;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398b664
	if (cr6.eq) goto loc_8398B664;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8398B664;
	sub_825952B8(ctx, base);
loc_8398B664:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8398b694
	if (cr6.lt) goto loc_8398B694;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8398B694;
	sub_825952B8(ctx, base);
loc_8398B694:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398B6AC"))) PPC_WEAK_FUNC(sub_8398B6AC);
PPC_FUNC_IMPL(__imp__sub_8398B6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398B6B0"))) PPC_WEAK_FUNC(sub_8398B6B0);
PPC_FUNC_IMPL(__imp__sub_8398B6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8398B6B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// stb r30,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r30.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r28,544(r3)
	PPC_STORE_U8(ctx.r3.u32 + 544, ctx.r28.u8);
	// addi r29,r3,544
	ctx.r29.s64 = ctx.r3.s64 + 544;
	// stw r30,548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 548, ctx.r30.u32);
	// bl 0x83a7d958
	ctx.lr = 0x8398B6DC;
	sub_83A7D958(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 556, ctx.r30.u8);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// bl 0x8398b4a8
	ctx.lr = 0x8398B6F8;
	sub_8398B4A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8398b764
	if (!cr6.eq) goto loc_8398B764;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ee6e08
	ctx.lr = 0x8398B70C;
	sub_82EE6E08(ctx, base);
	// lbz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// stb r28,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r28.u8);
	// stb r30,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r30.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398b738
	if (cr6.eq) goto loc_8398B738;
	// lbz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398b738
	if (cr6.eq) goto loc_8398B738;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x8398b73c
	if (cr6.eq) goto loc_8398B73C;
loc_8398B738:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8398B73C:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stb r30,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, ctx.r30.u8);
	// stb r28,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r28.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398b764
	if (cr6.eq) goto loc_8398B764;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398B764;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8398B764:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398B76C"))) PPC_WEAK_FUNC(sub_8398B76C);
PPC_FUNC_IMPL(__imp__sub_8398B76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398B770"))) PPC_WEAK_FUNC(sub_8398B770);
PPC_FUNC_IMPL(__imp__sub_8398B770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8398B778;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8398aa28
	ctx.lr = 0x8398B78C;
	sub_8398AA28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398b870
	if (cr6.eq) goto loc_8398B870;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8398aad8
	ctx.lr = 0x8398B7A4;
	sub_8398AAD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398b870
	if (cr6.eq) goto loc_8398B870;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b804d8
	ctx.lr = 0x8398B7B8;
	sub_82B804D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82b80748
	ctx.lr = 0x8398B7C4;
	sub_82B80748(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83884c68
	ctx.lr = 0x8398B7CC;
	sub_83884C68(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398b860
	if (cr6.eq) goto loc_8398B860;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x838acf90
	ctx.lr = 0x8398B7E0;
	sub_838ACF90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80748
	ctx.lr = 0x8398B7EC;
	sub_82B80748(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x83884c68
	ctx.lr = 0x8398B7F4;
	sub_83884C68(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8398b844
	if (cr6.eq) goto loc_8398B844;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e9f120
	ctx.lr = 0x8398B80C;
	sub_82E9F120(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea5908
	ctx.lr = 0x8398B820;
	sub_82EA5908(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398b844
	if (cr6.eq) goto loc_8398B844;
	// lbz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398b844
	if (cr6.eq) goto loc_8398B844;
	// lbz r10,157(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 157);
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// bne cr6,0x8398b890
	if (!cr6.eq) goto loc_8398B890;
loc_8398B844:
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x8398b888
	if (cr6.lt) goto loc_8398B888;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x8398b87c
	if (cr6.eq) goto loc_8398B87C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398b860
	if (cr6.eq) goto loc_8398B860;
	// bl 0x8259b510
	ctx.lr = 0x8398B860;
	sub_8259B510(ctx, base);
loc_8398B860:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398b870
	if (cr6.eq) goto loc_8398B870;
	// bl 0x8259b510
	ctx.lr = 0x8398B870;
	sub_8259B510(ctx, base);
loc_8398B870:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8398B87C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// b 0x8398b894
	goto loc_8398B894;
loc_8398B888:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_8398B890:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8398B894:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398b8a0
	if (cr6.eq) goto loc_8398B8A0;
	// bl 0x8259b510
	ctx.lr = 0x8398B8A0;
	sub_8259B510(ctx, base);
loc_8398B8A0:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398b8b0
	if (cr6.eq) goto loc_8398B8B0;
	// bl 0x8259b510
	ctx.lr = 0x8398B8B0;
	sub_8259B510(ctx, base);
loc_8398B8B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398B8BC"))) PPC_WEAK_FUNC(sub_8398B8BC);
PPC_FUNC_IMPL(__imp__sub_8398B8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398B8C0"))) PPC_WEAK_FUNC(sub_8398B8C0);
PPC_FUNC_IMPL(__imp__sub_8398B8C0) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r9,r11,-22208
	ctx.r9.s64 = ctx.r11.s64 + -22208;
	// lwz r10,-22208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22208);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8398b8fc
	if (cr6.eq) goto loc_8398B8FC;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x8398B8FC;
	sub_825749E0(ctx, base);
loc_8398B8FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82b80748
	ctx.lr = 0x8398B908;
	sub_82B80748(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8398b934
	if (cr6.eq) goto loc_8398B934;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x8398B918;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8398b934
	if (!cr6.eq) goto loc_8398B934;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398B934;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8398B934:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398b9b4
	if (cr6.eq) goto loc_8398B9B4;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// beq cr6,0x8398b960
	if (cr6.eq) goto loc_8398B960;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x8398B960;
	sub_825749E0(ctx, base);
loc_8398B960:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80748
	ctx.lr = 0x8398B96C;
	sub_82B80748(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8398b998
	if (cr6.eq) goto loc_8398B998;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x8398B97C;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8398b998
	if (!cr6.eq) goto loc_8398B998;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398B998;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8398B998:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8398b9dc
	if (!cr6.eq) goto loc_8398B9DC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398b9b4
	if (cr6.eq) goto loc_8398B9B4;
	// bl 0x8259b510
	ctx.lr = 0x8398B9B4;
	sub_8259B510(ctx, base);
loc_8398B9B4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398b9c4
	if (cr6.eq) goto loc_8398B9C4;
	// bl 0x8259b510
	ctx.lr = 0x8398B9C4;
	sub_8259B510(ctx, base);
loc_8398B9C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8398B9DC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9b340
	ctx.lr = 0x8398B9E4;
	sub_82E9B340(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9b268
	ctx.lr = 0x8398B9F0;
	sub_82E9B268(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398ba44
	if (!cr6.eq) goto loc_8398BA44;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398ba0c
	if (cr6.eq) goto loc_8398BA0C;
	// bl 0x8259b510
	ctx.lr = 0x8398BA0C;
	sub_8259B510(ctx, base);
loc_8398BA0C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398ba1c
	if (cr6.eq) goto loc_8398BA1C;
	// bl 0x8259b510
	ctx.lr = 0x8398BA1C;
	sub_8259B510(ctx, base);
loc_8398BA1C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398b9c4
	if (cr6.eq) goto loc_8398B9C4;
	// bl 0x8259b510
	ctx.lr = 0x8398BA2C;
	sub_8259B510(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8398BA44:
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9b280
	ctx.lr = 0x8398BA50;
	sub_82E9B280(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398baa4
	if (!cr6.eq) goto loc_8398BAA4;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398ba6c
	if (cr6.eq) goto loc_8398BA6C;
	// bl 0x8259b510
	ctx.lr = 0x8398BA6C;
	sub_8259B510(ctx, base);
loc_8398BA6C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398ba7c
	if (cr6.eq) goto loc_8398BA7C;
	// bl 0x8259b510
	ctx.lr = 0x8398BA7C;
	sub_8259B510(ctx, base);
loc_8398BA7C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398b9c4
	if (cr6.eq) goto loc_8398B9C4;
	// bl 0x8259b510
	ctx.lr = 0x8398BA8C;
	sub_8259B510(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8398BAA4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e9f120
	ctx.lr = 0x8398BAAC;
	sub_82E9F120(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82ea5908
	ctx.lr = 0x8398BAC0;
	sub_82EA5908(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398bb14
	if (!cr6.eq) goto loc_8398BB14;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398badc
	if (cr6.eq) goto loc_8398BADC;
	// bl 0x8259b510
	ctx.lr = 0x8398BADC;
	sub_8259B510(ctx, base);
loc_8398BADC:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398baec
	if (cr6.eq) goto loc_8398BAEC;
	// bl 0x8259b510
	ctx.lr = 0x8398BAEC;
	sub_8259B510(ctx, base);
loc_8398BAEC:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398b9c4
	if (cr6.eq) goto loc_8398B9C4;
	// bl 0x8259b510
	ctx.lr = 0x8398BAFC;
	sub_8259B510(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8398BB14:
	// lbz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 204);
	// lbz r31,205(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 205);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398bb6c
	if (!cr6.eq) goto loc_8398BB6C;
	// lbz r31,104(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398bb34
	if (cr6.eq) goto loc_8398BB34;
	// bl 0x8259b510
	ctx.lr = 0x8398BB34;
	sub_8259B510(ctx, base);
loc_8398BB34:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398bb44
	if (cr6.eq) goto loc_8398BB44;
	// bl 0x8259b510
	ctx.lr = 0x8398BB44;
	sub_8259B510(ctx, base);
loc_8398BB44:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398b9c4
	if (cr6.eq) goto loc_8398B9C4;
	// bl 0x8259b510
	ctx.lr = 0x8398BB54;
	sub_8259B510(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8398BB6C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398bb78
	if (cr6.eq) goto loc_8398BB78;
	// bl 0x8259b510
	ctx.lr = 0x8398BB78;
	sub_8259B510(ctx, base);
loc_8398BB78:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398bb88
	if (cr6.eq) goto loc_8398BB88;
	// bl 0x8259b510
	ctx.lr = 0x8398BB88;
	sub_8259B510(ctx, base);
loc_8398BB88:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398bb98
	if (cr6.eq) goto loc_8398BB98;
	// bl 0x8259b510
	ctx.lr = 0x8398BB98;
	sub_8259B510(ctx, base);
loc_8398BB98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8398BBB0"))) PPC_WEAK_FUNC(sub_8398BBB0);
PPC_FUNC_IMPL(__imp__sub_8398BBB0) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r11,-22208
	ctx.r9.s64 = ctx.r11.s64 + -22208;
	// lwz r10,-22208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22208);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8398bbf4
	if (cr6.eq) goto loc_8398BBF4;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x8398BBF4;
	sub_825749E0(ctx, base);
loc_8398BBF4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82b80748
	ctx.lr = 0x8398BC00;
	sub_82B80748(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8398bc2c
	if (cr6.eq) goto loc_8398BC2C;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x8398BC10;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8398bc2c
	if (!cr6.eq) goto loc_8398BC2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398BC2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8398BC2C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398bcac
	if (cr6.eq) goto loc_8398BCAC;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// beq cr6,0x8398bc58
	if (cr6.eq) goto loc_8398BC58;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x8398BC58;
	sub_825749E0(ctx, base);
loc_8398BC58:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80748
	ctx.lr = 0x8398BC64;
	sub_82B80748(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8398bc90
	if (cr6.eq) goto loc_8398BC90;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x8398BC74;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8398bc90
	if (!cr6.eq) goto loc_8398BC90;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398BC90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8398BC90:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8398bcc4
	if (!cr6.eq) goto loc_8398BCC4;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398bcac
	if (cr6.eq) goto loc_8398BCAC;
	// bl 0x8259b510
	ctx.lr = 0x8398BCAC;
	sub_8259B510(ctx, base);
loc_8398BCAC:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398bcbc
	if (cr6.eq) goto loc_8398BCBC;
	// bl 0x8259b510
	ctx.lr = 0x8398BCBC;
	sub_8259B510(ctx, base);
loc_8398BCBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8398be18
	goto loc_8398BE18;
loc_8398BCC4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9b340
	ctx.lr = 0x8398BCCC;
	sub_82E9B340(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9b268
	ctx.lr = 0x8398BCD8;
	sub_82E9B268(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398bd1c
	if (!cr6.eq) goto loc_8398BD1C;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398bcf4
	if (cr6.eq) goto loc_8398BCF4;
	// bl 0x8259b510
	ctx.lr = 0x8398BCF4;
	sub_8259B510(ctx, base);
loc_8398BCF4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398bd04
	if (cr6.eq) goto loc_8398BD04;
	// bl 0x8259b510
	ctx.lr = 0x8398BD04;
	sub_8259B510(ctx, base);
loc_8398BD04:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398bcbc
	if (cr6.eq) goto loc_8398BCBC;
	// bl 0x8259b510
	ctx.lr = 0x8398BD14;
	sub_8259B510(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8398be18
	goto loc_8398BE18;
loc_8398BD1C:
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9b280
	ctx.lr = 0x8398BD28;
	sub_82E9B280(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398bd6c
	if (!cr6.eq) goto loc_8398BD6C;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398bd44
	if (cr6.eq) goto loc_8398BD44;
	// bl 0x8259b510
	ctx.lr = 0x8398BD44;
	sub_8259B510(ctx, base);
loc_8398BD44:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398bd54
	if (cr6.eq) goto loc_8398BD54;
	// bl 0x8259b510
	ctx.lr = 0x8398BD54;
	sub_8259B510(ctx, base);
loc_8398BD54:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398bcbc
	if (cr6.eq) goto loc_8398BCBC;
	// bl 0x8259b510
	ctx.lr = 0x8398BD64;
	sub_8259B510(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8398be18
	goto loc_8398BE18;
loc_8398BD6C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e9f120
	ctx.lr = 0x8398BD74;
	sub_82E9F120(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82ea5908
	ctx.lr = 0x8398BD88;
	sub_82EA5908(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398bdcc
	if (!cr6.eq) goto loc_8398BDCC;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398bda4
	if (cr6.eq) goto loc_8398BDA4;
	// bl 0x8259b510
	ctx.lr = 0x8398BDA4;
	sub_8259B510(ctx, base);
loc_8398BDA4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398bdb4
	if (cr6.eq) goto loc_8398BDB4;
	// bl 0x8259b510
	ctx.lr = 0x8398BDB4;
	sub_8259B510(ctx, base);
loc_8398BDB4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398bcbc
	if (cr6.eq) goto loc_8398BCBC;
	// bl 0x8259b510
	ctx.lr = 0x8398BDC4;
	sub_8259B510(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8398be18
	goto loc_8398BE18;
loc_8398BDCC:
	// lbz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 232);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398bde0
	if (cr6.eq) goto loc_8398BDE0;
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_8398BDE0:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398bdf4
	if (cr6.eq) goto loc_8398BDF4;
	// bl 0x8259b510
	ctx.lr = 0x8398BDF4;
	sub_8259B510(ctx, base);
loc_8398BDF4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398be04
	if (cr6.eq) goto loc_8398BE04;
	// bl 0x8259b510
	ctx.lr = 0x8398BE04;
	sub_8259B510(ctx, base);
loc_8398BE04:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398be14
	if (cr6.eq) goto loc_8398BE14;
	// bl 0x8259b510
	ctx.lr = 0x8398BE14;
	sub_8259B510(ctx, base);
loc_8398BE14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8398BE18:
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

__attribute__((alias("__imp__sub_8398BE30"))) PPC_WEAK_FUNC(sub_8398BE30);
PPC_FUNC_IMPL(__imp__sub_8398BE30) {
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
	// lbz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398be60
	if (!cr6.eq) goto loc_8398BE60;
	// bl 0x8398b3a0
	ctx.lr = 0x8398BE54;
	sub_8398B3A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f1,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
loc_8398BE60:
	// lfs f1,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_8398BE78"))) PPC_WEAK_FUNC(sub_8398BE78);
PPC_FUNC_IMPL(__imp__sub_8398BE78) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398bf6c
	if (cr6.eq) goto loc_8398BF6C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r9,r11,-22208
	ctx.r9.s64 = ctx.r11.s64 + -22208;
	// lwz r10,-22208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22208);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// beq cr6,0x8398bec8
	if (cr6.eq) goto loc_8398BEC8;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x8398BEC8;
	sub_825749E0(ctx, base);
loc_8398BEC8:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82b80748
	ctx.lr = 0x8398BED4;
	sub_82B80748(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8398bf00
	if (cr6.eq) goto loc_8398BF00;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x8398BEE4;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8398bf00
	if (!cr6.eq) goto loc_8398BF00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398BF00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8398BF00:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398bf5c
	if (cr6.eq) goto loc_8398BF5C;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x8398bf2c
	if (cr6.eq) goto loc_8398BF2C;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x8398BF2C;
	sub_825749E0(ctx, base);
loc_8398BF2C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82b80748
	ctx.lr = 0x8398BF38;
	sub_82B80748(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83884c68
	ctx.lr = 0x8398BF40;
	sub_83884C68(ctx, base);
	// lwz r31,104(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8398bf74
	if (!cr6.eq) goto loc_8398BF74;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398bf5c
	if (cr6.eq) goto loc_8398BF5C;
	// bl 0x8259b510
	ctx.lr = 0x8398BF5C;
	sub_8259B510(ctx, base);
loc_8398BF5C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398bf6c
	if (cr6.eq) goto loc_8398BF6C;
	// bl 0x8259b510
	ctx.lr = 0x8398BF6C;
	sub_8259B510(ctx, base);
loc_8398BF6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8398c034
	goto loc_8398C034;
loc_8398BF74:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398BF88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8398bf9c
	if (cr6.eq) goto loc_8398BF9C;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8398c00c
	goto loc_8398C00C;
loc_8398BF9C:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398BFB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8398bfc4
	if (cr6.eq) goto loc_8398BFC4;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8398c00c
	goto loc_8398C00C;
loc_8398BFC4:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398BFDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8398c008
	if (cr6.eq) goto loc_8398C008;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8398c000
	if (cr6.eq) goto loc_8398C000;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8398c00c
	goto loc_8398C00C;
loc_8398C000:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8398c00c
	goto loc_8398C00C;
loc_8398C008:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8398C00C:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398c020
	if (cr6.eq) goto loc_8398C020;
	// bl 0x8259b510
	ctx.lr = 0x8398C020;
	sub_8259B510(ctx, base);
loc_8398C020:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398c030
	if (cr6.eq) goto loc_8398C030;
	// bl 0x8259b510
	ctx.lr = 0x8398C030;
	sub_8259B510(ctx, base);
loc_8398C030:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8398C034:
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

__attribute__((alias("__imp__sub_8398C04C"))) PPC_WEAK_FUNC(sub_8398C04C);
PPC_FUNC_IMPL(__imp__sub_8398C04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398C050"))) PPC_WEAK_FUNC(sub_8398C050);
PPC_FUNC_IMPL(__imp__sub_8398C050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x8398C058;
	__savegprlr_14(ctx, base);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// stw r3,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-22208
	ctx.r9.s64 = ctx.r11.s64 + -22208;
	// lwz r10,-22208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22208);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// beq cr6,0x8398c090
	if (cr6.eq) goto loc_8398C090;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x8398C090;
	sub_825749E0(ctx, base);
loc_8398C090:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82b80748
	ctx.lr = 0x8398C09C;
	sub_82B80748(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8398c0c8
	if (cr6.eq) goto loc_8398C0C8;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x8398C0AC;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8398c0c8
	if (!cr6.eq) goto loc_8398C0C8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398C0C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8398C0C8:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398c148
	if (cr6.eq) goto loc_8398C148;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x8398c0f4
	if (cr6.eq) goto loc_8398C0F4;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x8398C0F4;
	sub_825749E0(ctx, base);
loc_8398C0F4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82b80748
	ctx.lr = 0x8398C100;
	sub_82B80748(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8398c12c
	if (cr6.eq) goto loc_8398C12C;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x8398C110;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8398c12c
	if (!cr6.eq) goto loc_8398C12C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398C12C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8398C12C:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398c164
	if (!cr6.eq) goto loc_8398C164;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398c148
	if (cr6.eq) goto loc_8398C148;
	// bl 0x8259b510
	ctx.lr = 0x8398C148;
	sub_8259B510(ctx, base);
loc_8398C148:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398c158
	if (cr6.eq) goto loc_8398C158;
	// bl 0x8259b510
	ctx.lr = 0x8398C158;
	sub_8259B510(ctx, base);
loc_8398C158:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8398C164:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83989ca0
	ctx.lr = 0x8398C16C;
	sub_83989CA0(ctx, base);
	// lis r10,-31742
	ctx.r10.s64 = -2080243712;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r29,r10,-31024
	ctx.r29.s64 = ctx.r10.s64 + -31024;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r9,r29,144
	ctx.r9.s64 = ctx.r29.s64 + 144;
	// lwz r6,108(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
loc_8398C19C:
	// addi r11,r29,117
	ctx.r11.s64 = ctx.r29.s64 + 117;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r11,-1(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398c1d8
	if (cr6.eq) goto loc_8398C1D8;
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8398c1d8
	if (cr6.lt) goto loc_8398C1D8;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// blt cr6,0x8398c1d0
	if (cr6.lt) goto loc_8398C1D0;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8398C1D0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8398C1D8:
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398c20c
	if (cr6.eq) goto loc_8398C20C;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8398c20c
	if (cr6.lt) goto loc_8398C20C;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// blt cr6,0x8398c204
	if (cr6.lt) goto loc_8398C204;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8398C204:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8398C20C:
	// lbz r11,1(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398c240
	if (cr6.eq) goto loc_8398C240;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8398c240
	if (cr6.lt) goto loc_8398C240;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// blt cr6,0x8398c238
	if (cr6.lt) goto loc_8398C238;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8398C238:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8398C240:
	// lbz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398c274
	if (cr6.eq) goto loc_8398C274;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8398c274
	if (cr6.lt) goto loc_8398C274;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// blt cr6,0x8398c26c
	if (cr6.lt) goto loc_8398C26C;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8398C26C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8398C274:
	// lbz r11,3(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398c2a8
	if (cr6.eq) goto loc_8398C2A8;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8398c2a8
	if (cr6.lt) goto loc_8398C2A8;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// blt cr6,0x8398c2a0
	if (cr6.lt) goto loc_8398C2A0;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8398C2A0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8398C2A8:
	// lbz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398c2dc
	if (cr6.eq) goto loc_8398C2DC;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8398c2dc
	if (cr6.lt) goto loc_8398C2DC;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// blt cr6,0x8398c2d4
	if (cr6.lt) goto loc_8398C2D4;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8398C2D4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8398C2DC:
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// bdnz 0x8398c19c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8398C19C;
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// lwz r9,184(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r30,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r30.u8);
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stb r30,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r30.u8);
	// beq cr6,0x8398c3f4
	if (cr6.eq) goto loc_8398C3F4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398C32C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,672(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 672);
	// lwz r10,676(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398c344
	if (!cr6.eq) goto loc_8398C344;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// beq cr6,0x8398c34c
	if (cr6.eq) goto loc_8398C34C;
loc_8398C344:
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
loc_8398C34C:
	// lbz r11,680(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 680);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398c360
	if (cr6.eq) goto loc_8398C360;
	// lfs f0,684(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8398c364
	goto loc_8398C364;
loc_8398C360:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
loc_8398C364:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398c374
	if (cr6.eq) goto loc_8398C374;
	// stfs f0,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stb r30,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r30.u8);
loc_8398C374:
	// lbz r11,688(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 688);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398c38c
	if (cr6.eq) goto loc_8398C38C;
	// lfs f0,692(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
loc_8398C38C:
	// lbz r11,696(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 696);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398c3a4
	if (cr6.eq) goto loc_8398C3A4;
	// lfs f0,700(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r30.u8);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
loc_8398C3A4:
	// lbz r10,704(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 704);
	// ld r11,712(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 712);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8398c3bc
	if (!cr6.eq) goto loc_8398C3BC;
	// ld r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// beq cr6,0x8398c3e0
	if (cr6.eq) goto loc_8398C3E0;
loc_8398C3BC:
	// li r10,1000
	ctx.r10.s64 = 1000;
	// li r9,-1
	ctx.r9.s64 = -1;
	// divdu r11,r11,r10
	ctx.r11.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmpld cr6,r11,r8
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r8.u64, xer);
	// bgt cr6,0x8398c3e4
	if (cr6.gt) goto loc_8398C3E4;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8398c3e4
	goto loc_8398C3E4;
loc_8398C3E0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8398C3E4:
	// lwz r6,108(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stb r30,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r30.u8);
loc_8398C3F4:
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// blt cr6,0x8398c41c
	if (cr6.lt) goto loc_8398C41C;
	// lbz r10,536(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 536);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// stb r30,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r30.u8);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398c41c
	if (cr6.eq) goto loc_8398C41C;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
loc_8398C41C:
	// lbz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398c448
	if (cr6.eq) goto loc_8398C448;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lbz r10,536(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 536);
	// stb r30,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r30.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// beq cr6,0x8398c448
	if (cr6.eq) goto loc_8398C448;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// stb r30,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r30.u8);
loc_8398C448:
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398c474
	if (cr6.eq) goto loc_8398C474;
	// lbz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 536);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,252(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stb r30,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r30.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398c474
	if (cr6.eq) goto loc_8398C474;
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r30.u8);
loc_8398C474:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8398C478:
	// addi r10,r29,116
	ctx.r10.s64 = ctx.r29.s64 + 116;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x8398c498
	if (cr6.eq) goto loc_8398C498;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x8398c478
	if (cr6.lt) goto loc_8398C478;
	// b 0x8398c4a0
	goto loc_8398C4A0;
loc_8398C498:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8398c4cc
	if (!cr6.lt) goto loc_8398C4CC;
loc_8398C4A0:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398c4b0
	if (cr6.eq) goto loc_8398C4B0;
	// bl 0x8259b510
	ctx.lr = 0x8398C4B0;
	sub_8259B510(ctx, base);
loc_8398C4B0:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398c158
	if (cr6.eq) goto loc_8398C158;
	// bl 0x8259b510
	ctx.lr = 0x8398C4C0;
	sub_8259B510(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8398C4CC:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 460);
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r29,364
	ctx.r6.s64 = ctx.r29.s64 + 364;
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,280(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r7,284(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// lwz r5,288(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lwz r4,292(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r14,356(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stb r30,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r30.u8);
	// stb r30,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r30.u8);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stb r30,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r30.u8);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// lwzx r3,r8,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwz r9,188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r7,312(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r5,316(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r18,128(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r16,96(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// lwz r14,360(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r21,120(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r4,320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r8,328(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stw r14,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r14.u32);
	// lwz r14,376(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// lwz r6,192(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r30,344(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r25,124(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r14,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r14.u32);
	// lwz r14,380(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r24,93(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// lwz r23,112(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r22,116(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r20,92(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r19,81(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r17,82(r1)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r15,80(r1)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r14,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r14.u32);
	// lwz r29,348(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r28,352(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lwz r14,384(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// lwz r31,388(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// stw r9,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r9.u32);
	// stw r27,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r27.u32);
	// stw r26,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r26.u32);
	// stw r25,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r25.u32);
	// stb r24,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r24.u8);
	// stw r23,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r23.u32);
	// stw r22,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r22.u32);
	// stw r21,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r21.u32);
	// stw r7,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// stb r20,360(r1)
	PPC_STORE_U8(ctx.r1.u32 + 360, ctx.r20.u8);
	// stw r5,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r5.u32);
	// stb r19,456(r1)
	PPC_STORE_U8(ctx.r1.u32 + 456, ctx.r19.u8);
	// stw r4,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r4.u32);
	// stw r18,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r18.u32);
	// stw r3,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r3.u32);
	// stb r17,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r17.u8);
	// stw r11,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r11.u32);
	// stw r16,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r16.u32);
	// stw r8,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r8.u32);
	// stb r15,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r15.u8);
	// stw r6,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r6.u32);
	// stb r10,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, ctx.r10.u8);
	// stw r30,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r30.u32);
	// lwz r11,900(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 900);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r17,96(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r29,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r15,124(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi r21,r10,24
	ctx.r21.u64 = ctx.r10.u32 & 0xFF;
	// lwz r8,412(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// clrlwi r20,r10,24
	ctx.r20.u64 = ctx.r10.u32 & 0xFF;
	// lwz r7,420(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// clrlwi r19,r10,24
	ctx.r19.u64 = ctx.r10.u32 & 0xFF;
	// stw r17,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r17.u32);
	// lwz r17,128(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r6,392(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// lwz r30,196(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// stw r17,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r17.u32);
	// lwz r17,120(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r29,200(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lwz r8,408(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// lwz r7,416(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// lwz r28,424(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// stw r17,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r17.u32);
	// lwz r27,440(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// lwz r26,444(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// lwz r25,448(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// lwz r24,452(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// lwz r23,456(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// lwz r22,472(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// lwz r18,476(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r10.u8);
	// stb r10,296(r1)
	PPC_STORE_U8(ctx.r1.u32 + 296, ctx.r10.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r17,116(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r16,112(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r10,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r10.u8);
	// stb r10,312(r1)
	PPC_STORE_U8(ctx.r1.u32 + 312, ctx.r10.u8);
	// stb r10,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r10.u8);
	// stb r10,328(r1)
	PPC_STORE_U8(ctx.r1.u32 + 328, ctx.r10.u8);
	// stw r15,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r15.u32);
	// stb r10,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r10.u8);
	// stw r14,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r14.u32);
	// stb r10,344(r1)
	PPC_STORE_U8(ctx.r1.u32 + 344, ctx.r10.u8);
	// stw r31,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r31.u32);
	// stb r10,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r10.u8);
	// stw r6,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r6.u32);
	// stb r5,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r5.u8);
	// stw r30,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r30.u32);
	// stb r4,376(r1)
	PPC_STORE_U8(ctx.r1.u32 + 376, ctx.r4.u8);
	// stw r29,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r29.u32);
	// stb r3,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r3.u8);
	// stw r8,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r8.u32);
	// stb r9,392(r1)
	PPC_STORE_U8(ctx.r1.u32 + 392, ctx.r9.u8);
	// stw r17,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r17.u32);
	// stb r21,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r21.u8);
	// stw r7,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r7.u32);
	// stb r20,408(r1)
	PPC_STORE_U8(ctx.r1.u32 + 408, ctx.r20.u8);
	// stw r16,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r16.u32);
	// stb r19,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r19.u8);
	// stw r28,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r28.u32);
	// stb r11,424(r1)
	PPC_STORE_U8(ctx.r1.u32 + 424, ctx.r11.u8);
	// stw r27,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r27.u32);
	// stb r11,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r11.u8);
	// stw r26,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r26.u32);
	// stb r11,440(r1)
	PPC_STORE_U8(ctx.r1.u32 + 440, ctx.r11.u8);
	// stw r25,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r25.u32);
	// stb r11,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r11.u8);
	// stw r24,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r24.u32);
	// stb r11,472(r1)
	PPC_STORE_U8(ctx.r1.u32 + 472, ctx.r11.u8);
	// stw r23,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r23.u32);
	// stb r11,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r11.u8);
	// stb r11,488(r1)
	PPC_STORE_U8(ctx.r1.u32 + 488, ctx.r11.u8);
	// stb r11,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r11.u8);
	// stb r11,504(r1)
	PPC_STORE_U8(ctx.r1.u32 + 504, ctx.r11.u8);
	// lwz r10,900(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 900);
	// stb r11,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r11.u8);
	// stb r11,520(r1)
	PPC_STORE_U8(ctx.r1.u32 + 520, ctx.r11.u8);
	// stb r11,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r11.u8);
	// stb r11,536(r1)
	PPC_STORE_U8(ctx.r1.u32 + 536, ctx.r11.u8);
	// lwz r6,480(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 480);
	// lwz r5,484(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 484);
	// lwz r4,488(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 488);
	// lwz r3,504(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 504);
	// lwz r9,508(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 508);
	// lwz r8,512(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 512);
	// lwz r7,516(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 516);
	// lwz r31,520(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 520);
	// lbz r30,544(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 544);
	// stb r11,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r11.u8);
	// stb r11,552(r1)
	PPC_STORE_U8(ctx.r1.u32 + 552, ctx.r11.u8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stb r11,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r11.u8);
	// stb r11,568(r1)
	PPC_STORE_U8(ctx.r1.u32 + 568, ctx.r11.u8);
	// stw r22,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r22.u32);
	// stw r18,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r18.u32);
	// stb r11,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r11.u8);
	// stb r11,584(r1)
	PPC_STORE_U8(ctx.r1.u32 + 584, ctx.r11.u8);
	// stw r6,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r6.u32);
	// stw r5,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r5.u32);
	// stb r11,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r11.u8);
	// stw r4,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r4.u32);
	// stb r11,600(r1)
	PPC_STORE_U8(ctx.r1.u32 + 600, ctx.r11.u8);
	// stb r11,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r11.u8);
	// stw r3,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r3.u32);
	// stb r11,616(r1)
	PPC_STORE_U8(ctx.r1.u32 + 616, ctx.r11.u8);
	// stw r9,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r9.u32);
	// stb r11,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r11.u8);
	// stw r8,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r8.u32);
	// stb r11,632(r1)
	PPC_STORE_U8(ctx.r1.u32 + 632, ctx.r11.u8);
	// stw r7,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r7.u32);
	// stb r11,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r11.u8);
	// stw r31,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r31.u32);
	// beq cr6,0x8398c808
	if (cr6.eq) goto loc_8398C808;
	// lbz r9,556(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 556);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8398c808
	if (cr6.eq) goto loc_8398C808;
	// lfs f0,560(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x8398c810
	goto loc_8398C810;
loc_8398C808:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
loc_8398C810:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8398c824
	if (cr6.eq) goto loc_8398C824;
	// stfs f0,652(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 652, temp.u32);
	// stb r11,648(r1)
	PPC_STORE_U8(ctx.r1.u32 + 648, ctx.r11.u8);
loc_8398C824:
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stb r11,656(r1)
	PPC_STORE_U8(ctx.r1.u32 + 656, ctx.r11.u8);
	// stw r10,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8398c848
	if (!cr6.eq) goto loc_8398C848;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8398c854
	goto loc_8398C854;
loc_8398C848:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8398ac70
	ctx.lr = 0x8398C850;
	sub_8398AC70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8398C854:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398c864
	if (cr6.eq) goto loc_8398C864;
	// bl 0x8259b510
	ctx.lr = 0x8398C864;
	sub_8259B510(ctx, base);
loc_8398C864:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398c874
	if (cr6.eq) goto loc_8398C874;
	// bl 0x8259b510
	ctx.lr = 0x8398C874;
	sub_8259B510(ctx, base);
loc_8398C874:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398C880"))) PPC_WEAK_FUNC(sub_8398C880);
PPC_FUNC_IMPL(__imp__sub_8398C880) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// beq cr6,0x8398c8dc
	if (cr6.eq) goto loc_8398C8DC;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x8398c8c4
	if (cr6.eq) goto loc_8398C8C4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398c8c0
	if (cr6.eq) goto loc_8398C8C0;
loc_8398C8B8:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8398ac10
	ctx.lr = 0x8398C8C0;
	sub_8398AC10(ctx, base);
loc_8398C8C0:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8398C8C4:
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
loc_8398C8DC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398c8c4
	if (cr6.eq) goto loc_8398C8C4;
	// b 0x8398c8b8
	goto loc_8398C8B8;
}

__attribute__((alias("__imp__sub_8398C8E8"))) PPC_WEAK_FUNC(sub_8398C8E8);
PPC_FUNC_IMPL(__imp__sub_8398C8E8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// stb r11,34(r3)
	PPC_STORE_U8(ctx.r3.u32 + 34, ctx.r11.u8);
	// stb r11,35(r3)
	PPC_STORE_U8(ctx.r3.u32 + 35, ctx.r11.u8);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// sth r11,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r11.u16);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// bl 0x83999f90
	ctx.lr = 0x8398C944;
	sub_83999F90(ctx, base);
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

__attribute__((alias("__imp__sub_8398C95C"))) PPC_WEAK_FUNC(sub_8398C95C);
PPC_FUNC_IMPL(__imp__sub_8398C95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398C960"))) PPC_WEAK_FUNC(sub_8398C960);
PPC_FUNC_IMPL(__imp__sub_8398C960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8398C968;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r10,600(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 600);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r31,r3,600
	ctx.r31.s64 = ctx.r3.s64 + 600;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398c9ec
	if (cr6.eq) goto loc_8398C9EC;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398c9c0
	if (cr6.eq) goto loc_8398C9C0;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lbz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828eeb48
	ctx.lr = 0x8398C9B8;
	sub_828EEB48(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,1
	ctx.r11.s64 = 1;
loc_8398C9C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398c9ec
	if (cr6.eq) goto loc_8398C9EC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828eeb48
	ctx.lr = 0x8398C9D8;
	sub_828EEB48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x8398C9E0;
	sub_82F73D60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8398C9EC:
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8398ca1c
	if (!cr6.eq) goto loc_8398CA1C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398ca10
	if (cr6.eq) goto loc_8398CA10;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8398CA10;
	sub_825952B8(ctx, base);
loc_8398CA10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8398CA1C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82efe548
	ctx.lr = 0x8398CA24;
	sub_82EFE548(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398ca4c
	if (cr6.eq) goto loc_8398CA4C;
	// stb r3,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r3.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x828eeb48
	ctx.lr = 0x8398CA44;
	sub_828EEB48(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_8398CA4C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828eeb48
	ctx.lr = 0x8398CA58;
	sub_828EEB48(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398ca74
	if (cr6.eq) goto loc_8398CA74;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8398CA74;
	sub_825952B8(ctx, base);
loc_8398CA74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398CA80"))) PPC_WEAK_FUNC(sub_8398CA80);
PPC_FUNC_IMPL(__imp__sub_8398CA80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8398CA88;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r10,600(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 600);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r31,r3,600
	ctx.r31.s64 = ctx.r3.s64 + 600;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398cb0c
	if (cr6.eq) goto loc_8398CB0C;
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398cae0
	if (cr6.eq) goto loc_8398CAE0;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// lbz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828eeb48
	ctx.lr = 0x8398CAD8;
	sub_828EEB48(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,1
	ctx.r11.s64 = 1;
loc_8398CAE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398cb0c
	if (cr6.eq) goto loc_8398CB0C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828eeb48
	ctx.lr = 0x8398CAF8;
	sub_828EEB48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x8398CB00;
	sub_82F73D60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8398CB0C:
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8398cb3c
	if (!cr6.eq) goto loc_8398CB3C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398cb30
	if (cr6.eq) goto loc_8398CB30;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8398CB30;
	sub_825952B8(ctx, base);
loc_8398CB30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8398CB3C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82efe560
	ctx.lr = 0x8398CB44;
	sub_82EFE560(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398cb6c
	if (cr6.eq) goto loc_8398CB6C;
	// stb r3,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r3.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x828eeb48
	ctx.lr = 0x8398CB64;
	sub_828EEB48(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
loc_8398CB6C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828eeb48
	ctx.lr = 0x8398CB78;
	sub_828EEB48(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398cb94
	if (cr6.eq) goto loc_8398CB94;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8398CB94;
	sub_825952B8(ctx, base);
loc_8398CB94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398CBA0"))) PPC_WEAK_FUNC(sub_8398CBA0);
PPC_FUNC_IMPL(__imp__sub_8398CBA0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// bl 0x8398b4a8
	ctx.lr = 0x8398CBC4;
	sub_8398B4A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8398be78
	ctx.lr = 0x8398CBCC;
	sub_8398BE78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8398ab88
	ctx.lr = 0x8398CBD4;
	sub_8398AB88(ctx, base);
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

__attribute__((alias("__imp__sub_8398CBE8"))) PPC_WEAK_FUNC(sub_8398CBE8);
PPC_FUNC_IMPL(__imp__sub_8398CBE8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lwz r10,540(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-31024
	ctx.r30.s64 = ctx.r11.s64 + -31024;
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x8398cc20
	if (cr6.lt) goto loc_8398CC20;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8398cc40
	goto loc_8398CC40;
loc_8398CC20:
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8398cc38
	if (!cr6.lt) goto loc_8398CC38;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8398cc40
	goto loc_8398CC40;
loc_8398CC38:
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_8398CC40:
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// lbz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// bl 0x83989b98
	ctx.lr = 0x8398CC50;
	sub_83989B98(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lbz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// bl 0x83989f98
	ctx.lr = 0x8398CC5C;
	sub_83989F98(ctx, base);
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398cc70
	if (cr6.eq) goto loc_8398CC70;
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// bl 0x8398a3b0
	ctx.lr = 0x8398CC70;
	sub_8398A3B0(ctx, base);
loc_8398CC70:
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x8398b590
	ctx.lr = 0x8398CC78;
	sub_8398B590(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8398c050
	ctx.lr = 0x8398CC80;
	sub_8398C050(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// lwz r11,464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,464(r30)
	PPC_STORE_U32(ctx.r30.u32 + 464, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8398CCAC"))) PPC_WEAK_FUNC(sub_8398CCAC);
PPC_FUNC_IMPL(__imp__sub_8398CCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398CCB0"))) PPC_WEAK_FUNC(sub_8398CCB0);
PPC_FUNC_IMPL(__imp__sub_8398CCB0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398cd00
	if (cr6.eq) goto loc_8398CD00;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8398CCE0;
	sub_82595150(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398ccf0
	if (cr6.eq) goto loc_8398CCF0;
	// bl 0x8259b510
	ctx.lr = 0x8398CCF0;
	sub_8259B510(ctx, base);
loc_8398CCF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8398CCF8;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8398CD00;
	sub_82595170(ctx, base);
loc_8398CD00:
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

__attribute__((alias("__imp__sub_8398CD14"))) PPC_WEAK_FUNC(sub_8398CD14);
PPC_FUNC_IMPL(__imp__sub_8398CD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398CD18"))) PPC_WEAK_FUNC(sub_8398CD18);
PPC_FUNC_IMPL(__imp__sub_8398CD18) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stb r31,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r31.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r31,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r31.u8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stb r31,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r31.u8);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stb r31,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r31.u8);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stb r31,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r31.u8);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x828eeb48
	ctx.lr = 0x8398CD74;
	sub_828EEB48(ctx, base);
	// stb r31,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r31.u8);
	// stb r31,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r31.u8);
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x828eeb48
	ctx.lr = 0x8398CDA0;
	sub_828EEB48(ctx, base);
	// stb r31,52(r30)
	PPC_STORE_U8(ctx.r30.u32 + 52, ctx.r31.u8);
	// stb r31,56(r30)
	PPC_STORE_U8(ctx.r30.u32 + 56, ctx.r31.u8);
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// stw r31,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// addi r11,r30,64
	ctx.r11.s64 = ctx.r30.s64 + 64;
	// stb r31,64(r30)
	PPC_STORE_U8(ctx.r30.u32 + 64, ctx.r31.u8);
	// stb r31,68(r30)
	PPC_STORE_U8(ctx.r30.u32 + 68, ctx.r31.u8);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// stb r31,76(r30)
	PPC_STORE_U8(ctx.r30.u32 + 76, ctx.r31.u8);
	// stb r31,77(r30)
	PPC_STORE_U8(ctx.r30.u32 + 77, ctx.r31.u8);
	// stb r31,78(r30)
	PPC_STORE_U8(ctx.r30.u32 + 78, ctx.r31.u8);
	// stb r31,79(r30)
	PPC_STORE_U8(ctx.r30.u32 + 79, ctx.r31.u8);
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

__attribute__((alias("__imp__sub_8398CDE8"))) PPC_WEAK_FUNC(sub_8398CDE8);
PPC_FUNC_IMPL(__imp__sub_8398CDE8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,600
	ctx.r3.s64 = ctx.r3.s64 + 600;
	// bl 0x8398cd18
	ctx.lr = 0x8398CE04;
	sub_8398CD18(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,600(r31)
	PPC_STORE_U8(ctx.r31.u32 + 600, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8398a668
	ctx.lr = 0x8398CE18;
	sub_8398A668(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x8398c960
	ctx.lr = 0x8398CE34;
	sub_8398C960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8398ca80
	ctx.lr = 0x8398CE40;
	sub_8398CA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8398aa28
	ctx.lr = 0x8398CE4C;
	sub_8398AA28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8398aad8
	ctx.lr = 0x8398CE58;
	sub_8398AAD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8398a7f0
	ctx.lr = 0x8398CE60;
	sub_8398A7F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8398a888
	ctx.lr = 0x8398CE68;
	sub_8398A888(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398ce84
	if (cr6.eq) goto loc_8398CE84;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8398CE84;
	sub_825952B8(ctx, base);
loc_8398CE84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8398CE98"))) PPC_WEAK_FUNC(sub_8398CE98);
PPC_FUNC_IMPL(__imp__sub_8398CE98) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stb r30,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r30.u8);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stb r30,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r30.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r30,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r30.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r30,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r30.u8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r30,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x828eeb48
	ctx.lr = 0x8398CF0C;
	sub_828EEB48(ctx, base);
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x828eeb48
	ctx.lr = 0x8398CF48;
	sub_828EEB48(ctx, base);
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r30,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r30.u8);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
	// stb r30,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r30.u8);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
	// stb r30,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r30.u8);
	// stb r30,78(r31)
	PPC_STORE_U8(ctx.r31.u32 + 78, ctx.r30.u8);
	// stb r30,79(r31)
	PPC_STORE_U8(ctx.r31.u32 + 79, ctx.r30.u8);
	// bl 0x8398cd18
	ctx.lr = 0x8398CF98;
	sub_8398CD18(ctx, base);
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

__attribute__((alias("__imp__sub_8398CFB4"))) PPC_WEAK_FUNC(sub_8398CFB4);
PPC_FUNC_IMPL(__imp__sub_8398CFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398CFB8"))) PPC_WEAK_FUNC(sub_8398CFB8);
PPC_FUNC_IMPL(__imp__sub_8398CFB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8398CFC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-1392(r1)
	ea = -1392 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8398CFF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8398d01c
	if (cr6.eq) goto loc_8398D01C;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,21
	ctx.r5.s64 = 21;
	// addi r4,r11,16384
	ctx.r4.s64 = ctx.r11.s64 + 16384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x8398D018;
	sub_8259CC28(ctx, base);
	// b 0x8398d040
	goto loc_8398D040;
loc_8398D01C:
	// bl 0x82e6e978
	ctx.lr = 0x8398D020;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398d08c
	if (cr6.eq) goto loc_8398D08C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x8398D040;
	sub_8259CB28(ctx, base);
loc_8398D040:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398d08c
	if (cr6.eq) goto loc_8398D08C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8398c8e8
	ctx.lr = 0x8398D054;
	sub_8398C8E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8399a4b0
	ctx.lr = 0x8398D060;
	sub_8399A4B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398d088
	if (cr6.eq) goto loc_8398D088;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8399a030
	ctx.lr = 0x8398D078;
	sub_8399A030(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398d0a0
	if (!cr6.eq) goto loc_8398D0A0;
loc_8398D084:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_8398D088:
	// bl 0x8398b638
	ctx.lr = 0x8398D08C;
	sub_8398B638(ctx, base);
loc_8398D08C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8398D094;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8398D0A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83989740
	ctx.lr = 0x8398D0AC;
	sub_83989740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8399a058
	ctx.lr = 0x8398D0B8;
	sub_8399A058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398d088
	if (cr6.eq) goto loc_8398D088;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8399a080
	ctx.lr = 0x8398D0D0;
	sub_8399A080(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398d084
	if (cr6.eq) goto loc_8398D084;
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stb r8,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r8.u8);
	// ble cr6,0x8398d118
	if (!cr6.gt) goto loc_8398D118;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// addi r11,r1,177
	ctx.r11.s64 = ctx.r1.s64 + 177;
loc_8398D108:
	// lbzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stbx r7,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8398d108
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8398D108;
loc_8398D118:
	// lbz r8,25(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stbx r8,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u8);
	// ble cr6,0x8398d160
	if (!cr6.gt) goto loc_8398D160;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// addi r8,r31,26
	ctx.r8.s64 = ctx.r31.s64 + 26;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
loc_8398D150:
	// lbzx r9,r8,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8398d150
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8398D150;
loc_8398D160:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8399a558
	ctx.lr = 0x8398D16C;
	sub_8399A558(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398d088
	if (cr6.eq) goto loc_8398D088;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// bl 0x8399a3c8
	ctx.lr = 0x8398D188;
	sub_8399A3C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398d084
	if (cr6.eq) goto loc_8398D084;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// bl 0x82efe5f0
	ctx.lr = 0x8398D1A0;
	sub_82EFE5F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8398b638
	ctx.lr = 0x8398D1AC;
	sub_8398B638(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8398D1B4;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398D1C0"))) PPC_WEAK_FUNC(sub_8398D1C0);
PPC_FUNC_IMPL(__imp__sub_8398D1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8398D1C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-2144(r1)
	ea = -2144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r9,r11,-22208
	ctx.r9.s64 = ctx.r11.s64 + -22208;
	// lwz r10,-22208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22208);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8398d1fc
	if (cr6.eq) goto loc_8398D1FC;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x8398D1FC;
	sub_825749E0(ctx, base);
loc_8398D1FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82b80748
	ctx.lr = 0x8398D208;
	sub_82B80748(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8398d234
	if (cr6.eq) goto loc_8398D234;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x8398D218;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8398d234
	if (!cr6.eq) goto loc_8398D234;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398D234;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8398D234:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398d384
	if (cr6.eq) goto loc_8398D384;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8398d264
	if (cr6.eq) goto loc_8398D264;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x8398D264;
	sub_825749E0(ctx, base);
loc_8398D264:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b80748
	ctx.lr = 0x8398D270;
	sub_82B80748(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8398d29c
	if (cr6.eq) goto loc_8398D29C;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x8398D280;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8398d29c
	if (!cr6.eq) goto loc_8398D29C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398D29C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8398D29C:
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8398d374
	if (cr6.eq) goto loc_8398D374;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e8dcd8
	ctx.lr = 0x8398D2B0;
	sub_82E8DCD8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e78e40
	ctx.lr = 0x8398D2BC;
	sub_82E78E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398d368
	if (cr6.eq) goto loc_8398D368;
	// bl 0x82e6e978
	ctx.lr = 0x8398D2CC;
	sub_82E6E978(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398d368
	if (cr6.eq) goto loc_8398D368;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb4368
	ctx.lr = 0x8398D2E0;
	sub_82EB4368(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x8398d368
	if (cr6.eq) goto loc_8398D368;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f0,8976(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f0,-23488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fdivs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// bl 0x83989850
	ctx.lr = 0x8398D338;
	sub_83989850(ctx, base);
	// fctiwz f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lbz r6,87(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// and r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 & ctx.r6.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,100
	cr6.compare<int32_t>(ctx.r3.s32, 100, xer);
	// ble cr6,0x8398d364
	if (!cr6.gt) goto loc_8398D364;
	// li r11,100
	ctx.r11.s64 = 100;
loc_8398D364:
	// stb r11,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r11.u8);
loc_8398D368:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e8e6d8
	ctx.lr = 0x8398D374;
	sub_82E8E6D8(ctx, base);
loc_8398D374:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398d384
	if (cr6.eq) goto loc_8398D384;
	// bl 0x8259b510
	ctx.lr = 0x8398D384;
	sub_8259B510(ctx, base);
loc_8398D384:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398d394
	if (cr6.eq) goto loc_8398D394;
	// bl 0x8259b510
	ctx.lr = 0x8398D394;
	sub_8259B510(ctx, base);
loc_8398D394:
	// lwz r4,636(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 636);
	// addi r31,r28,600
	ctx.r31.s64 = ctx.r28.s64 + 600;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398d3b4
	if (cr6.eq) goto loc_8398D3B4;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x8398D3B4;
	sub_825952B8(ctx, base);
loc_8398D3B4:
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398d3d8
	if (cr6.eq) goto loc_8398D3D8;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x8398D3D8;
	sub_825952B8(ctx, base);
loc_8398D3D8:
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// addi r30,r28,116
	ctx.r30.s64 = ctx.r28.s64 + 116;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lwz r4,116(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398d400
	if (cr6.eq) goto loc_8398D400;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8398ac10
	ctx.lr = 0x8398D3FC;
	sub_8398AC10(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_8398D400:
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// addi r31,r28,72
	ctx.r31.s64 = ctx.r28.s64 + 72;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398d41c
	if (cr6.eq) goto loc_8398D41C;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8398a348
	ctx.lr = 0x8398D418;
	sub_8398A348(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8398D41C:
	// lwz r4,64(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// addi r31,r28,64
	ctx.r31.s64 = ctx.r28.s64 + 64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398d438
	if (cr6.eq) goto loc_8398D438;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8398a348
	ctx.lr = 0x8398D434;
	sub_8398A348(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8398D438:
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// addi r31,r28,56
	ctx.r31.s64 = ctx.r28.s64 + 56;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398d454
	if (cr6.eq) goto loc_8398D454;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8398ccb0
	ctx.lr = 0x8398D450;
	sub_8398CCB0(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8398D454:
	// addi r1,r1,2144
	ctx.r1.s64 = ctx.r1.s64 + 2144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398D45C"))) PPC_WEAK_FUNC(sub_8398D45C);
PPC_FUNC_IMPL(__imp__sub_8398D45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398D460"))) PPC_WEAK_FUNC(sub_8398D460);
PPC_FUNC_IMPL(__imp__sub_8398D460) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398d484
	if (!cr6.eq) goto loc_8398D484;
	// bl 0x83984ca8
	ctx.lr = 0x8398D484;
	sub_83984CA8(ctx, base);
loc_8398D484:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398d4a0
	if (!cr6.eq) goto loc_8398D4A0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_8398D4A0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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

__attribute__((alias("__imp__sub_8398D4B8"))) PPC_WEAK_FUNC(sub_8398D4B8);
PPC_FUNC_IMPL(__imp__sub_8398D4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x8398D4C0;
	__savegprlr_19(ctx, base);
	// stwu r1,-2448(r1)
	ea = -2448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r8,300
	ctx.r8.s64 = 300;
	// lfs f0,-26260(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// li r7,22
	ctx.r7.s64 = 22;
	// lfs f13,16212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16212);
	ctx.f13.f64 = double(temp.f32);
	// li r6,11
	ctx.r6.s64 = 11;
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stb r31,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r31.u8);
	// stb r22,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r22.u8);
	// lfs f0,9008(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r25,r11,16212
	ctx.r25.s64 = ctx.r11.s64 + 16212;
	// stb r22,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r22.u8);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stw r7,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r7.u32);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// stw r6,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r6.u32);
	// addi r21,r30,64
	ctx.r21.s64 = ctx.r30.s64 + 64;
	// stb r31,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r31.u8);
	// addi r20,r30,72
	ctx.r20.s64 = ctx.r30.s64 + 72;
	// stb r31,36(r30)
	PPC_STORE_U8(ctx.r30.u32 + 36, ctx.r31.u8);
	// addi r23,r30,116
	ctx.r23.s64 = ctx.r30.s64 + 116;
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
	// stb r31,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r31.u8);
	// stw r31,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r31.u32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stw r31,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r31.u32);
	// stw r31,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r31.u32);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// stfs f0,84(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// stb r31,80(r30)
	PPC_STORE_U8(ctx.r30.u32 + 80, ctx.r31.u8);
	// stb r31,88(r30)
	PPC_STORE_U8(ctx.r30.u32 + 88, ctx.r31.u8);
	// stw r31,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r31.u32);
	// stb r31,96(r30)
	PPC_STORE_U8(ctx.r30.u32 + 96, ctx.r31.u8);
	// stb r31,100(r30)
	PPC_STORE_U8(ctx.r30.u32 + 100, ctx.r31.u8);
	// stw r31,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r31.u32);
	// stb r22,108(r30)
	PPC_STORE_U8(ctx.r30.u32 + 108, ctx.r22.u8);
	// stw r31,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r31.u32);
	// stw r31,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r31.u32);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x839898b0
	ctx.lr = 0x8398D588;
	sub_839898B0(ctx, base);
	// stb r22,528(r30)
	PPC_STORE_U8(ctx.r30.u32 + 528, ctx.r22.u8);
	// stw r31,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r31.u32);
	// addi r28,r30,544
	ctx.r28.s64 = ctx.r30.s64 + 544;
	// stb r31,536(r30)
	PPC_STORE_U8(ctx.r30.u32 + 536, ctx.r31.u8);
	// stw r31,540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 540, ctx.r31.u32);
	// stb r31,544(r30)
	PPC_STORE_U8(ctx.r30.u32 + 544, ctx.r31.u8);
	// bl 0x83a7d958
	ctx.lr = 0x8398D5A4;
	sub_83A7D958(ctx, base);
	// lfs f0,9008(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,552(r30)
	PPC_STORE_U32(ctx.r30.u32 + 552, ctx.r3.u32);
	// stfs f0,560(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 560, temp.u32);
	// stb r31,556(r30)
	PPC_STORE_U8(ctx.r30.u32 + 556, ctx.r31.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 548, ctx.r31.u32);
	// addi r3,r30,568
	ctx.r3.s64 = ctx.r30.s64 + 568;
	// bl 0x8398a1c8
	ctx.lr = 0x8398D5C4;
	sub_8398A1C8(ctx, base);
	// addi r3,r30,600
	ctx.r3.s64 = ctx.r30.s64 + 600;
	// bl 0x8398ce98
	ctx.lr = 0x8398D5CC;
	sub_8398CE98(ctx, base);
	// lis r4,-31742
	ctx.r4.s64 = -2080243712;
	// li r5,468
	ctx.r5.s64 = 468;
	// addi r3,r4,-31024
	ctx.r3.s64 = ctx.r4.s64 + -31024;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x8398D5E0;
	sub_831CDCF0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82ec5100
	ctx.lr = 0x8398D5E8;
	sub_82EC5100(ctx, base);
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// addi r11,r3,-22208
	ctx.r11.s64 = ctx.r3.s64 + -22208;
	// lwz r10,-22208(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -22208);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x8398d614
	if (cr6.eq) goto loc_8398D614;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x8398D614;
	sub_825749E0(ctx, base);
loc_8398D614:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b80748
	ctx.lr = 0x8398D620;
	sub_82B80748(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8398d64c
	if (cr6.eq) goto loc_8398D64C;
	// addi r3,r28,64
	ctx.r3.s64 = ctx.r28.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x8398D630;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8398d64c
	if (!cr6.eq) goto loc_8398D64C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398D64C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8398D64C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398db74
	if (cr6.eq) goto loc_8398DB74;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x8398d678
	if (cr6.eq) goto loc_8398D678;
	// addi r3,r28,64
	ctx.r3.s64 = ctx.r28.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x8398D678;
	sub_825749E0(ctx, base);
loc_8398D678:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82b80748
	ctx.lr = 0x8398D684;
	sub_82B80748(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8398d6b0
	if (cr6.eq) goto loc_8398D6B0;
	// addi r3,r28,64
	ctx.r3.s64 = ctx.r28.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x8398D694;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8398d6b0
	if (!cr6.eq) goto loc_8398D6B0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398D6B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8398D6B0:
	// lwz r24,104(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x8398db64
	if (cr6.eq) goto loc_8398DB64;
	// stw r31,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r31.u32);
	// bl 0x830ff290
	ctx.lr = 0x8398D6C4;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x8398da80
	if (!cr6.eq) goto loc_8398DA80;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r10,r11,14268
	ctx.r10.s64 = ctx.r11.s64 + 14268;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// bl 0x83984ca8
	ctx.lr = 0x8398D6F4;
	sub_83984CA8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8398d460
	ctx.lr = 0x8398D6FC;
	sub_8398D460(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8398d714
	if (!cr6.eq) goto loc_8398D714;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a8d40
	ctx.lr = 0x8398D710;
	sub_825A8D40(ctx, base);
	// b 0x8398db64
	goto loc_8398DB64;
loc_8398D714:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r4,3
	ctx.r4.s64 = 3;
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lhz r27,116(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 116);
	// lhz r19,182(r11)
	ctx.r19.u64 = PPC_LOAD_U16(ctx.r11.u32 + 182);
	// addi r3,r1,1664
	ctx.r3.s64 = ctx.r1.s64 + 1664;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// subfe r8,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// and r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 & ctx.r9.u64;
	// rlwinm r10,r7,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// addi r26,r11,52
	ctx.r26.s64 = ctx.r11.s64 + 52;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// addi r28,r11,118
	ctx.r28.s64 = ctx.r11.s64 + 118;
	// bl 0x82a8c428
	ctx.lr = 0x8398D764;
	sub_82A8C428(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// bl 0x82473550
	ctx.lr = 0x8398D770;
	sub_82473550(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// bl 0x82a8c428
	ctx.lr = 0x8398D780;
	sub_82A8C428(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,1504
	ctx.r3.s64 = ctx.r1.s64 + 1504;
	// bl 0x82c1f9f8
	ctx.lr = 0x8398D78C;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,1512
	ctx.r4.s64 = ctx.r1.s64 + 1512;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82a79bf8
	ctx.lr = 0x8398D798;
	sub_82A79BF8(ctx, base);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// lwz r28,256(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bge cr6,0x8398d7ac
	if (!cr6.lt) goto loc_8398D7AC;
	// addi r28,r1,256
	ctx.r28.s64 = ctx.r1.s64 + 256;
loc_8398D7AC:
	// addi r4,r1,1688
	ctx.r4.s64 = ctx.r1.s64 + 1688;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82a79bf8
	ctx.lr = 0x8398D7B8;
	sub_82A79BF8(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bge cr6,0x8398d7cc
	if (!cr6.lt) goto loc_8398D7CC;
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
loc_8398D7CC:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82d66928
	ctx.lr = 0x8398D7E4;
	sub_82D66928(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82e8b5c8
	ctx.lr = 0x8398D7F0;
	sub_82E8B5C8(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x837e3e90
	ctx.lr = 0x8398D7F8;
	sub_837E3E90(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x824707c8
	ctx.lr = 0x8398D800;
	sub_824707C8(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x824707c8
	ctx.lr = 0x8398D808;
	sub_824707C8(ctx, base);
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// bl 0x82a795b8
	ctx.lr = 0x8398D810;
	sub_82A795B8(ctx, base);
	// addi r3,r1,1664
	ctx.r3.s64 = ctx.r1.s64 + 1664;
	// bl 0x82a795b8
	ctx.lr = 0x8398D818;
	sub_82A795B8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x82a8c428
	ctx.lr = 0x8398D828;
	sub_82A8C428(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82473550
	ctx.lr = 0x8398D834;
	sub_82473550(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x82a8c428
	ctx.lr = 0x8398D844;
	sub_82A8C428(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x82c1f9f8
	ctx.lr = 0x8398D850;
	sub_82C1F9F8(ctx, base);
	// addi r4,r1,1336
	ctx.r4.s64 = ctx.r1.s64 + 1336;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82a79bf8
	ctx.lr = 0x8398D85C;
	sub_82A79BF8(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r28,288(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bge cr6,0x8398d870
	if (!cr6.lt) goto loc_8398D870;
	// addi r28,r1,288
	ctx.r28.s64 = ctx.r1.s64 + 288;
loc_8398D870:
	// addi r4,r1,1160
	ctx.r4.s64 = ctx.r1.s64 + 1160;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82a79bf8
	ctx.lr = 0x8398D87C;
	sub_82A79BF8(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r11,352(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bge cr6,0x8398d890
	if (!cr6.lt) goto loc_8398D890;
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
loc_8398D890:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82d66928
	ctx.lr = 0x8398D8A8;
	sub_82D66928(ctx, base);
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82e8b5c8
	ctx.lr = 0x8398D8B4;
	sub_82E8B5C8(ctx, base);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x837e3e90
	ctx.lr = 0x8398D8BC;
	sub_837E3E90(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x824707c8
	ctx.lr = 0x8398D8C4;
	sub_824707C8(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x824707c8
	ctx.lr = 0x8398D8CC;
	sub_824707C8(ctx, base);
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x82a795b8
	ctx.lr = 0x8398D8D4;
	sub_82A795B8(ctx, base);
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x82a795b8
	ctx.lr = 0x8398D8DC;
	sub_82A795B8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e7cd30
	ctx.lr = 0x8398D8E8;
	sub_82E7CD30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398d900
	if (!cr6.eq) goto loc_8398D900;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a8d40
	ctx.lr = 0x8398D8FC;
	sub_825A8D40(ctx, base);
	// b 0x8398db64
	goto loc_8398DB64;
loc_8398D900:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8398da78
	if (!cr6.eq) goto loc_8398DA78;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r11,r24,8
	ctx.r11.s64 = ctx.r24.s64 + 8;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82b64b88
	ctx.lr = 0x8398D924;
	sub_82B64B88(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8398d94c
	if (!cr6.eq) goto loc_8398D94C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398d940
	if (cr6.eq) goto loc_8398D940;
	// bl 0x8259b510
	ctx.lr = 0x8398D940;
	sub_8259B510(ctx, base);
loc_8398D940:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a8d40
	ctx.lr = 0x8398D948;
	sub_825A8D40(ctx, base);
	// b 0x8398db64
	goto loc_8398DB64;
loc_8398D94C:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82dad428
	ctx.lr = 0x8398D954;
	sub_82DAD428(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82b80748
	ctx.lr = 0x8398D960;
	sub_82B80748(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x83884c68
	ctx.lr = 0x8398D968;
	sub_83884C68(ctx, base);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x8398d9a0
	if (!cr6.eq) goto loc_8398D9A0;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398d984
	if (cr6.eq) goto loc_8398D984;
	// bl 0x8259b510
	ctx.lr = 0x8398D984;
	sub_8259B510(ctx, base);
loc_8398D984:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398d994
	if (cr6.eq) goto loc_8398D994;
	// bl 0x8259b510
	ctx.lr = 0x8398D994;
	sub_8259B510(ctx, base);
loc_8398D994:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a8d40
	ctx.lr = 0x8398D99C;
	sub_825A8D40(ctx, base);
	// b 0x8398db64
	goto loc_8398DB64;
loc_8398D9A0:
	// addi r3,r25,124
	ctx.r3.s64 = ctx.r25.s64 + 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83523fd8
	ctx.lr = 0x8398D9AC;
	sub_83523FD8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x8398d9e4
	if (cr6.gt) goto loc_8398D9E4;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398d9c8
	if (cr6.eq) goto loc_8398D9C8;
	// bl 0x8259b510
	ctx.lr = 0x8398D9C8;
	sub_8259B510(ctx, base);
loc_8398D9C8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398d9d8
	if (cr6.eq) goto loc_8398D9D8;
	// bl 0x8259b510
	ctx.lr = 0x8398D9D8;
	sub_8259B510(ctx, base);
loc_8398D9D8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a8d40
	ctx.lr = 0x8398D9E0;
	sub_825A8D40(ctx, base);
	// b 0x8398db64
	goto loc_8398DB64;
loc_8398D9E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e94170
	ctx.lr = 0x8398D9EC;
	sub_82E94170(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x8398da40
	if (!cr6.eq) goto loc_8398DA40;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// bl 0x82e942e8
	ctx.lr = 0x8398DA0C;
	sub_82E942E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398da2c
	if (cr6.eq) goto loc_8398DA2C;
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, xer);
	// ble cr6,0x8398da50
	if (!cr6.gt) goto loc_8398DA50;
loc_8398DA2C:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f73d60
	ctx.lr = 0x8398DA34;
	sub_82F73D60(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x832d22b8
	ctx.lr = 0x8398DA3C;
	sub_832D22B8(ctx, base);
	// b 0x8398d9e4
	goto loc_8398D9E4;
loc_8398DA40:
	// bgt cr6,0x8398daa8
	if (cr6.gt) goto loc_8398DAA8;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x832d22b8
	ctx.lr = 0x8398DA4C;
	sub_832D22B8(ctx, base);
	// b 0x8398d9e4
	goto loc_8398D9E4;
loc_8398DA50:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f73d60
	ctx.lr = 0x8398DA58;
	sub_82F73D60(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398da68
	if (cr6.eq) goto loc_8398DA68;
	// bl 0x8259b510
	ctx.lr = 0x8398DA68;
	sub_8259B510(ctx, base);
loc_8398DA68:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398da78
	if (cr6.eq) goto loc_8398DA78;
	// bl 0x8259b510
	ctx.lr = 0x8398DA78;
	sub_8259B510(ctx, base);
loc_8398DA78:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a8d40
	ctx.lr = 0x8398DA80;
	sub_825A8D40(ctx, base);
loc_8398DA80:
	// stw r22,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82595718
	ctx.lr = 0x8398DA94;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398dad4
	if (cr6.eq) goto loc_8398DAD4;
	// bl 0x82efe7f0
	ctx.lr = 0x8398DAA0;
	sub_82EFE7F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8398dad8
	goto loc_8398DAD8;
loc_8398DAA8:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398dab8
	if (cr6.eq) goto loc_8398DAB8;
	// bl 0x8259b510
	ctx.lr = 0x8398DAB8;
	sub_8259B510(ctx, base);
loc_8398DAB8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398dac8
	if (cr6.eq) goto loc_8398DAC8;
	// bl 0x8259b510
	ctx.lr = 0x8398DAC8;
	sub_8259B510(ctx, base);
loc_8398DAC8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a8d40
	ctx.lr = 0x8398DAD0;
	sub_825A8D40(ctx, base);
	// b 0x8398db64
	goto loc_8398DB64;
loc_8398DAD4:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_8398DAD8:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8398dbe0
	if (!cr6.eq) goto loc_8398DBE0;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r11,r24,8
	ctx.r11.s64 = ctx.r24.s64 + 8;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82b64b88
	ctx.lr = 0x8398DAFC;
	sub_82B64B88(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398db40
	if (cr6.eq) goto loc_8398DB40;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82dad428
	ctx.lr = 0x8398DB10;
	sub_82DAD428(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80748
	ctx.lr = 0x8398DB1C;
	sub_82B80748(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x83884c68
	ctx.lr = 0x8398DB24;
	sub_83884C68(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x8398db98
	if (!cr6.eq) goto loc_8398DB98;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398db40
	if (cr6.eq) goto loc_8398DB40;
	// bl 0x8259b510
	ctx.lr = 0x8398DB40;
	sub_8259B510(ctx, base);
loc_8398DB40:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398db50
	if (cr6.eq) goto loc_8398DB50;
	// bl 0x8259b510
	ctx.lr = 0x8398DB50;
	sub_8259B510(ctx, base);
loc_8398DB50:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8398db64
	if (cr6.eq) goto loc_8398DB64;
loc_8398DB58:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8398DB5C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8398ccb0
	ctx.lr = 0x8398DB64;
	sub_8398CCB0(ctx, base);
loc_8398DB64:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398db74
	if (cr6.eq) goto loc_8398DB74;
	// bl 0x8259b510
	ctx.lr = 0x8398DB74;
	sub_8259B510(ctx, base);
loc_8398DB74:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398db84
	if (cr6.eq) goto loc_8398DB84;
	// bl 0x8259b510
	ctx.lr = 0x8398DB84;
	sub_8259B510(ctx, base);
loc_8398DB84:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e627f0
	ctx.lr = 0x8398DB8C;
	sub_82E627F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,2448
	ctx.r1.s64 = ctx.r1.s64 + 2448;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8398DB98:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e94170
	ctx.lr = 0x8398DBA0;
	sub_82E94170(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bge cr6,0x8398dbc0
	if (!cr6.lt) goto loc_8398DBC0;
loc_8398DBA8:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x832d22b8
	ctx.lr = 0x8398DBB0;
	sub_832D22B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e94170
	ctx.lr = 0x8398DBB8;
	sub_82E94170(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// blt cr6,0x8398dba8
	if (cr6.lt) goto loc_8398DBA8;
loc_8398DBC0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398dbd0
	if (cr6.eq) goto loc_8398DBD0;
	// bl 0x8259b510
	ctx.lr = 0x8398DBD0;
	sub_8259B510(ctx, base);
loc_8398DBD0:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398dbe0
	if (cr6.eq) goto loc_8398DBE0;
	// bl 0x8259b510
	ctx.lr = 0x8398DBE0;
	sub_8259B510(ctx, base);
loc_8398DBE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8398a888
	ctx.lr = 0x8398DBE8;
	sub_8398A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398db50
	if (!cr6.eq) goto loc_8398DB50;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8398db64
	if (cr6.eq) goto loc_8398DB64;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82efe500
	ctx.lr = 0x8398DC08;
	sub_82EFE500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398db58
	if (cr6.eq) goto loc_8398DB58;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82efe518
	ctx.lr = 0x8398DC20;
	sub_82EFE518(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398db58
	if (cr6.eq) goto loc_8398DB58;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82e9f120
	ctx.lr = 0x8398DC34;
	sub_82E9F120(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82ea5908
	ctx.lr = 0x8398DC48;
	sub_82EA5908(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398dc84
	if (cr6.eq) goto loc_8398DC84;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83989eb8
	ctx.lr = 0x8398DC60;
	sub_83989EB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398db58
	if (cr6.eq) goto loc_8398DB58;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8398a4c0
	ctx.lr = 0x8398DC78;
	sub_8398A4C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398db58
	if (cr6.eq) goto loc_8398DB58;
loc_8398DC84:
	// lbz r10,416(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 416);
	// lbz r11,417(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 417);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8398dc9c
	if (!cr6.eq) goto loc_8398DC9C;
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// b 0x8398db58
	goto loc_8398DB58;
loc_8398DC9C:
	// lbz r10,418(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 418);
	// stb r11,108(r30)
	PPC_STORE_U8(ctx.r30.u32 + 108, ctx.r11.u8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lbz r10,419(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 419);
	// bne cr6,0x8398dcbc
	if (!cr6.eq) goto loc_8398DCBC;
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// beq cr6,0x8398db58
	if (cr6.eq) goto loc_8398DB58;
loc_8398DCBC:
	// lbz r11,420(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 420);
	// lwz r28,424(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398dcd4
	if (!cr6.eq) goto loc_8398DCD4;
	// lwz r28,120(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// beq cr6,0x8398db58
	if (cr6.eq) goto loc_8398DB58;
loc_8398DCD4:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398dd1c
	if (cr6.eq) goto loc_8398DD1C;
	// stw r22,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// bl 0x82595718
	ctx.lr = 0x8398DCF4;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398dd10
	if (cr6.eq) goto loc_8398DD10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830ffb40
	ctx.lr = 0x8398DD08;
	sub_830FFB40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8398dd14
	goto loc_8398DD14;
loc_8398DD10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8398DD14:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8398c880
	ctx.lr = 0x8398DD1C;
	sub_8398C880(ctx, base);
loc_8398DD1C:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8398df2c
	if (cr6.lt) goto loc_8398DF2C;
	// bne cr6,0x8398db58
	if (!cr6.eq) goto loc_8398DB58;
	// lbz r10,472(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 472);
	// lwz r11,476(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8398dd44
	if (!cr6.eq) goto loc_8398DD44;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x8398db58
	goto loc_8398DB58;
loc_8398DD44:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8398de90
	if (cr6.lt) goto loc_8398DE90;
	// beq cr6,0x8398ddf4
	if (cr6.eq) goto loc_8398DDF4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x8398db58
	if (!cr6.lt) goto loc_8398DB58;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ee88e0
	ctx.lr = 0x8398DD64;
	sub_82EE88E0(ctx, base);
	// addi r4,r1,992
	ctx.r4.s64 = ctx.r1.s64 + 992;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ea59f0
	ctx.lr = 0x8398DD78;
	sub_82EA59F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r29,r11,21716
	ctx.r29.s64 = ctx.r11.s64 + 21716;
	// bne cr6,0x8398dda8
	if (!cr6.eq) goto loc_8398DDA8;
	// addi r3,r1,2192
	ctx.r3.s64 = ctx.r1.s64 + 2192;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ee88e0
	ctx.lr = 0x8398DD98;
	sub_82EE88E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x82e9de20
	ctx.lr = 0x8398DDA4;
	sub_82E9DE20(ctx, base);
	// stw r29,2192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2192, ctx.r29.u32);
loc_8398DDA8:
	// stw r22,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,488
	ctx.r4.s64 = 488;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// bl 0x82595718
	ctx.lr = 0x8398DDBC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398dde0
	if (cr6.eq) goto loc_8398DDE0;
	// addi r4,r1,992
	ctx.r4.s64 = ctx.r1.s64 + 992;
	// bl 0x82ee9f98
	ctx.lr = 0x8398DDCC;
	sub_82EE9F98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8398b528
	ctx.lr = 0x8398DDD8;
	sub_8398B528(ctx, base);
	// stw r29,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, ctx.r29.u32);
	// b 0x8398dfd8
	goto loc_8398DFD8;
loc_8398DDE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8398b528
	ctx.lr = 0x8398DDEC;
	sub_8398B528(ctx, base);
	// stw r29,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, ctx.r29.u32);
	// b 0x8398dfd8
	goto loc_8398DFD8;
loc_8398DDF4:
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ee7250
	ctx.lr = 0x8398DE00;
	sub_82EE7250(ctx, base);
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ea59e0
	ctx.lr = 0x8398DE14;
	sub_82EA59E0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r29,r11,21716
	ctx.r29.s64 = ctx.r11.s64 + 21716;
	// bne cr6,0x8398de44
	if (!cr6.eq) goto loc_8398DE44;
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ee7250
	ctx.lr = 0x8398DE34;
	sub_82EE7250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82e9dc48
	ctx.lr = 0x8398DE40;
	sub_82E9DC48(ctx, base);
	// stw r29,1936(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1936, ctx.r29.u32);
loc_8398DE44:
	// stw r22,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,464
	ctx.r4.s64 = 464;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82595718
	ctx.lr = 0x8398DE58;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398de7c
	if (cr6.eq) goto loc_8398DE7C;
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// bl 0x82ee8358
	ctx.lr = 0x8398DE68;
	sub_82EE8358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8398b528
	ctx.lr = 0x8398DE74;
	sub_8398B528(ctx, base);
	// stw r29,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r29.u32);
	// b 0x8398dfd8
	goto loc_8398DFD8;
loc_8398DE7C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8398b528
	ctx.lr = 0x8398DE88;
	sub_8398B528(ctx, base);
	// stw r29,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r29.u32);
	// b 0x8398dfd8
	goto loc_8398DFD8;
loc_8398DE90:
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ee66c8
	ctx.lr = 0x8398DE9C;
	sub_82EE66C8(ctx, base);
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ea59d0
	ctx.lr = 0x8398DEB0;
	sub_82EA59D0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r29,r11,21716
	ctx.r29.s64 = ctx.r11.s64 + 21716;
	// bne cr6,0x8398dee0
	if (!cr6.eq) goto loc_8398DEE0;
	// addi r3,r1,2064
	ctx.r3.s64 = ctx.r1.s64 + 2064;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ee66c8
	ctx.lr = 0x8398DED0;
	sub_82EE66C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82e9da70
	ctx.lr = 0x8398DEDC;
	sub_82E9DA70(ctx, base);
	// stw r29,2064(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2064, ctx.r29.u32);
loc_8398DEE0:
	// stw r22,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,464
	ctx.r4.s64 = 464;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82595718
	ctx.lr = 0x8398DEF4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398df18
	if (cr6.eq) goto loc_8398DF18;
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// bl 0x82ee6f68
	ctx.lr = 0x8398DF04;
	sub_82EE6F68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8398b528
	ctx.lr = 0x8398DF10;
	sub_8398B528(ctx, base);
	// stw r29,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r29.u32);
	// b 0x8398dfd8
	goto loc_8398DFD8;
loc_8398DF18:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8398b528
	ctx.lr = 0x8398DF24;
	sub_8398B528(ctx, base);
	// stw r29,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r29.u32);
	// b 0x8398dfd8
	goto loc_8398DFD8;
loc_8398DF2C:
	// lbz r10,472(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 472);
	// lwz r11,476(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8398df44
	if (!cr6.eq) goto loc_8398DF44;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x8398db58
	goto loc_8398DB58;
loc_8398DF44:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8398db58
	if (!cr6.eq) goto loc_8398DB58;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82eea598
	ctx.lr = 0x8398DF58;
	sub_82EEA598(ctx, base);
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ea59c0
	ctx.lr = 0x8398DF6C;
	sub_82EA59C0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r29,r11,21716
	ctx.r29.s64 = ctx.r11.s64 + 21716;
	// bne cr6,0x8398df9c
	if (!cr6.eq) goto loc_8398DF9C;
	// addi r3,r1,1840
	ctx.r3.s64 = ctx.r1.s64 + 1840;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82eea598
	ctx.lr = 0x8398DF8C;
	sub_82EEA598(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82e9e550
	ctx.lr = 0x8398DF98;
	sub_82E9E550(ctx, base);
	// stw r29,1840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1840, ctx.r29.u32);
loc_8398DF9C:
	// stw r22,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,552
	ctx.r4.s64 = 552;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82595718
	ctx.lr = 0x8398DFB0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398dfc8
	if (cr6.eq) goto loc_8398DFC8;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// bl 0x82eec188
	ctx.lr = 0x8398DFC0;
	sub_82EEC188(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8398dfcc
	goto loc_8398DFCC;
loc_8398DFC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8398DFCC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8398b528
	ctx.lr = 0x8398DFD4;
	sub_8398B528(ctx, base);
	// stw r29,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r29.u32);
loc_8398DFD8:
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,896
	ctx.r4.s64 = 896;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82595718
	ctx.lr = 0x8398DFEC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398e008
	if (cr6.eq) goto loc_8398E008;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x83999f10
	ctx.lr = 0x8398E000;
	sub_83999F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8398e00c
	goto loc_8398E00C;
loc_8398E008:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8398E00C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8398b528
	ctx.lr = 0x8398E014;
	sub_8398B528(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398db58
	if (cr6.eq) goto loc_8398DB58;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398db58
	if (cr6.eq) goto loc_8398DB58;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r27,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r27.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398db64
	if (cr6.eq) goto loc_8398DB64;
	// b 0x8398db5c
	goto loc_8398DB5C;
}

__attribute__((alias("__imp__sub_8398E040"))) PPC_WEAK_FUNC(sub_8398E040);
PPC_FUNC_IMPL(__imp__sub_8398E040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8398E048;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,23
	ctx.r31.s64 = 23;
loc_8398E058:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a333f8
	ctx.lr = 0x8398E060;
	sub_82A333F8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// bge 0x8398e058
	if (!cr0.lt) goto loc_8398E058;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r31,r27,2688
	ctx.r31.s64 = ctx.r27.s64 + 2688;
	// li r30,1
	ctx.r30.s64 = 1;
	// ori r28,r11,44764
	ctx.r28.u64 = ctx.r11.u64 | 44764;
	// ori r29,r10,51448
	ctx.r29.u64 = ctx.r10.u64 | 51448;
loc_8398E084:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a15a98
	ctx.lr = 0x8398E08C;
	sub_82A15A98(ctx, base);
	// add r3,r31,r28
	ctx.r3.u64 = ctx.r31.u64 + ctx.r28.u64;
	// bl 0x82a16658
	ctx.lr = 0x8398E094;
	sub_82A16658(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bge 0x8398e084
	if (!cr0.lt) goto loc_8398E084;
	// addis r31,r27,2
	ctx.r31.s64 = ctx.r27.s64 + 131072;
	// addi r31,r31,-25488
	ctx.r31.s64 = ctx.r31.s64 + -25488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a16f80
	ctx.lr = 0x8398E0B0;
	sub_82A16F80(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82a53150
	ctx.lr = 0x8398E0B8;
	sub_82A53150(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398E0C4"))) PPC_WEAK_FUNC(sub_8398E0C4);
PPC_FUNC_IMPL(__imp__sub_8398E0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398E0C8"))) PPC_WEAK_FUNC(sub_8398E0C8);
PPC_FUNC_IMPL(__imp__sub_8398E0C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8398E0D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 131072;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-25488
	ctx.r11.s64 = ctx.r11.s64 + -25488;
	// addis r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 65536;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,-26380
	ctx.r31.s64 = ctx.r31.s64 + -26380;
	// ori r29,r11,51448
	ctx.r29.u64 = ctx.r11.u64 | 51448;
loc_8398E0F0:
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// subf r31,r29,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r29.s64;
	// addi r6,r11,11696
	ctx.r6.s64 = ctx.r11.s64 + 11696;
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823f0190
	ctx.lr = 0x8398E10C;
	sub_823F0190(ctx, base);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r6,r10,11696
	ctx.r6.s64 = ctx.r10.s64 + 11696;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f0190
	ctx.lr = 0x8398E124;
	sub_823F0190(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x8398e0f0
	if (!cr0.lt) goto loc_8398E0F0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398E134"))) PPC_WEAK_FUNC(sub_8398E134);
PPC_FUNC_IMPL(__imp__sub_8398E134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398E138"))) PPC_WEAK_FUNC(sub_8398E138);
PPC_FUNC_IMPL(__imp__sub_8398E138) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398e194
	if (cr6.eq) goto loc_8398E194;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8398E170;
	sub_82595150(ctx, base);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8398e18c
	if (cr6.eq) goto loc_8398E18C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8398e0c8
	ctx.lr = 0x8398E184;
	sub_8398E0C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8398E18C;
	sub_82416268(ctx, base);
loc_8398E18C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8398E194;
	sub_82595170(ctx, base);
loc_8398E194:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8398E1B4"))) PPC_WEAK_FUNC(sub_8398E1B4);
PPC_FUNC_IMPL(__imp__sub_8398E1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398E1B8"))) PPC_WEAK_FUNC(sub_8398E1B8);
PPC_FUNC_IMPL(__imp__sub_8398E1B8) {
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
	// lis r10,-31742
	ctx.r10.s64 = -2080243712;
	// lwz r11,-30176(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30176);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8398e21c
	if (!cr6.eq) goto loc_8398E21C;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r31,r8,-30184
	ctx.r31.s64 = ctx.r8.s64 + -30184;
	// stw r11,-30176(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30176, ctx.r11.u32);
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r3,r6,1792
	ctx.r3.s64 = ctx.r6.s64 + 1792;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x831cdcc8
	ctx.lr = 0x8398E204;
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
loc_8398E21C:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-30184
	ctx.r3.s64 = ctx.r11.s64 + -30184;
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

__attribute__((alias("__imp__sub_8398E238"))) PPC_WEAK_FUNC(sub_8398E238);
PPC_FUNC_IMPL(__imp__sub_8398E238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x8398E240;
	__savegprlr_18(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,40188
	ctx.r5.u64 = ctx.r5.u64 | 40188;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8398E25C;
	sub_831CDCF0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,-22844
	ctx.r10.s64 = ctx.r11.s64 + -22844;
	// stb r28,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r28.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// bl 0x825b4878
	ctx.lr = 0x8398E284;
	sub_825B4878(ctx, base);
	// lbz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 148);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8398e298
	if (!cr6.eq) goto loc_8398E298;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825b4878
	ctx.lr = 0x8398E298;
	sub_825B4878(ctx, base);
loc_8398E298:
	// lwz r27,156(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x8398e2b8
	if (!cr6.eq) goto loc_8398E2B8;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r27,r10,4
	xer.ca = ctx.r10.u32 > 4294967291;
	ctx.r27.s64 = ctx.r10.s64 + 4;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// beq 0x8398e2fc
	if (cr0.eq) goto loc_8398E2FC;
loc_8398E2B8:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// li r31,24
	ctx.r31.s64 = 24;
loc_8398E2C4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x8398e2d4
	if (cr6.lt) goto loc_8398E2D4;
	// li r11,23
	ctx.r11.s64 = 23;
loc_8398E2D4:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x8398E2E8;
	sub_831CE980(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 + 112;
	// bne 0x8398e2c4
	if (!cr0.eq) goto loc_8398E2C4;
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
loc_8398E2FC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r28,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r28.u8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// addi r9,r11,-22152
	ctx.r9.s64 = ctx.r11.s64 + -22152;
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// addi r8,r10,-22152
	ctx.r8.s64 = ctx.r10.s64 + -22152;
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// addis r20,r21,1
	ctx.r20.s64 = ctx.r21.s64 + 65536;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// addis r19,r21,2
	ctx.r19.s64 = ctx.r21.s64 + 131072;
	// stw r8,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r8.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r8,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// stb r28,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r28.u8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r28,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r28.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r28,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r28.u32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// addi r20,r20,-11404
	ctx.r20.s64 = ctx.r20.s64 + -11404;
	// stb r28,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r28.u8);
	// addi r19,r19,-25492
	ctx.r19.s64 = ctx.r19.s64 + -25492;
	// stw r28,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r28.u32);
	// stw r28,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// li r18,1
	ctx.r18.s64 = 1;
	// stw r28,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r28.u32);
	// ori r26,r8,51448
	ctx.r26.u64 = ctx.r8.u64 | 51448;
	// stb r28,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r28.u8);
	// ori r24,r7,47452
	ctx.r24.u64 = ctx.r7.u64 | 47452;
	// stw r28,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r28.u32);
	// addi r25,r11,-25152
	ctx.r25.s64 = ctx.r11.s64 + -25152;
	// stw r28,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r28.u32);
	// addi r23,r10,-25140
	ctx.r23.s64 = ctx.r10.s64 + -25140;
	// stw r28,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// addi r22,r9,-25136
	ctx.r22.s64 = ctx.r9.s64 + -25136;
loc_8398E39C:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r29,r10
	ctx.r31.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8398e3f4
	if (!cr6.eq) goto loc_8398E3F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398E3D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82a145d8
	ctx.lr = 0x8398E3E0;
	sub_82A145D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x825a9f08
	ctx.lr = 0x8398E3F0;
	sub_825A9F08(ctx, base);
	// stb r18,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r18.u8);
loc_8398E3F4:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398e440
	if (!cr6.eq) goto loc_8398E440;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398E414;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8398E42C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x825a9f08
	ctx.lr = 0x8398E43C;
	sub_825A9F08(ctx, base);
	// stb r18,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r18.u8);
loc_8398E440:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398e45c
	if (!cr6.eq) goto loc_8398E45C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_8398E45C:
	// mullw r11,r30,r26
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r26.s32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r27,r11,r21
	ctx.r27.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r3,r27,2688
	ctx.r3.s64 = ctx.r27.s64 + 2688;
	// bl 0x825a3550
	ctx.lr = 0x8398E470;
	sub_825A3550(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398e480
	if (cr6.eq) goto loc_8398E480;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_8398E480:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398e4dc
	if (!cr6.eq) goto loc_8398E4DC;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// beq cr6,0x8398e4a4
	if (cr6.eq) goto loc_8398E4A4;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
loc_8398E4A4:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x831d0b08
	ctx.lr = 0x8398E4B4;
	sub_831D0B08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398E4C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a93f0
	ctx.lr = 0x8398E4D8;
	sub_825A93F0(ctx, base);
	// stb r18,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r18.u8);
loc_8398E4DC:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398e528
	if (!cr6.eq) goto loc_8398E528;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398E4FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8398E514;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825a93f0
	ctx.lr = 0x8398E524;
	sub_825A93F0(ctx, base);
	// stb r18,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r18.u8);
loc_8398E528:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398e544
	if (!cr6.eq) goto loc_8398E544;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_8398E544:
	// li r5,6680
	ctx.r5.s64 = 6680;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r3,r27,r24
	ctx.r3.u64 = ctx.r27.u64 + ctx.r24.u64;
	// bl 0x831ce980
	ctx.lr = 0x8398E554;
	sub_831CE980(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398e564
	if (cr6.eq) goto loc_8398E564;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_8398E564:
	// bl 0x831156e8
	ctx.lr = 0x8398E568;
	sub_831156E8(ctx, base);
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312b8f0
	ctx.lr = 0x8398E578;
	sub_8312B8F0(ctx, base);
	// stw r3,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312b8f0
	ctx.lr = 0x8398E588;
	sub_8312B8F0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r3,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x8398e39c
	if (cr6.lt) goto loc_8398E39C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r28,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r28.u8);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,-24672
	ctx.r10.s64 = ctx.r11.s64 + -24672;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8398E5C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8398E5DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825a9570
	ctx.lr = 0x8398E5EC;
	sub_825A9570(ctx, base);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r18,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r18.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8398e60c
	if (!cr6.eq) goto loc_8398E60C;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
loc_8398E60C:
	// addis r3,r21,2
	ctx.r3.s64 = ctx.r21.s64 + 131072;
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r3,r3,-25488
	ctx.r3.s64 = ctx.r3.s64 + -25488;
	// bl 0x831ce980
	ctx.lr = 0x8398E61C;
	sub_831CE980(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,12000
	ctx.r10.s64 = ctx.r11.s64 + 12000;
	// stb r28,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r28.u8);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8398E64C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8398E664;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a0f2a8
	ctx.lr = 0x8398E674;
	sub_82A0F2A8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stb r18,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r18.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8398e694
	if (!cr6.eq) goto loc_8398E694;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_8398E694:
	// bl 0x83102db0
	ctx.lr = 0x8398E698;
	sub_83102DB0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addic r8,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lbz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// ori r5,r10,40184
	ctx.r5.u64 = ctx.r10.u64 | 40184;
	// subfe r4,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// and r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 & ctx.r11.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r8,r3,-24712
	ctx.r8.s64 = ctx.r3.s64 + -24712;
	// stbx r9,r21,r5
	PPC_STORE_U8(ctx.r21.u32 + ctx.r5.u32, ctx.r9.u8);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// beq cr6,0x8398e6fc
	if (cr6.eq) goto loc_8398E6FC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398e6fc
	if (cr6.eq) goto loc_8398E6FC;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8398E6F4;
	sub_8353F3B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
loc_8398E6FC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r28,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r28.u8);
	// beq cr6,0x8398e720
	if (cr6.eq) goto loc_8398E720;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8398E71C;
	sub_8353F3B8(ctx, base);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
loc_8398E720:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r9,r10,-24712
	ctx.r9.s64 = ctx.r10.s64 + -24712;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq cr6,0x8398e760
	if (cr6.eq) goto loc_8398E760;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398e760
	if (cr6.eq) goto loc_8398E760;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8398E758;
	sub_8353F3B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
loc_8398E760:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r28,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r28.u8);
	// beq cr6,0x8398e784
	if (cr6.eq) goto loc_8398E784;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8398E780;
	sub_8353F3B8(ctx, base);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
loc_8398E784:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// addi r31,r1,272
	ctx.r31.s64 = ctx.r1.s64 + 272;
	// addi r30,r11,-24712
	ctx.r30.s64 = ctx.r11.s64 + -24712;
loc_8398E794:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// stw r30,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398e7cc
	if (cr6.eq) goto loc_8398E7CC;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398e7cc
	if (cr6.eq) goto loc_8398E7CC;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8398E7C8;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_8398E7CC:
	// stb r28,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r28.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398e7f4
	if (cr6.eq) goto loc_8398E7F4;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8398E7F0;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_8398E7F4:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x8398e794
	if (!cr0.lt) goto loc_8398E794;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// addi r31,r1,224
	ctx.r31.s64 = ctx.r1.s64 + 224;
	// addi r30,r11,-24712
	ctx.r30.s64 = ctx.r11.s64 + -24712;
loc_8398E80C:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// stw r30,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398e844
	if (cr6.eq) goto loc_8398E844;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398e844
	if (cr6.eq) goto loc_8398E844;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8398E840;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_8398E844:
	// stb r28,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r28.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398e86c
	if (cr6.eq) goto loc_8398E86C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8398E868;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_8398E86C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x8398e80c
	if (!cr0.lt) goto loc_8398E80C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 148);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r9,r10,-9704
	ctx.r9.s64 = ctx.r10.s64 + -9704;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// beq cr6,0x8398e8b4
	if (cr6.eq) goto loc_8398E8B4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398e8b4
	if (cr6.eq) goto loc_8398E8B4;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8398E8AC;
	sub_8353F3B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
loc_8398E8B4:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r28,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r28.u8);
	// beq cr6,0x8398e8d4
	if (cr6.eq) goto loc_8398E8D4;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8398E8D4;
	sub_8353F3B8(ctx, base);
loc_8398E8D4:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398E8DC"))) PPC_WEAK_FUNC(sub_8398E8DC);
PPC_FUNC_IMPL(__imp__sub_8398E8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398E8E0"))) PPC_WEAK_FUNC(sub_8398E8E0);
PPC_FUNC_IMPL(__imp__sub_8398E8E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x8398E8E8;
	__savegprlr_14(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r4,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r4.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r10,r11,-22844
	ctx.r10.s64 = ctx.r11.s64 + -22844;
	// stb r22,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r22.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r22,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r22.u32);
	// stw r22,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r22.u32);
	// stw r22,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r22.u32);
	// bl 0x825b4878
	ctx.lr = 0x8398E91C;
	sub_825B4878(ctx, base);
	// lbz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 148);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8398e930
	if (!cr6.eq) goto loc_8398E930;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825b4878
	ctx.lr = 0x8398E930;
	sub_825B4878(ctx, base);
loc_8398E930:
	// lwz r29,160(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x8398e94c
	if (!cr6.eq) goto loc_8398E94C;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r29,r11,4336
	ctx.r29.s64 = ctx.r11.s64 + 4336;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
loc_8398E94C:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_8398E950:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8357ece0
	ctx.lr = 0x8398E958;
	sub_8357ECE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x831ce980
	ctx.lr = 0x8398E968;
	sub_831CE980(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x8398e978
	if (cr6.lt) goto loc_8398E978;
	// li r11,23
	ctx.r11.s64 = 23;
loc_8398E978:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8357ece0
	ctx.lr = 0x8398E984;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d60
	ctx.lr = 0x8398E988;
	sub_82A47D60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82a47d68
	ctx.lr = 0x8398E994;
	sub_82A47D68(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a322e8
	ctx.lr = 0x8398E9A0;
	sub_82A322E8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x8398e9b0
	if (cr6.lt) goto loc_8398E9B0;
	// li r11,23
	ctx.r11.s64 = 23;
loc_8398E9B0:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x8398E9C4;
	sub_831CE980(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x8398e950
	if (cr6.lt) goto loc_8398E950;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r14,1
	ctx.r14.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398ea3c
	if (cr6.eq) goto loc_8398EA3C;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_8398E9EC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r14,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r14.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8398e9ec
	if (!cr0.eq) goto loc_8398E9EC;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8398ea38
	if (!cr6.eq) goto loc_8398EA38;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x8398EA18;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,12320
	ctx.r5.s64 = ctx.r11.s64 + 12320;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8398EA38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8398EA38:
	// stw r22,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r22.u32);
loc_8398EA3C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r22,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r22.u8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r22,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r22.u32);
	// addi r9,r11,-22152
	ctx.r9.s64 = ctx.r11.s64 + -22152;
	// stw r22,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r22.u32);
	// addi r8,r10,-22152
	ctx.r8.s64 = ctx.r10.s64 + -22152;
	// stw r22,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r22.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r8,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r8.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r8,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// stb r22,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r22.u8);
	// lis r6,0
	ctx.r6.s64 = 0;
	// stw r22,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r22.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r22,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r22.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// stb r22,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r22.u8);
	// lis r31,0
	ctx.r31.s64 = 0;
	// stw r22,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r22.u32);
	// addi r10,r10,-25140
	ctx.r10.s64 = ctx.r10.s64 + -25140;
	// stw r22,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r22.u32);
	// addi r9,r9,-25136
	ctx.r9.s64 = ctx.r9.s64 + -25136;
	// stw r22,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r22.u32);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// stb r22,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r22.u8);
	// stw r22,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r22.u32);
	// ori r19,r8,51448
	ctx.r19.u64 = ctx.r8.u64 | 51448;
	// stw r22,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r22.u32);
	// ori r20,r7,41776
	ctx.r20.u64 = ctx.r7.u64 | 41776;
	// stw r22,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r22.u32);
	// ori r21,r6,39088
	ctx.r21.u64 = ctx.r6.u64 | 39088;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// ori r15,r5,39073
	ctx.r15.u64 = ctx.r5.u64 | 39073;
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// ori r16,r4,39072
	ctx.r16.u64 = ctx.r4.u64 | 39072;
	// ori r17,r3,37236
	ctx.r17.u64 = ctx.r3.u64 | 37236;
	// addi r29,r11,-25152
	ctx.r29.s64 = ctx.r11.s64 + -25152;
	// ori r18,r31,47452
	ctx.r18.u64 = ctx.r31.u64 | 47452;
loc_8398EAF8:
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r23,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r23.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r31,r10
	ctx.r26.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lbz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8398eb50
	if (!cr6.eq) goto loc_8398EB50;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398EB30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82a145d8
	ctx.lr = 0x8398EB3C;
	sub_82A145D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825a9f08
	ctx.lr = 0x8398EB4C;
	sub_825A9F08(ctx, base);
	// stb r14,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r14.u8);
loc_8398EB50:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// add r28,r31,r11
	ctx.r28.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398ebac
	if (!cr6.eq) goto loc_8398EBAC;
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// beq cr6,0x8398eb74
	if (cr6.eq) goto loc_8398EB74;
	// lwz r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
loc_8398EB74:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x831d0b08
	ctx.lr = 0x8398EB84;
	sub_831D0B08(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398EB98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825a93f0
	ctx.lr = 0x8398EBA8;
	sub_825A93F0(ctx, base);
	// stb r14,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r14.u8);
loc_8398EBAC:
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398ebf8
	if (!cr6.eq) goto loc_8398EBF8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398EBCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8398EBE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825a9f08
	ctx.lr = 0x8398EBF4;
	sub_825A9F08(ctx, base);
	// stb r14,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r14.u8);
loc_8398EBF8:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398ec14
	if (!cr6.eq) goto loc_8398EC14;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r10.u32);
loc_8398EC14:
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// lwz r31,12(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398ec64
	if (!cr6.eq) goto loc_8398EC64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398EC38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8398EC50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825a93f0
	ctx.lr = 0x8398EC60;
	sub_825A93F0(ctx, base);
	// stb r14,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r14.u8);
loc_8398EC64:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398ec80
	if (!cr6.eq) goto loc_8398EC80;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r10.u32);
loc_8398EC80:
	// lwz r10,508(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// mullw r11,r23,r19
	ctx.r11.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r19.s32);
	// lwz r27,12(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,10
	ctx.r11.s64 = 10;
	// add r10,r24,r20
	ctx.r10.u64 = ctx.r24.u64 + ctx.r20.u64;
	// add r9,r31,r21
	ctx.r9.u64 = ctx.r31.u64 + ctx.r21.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8398ECA8:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r8)
	ea = 1 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x8398eca8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8398ECA8;
	// lbzx r11,r31,r15
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r15.u32);
	// add r10,r24,r17
	ctx.r10.u64 = ctx.r24.u64 + ctx.r17.u64;
	// lbzx r9,r31,r16
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r16.u32);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// add r25,r24,r18
	ctx.r25.u64 = ctx.r24.u64 + ctx.r18.u64;
	// stb r11,4525(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4525, ctx.r11.u8);
	// stb r9,4524(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4524, ctx.r9.u8);
loc_8398ECD0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a16248
	ctx.lr = 0x8398ECDC;
	sub_82A16248(ctx, base);
	// bl 0x83530640
	ctx.lr = 0x8398ECE0;
	sub_83530640(ctx, base);
	// addi r31,r3,147
	ctx.r31.s64 = ctx.r3.s64 + 147;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a16248
	ctx.lr = 0x8398ECF0;
	sub_82A16248(ctx, base);
	// bl 0x83530640
	ctx.lr = 0x8398ECF4;
	sub_83530640(ctx, base);
	// addi r8,r3,147
	ctx.r8.s64 = ctx.r3.s64 + 147;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// subf r7,r31,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r31.s64;
loc_8398ED00:
	// lbzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8398ed80
	if (cr6.eq) goto loc_8398ED80;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stbx r9,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbz r10,1(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398ed6c
	if (cr6.eq) goto loc_8398ED6C;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r10.u8);
	// lbz r10,2(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398ed74
	if (cr6.eq) goto loc_8398ED74;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r10.u8);
	// lbz r10,3(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398ed7c
	if (cr6.eq) goto loc_8398ED7C;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r10,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r10.u8);
	// blt cr6,0x8398ed00
	if (cr6.lt) goto loc_8398ED00;
	// b 0x8398ed8c
	goto loc_8398ED8C;
loc_8398ED6C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8398ed80
	goto loc_8398ED80;
loc_8398ED74:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x8398ed80
	goto loc_8398ED80;
loc_8398ED7C:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_8398ED80:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8398ed8c
	if (!cr6.lt) goto loc_8398ED8C;
	// stbx r22,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r22.u8);
loc_8398ED8C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// blt cr6,0x8398ecd0
	if (cr6.lt) goto loc_8398ECD0;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398eda8
	if (cr6.eq) goto loc_8398EDA8;
	// stw r22,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r22.u32);
loc_8398EDA8:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398edb8
	if (cr6.eq) goto loc_8398EDB8;
	// stw r22,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r22.u32);
loc_8398EDB8:
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398ee04
	if (!cr6.eq) goto loc_8398EE04;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398EDD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8398EDF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825a9f08
	ctx.lr = 0x8398EE00;
	sub_825A9F08(ctx, base);
	// stb r14,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r14.u8);
loc_8398EE04:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398ee24
	if (!cr6.eq) goto loc_8398EE24;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-20768
	ctx.r9.s64 = ctx.r9.s64 + -20768;
	// stw r9,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r9.u32);
loc_8398EE24:
	// addi r4,r24,2688
	ctx.r4.s64 = ctx.r24.s64 + 2688;
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// bl 0x825a3550
	ctx.lr = 0x8398EE30;
	sub_825A3550(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398ee94
	if (cr6.eq) goto loc_8398EE94;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_8398EE44:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r14,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r14.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8398ee44
	if (!cr0.eq) goto loc_8398EE44;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8398ee90
	if (!cr6.eq) goto loc_8398EE90;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x8398EE70;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,29056
	ctx.r5.s64 = ctx.r11.s64 + 29056;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8398EE90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8398EE90:
	// stw r22,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r22.u32);
loc_8398EE94:
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398eee0
	if (!cr6.eq) goto loc_8398EEE0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398EEB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8398EECC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825a93f0
	ctx.lr = 0x8398EEDC;
	sub_825A93F0(ctx, base);
	// stb r14,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r14.u8);
loc_8398EEE0:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398eefc
	if (!cr6.eq) goto loc_8398EEFC;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,6684
	ctx.r10.s64 = ctx.r11.s64 + 6684;
	// stw r10,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r10.u32);
loc_8398EEFC:
	// li r5,6680
	ctx.r5.s64 = 6680;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x831ce980
	ctx.lr = 0x8398EF0C;
	sub_831CE980(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398ef70
	if (cr6.eq) goto loc_8398EF70;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_8398EF20:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r14,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r14.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8398ef20
	if (!cr0.eq) goto loc_8398EF20;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8398ef6c
	if (!cr6.eq) goto loc_8398EF6C;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x8398EF4C;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,18008
	ctx.r5.s64 = ctx.r11.s64 + 18008;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8398EF6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8398EF6C:
	// stw r22,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r22.u32);
loc_8398EF70:
	// bl 0x831156e8
	ctx.lr = 0x8398EF74;
	sub_831156E8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// ori r10,r11,54132
	ctx.r10.u64 = ctx.r11.u64 | 54132;
	// lwzx r5,r24,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// bl 0x8312bb08
	ctx.lr = 0x8398EF8C;
	sub_8312BB08(ctx, base);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpwi cr6,r23,2
	cr6.compare<int32_t>(ctx.r23.s32, 2, xer);
	// blt cr6,0x8398eaf8
	if (cr6.lt) goto loc_8398EAF8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r22,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r22.u8);
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-24672
	ctx.r10.s64 = ctx.r11.s64 + -24672;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8398EFC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8398EFDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825a9570
	ctx.lr = 0x8398EFEC;
	sub_825A9570(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r14,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r14.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398f00c
	if (!cr6.eq) goto loc_8398F00C;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_8398F00C:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lbz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwz r30,508(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// ori r6,r9,40112
	ctx.r6.u64 = ctx.r9.u64 | 40112;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r4,r7,40113
	ctx.r4.u64 = ctx.r7.u64 | 40113;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r7,r5,40116
	ctx.r7.u64 = ctx.r5.u64 | 40116;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stbx r8,r30,r6
	PPC_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r8.u8);
	// ori r9,r9,40120
	ctx.r9.u64 = ctx.r9.u64 | 40120;
	// lbz r8,65(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// stbx r8,r30,r4
	PPC_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r8.u8);
	// ori r6,r5,40124
	ctx.r6.u64 = ctx.r5.u64 | 40124;
	// lfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stfsx f0,r30,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, temp.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f13,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// ori r4,r5,40128
	ctx.r4.u64 = ctx.r5.u64 | 40128;
	// stfsx f13,r30,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, temp.u32);
	// lfs f12,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r30,r6
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, temp.u32);
	// lbz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// stbx r11,r30,r4
	PPC_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r11.u8);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// bne cr6,0x8398f094
	if (!cr6.eq) goto loc_8398F094;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r3,r11,140
	ctx.r3.s64 = ctx.r11.s64 + 140;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398f108
	if (cr6.eq) goto loc_8398F108;
loc_8398F094:
	// addis r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 131072;
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r4,r4,-25488
	ctx.r4.s64 = ctx.r4.s64 + -25488;
	// bl 0x831ce980
	ctx.lr = 0x8398F0A4;
	sub_831CE980(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398f108
	if (cr6.eq) goto loc_8398F108;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_8398F0B8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r14,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r14.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8398f0b8
	if (!cr0.eq) goto loc_8398F0B8;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8398f104
	if (!cr6.eq) goto loc_8398F104;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x8398F0E4;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,19664
	ctx.r5.s64 = ctx.r11.s64 + 19664;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8398F104;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8398F104:
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
loc_8398F108:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stb r22,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r22.u8);
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,12000
	ctx.r10.s64 = ctx.r11.s64 + 12000;
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8398F134;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8398F14C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a0f2a8
	ctx.lr = 0x8398F15C;
	sub_82A0F2A8(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stb r14,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r14.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8398f17c
	if (!cr6.eq) goto loc_8398F17C;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
loc_8398F17C:
	// bl 0x83102db0
	ctx.lr = 0x8398F180;
	sub_83102DB0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,40184
	ctx.r10.u64 = ctx.r11.u64 | 40184;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8398f1f4
	if (cr6.eq) goto loc_8398F1F4;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_8398F1A4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r14,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r14.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8398f1a4
	if (!cr0.eq) goto loc_8398F1A4;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8398f1f0
	if (!cr6.eq) goto loc_8398F1F0;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x8398F1D0;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-14088
	ctx.r5.s64 = ctx.r11.s64 + -14088;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8398F1F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8398F1F0:
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
loc_8398F1F4:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r9,r10,-24712
	ctx.r9.s64 = ctx.r10.s64 + -24712;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq cr6,0x8398f234
	if (cr6.eq) goto loc_8398F234;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398f234
	if (cr6.eq) goto loc_8398F234;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8398F22C;
	sub_8353F3B8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
loc_8398F234:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r22,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r22.u8);
	// beq cr6,0x8398f258
	if (cr6.eq) goto loc_8398F258;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8398F254;
	sub_8353F3B8(ctx, base);
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
loc_8398F258:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r10,-24712
	ctx.r9.s64 = ctx.r10.s64 + -24712;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x8398f298
	if (cr6.eq) goto loc_8398F298;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398f298
	if (cr6.eq) goto loc_8398F298;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8398F290;
	sub_8353F3B8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
loc_8398F298:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r22,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r22.u8);
	// beq cr6,0x8398f2bc
	if (cr6.eq) goto loc_8398F2BC;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8398F2B8;
	sub_8353F3B8(ctx, base);
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
loc_8398F2BC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// addi r31,r1,272
	ctx.r31.s64 = ctx.r1.s64 + 272;
	// addi r30,r11,-24712
	ctx.r30.s64 = ctx.r11.s64 + -24712;
loc_8398F2CC:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// stw r30,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398f304
	if (cr6.eq) goto loc_8398F304;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398f304
	if (cr6.eq) goto loc_8398F304;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8398F300;
	sub_8353F3B8(ctx, base);
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
loc_8398F304:
	// stb r22,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r22.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398f32c
	if (cr6.eq) goto loc_8398F32C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8398F328;
	sub_8353F3B8(ctx, base);
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
loc_8398F32C:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x8398f2cc
	if (!cr0.lt) goto loc_8398F2CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// addi r31,r1,224
	ctx.r31.s64 = ctx.r1.s64 + 224;
	// addi r30,r11,-24712
	ctx.r30.s64 = ctx.r11.s64 + -24712;
loc_8398F344:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// stw r30,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398f37c
	if (cr6.eq) goto loc_8398F37C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398f37c
	if (cr6.eq) goto loc_8398F37C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8398F378;
	sub_8353F3B8(ctx, base);
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
loc_8398F37C:
	// stb r22,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r22.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398f3a4
	if (cr6.eq) goto loc_8398F3A4;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8398F3A0;
	sub_8353F3B8(ctx, base);
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
loc_8398F3A4:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x8398f344
	if (!cr0.lt) goto loc_8398F344;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 148);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r9,r10,-9704
	ctx.r9.s64 = ctx.r10.s64 + -9704;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// beq cr6,0x8398f3ec
	if (cr6.eq) goto loc_8398F3EC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8398f3ec
	if (cr6.eq) goto loc_8398F3EC;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8398F3E4;
	sub_8353F3B8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r22,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r22.u32);
loc_8398F3EC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r22,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r22.u8);
	// beq cr6,0x8398f40c
	if (cr6.eq) goto loc_8398F40C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8398F40C;
	sub_8353F3B8(ctx, base);
loc_8398F40C:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398F414"))) PPC_WEAK_FUNC(sub_8398F414);
PPC_FUNC_IMPL(__imp__sub_8398F414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398F418"))) PPC_WEAK_FUNC(sub_8398F418);
PPC_FUNC_IMPL(__imp__sub_8398F418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x8398F420;
	__savegprlr_18(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r18,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r18.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x83987ca0
	ctx.lr = 0x8398F450;
	sub_83987CA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398fbb8
	if (cr6.eq) goto loc_8398FBB8;
	// li r23,32
	ctx.r23.s64 = 32;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,40188
	ctx.r4.u64 = ctx.r4.u64 | 40188;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82595718
	ctx.lr = 0x8398F474;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398f488
	if (cr6.eq) goto loc_8398F488;
	// bl 0x8398e040
	ctx.lr = 0x8398F480;
	sub_8398E040(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// b 0x8398f48c
	goto loc_8398F48C;
loc_8398F488:
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
loc_8398F48C:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,40188
	ctx.r5.u64 = ctx.r5.u64 | 40188;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8398F4A0;
	sub_831CDCF0(ctx, base);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8398e238
	ctx.lr = 0x8398F4C8;
	sub_8398E238(ctx, base);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,40603
	ctx.r4.u64 = ctx.r4.u64 | 40603;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595718
	ctx.lr = 0x8398F4E0;
	sub_82595718(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,40603
	ctx.r5.u64 = ctx.r5.u64 | 40603;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8398F4F4;
	sub_831CDCF0(ctx, base);
	// li r5,415
	ctx.r5.s64 = 415;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r19,r31,415
	ctx.r19.s64 = ctx.r31.s64 + 415;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8398F510;
	sub_831CDCF0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,415
	ctx.r5.s64 = 415;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x8398F520;
	sub_831CE980(ctx, base);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8398F538;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// clrlwi r21,r3,24
	ctx.r21.u64 = ctx.r3.u32 & 0xFF;
	// li r25,3
	ctx.r25.s64 = 3;
	// li r26,2
	ctx.r26.s64 = 2;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// addi r23,r20,188
	ctx.r23.s64 = ctx.r20.s64 + 188;
	// li r22,6
	ctx.r22.s64 = 6;
loc_8398F558:
	// lwz r11,-112(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -112);
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, xer);
	// bne cr6,0x8398f630
	if (!cr6.eq) goto loc_8398F630;
	// srawi r11,r28,3
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 3;
	// addi r4,r23,-188
	ctx.r4.s64 = ctx.r23.s64 + -188;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r28,3
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 3;
	// li r5,112
	ctx.r5.s64 = 112;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r27,3
	xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r27.s32 >> 3;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// subf r3,r7,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r7.s64;
	// srawi r9,r27,3
	xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r27.s32 >> 3;
	// slw r8,r30,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r3.u8 & 0x3F));
	// or r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 | ctx.r6.u64;
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// stbx r7,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u8);
	// srawi r8,r26,3
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r26.s32 >> 3;
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// subf r7,r9,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r9.s64;
	// srawi r3,r26,3
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r26.s32 >> 3;
	// slw r6,r30,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// or r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stbx r7,r10,r31
	PPC_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u8);
	// srawi r8,r25,3
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r25.s32 >> 3;
	// subf r9,r6,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r6.s64;
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// slw r7,r30,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r9.u8 & 0x3F));
	// srawi r6,r25,3
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r25.s32 >> 3;
	// lbzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addze r8,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r8.s64 = temp.s64;
	// or r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stbx r7,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u8);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// subf r8,r6,r25
	ctx.r8.s64 = ctx.r25.s64 - ctx.r6.s64;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// slw r7,r30,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r8.u8 & 0x3F));
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// lbzx r6,r10,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// or r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stbx r11,r10,r31
	PPC_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u8);
	// bl 0x831ce980
	ctx.lr = 0x8398F624;
	sub_831CE980(ctx, base);
	// addi r24,r24,112
	ctx.r24.s64 = ctx.r24.s64 + 112;
	// addi r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 + 112;
	// b 0x8398f640
	goto loc_8398F640;
loc_8398F630:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_8398F640:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, xer);
	// bne cr6,0x8398f718
	if (!cr6.eq) goto loc_8398F718;
	// srawi r11,r28,3
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 3;
	// addi r4,r23,-76
	ctx.r4.s64 = ctx.r23.s64 + -76;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r28,3
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 3;
	// li r5,112
	ctx.r5.s64 = 112;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r27,3
	xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r27.s32 >> 3;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// subf r3,r7,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r7.s64;
	// srawi r9,r27,3
	xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r27.s32 >> 3;
	// slw r8,r30,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r3.u8 & 0x3F));
	// or r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 | ctx.r6.u64;
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// stbx r7,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u8);
	// srawi r8,r26,3
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r26.s32 >> 3;
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// subf r7,r9,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r9.s64;
	// srawi r3,r26,3
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r26.s32 >> 3;
	// slw r6,r30,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// or r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stbx r7,r10,r31
	PPC_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u8);
	// srawi r8,r25,3
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r25.s32 >> 3;
	// subf r9,r6,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r6.s64;
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// slw r7,r30,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r9.u8 & 0x3F));
	// srawi r6,r25,3
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r25.s32 >> 3;
	// lbzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addze r8,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r8.s64 = temp.s64;
	// or r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stbx r7,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u8);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// subf r8,r6,r25
	ctx.r8.s64 = ctx.r25.s64 - ctx.r6.s64;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// slw r7,r30,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r8.u8 & 0x3F));
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// lbzx r6,r10,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// or r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stbx r11,r10,r31
	PPC_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u8);
	// bl 0x831ce980
	ctx.lr = 0x8398F70C;
	sub_831CE980(ctx, base);
	// addi r24,r24,112
	ctx.r24.s64 = ctx.r24.s64 + 112;
	// addi r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 + 112;
	// b 0x8398f728
	goto loc_8398F728;
loc_8398F718:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_8398F728:
	// lwz r11,112(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 112);
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, xer);
	// bne cr6,0x8398f800
	if (!cr6.eq) goto loc_8398F800;
	// srawi r11,r28,3
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 3;
	// addi r4,r23,36
	ctx.r4.s64 = ctx.r23.s64 + 36;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r28,3
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 3;
	// li r5,112
	ctx.r5.s64 = 112;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r27,3
	xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r27.s32 >> 3;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// subf r3,r7,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r7.s64;
	// srawi r9,r27,3
	xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r27.s32 >> 3;
	// slw r8,r30,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r3.u8 & 0x3F));
	// or r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 | ctx.r6.u64;
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// stbx r7,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u8);
	// srawi r8,r26,3
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r26.s32 >> 3;
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// subf r7,r9,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r9.s64;
	// srawi r3,r26,3
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r26.s32 >> 3;
	// slw r6,r30,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// or r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stbx r7,r10,r31
	PPC_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u8);
	// srawi r8,r25,3
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r25.s32 >> 3;
	// subf r9,r6,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r6.s64;
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// slw r7,r30,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r9.u8 & 0x3F));
	// srawi r6,r25,3
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r25.s32 >> 3;
	// lbzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addze r8,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r8.s64 = temp.s64;
	// or r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stbx r7,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u8);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// subf r8,r6,r25
	ctx.r8.s64 = ctx.r25.s64 - ctx.r6.s64;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// slw r7,r30,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r8.u8 & 0x3F));
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// lbzx r6,r10,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// or r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stbx r11,r10,r31
	PPC_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u8);
	// bl 0x831ce980
	ctx.lr = 0x8398F7F4;
	sub_831CE980(ctx, base);
	// addi r24,r24,112
	ctx.r24.s64 = ctx.r24.s64 + 112;
	// addi r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 + 112;
	// b 0x8398f810
	goto loc_8398F810;
loc_8398F800:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_8398F810:
	// lwz r11,224(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 224);
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, xer);
	// bne cr6,0x8398f8e8
	if (!cr6.eq) goto loc_8398F8E8;
	// srawi r11,r28,3
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 3;
	// addi r4,r23,148
	ctx.r4.s64 = ctx.r23.s64 + 148;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r28,3
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 3;
	// li r5,112
	ctx.r5.s64 = 112;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r27,3
	xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r27.s32 >> 3;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// subf r3,r7,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r7.s64;
	// srawi r10,r27,3
	xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 3;
	// slw r8,r30,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r3.u8 & 0x3F));
	// or r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 | ctx.r6.u64;
	// addze r6,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r6.s64 = temp.s64;
	// stbx r7,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u8);
	// srawi r8,r26,3
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r26.s32 >> 3;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// subf r7,r10,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r10.s64;
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// slw r6,r30,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// srawi r3,r26,3
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r26.s32 >> 3;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// or r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 | ctx.r11.u64;
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// stbx r7,r9,r31
	PPC_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r7.u8);
	// srawi r9,r25,3
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r25.s32 >> 3;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r11,r6,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r6.s64;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// slw r8,r30,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// lbzx r6,r10,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r7,r25,3
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r25.s32 >> 3;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// stbx r8,r10,r31
	PPC_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u8);
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r7,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r7.s64;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// slw r8,r30,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stbx r6,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u8);
	// bl 0x831ce980
	ctx.lr = 0x8398F8DC;
	sub_831CE980(ctx, base);
	// addi r24,r24,112
	ctx.r24.s64 = ctx.r24.s64 + 112;
	// addi r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 + 112;
	// b 0x8398f8f8
	goto loc_8398F8F8;
loc_8398F8E8:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_8398F8F8:
	// addic. r22,r22,-1
	xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// addi r23,r23,448
	ctx.r23.s64 = ctx.r23.s64 + 448;
	// bne 0x8398f558
	if (!cr0.eq) goto loc_8398F558;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r18,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r18.u8);
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// stb r18,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r18.u8);
	// addi r11,r20,227
	ctx.r11.s64 = ctx.r20.s64 + 227;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8398F91C:
	// lwz r10,-151(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -151);
	// cmplw cr6,r10,r21
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, xer);
	// bne cr6,0x8398f948
	if (!cr6.eq) goto loc_8398F948;
	// lbz r9,-224(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -224);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8398f938
	if (cr6.eq) goto loc_8398F938;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_8398F938:
	// lbz r9,-223(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -223);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8398f948
	if (cr6.eq) goto loc_8398F948;
	// stb r30,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r30.u8);
loc_8398F948:
	// lwz r10,-39(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -39);
	// cmplw cr6,r10,r21
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, xer);
	// bne cr6,0x8398f974
	if (!cr6.eq) goto loc_8398F974;
	// lbz r9,-112(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -112);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8398f964
	if (cr6.eq) goto loc_8398F964;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_8398F964:
	// lbz r9,-111(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -111);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8398f974
	if (cr6.eq) goto loc_8398F974;
	// stb r30,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r30.u8);
loc_8398F974:
	// lwz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 73);
	// cmplw cr6,r10,r21
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, xer);
	// bne cr6,0x8398f9a0
	if (!cr6.eq) goto loc_8398F9A0;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8398f990
	if (cr6.eq) goto loc_8398F990;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_8398F990:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8398f9a0
	if (cr6.eq) goto loc_8398F9A0;
	// stb r30,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r30.u8);
loc_8398F9A0:
	// lwz r10,185(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 185);
	// cmplw cr6,r10,r21
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, xer);
	// bne cr6,0x8398f9cc
	if (!cr6.eq) goto loc_8398F9CC;
	// lbz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 112);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8398f9bc
	if (cr6.eq) goto loc_8398F9BC;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_8398F9BC:
	// lbz r9,113(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 113);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8398f9cc
	if (cr6.eq) goto loc_8398F9CC;
	// stb r30,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r30.u8);
loc_8398F9CC:
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// bdnz 0x8398f91c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8398F91C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// addi r26,r20,2688
	ctx.r26.s64 = ctx.r20.s64 + 2688;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// ori r29,r10,51448
	ctx.r29.u64 = ctx.r10.u64 | 51448;
loc_8398F9EC:
	// lbzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398fa4c
	if (cr6.eq) goto loc_8398FA4C;
	// li r11,1608
	ctx.r11.s64 = 1608;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8398FA00:
	// srawi r11,r28,3
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r28,3
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 3;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// subf r6,r8,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r8.s64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r5,r30,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r6.u8 & 0x3F));
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stbx r3,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u8);
	// bdnz 0x8398fa00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8398FA00;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r24,r19
	ctx.r3.u64 = ctx.r24.u64 + ctx.r19.u64;
	// bl 0x831ce980
	ctx.lr = 0x8398FA44;
	sub_831CE980(ctx, base);
	// add r24,r24,r29
	ctx.r24.u64 = ctx.r24.u64 + ctx.r29.u64;
	// b 0x8398fa50
	goto loc_8398FA50;
loc_8398FA4C:
	// addi r28,r28,1608
	ctx.r28.s64 = ctx.r28.s64 + 1608;
loc_8398FA50:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r26,r26,r29
	ctx.r26.u64 = ctx.r26.u64 + ctx.r29.u64;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x8398f9ec
	if (cr6.lt) goto loc_8398F9EC;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398fb64
	if (cr6.eq) goto loc_8398FB64;
	// srawi r10,r28,3
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 3;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r28,3
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r28.s32 >> 3;
	// add r3,r24,r19
	ctx.r3.u64 = ctx.r24.u64 + ctx.r19.u64;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r4,r9,r31
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// addze r10,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r10.s64 = temp.s64;
	// subf r8,r5,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r5.s64;
	// srawi r7,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// slw r6,r30,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r8.u8 & 0x3F));
	// or r5,r6,r4
	ctx.r5.u64 = ctx.r6.u64 | ctx.r4.u64;
	// addze r4,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r4.s64 = temp.s64;
	// stbx r5,r9,r31
	PPC_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r5.u8);
	// li r5,140
	ctx.r5.s64 = 140;
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addis r4,r20,2
	ctx.r4.s64 = ctx.r20.s64 + 131072;
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// slw r9,r30,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r6.u8 & 0x3F));
	// lbzx r7,r10,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// srawi r8,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	// addi r4,r4,-25488
	ctx.r4.s64 = ctx.r4.s64 + -25488;
	// or r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// stbx r7,r10,r31
	PPC_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u8);
	// srawi r9,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// addi r10,r28,3
	ctx.r10.s64 = ctx.r28.s64 + 3;
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r7,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 3;
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// slw r7,r30,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r6.u8 & 0x3F));
	// lbzx r6,r8,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// srawi r29,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 3;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// addze r6,r29
	temp.s64 = ctx.r29.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r6.s64 = temp.s64;
	// stbx r7,r8,r31
	PPC_STORE_U8(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u8);
	// srawi r8,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r6,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r6.s64;
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// slw r6,r30,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r7.u8 & 0x3F));
	// srawi r8,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	// lbzx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// subf r7,r6,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r6.s64;
	// stbx r8,r9,r31
	PPC_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u8);
	// slw r6,r30,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// or r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 | ctx.r11.u64;
	// stbx r9,r10,r31
	PPC_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u8);
	// bl 0x831ce980
	ctx.lr = 0x8398FB60;
	sub_831CE980(ctx, base);
	// addi r24,r24,140
	ctx.r24.s64 = ctx.r24.s64 + 140;
loc_8398FB64:
	// bl 0x83987ca0
	ctx.lr = 0x8398FB68;
	sub_83987CA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r6,r24,415
	ctx.r6.s64 = ctx.r24.s64 + 415;
	// bl 0x83988948
	ctx.lr = 0x8398FB78;
	sub_83988948(ctx, base);
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825952b8
	ctx.lr = 0x8398FB88;
	sub_825952B8(ctx, base);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x8398fbb8
	if (cr6.eq) goto loc_8398FBB8;
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595150
	ctx.lr = 0x8398FBA0;
	sub_82595150(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8398e0c8
	ctx.lr = 0x8398FBA8;
	sub_8398E0C8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82416268
	ctx.lr = 0x8398FBB0;
	sub_82416268(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595170
	ctx.lr = 0x8398FBB8;
	sub_82595170(ctx, base);
loc_8398FBB8:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398FBC0"))) PPC_WEAK_FUNC(sub_8398FBC0);
PPC_FUNC_IMPL(__imp__sub_8398FBC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8398FBC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8398fc2c
	if (!cr6.eq) goto loc_8398FC2C;
	// li r11,32
	ctx.r11.s64 = 32;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,40188
	ctx.r4.u64 = ctx.r4.u64 | 40188;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x8398FC14;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398fc24
	if (cr6.eq) goto loc_8398FC24;
	// bl 0x8398e040
	ctx.lr = 0x8398FC20;
	sub_8398E040(ctx, base);
	// b 0x8398fc28
	goto loc_8398FC28;
loc_8398FC24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8398FC28:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_8398FC2C:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8398e238
	ctx.lr = 0x8398FC54;
	sub_8398E238(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8398FC5C"))) PPC_WEAK_FUNC(sub_8398FC5C);
PPC_FUNC_IMPL(__imp__sub_8398FC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8398FC60"))) PPC_WEAK_FUNC(sub_8398FC60);
PPC_FUNC_IMPL(__imp__sub_8398FC60) {
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
	ctx.lr = 0x8398FC68;
	__savegprlr_14(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r15,0
	ctx.r15.s64 = 0;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r15,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r15.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x83987ca0
	ctx.lr = 0x8398FC98;
	sub_83987CA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83990128
	if (cr6.eq) goto loc_83990128;
	// li r24,32
	ctx.r24.s64 = 32;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,40188
	ctx.r4.u64 = ctx.r4.u64 | 40188;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82595718
	ctx.lr = 0x8398FCBC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8398fcd4
	if (cr6.eq) goto loc_8398FCD4;
	// bl 0x8398e040
	ctx.lr = 0x8398FCC8;
	sub_8398E040(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// b 0x8398fcdc
	goto loc_8398FCDC;
loc_8398FCD4:
	// stw r15,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// rotlwi r21,r15,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
loc_8398FCDC:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,40188
	ctx.r5.u64 = ctx.r5.u64 | 40188;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8398FCF0;
	sub_831CDCF0(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8398e238
	ctx.lr = 0x8398FD18;
	sub_8398E238(ctx, base);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// li r29,24
	ctx.r29.s64 = 24;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lis r30,-31778
	ctx.r30.s64 = -2082603008;
loc_8398FD28:
	// lwz r3,2056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// lwz r27,76(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398FD40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, xer);
	// beq cr6,0x8398fd58
	if (cr6.eq) goto loc_8398FD58;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583300
	ctx.lr = 0x8398FD58;
	sub_82583300(ctx, base);
loc_8398FD58:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// bne 0x8398fd28
	if (!cr0.eq) goto loc_8398FD28;
	// lwz r3,2056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8398FD78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// clrlwi r22,r3,24
	ctx.r22.u64 = ctx.r3.u32 & 0xFF;
	// stb r15,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r15.u8);
	// ori r4,r4,40603
	ctx.r4.u64 = ctx.r4.u64 | 40603;
	// stb r15,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r15.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r14,r15
	ctx.r14.u64 = ctx.r15.u64;
	// bl 0x82595718
	ctx.lr = 0x8398FDA0;
	sub_82595718(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,40603
	ctx.r5.u64 = ctx.r5.u64 | 40603;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8398FDB4;
	sub_831CDCF0(ctx, base);
	// li r5,415
	ctx.r5.s64 = 415;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r18,r19,415
	ctx.r18.s64 = ctx.r19.s64 + 415;
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// mr r20,r15
	ctx.r20.u64 = ctx.r15.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8398FDD0;
	sub_831CDCF0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,415
	ctx.r5.s64 = 415;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x831ce980
	ctx.lr = 0x8398FDE0;
	sub_831CE980(ctx, base);
	// addi r25,r21,76
	ctx.r25.s64 = ctx.r21.s64 + 76;
	// subfic r24,r21,-76
	xer.ca = ctx.r21.u32 <= 4294967220;
	ctx.r24.s64 = -76 - ctx.r21.s64;
	// li r23,24
	ctx.r23.s64 = 24;
	// li r16,1
	ctx.r16.s64 = 1;
loc_8398FDF0:
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398fe28
	if (cr6.eq) goto loc_8398FE28;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, xer);
	// bne cr6,0x8398fef0
	if (!cr6.eq) goto loc_8398FEF0;
	// lbz r10,-73(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + -73);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398fe18
	if (cr6.eq) goto loc_8398FE18;
	// mr r14,r16
	ctx.r14.u64 = ctx.r16.u64;
loc_8398FE18:
	// lbz r10,-72(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + -72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8398fe28
	if (cr6.eq) goto loc_8398FE28;
	// stb r16,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r16.u8);
loc_8398FE28:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, xer);
	// bne cr6,0x8398fef0
	if (!cr6.eq) goto loc_8398FEF0;
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// addi r28,r25,-76
	ctx.r28.s64 = ctx.r25.s64 + -76;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// add r27,r11,r25
	ctx.r27.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_8398FE4C:
	// li r31,32
	ctx.r31.s64 = 32;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// bne cr6,0x8398fe5c
	if (!cr6.eq) goto loc_8398FE5C;
	// li r31,16
	ctx.r31.s64 = 16;
loc_8398FE5C:
	// add r4,r30,r28
	ctx.r4.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r10,r30,r27
	ctx.r10.u64 = ctx.r30.u64 + ctx.r27.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8398fe98
	if (cr6.eq) goto loc_8398FE98;
	// add r8,r4,r31
	ctx.r8.u64 = ctx.r4.u64 + ctx.r31.u64;
loc_8398FE78:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8398fe98
	if (!cr0.eq) goto loc_8398FE98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x8398fe78
	if (!cr6.eq) goto loc_8398FE78;
loc_8398FE98:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8398fed8
	if (cr6.eq) goto loc_8398FED8;
	// srawi r11,r26,3
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r26,3
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r26.s32 >> 3;
	// add r3,r20,r18
	ctx.r3.u64 = ctx.r20.u64 + ctx.r18.u64;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r7,r11,r19
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// subf r6,r8,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r8.s64;
	// slw r10,r16,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stbx r9,r11,r19
	PPC_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r9.u8);
	// bl 0x831ce980
	ctx.lr = 0x8398FED4;
	sub_831CE980(ctx, base);
	// add r20,r31,r20
	ctx.r20.u64 = ctx.r31.u64 + ctx.r20.u64;
loc_8398FED8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// blt cr6,0x8398fe4c
	if (cr6.lt) goto loc_8398FE4C;
	// b 0x8398fef4
	goto loc_8398FEF4;
loc_8398FEF0:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
loc_8398FEF4:
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// addi r25,r25,112
	ctx.r25.s64 = ctx.r25.s64 + 112;
	// bne 0x8398fdf0
	if (!cr0.eq) goto loc_8398FDF0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stb r14,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r14.u8);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r24,r21,2688
	ctx.r24.s64 = ctx.r21.s64 + 2688;
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// ori r21,r10,51448
	ctx.r21.u64 = ctx.r10.u64 | 51448;
	// ori r22,r9,37360
	ctx.r22.u64 = ctx.r9.u64 | 37360;
loc_8398FF24:
	// lbzx r11,r23,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8398ffec
	if (cr6.eq) goto loc_8398FFEC;
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// add r28,r24,r25
	ctx.r28.u64 = ctx.r24.u64 + ctx.r25.u64;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// addi r27,r11,2688
	ctx.r27.s64 = ctx.r11.s64 + 2688;
loc_8398FF48:
	// li r31,32
	ctx.r31.s64 = 32;
	// cmpwi cr6,r29,1607
	cr6.compare<int32_t>(ctx.r29.s32, 1607, xer);
	// bne cr6,0x8398ff58
	if (!cr6.eq) goto loc_8398FF58;
	// li r31,24
	ctx.r31.s64 = 24;
loc_8398FF58:
	// add r4,r30,r28
	ctx.r4.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r10,r30,r27
	ctx.r10.u64 = ctx.r30.u64 + ctx.r27.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8398ff94
	if (cr6.eq) goto loc_8398FF94;
	// add r8,r4,r31
	ctx.r8.u64 = ctx.r4.u64 + ctx.r31.u64;
loc_8398FF74:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8398ff94
	if (!cr0.eq) goto loc_8398FF94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x8398ff74
	if (!cr6.eq) goto loc_8398FF74;
loc_8398FF94:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8398ffd4
	if (cr6.eq) goto loc_8398FFD4;
	// srawi r11,r26,3
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r26,3
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r26.s32 >> 3;
	// add r3,r20,r18
	ctx.r3.u64 = ctx.r20.u64 + ctx.r18.u64;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r7,r11,r19
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// subf r6,r8,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r8.s64;
	// slw r10,r16,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stbx r9,r11,r19
	PPC_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r9.u8);
	// bl 0x831ce980
	ctx.lr = 0x8398FFD0;
	sub_831CE980(ctx, base);
	// add r20,r31,r20
	ctx.r20.u64 = ctx.r31.u64 + ctx.r20.u64;
loc_8398FFD4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r29,1608
	cr6.compare<int32_t>(ctx.r29.s32, 1608, xer);
	// blt cr6,0x8398ff48
	if (cr6.lt) goto loc_8398FF48;
	// b 0x8398fff0
	goto loc_8398FFF0;
loc_8398FFEC:
	// addi r26,r26,1608
	ctx.r26.s64 = ctx.r26.s64 + 1608;
loc_8398FFF0:
	// add r25,r25,r21
	ctx.r25.u64 = ctx.r25.u64 + ctx.r21.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpw cr6,r25,r22
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r22.s32, xer);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x8398ff24
	if (cr6.lt) goto loc_8398FF24;
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839900d0
	if (cr6.eq) goto loc_839900D0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,4(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// ori r11,r11,40048
	ctx.r11.u64 = ctx.r11.u64 | 40048;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// add r28,r25,r11
	ctx.r28.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_83990030:
	// li r31,32
	ctx.r31.s64 = 32;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// bne cr6,0x83990040
	if (!cr6.eq) goto loc_83990040;
	// li r31,12
	ctx.r31.s64 = 12;
loc_83990040:
	// add r4,r30,r28
	ctx.r4.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r10,r30,r27
	ctx.r10.u64 = ctx.r30.u64 + ctx.r27.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8399007c
	if (cr6.eq) goto loc_8399007C;
	// add r8,r4,r31
	ctx.r8.u64 = ctx.r4.u64 + ctx.r31.u64;
loc_8399005C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8399007c
	if (!cr0.eq) goto loc_8399007C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x8399005c
	if (!cr6.eq) goto loc_8399005C;
loc_8399007C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x839900bc
	if (cr6.eq) goto loc_839900BC;
	// srawi r11,r26,3
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r26,3
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r26.s32 >> 3;
	// add r3,r20,r18
	ctx.r3.u64 = ctx.r20.u64 + ctx.r18.u64;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r7,r11,r19
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// subf r6,r8,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r8.s64;
	// slw r10,r16,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stbx r9,r11,r19
	PPC_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r9.u8);
	// bl 0x831ce980
	ctx.lr = 0x839900B8;
	sub_831CE980(ctx, base);
	// add r20,r31,r20
	ctx.r20.u64 = ctx.r31.u64 + ctx.r20.u64;
loc_839900BC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(ctx.r29.s32, 5, xer);
	// blt cr6,0x83990030
	if (cr6.lt) goto loc_83990030;
loc_839900D0:
	// bl 0x83987ca0
	ctx.lr = 0x839900D4;
	sub_83987CA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r6,r20,415
	ctx.r6.s64 = ctx.r20.s64 + 415;
	// bl 0x83988948
	ctx.lr = 0x839900E4;
	sub_83988948(ctx, base);
	// li r31,32
	ctx.r31.s64 = 32;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x825952b8
	ctx.lr = 0x839900F8;
	sub_825952B8(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83990128
	if (cr6.eq) goto loc_83990128;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595150
	ctx.lr = 0x83990110;
	sub_82595150(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8398e0c8
	ctx.lr = 0x83990118;
	sub_8398E0C8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82416268
	ctx.lr = 0x83990120;
	sub_82416268(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595170
	ctx.lr = 0x83990128;
	sub_82595170(ctx, base);
loc_83990128:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83990130"))) PPC_WEAK_FUNC(sub_83990130);
PPC_FUNC_IMPL(__imp__sub_83990130) {
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
	ctx.lr = 0x83990138;
	__savegprlr_14(ctx, base);
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r3,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r3.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x83987ca0
	ctx.lr = 0x83990164;
	sub_83987CA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83990178
	if (!cr6.eq) goto loc_83990178;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_83990178:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8399019c
	if (cr6.lt) goto loc_8399019C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x839908f4
	if (!cr6.eq) goto loc_839908F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8399019C:
	// bl 0x83987ca0
	ctx.lr = 0x839901A0;
	sub_83987CA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x839889c0
	ctx.lr = 0x839901A8;
	sub_839889C0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839908f0
	if (cr6.eq) goto loc_839908F0;
	// li r5,415
	ctx.r5.s64 = 415;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x831cdcf0
	ctx.lr = 0x839901C8;
	sub_831CDCF0(ctx, base);
	// li r23,32
	ctx.r23.s64 = 32;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,40188
	ctx.r4.u64 = ctx.r4.u64 | 40188;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82595718
	ctx.lr = 0x839901E4;
	sub_82595718(ctx, base);
	// li r15,0
	ctx.r15.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839901f8
	if (cr6.eq) goto loc_839901F8;
	// bl 0x8398e040
	ctx.lr = 0x839901F4;
	sub_8398E040(ctx, base);
	// b 0x839901fc
	goto loc_839901FC;
loc_839901F8:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_839901FC:
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83990260
	if (cr6.eq) goto loc_83990260;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r5,r5,40188
	ctx.r5.u64 = ctx.r5.u64 | 40188;
	// bl 0x831ce980
	ctx.lr = 0x83990218;
	sub_831CE980(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83990258
	if (cr6.eq) goto loc_83990258;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595150
	ctx.lr = 0x83990234;
	sub_82595150(ctx, base);
	// lwz r31,4(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83990250
	if (cr6.eq) goto loc_83990250;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8398e0c8
	ctx.lr = 0x83990248;
	sub_8398E0C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83990250;
	sub_82416268(ctx, base);
loc_83990250:
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595170
	ctx.lr = 0x83990258;
	sub_82595170(ctx, base);
loc_83990258:
	// stw r15,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r15.u32);
	// b 0x83990288
	goto loc_83990288;
loc_83990260:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8398e238
	ctx.lr = 0x83990288;
	sub_8398E238(ctx, base);
loc_83990288:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lis r14,-31778
	ctx.r14.s64 = -2082603008;
	// stw r15,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x839905d4
	if (!cr6.gt) goto loc_839905D4;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r15,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// li r16,15
	ctx.r16.s64 = 15;
	// addi r17,r11,16587
	ctx.r17.s64 = ctx.r11.s64 + 16587;
loc_839902AC:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839905ac
	if (cr6.eq) goto loc_839905AC;
	// lwz r18,16(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// lwz r21,104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// addi r19,r18,415
	ctx.r19.s64 = ctx.r18.s64 + 415;
	// li r20,24
	ctx.r20.s64 = 24;
	// li r26,1
	ctx.r26.s64 = 1;
loc_839902E4:
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// mr r22,r15
	ctx.r22.u64 = ctx.r15.u64;
loc_839902EC:
	// li r29,32
	ctx.r29.s64 = 32;
	// cmpwi cr6,r22,3
	cr6.compare<int32_t>(ctx.r22.s32, 3, xer);
	// bne cr6,0x839902fc
	if (!cr6.eq) goto loc_839902FC;
	// li r29,16
	ctx.r29.s64 = 16;
loc_839902FC:
	// srawi r11,r23,3
	xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 3;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r9,r23,3
	xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r23.s32 >> 3;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addze r31,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r31.s64 = temp.s64;
	// subf r7,r8,r23
	ctx.r7.s64 = ctx.r23.s64 - ctx.r8.s64;
	// slw r30,r26,r7
	ctx.r30.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r6,r31,r18
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r18.u32);
	// and r5,r6,r30
	ctx.r5.u64 = ctx.r6.u64 & ctx.r30.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x839903dc
	if (cr6.eq) goto loc_839903DC;
	// addi r27,r1,352
	ctx.r27.s64 = ctx.r1.s64 + 352;
	// lbzx r28,r31,r27
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// and r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 & ctx.r30.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x839903bc
	if (cr6.eq) goto loc_839903BC;
	// bl 0x82e7e2f8
	ctx.lr = 0x83990340;
	sub_82E7E2F8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83990398
	if (cr6.eq) goto loc_83990398;
	// stw r16,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r16.u32);
	// addi r4,r17,69
	ctx.r4.s64 = ctx.r17.s64 + 69;
	// stw r15,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r15.u32);
	// li r5,85
	ctx.r5.s64 = 85;
	// stb r15,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r15.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cc28
	ctx.lr = 0x83990368;
	sub_8259CC28(ctx, base);
	// stw r16,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r16.u32);
	// stw r15,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r15.u32);
	// addi r4,r17,-1
	ctx.r4.s64 = ctx.r17.s64 + -1;
	// stb r15,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r15.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8259cc28
	ctx.lr = 0x83990384;
	sub_8259CC28(ctx, base);
	// li r6,917
	ctx.r6.s64 = 917;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e7eb70
	ctx.lr = 0x83990398;
	sub_82E7EB70(ctx, base);
loc_83990398:
	// lwz r3,2056(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 2056);
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839903B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r26,1
	ctx.r26.s64 = 1;
loc_839903BC:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// or r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 | ctx.r30.u64;
	// add r4,r25,r19
	ctx.r4.u64 = ctx.r25.u64 + ctx.r19.u64;
	// add r3,r21,r24
	ctx.r3.u64 = ctx.r21.u64 + ctx.r24.u64;
	// stbx r10,r31,r27
	PPC_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u8);
	// bl 0x831ce980
	ctx.lr = 0x839903D8;
	sub_831CE980(ctx, base);
	// add r25,r29,r25
	ctx.r25.u64 = ctx.r29.u64 + ctx.r25.u64;
loc_839903DC:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// add r24,r29,r24
	ctx.r24.u64 = ctx.r29.u64 + ctx.r24.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpwi cr6,r22,4
	cr6.compare<int32_t>(ctx.r22.s32, 4, xer);
	// blt cr6,0x839902ec
	if (cr6.lt) goto loc_839902EC;
	// addic. r20,r20,-1
	xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	cr0.compare<int32_t>(ctx.r20.s32, 0, xer);
	// addi r21,r21,112
	ctx.r21.s64 = ctx.r21.s64 + 112;
	// bne 0x839902e4
	if (!cr0.eq) goto loc_839902E4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r20,2
	ctx.r20.s64 = 2;
	// addi r21,r11,2688
	ctx.r21.s64 = ctx.r11.s64 + 2688;
loc_83990408:
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// mr r22,r15
	ctx.r22.u64 = ctx.r15.u64;
loc_83990410:
	// li r29,32
	ctx.r29.s64 = 32;
	// cmpwi cr6,r22,1607
	cr6.compare<int32_t>(ctx.r22.s32, 1607, xer);
	// bne cr6,0x83990420
	if (!cr6.eq) goto loc_83990420;
	// li r29,24
	ctx.r29.s64 = 24;
loc_83990420:
	// srawi r11,r23,3
	xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 3;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r9,r23,3
	xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r23.s32 >> 3;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addze r31,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r31.s64 = temp.s64;
	// subf r7,r8,r23
	ctx.r7.s64 = ctx.r23.s64 - ctx.r8.s64;
	// slw r30,r26,r7
	ctx.r30.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r6,r31,r18
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r18.u32);
	// and r5,r6,r30
	ctx.r5.u64 = ctx.r6.u64 & ctx.r30.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83990500
	if (cr6.eq) goto loc_83990500;
	// addi r27,r1,352
	ctx.r27.s64 = ctx.r1.s64 + 352;
	// lbzx r28,r31,r27
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// and r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 & ctx.r30.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x839904e0
	if (cr6.eq) goto loc_839904E0;
	// bl 0x82e7e2f8
	ctx.lr = 0x83990464;
	sub_82E7E2F8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839904bc
	if (cr6.eq) goto loc_839904BC;
	// stw r16,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r16.u32);
	// addi r4,r17,157
	ctx.r4.s64 = ctx.r17.s64 + 157;
	// stw r15,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r15.u32);
	// li r5,85
	ctx.r5.s64 = 85;
	// stb r15,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r15.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8259cc28
	ctx.lr = 0x8399048C;
	sub_8259CC28(ctx, base);
	// stw r16,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r16.u32);
	// stw r15,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r15.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// stb r15,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r15.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8259cc28
	ctx.lr = 0x839904A8;
	sub_8259CC28(ctx, base);
	// li r6,974
	ctx.r6.s64 = 974;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e7eb70
	ctx.lr = 0x839904BC;
	sub_82E7EB70(ctx, base);
loc_839904BC:
	// lwz r3,2056(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 2056);
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839904DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r26,1
	ctx.r26.s64 = 1;
loc_839904E0:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// or r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 | ctx.r30.u64;
	// add r4,r25,r19
	ctx.r4.u64 = ctx.r25.u64 + ctx.r19.u64;
	// add r3,r21,r24
	ctx.r3.u64 = ctx.r21.u64 + ctx.r24.u64;
	// stbx r10,r31,r27
	PPC_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u8);
	// bl 0x831ce980
	ctx.lr = 0x839904FC;
	sub_831CE980(ctx, base);
	// add r25,r29,r25
	ctx.r25.u64 = ctx.r29.u64 + ctx.r25.u64;
loc_83990500:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// add r24,r29,r24
	ctx.r24.u64 = ctx.r29.u64 + ctx.r24.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpwi cr6,r22,1608
	cr6.compare<int32_t>(ctx.r22.s32, 1608, xer);
	// blt cr6,0x83990410
	if (cr6.lt) goto loc_83990410;
	// addis r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 65536;
	// addic. r20,r20,-1
	xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	cr0.compare<int32_t>(ctx.r20.s32, 0, xer);
	// addi r21,r21,-14088
	ctx.r21.s64 = ctx.r21.s64 + -14088;
	// bne 0x83990408
	if (!cr0.eq) goto loc_83990408;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// addis r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 131072;
	// addi r28,r28,-25488
	ctx.r28.s64 = ctx.r28.s64 + -25488;
loc_83990538:
	// li r31,32
	ctx.r31.s64 = 32;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// bne cr6,0x83990548
	if (!cr6.eq) goto loc_83990548;
	// li r31,12
	ctx.r31.s64 = 12;
loc_83990548:
	// srawi r11,r23,3
	xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 3;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r9,r23,3
	xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r23.s32 >> 3;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// subf r7,r8,r23
	ctx.r7.s64 = ctx.r23.s64 - ctx.r8.s64;
	// slw r9,r26,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r6,r11,r18
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r18.u32);
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83990598
	if (cr6.eq) goto loc_83990598;
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r25,r19
	ctx.r4.u64 = ctx.r25.u64 + ctx.r19.u64;
	// add r3,r30,r28
	ctx.r3.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stbx r7,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// bl 0x831ce980
	ctx.lr = 0x83990594;
	sub_831CE980(ctx, base);
	// add r25,r31,r25
	ctx.r25.u64 = ctx.r31.u64 + ctx.r25.u64;
loc_83990598:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(ctx.r29.s32, 5, xer);
	// blt cr6,0x83990538
	if (cr6.lt) goto loc_83990538;
loc_839905AC:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// addi r7,r8,28
	ctx.r7.s64 = ctx.r8.s64 + 28;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// blt cr6,0x839902ac
	if (cr6.lt) goto loc_839902AC;
loc_839905D4:
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r30,24
	ctx.r30.s64 = 24;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_839905E4:
	// lwz r3,2056(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 2056);
	// lwz r27,76(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839905FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, xer);
	// beq cr6,0x83990614
	if (cr6.eq) goto loc_83990614;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583300
	ctx.lr = 0x83990614;
	sub_82583300(ctx, base);
loc_83990614:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// bne 0x839905e4
	if (!cr0.eq) goto loc_839905E4;
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// stw r15,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r15.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r15,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r15.u32);
	// stw r15,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r15.u32);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// stw r15,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r15.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stw r15,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r15.u32);
	// li r21,11
	ctx.r21.s64 = 11;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// sth r11,20(r10)
	PPC_STORE_U16(ctx.r10.u32 + 20, ctx.r11.u16);
	// stw r15,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r15.u32);
loc_83990668:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r9,22
	cr6.compare<int32_t>(ctx.r9.s32, 22, xer);
	// bge cr6,0x83990684
	if (!cr6.lt) goto loc_83990684;
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x8399074c
	goto loc_8399074C;
loc_83990684:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// bge cr6,0x83990708
	if (!cr6.lt) goto loc_83990708;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x839906ac
	if (cr6.eq) goto loc_839906AC;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x839906cc
	if (cr6.lt) goto loc_839906CC;
loc_839906AC:
	// xoris r9,r21,32768
	ctx.r9.u64 = ctx.r21.u64 ^ 2147483648;
	// subf r8,r21,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r21.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addc r7,r8,r9
	temp.u8 = ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32;
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	xer.ca = temp.u8;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r29
	ctx.r4.u64 = ctx.r5.u64 & ctx.r29.u64;
	// bl 0x82a504f0
	ctx.lr = 0x839906CC;
	sub_82A504F0(ctx, base);
loc_839906CC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839906f0
	if (!cr6.eq) goto loc_839906F0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x83990744
	goto loc_83990744;
loc_839906F0:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x83990744
	goto loc_83990744;
loc_83990708:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8399074c
	if (cr6.eq) goto loc_8399074C;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x8399074c
	if (!cr6.lt) goto loc_8399074C;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8399074c
	if (!cr6.eq) goto loc_8399074C;
	// cmpwi cr6,r9,22
	cr6.compare<int32_t>(ctx.r9.s32, 22, xer);
	// blt cr6,0x8399074c
	if (cr6.lt) goto loc_8399074C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83990744:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82b96d50
	ctx.lr = 0x8399074C;
	sub_82B96D50(ctx, base);
loc_8399074C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x83990668
	if (cr6.lt) goto loc_83990668;
	// lwz r20,104(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r22,r15
	ctx.r22.u64 = ctx.r15.u64;
	// addi r24,r1,144
	ctx.r24.s64 = ctx.r1.s64 + 144;
loc_83990768:
	// subfic r11,r22,0
	xer.ca = ctx.r22.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r22.s64;
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r8,4(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r6,r22,0
	xer.ca = ctx.r22.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r22.s64;
	// subf. r23,r9,r8
	ctx.r23.s64 = ctx.r8.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r7,r21
	ctx.r10.u64 = ctx.r7.u64 & ctx.r21.u64;
	// clrlwi r11,r5,28
	ctx.r11.u64 = ctx.r5.u32 & 0xF;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// beq 0x83990838
	if (cr0.eq) goto loc_83990838;
	// rotlwi r25,r9,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r27,r10,24
	ctx.r27.u64 = ctx.r10.u32 & 0xFF;
loc_839907A8:
	// lbzx r30,r25,r26
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r26.u32);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpw cr6,r28,r27
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, xer);
	// ble cr6,0x839907fc
	if (!cr6.gt) goto loc_839907FC;
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// addi r29,r10,-1
	ctx.r29.s64 = ctx.r10.s64 + -1;
loc_839907C4:
	// lbzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x839907e0
	if (cr6.eq) goto loc_839907E0;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, xer);
	// bgt cr6,0x839907c4
	if (cr6.gt) goto loc_839907C4;
	// b 0x839907fc
	goto loc_839907FC;
loc_839907E0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r20
	ctx.r3.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bl 0x82a321c8
	ctx.lr = 0x839907F4;
	sub_82A321C8(ctx, base);
	// stbx r30,r29,r31
	PPC_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r30.u8);
	// li r11,1
	ctx.r11.s64 = 1;
loc_839907FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399082c
	if (!cr6.eq) goto loc_8399082C;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r20
	ctx.r31.u64 = ctx.r11.u64 + ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a504f0
	ctx.lr = 0x83990820;
	sub_82A504F0(ctx, base);
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a321c8
	ctx.lr = 0x8399082C;
	sub_82A321C8(ctx, base);
loc_8399082C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r23
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r23.u32, xer);
	// blt cr6,0x839907a8
	if (cr6.lt) goto loc_839907A8;
loc_83990838:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// cmpwi cr6,r22,2
	cr6.compare<int32_t>(ctx.r22.s32, 2, xer);
	// blt cr6,0x83990768
	if (cr6.lt) goto loc_83990768;
	// lwz r29,948(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 948);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8398e8e0
	ctx.lr = 0x83990858;
	sub_8398E8E0(ctx, base);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x8399088c
	if (cr6.eq) goto loc_8399088C;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595150
	ctx.lr = 0x83990874;
	sub_82595150(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8398e0c8
	ctx.lr = 0x8399087C;
	sub_8398E0C8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82416268
	ctx.lr = 0x83990884;
	sub_82416268(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595170
	ctx.lr = 0x8399088C;
	sub_82595170(ctx, base);
loc_8399088C:
	// stw r15,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r15.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595150
	ctx.lr = 0x8399089C;
	sub_82595150(ctx, base);
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838331e8
	ctx.lr = 0x839908A8;
	sub_838331E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x839908B0;
	sub_82416268(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595170
	ctx.lr = 0x839908B8;
	sub_82595170(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r1,176
	ctx.r31.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_839908CC:
	// lwzu r3,-16(r31)
	ea = -16 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839908dc
	if (cr6.eq) goto loc_839908DC;
	// bl 0x82416268
	ctx.lr = 0x839908DC;
	sub_82416268(ctx, base);
loc_839908DC:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r15,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r15.u32);
	// stw r15,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r15.u32);
	// stw r15,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r15.u32);
	// bge 0x839908cc
	if (!cr0.lt) goto loc_839908CC;
loc_839908F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839908F4:
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839908FC"))) PPC_WEAK_FUNC(sub_839908FC);
PPC_FUNC_IMPL(__imp__sub_839908FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83990900"))) PPC_WEAK_FUNC(sub_83990900);
PPC_FUNC_IMPL(__imp__sub_83990900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83990908;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8257fad0
	ctx.lr = 0x83990928;
	sub_8257FAD0(ctx, base);
	// lwz r10,768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// lwz r11,772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r9,30
	cr6.compare<uint32_t>(ctx.r9.u32, 30, xer);
	// blt cr6,0x83990948
	if (cr6.lt) goto loc_83990948;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// b 0x839909c4
	goto loc_839909C4;
loc_83990948:
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r30,r11,52429
	ctx.r30.u64 = ctx.r11.u64 | 52429;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mulhwu r9,r10,r30
	ctx.r9.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// rlwinm r11,r9,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r7,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r7.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x831ce980
	ctx.lr = 0x83990988;
	sub_831CE980(ctx, base);
	// lwz r5,768(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// mulhwu r4,r5,r30
	ctx.r4.u64 = (uint64_t(ctx.r5.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// rlwinm r11,r4,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// addi r10,r11,162
	ctx.r10.s64 = ctx.r11.s64 + 162;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r7,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r7.u32);
loc_839909C4:
	// blt cr6,0x839909d4
	if (cr6.lt) goto loc_839909D4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x839909D4;
	sub_8257FB60(ctx, base);
loc_839909D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839909DC"))) PPC_WEAK_FUNC(sub_839909DC);
PPC_FUNC_IMPL(__imp__sub_839909DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839909E0"))) PPC_WEAK_FUNC(sub_839909E0);
PPC_FUNC_IMPL(__imp__sub_839909E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839909E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8257fad0
	ctx.lr = 0x83990A08;
	sub_8257FAD0(ctx, base);
	// lwz r11,768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// lwz r10,772(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83990a3c
	if (!cr0.eq) goto loc_83990A3C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83990a30
	if (cr6.lt) goto loc_83990A30;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x83990A30;
	sub_8257FB60(ctx, base);
loc_83990A30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83990A3C:
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// lwz r9,772(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,52429
	ctx.r11.u64 = ctx.r11.u64 | 52429;
	// mulhwu r8,r9,r11
	ctx.r8.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwinm r11,r8,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r5,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r5.s64;
	// addi r4,r11,162
	ctx.r4.s64 = ctx.r11.s64 + 162;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// lwz r9,772(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// mulhwu r8,r9,r7
	ctx.r8.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// rlwinm r11,r8,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r6,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r6.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x831ce980
	ctx.lr = 0x83990AAC;
	sub_831CE980(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83990ac4
	if (cr6.lt) goto loc_83990AC4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x83990AC4;
	sub_8257FB60(ctx, base);
loc_83990AC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83990AD0"))) PPC_WEAK_FUNC(sub_83990AD0);
PPC_FUNC_IMPL(__imp__sub_83990AD0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x83990AF4;
	sub_8257FAD0(ctx, base);
	// lwz r11,772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// lwz r10,768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// subf. r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83990b34
	if (!cr0.eq) goto loc_83990B34;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83990b1c
	if (cr6.lt) goto loc_83990B1C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x83990B1C;
	sub_8257FB60(ctx, base);
loc_83990B1C:
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
loc_83990B34:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r9.u32);
	// blt cr6,0x83990b54
	if (cr6.lt) goto loc_83990B54;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x83990B54;
	sub_8257FB60(ctx, base);
loc_83990B54:
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

__attribute__((alias("__imp__sub_83990B6C"))) PPC_WEAK_FUNC(sub_83990B6C);
PPC_FUNC_IMPL(__imp__sub_83990B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83990B70"))) PPC_WEAK_FUNC(sub_83990B70);
PPC_FUNC_IMPL(__imp__sub_83990B70) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83990bc8
	if (!cr6.eq) goto loc_83990BC8;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,312(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83990BA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825b27f0
	ctx.lr = 0x83990BB8;
	sub_825B27F0(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// stb r7,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r7.u8);
loc_83990BC8:
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

__attribute__((alias("__imp__sub_83990BDC"))) PPC_WEAK_FUNC(sub_83990BDC);
PPC_FUNC_IMPL(__imp__sub_83990BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83990BE0"))) PPC_WEAK_FUNC(sub_83990BE0);
PPC_FUNC_IMPL(__imp__sub_83990BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83990BE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258be28
	ctx.lr = 0x83990C00;
	sub_8258BE28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bne cr6,0x83990c38
	if (!cr6.eq) goto loc_83990C38;
loc_83990C18:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258bd68
	ctx.lr = 0x83990C24;
	sub_8258BD68(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// beq cr6,0x83990c18
	if (cr6.eq) goto loc_83990C18;
loc_83990C38:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x8258bdc8
	ctx.lr = 0x83990C64;
	sub_8258BDC8(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x83990c78
	if (cr6.lt) goto loc_83990C78;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258be88
	ctx.lr = 0x83990C78;
	sub_8258BE88(ctx, base);
loc_83990C78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83990C80"))) PPC_WEAK_FUNC(sub_83990C80);
PPC_FUNC_IMPL(__imp__sub_83990C80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83990C88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258be28
	ctx.lr = 0x83990C9C;
	sub_8258BE28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf. r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83990ccc
	if (!cr0.eq) goto loc_83990CCC;
loc_83990CB0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258bd68
	ctx.lr = 0x83990CBC;
	sub_8258BD68(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83990cb0
	if (cr0.eq) goto loc_83990CB0;
loc_83990CCC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8258bdc8
	ctx.lr = 0x83990CF4;
	sub_8258BDC8(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x83990d08
	if (cr6.lt) goto loc_83990D08;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258be88
	ctx.lr = 0x83990D08;
	sub_8258BE88(ctx, base);
loc_83990D08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83990D14"))) PPC_WEAK_FUNC(sub_83990D14);
PPC_FUNC_IMPL(__imp__sub_83990D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83990D18"))) PPC_WEAK_FUNC(sub_83990D18);
PPC_FUNC_IMPL(__imp__sub_83990D18) {
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
	// bl 0x83524210
	ctx.lr = 0x83990D38;
	sub_83524210(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83990d58
	if (cr6.eq) goto loc_83990D58;
	// bl 0x82595188
	ctx.lr = 0x83990D48;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83990D58;
	sub_825952B8(ctx, base);
loc_83990D58:
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

__attribute__((alias("__imp__sub_83990D74"))) PPC_WEAK_FUNC(sub_83990D74);
PPC_FUNC_IMPL(__imp__sub_83990D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83990D78"))) PPC_WEAK_FUNC(sub_83990D78);
PPC_FUNC_IMPL(__imp__sub_83990D78) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825b26e8
	ctx.lr = 0x83990D94;
	sub_825B26E8(ctx, base);
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// li r10,240
	ctx.r10.s64 = 240;
	// addi r11,r11,-29800
	ctx.r11.s64 = ctx.r11.s64 + -29800;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83990DA4:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r8,r9,2
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x83990da4
	if (!cr0.eq) goto loc_83990DA4;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,144(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83990DDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,1848(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1848, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_83990DF8"))) PPC_WEAK_FUNC(sub_83990DF8);
PPC_FUNC_IMPL(__imp__sub_83990DF8) {
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
	ctx.lr = 0x83990E00;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r23,r11,-3088
	ctx.r23.s64 = ctx.r11.s64 + -3088;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r24,r23,40
	ctx.r24.s64 = ctx.r23.s64 + 40;
	// addi r22,r11,17372
	ctx.r22.s64 = ctx.r11.s64 + 17372;
loc_83990E20:
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// addi r26,r24,-44
	ctx.r26.s64 = ctx.r24.s64 + -44;
	// li r29,2
	ctx.r29.s64 = 2;
loc_83990E34:
	// lwzu r11,44(r26)
	ea = 44 + ctx.r26.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r26.u32 = ea;
	// addi r28,r11,16060
	ctx.r28.s64 = ctx.r11.s64 + 16060;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f0,1408(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,1416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfsu f13,8(r30)
	ea = 8 + ctx.r30.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// bl 0x82a5c618
	ctx.lr = 0x83990E60;
	sub_82A5C618(ctx, base);
	// lwz r11,216(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 216);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,216(r25)
	PPC_STORE_U32(ctx.r25.u32 + 216, ctx.r10.u32);
	// bl 0x82a5c618
	ctx.lr = 0x83990E74;
	sub_82A5C618(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
	// bne 0x83990e34
	if (!cr0.eq) goto loc_83990E34;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257e438
	ctx.lr = 0x83990E94;
	sub_8257E438(ctx, base);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r11,r23,84
	ctx.r11.s64 = ctx.r23.s64 + 84;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, xer);
	// blt cr6,0x83990e20
	if (cr6.lt) goto loc_83990E20;
	// lis r30,-31778
	ctx.r30.s64 = -2082603008;
	// lwz r3,2056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83990EBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f1,220(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r25.u32 + 220, temp.u32);
	// lwz r3,2056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,128(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83990ED4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83990f0c
	if (cr6.eq) goto loc_83990F0C;
	// lwz r3,2056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83990EF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,216(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 216);
	// mulli r10,r9,300
	ctx.r10.s64 = ctx.r9.s64 * 300;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,100
	ctx.r8.s64 = ctx.r11.s64 + 100;
	// stw r8,216(r25)
	PPC_STORE_U32(ctx.r25.u32 + 216, ctx.r8.u32);
loc_83990F0C:
	// lwz r11,128(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 128);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1408(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r11,128(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 128);
	// lfs f13,1416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,132(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 132);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83990f54
	if (cr6.eq) goto loc_83990F54;
	// lfs f13,1408(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1408);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r10,132(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 132);
	// lfs f12,1416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1416);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x83990f58
	goto loc_83990F58;
loc_83990F54:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_83990F58:
	// lwz r10,136(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83990f98
	if (cr6.eq) goto loc_83990F98;
	// lfs f13,1408(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1408);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,136(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 136);
	// lfs f9,1416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1416);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83990F98:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83990FB0"))) PPC_WEAK_FUNC(sub_83990FB0);
PPC_FUNC_IMPL(__imp__sub_83990FB0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r5,13
	ctx.r5.s64 = 13;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// addi r4,r8,17568
	ctx.r4.s64 = ctx.r8.s64 + 17568;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x8259cc28
	ctx.lr = 0x83991010;
	sub_8259CC28(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r31,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r31.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835249e8
	ctx.lr = 0x8399102C;
	sub_835249E8(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x83991048
	if (cr6.lt) goto loc_83991048;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x83991048;
	sub_825952B8(ctx, base);
loc_83991048:
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

__attribute__((alias("__imp__sub_83991060"))) PPC_WEAK_FUNC(sub_83991060);
PPC_FUNC_IMPL(__imp__sub_83991060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83991068;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31778
	ctx.r28.s64 = -2082603008;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r3,2056(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399108C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839911f0
	if (!cr6.eq) goto loc_839911F0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r31,r11,2
	ctx.r31.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bl 0x83740858
	ctx.lr = 0x839910A4;
	sub_83740858(ctx, base);
	// lis r10,-30584
	ctx.r10.s64 = -2004353024;
	// divwu r9,r31,r3
	ctx.r9.u32 = PPCDivide(ctx.r31.u32, ctx.r3.u32);
	// ori r8,r10,34953
	ctx.r8.u64 = ctx.r10.u64 | 34953;
	// twllei r3,0
	// mulhwu r6,r9,r8
	ctx.r6.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r5,r6,25,7,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x1FFFFFF;
	// lis r7,-31742
	ctx.r7.s64 = -2080243712;
	// mulli r4,r5,240
	ctx.r4.s64 = ctx.r5.s64 * 240;
	// subf r3,r4,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r4.s64;
	// addi r11,r7,-29800
	ctx.r11.s64 = ctx.r7.s64 + -29800;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83991148
	if (cr6.eq) goto loc_83991148;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x8399114c
	if (!cr6.eq) goto loc_8399114C;
	// lhz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x839911f0
	if (cr6.eq) goto loc_839911F0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,944
	ctx.r3.s64 = ctx.r29.s64 + 944;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r8,r9,2
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// oris r7,r8,16384
	ctx.r7.u64 = ctx.r8.u64 | 1073741824;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x83990900
	ctx.lr = 0x83991128;
	sub_83990900(ctx, base);
	// lwz r3,2056(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2056);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,132(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 132);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8399113C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83991148:
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
loc_8399114C:
	// bge cr6,0x83991178
	if (!cr6.lt) goto loc_83991178;
	// addi r11,r11,2000
	ctx.r11.s64 = ctx.r11.s64 + 2000;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// blt cr6,0x839911f0
	if (cr6.lt) goto loc_839911F0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83991178:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83991188
	if (!cr6.eq) goto loc_83991188;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839911f0
	if (cr6.eq) goto loc_839911F0;
loc_83991188:
	// bl 0x82e7e2f8
	ctx.lr = 0x8399118C;
	sub_82E7E2F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839911d0
	if (cr6.eq) goto loc_839911D0;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,16978
	ctx.r31.s64 = ctx.r11.s64 + 16978;
	// addi r4,r31,398
	ctx.r4.s64 = ctx.r31.s64 + 398;
	// bl 0x837b0c10
	ctx.lr = 0x839911AC;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x839911BC;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,843
	ctx.r6.s64 = 843;
	// bl 0x82e7eb70
	ctx.lr = 0x839911D0;
	sub_82E7EB70(ctx, base);
loc_839911D0:
	// lwz r3,2056(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2056);
	// li r6,21
	ctx.r6.s64 = 21;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839911F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839911F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839911FC"))) PPC_WEAK_FUNC(sub_839911FC);
PPC_FUNC_IMPL(__imp__sub_839911FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83991200"))) PPC_WEAK_FUNC(sub_83991200);
PPC_FUNC_IMPL(__imp__sub_83991200) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8398a668
	ctx.lr = 0x83991228;
	sub_8398A668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399123c
	if (!cr6.eq) goto loc_8399123C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x839912b8
	goto loc_839912B8;
loc_8399123C:
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8398a7d8
	ctx.lr = 0x83991250;
	sub_8398A7D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83991270
	if (cr6.eq) goto loc_83991270;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83991278
	if (cr6.lt) goto loc_83991278;
	// beq cr6,0x83991270
	if (cr6.eq) goto loc_83991270;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
loc_83991270:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x839912b8
	goto loc_839912B8;
loc_83991278:
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x83991270
	if (cr6.eq) goto loc_83991270;
	// addi r4,r30,1800
	ctx.r4.s64 = ctx.r30.s64 + 1800;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x83991298;
	sub_8257FAD0(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83991060
	ctx.lr = 0x839912A8;
	sub_83991060(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82467848
	ctx.lr = 0x839912B4;
	sub_82467848(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839912B8:
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

__attribute__((alias("__imp__sub_839912D0"))) PPC_WEAK_FUNC(sub_839912D0);
PPC_FUNC_IMPL(__imp__sub_839912D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839912D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,928(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 928);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,17584
	ctx.r10.s64 = ctx.r11.s64 + 17584;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83990be0
	ctx.lr = 0x839912F8;
	sub_83990BE0(ctx, base);
loc_839912F8:
	// lwz r3,932(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 932);
	// bl 0x83990c80
	ctx.lr = 0x83991300;
	sub_83990C80(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x839912f8
	if (!cr6.eq) goto loc_839912F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 936);
	// bl 0x835242e8
	ctx.lr = 0x83991314;
	sub_835242E8(ctx, base);
	// lwz r3,936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 936);
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_83991324:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83991324
	if (!cr0.eq) goto loc_83991324;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399135c
	if (!cr6.eq) goto loc_8399135C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399135C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8399135C:
	// lwz r11,932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 932);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,32
	ctx.r29.s64 = 32;
	// stw r28,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839913a8
	if (cr6.eq) goto loc_839913A8;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83991384;
	sub_82595150(ctx, base);
	// lwz r30,932(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 932);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x839913a0
	if (cr6.eq) goto loc_839913A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8258bf48
	ctx.lr = 0x83991398;
	sub_8258BF48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x839913A0;
	sub_82416268(ctx, base);
loc_839913A0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x839913A8;
	sub_82595170(ctx, base);
loc_839913A8:
	// lwz r11,928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839913e8
	if (cr6.eq) goto loc_839913E8;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x839913C4;
	sub_82595150(ctx, base);
	// lwz r30,928(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x839913e0
	if (cr6.eq) goto loc_839913E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8258bf48
	ctx.lr = 0x839913D8;
	sub_8258BF48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x839913E0;
	sub_82416268(ctx, base);
loc_839913E0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x839913E8;
	sub_82595170(ctx, base);
loc_839913E8:
	// addi r3,r31,1800
	ctx.r3.s64 = ctx.r31.s64 + 1800;
	// bl 0x83b3f898
	ctx.lr = 0x839913F0;
	sub_83B3F898(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,1780
	ctx.r30.s64 = ctx.r31.s64 + 1780;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x83991408;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83991430
	if (cr6.eq) goto loc_83991430;
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
	ctx.lr = 0x8399142C;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_83991430:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,1760
	ctx.r3.s64 = ctx.r31.s64 + 1760;
	// addi r10,r11,-16652
	ctx.r10.s64 = ctx.r11.s64 + -16652;
	// stw r10,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r10.u32);
	// bl 0x825c3358
	ctx.lr = 0x83991444;
	sub_825C3358(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r30,r31,1740
	ctx.r30.s64 = ctx.r31.s64 + 1740;
	// addi r8,r9,-24712
	ctx.r8.s64 = ctx.r9.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r8.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x8399145C;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83991484
	if (cr6.eq) goto loc_83991484;
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
	ctx.lr = 0x83991480;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_83991484:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,1720
	ctx.r3.s64 = ctx.r31.s64 + 1720;
	// addi r10,r11,-16652
	ctx.r10.s64 = ctx.r11.s64 + -16652;
	// stw r10,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r10.u32);
	// bl 0x825c3358
	ctx.lr = 0x83991498;
	sub_825C3358(ctx, base);
	// addi r3,r31,944
	ctx.r3.s64 = ctx.r31.s64 + 944;
	// bl 0x83b3f898
	ctx.lr = 0x839914A0;
	sub_83B3F898(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b3de8
	ctx.lr = 0x839914A8;
	sub_825B3DE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839914B0"))) PPC_WEAK_FUNC(sub_839914B0);
PPC_FUNC_IMPL(__imp__sub_839914B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x839914B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x839914fc
	if (cr6.eq) goto loc_839914FC;
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// ori r9,r10,7
	ctx.r9.u64 = ctx.r10.u64 | 7;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x839914f0
	if (cr6.eq) goto loc_839914F0;
	// bl 0x825b27f0
	ctx.lr = 0x839914E8;
	sub_825B27F0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_839914F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_839914FC:
	// lis r31,-31778
	ctx.r31.s64 = -2082603008;
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83991514;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,284(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 284);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83991528;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,236(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 236);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83991540;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r27,420
	ctx.r29.s64 = ctx.r27.s64 + 420;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,2056(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825ae3c0
	ctx.lr = 0x83991554;
	sub_825AE3C0(ctx, base);
	// lwz r5,52(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x83991568;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,2056(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825ae3c0
	ctx.lr = 0x83991578;
	sub_825AE3C0(ctx, base);
	// lwz r11,340(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8399158C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,268(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839915A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,288(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 288);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x839915B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,2056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,292(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 292);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x839915D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,2056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,304(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 304);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839915EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,316(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83991620;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83991638
	if (!cr6.eq) goto loc_83991638;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83990b70
	ctx.lr = 0x83991634;
	sub_83990B70(ctx, base);
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_83991638:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ae438
	ctx.lr = 0x83991640;
	sub_825AE438(ctx, base);
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83991658;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83991668
	if (!cr6.eq) goto loc_83991668;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8399166c
	goto loc_8399166C;
loc_83991668:
	// bl 0x8398b290
	ctx.lr = 0x8399166C;
	sub_8398B290(ctx, base);
loc_8399166C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83991694
	if (cr6.eq) goto loc_83991694;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ae3c0
	ctx.lr = 0x83991680;
	sub_825AE3C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839916cc
	if (cr6.eq) goto loc_839916CC;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x839916cc
	goto loc_839916CC;
loc_83991694:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839916A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839916c0
	if (cr6.eq) goto loc_839916C0;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r30,1848(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1848, ctx.r30.u32);
	// b 0x839916cc
	goto loc_839916CC;
loc_839916C0:
	// lwz r11,1848(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1848);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1848(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1848, ctx.r11.u32);
loc_839916CC:
	// bl 0x83740858
	ctx.lr = 0x839916D0;
	sub_83740858(ctx, base);
	// lwz r11,1848(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1848);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x839916e4
	if (!cr6.lt) goto loc_839916E4;
	// bl 0x82d48260
	ctx.lr = 0x839916E4;
	sub_82D48260(ctx, base);
loc_839916E4:
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839916F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83991708
	if (!cr6.eq) goto loc_83991708;
	// stw r30,1848(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1848, ctx.r30.u32);
loc_83991708:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83991724
	if (cr6.eq) goto loc_83991724;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,928(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 928);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x83990be0
	ctx.lr = 0x83991724;
	sub_83990BE0(ctx, base);
loc_83991724:
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83991758
	if (!cr6.eq) goto loc_83991758;
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83991744;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825b27f0
	ctx.lr = 0x83991754;
	sub_825B27F0(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_83991758:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83991770
	if (cr6.eq) goto loc_83991770;
	// lwz r3,932(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 932);
	// bl 0x83990c80
	ctx.lr = 0x8399176C;
	sub_83990C80(ctx, base);
	// b 0x839917ac
	goto loc_839917AC;
loc_83991770:
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83991784;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839917ac
	if (cr6.eq) goto loc_839917AC;
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839917A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83991200
	ctx.lr = 0x839917AC;
	sub_83991200(ctx, base);
loc_839917AC:
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839917C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,288(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839917D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r24,r3
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r3.u32, xer);
	// blt cr6,0x83991808
	if (cr6.lt) goto loc_83991808;
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839917F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r23,r3
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r3.u32, xer);
	// bge cr6,0x83991808
	if (!cr6.lt) goto loc_83991808;
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// b 0x83991814
	goto loc_83991814;
loc_83991808:
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
loc_83991814:
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399181C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83991830;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,280(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83991844;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83991850"))) PPC_WEAK_FUNC(sub_83991850);
PPC_FUNC_IMPL(__imp__sub_83991850) {
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
	// bl 0x839912d0
	ctx.lr = 0x83991870;
	sub_839912D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83991890
	if (cr6.eq) goto loc_83991890;
	// bl 0x82595188
	ctx.lr = 0x83991880;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83991890;
	sub_825952B8(ctx, base);
loc_83991890:
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

__attribute__((alias("__imp__sub_839918AC"))) PPC_WEAK_FUNC(sub_839918AC);
PPC_FUNC_IMPL(__imp__sub_839918AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839918B0"))) PPC_WEAK_FUNC(sub_839918B0);
PPC_FUNC_IMPL(__imp__sub_839918B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x839918B8;
	__savegprlr_22(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,152(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839918DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83991c10
	if (!cr6.eq) goto loc_83991C10;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lbz r10,592(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 592);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r31,r24,588
	ctx.r31.s64 = ctx.r24.s64 + 588;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r25,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r25.u64);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r30,r9,2
	ctx.r30.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// bne cr6,0x83991918
	if (!cr6.eq) goto loc_83991918;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x83991918;
	sub_825AB6C8(ctx, base);
loc_83991918:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83991934
	if (!cr6.eq) goto loc_83991934;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_83991934:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r23,4472(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4472);
	// rlwimi r23,r30,0,0,1
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0xC0000000) | (ctx.r23.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// beq cr6,0x83991954
	if (cr6.eq) goto loc_83991954;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_83991954:
	// lbz r11,1764(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1764);
	// addi r26,r24,1760
	ctx.r26.s64 = ctx.r24.s64 + 1760;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399196c
	if (!cr6.eq) goto loc_8399196C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825b4da8
	ctx.lr = 0x8399196C;
	sub_825B4DA8(ctx, base);
loc_8399196C:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83991988
	if (!cr6.eq) goto loc_83991988;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r10.u32);
loc_83991988:
	// lwz r30,12(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22860
	ctx.lr = 0x83991994;
	sub_82A22860(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x839919dc
	if (!cr6.gt) goto loc_839919DC;
loc_839919A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a236f8
	ctx.lr = 0x839919B0;
	sub_82A236F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a236f8
	ctx.lr = 0x839919C4;
	sub_82A236F8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// blt cr6,0x839919a4
	if (cr6.lt) goto loc_839919A4;
loc_839919DC:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839919ec
	if (cr6.eq) goto loc_839919EC;
	// stw r25,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r25.u32);
loc_839919EC:
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831cdcf0
	ctx.lr = 0x839919FC;
	sub_831CDCF0(ctx, base);
	// stw r27,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r27.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83990df8
	ctx.lr = 0x83991A0C;
	sub_83990DF8(ctx, base);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// bl 0x839d6b10
	ctx.lr = 0x83991A28;
	sub_839D6B10(ctx, base);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// sth r9,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r9.u16);
	// bl 0x83740858
	ctx.lr = 0x83991A54;
	sub_83740858(ctx, base);
	// clrlwi r7,r23,2
	ctx.r7.u64 = ctx.r23.u32 & 0x3FFFFFFF;
	// twllei r3,0
	// divwu r6,r7,r3
	ctx.r6.u32 = PPCDivide(ctx.r7.u32, ctx.r3.u32);
	// mullw r5,r6,r3
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// subf. r4,r5,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r5.s64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x83991c10
	if (!cr0.eq) goto loc_83991C10;
	// lbz r11,532(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 532);
	// addi r30,r24,528
	ctx.r30.s64 = ctx.r24.s64 + 528;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83991ac0
	if (!cr6.eq) goto loc_83991AC0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83991A90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83991AA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825b4328
	ctx.lr = 0x83991AB8;
	sub_825B4328(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r7.u8);
loc_83991AC0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83991adc
	if (!cr6.eq) goto loc_83991ADC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
loc_83991ADC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8398a668
	ctx.lr = 0x83991AEC;
	sub_8398A668(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83991b54
	if (cr6.eq) goto loc_83991B54;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_83991AFC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x83991b0c
	if (cr6.lt) goto loc_83991B0C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83991B0C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83991b30
	if (!cr6.eq) goto loc_83991B30;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x83991afc
	if (cr6.lt) goto loc_83991AFC;
	// b 0x83991b54
	goto loc_83991B54;
loc_83991B30:
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x83991b54
	if (!cr6.eq) goto loc_83991B54;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r24,944
	ctx.r3.s64 = ctx.r24.s64 + 944;
	// bl 0x83990900
	ctx.lr = 0x83991B50;
	sub_83990900(ctx, base);
	// lwz r23,88(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_83991B54:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83991b64
	if (cr6.eq) goto loc_83991B64;
	// stw r25,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r25.u32);
loc_83991B64:
	// addi r4,r24,1800
	ctx.r4.s64 = ctx.r24.s64 + 1800;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x83991B74;
	sub_8257FAD0(ctx, base);
	// clrlwi r31,r23,2
	ctx.r31.u64 = ctx.r23.u32 & 0x3FFFFFFF;
	// bl 0x83740858
	ctx.lr = 0x83991B7C;
	sub_83740858(ctx, base);
	// lis r11,-30584
	ctx.r11.s64 = -2004353024;
	// divwu r9,r31,r3
	ctx.r9.u32 = PPCDivide(ctx.r31.u32, ctx.r3.u32);
	// ori r8,r11,34953
	ctx.r8.u64 = ctx.r11.u64 | 34953;
	// twllei r3,0
	// mulhwu r6,r9,r8
	ctx.r6.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r5,r6,25,7,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x1FFFFFF;
	// lis r7,-31742
	ctx.r7.s64 = -2080243712;
	// mulli r4,r5,240
	ctx.r4.s64 = ctx.r5.s64 * 240;
	// subf r3,r4,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r4.s64;
	// addi r10,r7,-29800
	ctx.r10.s64 = ctx.r7.s64 + -29800;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r8,r9,2
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// bne cr6,0x83991bf0
	if (!cr6.eq) goto loc_83991BF0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83991060
	ctx.lr = 0x83991BC8;
	sub_83991060(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83991be4
	if (cr6.lt) goto loc_83991BE4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8257fb60
	ctx.lr = 0x83991BE4;
	sub_8257FB60(ctx, base);
loc_83991BE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83991BF0:
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stdx r9,r11,r10
	PPC_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u64);
	// blt cr6,0x83991c10
	if (cr6.lt) goto loc_83991C10;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8257fb60
	ctx.lr = 0x83991C10;
	sub_8257FB60(ctx, base);
loc_83991C10:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83991C1C"))) PPC_WEAK_FUNC(sub_83991C1C);
PPC_FUNC_IMPL(__imp__sub_83991C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83991C20"))) PPC_WEAK_FUNC(sub_83991C20);
PPC_FUNC_IMPL(__imp__sub_83991C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83991C28;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r31,2056(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,160(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83991C50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83991c70
	if (cr6.eq) goto loc_83991C70;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825b51a0
	ctx.lr = 0x83991C68;
	sub_825B51A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83991C70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83991C84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83991cfc
	if (cr6.eq) goto loc_83991CFC;
	// addi r30,r29,944
	ctx.r30.s64 = ctx.r29.s64 + 944;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839909e0
	ctx.lr = 0x83991CA0;
	sub_839909E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83991cfc
	if (cr6.eq) goto loc_83991CFC;
loc_83991CAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83991CC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8398a7c0
	ctx.lr = 0x83991CCC;
	sub_8398A7C0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83991cfc
	if (cr6.eq) goto loc_83991CFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83990ad0
	ctx.lr = 0x83991CE0;
	sub_83990AD0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839909e0
	ctx.lr = 0x83991CF0;
	sub_839909E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83991cac
	if (!cr6.eq) goto loc_83991CAC;
loc_83991CFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83991D14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,308(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 308);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83991D2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83991e60
	if (cr6.eq) goto loc_83991E60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83991D54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825b51a0
	ctx.lr = 0x83991D60;
	sub_825B51A0(ctx, base);
	// addi r30,r29,588
	ctx.r30.s64 = ctx.r29.s64 + 588;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ab748
	ctx.lr = 0x83991D6C;
	sub_825AB748(ctx, base);
	// lwz r9,600(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 600);
	// lwz r27,4460(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83991d84
	if (cr6.eq) goto loc_83991D84;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_83991D84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,424(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83991D98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83991dc4
	if (!cr6.eq) goto loc_83991DC4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83991DB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83991dcc
	if (!cr6.eq) goto loc_83991DCC;
loc_83991DC4:
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// bne cr6,0x83991de4
	if (!cr6.eq) goto loc_83991DE4;
loc_83991DCC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83991DE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83991DE4:
	// lwz r11,924(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 924);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// beq cr6,0x83991e28
	if (cr6.eq) goto loc_83991E28;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// bne cr6,0x83991e28
	if (!cr6.eq) goto loc_83991E28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83991E10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83991E28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83991E28:
	// stw r27,924(r29)
	PPC_STORE_U32(ctx.r29.u32 + 924, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83991E40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83991E54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839918b0
	ctx.lr = 0x83991E60;
	sub_839918B0(ctx, base);
loc_83991E60:
	// addi r3,r29,420
	ctx.r3.s64 = ctx.r29.s64 + 420;
	// bl 0x825ae438
	ctx.lr = 0x83991E68;
	sub_825AE438(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83991E70"))) PPC_WEAK_FUNC(sub_83991E70);
PPC_FUNC_IMPL(__imp__sub_83991E70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83991E78;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825b4e80
	ctx.lr = 0x83991E84;
	sub_825B4E80(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r31,r30,944
	ctx.r31.s64 = ctx.r30.s64 + 944;
	// addi r10,r11,17584
	ctx.r10.s64 = ctx.r11.s64 + 17584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x8257fa88
	ctx.lr = 0x83991E9C;
	sub_8257FA88(ctx, base);
	// li r5,600
	ctx.r5.s64 = 600;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x831cdcf0
	ctx.lr = 0x83991EAC;
	sub_831CDCF0(ctx, base);
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,648
	ctx.r3.s64 = ctx.r31.s64 + 648;
	// bl 0x831cdcf0
	ctx.lr = 0x83991EBC;
	sub_831CDCF0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r31,1712(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1712, ctx.r31.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r31,1716(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1716, ctx.r31.u32);
	// addi r7,r9,-11248
	ctx.r7.s64 = ctx.r9.s64 + -11248;
	// stb r31,1724(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1724, ctx.r31.u8);
	// addi r6,r8,-22824
	ctx.r6.s64 = ctx.r8.s64 + -22824;
	// stw r31,1728(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1728, ctx.r31.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r7,1720(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1720, ctx.r7.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r31,1732(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1732, ctx.r31.u32);
	// addi r11,r5,-22864
	ctx.r11.s64 = ctx.r5.s64 + -22864;
	// stw r31,1736(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1736, ctx.r31.u32);
	// addi r10,r4,-24692
	ctx.r10.s64 = ctx.r4.s64 + -24692;
	// stb r31,1744(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1744, ctx.r31.u8);
	// addi r3,r30,1800
	ctx.r3.s64 = ctx.r30.s64 + 1800;
	// stw r31,1748(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1748, ctx.r31.u32);
	// addi r29,r30,1720
	ctx.r29.s64 = ctx.r30.s64 + 1720;
	// stw r6,1740(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1740, ctx.r6.u32);
	// addi r28,r30,1740
	ctx.r28.s64 = ctx.r30.s64 + 1740;
	// stw r31,1752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1752, ctx.r31.u32);
	// addi r27,r30,1760
	ctx.r27.s64 = ctx.r30.s64 + 1760;
	// stw r31,1756(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1756, ctx.r31.u32);
	// addi r26,r30,1780
	ctx.r26.s64 = ctx.r30.s64 + 1780;
	// stb r31,1764(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1764, ctx.r31.u8);
	// stw r31,1768(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1768, ctx.r31.u32);
	// stw r11,1760(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1760, ctx.r11.u32);
	// stw r31,1772(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1772, ctx.r31.u32);
	// stw r31,1776(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1776, ctx.r31.u32);
	// stb r31,1784(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1784, ctx.r31.u8);
	// stw r31,1788(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1788, ctx.r31.u32);
	// stw r10,1780(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1780, ctx.r10.u32);
	// stw r31,1792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1792, ctx.r31.u32);
	// stw r31,1796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1796, ctx.r31.u32);
	// bl 0x8257fa88
	ctx.lr = 0x83991F50;
	sub_8257FA88(ctx, base);
	// li r24,32
	ctx.r24.s64 = 32;
	// stw r31,924(r30)
	PPC_STORE_U32(ctx.r30.u32 + 924, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83991F6C;
	sub_82595718(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83991f94
	if (cr6.eq) goto loc_83991F94;
	// bl 0x8258bee8
	ctx.lr = 0x83991F7C;
	sub_8258BEE8(ctx, base);
	// stw r31,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r31.u32);
	// stw r31,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r31.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r31,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r31.u32);
	// stw r31,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r31.u32);
	// b 0x83991f98
	goto loc_83991F98;
loc_83991F94:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83991F98:
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,928(r30)
	PPC_STORE_U32(ctx.r30.u32 + 928, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x83991FB0;
	sub_82595718(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83991fd8
	if (cr6.eq) goto loc_83991FD8;
	// bl 0x8258bee8
	ctx.lr = 0x83991FC0;
	sub_8258BEE8(ctx, base);
	// stw r31,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r31.u32);
	// stw r31,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r31.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r31,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r31.u32);
	// stw r31,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r31.u32);
	// b 0x83991fdc
	goto loc_83991FDC;
loc_83991FD8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83991FDC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,932(r30)
	PPC_STORE_U32(ctx.r30.u32 + 932, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x83991FF8;
	sub_82595718(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83992028
	if (cr6.eq) goto loc_83992028;
	// bl 0x835242a0
	ctx.lr = 0x83992008;
	sub_835242A0(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r31,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r10,r11,17556
	ctx.r10.s64 = ctx.r11.s64 + 17556;
	// stw r31,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r31.u32);
	// stw r31,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r31.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x8399202c
	goto loc_8399202C;
loc_83992028:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8399202C:
	// stw r3,936(r30)
	PPC_STORE_U32(ctx.r30.u32 + 936, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,932(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 932);
	// lwz r5,928(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 928);
	// bl 0x83990fb0
	ctx.lr = 0x83992040;
	sub_83990FB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825d7b08
	ctx.lr = 0x83992048;
	sub_825D7B08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825b4670
	ctx.lr = 0x83992050;
	sub_825B4670(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825b4da8
	ctx.lr = 0x83992058;
	sub_825B4DA8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x83992060;
	sub_825AB6C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,1848(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1848, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83992070"))) PPC_WEAK_FUNC(sub_83992070);
PPC_FUNC_IMPL(__imp__sub_83992070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83992078;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82e6e978
	ctx.lr = 0x83992084;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399209c
	if (cr6.eq) goto loc_8399209C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8399233c
	if (!cr6.eq) goto loc_8399233C;
loc_8399209C:
	// bl 0x830ff290
	ctx.lr = 0x839920A0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839920A4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x8399233c
	if (!cr6.eq) goto loc_8399233C;
	// lbz r11,1744(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1744);
	// addi r20,r26,1740
	ctx.r20.s64 = ctx.r26.s64 + 1740;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839920c4
	if (!cr6.eq) goto loc_839920C4;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x825b4670
	ctx.lr = 0x839920C4;
	sub_825B4670(ctx, base);
loc_839920C4:
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839920e0
	if (!cr6.eq) goto loc_839920E0;
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// stw r10,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r10.u32);
loc_839920E0:
	// lbz r11,452(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 452);
	// addi r22,r26,448
	ctx.r22.s64 = ctx.r26.s64 + 448;
	// lwz r23,16(r20)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839920fc
	if (!cr6.eq) goto loc_839920FC;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x825b4878
	ctx.lr = 0x839920FC;
	sub_825B4878(ctx, base);
loc_839920FC:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83992118
	if (!cr6.eq) goto loc_83992118;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r10.u32);
loc_83992118:
	// lwz r28,12(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// lis r21,-31778
	ctx.r21.s64 = -2082603008;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83992300
	if (cr6.eq) goto loc_83992300;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83992300
	if (cr6.eq) goto loc_83992300;
	// bl 0x825d8390
	ctx.lr = 0x83992138;
	sub_825D8390(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
loc_83992144:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// beq cr6,0x83992164
	if (cr6.eq) goto loc_83992164;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// cmplwi cr6,r27,24
	cr6.compare<uint32_t>(ctx.r27.u32, 24, xer);
	// blt cr6,0x83992144
	if (cr6.lt) goto loc_83992144;
	// b 0x83992300
	goto loc_83992300;
loc_83992164:
	// cmplwi cr6,r27,24
	cr6.compare<uint32_t>(ctx.r27.u32, 24, xer);
	// bge cr6,0x83992300
	if (!cr6.lt) goto loc_83992300;
	// addi r31,r26,1720
	ctx.r31.s64 = ctx.r26.s64 + 1720;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,255
	ctx.r30.s64 = 255;
	// bl 0x828e13e8
	ctx.lr = 0x83992180;
	sub_828E13E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83992194
	if (cr6.eq) goto loc_83992194;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,28136
	ctx.r10.u64 = ctx.r11.u64 | 28136;
	// lwzx r30,r3,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
loc_83992194:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839921a4
	if (cr6.eq) goto loc_839921A4;
	// stw r24,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
loc_839921A4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x839921b8
	if (cr6.lt) goto loc_839921B8;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x839921bc
	if (cr6.lt) goto loc_839921BC;
loc_839921B8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_839921BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839921cc
	if (cr6.eq) goto loc_839921CC;
	// li r29,1
	ctx.r29.s64 = 1;
loc_839921CC:
	// mulli r11,r27,112
	ctx.r11.s64 = ctx.r27.s64 * 112;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x839921ec
	if (cr6.lt) goto loc_839921EC;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x839921f0
	if (cr6.lt) goto loc_839921F0;
loc_839921EC:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_839921F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839922fc
	if (cr6.eq) goto loc_839922FC;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83992210
	if (cr6.eq) goto loc_83992210;
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, xer);
	// beq cr6,0x839922fc
	if (cr6.eq) goto loc_839922FC;
loc_83992210:
	// addi r30,r26,508
	ctx.r30.s64 = ctx.r26.s64 + 508;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ab748
	ctx.lr = 0x8399221C;
	sub_825AB748(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x83992230
	if (cr6.lt) goto loc_83992230;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x83992234
	if (cr6.lt) goto loc_83992234;
loc_83992230:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_83992234:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83992254
	if (cr6.eq) goto loc_83992254;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83992258
	goto loc_83992258;
loc_83992254:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_83992258:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83992268
	if (cr6.eq) goto loc_83992268;
	// stw r24,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r24.u32);
loc_83992268:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839922fc
	if (cr6.eq) goto loc_839922FC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r3,2056(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2056);
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// subfc r8,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r4,r25,24
	ctx.r4.u64 = ctx.r25.u32 & 0xFF;
	// lwz r11,244(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 244);
	// subfe r9,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 & ctx.r10.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839922AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x839922fc
	if (cr6.eq) goto loc_839922FC;
	// rlwinm r11,r31,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x7F8;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lbz r10,3100(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3100);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// beq cr6,0x839922f0
	if (cr6.eq) goto loc_839922F0;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x839922f0
	if (cr6.eq) goto loc_839922F0;
	// lwz r3,2056(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839922F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839922F0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3292(r23)
	PPC_STORE_U8(ctx.r23.u32 + 3292, ctx.r11.u8);
	// b 0x83992300
	goto loc_83992300;
loc_839922FC:
	// stb r24,3292(r23)
	PPC_STORE_U8(ctx.r23.u32 + 3292, ctx.r24.u8);
loc_83992300:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83992310
	if (cr6.eq) goto loc_83992310;
	// stw r24,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r24.u32);
loc_83992310:
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83992328
	if (cr6.eq) goto loc_83992328;
	// lwz r3,8(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x83992324;
	sub_825B33F0(ctx, base);
	// stw r24,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r24.u32);
loc_83992328:
	// lwz r3,2056(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399233C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8399233C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83992344"))) PPC_WEAK_FUNC(sub_83992344);
PPC_FUNC_IMPL(__imp__sub_83992344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83992348"))) PPC_WEAK_FUNC(sub_83992348);
PPC_FUNC_IMPL(__imp__sub_83992348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825b4b00
	ctx.lr = 0x83992368;
	sub_825B4B00(ctx, base);
	// lis r30,-31778
	ctx.r30.s64 = -2082603008;
	// lwz r3,2056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83992380;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83992070
	ctx.lr = 0x8399238C;
	sub_83992070(ctx, base);
	// lwz r3,2056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839923A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,2056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x839923BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83991200
	ctx.lr = 0x839923C8;
	sub_83991200(ctx, base);
	// lwz r3,2056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,308(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 308);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x839923DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,2056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839923F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,2056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,120(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83992404;
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

__attribute__((alias("__imp__sub_8399241C"))) PPC_WEAK_FUNC(sub_8399241C);
PPC_FUNC_IMPL(__imp__sub_8399241C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83992420"))) PPC_WEAK_FUNC(sub_83992420);
PPC_FUNC_IMPL(__imp__sub_83992420) {
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
	// li r30,0
	ctx.r30.s64 = 0;
loc_8399243C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83990c80
	ctx.lr = 0x83992444;
	sub_83990C80(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x83992458
	if (cr6.lt) goto loc_83992458;
	// bne cr6,0x8399246c
	if (!cr6.eq) goto loc_8399246C;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8399246c
	goto loc_8399246C;
loc_83992458:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83992348
	ctx.lr = 0x83992460;
	sub_83992348(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83990be0
	ctx.lr = 0x8399246C;
	sub_83990BE0(ctx, base);
loc_8399246C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399243c
	if (cr6.eq) goto loc_8399243C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83990be0
	ctx.lr = 0x83992484;
	sub_83990BE0(ctx, base);
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

__attribute__((alias("__imp__sub_839924A0"))) PPC_WEAK_FUNC(sub_839924A0);
PPC_FUNC_IMPL(__imp__sub_839924A0) {
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
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,18436
	ctx.r9.s64 = ctx.r11.s64 + 18436;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x839924d4
	if (cr6.eq) goto loc_839924D4;
	// bl 0x82416268
	ctx.lr = 0x839924D0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839924D4:
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

__attribute__((alias("__imp__sub_839924E8"))) PPC_WEAK_FUNC(sub_839924E8);
PPC_FUNC_IMPL(__imp__sub_839924E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83992504"))) PPC_WEAK_FUNC(sub_83992504);
PPC_FUNC_IMPL(__imp__sub_83992504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83992508"))) PPC_WEAK_FUNC(sub_83992508);
PPC_FUNC_IMPL(__imp__sub_83992508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-27432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27432);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83992540"))) PPC_WEAK_FUNC(sub_83992540);
PPC_FUNC_IMPL(__imp__sub_83992540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83992544"))) PPC_WEAK_FUNC(sub_83992544);
PPC_FUNC_IMPL(__imp__sub_83992544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83992548"))) PPC_WEAK_FUNC(sub_83992548);
PPC_FUNC_IMPL(__imp__sub_83992548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r11,-27432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27432);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83992578"))) PPC_WEAK_FUNC(sub_83992578);
PPC_FUNC_IMPL(__imp__sub_83992578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399257C"))) PPC_WEAK_FUNC(sub_8399257C);
PPC_FUNC_IMPL(__imp__sub_8399257C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83992580"))) PPC_WEAK_FUNC(sub_83992580);
PPC_FUNC_IMPL(__imp__sub_83992580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-27432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27432);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_839925A8"))) PPC_WEAK_FUNC(sub_839925A8);
PPC_FUNC_IMPL(__imp__sub_839925A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839925AC"))) PPC_WEAK_FUNC(sub_839925AC);
PPC_FUNC_IMPL(__imp__sub_839925AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839925B0"))) PPC_WEAK_FUNC(sub_839925B0);
PPC_FUNC_IMPL(__imp__sub_839925B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-27432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27432);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839925CC"))) PPC_WEAK_FUNC(sub_839925CC);
PPC_FUNC_IMPL(__imp__sub_839925CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839925D0"))) PPC_WEAK_FUNC(sub_839925D0);
PPC_FUNC_IMPL(__imp__sub_839925D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839925D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-2560(r1)
	ea = -2560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82e765e8
	ctx.lr = 0x839925EC;
	sub_82E765E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399261c
	if (cr6.eq) goto loc_8399261C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// rlwimi r31,r29,28,0,3
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r29.u32, 28) & 0xF0000000) | (ctx.r31.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x82e76b28
	ctx.lr = 0x83992610;
	sub_82E76B28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2560
	ctx.r1.s64 = ctx.r1.s64 + 2560;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8399261C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2560
	ctx.r1.s64 = ctx.r1.s64 + 2560;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83992628"))) PPC_WEAK_FUNC(sub_83992628);
PPC_FUNC_IMPL(__imp__sub_83992628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83992630;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwimi r11,r4,24,4,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0xF000000) | (ctx.r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// clrlwi r27,r11,4
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// bl 0x82e6f960
	ctx.lr = 0x83992654;
	sub_82E6F960(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399271c
	if (cr6.eq) goto loc_8399271C;
	// bl 0x82e765e8
	ctx.lr = 0x83992664;
	sub_82E765E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399271c
	if (cr6.eq) goto loc_8399271C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stb r11,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r11.u8);
	// bl 0x8398aa28
	ctx.lr = 0x83992684;
	sub_8398AA28(ctx, base);
	// cmpwi cr6,r31,14
	cr6.compare<int32_t>(ctx.r31.s32, 14, xer);
	// beq cr6,0x839926e4
	if (cr6.eq) goto loc_839926E4;
	// cmpwi cr6,r31,25
	cr6.compare<int32_t>(ctx.r31.s32, 25, xer);
	// beq cr6,0x839926e4
	if (cr6.eq) goto loc_839926E4;
	// cmpwi cr6,r31,12
	cr6.compare<int32_t>(ctx.r31.s32, 12, xer);
	// beq cr6,0x839926d0
	if (cr6.eq) goto loc_839926D0;
	// cmpwi cr6,r31,13
	cr6.compare<int32_t>(ctx.r31.s32, 13, xer);
	// beq cr6,0x839926d0
	if (cr6.eq) goto loc_839926D0;
	// cmpwi cr6,r31,15
	cr6.compare<int32_t>(ctx.r31.s32, 15, xer);
	// beq cr6,0x839926b4
	if (cr6.eq) goto loc_839926B4;
	// cmpwi cr6,r31,26
	cr6.compare<int32_t>(ctx.r31.s32, 26, xer);
	// bne cr6,0x839926fc
	if (!cr6.eq) goto loc_839926FC;
loc_839926B4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r31,r11,26
	ctx.r31.s64 = ctx.r11.s64 + 26;
	// b 0x839926fc
	goto loc_839926FC;
loc_839926D0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// b 0x839926fc
	goto loc_839926FC;
loc_839926E4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r31,r11,25
	ctx.r31.s64 = ctx.r11.s64 + 25;
loc_839926FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399271C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8399271C:
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83992730"))) PPC_WEAK_FUNC(sub_83992730);
PPC_FUNC_IMPL(__imp__sub_83992730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83992748
	if (!cr6.eq) goto loc_83992748;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83992748:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399275C"))) PPC_WEAK_FUNC(sub_8399275C);
PPC_FUNC_IMPL(__imp__sub_8399275C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83992760"))) PPC_WEAK_FUNC(sub_83992760);
PPC_FUNC_IMPL(__imp__sub_83992760) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399277C"))) PPC_WEAK_FUNC(sub_8399277C);
PPC_FUNC_IMPL(__imp__sub_8399277C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83992780"))) PPC_WEAK_FUNC(sub_83992780);
PPC_FUNC_IMPL(__imp__sub_83992780) {
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
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,18436
	ctx.r9.s64 = ctx.r10.s64 + 18436;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beq cr6,0x839927cc
	if (cr6.eq) goto loc_839927CC;
	// bl 0x82416268
	ctx.lr = 0x839927C8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839927CC:
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

__attribute__((alias("__imp__sub_839927E0"))) PPC_WEAK_FUNC(sub_839927E0);
PPC_FUNC_IMPL(__imp__sub_839927E0) {
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
	// lwz r3,-27432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83992850
	if (!cr6.eq) goto loc_83992850;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83992818;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83992848
	if (cr6.eq) goto loc_83992848;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,18448
	ctx.r9.s64 = ctx.r10.s64 + 18448;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x8399284c
	goto loc_8399284C;
loc_83992848:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8399284C:
	// stw r3,-27432(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27432, ctx.r3.u32);
loc_83992850:
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

__attribute__((alias("__imp__sub_83992864"))) PPC_WEAK_FUNC(sub_83992864);
PPC_FUNC_IMPL(__imp__sub_83992864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83992868"))) PPC_WEAK_FUNC(sub_83992868);
PPC_FUNC_IMPL(__imp__sub_83992868) {
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
	// lis r31,-31742
	ctx.r31.s64 = -2080243712;
	// lwz r11,-27432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27432);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839928cc
	if (cr6.eq) goto loc_839928CC;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8399289C;
	sub_82595150(ctx, base);
	// lwz r3,-27432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839928bc
	if (cr6.eq) goto loc_839928BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839928BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839928BC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x839928C4;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-27432(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27432, ctx.r11.u32);
loc_839928CC:
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

__attribute__((alias("__imp__sub_839928E0"))) PPC_WEAK_FUNC(sub_839928E0);
PPC_FUNC_IMPL(__imp__sub_839928E0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83992900"))) PPC_WEAK_FUNC(sub_83992900);
PPC_FUNC_IMPL(__imp__sub_83992900) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399293c
	if (cr6.eq) goto loc_8399293C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83992938;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8399293C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83992960
	if (cr6.eq) goto loc_83992960;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8399295C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_83992960:
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

__attribute__((alias("__imp__sub_8399297C"))) PPC_WEAK_FUNC(sub_8399297C);
PPC_FUNC_IMPL(__imp__sub_8399297C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83992980"))) PPC_WEAK_FUNC(sub_83992980);
PPC_FUNC_IMPL(__imp__sub_83992980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8399a5c8
	sub_8399A5C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83992990"))) PPC_WEAK_FUNC(sub_83992990);
PPC_FUNC_IMPL(__imp__sub_83992990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83992994"))) PPC_WEAK_FUNC(sub_83992994);
PPC_FUNC_IMPL(__imp__sub_83992994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83992998"))) PPC_WEAK_FUNC(sub_83992998);
PPC_FUNC_IMPL(__imp__sub_83992998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r4,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839929AC"))) PPC_WEAK_FUNC(sub_839929AC);
PPC_FUNC_IMPL(__imp__sub_839929AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839929B0"))) PPC_WEAK_FUNC(sub_839929B0);
PPC_FUNC_IMPL(__imp__sub_839929B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839929c4
	if (cr6.eq) goto loc_839929C4;
	// lwz r3,228(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// blr 
	return;
loc_839929C4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839929CC"))) PPC_WEAK_FUNC(sub_839929CC);
PPC_FUNC_IMPL(__imp__sub_839929CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839929D0"))) PPC_WEAK_FUNC(sub_839929D0);
PPC_FUNC_IMPL(__imp__sub_839929D0) {
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
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_839929F0"))) PPC_WEAK_FUNC(sub_839929F0);
PPC_FUNC_IMPL(__imp__sub_839929F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839929F4"))) PPC_WEAK_FUNC(sub_839929F4);
PPC_FUNC_IMPL(__imp__sub_839929F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839929F8"))) PPC_WEAK_FUNC(sub_839929F8);
PPC_FUNC_IMPL(__imp__sub_839929F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83992A00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83992a30
	if (cr6.eq) goto loc_83992A30;
	// bl 0x8398a888
	ctx.lr = 0x83992A24;
	sub_8398A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83992a7c
	if (!cr6.eq) goto loc_83992A7C;
loc_83992A30:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83992a4c
	if (cr6.eq) goto loc_83992A4C;
	// bl 0x8399a5d0
	ctx.lr = 0x83992A40;
	sub_8399A5D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83992a7c
	if (cr6.eq) goto loc_83992A7C;
loc_83992A4C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bge cr6,0x83992a7c
	if (!cr6.lt) goto loc_83992A7C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83992a7c
	if (cr6.eq) goto loc_83992A7C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83992A7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83992A7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83992A84"))) PPC_WEAK_FUNC(sub_83992A84);
PPC_FUNC_IMPL(__imp__sub_83992A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83992A88"))) PPC_WEAK_FUNC(sub_83992A88);
PPC_FUNC_IMPL(__imp__sub_83992A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83992A90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83992abc
	if (cr6.eq) goto loc_83992ABC;
	// bl 0x8398a888
	ctx.lr = 0x83992AB0;
	sub_8398A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83992bc4
	if (!cr6.eq) goto loc_83992BC4;
loc_83992ABC:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83992bc4
	if (cr6.eq) goto loc_83992BC4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83992bc4
	if (cr6.eq) goto loc_83992BC4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83992bc4
	if (cr6.eq) goto loc_83992BC4;
	// bl 0x825d8390
	ctx.lr = 0x83992ADC;
	sub_825D8390(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_83992AE4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// beq cr6,0x83992b68
	if (cr6.eq) goto loc_83992B68;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x83992ae4
	if (cr6.lt) goto loc_83992AE4;
	// li r29,24
	ctx.r29.s64 = 24;
loc_83992B04:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x8399a5d0
	ctx.lr = 0x83992B0C;
	sub_8399A5D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83992b70
	if (cr6.eq) goto loc_83992B70;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_83992B20:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83992B3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83992b54
	if (cr6.eq) goto loc_83992B54;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// bne cr6,0x83992b54
	if (!cr6.eq) goto loc_83992B54;
	// stw r30,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r30.u32);
loc_83992B54:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x83992b20
	if (cr6.lt) goto loc_83992B20;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83992B68:
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// b 0x83992b04
	goto loc_83992B04;
loc_83992B70:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83992B74:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83992B8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,24
	cr6.compare<uint32_t>(ctx.r4.u32, 24, xer);
	// blt cr6,0x83992b74
	if (cr6.lt) goto loc_83992B74;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,2056(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2056);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83992BC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83992BC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83992BCC"))) PPC_WEAK_FUNC(sub_83992BCC);
PPC_FUNC_IMPL(__imp__sub_83992BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83992BD0"))) PPC_WEAK_FUNC(sub_83992BD0);
PPC_FUNC_IMPL(__imp__sub_83992BD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83992900
	sub_83992900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83992BD4"))) PPC_WEAK_FUNC(sub_83992BD4);
PPC_FUNC_IMPL(__imp__sub_83992BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83992BD8"))) PPC_WEAK_FUNC(sub_83992BD8);
PPC_FUNC_IMPL(__imp__sub_83992BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83992BE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83992c2c
	if (!cr6.eq) goto loc_83992C2C;
	// bl 0x830ff290
	ctx.lr = 0x83992C00;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x83992c28
	if (!cr6.eq) goto loc_83992C28;
	// bl 0x8399aa20
	ctx.lr = 0x83992C10;
	sub_8399AA20(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83992C24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83992c2c
	goto loc_83992C2C;
loc_83992C28:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_83992C2C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83992c90
	if (!cr6.eq) goto loc_83992C90;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83992C50;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83992c88
	if (cr6.eq) goto loc_83992C88;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-22916
	ctx.r9.s64 = ctx.r10.s64 + -22916;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83992C88:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_83992C90:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83992C9C"))) PPC_WEAK_FUNC(sub_83992C9C);
PPC_FUNC_IMPL(__imp__sub_83992C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83992CA0"))) PPC_WEAK_FUNC(sub_83992CA0);
PPC_FUNC_IMPL(__imp__sub_83992CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83992CA8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83992cdc
	if (!cr6.eq) goto loc_83992CDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b49a8
	ctx.lr = 0x83992CDC;
	sub_825B49A8(ctx, base);
loc_83992CDC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83992cf8
	if (!cr6.eq) goto loc_83992CF8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_83992CF8:
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x8353b168
	ctx.lr = 0x83992D0C;
	sub_8353B168(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83992e50
	if (cr6.eq) goto loc_83992E50;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83992e50
	if (cr6.eq) goto loc_83992E50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83992D38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83992e50
	if (cr6.eq) goto loc_83992E50;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a35328
	ctx.lr = 0x83992D50;
	sub_82A35328(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a525a8
	ctx.lr = 0x83992D5C;
	sub_82A525A8(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83992D70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83992e50
	if (cr6.eq) goto loc_83992E50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83992D98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83992DB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fabs f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// fabs f12,f1
	ctx.f12.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f0,16100(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x83992dd4
	if (cr6.gt) goto loc_83992DD4;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x83992e50
	if (!cr6.gt) goto loc_83992E50;
loc_83992DD4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x83992df4
	if (!cr6.gt) goto loc_83992DF4;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x83992df4
	if (cr6.gt) goto loc_83992DF4;
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// b 0x83992e3c
	goto loc_83992E3C;
loc_83992DF4:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x83992e0c
	if (!cr6.lt) goto loc_83992E0C;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x83992e0c
	if (cr6.gt) goto loc_83992E0C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83992e38
	goto loc_83992E38;
loc_83992E0C:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x83992e24
	if (!cr6.gt) goto loc_83992E24;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x83992e24
	if (cr6.gt) goto loc_83992E24;
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// b 0x83992e3c
	goto loc_83992E3C;
loc_83992E24:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x83992e3c
	if (!cr6.lt) goto loc_83992E3C;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x83992e3c
	if (cr6.gt) goto loc_83992E3C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_83992E38:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_83992E3C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x83992e50
	if (cr6.eq) goto loc_83992E50;
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
loc_83992E50:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83992e68
	if (cr6.eq) goto loc_83992E68;
	// stw r25,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
loc_83992E68:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83992E74"))) PPC_WEAK_FUNC(sub_83992E74);
PPC_FUNC_IMPL(__imp__sub_83992E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83992E78"))) PPC_WEAK_FUNC(sub_83992E78);
PPC_FUNC_IMPL(__imp__sub_83992E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83992E80;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-2656(r1)
	ea = -2656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83992fbc
	if (cr6.eq) goto loc_83992FBC;
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r23,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r23.u32);
	// addi r11,r1,292
	ctx.r11.s64 = ctx.r1.s64 + 292;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83992EC0:
	// stw r23,-184(r11)
	PPC_STORE_U32(ctx.r11.u32 + -184, ctx.r23.u32);
	// stw r23,-180(r11)
	PPC_STORE_U32(ctx.r11.u32 + -180, ctx.r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stwu r23,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83992ec0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83992EC0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r25,4
	ctx.r25.s64 = 4;
	// lfs f30,9104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9104);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,-23488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23488);
	ctx.f31.f64 = double(temp.f32);
loc_83992EF4:
	// cmpw cr6,r24,r21
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r21.s32, xer);
	// bne cr6,0x83992f08
	if (!cr6.eq) goto loc_83992F08;
	// addi r28,r1,104
	ctx.r28.s64 = ctx.r1.s64 + 104;
	// addi r27,r1,108
	ctx.r27.s64 = ctx.r1.s64 + 108;
	// b 0x83992f10
	goto loc_83992F10;
loc_83992F08:
	// addi r28,r1,292
	ctx.r28.s64 = ctx.r1.s64 + 292;
	// addi r27,r1,296
	ctx.r27.s64 = ctx.r1.s64 + 296;
loc_83992F10:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_83992F14:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a225d0
	ctx.lr = 0x83992F1C;
	sub_82A225D0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8291adc0
	ctx.lr = 0x83992F28;
	sub_8291ADC0(ctx, base);
	// lbz r11,4076(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4076);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x83992f88
	if (cr6.eq) goto loc_83992F88;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// bge cr6,0x83992f88
	if (!cr6.lt) goto loc_83992F88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82a16248
	ctx.lr = 0x83992F50;
	sub_82A16248(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82be4eb8
	ctx.lr = 0x83992F70;
	sub_82BE4EB8(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lfs f0,4148(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4148);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f31,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f30.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f12,r31,r25
	PPC_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.f12.u32);
loc_83992F88:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// blt cr6,0x83992f14
	if (cr6.lt) goto loc_83992F14;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// blt cr6,0x83992ef4
	if (cr6.lt) goto loc_83992EF4;
	// bl 0x82e765e8
	ctx.lr = 0x83992FA8;
	sub_82E765E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83992fbc
	if (cr6.eq) goto loc_83992FBC;
	// bl 0x82e765e8
	ctx.lr = 0x83992FB4;
	sub_82E765E8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82e76b28
	ctx.lr = 0x83992FBC;
	sub_82E76B28(ctx, base);
loc_83992FBC:
	// addi r1,r1,2656
	ctx.r1.s64 = ctx.r1.s64 + 2656;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83992FCC"))) PPC_WEAK_FUNC(sub_83992FCC);
PPC_FUNC_IMPL(__imp__sub_83992FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83992FD0"))) PPC_WEAK_FUNC(sub_83992FD0);
PPC_FUNC_IMPL(__imp__sub_83992FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83992FD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-2576(r1)
	ea = -2576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83993084
	if (cr6.eq) goto loc_83993084;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83993084
	if (cr6.eq) goto loc_83993084;
	// cmpwi cr6,r7,255
	cr6.compare<int32_t>(ctx.r7.s32, 255, xer);
	// beq cr6,0x83993084
	if (cr6.eq) goto loc_83993084;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82a161a8
	ctx.lr = 0x83993018;
	sub_82A161A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a225d0
	ctx.lr = 0x83993024;
	sub_82A225D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8291adc0
	ctx.lr = 0x83993030;
	sub_8291ADC0(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x8291aa00
	ctx.lr = 0x83993040;
	sub_8291AA00(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lfs f12,4148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4148);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-23488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9104(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9104);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// bl 0x82e765e8
	ctx.lr = 0x83993070;
	sub_82E765E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83993084
	if (cr6.eq) goto loc_83993084;
	// bl 0x82e765e8
	ctx.lr = 0x8399307C;
	sub_82E765E8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82e76b28
	ctx.lr = 0x83993084;
	sub_82E76B28(ctx, base);
loc_83993084:
	// addi r1,r1,2576
	ctx.r1.s64 = ctx.r1.s64 + 2576;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399308C"))) PPC_WEAK_FUNC(sub_8399308C);
PPC_FUNC_IMPL(__imp__sub_8399308C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83993090"))) PPC_WEAK_FUNC(sub_83993090);
PPC_FUNC_IMPL(__imp__sub_83993090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83993098;
	__savegprlr_23(ctx, base);
	// stwu r1,-2688(r1)
	ea = -2688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r11,-24692
	ctx.r10.s64 = ctx.r11.s64 + -24692;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r27,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r27.u8);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x839930DC;
	sub_825AB6C8(ctx, base);
	// lbz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x839930f0
	if (!cr6.eq) goto loc_839930F0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825ab6c8
	ctx.lr = 0x839930F0;
	sub_825AB6C8(ctx, base);
loc_839930F0:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399310c
	if (!cr6.eq) goto loc_8399310C;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_8399310C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r27.u8);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-24672
	ctx.r9.s64 = ctx.r10.s64 + -24672;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x825a9e30
	ctx.lr = 0x83993134;
	sub_825A9E30(ctx, base);
	// lbz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83993148
	if (!cr6.eq) goto loc_83993148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a9e30
	ctx.lr = 0x83993148;
	sub_825A9E30(ctx, base);
loc_83993148:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83993164
	if (!cr6.eq) goto loc_83993164;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_83993164:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839931d0
	if (cr6.eq) goto loc_839931D0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839931e0
	if (cr6.eq) goto loc_839931E0;
	// lwz r11,4456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4456);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x839931d0
	if (cr6.gt) goto loc_839931D0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839931d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839931D0;
	// bdzf 4*cr6+eq,0x839931ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839931AC;
	// bdzf 4*cr6+eq,0x839931d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839931D0;
	// bdzf 4*cr6+eq,0x839931b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839931B4;
	// bdzf 4*cr6+eq,0x839931d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839931D0;
	// bne cr6,0x839931bc
	if (!cr6.eq) goto loc_839931BC;
	// li r24,45
	ctx.r24.s64 = 45;
	// b 0x839931d0
	goto loc_839931D0;
loc_839931AC:
	// li r24,90
	ctx.r24.s64 = 90;
	// b 0x839931d0
	goto loc_839931D0;
loc_839931B4:
	// li r24,105
	ctx.r24.s64 = 105;
	// b 0x839931d0
	goto loc_839931D0;
loc_839931BC:
	// lbz r11,97(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 97);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1E;
	// addi r24,r11,90
	ctx.r24.s64 = ctx.r11.s64 + 90;
loc_839931D0:
	// addic r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
loc_839931E0:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// addic r8,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r27,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r27.u32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,13
	ctx.r10.s64 = 13;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// addi r11,r1,552
	ctx.r11.s64 = ctx.r1.s64 + 552;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
loc_83993214:
	// stw r27,-384(r11)
	PPC_STORE_U32(ctx.r11.u32 + -384, ctx.r27.u32);
	// stw r27,-380(r11)
	PPC_STORE_U32(ctx.r11.u32 + -380, ctx.r27.u32);
	// stw r10,-376(r11)
	PPC_STORE_U32(ctx.r11.u32 + -376, ctx.r10.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// stwu r10,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83993214
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83993214;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_83993234:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a225d0
	ctx.lr = 0x8399323C;
	sub_82A225D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8291adc0
	ctx.lr = 0x83993248;
	sub_8291ADC0(ctx, base);
	// lbz r11,4076(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4076);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x83993300
	if (cr6.eq) goto loc_83993300;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x83993300
	if (!cr6.lt) goto loc_83993300;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r11,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x82a16248
	ctx.lr = 0x83993274;
	sub_82A16248(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82be4eb8
	ctx.lr = 0x839932A0;
	sub_82BE4EB8(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// lbz r10,4076(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4076);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lbz r9,4077(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4077);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x839934bc
	if (cr6.eq) goto loc_839934BC;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r8,255
	cr6.compare<uint32_t>(ctx.r8.u32, 255, xer);
	// bne cr6,0x839934bc
	if (!cr6.eq) goto loc_839934BC;
	// clrlwi r8,r24,24
	ctx.r8.u64 = ctx.r24.u32 & 0xFF;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x839932dc
	if (!cr6.lt) goto loc_839932DC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_839932DC:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
loc_839932E0:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(ctx.r11.u32, 120, xer);
	// ble cr6,0x839932f0
	if (!cr6.gt) goto loc_839932F0;
	// li r11,120
	ctx.r11.s64 = 120;
loc_839932F0:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291aa00
	ctx.lr = 0x839932FC;
	sub_8291AA00(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
loc_83993300:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a225d0
	ctx.lr = 0x83993308;
	sub_82A225D0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8291adc0
	ctx.lr = 0x83993314;
	sub_8291ADC0(ctx, base);
	// lbz r11,4076(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4076);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x839933cc
	if (cr6.eq) goto loc_839933CC;
	// lwz r11,552(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x839933cc
	if (!cr6.lt) goto loc_839933CC;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r11,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x82a16248
	ctx.lr = 0x83993340;
	sub_82A16248(ctx, base);
	// lwz r11,552(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r9.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r1,556
	ctx.r11.s64 = ctx.r1.s64 + 556;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82be4eb8
	ctx.lr = 0x8399336C;
	sub_82BE4EB8(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// lbz r10,4076(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4076);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lbz r9,4077(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4077);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x839934d0
	if (cr6.eq) goto loc_839934D0;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r8,255
	cr6.compare<uint32_t>(ctx.r8.u32, 255, xer);
	// bne cr6,0x839934d0
	if (!cr6.eq) goto loc_839934D0;
	// clrlwi r8,r24,24
	ctx.r8.u64 = ctx.r24.u32 & 0xFF;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x839933a8
	if (!cr6.lt) goto loc_839933A8;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_839933A8:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
loc_839933AC:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(ctx.r11.u32, 120, xer);
	// ble cr6,0x839933bc
	if (!cr6.gt) goto loc_839933BC;
	// li r11,120
	ctx.r11.s64 = 120;
loc_839933BC:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291aa00
	ctx.lr = 0x839933C8;
	sub_8291AA00(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
loc_839933CC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// blt cr6,0x83993234
	if (cr6.lt) goto loc_83993234;
	// bl 0x82e765e8
	ctx.lr = 0x839933DC;
	sub_82E765E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839933f0
	if (cr6.eq) goto loc_839933F0;
	// bl 0x82e765e8
	ctx.lr = 0x839933E8;
	sub_82E765E8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82e76b28
	ctx.lr = 0x839933F0;
	sub_82E76B28(ctx, base);
loc_839933F0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r10,-24712
	ctx.r9.s64 = ctx.r10.s64 + -24712;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x83993430
	if (cr6.eq) goto loc_83993430;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83993430
	if (cr6.eq) goto loc_83993430;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83993428;
	sub_8353F3B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
loc_83993430:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r27.u8);
	// beq cr6,0x83993454
	if (cr6.eq) goto loc_83993454;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83993450;
	sub_8353F3B8(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
loc_83993454:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r9,r10,-24712
	ctx.r9.s64 = ctx.r10.s64 + -24712;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq cr6,0x83993494
	if (cr6.eq) goto loc_83993494;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83993494
	if (cr6.eq) goto loc_83993494;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8399348C;
	sub_8353F3B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
loc_83993494:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r27,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r27.u8);
	// beq cr6,0x839934b4
	if (cr6.eq) goto loc_839934B4;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x839934B4;
	sub_8353F3B8(ctx, base);
loc_839934B4:
	// addi r1,r1,2688
	ctx.r1.s64 = ctx.r1.s64 + 2688;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_839934BC:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x839932e0
	if (!cr6.lt) goto loc_839932E0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x839932f0
	goto loc_839932F0;
loc_839934D0:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x839933ac
	if (!cr6.lt) goto loc_839933AC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x839933bc
	goto loc_839933BC;
}

__attribute__((alias("__imp__sub_839934E4"))) PPC_WEAK_FUNC(sub_839934E4);
PPC_FUNC_IMPL(__imp__sub_839934E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839934E8"))) PPC_WEAK_FUNC(sub_839934E8);
PPC_FUNC_IMPL(__imp__sub_839934E8) {
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
	// stwu r1,-2576(r1)
	ea = -2576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bne cr6,0x83993590
	if (!cr6.eq) goto loc_83993590;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r9,r11,-24692
	ctx.r9.s64 = ctx.r11.s64 + -24692;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x825ab6c8
	ctx.lr = 0x83993540;
	sub_825AB6C8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399355c
	if (!cr6.eq) goto loc_8399355C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_8399355C:
	// lwz r11,4472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4472);
	// li r10,18
	ctx.r10.s64 = 18;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82e765e8
	ctx.lr = 0x83993574;
	sub_82E765E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83993588
	if (cr6.eq) goto loc_83993588;
	// bl 0x82e765e8
	ctx.lr = 0x83993580;
	sub_82E765E8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82e76b28
	ctx.lr = 0x83993588;
	sub_82E76B28(ctx, base);
loc_83993588:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a8d40
	ctx.lr = 0x83993590;
	sub_825A8D40(ctx, base);
loc_83993590:
	// addi r1,r1,2576
	ctx.r1.s64 = ctx.r1.s64 + 2576;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839935A4"))) PPC_WEAK_FUNC(sub_839935A4);
PPC_FUNC_IMPL(__imp__sub_839935A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839935A8"))) PPC_WEAK_FUNC(sub_839935A8);
PPC_FUNC_IMPL(__imp__sub_839935A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x839935B0;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-2960(r1)
	ea = -2960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r24,r4,24
	ctx.r24.u64 = ctx.r4.u32 & 0xFF;
	// stw r5,2996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2996, ctx.r5.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// beq cr6,0x839935dc
	if (cr6.eq) goto loc_839935DC;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x83993628
	goto loc_83993628;
loc_839935DC:
	// bl 0x82dad2e0
	ctx.lr = 0x839935E0;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83993624
	if (cr6.eq) goto loc_83993624;
	// addi r4,r3,72
	ctx.r4.s64 = ctx.r3.s64 + 72;
	// addi r3,r1,2592
	ctx.r3.s64 = ctx.r1.s64 + 2592;
	// bl 0x82c5cb88
	ctx.lr = 0x839935F4;
	sub_82C5CB88(ctx, base);
	// lwz r10,2764(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2764);
	// lwz r9,2760(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2760);
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r3,r1,2592
	ctx.r3.s64 = ctx.r1.s64 + 2592;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x83993620
	if (cr0.eq) goto loc_83993620;
	// bl 0x82b6a860
	ctx.lr = 0x83993614;
	sub_82B6A860(ctx, base);
	// addi r1,r1,2960
	ctx.r1.s64 = ctx.r1.s64 + 2960;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83993620:
	// bl 0x82b6a860
	ctx.lr = 0x83993624;
	sub_82B6A860(ctx, base);
loc_83993624:
	// li r11,13
	ctx.r11.s64 = 13;
loc_83993628:
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lis r9,-31768
	ctx.r9.s64 = -2081947648;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r26,r11,22308
	ctx.r26.s64 = ctx.r11.s64 + 22308;
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// addi r8,r9,22244
	ctx.r8.s64 = ctx.r9.s64 + 22244;
	// stw r23,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r23.u32);
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// stw r23,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r23.u32);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,22292(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 22292);
	// stw r5,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// clrlwi r4,r10,14
	ctx.r4.u64 = ctx.r10.u32 & 0x3FFFF;
	// stw r6,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r4,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r4.u32);
	// bl 0x831156e8
	ctx.lr = 0x83993684;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,2996(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2996);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r27,r10,5
	ctx.r27.s64 = ctx.r10.s64 + 327680;
	// addi r27,r27,14904
	ctx.r27.s64 = ctx.r27.s64 + 14904;
	// bl 0x82a225d0
	ctx.lr = 0x839936A0;
	sub_82A225D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8291ad98
	ctx.lr = 0x839936A8;
	sub_8291AD98(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a225d0
	ctx.lr = 0x839936B4;
	sub_82A225D0(ctx, base);
	// lwz r9,2996(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2996);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r31,r8,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x82a225d0
	ctx.lr = 0x839936C8;
	sub_82A225D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8291ad98
	ctx.lr = 0x839936D0;
	sub_8291AD98(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8381b9d0
	ctx.lr = 0x839936E4;
	sub_8381B9D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// bl 0x82a225d0
	ctx.lr = 0x839936F0;
	sub_82A225D0(ctx, base);
	// lis r7,5
	ctx.r7.s64 = 327680;
	// ori r29,r7,15963
	ctx.r29.u64 = ctx.r7.u64 | 15963;
	// lbzx r6,r3,r29
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r29.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x839937d8
	if (cr6.eq) goto loc_839937D8;
loc_83993704:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a225d0
	ctx.lr = 0x8399370C;
	sub_82A225D0(ctx, base);
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// bl 0x8291aff8
	ctx.lr = 0x83993714;
	sub_8291AFF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839937c0
	if (cr6.eq) goto loc_839937C0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x839937c0
	if (cr6.eq) goto loc_839937C0;
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839937c0
	if (!cr6.eq) goto loc_839937C0;
	// lwz r11,2996(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2996);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x839937c0
	if (!cr6.eq) goto loc_839937C0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x83123ba8
	ctx.lr = 0x83993760;
	sub_83123BA8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 44);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x833ecc50
	ctx.lr = 0x83993784;
	sub_833ECC50(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bne cr6,0x839937a8
	if (!cr6.eq) goto loc_839937A8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833e3748
	ctx.lr = 0x839937A0;
	sub_833E3748(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_839937A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833e3748
	ctx.lr = 0x839937B4;
	sub_833E3748(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_839937C0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82a225d0
	ctx.lr = 0x839937CC;
	sub_82A225D0(ctx, base);
	// lbzx r11,r3,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r29.u32);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83993704
	if (cr6.lt) goto loc_83993704;
loc_839937D8:
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x83993824
	if (cr6.eq) goto loc_83993824;
loc_839937F4:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83993808
	if (cr6.eq) goto loc_83993808;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// ble cr6,0x83993810
	if (!cr6.gt) goto loc_83993810;
loc_83993808:
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_83993810:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x83993818;
	sub_8330EE50(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x839937f4
	if (!cr6.eq) goto loc_839937F4;
loc_83993824:
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d0e798
	ctx.lr = 0x8399383C;
	sub_82D0E798(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x83993850;
	sub_825952B8(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// rlwimi r11,r10,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// rlwinm r9,r11,0,16,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// lbz r8,7(r25)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r25.u32 + 7);
	// rotlwi r7,r8,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// or r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// rlwinm r6,r11,0,24,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// lbz r5,11(r25)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r25.u32 + 11);
	// rotlwi r4,r5,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// beq cr6,0x839938b0
	if (cr6.eq) goto loc_839938B0;
	// addi r4,r1,2996
	ctx.r4.s64 = ctx.r1.s64 + 2996;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83123ad8
	ctx.lr = 0x8399389C;
	sub_83123AD8(ctx, base);
	// ld r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// b 0x839938b8
	goto loc_839938B8;
loc_839938B0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
loc_839938B8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,2996(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2996);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831239e0
	ctx.lr = 0x839938C8;
	sub_831239E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// bl 0x82919698
	ctx.lr = 0x839938E4;
	sub_82919698(ctx, base);
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82919698
	ctx.lr = 0x839938F4;
	sub_82919698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// ble cr6,0x83993910
	if (!cr6.gt) goto loc_83993910;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// b 0x83993928
	goto loc_83993928;
loc_83993910:
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x83993920
	if (!cr6.eq) goto loc_83993920;
	// rlwimi r11,r10,1,24,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0xFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF00);
	// b 0x83993924
	goto loc_83993924;
loc_83993920:
	// rlwimi r11,r10,0,24,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF00);
loc_83993924:
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
loc_83993928:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x829194e8
	ctx.lr = 0x83993938;
	sub_829194E8(ctx, base);
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// ble cr6,0x83993948
	if (!cr6.gt) goto loc_83993948;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_83993948:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// rlwimi r11,r3,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_83993960:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,2996(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2996);
	// bl 0x82a225d0
	ctx.lr = 0x8399396C;
	sub_82A225D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8291adc0
	ctx.lr = 0x83993978;
	sub_8291ADC0(ctx, base);
	// lbz r11,4076(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4076);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x8399398c
	if (cr6.eq) goto loc_8399398C;
	// lfs f0,4736(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4736);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_8399398C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x83993960
	if (cr6.lt) goto loc_83993960;
	// fctidz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// ble cr6,0x839939b4
	if (!cr6.gt) goto loc_839939B4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_839939B4:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwimi r11,r10,0,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// bl 0x82919550
	ctx.lr = 0x839939D0;
	sub_82919550(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82919550
	ctx.lr = 0x839939E4;
	sub_82919550(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83993a14
	if (cr6.eq) goto loc_83993A14;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r3,1000
	ctx.r10.s64 = ctx.r3.s64 * 1000;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// twllei r10,0
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r11,r8,r10
	ctx.r11.u32 = PPCDivide(ctx.r8.u32, ctx.r10.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// ble cr6,0x83993a14
	if (!cr6.gt) goto loc_83993A14;
	// li r11,255
	ctx.r11.s64 = 255;
loc_83993A14:
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwimi r10,r11,24,0,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF000000) | (ctx.r10.u64 & 0xFFFFFFFF00FFFFFF);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// bl 0x82919550
	ctx.lr = 0x83993A30;
	sub_82919550(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82919550
	ctx.lr = 0x83993A44;
	sub_82919550(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83993a74
	if (cr6.eq) goto loc_83993A74;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r3,1000
	ctx.r10.s64 = ctx.r3.s64 * 1000;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// twllei r10,0
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r11,r8,r10
	ctx.r11.u32 = PPCDivide(ctx.r8.u32, ctx.r10.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// ble cr6,0x83993a74
	if (!cr6.gt) goto loc_83993A74;
	// li r11,255
	ctx.r11.s64 = 255;
loc_83993A74:
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwimi r10,r11,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// bl 0x82919c48
	ctx.lr = 0x83993A88;
	sub_82919C48(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// ble cr6,0x83993aa0
	if (!cr6.gt) goto loc_83993AA0;
	// li r11,255
	ctx.r11.s64 = 255;
loc_83993AA0:
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,43
	ctx.r4.s64 = 43;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// bl 0x829194e8
	ctx.lr = 0x83993ABC;
	sub_829194E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x829194e8
	ctx.lr = 0x83993AD0;
	sub_829194E8(ctx, base);
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// ble cr6,0x83993ae0
	if (!cr6.gt) goto loc_83993AE0;
	// li r11,255
	ctx.r11.s64 = 255;
loc_83993AE0:
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r3,255
	cr6.compare<uint32_t>(ctx.r3.u32, 255, xer);
	// rlwimi r11,r10,0,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// ble cr6,0x83993af8
	if (!cr6.gt) goto loc_83993AF8;
	// li r3,255
	ctx.r3.s64 = 255;
loc_83993AF8:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,5
	ctx.r4.s64 = 5;
	// rlwimi r11,r3,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// bl 0x829194e8
	ctx.lr = 0x83993B14;
	sub_829194E8(ctx, base);
	// cmplwi cr6,r3,255
	cr6.compare<uint32_t>(ctx.r3.u32, 255, xer);
	// ble cr6,0x83993b20
	if (!cr6.gt) goto loc_83993B20;
	// li r3,255
	ctx.r3.s64 = 255;
loc_83993B20:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,89
	ctx.r4.s64 = 89;
	// rlwimi r11,r3,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// bl 0x829194e8
	ctx.lr = 0x83993B3C;
	sub_829194E8(ctx, base);
	// cmplwi cr6,r3,255
	cr6.compare<uint32_t>(ctx.r3.u32, 255, xer);
	// ble cr6,0x83993b48
	if (!cr6.gt) goto loc_83993B48;
	// li r3,255
	ctx.r3.s64 = 255;
loc_83993B48:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,88
	ctx.r4.s64 = 88;
	// rlwimi r11,r3,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// bl 0x829194e8
	ctx.lr = 0x83993B64;
	sub_829194E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,86
	ctx.r4.s64 = 86;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x829194e8
	ctx.lr = 0x83993B78;
	sub_829194E8(ctx, base);
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// ble cr6,0x83993b88
	if (!cr6.gt) goto loc_83993B88;
	// li r11,255
	ctx.r11.s64 = 255;
loc_83993B88:
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,85
	ctx.r4.s64 = 85;
	// rlwimi r11,r10,0,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// bl 0x829194e8
	ctx.lr = 0x83993BA4;
	sub_829194E8(ctx, base);
	// cmplwi cr6,r3,255
	cr6.compare<uint32_t>(ctx.r3.u32, 255, xer);
	// ble cr6,0x83993bb0
	if (!cr6.gt) goto loc_83993BB0;
	// li r3,255
	ctx.r3.s64 = 255;
loc_83993BB0:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,84
	ctx.r4.s64 = 84;
	// rlwimi r11,r3,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x829194e8
	ctx.lr = 0x83993BCC;
	sub_829194E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,83
	ctx.r4.s64 = 83;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x829194e8
	ctx.lr = 0x83993BE0;
	sub_829194E8(ctx, base);
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// ble cr6,0x83993bf0
	if (!cr6.gt) goto loc_83993BF0;
	// li r11,255
	ctx.r11.s64 = 255;
loc_83993BF0:
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,93
	ctx.r4.s64 = 93;
	// rlwimi r10,r11,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// bl 0x829194e8
	ctx.lr = 0x83993C0C;
	sub_829194E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x829194e8
	ctx.lr = 0x83993C20;
	sub_829194E8(ctx, base);
	// add r31,r31,r3
	ctx.r31.u64 = ctx.r31.u64 + ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x829194e8
	ctx.lr = 0x83993C34;
	sub_829194E8(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x829194e8
	ctx.lr = 0x83993C48;
	sub_829194E8(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,87
	ctx.r4.s64 = 87;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x829194e8
	ctx.lr = 0x83993C5C;
	sub_829194E8(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// ble cr6,0x83993c6c
	if (!cr6.gt) goto loc_83993C6C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_83993C6C:
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,95
	ctx.r4.s64 = 95;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// bl 0x829194e8
	ctx.lr = 0x83993C88;
	sub_829194E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x829194e8
	ctx.lr = 0x83993C9C;
	sub_829194E8(ctx, base);
	// add r31,r31,r3
	ctx.r31.u64 = ctx.r31.u64 + ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x829194e8
	ctx.lr = 0x83993CB0;
	sub_829194E8(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// ble cr6,0x83993cc0
	if (!cr6.gt) goto loc_83993CC0;
	// li r11,255
	ctx.r11.s64 = 255;
loc_83993CC0:
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// rlwimi r11,r10,0,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8291a378
	ctx.lr = 0x83993CF0;
	sub_8291A378(ctx, base);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r4,r8,24,0,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// rlwimi r7,r5,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// or r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rlwimi r3,r7,8,8,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFF00) | (ctx.r3.u64 & 0xFFFFFFFFFF0000FF);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// bl 0x82e765e8
	ctx.lr = 0x83993D1C;
	sub_82E765E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83993d30
	if (cr6.eq) goto loc_83993D30;
	// bl 0x82e765e8
	ctx.lr = 0x83993D28;
	sub_82E765E8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82e76b28
	ctx.lr = 0x83993D30;
	sub_82E76B28(ctx, base);
loc_83993D30:
	// addi r1,r1,2960
	ctx.r1.s64 = ctx.r1.s64 + 2960;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83993D3C"))) PPC_WEAK_FUNC(sub_83993D3C);
PPC_FUNC_IMPL(__imp__sub_83993D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83993D40"))) PPC_WEAK_FUNC(sub_83993D40);
PPC_FUNC_IMPL(__imp__sub_83993D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x83993D48;
	__savegprlr_18(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r11,-22864
	ctx.r10.s64 = ctx.r11.s64 + -22864;
	// stb r27,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r27.u8);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// bl 0x825b4da8
	ctx.lr = 0x83993D80;
	sub_825B4DA8(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83993d9c
	if (!cr6.eq) goto loc_83993D9C;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_83993D9C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r27.u8);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-22844
	ctx.r9.s64 = ctx.r10.s64 + -22844;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r24,-1
	ctx.r24.s64 = -1;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// li r23,255
	ctx.r23.s64 = 255;
	// bl 0x825b4878
	ctx.lr = 0x83993DD4;
	sub_825B4878(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83993df0
	if (!cr6.eq) goto loc_83993DF0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_83993DF0:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lis r28,-31778
	ctx.r28.s64 = -2082603008;
loc_83993DFC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x83993e0c
	if (cr6.lt) goto loc_83993E0C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83993E0C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83993e60
	if (cr6.eq) goto loc_83993E60;
	// lwz r3,2056(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2056);
	// lwz r18,76(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83993E38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r18,r9
	cr6.compare<uint32_t>(ctx.r18.u32, ctx.r9.u32, xer);
	// bne cr6,0x83993e60
	if (!cr6.eq) goto loc_83993E60;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83993e60
	if (cr6.eq) goto loc_83993E60;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83993e70
	if (!cr6.eq) goto loc_83993E70;
loc_83993E60:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x83993dfc
	if (cr6.lt) goto loc_83993DFC;
	// b 0x83993ec0
	goto loc_83993EC0;
loc_83993E70:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lwz r24,84(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83993e8c
	if (cr6.eq) goto loc_83993E8C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x83993eac
	goto loc_83993EAC;
loc_83993E8C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83993ea4
	if (cr6.lt) goto loc_83993EA4;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x83993ea8
	if (cr6.lt) goto loc_83993EA8;
loc_83993EA4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83993EA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83993EAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83993ec0
	if (cr6.eq) goto loc_83993EC0;
	// lwz r23,16(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r22,1
	ctx.r22.s64 = 1;
loc_83993EC0:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addic r8,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r6,r10,-9704
	ctx.r6.s64 = ctx.r10.s64 + -9704;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// and r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 & ctx.r11.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// beq cr6,0x83993f14
	if (cr6.eq) goto loc_83993F14;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83993f14
	if (cr6.eq) goto loc_83993F14;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83993F0C;
	sub_8353F3B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
loc_83993F14:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r27.u8);
	// beq cr6,0x83993f38
	if (cr6.eq) goto loc_83993F38;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83993F34;
	sub_8353F3B8(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
loc_83993F38:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83993090
	ctx.lr = 0x83993F54;
	sub_83993090(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x83993F58;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// beq cr6,0x83993f90
	if (cr6.eq) goto loc_83993F90;
	// cmplwi cr6,r11,51
	cr6.compare<uint32_t>(ctx.r11.u32, 51, xer);
	// ble cr6,0x83993fb0
	if (!cr6.gt) goto loc_83993FB0;
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(ctx.r11.u32, 61, xer);
	// bgt cr6,0x83993fb0
	if (cr6.gt) goto loc_83993FB0;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83992e78
	ctx.lr = 0x83993F8C;
	sub_83992E78(ctx, base);
	// b 0x83993fb0
	goto loc_83993FB0;
loc_83993F90:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83992fd0
	ctx.lr = 0x83993FB0;
	sub_83992FD0(ctx, base);
loc_83993FB0:
	// bl 0x830ff290
	ctx.lr = 0x83993FB4;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// beq cr6,0x83993fec
	if (cr6.eq) goto loc_83993FEC;
	// bl 0x830ff290
	ctx.lr = 0x83993FC4;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(ctx.r11.u32, 61, xer);
	// beq cr6,0x83993fec
	if (cr6.eq) goto loc_83993FEC;
	// bl 0x830ff290
	ctx.lr = 0x83993FD4;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// bne cr6,0x83994008
	if (!cr6.eq) goto loc_83994008;
	// bl 0x82dad2e0
	ctx.lr = 0x83993FE4;
	sub_82DAD2E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83993ff4
	goto loc_83993FF4;
loc_83993FEC:
	// bl 0x82dad2e0
	ctx.lr = 0x83993FF0;
	sub_82DAD2E0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
loc_83993FF4:
	// lwz r5,228(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x839935a8
	ctx.lr = 0x83994008;
	sub_839935A8(ctx, base);
loc_83994008:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// bl 0x839934e8
	ctx.lr = 0x83994028;
	sub_839934E8(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lbz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// addi r5,r6,-16664
	ctx.r5.s64 = ctx.r6.s64 + -16664;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// beq cr6,0x83994060
	if (cr6.eq) goto loc_83994060;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83994060
	if (cr6.eq) goto loc_83994060;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8353f3b8
	ctx.lr = 0x83994058;
	sub_8353F3B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
loc_83994060:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r27,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r27.u8);
	// beq cr6,0x83994078
	if (cr6.eq) goto loc_83994078;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8353f3b8
	ctx.lr = 0x83994078;
	sub_8353F3B8(ctx, base);
loc_83994078:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83994084"))) PPC_WEAK_FUNC(sub_83994084);
PPC_FUNC_IMPL(__imp__sub_83994084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83994088"))) PPC_WEAK_FUNC(sub_83994088);
PPC_FUNC_IMPL(__imp__sub_83994088) {
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
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,19304
	ctx.r9.s64 = ctx.r11.s64 + 19304;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x839940bc
	if (cr6.eq) goto loc_839940BC;
	// bl 0x82416268
	ctx.lr = 0x839940B8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839940BC:
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

__attribute__((alias("__imp__sub_839940D0"))) PPC_WEAK_FUNC(sub_839940D0);
PPC_FUNC_IMPL(__imp__sub_839940D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// li r8,24
	ctx.r8.s64 = 24;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,6
	ctx.r9.s64 = ctx.r3.s64 + 6;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_839940E4:
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x839940e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839940E4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r11.u8);
	// stb r11,31(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31, ctx.r11.u8);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// stb r11,34(r3)
	PPC_STORE_U8(ctx.r3.u32 + 34, ctx.r11.u8);
	// stb r10,35(r3)
	PPC_STORE_U8(ctx.r3.u32 + 35, ctx.r10.u8);
	// stb r10,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r10.u8);
	// stb r11,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83994120"))) PPC_WEAK_FUNC(sub_83994120);
PPC_FUNC_IMPL(__imp__sub_83994120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// li r8,24
	ctx.r8.s64 = 24;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r3,6
	ctx.r9.s64 = ctx.r3.s64 + 6;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83994134:
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83994134
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83994134;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stb r10,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r10.u8);
	// stb r10,31(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31, ctx.r10.u8);
	// stb r10,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r10.u8);
	// stb r10,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r10.u8);
	// stb r10,34(r3)
	PPC_STORE_U8(ctx.r3.u32 + 34, ctx.r10.u8);
	// stb r10,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83994164"))) PPC_WEAK_FUNC(sub_83994164);
PPC_FUNC_IMPL(__imp__sub_83994164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83994168"))) PPC_WEAK_FUNC(sub_83994168);
PPC_FUNC_IMPL(__imp__sub_83994168) {
	PPC_FUNC_PROLOGUE();
	// stb r4,35(r3)
	PPC_STORE_U8(ctx.r3.u32 + 35, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83994170"))) PPC_WEAK_FUNC(sub_83994170);
PPC_FUNC_IMPL(__imp__sub_83994170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// li r8,24
	ctx.r8.s64 = 24;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r3,6
	ctx.r9.s64 = ctx.r3.s64 + 6;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83994184:
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83994184
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83994184;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stb r10,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r10.u8);
	// stb r10,31(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839941A4"))) PPC_WEAK_FUNC(sub_839941A4);
PPC_FUNC_IMPL(__imp__sub_839941A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839941A8"))) PPC_WEAK_FUNC(sub_839941A8);
PPC_FUNC_IMPL(__imp__sub_839941A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839941BC"))) PPC_WEAK_FUNC(sub_839941BC);
PPC_FUNC_IMPL(__imp__sub_839941BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839941C0"))) PPC_WEAK_FUNC(sub_839941C0);
PPC_FUNC_IMPL(__imp__sub_839941C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839941C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,24
	cr6.compare<uint32_t>(ctx.r6.u32, 24, xer);
	// blt cr6,0x839941e4
	if (cr6.lt) goto loc_839941E4;
	// li r11,23
	ctx.r11.s64 = 23;
loc_839941E4:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x82a30c58
	ctx.lr = 0x839941F4;
	sub_82A30C58(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83994328
	if (!cr6.eq) goto loc_83994328;
	// lbz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83994328
	if (cr6.eq) goto loc_83994328;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83994220
	if (!cr6.eq) goto loc_83994220;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x83994228
	goto loc_83994228;
loc_83994220:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83994228:
	// lbz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83994284
	if (!cr6.eq) goto loc_83994284;
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83994328
	if (cr6.eq) goto loc_83994328;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x83994254
	if (cr6.eq) goto loc_83994254;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x83994328
	if (!cr6.eq) goto loc_83994328;
loc_83994254:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stb r10,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// beq cr6,0x8399426c
	if (cr6.eq) goto loc_8399426C;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x83994328
	if (!cr6.eq) goto loc_83994328;
loc_8399426C:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83994284:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a32318
	ctx.lr = 0x8399428C;
	sub_82A32318(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839942a8
	if (cr6.eq) goto loc_839942A8;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bne cr6,0x839942a8
	if (!cr6.eq) goto loc_839942A8;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x839942b8
	goto loc_839942B8;
loc_839942A8:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x839942b8
	if (cr6.eq) goto loc_839942B8;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x83994328
	if (!cr6.eq) goto loc_83994328;
loc_839942B8:
	// bl 0x831156e8
	ctx.lr = 0x839942BC;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b8f0
	ctx.lr = 0x839942C8;
	sub_8312B8F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399431c
	if (cr6.eq) goto loc_8399431C;
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lbz r11,6(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bne cr6,0x83994300
	if (!cr6.eq) goto loc_83994300;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r9.u8);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83994300:
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r9.u8);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8399431C:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// li r10,180
	ctx.r10.s64 = 180;
	// stb r10,30(r11)
	PPC_STORE_U8(ctx.r11.u32 + 30, ctx.r10.u8);
loc_83994328:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83994330"))) PPC_WEAK_FUNC(sub_83994330);
PPC_FUNC_IMPL(__imp__sub_83994330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8399437c
	if (!cr6.eq) goto loc_8399437C;
	// lbz r9,30(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 30);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83994374
	if (!cr6.eq) goto loc_83994374;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83994374
	if (!cr6.eq) goto loc_83994374;
	// lbz r9,31(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839943c0
	if (cr6.eq) goto loc_839943C0;
loc_83994374:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83994380
	if (cr6.eq) goto loc_83994380;
loc_8399437C:
	// li r4,1
	ctx.r4.s64 = 1;
loc_83994380:
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83994390
	if (cr6.eq) goto loc_83994390;
	// li r5,1
	ctx.r5.s64 = 1;
loc_83994390:
	// lbz r10,30(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 30);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839943a8
	if (cr6.eq) goto loc_839943A8;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r10,30(r11)
	PPC_STORE_U8(ctx.r11.u32 + 30, ctx.r10.u8);
loc_839943A8:
	// lbz r10,31(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839943c0
	if (cr6.eq) goto loc_839943C0;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r10,31(r11)
	PPC_STORE_U8(ctx.r11.u32 + 31, ctx.r10.u8);
loc_839943C0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_839943D8"))) PPC_WEAK_FUNC(sub_839943D8);
PPC_FUNC_IMPL(__imp__sub_839943D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839943DC"))) PPC_WEAK_FUNC(sub_839943DC);
PPC_FUNC_IMPL(__imp__sub_839943DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839943E0"))) PPC_WEAK_FUNC(sub_839943E0);
PPC_FUNC_IMPL(__imp__sub_839943E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lwz r3,-26672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26672);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839943EC"))) PPC_WEAK_FUNC(sub_839943EC);
PPC_FUNC_IMPL(__imp__sub_839943EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839943F0"))) PPC_WEAK_FUNC(sub_839943F0);
PPC_FUNC_IMPL(__imp__sub_839943F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// li r8,24
	ctx.r8.s64 = 24;
	// addi r9,r10,19376
	ctx.r9.s64 = ctx.r10.s64 + 19376;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r9,r3,6
	ctx.r9.s64 = ctx.r3.s64 + 6;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83994410:
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x83994410
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83994410;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r11.u8);
	// stb r11,31(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31, ctx.r11.u8);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// stb r11,34(r3)
	PPC_STORE_U8(ctx.r3.u32 + 34, ctx.r11.u8);
	// stb r10,35(r3)
	PPC_STORE_U8(ctx.r3.u32 + 35, ctx.r10.u8);
	// stb r10,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r10.u8);
	// stb r11,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399444C"))) PPC_WEAK_FUNC(sub_8399444C);
PPC_FUNC_IMPL(__imp__sub_8399444C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83994450"))) PPC_WEAK_FUNC(sub_83994450);
PPC_FUNC_IMPL(__imp__sub_83994450) {
	PPC_FUNC_PROLOGUE();
	// stb r4,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83994458"))) PPC_WEAK_FUNC(sub_83994458);
PPC_FUNC_IMPL(__imp__sub_83994458) {
	PPC_FUNC_PROLOGUE();
	// stb r4,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83994460"))) PPC_WEAK_FUNC(sub_83994460);
PPC_FUNC_IMPL(__imp__sub_83994460) {
	PPC_FUNC_PROLOGUE();
	// stb r4,34(r3)
	PPC_STORE_U8(ctx.r3.u32 + 34, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83994468"))) PPC_WEAK_FUNC(sub_83994468);
PPC_FUNC_IMPL(__imp__sub_83994468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r8,24
	ctx.r8.s64 = 24;
	// addi r9,r11,19376
	ctx.r9.s64 = ctx.r11.s64 + 19376;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r9,r3,6
	ctx.r9.s64 = ctx.r3.s64 + 6;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83994488:
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83994488
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83994488;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// addi r9,r11,19304
	ctx.r9.s64 = ctx.r11.s64 + 19304;
	// stb r10,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r10.u8);
	// stb r10,31(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31, ctx.r10.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r10,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r10.u8);
	// stb r10,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r10.u8);
	// stb r10,34(r3)
	PPC_STORE_U8(ctx.r3.u32 + 34, ctx.r10.u8);
	// stb r10,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839944C4"))) PPC_WEAK_FUNC(sub_839944C4);
PPC_FUNC_IMPL(__imp__sub_839944C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839944C8"))) PPC_WEAK_FUNC(sub_839944C8);
PPC_FUNC_IMPL(__imp__sub_839944C8) {
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
	// lis r31,-31742
	ctx.r31.s64 = -2080243712;
	// lwz r3,-26672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26672);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83994518
	if (!cr6.eq) goto loc_83994518;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83994500;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83994540
	if (cr6.eq) goto loc_83994540;
	// bl 0x839943f0
	ctx.lr = 0x8399450C;
	sub_839943F0(ctx, base);
	// stw r3,-26672(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26672, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8399452c
	if (cr6.eq) goto loc_8399452C;
loc_83994518:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83994528;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-26672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26672);
loc_8399452C:
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
loc_83994540:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,-26672(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26672, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8399455C"))) PPC_WEAK_FUNC(sub_8399455C);
PPC_FUNC_IMPL(__imp__sub_8399455C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

