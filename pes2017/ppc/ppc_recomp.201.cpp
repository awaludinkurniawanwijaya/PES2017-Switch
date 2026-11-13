#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82DDF65C"))) PPC_WEAK_FUNC(sub_82DDF65C);
PPC_FUNC_IMPL(__imp__sub_82DDF65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DDF660"))) PPC_WEAK_FUNC(sub_82DDF660);
PPC_FUNC_IMPL(__imp__sub_82DDF660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DDF668;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DDF674;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ddf698
	if (cr6.eq) goto loc_82DDF698;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82ddf748
	if (cr6.lt) goto loc_82DDF748;
	// beq cr6,0x82ddf774
	if (cr6.eq) goto loc_82DDF774;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82ddf6cc
	if (cr6.lt) goto loc_82DDF6CC;
loc_82DDF698:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-4496(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4496);
	// bl 0x82e64c60
	ctx.lr = 0x82DDF6B0;
	sub_82E64C60(ctx, base);
	// lis r9,-32034
	ctx.r9.s64 = -2099380224;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,3760
	ctx.r7.s64 = ctx.r9.s64 + 3760;
	// stw r8,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r8.u32);
	// stw r7,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DDF6CC:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82ddcec8
	ctx.lr = 0x82DDF6D4;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ddf844
	if (cr6.eq) goto loc_82DDF844;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82ddf70c
	if (!cr6.eq) goto loc_82DDF70C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-4496(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4496);
	// bl 0x82e64c60
	ctx.lr = 0x82DDF6FC;
	sub_82E64C60(ctx, base);
	// lis r9,-32034
	ctx.r9.s64 = -2099380224;
	// addi r8,r9,3760
	ctx.r8.s64 = ctx.r9.s64 + 3760;
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// b 0x82ddf718
	goto loc_82DDF718;
loc_82DDF70C:
	// lis r11,-32034
	ctx.r11.s64 = -2099380224;
	// addi r10,r11,3760
	ctx.r10.s64 = ctx.r11.s64 + 3760;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
loc_82DDF718:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ddf844
	if (cr6.eq) goto loc_82DDF844;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DDF73C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DDF748:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ddf770
	if (cr6.eq) goto loc_82DDF770;
	// lis r11,-32034
	ctx.r11.s64 = -2099380224;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3760
	ctx.r9.s64 = ctx.r11.s64 + 3760;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DDF770:
	// stw r28,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r28.u32);
loc_82DDF774:
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// bl 0x831f81f8
	ctx.lr = 0x82DDF784;
	sub_831F81F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82dbbf90
	ctx.lr = 0x82DDF78C;
	sub_82DBBF90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ddf7a4
	if (!cr6.eq) goto loc_82DDF7A4;
	// bl 0x82dcbc48
	ctx.lr = 0x82DDF79C;
	sub_82DCBC48(ctx, base);
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_82DDF7A4:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r30,r31,256
	ctx.r30.s64 = ctx.r31.s64 + 256;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ddf7d0
	if (!cr6.eq) goto loc_82DDF7D0;
	// lis r11,-32034
	ctx.r11.s64 = -2099380224;
	// stw r29,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r29.u32);
	// addi r10,r11,3760
	ctx.r10.s64 = ctx.r11.s64 + 3760;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DDF7D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a8e3a8
	ctx.lr = 0x82DDF7DC;
	sub_82A8E3A8(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r5,236(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// bl 0x82ddee30
	ctx.lr = 0x82DDF7F0;
	sub_82DDEE30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ddf814
	if (cr6.eq) goto loc_82DDF814;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83857bf0
	ctx.lr = 0x82DDF804;
	sub_83857BF0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DDF814:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ddd968
	ctx.lr = 0x82DDF820;
	sub_82DDD968(ctx, base);
	// stw r28,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r28.u32);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-4496(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4496);
	// bl 0x82e64c60
	ctx.lr = 0x82DDF834;
	sub_82E64C60(ctx, base);
	// lis r10,-32034
	ctx.r10.s64 = -2099380224;
	// stw r29,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r29.u32);
	// addi r9,r10,3760
	ctx.r9.s64 = ctx.r10.s64 + 3760;
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
loc_82DDF844:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DDF84C"))) PPC_WEAK_FUNC(sub_82DDF84C);
PPC_FUNC_IMPL(__imp__sub_82DDF84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DDF850"))) PPC_WEAK_FUNC(sub_82DDF850);
PPC_FUNC_IMPL(__imp__sub_82DDF850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DDF858;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DDF868;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ddf8d8
	if (cr6.eq) goto loc_82DDF8D8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c5b8b8
	ctx.lr = 0x82DDF87C;
	sub_82C5B8B8(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r31,104(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x831f81f8
	ctx.lr = 0x82DDF888;
	sub_831F81F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82dbcb88
	ctx.lr = 0x82DDF894;
	sub_82DBCB88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ddf8c4
	if (cr6.eq) goto loc_82DDF8C4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8259cb28
	ctx.lr = 0x82DDF8B4;
	sub_8259CB28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da8c38
	ctx.lr = 0x82DDF8BC;
	sub_82DA8C38(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DDF8C4:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r4,r11,-10604
	ctx.r4.s64 = ctx.r11.s64 + -10604;
	// bl 0x8259d6c0
	ctx.lr = 0x82DDF8D0;
	sub_8259D6C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da8c38
	ctx.lr = 0x82DDF8D8;
	sub_82DA8C38(ctx, base);
loc_82DDF8D8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DDF8E0"))) PPC_WEAK_FUNC(sub_82DDF8E0);
PPC_FUNC_IMPL(__imp__sub_82DDF8E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DDF8E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DDF8F4;
	sub_82D86078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ddfab4
	if (cr6.eq) goto loc_82DDFAB4;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// bl 0x82df9ea0
	ctx.lr = 0x82DDF928;
	sub_82DF9EA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ddf95c
	if (!cr6.eq) goto loc_82DDF95C;
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82ddfab0
	if (cr6.eq) goto loc_82DDFAB0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r4,r31,468
	ctx.r4.s64 = ctx.r31.s64 + 468;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8259cb28
	ctx.lr = 0x82DDF95C;
	sub_8259CB28(ctx, base);
loc_82DDF95C:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82ddfaac
	if (cr6.eq) goto loc_82DDFAAC;
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r27,25496(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25496);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82ddfaac
	if (cr6.eq) goto loc_82DDFAAC;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ddf990
	if (!cr6.lt) goto loc_82DDF990;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82DDF990:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82DDF998;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x82ddd6f8
	ctx.lr = 0x82DDF9A0;
	sub_82DDD6F8(ctx, base);
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82ddf9ec
	if (cr6.lt) goto loc_82DDF9EC;
	// bne cr6,0x82ddfaa4
	if (!cr6.eq) goto loc_82DDFAA4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e9bca0
	ctx.lr = 0x82DDF9B8;
	sub_82E9BCA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ddfaa4
	if (cr6.eq) goto loc_82DDFAA4;
	// stw r29,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r29.u32);
	// addi r11,r31,468
	ctx.r11.s64 = ctx.r31.s64 + 468;
	// stw r28,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r28.u32);
	// stb r29,377(r31)
	PPC_STORE_U8(ctx.r31.u32 + 377, ctx.r29.u8);
	// stw r29,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r29.u32);
	// lwz r10,488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ddf9e4
	if (cr6.lt) goto loc_82DDF9E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DDF9E4:
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// b 0x82ddfaa4
	goto loc_82DDFAA4;
loc_82DDF9EC:
	// addi r30,r31,404
	ctx.r30.s64 = ctx.r31.s64 + 404;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_82DDF9FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ddfa1c
	if (!cr0.eq) goto loc_82DDFA1C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ddf9fc
	if (!cr6.eq) goto loc_82DDF9FC;
loc_82DDFA1C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ddfaa4
	if (cr6.eq) goto loc_82DDFAA4;
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// ld r5,200(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// ld r6,208(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// ld r7,216(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// ld r8,224(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// ld r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// ld r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stb r29,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r29.u8);
	// bl 0x82e9bbd8
	ctx.lr = 0x82DDFA54;
	sub_82E9BBD8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82ddfa88
	if (!cr6.eq) goto loc_82DDFA88;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// li r5,60
	ctx.r5.s64 = 60;
	// stb r11,377(r31)
	PPC_STORE_U8(ctx.r31.u32 + 377, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82DDFA78;
	sub_831CE980(ctx, base);
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r10.u32);
	// b 0x82ddfaa4
	goto loc_82DDFAA4;
loc_82DDFA88:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r31,468
	ctx.r3.s64 = ctx.r31.s64 + 468;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DDFAA4;
	sub_8259CB28(ctx, base);
loc_82DDFAA4:
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DDFAAC;
	sub_831F81F8(ctx, base);
loc_82DDFAAC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_82DDFAB0:
	// bl 0x8387e8e0
	ctx.lr = 0x82DDFAB4;
	sub_8387E8E0(ctx, base);
loc_82DDFAB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DDFAC0"))) PPC_WEAK_FUNC(sub_82DDFAC0);
PPC_FUNC_IMPL(__imp__sub_82DDFAC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DDFAC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DDFAEC;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ddfb00
	if (!cr6.eq) goto loc_82DDFB00;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82DDFB00:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82ddde18
	ctx.lr = 0x82DDFB08;
	sub_82DDDE18(ctx, base);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x82ddfb68
	if (cr6.lt) goto loc_82DDFB68;
	// bne cr6,0x82ddfb88
	if (!cr6.eq) goto loc_82DDFB88;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// bl 0x82dcbf30
	ctx.lr = 0x82DDFB24;
	sub_82DCBF30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ddfb3c
	if (cr6.eq) goto loc_82DDFB3C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82DDFB3C;
	sub_835977D8(ctx, base);
loc_82DDFB3C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a8e3a8
	ctx.lr = 0x82DDFB48;
	sub_82A8E3A8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82df9578
	ctx.lr = 0x82DDFB54;
	sub_82DF9578(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82df8fc8
	ctx.lr = 0x82DDFB5C;
	sub_82DF8FC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x82DDFB64;
	sub_82F73D60(ctx, base);
	// b 0x82ddfb88
	goto loc_82DDFB88;
loc_82DDFB68:
	// addi r4,r28,240
	ctx.r4.s64 = ctx.r28.s64 + 240;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a8e3a8
	ctx.lr = 0x82DDFB74;
	sub_82A8E3A8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82df9578
	ctx.lr = 0x82DDFB80;
	sub_82DF9578(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82df8f88
	ctx.lr = 0x82DDFB88;
	sub_82DF8F88(ctx, base);
loc_82DDFB88:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-9540
	ctx.r4.s64 = ctx.r11.s64 + -9540;
	// bl 0x837b0c10
	ctx.lr = 0x82DDFB98;
	sub_837B0C10(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82DDFBA4;
	sub_82D894E0(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r3,132(r28)
	PPC_STORE_U32(ctx.r28.u32 + 132, ctx.r3.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ddfbc8
	if (cr6.lt) goto loc_82DDFBC8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DDFBC8;
	sub_825952B8(ctx, base);
loc_82DDFBC8:
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ddfbdc
	if (cr6.eq) goto loc_82DDFBDC;
	// li r27,1
	ctx.r27.s64 = 1;
	// stb r26,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r26.u8);
loc_82DDFBDC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DDFBE8"))) PPC_WEAK_FUNC(sub_82DDFBE8);
PPC_FUNC_IMPL(__imp__sub_82DDFBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82DDFBF0;
	__savegprlr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,540
	ctx.r24.s64 = ctx.r3.s64 + 540;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8344cfa0
	ctx.lr = 0x82DDFC04;
	sub_8344CFA0(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82DDFC08;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ddfd64
	if (cr6.eq) goto loc_82DDFD64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x831f81f8
	ctx.lr = 0x82DDFC34;
	sub_831F81F8(ctx, base);
	// bl 0x8332f198
	ctx.lr = 0x82DDFC38;
	sub_8332F198(ctx, base);
	// li r25,2
	ctx.r25.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ddfd10
	if (cr6.eq) goto loc_82DDFD10;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r28,23
	ctx.r28.s64 = 23;
loc_82DDFC4C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82da8d18
	ctx.lr = 0x82DDFC54;
	sub_82DA8D18(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DDFC68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stb r31,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r31.u8);
	// stw r25,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r25.u32);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DDFC88;
	sub_831F81F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x82dbcae8
	ctx.lr = 0x82DDFC94;
	sub_82DBCAE8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ddfcec
	if (cr6.eq) goto loc_82DDFCEC;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,104(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82ddfcec
	if (cr6.eq) goto loc_82DDFCEC;
	// lbz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ddfce4
	if (cr6.eq) goto loc_82DDFCE4;
	// lbz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ddfcdc
	if (cr6.eq) goto loc_82DDFCDC;
	// bl 0x82eee898
	ctx.lr = 0x82DDFCD8;
	sub_82EEE898(ctx, base);
	// b 0x82ddfcec
	goto loc_82DDFCEC;
loc_82DDFCDC:
	// bl 0x833d9058
	ctx.lr = 0x82DDFCE0;
	sub_833D9058(ctx, base);
	// b 0x82ddfcec
	goto loc_82DDFCEC;
loc_82DDFCE4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82DDFCEC;
	sub_835977D8(ctx, base);
loc_82DDFCEC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82da8c38
	ctx.lr = 0x82DDFCF4;
	sub_82DA8C38(ctx, base);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x831f81f8
	ctx.lr = 0x82DDFD00;
	sub_831F81F8(ctx, base);
	// bl 0x8332f198
	ctx.lr = 0x82DDFD04;
	sub_8332F198(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x82ddfc4c
	if (cr6.lt) goto loc_82DDFC4C;
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82DDFD10:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// srawi r29,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ddfd4c
	if (cr6.eq) goto loc_82DDFD4C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// ble cr6,0x82ddfd6c
	if (!cr6.gt) goto loc_82DDFD6C;
loc_82DDFD30:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x833d9058
	ctx.lr = 0x82DDFD3C;
	sub_833D9058(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82ddfd30
	if (cr6.gt) goto loc_82DDFD30;
loc_82DDFD4C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82ddfd64
	if (cr6.eq) goto loc_82DDFD64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82DDFD64;
	sub_825952B8(ctx, base);
loc_82DDFD64:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82DDFD6C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82DDFD78;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82DDFD78"))) PPC_WEAK_FUNC(sub_82DDFD78);
PPC_FUNC_IMPL(__imp__sub_82DDFD78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DDFD80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82ddfe08
	if (cr6.eq) goto loc_82DDFE08;
loc_82DDFDA4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ddfddc
	if (cr6.eq) goto loc_82DDFDDC;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
loc_82DDFDBC:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r9,r7
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r7.u64, xer);
	// beq cr6,0x82ddfdd8
	if (cr6.eq) goto loc_82DDFDD8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ddfdbc
	if (!cr6.eq) goto loc_82DDFDBC;
	// b 0x82ddfddc
	goto loc_82DDFDDC;
loc_82DDFDD8:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82DDFDDC:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ddfdf8
	if (!cr6.eq) goto loc_82DDFDF8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d27188
	ctx.lr = 0x82DDFDF4;
	sub_82D27188(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82DDFDF8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82ddfda4
	if (!cr6.eq) goto loc_82DDFDA4;
loc_82DDFE08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DDFE10"))) PPC_WEAK_FUNC(sub_82DDFE10);
PPC_FUNC_IMPL(__imp__sub_82DDFE10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82DDFE18;
	__savegprlr_18(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DDFE24;
	sub_82D86078(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de02c8
	if (cr6.eq) goto loc_82DE02C8;
	// lbz r11,376(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 376);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ddfe5c
	if (cr6.eq) goto loc_82DDFE5C;
	// addi r3,r27,340
	ctx.r3.s64 = ctx.r27.s64 + 340;
	// bl 0x82e5ac68
	ctx.lr = 0x82DDFE48;
	sub_82E5AC68(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82ddfe58
	if (cr6.eq) goto loc_82DDFE58;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82ddfe5c
	if (!cr6.eq) goto loc_82DDFE5C;
loc_82DDFE58:
	// stb r30,376(r27)
	PPC_STORE_U8(ctx.r27.u32 + 376, ctx.r30.u8);
loc_82DDFE5C:
	// lwz r3,20(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DDFE64;
	sub_831F81F8(ctx, base);
	// ld r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 128);
	// ld r10,224(r27)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r27.u32 + 224);
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, xer);
	// ble cr6,0x82de02c8
	if (!cr6.gt) goto loc_82DE02C8;
	// std r11,224(r27)
	PPC_STORE_U64(ctx.r27.u32 + 224, ctx.r11.u64);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// bl 0x82dcc6d8
	ctx.lr = 0x82DDFE8C;
	sub_82DCC6D8(ctx, base);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r23,r27,240
	ctx.r23.s64 = ctx.r27.s64 + 240;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ddf090
	ctx.lr = 0x82DDFEB0;
	sub_82DDF090(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ddf090
	ctx.lr = 0x82DDFED0;
	sub_82DDF090(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a120f0
	ctx.lr = 0x82DDFEDC;
	sub_82A120F0(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r18,144(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r18,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r18.s64;
	// lwz r19,96(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// srawi. r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ddff04
	if (!cr0.eq) goto loc_82DDFF04;
	// subf r11,r19,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r19.s64;
	// srawi. r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ddff14
	if (cr0.eq) goto loc_82DDFF14;
loc_82DDFF04:
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,4627
	ctx.r4.u64 = ctx.r4.u64 | 4627;
	// bl 0x82e64250
	ctx.lr = 0x82DDFF14;
	sub_82E64250(ctx, base);
loc_82DDFF14:
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// cmplw cr6,r19,r29
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r29.u32, xer);
	// beq cr6,0x82ddff38
	if (cr6.eq) goto loc_82DDFF38;
loc_82DDFF20:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82e64290
	ctx.lr = 0x82DDFF2C;
	sub_82E64290(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82ddff20
	if (!cr6.eq) goto loc_82DDFF20;
loc_82DDFF38:
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// bl 0x82dcca60
	ctx.lr = 0x82DDFF4C;
	sub_82DCCA60(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r31,r27,380
	ctx.r31.s64 = ctx.r27.s64 + 380;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ddfd78
	ctx.lr = 0x82DDFF70;
	sub_82DDFD78(ctx, base);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ddfd78
	ctx.lr = 0x82DDFF90;
	sub_82DDFD78(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dddc78
	ctx.lr = 0x82DDFF9C;
	sub_82DDDC78(ctx, base);
	// lbz r11,377(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 377);
	// lwz r22,96(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r21,208(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de0158
	if (!cr6.eq) goto loc_82DE0158;
	// lbz r11,376(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 376);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de0158
	if (!cr6.eq) goto loc_82DE0158;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// subf r9,r22,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r22.s64;
	// ori r26,r10,65535
	ctx.r26.u64 = ctx.r10.u64 | 65535;
	// srawi. r31,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r24,29
	ctx.r24.s64 = 29;
	// beq 0x82de00c0
	if (cr0.eq) goto loc_82DE00C0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// bl 0x82b73340
	ctx.lr = 0x82DDFFEC;
	sub_82B73340(ctx, base);
	// lwz r3,20(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DDFFF4;
	sub_831F81F8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x82dbbf30
	ctx.lr = 0x82DDFFFC;
	sub_82DBBF30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de000c
	if (cr6.eq) goto loc_82DE000C;
	// lbz r28,373(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 373);
loc_82DE000C:
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// rlwinm r4,r31,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x82de001c
	if (!cr6.gt) goto loc_82DE001C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82DE001C:
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82595718
	ctx.lr = 0x82DE002C;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e73938
	ctx.lr = 0x82DE0038;
	sub_82E73938(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82de008c
	if (cr6.eq) goto loc_82DE008C;
	// addi r11,r29,-8
	ctx.r11.s64 = ctx.r29.s64 + -8;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_82DE0050:
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// cmpld cr6,r8,r10
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, xer);
	// beq cr6,0x82de0070
	if (cr6.eq) goto loc_82DE0070;
	// clrlwi r8,r28,24
	ctx.r8.u64 = ctx.r28.u32 & 0xFF;
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stwu r8,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
loc_82DE0070:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82de0050
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DE0050;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82de008c
	if (cr6.eq) goto loc_82DE008C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r27,340
	ctx.r3.s64 = ctx.r27.s64 + 340;
	// bl 0x82e5aeb0
	ctx.lr = 0x82DE008C;
	sub_82E5AEB0(ctx, base);
loc_82DE008C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82de00b4
	if (cr6.eq) goto loc_82DE00B4;
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595150
	ctx.lr = 0x82DE00A4;
	sub_82595150(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x82DE00AC;
	sub_82416268(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595170
	ctx.lr = 0x82DE00B4;
	sub_82595170(ctx, base);
loc_82DE00B4:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x82b73218
	ctx.lr = 0x82DE00C0;
	sub_82B73218(ctx, base);
loc_82DE00C0:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// subf r10,r21,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r21.s64;
	// srawi. r31,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 3;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x82de0154
	if (cr0.eq) goto loc_82DE0154;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// rlwinm r4,r31,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x82de00e0
	if (!cr6.gt) goto loc_82DE00E0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82DE00E0:
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x82595718
	ctx.lr = 0x82DE00F0;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82de0118
	if (cr6.eq) goto loc_82DE0118;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// addi r10,r21,-8
	ctx.r10.s64 = ctx.r21.s64 + -8;
loc_82DE0108:
	// ldu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// stwu r30,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82de0108
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DE0108;
loc_82DE0118:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r27,340
	ctx.r3.s64 = ctx.r27.s64 + 340;
	// bl 0x82e5af68
	ctx.lr = 0x82DE0128;
	sub_82E5AF68(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82de0150
	if (cr6.eq) goto loc_82DE0150;
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595150
	ctx.lr = 0x82DE0140;
	sub_82595150(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x82DE0148;
	sub_82416268(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595170
	ctx.lr = 0x82DE0150;
	sub_82595170(ctx, base);
loc_82DE0150:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82DE0154:
	// stb r29,376(r27)
	PPC_STORE_U8(ctx.r27.u32 + 376, ctx.r29.u8);
loc_82DE0158:
	// lwz r3,20(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE0160;
	sub_831F81F8(ctx, base);
	// lbz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de0204
	if (cr6.eq) goto loc_82DE0204;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82dcbe70
	ctx.lr = 0x82DE0174;
	sub_82DCBE70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de0204
	if (cr6.eq) goto loc_82DE0204;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// bne cr6,0x82de0204
	if (!cr6.eq) goto loc_82DE0204;
	// bl 0x82d86078
	ctx.lr = 0x82DE019C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de01b8
	if (cr6.eq) goto loc_82DE01B8;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE01AC;
	sub_831F81F8(ctx, base);
	// addi r11,r3,192
	ctx.r11.s64 = ctx.r3.s64 + 192;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
loc_82DE01B8:
	// lwz r31,256(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 256);
	// addi r28,r27,256
	ctx.r28.s64 = ctx.r27.s64 + 256;
	// lwz r4,260(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 260);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de01ec
	if (cr6.eq) goto loc_82DE01EC;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x82DE01E4;
	sub_831CE420(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_82DE01EC:
	// stw r30,236(r27)
	PPC_STORE_U32(ctx.r27.u32 + 236, ctx.r30.u32);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// stb r30,272(r27)
	PPC_STORE_U8(ctx.r27.u32 + 272, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,4617
	ctx.r4.u64 = ctx.r4.u64 | 4617;
	// bl 0x82e64250
	ctx.lr = 0x82DE0204;
	sub_82E64250(ctx, base);
loc_82DE0204:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ddcd70
	ctx.lr = 0x82DE020C;
	sub_82DDCD70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de0228
	if (cr6.eq) goto loc_82DE0228;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,4624
	ctx.r4.u64 = ctx.r4.u64 | 4624;
	// bl 0x82e64250
	ctx.lr = 0x82DE0228;
	sub_82E64250(ctx, base);
loc_82DE0228:
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82de0244
	if (cr6.eq) goto loc_82DE0244;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825952b8
	ctx.lr = 0x82DE0244;
	sub_825952B8(ctx, base);
loc_82DE0244:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82de025c
	if (cr6.eq) goto loc_82DE025C;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825952b8
	ctx.lr = 0x82DE025C;
	sub_825952B8(ctx, base);
loc_82DE025C:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82de0274
	if (cr6.eq) goto loc_82DE0274;
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x825952b8
	ctx.lr = 0x82DE0274;
	sub_825952B8(ctx, base);
loc_82DE0274:
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// beq cr6,0x82de0298
	if (cr6.eq) goto loc_82DE0298;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825952b8
	ctx.lr = 0x82DE0298;
	sub_825952B8(ctx, base);
loc_82DE0298:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// beq cr6,0x82de02b0
	if (cr6.eq) goto loc_82DE02B0;
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x825952b8
	ctx.lr = 0x82DE02B0;
	sub_825952B8(ctx, base);
loc_82DE02B0:
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82de02c8
	if (cr6.eq) goto loc_82DE02C8;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x825952b8
	ctx.lr = 0x82DE02C8;
	sub_825952B8(ctx, base);
loc_82DE02C8:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE02D0"))) PPC_WEAK_FUNC(sub_82DE02D0);
PPC_FUNC_IMPL(__imp__sub_82DE02D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DE02D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82DE02E4;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de02fc
	if (cr6.eq) goto loc_82DE02FC;
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de02fc
	if (cr6.eq) goto loc_82DE02FC;
	// bl 0x82e744c8
	ctx.lr = 0x82DE02FC;
	sub_82E744C8(ctx, base);
loc_82DE02FC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de03c8
	if (!cr6.eq) goto loc_82DE03C8;
	// bl 0x82d86078
	ctx.lr = 0x82DE030C;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de03c8
	if (cr6.eq) goto loc_82DE03C8;
	// bl 0x82d86078
	ctx.lr = 0x82DE031C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de033c
	if (cr6.eq) goto loc_82DE033C;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE032C;
	sub_831F81F8(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82de0340
	if (cr6.eq) goto loc_82DE0340;
loc_82DE033C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DE0340:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de03c8
	if (cr6.eq) goto loc_82DE03C8;
	// bl 0x83a7d958
	ctx.lr = 0x82DE0350;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DE0354;
	sub_83524138(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b73340
	ctx.lr = 0x82DE0360;
	sub_82B73340(ctx, base);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE0368;
	sub_831F81F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82dbbf30
	ctx.lr = 0x82DE0370;
	sub_82DBBF30(ctx, base);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r10,576(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 576);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x82de039c
	if (cr6.eq) goto loc_82DE039C;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,4628
	ctx.r4.u64 = ctx.r4.u64 | 4628;
	// bl 0x82e64250
	ctx.lr = 0x82DE0394;
	sub_82E64250(ctx, base);
	// stw r30,576(r29)
	PPC_STORE_U32(ctx.r29.u32 + 576, ctx.r30.u32);
	// b 0x82de03b8
	goto loc_82DE03B8;
loc_82DE039C:
	// ld r11,568(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 568);
	// cmpld cr6,r31,r11
	cr6.compare<uint64_t>(ctx.r31.u64, ctx.r11.u64, xer);
	// ble cr6,0x82de03c0
	if (!cr6.gt) goto loc_82DE03C0;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,4628
	ctx.r4.u64 = ctx.r4.u64 | 4628;
	// bl 0x82e64250
	ctx.lr = 0x82DE03B8;
	sub_82E64250(ctx, base);
loc_82DE03B8:
	// addi r11,r31,10000
	ctx.r11.s64 = ctx.r31.s64 + 10000;
	// std r11,568(r29)
	PPC_STORE_U64(ctx.r29.u32 + 568, ctx.r11.u64);
loc_82DE03C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b73218
	ctx.lr = 0x82DE03C8;
	sub_82B73218(ctx, base);
loc_82DE03C8:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE03D0"))) PPC_WEAK_FUNC(sub_82DE03D0);
PPC_FUNC_IMPL(__imp__sub_82DE03D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DE03D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82de0474
	if (!cr6.eq) goto loc_82DE0474;
	// bl 0x82d86078
	ctx.lr = 0x82DE03F0;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de0474
	if (cr6.eq) goto loc_82DE0474;
	// bl 0x82dad2e0
	ctx.lr = 0x82DE0400;
	sub_82DAD2E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de0474
	if (cr6.eq) goto loc_82DE0474;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b73340
	ctx.lr = 0x82DE0414;
	sub_82B73340(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE041C;
	sub_831F81F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82dbbf30
	ctx.lr = 0x82DE0424;
	sub_82DBBF30(ctx, base);
	// lwz r31,292(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82de046c
	if (cr6.eq) goto loc_82DE046C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b85ff8
	ctx.lr = 0x82DE0438;
	sub_82B85FF8(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// blt cr6,0x82de046c
	if (cr6.lt) goto loc_82DE046C;
	// lwz r11,244(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 244);
	// lwz r10,240(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// blt cr6,0x82de046c
	if (cr6.lt) goto loc_82DE046C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b73218
	ctx.lr = 0x82DE0460;
	sub_82B73218(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DE046C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b73218
	ctx.lr = 0x82DE0474;
	sub_82B73218(ctx, base);
loc_82DE0474:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE0480"))) PPC_WEAK_FUNC(sub_82DE0480);
PPC_FUNC_IMPL(__imp__sub_82DE0480) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x82DE0494;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de0520
	if (cr6.eq) goto loc_82DE0520;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE04A4;
	sub_831F81F8(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82de0504
	if (cr6.eq) goto loc_82DE0504;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82de0504
	if (cr6.eq) goto loc_82DE0504;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x82de0504
	if (cr6.eq) goto loc_82DE0504;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82de0520
	if (!cr6.eq) goto loc_82DE0520;
	// bl 0x82d86078
	ctx.lr = 0x82DE04CC;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de0520
	if (cr6.eq) goto loc_82DE0520;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b73340
	ctx.lr = 0x82DE04E0;
	sub_82B73340(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE04E8;
	sub_831F81F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82dbbf30
	ctx.lr = 0x82DE04F0;
	sub_82DBBF30(ctx, base);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(ctx.r11.s32, 18, xer);
	// bne cr6,0x82de051c
	if (!cr6.eq) goto loc_82DE051C;
	// bl 0x82b73218
	ctx.lr = 0x82DE0504;
	sub_82B73218(ctx, base);
loc_82DE0504:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82DE051C:
	// bl 0x82b73218
	ctx.lr = 0x82DE0520;
	sub_82B73218(ctx, base);
loc_82DE0520:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE0538"))) PPC_WEAK_FUNC(sub_82DE0538);
PPC_FUNC_IMPL(__imp__sub_82DE0538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DE0540;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DE054C;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de0570
	if (cr6.eq) goto loc_82DE0570;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82de05f0
	if (cr6.lt) goto loc_82DE05F0;
	// beq cr6,0x82de05f8
	if (cr6.eq) goto loc_82DE05F8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82de05a4
	if (cr6.lt) goto loc_82DE05A4;
loc_82DE0570:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-4496(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4496);
	// bl 0x82e64c60
	ctx.lr = 0x82DE0588;
	sub_82E64C60(ctx, base);
	// lis r9,-32034
	ctx.r9.s64 = -2099380224;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,3760
	ctx.r7.s64 = ctx.r9.s64 + 3760;
	// stw r8,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r8.u32);
	// stw r7,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DE05A4:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82ddcec8
	ctx.lr = 0x82DE05AC;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82de06c8
	if (cr6.eq) goto loc_82DE06C8;
	// lis r11,-32034
	ctx.r11.s64 = -2099380224;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,3760
	ctx.r10.s64 = ctx.r11.s64 + 3760;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// beq cr6,0x82de06c8
	if (cr6.eq) goto loc_82DE06C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DE05E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DE05F0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82DE05F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de0480
	ctx.lr = 0x82DE0600;
	sub_82DE0480(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de06b4
	if (cr6.eq) goto loc_82DE06B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ddd608
	ctx.lr = 0x82DE0614;
	sub_82DDD608(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de06b4
	if (!cr6.eq) goto loc_82DE06B4;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de0634
	if (!cr6.eq) goto loc_82DE0634;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ddfbe8
	ctx.lr = 0x82DE0634;
	sub_82DDFBE8(ctx, base);
loc_82DE0634:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ddef40
	ctx.lr = 0x82DE063C;
	sub_82DDEF40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de06b4
	if (cr6.eq) goto loc_82DE06B4;
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x82ddde18
	ctx.lr = 0x82DE0650;
	sub_82DDDE18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x82df9530
	ctx.lr = 0x82DE065C;
	sub_82DF9530(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,24(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x82df9008
	ctx.lr = 0x82DE0670;
	sub_82DF9008(ctx, base);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-9836
	ctx.r4.s64 = ctx.r9.s64 + -9836;
	// bl 0x837b0c10
	ctx.lr = 0x82DE0680;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82DE068C;
	sub_82D894E0(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82DE0698;
	sub_8387E8E0(ctx, base);
	// lwz r8,132(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82de06b4
	if (cr6.eq) goto loc_82DE06B4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DE06B4:
	// lis r11,-32034
	ctx.r11.s64 = -2099380224;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3760
	ctx.r9.s64 = ctx.r11.s64 + 3760;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
loc_82DE06C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE06D0"))) PPC_WEAK_FUNC(sub_82DE06D0);
PPC_FUNC_IMPL(__imp__sub_82DE06D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DE06D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DE06E4;
	sub_82D86078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de09ec
	if (cr6.eq) goto loc_82DE09EC;
	// lwz r30,40(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253f910
	ctx.lr = 0x82DE06FC;
	sub_8253F910(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de09ec
	if (cr6.eq) goto loc_82DE09EC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82dc8438
	ctx.lr = 0x82DE070C;
	sub_82DC8438(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82df9b28
	ctx.lr = 0x82DE0718;
	sub_82DF9B28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de09e4
	if (!cr6.eq) goto loc_82DE09E4;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dfa458
	ctx.lr = 0x82DE0738;
	sub_82DFA458(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de0788
	if (cr6.eq) goto loc_82DE0788;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82dcbe70
	ctx.lr = 0x82DE074C;
	sub_82DCBE70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de0788
	if (cr6.eq) goto loc_82DE0788;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE0760;
	sub_831F81F8(ctx, base);
	// lbz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de0788
	if (cr6.eq) goto loc_82DE0788;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x835977d8
	ctx.lr = 0x82DE0778;
	sub_835977D8(ctx, base);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4621
	ctx.r4.u64 = ctx.r4.u64 | 4621;
	// bl 0x82e64250
	ctx.lr = 0x82DE0788;
	sub_82E64250(ctx, base);
loc_82DE0788:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82df9ff8
	ctx.lr = 0x82DE079C;
	sub_82DF9FF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de0824
	if (cr6.eq) goto loc_82DE0824;
	// lbz r11,521(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 521);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de07d8
	if (!cr6.eq) goto loc_82DE07D8;
	// ld r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 504);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x82de07d8
	if (cr6.eq) goto loc_82DE07D8;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4626
	ctx.r4.u64 = ctx.r4.u64 | 4626;
	// bl 0x82e64250
	ctx.lr = 0x82DE07D0;
	sub_82E64250(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,521(r31)
	PPC_STORE_U8(ctx.r31.u32 + 521, ctx.r11.u8);
loc_82DE07D8:
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// addi r3,r31,524
	ctx.r3.s64 = ctx.r31.s64 + 524;
	// lwz r10,528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de080c
	if (cr6.eq) goto loc_82DE080C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82DE07F0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de09e4
	if (cr6.eq) goto loc_82DE09E4;
	// lwz r9,528(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82de07f0
	if (!cr6.eq) goto loc_82DE07F0;
loc_82DE080C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x82DE0814;
	sub_835977D8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82dc6fb0
	ctx.lr = 0x82DE081C;
	sub_82DC6FB0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DE0824:
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dfa150
	ctx.lr = 0x82DE0838;
	sub_82DFA150(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de08c4
	if (cr6.eq) goto loc_82DE08C4;
	// lbz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 520);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de09e4
	if (!cr6.eq) goto loc_82DE09E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de0480
	ctx.lr = 0x82DE0858;
	sub_82DE0480(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de09e4
	if (cr6.eq) goto loc_82DE09E4;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x82de09e4
	if (cr6.eq) goto loc_82DE09E4;
	// bl 0x82dcbc48
	ctx.lr = 0x82DE0874;
	sub_82DCBC48(ctx, base);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmpld cr6,r11,r3
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, xer);
	// ble cr6,0x82de09e4
	if (!cr6.gt) goto loc_82DE09E4;
	// li r30,1
	ctx.r30.s64 = 1;
	// std r11,504(r31)
	PPC_STORE_U64(ctx.r31.u32 + 504, ctx.r11.u64);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// stb r30,520(r31)
	PPC_STORE_U8(ctx.r31.u32 + 520, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4642
	ctx.r4.u64 = ctx.r4.u64 | 4642;
	// bl 0x82e64808
	ctx.lr = 0x82DE089C;
	sub_82E64808(ctx, base);
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// ld r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x831f81f8
	ctx.lr = 0x82DE08A8;
	sub_831F81F8(ctx, base);
	// addi r11,r3,208
	ctx.r11.s64 = ctx.r3.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// bl 0x82dc6fb0
	ctx.lr = 0x82DE08BC;
	sub_82DC6FB0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DE08C4:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82de091c
	if (cr6.eq) goto loc_82DE091C;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// std r29,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r29.u64);
loc_82DE08DC:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82df9d30
	ctx.lr = 0x82DE08E8;
	sub_82DF9D30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de08dc
	if (!cr6.eq) goto loc_82DE08DC;
loc_82DE08F4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dfa3e8
	ctx.lr = 0x82DE0900;
	sub_82DFA3E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de08f4
	if (!cr6.eq) goto loc_82DE08F4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82dc6fb0
	ctx.lr = 0x82DE0914;
	sub_82DC6FB0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DE091C:
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r29,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r29.u64);
	// bl 0x82df9d30
	ctx.lr = 0x82DE0934;
	sub_82DF9D30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de09b0
	if (cr6.eq) goto loc_82DE09B0;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE0948;
	sub_831F81F8(ctx, base);
	// lbz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de09e4
	if (!cr6.eq) goto loc_82DE09E4;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4636
	ctx.r4.u64 = ctx.r4.u64 | 4636;
	// bl 0x82e64808
	ctx.lr = 0x82DE0964;
	sub_82E64808(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82DE0968;
	sub_82D26ED8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de0978
	if (cr6.eq) goto loc_82DE0978;
	// li r4,61
	ctx.r4.s64 = 61;
	// bl 0x82d26b18
	ctx.lr = 0x82DE0978;
	sub_82D26B18(ctx, base);
loc_82DE0978:
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// ld r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x831f81f8
	ctx.lr = 0x82DE0984;
	sub_831F81F8(ctx, base);
	// addi r11,r3,192
	ctx.r11.s64 = ctx.r3.s64 + 192;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stb r29,232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 232, ctx.r29.u8);
	// stw r9,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r9.u32);
	// bl 0x82dc6fb0
	ctx.lr = 0x82DE09A8;
	sub_82DC6FB0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DE09B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dfa3e8
	ctx.lr = 0x82DE09BC;
	sub_82DFA3E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de09e4
	if (cr6.eq) goto loc_82DE09E4;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4637
	ctx.r4.u64 = ctx.r4.u64 | 4637;
	// bl 0x82e64808
	ctx.lr = 0x82DE09D8;
	sub_82E64808(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ddd968
	ctx.lr = 0x82DE09E4;
	sub_82DDD968(ctx, base);
loc_82DE09E4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82dc6fb0
	ctx.lr = 0x82DE09EC;
	sub_82DC6FB0(ctx, base);
loc_82DE09EC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE09F4"))) PPC_WEAK_FUNC(sub_82DE09F4);
PPC_FUNC_IMPL(__imp__sub_82DE09F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE09F8"))) PPC_WEAK_FUNC(sub_82DE09F8);
PPC_FUNC_IMPL(__imp__sub_82DE09F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DE0A00;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82de0c18
	if (!cr6.eq) goto loc_82DE0C18;
	// bl 0x82d86078
	ctx.lr = 0x82DE0A18;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de0c18
	if (cr6.eq) goto loc_82DE0C18;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE0A28;
	sub_831F81F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82dcbe70
	ctx.lr = 0x82DE0A34;
	sub_82DCBE70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de0b10
	if (cr6.eq) goto loc_82DE0B10;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82de0ad4
	if (cr6.eq) goto loc_82DE0AD4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82de0abc
	if (cr6.eq) goto loc_82DE0ABC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ddd320
	ctx.lr = 0x82DE0A60;
	sub_82DDD320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de0a74
	if (cr6.eq) goto loc_82DE0A74;
	// stw r29,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r29.u32);
	// b 0x82de0a90
	goto loc_82DE0A90;
loc_82DE0A74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de03d0
	ctx.lr = 0x82DE0A7C;
	sub_82DE03D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de0a90
	if (cr6.eq) goto loc_82DE0A90;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
loc_82DE0A90:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82de0b10
	if (cr6.eq) goto loc_82DE0B10;
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82a120f0
	ctx.lr = 0x82DE0AA8;
	sub_82A120F0(ctx, base);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4621
	ctx.r4.u64 = ctx.r4.u64 | 4621;
	// bl 0x82e64250
	ctx.lr = 0x82DE0AB8;
	sub_82E64250(ctx, base);
	// b 0x82de0b10
	goto loc_82DE0B10;
loc_82DE0ABC:
	// lbz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de0b10
	if (cr6.eq) goto loc_82DE0B10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de03d0
	ctx.lr = 0x82DE0AD0;
	sub_82DE03D0(ctx, base);
	// b 0x82de0ae8
	goto loc_82DE0AE8;
loc_82DE0AD4:
	// lbz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de0b10
	if (cr6.eq) goto loc_82DE0B10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ddd320
	ctx.lr = 0x82DE0AE8;
	sub_82DDD320(ctx, base);
loc_82DE0AE8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de0b10
	if (!cr6.eq) goto loc_82DE0B10;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4622
	ctx.r4.u64 = ctx.r4.u64 | 4622;
	// bl 0x82e64250
	ctx.lr = 0x82DE0B04;
	sub_82E64250(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ddd968
	ctx.lr = 0x82DE0B10;
	sub_82DDD968(ctx, base);
loc_82DE0B10:
	// lbz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de0b70
	if (cr6.eq) goto loc_82DE0B70;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82dbc090
	ctx.lr = 0x82DE0B30;
	sub_82DBC090(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82de0c18
	if (cr6.eq) goto loc_82DE0C18;
	// bl 0x82d48260
	ctx.lr = 0x82DE0B40;
	sub_82D48260(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// ble cr6,0x82de0c18
	if (!cr6.gt) goto loc_82DE0C18;
	// lis r3,44
	ctx.r3.s64 = 2883584;
	// ori r3,r3,24
	ctx.r3.u64 = ctx.r3.u64 | 24;
	// bl 0x82d86180
	ctx.lr = 0x82DE0B58;
	sub_82D86180(ctx, base);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-4496(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4496);
	// bl 0x82e64c60
	ctx.lr = 0x82DE0B68;
	sub_82E64C60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DE0B70:
	// bl 0x82dbc040
	ctx.lr = 0x82DE0B74;
	sub_82DBC040(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de0bb4
	if (cr6.eq) goto loc_82DE0BB4;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// ori r4,r4,4639
	ctx.r4.u64 = ctx.r4.u64 | 4639;
	// bl 0x82e64200
	ctx.lr = 0x82DE0B90;
	sub_82E64200(ctx, base);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4616
	ctx.r4.u64 = ctx.r4.u64 | 4616;
	// bl 0x82e64250
	ctx.lr = 0x82DE0BA0;
	sub_82E64250(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r29,232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 232, ctx.r29.u8);
	// stb r11,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DE0BB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DE0BC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82de0c18
	if (cr6.eq) goto loc_82DE0C18;
	// lbz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de0c18
	if (!cr6.eq) goto loc_82DE0C18;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dbc3a8
	ctx.lr = 0x82DE0BEC;
	sub_82DBC3A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82de0c18
	if (cr6.eq) goto loc_82DE0C18;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpldi cr6,r11,1500
	cr6.compare<uint64_t>(ctx.r11.u64, 1500, xer);
	// bge cr6,0x82de0c18
	if (!cr6.lt) goto loc_82DE0C18;
	// stb r29,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r29.u8);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4638
	ctx.r4.u64 = ctx.r4.u64 | 4638;
	// bl 0x82e64200
	ctx.lr = 0x82DE0C18;
	sub_82E64200(ctx, base);
loc_82DE0C18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE0C20"))) PPC_WEAK_FUNC(sub_82DE0C20);
PPC_FUNC_IMPL(__imp__sub_82DE0C20) {
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
	// bl 0x82de0480
	ctx.lr = 0x82DE0C3C;
	sub_82DE0480(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de0cb8
	if (cr6.eq) goto loc_82DE0CB8;
	// bl 0x83a7d958
	ctx.lr = 0x82DE0C4C;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DE0C50;
	sub_83524138(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82DE0C58;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de0c70
	if (cr6.eq) goto loc_82DE0C70;
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de0c70
	if (cr6.eq) goto loc_82DE0C70;
	// bl 0x82e744c8
	ctx.lr = 0x82DE0C70;
	sub_82E744C8(ctx, base);
loc_82DE0C70:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de0cdc
	if (!cr6.eq) goto loc_82DE0CDC;
	// lbz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 520);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de0cdc
	if (!cr6.eq) goto loc_82DE0CDC;
	// ld r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 512);
	// cmpld cr6,r30,r11
	cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, xer);
	// ble cr6,0x82de0cdc
	if (!cr6.gt) goto loc_82DE0CDC;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x82de0cac
	if (cr6.eq) goto loc_82DE0CAC;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4625
	ctx.r4.u64 = ctx.r4.u64 | 4625;
	// bl 0x82e64250
	ctx.lr = 0x82DE0CAC;
	sub_82E64250(ctx, base);
loc_82DE0CAC:
	// addi r11,r30,5000
	ctx.r11.s64 = ctx.r30.s64 + 5000;
	// std r11,512(r31)
	PPC_STORE_U64(ctx.r31.u32 + 512, ctx.r11.u64);
	// b 0x82de0cdc
	goto loc_82DE0CDC;
loc_82DE0CB8:
	// lbz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 520);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de0cdc
	if (cr6.eq) goto loc_82DE0CDC;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4643
	ctx.r4.u64 = ctx.r4.u64 | 4643;
	// bl 0x82e64200
	ctx.lr = 0x82DE0CD4;
	sub_82E64200(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ddd9f8
	ctx.lr = 0x82DE0CDC;
	sub_82DDD9F8(ctx, base);
loc_82DE0CDC:
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

__attribute__((alias("__imp__sub_82DE0CF4"))) PPC_WEAK_FUNC(sub_82DE0CF4);
PPC_FUNC_IMPL(__imp__sub_82DE0CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE0CF8"))) PPC_WEAK_FUNC(sub_82DE0CF8);
PPC_FUNC_IMPL(__imp__sub_82DE0CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82DE0D00;
	__savegprlr_14(ctx, base);
	// lis r11,-32034
	ctx.r11.s64 = -2099380224;
	// std r4,-288(r1)
	PPC_STORE_U64(ctx.r1.u32 + -288, ctx.r4.u64);
	// lis r10,-32034
	ctx.r10.s64 = -2099380224;
	// addi r11,r11,-11104
	ctx.r11.s64 = ctx.r11.s64 + -11104;
	// addi r10,r10,-10896
	ctx.r10.s64 = ctx.r10.s64 + -10896;
	// lis r8,-32034
	ctx.r8.s64 = -2099380224;
	// stw r11,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r11.u32);
	// lis r24,263
	ctx.r24.s64 = 17235968;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// lis r23,263
	ctx.r23.s64 = 17235968;
	// addi r8,r8,-8056
	ctx.r8.s64 = ctx.r8.s64 + -8056;
	// ori r11,r24,4618
	ctx.r11.u64 = ctx.r24.u64 | 4618;
	// ori r10,r23,4619
	ctx.r10.u64 = ctx.r23.u64 | 4619;
	// stw r8,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r8.u32);
	// lis r9,-32034
	ctx.r9.s64 = -2099380224;
	// stw r11,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r11.u32);
	// lis r7,-32034
	ctx.r7.s64 = -2099380224;
	// stw r10,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r10.u32);
	// lis r6,-32034
	ctx.r6.s64 = -2099380224;
	// lis r22,263
	ctx.r22.s64 = 17235968;
	// addi r9,r9,-8440
	ctx.r9.s64 = ctx.r9.s64 + -8440;
	// lis r5,-32034
	ctx.r5.s64 = -2099380224;
	// addi r10,r7,-3528
	ctx.r10.s64 = ctx.r7.s64 + -3528;
	// stw r9,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r9.u32);
	// addi r8,r6,-2464
	ctx.r8.s64 = ctx.r6.s64 + -2464;
	// ori r11,r22,4620
	ctx.r11.u64 = ctx.r22.u64 | 4620;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// lis r21,263
	ctx.r21.s64 = 17235968;
	// stw r8,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r8.u32);
	// lis r20,263
	ctx.r20.s64 = 17235968;
	// stw r11,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r11.u32);
	// lis r19,263
	ctx.r19.s64 = 17235968;
	// lis r31,-32034
	ctx.r31.s64 = -2099380224;
	// lis r18,263
	ctx.r18.s64 = 17235968;
	// lis r17,263
	ctx.r17.s64 = 17235968;
	// addi r6,r5,-13080
	ctx.r6.s64 = ctx.r5.s64 + -13080;
	// ori r9,r21,4621
	ctx.r9.u64 = ctx.r21.u64 | 4621;
	// ori r7,r20,4622
	ctx.r7.u64 = ctx.r20.u64 | 4622;
	// stw r6,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r6.u32);
	// ori r5,r19,4623
	ctx.r5.u64 = ctx.r19.u64 | 4623;
	// stw r9,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r9.u32);
	// addi r11,r31,-13072
	ctx.r11.s64 = ctx.r31.s64 + -13072;
	// stw r7,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r7.u32);
	// ori r10,r18,4624
	ctx.r10.u64 = ctx.r18.u64 | 4624;
	// stw r5,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r5.u32);
	// ori r8,r17,4625
	ctx.r8.u64 = ctx.r17.u64 | 4625;
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// lis r30,-32034
	ctx.r30.s64 = -2099380224;
	// stw r10,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// lis r29,-32034
	ctx.r29.s64 = -2099380224;
	// stw r8,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r8.u32);
	// lis r28,-32034
	ctx.r28.s64 = -2099380224;
	// lis r16,263
	ctx.r16.s64 = 17235968;
	// lis r27,-32034
	ctx.r27.s64 = -2099380224;
	// lis r26,263
	ctx.r26.s64 = 17235968;
	// lis r25,263
	ctx.r25.s64 = 17235968;
	// lis r15,263
	ctx.r15.s64 = 17235968;
	// lis r14,263
	ctx.r14.s64 = 17235968;
	// addi r9,r30,-6120
	ctx.r9.s64 = ctx.r30.s64 + -6120;
	// addi r7,r29,1336
	ctx.r7.s64 = ctx.r29.s64 + 1336;
	// ori r6,r16,4626
	ctx.r6.u64 = ctx.r16.u64 | 4626;
	// stw r9,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r9.u32);
	// addi r5,r28,-5792
	ctx.r5.s64 = ctx.r28.s64 + -5792;
	// stw r7,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r7.u32);
	// lis r4,-32034
	ctx.r4.s64 = -2099380224;
	// stw r6,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r6.u32);
	// ori r26,r26,4616
	ctx.r26.u64 = ctx.r26.u64 | 4616;
	// stw r5,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r5.u32);
	// ori r25,r25,4617
	ctx.r25.u64 = ctx.r25.u64 | 4617;
	// ori r11,r15,4627
	ctx.r11.u64 = ctx.r15.u64 | 4627;
	// stw r26,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r26.u32);
	// addi r10,r27,-5408
	ctx.r10.s64 = ctx.r27.s64 + -5408;
	// stw r25,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r25.u32);
	// ori r8,r14,4628
	ctx.r8.u64 = ctx.r14.u64 | 4628;
	// stw r11,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r11.u32);
	// lis r7,263
	ctx.r7.s64 = 17235968;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r8.u32);
	// lis r6,-32034
	ctx.r6.s64 = -2099380224;
	// addi r5,r4,-4960
	ctx.r5.s64 = ctx.r4.s64 + -4960;
	// ori r11,r7,4629
	ctx.r11.u64 = ctx.r7.u64 | 4629;
	// ld r4,-288(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// addi r8,r6,-12152
	ctx.r8.s64 = ctx.r6.s64 + -12152;
	// stw r5,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r5.u32);
	// stw r11,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r11.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r8,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r8.u32);
	// addi r11,r1,-272
	ctx.r11.s64 = ctx.r1.s64 + -272;
	// stw r9,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r9.u32);
	// stw r9,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r9.u32);
loc_82DE0E6C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de0e94
	if (cr6.eq) goto loc_82DE0E94;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// blt cr6,0x82de0e6c
	if (cr6.lt) goto loc_82DE0E6C;
	// stw r9,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r9.u32);
	// stw r9,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r9.u32);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82DE0E94:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r9.u32);
	// addi r10,r1,-268
	ctx.r10.s64 = ctx.r1.s64 + -268;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r9.u32);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE0EAC"))) PPC_WEAK_FUNC(sub_82DE0EAC);
PPC_FUNC_IMPL(__imp__sub_82DE0EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE0EB0"))) PPC_WEAK_FUNC(sub_82DE0EB0);
PPC_FUNC_IMPL(__imp__sub_82DE0EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DE0EB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DE0EC4;
	sub_82D86078(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de0ef0
	if (cr6.eq) goto loc_82DE0EF0;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE0ED8;
	sub_831F81F8(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82de0ef0
	if (cr6.eq) goto loc_82DE0EF0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne cr6,0x82de0ef4
	if (!cr6.eq) goto loc_82DE0EF4;
loc_82DE0EF0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82DE0EF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de0fa0
	if (cr6.eq) goto loc_82DE0FA0;
	// lwz r11,312(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82de0fa0
	if (!cr6.gt) goto loc_82DE0FA0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r26,296(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 296);
	// lwz r31,308(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 308);
	// addi r28,r27,296
	ctx.r28.s64 = ctx.r27.s64 + 296;
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
loc_82DE0F20:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82de0f98
	if (cr6.eq) goto loc_82DE0F98;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// beq cr6,0x82de0f44
	if (cr6.eq) goto loc_82DE0F44;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_82DE0F44:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r8,r31,30
	ctx.r8.u64 = ctx.r31.u32 & 0x3;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82de0f5c
	if (cr6.gt) goto loc_82DE0F5C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_82DE0F5C:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// addi r3,r27,108
	ctx.r3.s64 = ctx.r27.s64 + 108;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// bl 0x82dc72d8
	ctx.lr = 0x82DE0F8C;
	sub_82DC72D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x82de0f20
	goto loc_82DE0F20;
loc_82DE0F98:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8344cfa0
	ctx.lr = 0x82DE0FA0;
	sub_8344CFA0(ctx, base);
loc_82DE0FA0:
	// lwz r11,124(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82de100c
	if (!cr6.gt) goto loc_82DE100C;
	// stb r29,100(r27)
	PPC_STORE_U8(ctx.r27.u32 + 100, ctx.r29.u8);
	// addi r31,r27,108
	ctx.r31.s64 = ctx.r27.s64 + 108;
	// stw r29,212(r27)
	PPC_STORE_U32(ctx.r27.u32 + 212, ctx.r29.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r11,108(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,120(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// beq cr6,0x82de0fd0
	if (cr6.eq) goto loc_82DE0FD0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DE0FD0:
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82de0fe4
	if (cr6.gt) goto loc_82DE0FE4;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_82DE0FE4:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82de0cf8
	ctx.lr = 0x82DE0FFC;
	sub_82DE0CF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308a698
	ctx.lr = 0x82DE1004;
	sub_8308A698(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82DE100C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,100(r27)
	PPC_STORE_U8(ctx.r27.u32 + 100, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE101C"))) PPC_WEAK_FUNC(sub_82DE101C);
PPC_FUNC_IMPL(__imp__sub_82DE101C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE1020"))) PPC_WEAK_FUNC(sub_82DE1020);
PPC_FUNC_IMPL(__imp__sub_82DE1020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82DE1028;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DE1034;
	sub_82D86078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de13c8
	if (cr6.eq) goto loc_82DE13C8;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE1048;
	sub_831F81F8(ctx, base);
	// bl 0x835d31a0
	ctx.lr = 0x82DE104C;
	sub_835D31A0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de12c0
	if (cr6.eq) goto loc_82DE12C0;
	// li r23,4
	ctx.r23.s64 = 4;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r25,18
	ctx.r25.s64 = 18;
loc_82DE1064:
	// std r27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r27.u64);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE107C;
	sub_831F81F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82dbdf30
	ctx.lr = 0x82DE1084;
	sub_82DBDF30(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82de1244
	if (cr6.lt) goto loc_82DE1244;
	// beq cr6,0x82de11c8
	if (cr6.eq) goto loc_82DE11C8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82de12ac
	if (!cr6.eq) goto loc_82DE12AC;
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x831f81f8
	ctx.lr = 0x82DE10A8;
	sub_831F81F8(ctx, base);
	// stw r30,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r30.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82de10c0
	if (!cr6.eq) goto loc_82DE10C0;
	// stw r27,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r27.u32);
	// b 0x82de118c
	goto loc_82DE118C;
loc_82DE10C0:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// stw r24,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r24.u32);
	// bne cr6,0x82de1168
	if (!cr6.eq) goto loc_82DE1168;
	// bl 0x82dad2e0
	ctx.lr = 0x82DE10D0;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82de10e0
	if (!cr6.eq) goto loc_82DE10E0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82de10f8
	goto loc_82DE10F8;
loc_82DE10E0:
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82de10f4
	if (!cr6.eq) goto loc_82DE10F4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82de10f8
	goto loc_82DE10F8;
loc_82DE10F4:
	// bl 0x82e744c8
	ctx.lr = 0x82DE10F8;
	sub_82E744C8(ctx, base);
loc_82DE10F8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de13d0
	if (cr6.eq) goto loc_82DE13D0;
	// stb r27,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r27.u8);
	// bl 0x82dcb948
	ctx.lr = 0x82DE110C;
	sub_82DCB948(ctx, base);
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE1114;
	sub_831F81F8(ctx, base);
	// bl 0x82dbe690
	ctx.lr = 0x82DE1118;
	sub_82DBE690(ctx, base);
	// lwz r3,32(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// bl 0x82dfa580
	ctx.lr = 0x82DE1120;
	sub_82DFA580(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82DE1124;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de1134
	if (cr6.eq) goto loc_82DE1134;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82dad3e0
	ctx.lr = 0x82DE1134;
	sub_82DAD3E0(ctx, base);
loc_82DE1134:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ddd968
	ctx.lr = 0x82DE1140;
	sub_82DDD968(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ddd9f8
	ctx.lr = 0x82DE1148;
	sub_82DDD9F8(ctx, base);
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE1150;
	sub_831F81F8(ctx, base);
	// stb r27,304(r3)
	PPC_STORE_U8(ctx.r3.u32 + 304, ctx.r27.u8);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4631
	ctx.r4.u64 = ctx.r4.u64 | 4631;
	// bl 0x82e64808
	ctx.lr = 0x82DE1164;
	sub_82E64808(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82DE1168:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82de1184
	if (!cr6.eq) goto loc_82DE1184;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4618
	ctx.r4.u64 = ctx.r4.u64 | 4618;
	// bl 0x82e64250
	ctx.lr = 0x82DE1180;
	sub_82E64250(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82DE1184:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82de12ac
	if (!cr6.eq) goto loc_82DE12AC;
loc_82DE118C:
	// stw r25,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r25.u32);
	// std r27,568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 568, ctx.r27.u64);
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE119C;
	sub_831F81F8(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// addi r11,r3,228
	ctx.r11.s64 = ctx.r3.s64 + 228;
loc_82DE11AC:
	// stw r27,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r27.u32);
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82de11ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DE11AC;
	// stb r27,240(r10)
	PPC_STORE_U8(ctx.r10.u32 + 240, ctx.r27.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ddd9f8
	ctx.lr = 0x82DE11C4;
	sub_82DDD9F8(ctx, base);
	// b 0x82de12ac
	goto loc_82DE12AC;
loc_82DE11C8:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82de1230
	if (!cr6.eq) goto loc_82DE1230;
	// bl 0x82d86078
	ctx.lr = 0x82DE11D8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de11f4
	if (cr6.eq) goto loc_82DE11F4;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE11E8;
	sub_831F81F8(ctx, base);
	// addi r11,r3,192
	ctx.r11.s64 = ctx.r3.s64 + 192;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// std r27,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r27.u64);
loc_82DE11F4:
	// lwz r30,256(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r29,r31,256
	ctx.r29.s64 = ctx.r31.s64 + 256;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de1228
	if (cr6.eq) goto loc_82DE1228;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x82DE1220;
	sub_831CE420(ctx, base);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82DE1228:
	// stw r27,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r27.u32);
	// stb r27,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r27.u8);
loc_82DE1230:
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4619
	ctx.r4.u64 = ctx.r4.u64 | 4619;
	// bl 0x82e64250
	ctx.lr = 0x82DE1240;
	sub_82E64250(ctx, base);
	// b 0x82de12ac
	goto loc_82DE12AC;
loc_82DE1244:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82de12ac
	if (!cr6.eq) goto loc_82DE12AC;
	// bl 0x82d86078
	ctx.lr = 0x82DE1254;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de1270
	if (cr6.eq) goto loc_82DE1270;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE1264;
	sub_831F81F8(ctx, base);
	// addi r11,r3,192
	ctx.r11.s64 = ctx.r3.s64 + 192;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// std r27,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r27.u64);
loc_82DE1270:
	// lwz r30,256(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r29,r31,256
	ctx.r29.s64 = ctx.r31.s64 + 256;
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de12a4
	if (cr6.eq) goto loc_82DE12A4;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x82DE129C;
	sub_831CE420(ctx, base);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82DE12A4:
	// stw r27,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r27.u32);
	// stb r27,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r27.u8);
loc_82DE12AC:
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE12B4;
	sub_831F81F8(ctx, base);
	// bl 0x835d31a0
	ctx.lr = 0x82DE12B8;
	sub_835D31A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82de1064
	if (!cr6.eq) goto loc_82DE1064;
loc_82DE12C0:
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE12C8;
	sub_831F81F8(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82de131c
	if (!cr6.eq) goto loc_82DE131C;
	// lbz r11,321(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 321);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de131c
	if (!cr6.eq) goto loc_82DE131C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ddd608
	ctx.lr = 0x82DE12E8;
	sub_82DDD608(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de131c
	if (!cr6.eq) goto loc_82DE131C;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4629
	ctx.r4.u64 = ctx.r4.u64 | 4629;
	// bl 0x82e64250
	ctx.lr = 0x82DE1304;
	sub_82E64250(ctx, base);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4620
	ctx.r4.u64 = ctx.r4.u64 | 4620;
	// bl 0x82e64250
	ctx.lr = 0x82DE1314;
	sub_82E64250(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,321(r31)
	PPC_STORE_U8(ctx.r31.u32 + 321, ctx.r11.u8);
loc_82DE131C:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de134c
	if (cr6.eq) goto loc_82DE134C;
	// lbz r11,233(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 233);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de134c
	if (!cr6.eq) goto loc_82DE134C;
	// lbz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 320);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82de134c
	if (!cr6.eq) goto loc_82DE134C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ddce68
	ctx.lr = 0x82DE1348;
	sub_82DDCE68(ctx, base);
	// stb r27,320(r31)
	PPC_STORE_U8(ctx.r31.u32 + 320, ctx.r27.u8);
loc_82DE134C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ddf8e0
	ctx.lr = 0x82DE1354;
	sub_82DDF8E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de13c8
	if (!cr6.eq) goto loc_82DE13C8;
	// bl 0x82e7e2f8
	ctx.lr = 0x82DE1364;
	sub_82E7E2F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de13a8
	if (cr6.eq) goto loc_82DE13A8;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r30,r11,-11209
	ctx.r30.s64 = ctx.r11.s64 + -11209;
	// addi r4,r30,1561
	ctx.r4.s64 = ctx.r30.s64 + 1561;
	// bl 0x837b0c10
	ctx.lr = 0x82DE1384;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82DE1394;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,1714
	ctx.r6.s64 = 1714;
	// bl 0x82e7eb70
	ctx.lr = 0x82DE13A8;
	sub_82E7EB70(ctx, base);
loc_82DE13A8:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-4496(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4496);
	// bl 0x82e64c60
	ctx.lr = 0x82DE13B8;
	sub_82E64C60(ctx, base);
	// lis r10,-32034
	ctx.r10.s64 = -2099380224;
	// stw r27,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r27.u32);
	// addi r9,r10,3760
	ctx.r9.s64 = ctx.r10.s64 + 3760;
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
loc_82DE13C8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82DE13D0:
	// lis r3,527
	ctx.r3.s64 = 34537472;
	// ori r3,r3,169
	ctx.r3.u64 = ctx.r3.u64 | 169;
	// bl 0x82d86180
	ctx.lr = 0x82DE13DC;
	sub_82D86180(ctx, base);
	// bl 0x82e7e2f8
	ctx.lr = 0x82DE13E0;
	sub_82E7E2F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de1424
	if (cr6.eq) goto loc_82DE1424;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r30,r11,-11209
	ctx.r30.s64 = ctx.r11.s64 + -11209;
	// addi r4,r30,1441
	ctx.r4.s64 = ctx.r30.s64 + 1441;
	// bl 0x837b0c10
	ctx.lr = 0x82DE1400;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82DE1410;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,1637
	ctx.r6.s64 = 1637;
	// bl 0x82e7eb70
	ctx.lr = 0x82DE1424;
	sub_82E7EB70(ctx, base);
loc_82DE1424:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-4496(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4496);
	// bl 0x82e64c60
	ctx.lr = 0x82DE143C;
	sub_82E64C60(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE1444"))) PPC_WEAK_FUNC(sub_82DE1444);
PPC_FUNC_IMPL(__imp__sub_82DE1444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE1448"))) PPC_WEAK_FUNC(sub_82DE1448);
PPC_FUNC_IMPL(__imp__sub_82DE1448) {
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
	// lwz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82de1520
	if (cr6.lt) goto loc_82DE1520;
	// beq cr6,0x82de1524
	if (cr6.eq) goto loc_82DE1524;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82de14a8
	if (cr6.lt) goto loc_82DE14A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// lwz r4,-4496(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4496);
	// bl 0x82e64c60
	ctx.lr = 0x82DE1490;
	sub_82E64C60(ctx, base);
	// lis r9,-32034
	ctx.r9.s64 = -2099380224;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,3760
	ctx.r7.s64 = ctx.r9.s64 + 3760;
	// stw r8,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r8.u32);
	// stw r7,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r7.u32);
	// b 0x82de1598
	goto loc_82DE1598;
loc_82DE14A8:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82ddcec8
	ctx.lr = 0x82DE14B0;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82de1598
	if (cr6.eq) goto loc_82DE1598;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82de14e8
	if (!cr6.eq) goto loc_82DE14E8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-4496(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4496);
	// bl 0x82e64c60
	ctx.lr = 0x82DE14D8;
	sub_82E64C60(ctx, base);
	// lis r9,-32034
	ctx.r9.s64 = -2099380224;
	// addi r8,r9,3760
	ctx.r8.s64 = ctx.r9.s64 + 3760;
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// b 0x82de14f4
	goto loc_82DE14F4;
loc_82DE14E8:
	// lis r11,-32034
	ctx.r11.s64 = -2099380224;
	// addi r10,r11,3760
	ctx.r10.s64 = ctx.r11.s64 + 3760;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
loc_82DE14F4:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de1598
	if (cr6.eq) goto loc_82DE1598;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DE1518;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// b 0x82de1598
	goto loc_82DE1598;
loc_82DE1520:
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
loc_82DE1524:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ddfac0
	ctx.lr = 0x82DE1534;
	sub_82DDFAC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de154c
	if (cr6.eq) goto loc_82DE154C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// b 0x82de1598
	goto loc_82DE1598;
loc_82DE154C:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82de1584
	if (cr6.eq) goto loc_82DE1584;
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-4496(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4496);
	// bl 0x82e64c60
	ctx.lr = 0x82DE156C;
	sub_82E64C60(ctx, base);
	// lis r10,-32034
	ctx.r10.s64 = -2099380224;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,3760
	ctx.r8.s64 = ctx.r10.s64 + 3760;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// b 0x82de1598
	goto loc_82DE1598;
loc_82DE1584:
	// lis r11,-32034
	ctx.r11.s64 = -2099380224;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3760
	ctx.r9.s64 = ctx.r11.s64 + 3760;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
loc_82DE1598:
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

__attribute__((alias("__imp__sub_82DE15B0"))) PPC_WEAK_FUNC(sub_82DE15B0);
PPC_FUNC_IMPL(__imp__sub_82DE15B0) {
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
	// bl 0x82e6f960
	ctx.lr = 0x82DE15CC;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de1688
	if (cr6.eq) goto loc_82DE1688;
	// bl 0x82e6f960
	ctx.lr = 0x82DE15D8;
	sub_82E6F960(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82e6fa08
	ctx.lr = 0x82DE15E0;
	sub_82E6FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de1688
	if (cr6.eq) goto loc_82DE1688;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82de1688
	if (!cr6.eq) goto loc_82DE1688;
	// bl 0x82d86078
	ctx.lr = 0x82DE15FC;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de1688
	if (cr6.eq) goto loc_82DE1688;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x82dbb4a0
	ctx.lr = 0x82DE1610;
	sub_82DBB4A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de1688
	if (cr6.eq) goto loc_82DE1688;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82dbb5c0
	ctx.lr = 0x82DE1624;
	sub_82DBB5C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de1688
	if (cr6.eq) goto loc_82DE1688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de1020
	ctx.lr = 0x82DE1638;
	sub_82DE1020(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de06d0
	ctx.lr = 0x82DE1640;
	sub_82DE06D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ddfe10
	ctx.lr = 0x82DE1648;
	sub_82DDFE10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de09f8
	ctx.lr = 0x82DE1650;
	sub_82DE09F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de0c20
	ctx.lr = 0x82DE1658;
	sub_82DE0C20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de02d0
	ctx.lr = 0x82DE1660;
	sub_82DE02D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e65bb0
	ctx.lr = 0x82DE1668;
	sub_82E65BB0(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de1680
	if (cr6.eq) goto loc_82DE1680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DE1680;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DE1680:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e64780
	ctx.lr = 0x82DE1688;
	sub_82E64780(ctx, base);
loc_82DE1688:
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

__attribute__((alias("__imp__sub_82DE16A0"))) PPC_WEAK_FUNC(sub_82DE16A0);
PPC_FUNC_IMPL(__imp__sub_82DE16A0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// bl 0x82dc6030
	ctx.lr = 0x82DE16C4;
	sub_82DC6030(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de16dc
	if (cr6.eq) goto loc_82DE16DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82DE16DC;
	sub_83103100(ctx, base);
loc_82DE16DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82dcbe70
	ctx.lr = 0x82DE16E4;
	sub_82DCBE70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de1744
	if (!cr6.eq) goto loc_82DE1744;
	// bl 0x82d86078
	ctx.lr = 0x82DE16F4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de1714
	if (cr6.eq) goto loc_82DE1714;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE1704;
	sub_831F81F8(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82de1718
	if (cr6.eq) goto loc_82DE1718;
loc_82DE1714:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DE1718:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de1734
	if (!cr6.eq) goto loc_82DE1734;
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4623
	ctx.r4.u64 = ctx.r4.u64 | 4623;
	// bl 0x82e64250
	ctx.lr = 0x82DE1734;
	sub_82E64250(ctx, base);
loc_82DE1734:
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4625
	ctx.r4.u64 = ctx.r4.u64 | 4625;
	// bl 0x82e64250
	ctx.lr = 0x82DE1744;
	sub_82E64250(ctx, base);
loc_82DE1744:
	// lis r11,-32034
	ctx.r11.s64 = -2099380224;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3760
	ctx.r9.s64 = ctx.r11.s64 + 3760;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82DE176C"))) PPC_WEAK_FUNC(sub_82DE176C);
PPC_FUNC_IMPL(__imp__sub_82DE176C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE1770"))) PPC_WEAK_FUNC(sub_82DE1770);
PPC_FUNC_IMPL(__imp__sub_82DE1770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DE1778;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e655c8
	ctx.lr = 0x82DE1784;
	sub_82E655C8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-9504
	ctx.r10.s64 = ctx.r11.s64 + -9504;
	// li r29,1
	ctx.r29.s64 = 1;
	// std r30,224(r31)
	PPC_STORE_U64(ctx.r31.u32 + 224, ctx.r30.u64);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// stb r29,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r29.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 232, ctx.r30.u8);
	// stb r30,233(r31)
	PPC_STORE_U8(ctx.r31.u32 + 233, ctx.r30.u8);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stb r30,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r30.u8);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// bl 0x838a2b30
	ctx.lr = 0x82DE17E8;
	sub_838A2B30(ctx, base);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stb r30,320(r31)
	PPC_STORE_U8(ctx.r31.u32 + 320, ctx.r30.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r7,r9,-19876
	ctx.r7.s64 = ctx.r9.s64 + -19876;
	// stb r30,321(r31)
	PPC_STORE_U8(ctx.r31.u32 + 321, ctx.r30.u8);
	// std r30,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r30.u64);
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// addi r3,r31,540
	ctx.r3.s64 = ctx.r31.s64 + 540;
	// stw r7,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stb r30,348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 348, ctx.r30.u8);
	// stb r30,349(r31)
	PPC_STORE_U8(ctx.r31.u32 + 349, ctx.r30.u8);
	// stb r29,350(r31)
	PPC_STORE_U8(ctx.r31.u32 + 350, ctx.r29.u8);
	// stb r29,351(r31)
	PPC_STORE_U8(ctx.r31.u32 + 351, ctx.r29.u8);
	// stb r30,356(r31)
	PPC_STORE_U8(ctx.r31.u32 + 356, ctx.r30.u8);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// stb r30,377(r31)
	PPC_STORE_U8(ctx.r31.u32 + 377, ctx.r30.u8);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r8,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r8.u32);
	// stw r6,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r6.u32);
	// stw r30,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r30.u32);
	// stb r30,468(r31)
	PPC_STORE_U8(ctx.r31.u32 + 468, ctx.r30.u8);
	// stw r30,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r30.u32);
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// std r30,504(r31)
	PPC_STORE_U64(ctx.r31.u32 + 504, ctx.r30.u64);
	// std r30,512(r31)
	PPC_STORE_U64(ctx.r31.u32 + 512, ctx.r30.u64);
	// stb r30,520(r31)
	PPC_STORE_U8(ctx.r31.u32 + 520, ctx.r30.u8);
	// stb r30,521(r31)
	PPC_STORE_U8(ctx.r31.u32 + 521, ctx.r30.u8);
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// bl 0x838a2b30
	ctx.lr = 0x82DE1894;
	sub_838A2B30(ctx, base);
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r29,r31,404
	ctx.r29.s64 = ctx.r31.s64 + 404;
	// std r30,568(r31)
	PPC_STORE_U64(ctx.r31.u32 + 568, ctx.r30.u64);
	// stw r4,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r4.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82DE18B4;
	sub_831CDCF0(ctx, base);
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// lwz r11,25496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25496);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de18d4
	if (cr6.eq) goto loc_82DE18D4;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82DE18D4;
	sub_831CE980(ctx, base);
loc_82DE18D4:
	// lis r11,-32034
	ctx.r11.s64 = -2099380224;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,5792
	ctx.r10.s64 = ctx.r11.s64 + 5792;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE18F0"))) PPC_WEAK_FUNC(sub_82DE18F0);
PPC_FUNC_IMPL(__imp__sub_82DE18F0) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-25368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25368);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82de194c
	if (!cr6.eq) goto loc_82DE194C;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,584
	ctx.r4.s64 = 584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DE1930;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de1944
	if (cr6.eq) goto loc_82DE1944;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82de1770
	ctx.lr = 0x82DE1940;
	sub_82DE1770(ctx, base);
	// b 0x82de1948
	goto loc_82DE1948;
loc_82DE1944:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE1948:
	// stw r3,-25368(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25368, ctx.r3.u32);
loc_82DE194C:
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

__attribute__((alias("__imp__sub_82DE1964"))) PPC_WEAK_FUNC(sub_82DE1964);
PPC_FUNC_IMPL(__imp__sub_82DE1964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE1968"))) PPC_WEAK_FUNC(sub_82DE1968);
PPC_FUNC_IMPL(__imp__sub_82DE1968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82DE1970;
	__savegprlr_22(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de19ac
	if (cr6.eq) goto loc_82DE19AC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e64f98
	ctx.lr = 0x82DE1994;
	sub_82E64F98(ctx, base);
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x830f6290
	ctx.lr = 0x82DE19A8;
	sub_830F6290(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_82DE19AC:
	// bl 0x82d86078
	ctx.lr = 0x82DE19B0;
	sub_82D86078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de1ad8
	if (cr6.eq) goto loc_82DE1AD8;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x831f81f8
	ctx.lr = 0x82DE19CC;
	sub_831F81F8(ctx, base);
	// bl 0x8332f198
	ctx.lr = 0x82DE19D0;
	sub_8332F198(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de1ad8
	if (cr6.eq) goto loc_82DE1AD8;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r23,-1
	ctx.r23.s64 = -1;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r24,23
	ctx.r24.s64 = 23;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r22,-1
	ctx.r22.s64 = -1;
	// addi r25,r11,-22544
	ctx.r25.s64 = ctx.r11.s64 + -22544;
loc_82DE19F4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82da8d18
	ctx.lr = 0x82DE19FC;
	sub_82DA8D18(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DE1A10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// stw r23,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// stb r31,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r31.u8);
	// stw r26,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r26.u32);
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// stb r31,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r31.u8);
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE1A30;
	sub_831F81F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82dbcae8
	ctx.lr = 0x82DE1A3C;
	sub_82DBCAE8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82de1ab8
	if (cr6.eq) goto loc_82DE1AB8;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82DE1A68;
	sub_8259CC28(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE1A84;
	sub_8259CB28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f6558
	ctx.lr = 0x82DE1A90;
	sub_830F6558(ctx, base);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82de1aac
	if (cr6.lt) goto loc_82DE1AAC;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x82DE1AAC;
	sub_825952B8(ctx, base);
loc_82DE1AAC:
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
loc_82DE1AB8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82da8c38
	ctx.lr = 0x82DE1AC0;
	sub_82DA8C38(ctx, base);
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x831f81f8
	ctx.lr = 0x82DE1ACC;
	sub_831F81F8(ctx, base);
	// bl 0x8332f198
	ctx.lr = 0x82DE1AD0;
	sub_8332F198(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x82de19f4
	if (cr6.lt) goto loc_82DE19F4;
loc_82DE1AD8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE1AE0"))) PPC_WEAK_FUNC(sub_82DE1AE0);
PPC_FUNC_IMPL(__imp__sub_82DE1AE0) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r11,-24960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24960);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de1b44
	if (cr6.eq) goto loc_82DE1B44;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82DE1B14;
	sub_82595150(ctx, base);
	// lwz r3,-24960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24960);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de1b34
	if (cr6.eq) goto loc_82DE1B34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DE1B34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DE1B34:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82DE1B3C;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-24960(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24960, ctx.r11.u32);
loc_82DE1B44:
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

__attribute__((alias("__imp__sub_82DE1B58"))) PPC_WEAK_FUNC(sub_82DE1B58);
PPC_FUNC_IMPL(__imp__sub_82DE1B58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DE1B60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-9284
	ctx.r10.s64 = ctx.r11.s64 + -9284;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de1b8c
	if (cr6.lt) goto loc_82DE1B8C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82DE1B8C;
	sub_82416268(ctx, base);
loc_82DE1B8C:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82de1bb4
	if (cr6.lt) goto loc_82DE1BB4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82DE1BB4;
	sub_82416268(ctx, base);
loc_82DE1BB4:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE1BC8"))) PPC_WEAK_FUNC(sub_82DE1BC8);
PPC_FUNC_IMPL(__imp__sub_82DE1BC8) {
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
	// bl 0x82de1b58
	ctx.lr = 0x82DE1BE8;
	sub_82DE1B58(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de1c00
	if (cr6.eq) goto loc_82DE1C00;
	// bl 0x82416268
	ctx.lr = 0x82DE1BFC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DE1C00:
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

__attribute__((alias("__imp__sub_82DE1C18"))) PPC_WEAK_FUNC(sub_82DE1C18);
PPC_FUNC_IMPL(__imp__sub_82DE1C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DE1C20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// addi r28,r10,-22544
	ctx.r28.s64 = ctx.r10.s64 + -22544;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r30,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r30.u8);
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// bl 0x82472fc0
	ctx.lr = 0x82DE1C60;
	sub_82472FC0(ctx, base);
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82472fc0
	ctx.lr = 0x82DE1C74;
	sub_82472FC0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,22
	ctx.r10.s64 = 22;
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// stb r11,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r11.u8);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE1CA8"))) PPC_WEAK_FUNC(sub_82DE1CA8);
PPC_FUNC_IMPL(__imp__sub_82DE1CA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DE1CB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// addi r28,r11,-22544
	ctx.r28.s64 = ctx.r11.s64 + -22544;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82472fc0
	ctx.lr = 0x82DE1CD4;
	sub_82472FC0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82472fc0
	ctx.lr = 0x82DE1CEC;
	sub_82472FC0(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r11,22
	ctx.r11.s64 = 22;
	// stb r29,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r29.u8);
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// li r27,10
	ctx.r27.s64 = 10;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stb r28,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r28.u8);
	// addi r30,r31,92
	ctx.r30.s64 = ctx.r31.s64 + 92;
	// stb r28,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r28.u8);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stb r28,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r28.u8);
	// stw r26,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r26.u32);
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// bl 0x830ff290
	ctx.lr = 0x82DE1D2C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82DE1D30;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x82de1d3c
	if (!cr6.eq) goto loc_82DE1D3C;
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_82DE1D3C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stb r28,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r28.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r29,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r29.u8);
	// ori r9,r11,65534
	ctx.r9.u64 = ctx.r11.u64 | 65534;
	// stb r29,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r29.u8);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r26,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE1D68"))) PPC_WEAK_FUNC(sub_82DE1D68);
PPC_FUNC_IMPL(__imp__sub_82DE1D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DE1D74:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82de1d74
	if (!cr6.eq) goto loc_82DE1D74;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82472fc0
	sub_82472FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE1D98"))) PPC_WEAK_FUNC(sub_82DE1D98);
PPC_FUNC_IMPL(__imp__sub_82DE1D98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE1D9C"))) PPC_WEAK_FUNC(sub_82DE1D9C);
PPC_FUNC_IMPL(__imp__sub_82DE1D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE1DA0"))) PPC_WEAK_FUNC(sub_82DE1DA0);
PPC_FUNC_IMPL(__imp__sub_82DE1DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DE1DA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-9284
	ctx.r10.s64 = ctx.r11.s64 + -9284;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x82de1c18
	ctx.lr = 0x82DE1DC4;
	sub_82DE1C18(ctx, base);
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,10
	ctx.r29.s64 = 10;
	// stw r28,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r28.u32);
	// addi r31,r30,92
	ctx.r31.s64 = ctx.r30.s64 + 92;
	// stw r29,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r29.u32);
	// bl 0x830ff290
	ctx.lr = 0x82DE1DDC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82DE1DE0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x82de1dec
	if (!cr6.eq) goto loc_82DE1DEC;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82DE1DEC:
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r10,65534
	ctx.r8.u64 = ctx.r10.u64 | 65534;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// li r7,3
	ctx.r7.s64 = 3;
	// stb r9,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r9.u8);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// bl 0x82de1ca8
	ctx.lr = 0x82DE1E20;
	sub_82DE1CA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE1E2C"))) PPC_WEAK_FUNC(sub_82DE1E2C);
PPC_FUNC_IMPL(__imp__sub_82DE1E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE1E30"))) PPC_WEAK_FUNC(sub_82DE1E30);
PPC_FUNC_IMPL(__imp__sub_82DE1E30) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r3,-24960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24960);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82de1e80
	if (!cr6.eq) goto loc_82DE1E80;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DE1E68;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de1e78
	if (cr6.eq) goto loc_82DE1E78;
	// bl 0x82de1da0
	ctx.lr = 0x82DE1E74;
	sub_82DE1DA0(ctx, base);
	// b 0x82de1e7c
	goto loc_82DE1E7C;
loc_82DE1E78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DE1E7C:
	// stw r3,-24960(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24960, ctx.r3.u32);
loc_82DE1E80:
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

__attribute__((alias("__imp__sub_82DE1E94"))) PPC_WEAK_FUNC(sub_82DE1E94);
PPC_FUNC_IMPL(__imp__sub_82DE1E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE1E98"))) PPC_WEAK_FUNC(sub_82DE1E98);
PPC_FUNC_IMPL(__imp__sub_82DE1E98) {
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
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da8d18
	ctx.lr = 0x82DE1EC4;
	sub_82DA8D18(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82DE1EE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82DE1EFC"))) PPC_WEAK_FUNC(sub_82DE1EFC);
PPC_FUNC_IMPL(__imp__sub_82DE1EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE1F00"))) PPC_WEAK_FUNC(sub_82DE1F00);
PPC_FUNC_IMPL(__imp__sub_82DE1F00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// stb r9,164(r3)
	PPC_STORE_U8(ctx.r3.u32 + 164, ctx.r9.u8);
	// stb r10,165(r3)
	PPC_STORE_U8(ctx.r3.u32 + 165, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE1F1C"))) PPC_WEAK_FUNC(sub_82DE1F1C);
PPC_FUNC_IMPL(__imp__sub_82DE1F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE1F20"))) PPC_WEAK_FUNC(sub_82DE1F20);
PPC_FUNC_IMPL(__imp__sub_82DE1F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-2528(r1)
	ea = -2528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82e765e8
	ctx.lr = 0x82DE1F30;
	sub_82E765E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de1f84
	if (cr6.eq) goto loc_82DE1F84;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,27
	ctx.r9.s64 = 27;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x82d86078
	ctx.lr = 0x82DE1F54;
	sub_82D86078(ctx, base);
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r11,25
	ctx.r11.s64 = 25;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// beq cr6,0x82de1f6c
	if (cr6.eq) goto loc_82DE1F6C;
	// li r11,14
	ctx.r11.s64 = 14;
loc_82DE1F6C:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82e765e8
	ctx.lr = 0x82DE1F7C;
	sub_82E765E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e76b28
	ctx.lr = 0x82DE1F84;
	sub_82E76B28(ctx, base);
loc_82DE1F84:
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE1F94"))) PPC_WEAK_FUNC(sub_82DE1F94);
PPC_FUNC_IMPL(__imp__sub_82DE1F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE1F98"))) PPC_WEAK_FUNC(sub_82DE1F98);
PPC_FUNC_IMPL(__imp__sub_82DE1F98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,89(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 89);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82de1fb8
	if (!cr6.eq) goto loc_82DE1FB8;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82DE1FB8:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82de1fe0
	if (!cr6.eq) goto loc_82DE1FE0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82DE1FE0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82de2000
	if (!cr6.eq) goto loc_82DE2000;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82DE2000:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE2010"))) PPC_WEAK_FUNC(sub_82DE2010);
PPC_FUNC_IMPL(__imp__sub_82DE2010) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// stb r9,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r9.u8);
	// bl 0x82da8fd0
	ctx.lr = 0x82DE204C;
	sub_82DA8FD0(ctx, base);
	// lwz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82DE2070"))) PPC_WEAK_FUNC(sub_82DE2070);
PPC_FUNC_IMPL(__imp__sub_82DE2070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82de20d8
	if (!cr6.gt) goto loc_82DE20D8;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// addi r7,r9,30872
	ctx.r7.s64 = ctx.r9.s64 + 30872;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b270
	ctx.lr = 0x82DE20C8;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82DE20D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE20EC"))) PPC_WEAK_FUNC(sub_82DE20EC);
PPC_FUNC_IMPL(__imp__sub_82DE20EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE20F0"))) PPC_WEAK_FUNC(sub_82DE20F0);
PPC_FUNC_IMPL(__imp__sub_82DE20F0) {
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
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// lbz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stb r8,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r8.u8);
	// bl 0x82da8fd0
	ctx.lr = 0x82DE2130;
	sub_82DA8FD0(ctx, base);
	// lwz r7,64(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82DE2154"))) PPC_WEAK_FUNC(sub_82DE2154);
PPC_FUNC_IMPL(__imp__sub_82DE2154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE2158"))) PPC_WEAK_FUNC(sub_82DE2158);
PPC_FUNC_IMPL(__imp__sub_82DE2158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r7,r11,112
	ctx.r7.s64 = ctx.r11.s64 + 112;
loc_82DE2164:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi. r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82de21a4
	if (cr0.eq) goto loc_82DE21A4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82de21bc
	if (!cr6.gt) goto loc_82DE21BC;
loc_82DE2188:
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82de2188
	if (cr6.gt) goto loc_82DE2188;
loc_82DE21A4:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x82de2164
	if (cr6.lt) goto loc_82DE2164;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82DE21BC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE21C8"))) PPC_WEAK_FUNC(sub_82DE21C8);
PPC_FUNC_IMPL(__imp__sub_82DE21C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DE21D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,910
	ctx.r10.s64 = 59637760;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,14562
	ctx.r9.u64 = ctx.r10.u64 | 14562;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82de221c
	if (cr6.lt) goto loc_82DE221C;
	// addi r3,r7,32
	ctx.r3.s64 = ctx.r7.s64 + 32;
	// bl 0x82da8c38
	ctx.lr = 0x82DE21FC;
	sub_82DA8C38(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82DE2210;
	sub_825952B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,12808
	ctx.r3.s64 = ctx.r10.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x82DE221C;
	sub_831CC150(ctx, base);
loc_82DE221C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82de224c
	if (!cr6.eq) goto loc_82DE224C;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// b 0x82de228c
	goto loc_82DE228C;
loc_82DE224C:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de2274
	if (cr6.eq) goto loc_82DE2274;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82de228c
	if (!cr6.eq) goto loc_82DE228C;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x82de228c
	goto loc_82DE228C;
loc_82DE2274:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82de228c
	if (!cr6.eq) goto loc_82DE228C;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_82DE228C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82de23b0
	if (!cr6.eq) goto loc_82DE23B0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82DE22A8:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82de2330
	if (!cr6.eq) goto loc_82DE2330;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82de22f0
	if (!cr6.eq) goto loc_82DE22F0;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,88(r10)
	PPC_STORE_U8(ctx.r10.u32 + 88, ctx.r29.u8);
	// stb r29,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,88(r8)
	PPC_STORE_U8(ctx.r8.u32 + 88, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82de23a0
	goto loc_82DE23A0;
loc_82DE22F0:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82de2308
	if (!cr6.eq) goto loc_82DE2308;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82ef60b0
	ctx.lr = 0x82DE2308;
	sub_82EF60B0(ctx, base);
loc_82DE2308:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,88(r9)
	PPC_STORE_U8(ctx.r9.u32 + 88, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82de1f98
	ctx.lr = 0x82DE232C;
	sub_82DE1F98(ctx, base);
	// b 0x82de23a0
	goto loc_82DE23A0;
loc_82DE2330:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82de2364
	if (!cr6.eq) goto loc_82DE2364;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,88(r10)
	PPC_STORE_U8(ctx.r10.u32 + 88, ctx.r29.u8);
	// stb r29,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,88(r8)
	PPC_STORE_U8(ctx.r8.u32 + 88, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82de23a0
	goto loc_82DE23A0;
loc_82DE2364:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82de237c
	if (!cr6.eq) goto loc_82DE237C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82de1f98
	ctx.lr = 0x82DE237C;
	sub_82DE1F98(ctx, base);
loc_82DE237C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,88(r9)
	PPC_STORE_U8(ctx.r9.u32 + 88, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82ef60b0
	ctx.lr = 0x82DE23A0;
	sub_82EF60B0(ctx, base);
loc_82DE23A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82de22a8
	if (cr6.eq) goto loc_82DE22A8;
loc_82DE23B0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,88(r10)
	PPC_STORE_U8(ctx.r10.u32 + 88, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE23CC"))) PPC_WEAK_FUNC(sub_82DE23CC);
PPC_FUNC_IMPL(__imp__sub_82DE23CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE23D0"))) PPC_WEAK_FUNC(sub_82DE23D0);
PPC_FUNC_IMPL(__imp__sub_82DE23D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DE23D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de242c
	if (cr6.eq) goto loc_82DE242C;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82DE23F0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82de241c
	if (cr6.eq) goto loc_82DE241C;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// addi r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 + 56;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// addi r3,r10,-48
	ctx.r3.s64 = ctx.r10.s64 + -48;
	// stb r9,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r9.u8);
	// bl 0x82da8fd0
	ctx.lr = 0x82DE2414;
	sub_82DA8FD0(ctx, base);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r8,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r8.u32);
loc_82DE241C:
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82de23f0
	if (!cr6.eq) goto loc_82DE23F0;
loc_82DE242C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE2438"))) PPC_WEAK_FUNC(sub_82DE2438);
PPC_FUNC_IMPL(__imp__sub_82DE2438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DE2440;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82de2480
	if (cr6.eq) goto loc_82DE2480;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82DE2460:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x82de248c
	if (cr6.eq) goto loc_82DE248C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c5dbe8
	ctx.lr = 0x82DE2474;
	sub_82C5DBE8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82de2460
	if (!cr6.eq) goto loc_82DE2460;
loc_82DE2480:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DE248C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE24A0"))) PPC_WEAK_FUNC(sub_82DE24A0);
PPC_FUNC_IMPL(__imp__sub_82DE24A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DE24A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r3,168
	ctx.r30.s64 = ctx.r3.s64 + 168;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82DE24C4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de2658
	if (cr6.eq) goto loc_82DE2658;
	// bl 0x82e744f8
	ctx.lr = 0x82DE24D4;
	sub_82E744F8(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82DE24D8;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de2584
	if (cr6.eq) goto loc_82DE2584;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x82de2534
	if (cr6.eq) goto loc_82DE2534;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x8257fad0
	ctx.lr = 0x82DE250C;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82de2534
	if (cr6.lt) goto loc_82DE2534;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x82DE2530;
	sub_8257FB60(ctx, base);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
loc_82DE2534:
	// ori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 | 1;
	// bl 0x82dad2e0
	ctx.lr = 0x82DE253C;
	sub_82DAD2E0(ctx, base);
	// lwz r11,564(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de2554
	if (!cr6.eq) goto loc_82DE2554;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x82de2574
	goto loc_82DE2574;
loc_82DE2554:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 344);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de2568
	if (cr6.eq) goto loc_82DE2568;
	// bl 0x82e744f8
	ctx.lr = 0x82DE2568;
	sub_82E744F8(ctx, base);
loc_82DE2568:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x82e744b0
	ctx.lr = 0x82DE2574;
	sub_82E744B0(ctx, base);
loc_82DE2574:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82de2588
	if (cr6.eq) goto loc_82DE2588;
loc_82DE2584:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82DE2588:
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82de25ac
	if (cr6.eq) goto loc_82DE25AC;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r29,r29,0,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de25ac
	if (cr6.eq) goto loc_82DE25AC;
	// bl 0x8259b510
	ctx.lr = 0x82DE25AC;
	sub_8259B510(ctx, base);
loc_82DE25AC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de2658
	if (!cr6.eq) goto loc_82DE2658;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r28,22
	cr6.compare<uint32_t>(ctx.r28.u32, 22, xer);
	// blt cr6,0x82de24c4
	if (cr6.lt) goto loc_82DE24C4;
	// lwz r3,344(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 344);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de2658
	if (cr6.eq) goto loc_82DE2658;
	// bl 0x82e744f8
	ctx.lr = 0x82DE25D8;
	sub_82E744F8(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82DE25DC;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de2694
	if (cr6.eq) goto loc_82DE2694;
	// lwz r11,348(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// lwz r10,344(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 344);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// beq cr6,0x82de2638
	if (cr6.eq) goto loc_82DE2638;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x8257fad0
	ctx.lr = 0x82DE2610;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82de2638
	if (cr6.lt) goto loc_82DE2638;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8257fb60
	ctx.lr = 0x82DE2634;
	sub_8257FB60(ctx, base);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
loc_82DE2638:
	// ori r29,r29,2
	ctx.r29.u64 = ctx.r29.u64 | 2;
	// bl 0x82dad2e0
	ctx.lr = 0x82DE2640;
	sub_82DAD2E0(ctx, base);
	// lwz r11,564(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de2664
	if (!cr6.eq) goto loc_82DE2664;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x82de2684
	goto loc_82DE2684;
loc_82DE2658:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82DE2664:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 344);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de2678
	if (cr6.eq) goto loc_82DE2678;
	// bl 0x82e744f8
	ctx.lr = 0x82DE2678;
	sub_82E744F8(ctx, base);
loc_82DE2678:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x82e744b0
	ctx.lr = 0x82DE2684;
	sub_82E744B0(ctx, base);
loc_82DE2684:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82de2698
	if (cr6.eq) goto loc_82DE2698;
loc_82DE2694:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82DE2698:
	// rlwinm r10,r29,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82de26b8
	if (cr6.eq) goto loc_82DE26B8;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de26b8
	if (cr6.eq) goto loc_82DE26B8;
	// bl 0x8259b510
	ctx.lr = 0x82DE26B8;
	sub_8259B510(ctx, base);
loc_82DE26B8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE26CC"))) PPC_WEAK_FUNC(sub_82DE26CC);
PPC_FUNC_IMPL(__imp__sub_82DE26CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE26D0"))) PPC_WEAK_FUNC(sub_82DE26D0);
PPC_FUNC_IMPL(__imp__sub_82DE26D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DE26D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DE26E4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82de26f4
	if (!cr6.eq) goto loc_82DE26F4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DE26F4:
	// bl 0x82d860f0
	ctx.lr = 0x82DE26F8;
	sub_82D860F0(ctx, base);
	// lwz r10,100(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82de2750
	if (cr6.eq) goto loc_82DE2750;
loc_82DE2714:
	// lwz r31,64(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bge cr6,0x82de2724
	if (!cr6.lt) goto loc_82DE2724;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82DE2724:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dcbe70
	ctx.lr = 0x82DE272C;
	sub_82DCBE70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de2764
	if (!cr6.eq) goto loc_82DE2764;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef5b50
	ctx.lr = 0x82DE2740;
	sub_82EF5B50(ctx, base);
	// lwz r10,100(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82de2714
	if (!cr6.eq) goto loc_82DE2714;
loc_82DE2750:
	// subf r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DE2764:
	// subf r11,r28,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE2778"))) PPC_WEAK_FUNC(sub_82DE2778);
PPC_FUNC_IMPL(__imp__sub_82DE2778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82DE2780;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,89(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 89);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de27a8
	if (cr6.eq) goto loc_82DE27A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x82DE27A8;
	sub_831CC188(ctx, base);
loc_82DE27A8:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82ef5b50
	ctx.lr = 0x82DE27B4;
	sub_82EF5B50(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,89(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 89);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82de27d0
	if (cr6.eq) goto loc_82DE27D0;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82de27f4
	goto loc_82DE27F4;
loc_82DE27D0:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,89(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 89);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82de27e8
	if (cr6.eq) goto loc_82DE27E8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82de27f4
	goto loc_82DE27F4;
loc_82DE27E8:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x82de28e0
	if (!cr6.eq) goto loc_82DE28E0;
loc_82DE27F4:
	// lbz r11,89(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 89);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de2808
	if (!cr6.eq) goto loc_82DE2808;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82DE2808:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82de2820
	if (!cr6.eq) goto loc_82DE2820;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82de2838
	goto loc_82DE2838;
loc_82DE2820:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82de2834
	if (!cr6.eq) goto loc_82DE2834;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82de2838
	goto loc_82DE2838;
loc_82DE2834:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82DE2838:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82de2888
	if (!cr6.eq) goto loc_82DE2888;
	// lbz r11,89(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 89);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de285c
	if (cr6.eq) goto loc_82DE285C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82de2884
	goto loc_82DE2884;
loc_82DE285C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,89(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 89);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82de2884
	if (!cr6.eq) goto loc_82DE2884;
loc_82DE2870:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,89(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 89);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82de2870
	if (cr6.eq) goto loc_82DE2870;
loc_82DE2884:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82DE2888:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82de2974
	if (!cr6.eq) goto loc_82DE2974;
	// lbz r11,89(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 89);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de28b0
	if (cr6.eq) goto loc_82DE28B0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82de2974
	goto loc_82DE2974;
loc_82DE28B0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,89(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 89);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82de28d8
	if (!cr6.eq) goto loc_82DE28D8;
loc_82DE28C4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,89(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 89);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82de28c4
	if (cr6.eq) goto loc_82DE28C4;
loc_82DE28D8:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82de2974
	goto loc_82DE2974;
loc_82DE28E0:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x82de2900
	if (!cr6.eq) goto loc_82DE2900;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82de2928
	goto loc_82DE2928;
loc_82DE2900:
	// lbz r11,89(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 89);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de2914
	if (!cr6.eq) goto loc_82DE2914;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82DE2914:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
loc_82DE2928:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82de2940
	if (!cr6.eq) goto loc_82DE2940;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82de295c
	goto loc_82DE295C;
loc_82DE2940:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82de2958
	if (!cr6.eq) goto loc_82DE2958;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82de295c
	goto loc_82DE295C;
loc_82DE2958:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82DE295C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,88(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 88);
	// lbz r10,88(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 88);
	// stb r9,88(r25)
	PPC_STORE_U8(ctx.r25.u32 + 88, ctx.r9.u8);
	// stb r10,88(r26)
	PPC_STORE_U8(ctx.r26.u32 + 88, ctx.r10.u8);
loc_82DE2974:
	// lbz r11,88(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 88);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82de2b0c
	if (!cr6.eq) goto loc_82DE2B0C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de2b08
	if (cr6.eq) goto loc_82DE2B08;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82DE2998:
	// lbz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 88);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82de2b08
	if (!cr6.eq) goto loc_82DE2B08;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82de2a50
	if (!cr6.eq) goto loc_82DE2A50;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82de29d8
	if (!cr6.eq) goto loc_82DE29D8;
	// stb r29,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ef60b0
	ctx.lr = 0x82DE29D4;
	sub_82EF60B0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82DE29D8:
	// lbz r10,89(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 89);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82de2aa4
	if (!cr6.eq) goto loc_82DE2AA4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 88);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82de2a04
	if (!cr6.eq) goto loc_82DE2A04;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 88);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82de2aa0
	if (cr6.eq) goto loc_82DE2AA0;
loc_82DE2A04:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 88);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82de2a2c
	if (!cr6.eq) goto loc_82DE2A2C;
	// stb r29,88(r10)
	PPC_STORE_U8(ctx.r10.u32 + 88, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82de1f98
	ctx.lr = 0x82DE2A28;
	sub_82DE1F98(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82DE2A2C:
	// lbz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r10.u8);
	// stb r29,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,88(r9)
	PPC_STORE_U8(ctx.r9.u32 + 88, ctx.r29.u8);
	// bl 0x82ef60b0
	ctx.lr = 0x82DE2A4C;
	sub_82EF60B0(ctx, base);
	// b 0x82de2b08
	goto loc_82DE2B08;
loc_82DE2A50:
	// lbz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82de2a74
	if (!cr6.eq) goto loc_82DE2A74;
	// stb r29,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82de1f98
	ctx.lr = 0x82DE2A70;
	sub_82DE1F98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82DE2A74:
	// lbz r10,89(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 89);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82de2aa4
	if (!cr6.eq) goto loc_82DE2AA4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 88);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82de2ac0
	if (!cr6.eq) goto loc_82DE2AC0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 88);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82de2ac0
	if (!cr6.eq) goto loc_82DE2AC0;
loc_82DE2AA0:
	// stb r30,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r30.u8);
loc_82DE2AA4:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82de2998
	if (!cr6.eq) goto loc_82DE2998;
	// b 0x82de2b08
	goto loc_82DE2B08;
loc_82DE2AC0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 88);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82de2ae8
	if (!cr6.eq) goto loc_82DE2AE8;
	// stb r29,88(r10)
	PPC_STORE_U8(ctx.r10.u32 + 88, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ef60b0
	ctx.lr = 0x82DE2AE4;
	sub_82EF60B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82DE2AE8:
	// lbz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r10.u8);
	// stb r29,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,88(r9)
	PPC_STORE_U8(ctx.r9.u32 + 88, ctx.r29.u8);
	// bl 0x82de1f98
	ctx.lr = 0x82DE2B08;
	sub_82DE1F98(ctx, base);
loc_82DE2B08:
	// stb r29,88(r28)
	PPC_STORE_U8(ctx.r28.u32 + 88, ctx.r29.u8);
loc_82DE2B0C:
	// addi r3,r26,32
	ctx.r3.s64 = ctx.r26.s64 + 32;
	// bl 0x82da8c38
	ctx.lr = 0x82DE2B14;
	sub_82DA8C38(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82DE2B28;
	sub_825952B8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de2b3c
	if (cr6.eq) goto loc_82DE2B3C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82DE2B3C:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE2B4C"))) PPC_WEAK_FUNC(sub_82DE2B4C);
PPC_FUNC_IMPL(__imp__sub_82DE2B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE2B50"))) PPC_WEAK_FUNC(sub_82DE2B50);
PPC_FUNC_IMPL(__imp__sub_82DE2B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,89(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 89);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82de2b90
	if (!cr6.eq) goto loc_82DE2B90;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82DE2B68:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82de2b7c
	if (!cr6.lt) goto loc_82DE2B7C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82de2b84
	goto loc_82DE2B84;
loc_82DE2B7C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DE2B84:
	// lbz r8,89(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 89);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82de2b68
	if (cr6.eq) goto loc_82DE2B68;
loc_82DE2B90:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82de2bc0
	if (cr6.eq) goto loc_82DE2BC0;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82de2bc0
	if (cr6.lt) goto loc_82DE2BC0;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82DE2BC0:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE2BD4"))) PPC_WEAK_FUNC(sub_82DE2BD4);
PPC_FUNC_IMPL(__imp__sub_82DE2BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE2BD8"))) PPC_WEAK_FUNC(sub_82DE2BD8);
PPC_FUNC_IMPL(__imp__sub_82DE2BD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DE2BE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,89(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 89);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de2c38
	if (!cr6.eq) goto loc_82DE2C38;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82DE2C00:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82de2bd8
	ctx.lr = 0x82DE2C0C;
	sub_82DE2BD8(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82da8c38
	ctx.lr = 0x82DE2C18;
	sub_82DA8C38(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82DE2C28;
	sub_825952B8(ctx, base);
	// lbz r11,89(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 89);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de2c00
	if (cr6.eq) goto loc_82DE2C00;
loc_82DE2C38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE2C40"))) PPC_WEAK_FUNC(sub_82DE2C40);
PPC_FUNC_IMPL(__imp__sub_82DE2C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DE2C48;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,89(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 89);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82de2ccc
	if (!cr6.eq) goto loc_82DE2CCC;
	// lwz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82DE2C80:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82de2c9c
	if (cr6.eq) goto loc_82DE2C9C;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r31.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82de2ca8
	goto loc_82DE2CA8;
loc_82DE2C9C:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_82DE2CA8:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82de2cbc
	if (cr6.eq) goto loc_82DE2CBC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82de2cc0
	goto loc_82DE2CC0;
loc_82DE2CBC:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82DE2CC0:
	// lbz r10,89(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 89);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82de2c80
	if (cr6.eq) goto loc_82DE2C80;
loc_82DE2CCC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de2d2c
	if (cr6.eq) goto loc_82DE2D2C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82de2d24
	if (!cr6.eq) goto loc_82DE2D24;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82de21c8
	ctx.lr = 0x82DE2D08;
	sub_82DE21C8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DE2D24:
	// bl 0x82ef5be0
	ctx.lr = 0x82DE2D28;
	sub_82EF5BE0(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82DE2D2C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82de2d70
	if (!cr6.lt) goto loc_82DE2D70;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de21c8
	ctx.lr = 0x82DE2D54;
	sub_82DE21C8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DE2D70:
	// addi r3,r27,32
	ctx.r3.s64 = ctx.r27.s64 + 32;
	// bl 0x82da8c38
	ctx.lr = 0x82DE2D78;
	sub_82DA8C38(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82DE2D8C;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r10,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE2DA4"))) PPC_WEAK_FUNC(sub_82DE2DA4);
PPC_FUNC_IMPL(__imp__sub_82DE2DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE2DA8"))) PPC_WEAK_FUNC(sub_82DE2DA8);
PPC_FUNC_IMPL(__imp__sub_82DE2DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82DE2DB0;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DE2DBC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de2f64
	if (cr6.eq) goto loc_82DE2F64;
	// bl 0x82dad2e0
	ctx.lr = 0x82DE2DC8;
	sub_82DAD2E0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de2f64
	if (cr6.eq) goto loc_82DE2F64;
	// bl 0x82b85ff8
	ctx.lr = 0x82DE2DD8;
	sub_82B85FF8(ctx, base);
	// lwz r11,104(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bge cr6,0x82de2f64
	if (!cr6.lt) goto loc_82DE2F64;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82de2f64
	if (cr6.eq) goto loc_82DE2F64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r24,2
	ctx.r24.s64 = 2;
loc_82DE2E00:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lbz r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// lwz r3,564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne cr6,0x82de2e38
	if (!cr6.eq) goto loc_82DE2E38;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x82de2e44
	goto loc_82DE2E44;
loc_82DE2E38:
	// bl 0x82e744c8
	ctx.lr = 0x82DE2E3C;
	sub_82E744C8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82DE2E44:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de2e64
	if (cr6.eq) goto loc_82DE2E64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 564);
	// bl 0x82e74468
	ctx.lr = 0x82DE2E5C;
	sub_82E74468(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82DE2E64:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de2e98
	if (cr6.eq) goto loc_82DE2E98;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
loc_82DE2E74:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82de2e90
	if (cr6.eq) goto loc_82DE2E90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82de2e74
	if (!cr6.eq) goto loc_82DE2E74;
	// b 0x82de2e98
	goto loc_82DE2E98;
loc_82DE2E90:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82de2f28
	if (!cr6.eq) goto loc_82DE2F28;
loc_82DE2E98:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef5b50
	ctx.lr = 0x82DE2EA0;
	sub_82EF5B50(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r27,96
	ctx.r4.s64 = ctx.r27.s64 + 96;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82de2778
	ctx.lr = 0x82DE2EB0;
	sub_82DE2778(ctx, base);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r30,7
	ctx.r10.s64 = ctx.r30.s64 + 7;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r31,116
	ctx.r11.s64 = ctx.r31.s64 + 116;
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r30,r10,r27
	ctx.r30.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lwzx r4,r10,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// bl 0x82c3b448
	ctx.lr = 0x82DE2EDC;
	sub_82C3B448(ctx, base);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de2f10
	if (cr6.eq) goto loc_82DE2F10;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x82DE2F08;
	sub_831CE420(ctx, base);
	// add r9,r29,r31
	ctx.r9.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
loc_82DE2F10:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82de2f48
	if (cr6.eq) goto loc_82DE2F48;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// b 0x82de2f44
	goto loc_82DE2F44;
loc_82DE2F28:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef5b50
	ctx.lr = 0x82DE2F30;
	sub_82EF5B50(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82de2f48
	if (cr6.eq) goto loc_82DE2F48;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82DE2F44:
	// bl 0x825952b8
	ctx.lr = 0x82DE2F48;
	sub_825952B8(ctx, base);
loc_82DE2F48:
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// bne cr6,0x82de2e00
	if (!cr6.eq) goto loc_82DE2E00;
loc_82DE2F64:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE2F6C"))) PPC_WEAK_FUNC(sub_82DE2F6C);
PPC_FUNC_IMPL(__imp__sub_82DE2F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE2F70"))) PPC_WEAK_FUNC(sub_82DE2F70);
PPC_FUNC_IMPL(__imp__sub_82DE2F70) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82de2bd8
	ctx.lr = 0x82DE2F90;
	sub_82DE2BD8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82DE2FC4"))) PPC_WEAK_FUNC(sub_82DE2FC4);
PPC_FUNC_IMPL(__imp__sub_82DE2FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE2FC8"))) PPC_WEAK_FUNC(sub_82DE2FC8);
PPC_FUNC_IMPL(__imp__sub_82DE2FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DE2FD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DE2FF8;
	sub_82595718(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r3,r3,16
	xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r3.s64 = ctx.r3.s64 + 16;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// stb r11,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r11.u8);
	// beq 0x82de3030
	if (cr0.eq) goto loc_82DE3030;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82de20f0
	ctx.lr = 0x82DE3030;
	sub_82DE20F0(ctx, base);
loc_82DE3030:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82de2c40
	ctx.lr = 0x82DE3044;
	sub_82DE2C40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE3050"))) PPC_WEAK_FUNC(sub_82DE3050);
PPC_FUNC_IMPL(__imp__sub_82DE3050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DE3058;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x82de30a4
	if (!cr6.eq) goto loc_82DE30A4;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82de30a4
	if (!cr6.eq) goto loc_82DE30A4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82de2f70
	ctx.lr = 0x82DE308C;
	sub_82DE2F70(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DE30A4:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x82de30d4
	if (cr6.eq) goto loc_82DE30D4;
loc_82DE30AC:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82ef5b50
	ctx.lr = 0x82DE30B8;
	sub_82EF5B50(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de2778
	ctx.lr = 0x82DE30C8;
	sub_82DE2778(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x82de30ac
	if (!cr6.eq) goto loc_82DE30AC;
loc_82DE30D4:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE30E4"))) PPC_WEAK_FUNC(sub_82DE30E4);
PPC_FUNC_IMPL(__imp__sub_82DE30E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE30E8"))) PPC_WEAK_FUNC(sub_82DE30E8);
PPC_FUNC_IMPL(__imp__sub_82DE30E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DE30F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1023
	ctx.r11.s64 = 67043328;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82de3114
	if (!cr6.gt) goto loc_82DE3114;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82DE3114;
	sub_831CC150(ctx, base);
loc_82DE3114:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,6
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 6;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82de31b4
	if (!cr6.lt) goto loc_82DE31B4;
	// li r27,2
	ctx.r27.s64 = 2;
	// rlwinm r28,r4,6,0,25
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82DE3148;
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
	// bl 0x82de23d0
	ctx.lr = 0x82DE316C;
	sub_82DE23D0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r26,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 6;
	// beq cr6,0x82de319c
	if (cr6.eq) goto loc_82DE319C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82c65a10
	ctx.lr = 0x82DE318C;
	sub_82C65A10(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82DE319C;
	sub_825952B8(ctx, base);
loc_82DE319C:
	// rlwinm r11,r26,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82DE31B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE31BC"))) PPC_WEAK_FUNC(sub_82DE31BC);
PPC_FUNC_IMPL(__imp__sub_82DE31BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE31C0"))) PPC_WEAK_FUNC(sub_82DE31C0);
PPC_FUNC_IMPL(__imp__sub_82DE31C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DE31C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r5,116(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// lwzx r4,r9,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x82c3b448
	ctx.lr = 0x82DE3204;
	sub_82C3B448(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,116(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 116);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r28,r4
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de3250
	if (cr6.eq) goto loc_82DE3250;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x831ce420
	ctx.lr = 0x82DE3248;
	sub_831CE420(ctx, base);
	// add r9,r27,r28
	ctx.r9.u64 = ctx.r27.u64 + ctx.r28.u64;
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
loc_82DE3250:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x82DE3268;
	sub_835977D8(ctx, base);
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi. r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x82de32a0
	if (cr0.eq) goto loc_82DE32A0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r11,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
loc_82DE3294:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x82de3294
	if (cr6.lt) goto loc_82DE3294;
loc_82DE32A0:
	// lwz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi. r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x82de32d8
	if (cr0.eq) goto loc_82DE32D8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r11,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
loc_82DE32CC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x82de32cc
	if (cr6.lt) goto loc_82DE32CC;
loc_82DE32D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE32E0"))) PPC_WEAK_FUNC(sub_82DE32E0);
PPC_FUNC_IMPL(__imp__sub_82DE32E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1023
	ctx.r10.s64 = 67043328;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r10,r7,6
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 6;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bge cr6,0x82de3310
	if (!cr6.lt) goto loc_82DE3310;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82DE3310:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,6
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 6;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x82de3340
	if (cr6.lt) goto loc_82DE3340;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82DE3340:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x82de334c
	if (!cr6.lt) goto loc_82DE334C;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_82DE334C:
	// b 0x82de30e8
	sub_82DE30E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE3350"))) PPC_WEAK_FUNC(sub_82DE3350);
PPC_FUNC_IMPL(__imp__sub_82DE3350) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE3354"))) PPC_WEAK_FUNC(sub_82DE3354);
PPC_FUNC_IMPL(__imp__sub_82DE3354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE3358"))) PPC_WEAK_FUNC(sub_82DE3358);
PPC_FUNC_IMPL(__imp__sub_82DE3358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DE3360;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x82de3388
	if (!cr6.lt) goto loc_82DE3388;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82de338c
	if (!cr6.gt) goto loc_82DE338C;
loc_82DE3388:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82DE338C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82de33cc
	if (cr6.eq) goto loc_82DE33CC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// srawi r30,r8,6
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 6;
	// bne cr6,0x82de33bc
	if (!cr6.eq) goto loc_82DE33BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de32e0
	ctx.lr = 0x82DE33BC;
	sub_82DE32E0(ctx, base);
loc_82DE33BC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82de33e4
	goto loc_82DE33E4;
loc_82DE33CC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82de33e4
	if (!cr6.eq) goto loc_82DE33E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de32e0
	ctx.lr = 0x82DE33E4;
	sub_82DE32E0(ctx, base);
loc_82DE33E4:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82de340c
	if (cr6.eq) goto loc_82DE340C;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x82da8fd0
	ctx.lr = 0x82DE3404;
	sub_82DA8FD0(ctx, base);
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// stw r10,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r10.u32);
loc_82DE340C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE3420"))) PPC_WEAK_FUNC(sub_82DE3420);
PPC_FUNC_IMPL(__imp__sub_82DE3420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DE3428;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwzx r31,r9,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwz r7,116(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 116);
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, xer);
	// beq cr6,0x82de34b0
	if (cr6.eq) goto loc_82DE34B0;
	// addi r28,r3,96
	ctx.r28.s64 = ctx.r3.s64 + 96;
loc_82DE3460:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82de2b50
	ctx.lr = 0x82DE3478;
	sub_82DE2B50(ctx, base);
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de3494
	if (cr6.eq) goto loc_82DE3494;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82de3358
	ctx.lr = 0x82DE3494;
	sub_82DE3358(ctx, base);
loc_82DE3494:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,116(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x82de3460
	if (!cr6.eq) goto loc_82DE3460;
loc_82DE34B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE34B8"))) PPC_WEAK_FUNC(sub_82DE34B8);
PPC_FUNC_IMPL(__imp__sub_82DE34B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DE34C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,-8084
	ctx.r10.s64 = ctx.r11.s64 + -8084;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x82d482c0
	ctx.lr = 0x82DE34DC;
	sub_82D482C0(ctx, base);
	// lwz r3,348(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 348);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de34ec
	if (cr6.eq) goto loc_82DE34EC;
	// bl 0x8259b510
	ctx.lr = 0x82DE34EC;
	sub_8259B510(ctx, base);
loc_82DE34EC:
	// addi r11,r28,344
	ctx.r11.s64 = ctx.r28.s64 + 344;
	// li r30,21
	ctx.r30.s64 = 21;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_82DE34F8:
	// lwzu r3,-8(r31)
	ea = -8 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de3508
	if (cr6.eq) goto loc_82DE3508;
	// bl 0x8259b510
	ctx.lr = 0x82DE3508;
	sub_8259B510(ctx, base);
loc_82DE3508:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x82de34f8
	if (!cr0.lt) goto loc_82DE34F8;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r31,r28,160
	ctx.r31.s64 = ctx.r28.s64 + 160;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82DE3520:
	// lwzu r4,-16(r31)
	ea = -16 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82de3538
	if (cr6.eq) goto loc_82DE3538;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82DE3538;
	sub_825952B8(ctx, base);
loc_82DE3538:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bge 0x82de3520
	if (!cr0.lt) goto loc_82DE3520;
	// lwz r6,100(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r4,r28,96
	ctx.r4.s64 = ctx.r28.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82de3050
	ctx.lr = 0x82DE3560;
	sub_82DE3050(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,100(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x82DE3570;
	sub_825952B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831032a0
	ctx.lr = 0x82DE3578;
	sub_831032A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE3580"))) PPC_WEAK_FUNC(sub_82DE3580);
PPC_FUNC_IMPL(__imp__sub_82DE3580) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82de3590
	sub_82DE3590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE3588"))) PPC_WEAK_FUNC(sub_82DE3588);
PPC_FUNC_IMPL(__imp__sub_82DE3588) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82de3590
	sub_82DE3590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE3590"))) PPC_WEAK_FUNC(sub_82DE3590);
PPC_FUNC_IMPL(__imp__sub_82DE3590) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r8,r11,-8044
	ctx.r8.s64 = ctx.r11.s64 + -8044;
	// addi r7,r10,-8056
	ctx.r7.s64 = ctx.r10.s64 + -8056;
	// addi r6,r9,-8060
	ctx.r6.s64 = ctx.r9.s64 + -8060;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82b6a590
	ctx.lr = 0x82DE35D4;
	sub_82B6A590(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82de35ec
	if (cr6.eq) goto loc_82DE35EC;
	// bl 0x82416268
	ctx.lr = 0x82DE35E8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DE35EC:
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

__attribute__((alias("__imp__sub_82DE3604"))) PPC_WEAK_FUNC(sub_82DE3604);
PPC_FUNC_IMPL(__imp__sub_82DE3604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE3608"))) PPC_WEAK_FUNC(sub_82DE3608);
PPC_FUNC_IMPL(__imp__sub_82DE3608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82DE3610;
	__savegprlr_20(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83103328
	ctx.lr = 0x82DE361C;
	sub_83103328(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-8084
	ctx.r10.s64 = ctx.r11.s64 + -8084;
	// stw r30,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r30,80(r28)
	PPC_STORE_U64(ctx.r28.u32 + 80, ctx.r30.u64);
	// addi r3,r28,96
	ctx.r3.s64 = ctx.r28.s64 + 96;
	// std r30,88(r28)
	PPC_STORE_U64(ctx.r28.u32 + 88, ctx.r30.u64);
	// bl 0x82ef6270
	ctx.lr = 0x82DE3648;
	sub_82EF6270(ctx, base);
	// li r10,22
	ctx.r10.s64 = 22;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,112(r28)
	PPC_STORE_U32(ctx.r28.u32 + 112, ctx.r30.u32);
	// stw r30,116(r28)
	PPC_STORE_U32(ctx.r28.u32 + 116, ctx.r30.u32);
	// addi r22,r28,112
	ctx.r22.s64 = ctx.r28.s64 + 112;
	// stw r30,120(r28)
	PPC_STORE_U32(ctx.r28.u32 + 120, ctx.r30.u32);
	// addi r11,r28,164
	ctx.r11.s64 = ctx.r28.s64 + 164;
	// stw r30,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r30.u32);
	// stw r30,132(r28)
	PPC_STORE_U32(ctx.r28.u32 + 132, ctx.r30.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r30,136(r28)
	PPC_STORE_U32(ctx.r28.u32 + 136, ctx.r30.u32);
	// stw r30,144(r28)
	PPC_STORE_U32(ctx.r28.u32 + 144, ctx.r30.u32);
	// stw r30,148(r28)
	PPC_STORE_U32(ctx.r28.u32 + 148, ctx.r30.u32);
	// stw r30,152(r28)
	PPC_STORE_U32(ctx.r28.u32 + 152, ctx.r30.u32);
	// stw r9,160(r28)
	PPC_STORE_U32(ctx.r28.u32 + 160, ctx.r9.u32);
	// stb r30,164(r28)
	PPC_STORE_U8(ctx.r28.u32 + 164, ctx.r30.u8);
	// stb r30,165(r28)
	PPC_STORE_U8(ctx.r28.u32 + 165, ctx.r30.u8);
	// stb r30,166(r28)
	PPC_STORE_U8(ctx.r28.u32 + 166, ctx.r30.u8);
	// stb r30,167(r28)
	PPC_STORE_U8(ctx.r28.u32 + 167, ctx.r30.u8);
loc_82DE3694:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stwu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82de3694
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DE3694;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r30,344(r28)
	PPC_STORE_U32(ctx.r28.u32 + 344, ctx.r30.u32);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stw r30,348(r28)
	PPC_STORE_U32(ctx.r28.u32 + 348, ctx.r30.u32);
	// addi r20,r28,344
	ctx.r20.s64 = ctx.r28.s64 + 344;
	// addi r26,r28,172
	ctx.r26.s64 = ctx.r28.s64 + 172;
	// li r23,22
	ctx.r23.s64 = 22;
	// li r21,29
	ctx.r21.s64 = 29;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r24,r11,17524
	ctx.r24.s64 = ctx.r11.s64 + 17524;
	// addi r25,r10,272
	ctx.r25.s64 = ctx.r10.s64 + 272;
loc_82DE36CC:
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,368
	ctx.r4.s64 = 368;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82DE36E0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de36f8
	if (cr6.eq) goto loc_82DE36F8;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82eab5b0
	ctx.lr = 0x82DE36F0;
	sub_82EAB5B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82de36fc
	goto loc_82DE36FC;
loc_82DE36F8:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82DE36FC:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x82DE3710;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de373c
	if (cr6.eq) goto loc_82DE373C;
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x8257fa88
	ctx.lr = 0x82DE372C;
	sub_8257FA88(ctx, base);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// b 0x82de3740
	goto loc_82DE3740;
loc_82DE373C:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82DE3740:
	// stw r29,-4(r26)
	PPC_STORE_U32(ctx.r26.u32 + -4, ctx.r29.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82de37a4
	if (cr6.eq) goto loc_82DE37A4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82de3790
	if (cr6.eq) goto loc_82DE3790;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x82DE3768;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82de3790
	if (cr6.lt) goto loc_82DE3790;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8257fb60
	ctx.lr = 0x82DE378C;
	sub_8257FB60(ctx, base);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
loc_82DE3790:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de37a0
	if (cr6.eq) goto loc_82DE37A0;
	// bl 0x8259b510
	ctx.lr = 0x82DE37A0;
	sub_8259B510(ctx, base);
loc_82DE37A0:
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_82DE37A4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82de37b4
	if (cr6.eq) goto loc_82DE37B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259b510
	ctx.lr = 0x82DE37B4;
	sub_8259B510(ctx, base);
loc_82DE37B4:
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// bne 0x82de36cc
	if (!cr0.eq) goto loc_82DE36CC;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x82DE37D4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de37ec
	if (cr6.eq) goto loc_82DE37EC;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82e7d7e0
	ctx.lr = 0x82DE37E4;
	sub_82E7D7E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82de37f0
	goto loc_82DE37F0;
loc_82DE37EC:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82DE37F0:
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x82DE3804;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de3838
	if (cr6.eq) goto loc_82DE3838;
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x8257fa88
	ctx.lr = 0x82DE3820;
	sub_8257FA88(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// addi r10,r11,272
	ctx.r10.s64 = ctx.r11.s64 + 272;
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82de383c
	goto loc_82DE383C;
loc_82DE3838:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82DE383C:
	// stw r29,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82de38a0
	if (cr6.eq) goto loc_82DE38A0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82de388c
	if (cr6.eq) goto loc_82DE388C;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x82DE3864;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82de388c
	if (cr6.lt) goto loc_82DE388C;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8257fb60
	ctx.lr = 0x82DE3888;
	sub_8257FB60(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
loc_82DE388C:
	// lwz r3,4(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de389c
	if (cr6.eq) goto loc_82DE389C;
	// bl 0x8259b510
	ctx.lr = 0x82DE389C;
	sub_8259B510(ctx, base);
loc_82DE389C:
	// stw r31,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r31.u32);
loc_82DE38A0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82de38b0
	if (cr6.eq) goto loc_82DE38B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259b510
	ctx.lr = 0x82DE38B0;
	sub_8259B510(ctx, base);
loc_82DE38B0:
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x82DE38BC;
	sub_82AD5E38(ctx, base);
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r3,r28,128
	ctx.r3.s64 = ctx.r28.s64 + 128;
	// bl 0x82ad5e38
	ctx.lr = 0x82DE38C8;
	sub_82AD5E38(ctx, base);
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r3,r28,144
	ctx.r3.s64 = ctx.r28.s64 + 144;
	// bl 0x82ad5e38
	ctx.lr = 0x82DE38D4;
	sub_82AD5E38(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE38E0"))) PPC_WEAK_FUNC(sub_82DE38E0);
PPC_FUNC_IMPL(__imp__sub_82DE38E0) {
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
	// bl 0x82de34b8
	ctx.lr = 0x82DE3900;
	sub_82DE34B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de3918
	if (cr6.eq) goto loc_82DE3918;
	// bl 0x82416268
	ctx.lr = 0x82DE3914;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DE3918:
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

__attribute__((alias("__imp__sub_82DE3930"))) PPC_WEAK_FUNC(sub_82DE3930);
PPC_FUNC_IMPL(__imp__sub_82DE3930) {
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
	// li r4,352
	ctx.r4.s64 = 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DE395C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de3980
	if (cr6.eq) goto loc_82DE3980;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82de3608
	ctx.lr = 0x82DE396C;
	sub_82DE3608(ctx, base);
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
loc_82DE3980:
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

__attribute__((alias("__imp__sub_82DE3998"))) PPC_WEAK_FUNC(sub_82DE3998);
PPC_FUNC_IMPL(__imp__sub_82DE3998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DE39A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de2b50
	ctx.lr = 0x82DE39CC;
	sub_82DE2B50(ctx, base);
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82de3a8c
	if (!cr6.eq) goto loc_82DE3A8C;
	// bl 0x82dad2e0
	ctx.lr = 0x82DE39E0;
	sub_82DAD2E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82b6b738
	ctx.lr = 0x82DE39EC;
	sub_82B6B738(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82de3a80
	if (cr6.eq) goto loc_82DE3A80;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82db29e0
	ctx.lr = 0x82DE3A04;
	sub_82DB29E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de3a80
	if (cr6.eq) goto loc_82DE3A80;
	// lbz r10,405(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 405);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82de3a80
	if (!cr6.eq) goto loc_82DE3A80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82de1e98
	ctx.lr = 0x82DE3A24;
	sub_82DE1E98(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,364
	ctx.r4.s64 = ctx.r1.s64 + 364;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE3A40;
	sub_8259CB28(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ld r9,328(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// bl 0x82de2010
	ctx.lr = 0x82DE3A60;
	sub_82DE2010(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de2fc8
	ctx.lr = 0x82DE3A70;
	sub_82DE2FC8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82da8c38
	ctx.lr = 0x82DE3A78;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82da8c38
	ctx.lr = 0x82DE3A80;
	sub_82DA8C38(ctx, base);
loc_82DE3A80:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82b6a860
	ctx.lr = 0x82DE3A88;
	sub_82B6A860(ctx, base);
	// b 0x82de3a9c
	goto loc_82DE3A9C;
loc_82DE3A8C:
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
loc_82DE3A9C:
	// lwz r31,100(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82de3ac4
	if (cr6.eq) goto loc_82DE3AC4;
loc_82DE3AB0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef5b50
	ctx.lr = 0x82DE3AB8;
	sub_82EF5B50(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82de3ab0
	if (!cr6.eq) goto loc_82DE3AB0;
loc_82DE3AC4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de31c0
	ctx.lr = 0x82DE3AD8;
	sub_82DE31C0(ctx, base);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE3AE0"))) PPC_WEAK_FUNC(sub_82DE3AE0);
PPC_FUNC_IMPL(__imp__sub_82DE3AE0) {
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
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eab508
	ctx.lr = 0x82DE3B04;
	sub_82EAB508(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x82DE3B08;
	sub_82D860F0(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r3,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r3.u32);
	// addi r30,r31,160
	ctx.r30.s64 = ctx.r31.s64 + 160;
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// bl 0x82dad2e0
	ctx.lr = 0x82DE3B1C;
	sub_82DAD2E0(ctx, base);
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de3b30
	if (cr6.eq) goto loc_82DE3B30;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82e74498
	ctx.lr = 0x82DE3B30;
	sub_82E74498(ctx, base);
loc_82DE3B30:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de3b70
	if (!cr6.eq) goto loc_82DE3B70;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r8,r11,-8044
	ctx.r8.s64 = ctx.r11.s64 + -8044;
	// addi r7,r10,-8056
	ctx.r7.s64 = ctx.r10.s64 + -8056;
	// addi r6,r9,-8060
	ctx.r6.s64 = ctx.r9.s64 + -8060;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r7.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r6,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r6.u32);
	// bl 0x82b6a590
	ctx.lr = 0x82DE3B68;
	sub_82B6A590(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82de3bb8
	goto loc_82DE3BB8;
loc_82DE3B70:
	// bl 0x82d860f0
	ctx.lr = 0x82DE3B74;
	sub_82D860F0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de3998
	ctx.lr = 0x82DE3B88;
	sub_82DE3998(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r8,r11,-8044
	ctx.r8.s64 = ctx.r11.s64 + -8044;
	// addi r7,r10,-8056
	ctx.r7.s64 = ctx.r10.s64 + -8056;
	// addi r6,r9,-8060
	ctx.r6.s64 = ctx.r9.s64 + -8060;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r7.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r6,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r6.u32);
	// bl 0x82b6a590
	ctx.lr = 0x82DE3BB4;
	sub_82B6A590(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82DE3BB8:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
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

__attribute__((alias("__imp__sub_82DE3BD0"))) PPC_WEAK_FUNC(sub_82DE3BD0);
PPC_FUNC_IMPL(__imp__sub_82DE3BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DE3BD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,168
	ctx.r30.s64 = ctx.r3.s64 + 168;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// li r28,22
	ctx.r28.s64 = 22;
loc_82DE3BF0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82de3d08
	if (cr6.eq) goto loc_82DE3D08;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r29,96
	ctx.r4.s64 = ctx.r29.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82de2b50
	ctx.lr = 0x82DE3C24;
	sub_82DE2B50(ctx, base);
	// lwz r9,100(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82de3c3c
	if (cr6.eq) goto loc_82DE3C3C;
	// lbz r10,345(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 345);
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
loc_82DE3C3C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82de3998
	ctx.lr = 0x82DE3C4C;
	sub_82DE3998(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82e744f8
	ctx.lr = 0x82DE3C54;
	sub_82E744F8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// beq cr6,0x82de3ca8
	if (cr6.eq) goto loc_82DE3CA8;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x8257fad0
	ctx.lr = 0x82DE3C80;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82de3ca8
	if (cr6.lt) goto loc_82DE3CA8;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8257fb60
	ctx.lr = 0x82DE3CA4;
	sub_8257FB60(ctx, base);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
loc_82DE3CA8:
	// bl 0x82dad2e0
	ctx.lr = 0x82DE3CAC;
	sub_82DAD2E0(ctx, base);
	// lwz r11,564(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de3cc4
	if (!cr6.eq) goto loc_82DE3CC4;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// b 0x82de3ce8
	goto loc_82DE3CE8;
loc_82DE3CC4:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lbz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 344);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de3cd8
	if (cr6.eq) goto loc_82DE3CD8;
	// bl 0x82e744f8
	ctx.lr = 0x82DE3CD8;
	sub_82E744F8(ctx, base);
loc_82DE3CD8:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x82e744b0
	ctx.lr = 0x82DE3CE4;
	sub_82E744B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82DE3CE8:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de3cf8
	if (cr6.eq) goto loc_82DE3CF8;
	// bl 0x8259b510
	ctx.lr = 0x82DE3CF8;
	sub_8259B510(ctx, base);
loc_82DE3CF8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de3d08
	if (cr6.eq) goto loc_82DE3D08;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82DE3D08:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82de3bf0
	if (!cr0.eq) goto loc_82DE3BF0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE3D20"))) PPC_WEAK_FUNC(sub_82DE3D20);
PPC_FUNC_IMPL(__imp__sub_82DE3D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DE3D28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82de3d4c
	if (!cr6.eq) goto loc_82DE3D4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DE3D4C:
	// lwz r11,360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82de3da8
	if (!cr6.gt) goto loc_82DE3DA8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82DE3D60:
	// lwz r11,344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// ldx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r31.u32);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x82de3998
	ctx.lr = 0x82DE3D90;
	sub_82DE3998(ctx, base);
	// lwz r6,344(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r5,360(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 360);
	// cmplw cr6,r30,r5
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, xer);
	// blt cr6,0x82de3d60
	if (cr6.lt) goto loc_82DE3D60;
loc_82DE3DA8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,167(r29)
	PPC_STORE_U8(ctx.r29.u32 + 167, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE3DBC"))) PPC_WEAK_FUNC(sub_82DE3DBC);
PPC_FUNC_IMPL(__imp__sub_82DE3DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE3DC0"))) PPC_WEAK_FUNC(sub_82DE3DC0);
PPC_FUNC_IMPL(__imp__sub_82DE3DC0) {
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
	ctx.lr = 0x82DE3DC8;
	__savegprlr_15(ctx, base);
	// stwu r1,-1104(r1)
	ea = -1104 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DE3DD4;
	sub_82D86078(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r18,76(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x82e7d728
	ctx.lr = 0x82DE3DE8;
	sub_82E7D728(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x839a3280
	ctx.lr = 0x82DE3DF0;
	sub_839A3280(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82DE3DF4;
	sub_82D86078(ctx, base);
	// li r16,0
	ctx.r16.s64 = 0;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de3e98
	if (cr6.eq) goto loc_82DE3E98;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE3E0C;
	sub_831F81F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82b73340
	ctx.lr = 0x82DE3E18;
	sub_82B73340(ctx, base);
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbbf30
	ctx.lr = 0x82DE3E24;
	sub_82DBBF30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82de3e8c
	if (!cr6.eq) goto loc_82DE3E8C;
	// lwz r3,832(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// bl 0x82dcb990
	ctx.lr = 0x82DE3E38;
	sub_82DCB990(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de3e8c
	if (cr6.eq) goto loc_82DE3E8C;
	// lwz r10,100(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 100);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82de3e8c
	if (cr6.eq) goto loc_82DE3E8C;
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
loc_82DE3E5C:
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82de3998
	ctx.lr = 0x82DE3E74;
	sub_82DE3998(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef5b50
	ctx.lr = 0x82DE3E7C;
	sub_82EF5B50(ctx, base);
	// lwz r10,100(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 100);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82de3e5c
	if (!cr6.eq) goto loc_82DE3E5C;
loc_82DE3E8C:
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// lbz r31,905(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 905);
	// bl 0x82b73218
	ctx.lr = 0x82DE3E98;
	sub_82B73218(ctx, base);
loc_82DE3E98:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// li r26,11
	ctx.r26.s64 = 11;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de3eac
	if (!cr6.eq) goto loc_82DE3EAC;
	// li r26,10
	ctx.r26.s64 = 10;
loc_82DE3EAC:
	// addi r25,r17,112
	ctx.r25.s64 = ctx.r17.s64 + 112;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// li r19,2
	ctx.r19.s64 = 2;
loc_82DE3EBC:
	// bl 0x82d86078
	ctx.lr = 0x82DE3EC0;
	sub_82D86078(ctx, base);
	// lwz r27,76(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
loc_82DE3EC4:
	// lwz r10,100(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 100);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82de3f60
	if (cr6.eq) goto loc_82DE3F60;
	// rotlwi r29,r10,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82DE3EE0:
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bne cr6,0x82de3ef0
	if (!cr6.eq) goto loc_82DE3EF0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82DE3EF0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef5b50
	ctx.lr = 0x82DE3EF8;
	sub_82EF5B50(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82de3ee0
	if (!cr6.eq) goto loc_82DE3EE0;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// ble cr6,0x82de3f60
	if (!cr6.gt) goto loc_82DE3F60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r4,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	// bl 0x82dd9520
	ctx.lr = 0x82DE3F24;
	sub_82DD9520(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r6,r3
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, xer);
	// ble cr6,0x82de43f4
	if (!cr6.gt) goto loc_82DE43F4;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x82de3998
	ctx.lr = 0x82DE3F5C;
	sub_82DE3998(ctx, base);
	// b 0x82de3ec4
	goto loc_82DE3EC4;
loc_82DE3F60:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// blt cr6,0x82de3ebc
	if (cr6.lt) goto loc_82DE3EBC;
	// bl 0x82dcbf30
	ctx.lr = 0x82DE3F74;
	sub_82DCBF30(ctx, base);
	// stw r19,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// mr r24,r16
	ctx.r24.u64 = ctx.r16.u64;
	// bl 0x82595718
	ctx.lr = 0x82DE3F94;
	sub_82595718(ctx, base);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r17,96
	ctx.r4.s64 = ctx.r17.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82de2b50
	ctx.lr = 0x82DE3FB0;
	sub_82DE2B50(ctx, base);
	// lwz r11,100(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 100);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82de3ffc
	if (cr6.eq) goto loc_82DE3FFC;
	// lwz r31,4(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82595718
	ctx.lr = 0x82DE3FD8;
	sub_82595718(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r20,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r20.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// beq 0x82de3fec
	if (cr0.eq) goto loc_82DE3FEC;
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
loc_82DE3FEC:
	// stw r3,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r3.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_82DE3FFC:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r22,r16
	ctx.r22.u64 = ctx.r16.u64;
	// ori r23,r11,65534
	ctx.r23.u64 = ctx.r11.u64 | 65534;
loc_82DE4008:
	// stw r19,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r19.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r26,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r9.s32 >> 2;
	// bl 0x82595718
	ctx.lr = 0x82DE4030;
	sub_82595718(ctx, base);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82de417c
	if (cr6.eq) goto loc_82DE417C;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
loc_82DE404C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// ble cr6,0x82de4400
	if (!cr6.gt) goto loc_82DE4400;
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplw cr6,r31,r21
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, xer);
	// beq cr6,0x82de40b8
	if (cr6.eq) goto loc_82DE40B8;
	// lwz r15,4(r30)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r19,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82595718
	ctx.lr = 0x82DE4088;
	sub_82595718(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r15,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r15.u32);
	// beq 0x82de409c
	if (cr0.eq) goto loc_82DE409C;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82DE409C:
	// subf r11,r27,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r27.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82de440c
	if (cr6.lt) goto loc_82DE440C;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_82DE40B8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// blt cr6,0x82de404c
	if (cr6.lt) goto loc_82DE404C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82de417c
	if (cr6.eq) goto loc_82DE417C;
loc_82DE40D0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82dd9520
	ctx.lr = 0x82DE40DC;
	sub_82DD9520(ctx, base);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de40f4
	if (cr6.eq) goto loc_82DE40F4;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
loc_82DE40EC:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bdnz 0x82de40ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DE40EC;
loc_82DE40F4:
	// lwz r29,4(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r19,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r19.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82595718
	ctx.lr = 0x82DE410C;
	sub_82595718(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r20,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r20.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// beq 0x82de4124
	if (cr0.eq) goto loc_82DE4124;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82DE4124:
	// subf r11,r24,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r24.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82de4418
	if (cr6.lt) goto loc_82DE4418;
	// stw r3,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r3.u32);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82de4174
	if (cr6.eq) goto loc_82DE4174;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r19,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DE4170;
	sub_825952B8(ctx, base);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
loc_82DE4174:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x82de40d0
	if (!cr6.eq) goto loc_82DE40D0;
loc_82DE417C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r30.u32);
	// cmplw cr6,r4,r30
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, xer);
	// beq cr6,0x82de41ac
	if (cr6.eq) goto loc_82DE41AC;
loc_82DE4190:
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// stw r19,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r19.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DE41A0;
	sub_825952B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82de4190
	if (!cr6.eq) goto loc_82DE4190;
loc_82DE41AC:
	// stw r19,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r19.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x825952b8
	ctx.lr = 0x82DE41BC;
	sub_825952B8(ctx, base);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// cmpwi cr6,r22,3
	cr6.compare<int32_t>(ctx.r22.s32, 3, xer);
	// blt cr6,0x82de4008
	if (cr6.lt) goto loc_82DE4008;
	// addi r10,r1,592
	ctx.r10.s64 = ctx.r1.s64 + 592;
	// lwz r9,144(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 144);
	// lwz r8,148(r17)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r17.u32 + 148);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r16,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r16.u32);
	// srawi r31,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r7.s32 >> 2;
	// stw r16,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r16.u32);
	// stw r16,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r16.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r16,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r16.u32);
	// stw r16,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r16.u32);
	// sth r16,20(r10)
	PPC_STORE_U16(ctx.r10.u32 + 20, ctx.r16.u16);
	// beq cr6,0x82de422c
	if (cr6.eq) goto loc_82DE422C;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
loc_82DE4208:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82de4424
	if (!cr6.gt) goto loc_82DE4424;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// stwx r8,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x82de4208
	if (cr6.lt) goto loc_82DE4208;
loc_82DE422C:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// ble cr6,0x82de4290
	if (!cr6.gt) goto loc_82DE4290;
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// add. r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82de4290
	if (cr0.eq) goto loc_82DE4290;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82DE4244:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82dd9520
	ctx.lr = 0x82DE4250;
	sub_82DD9520(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82dd9520
	ctx.lr = 0x82DE4260;
	sub_82DD9520(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// beq cr6,0x82de4288
	if (cr6.eq) goto loc_82DE4288;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,592
	ctx.r11.s64 = ctx.r1.s64 + 592;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,592
	ctx.r9.s64 = ctx.r1.s64 + 592;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
loc_82DE4288:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x82de4244
	if (!cr0.eq) goto loc_82DE4244;
loc_82DE4290:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82de4354
	if (cr6.eq) goto loc_82DE4354;
	// addi r28,r1,592
	ctx.r28.s64 = ctx.r1.s64 + 592;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82DE42A0:
	// lwz r30,100(r17)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r17.u32 + 100);
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82de42ec
	if (cr6.eq) goto loc_82DE42EC;
	// rotlwi r29,r30,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
loc_82DE42C8:
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82de42d8
	if (!cr6.eq) goto loc_82DE42D8;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82DE42D8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef5b50
	ctx.lr = 0x82DE42E0;
	sub_82EF5B50(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82de42c8
	if (!cr6.eq) goto loc_82DE42C8;
loc_82DE42EC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82de4328
	if (cr6.eq) goto loc_82DE4328;
	// lwz r31,100(r17)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r17.u32 + 100);
loc_82DE4304:
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82de4314
	if (!cr6.eq) goto loc_82DE4314;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82DE4314:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef5b50
	ctx.lr = 0x82DE431C;
	sub_82EF5B50(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82de4304
	if (!cr6.eq) goto loc_82DE4304;
loc_82DE4328:
	// subfc r11,r27,r29
	xer.ca = ctx.r29.u32 >= ctx.r27.u32;
	ctx.r11.s64 = ctx.r29.s64 - ctx.r27.s64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x82de3998
	ctx.lr = 0x82DE4348;
	sub_82DE3998(ctx, base);
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82de42a0
	if (!cr0.eq) goto loc_82DE42A0;
loc_82DE4354:
	// lwz r30,0(r20)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,11
	ctx.r9.s64 = 720896;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r29,8
	ctx.r29.s64 = 8;
	// ori r27,r9,1
	ctx.r27.u64 = ctx.r9.u64 | 1;
	// cmplw cr6,r30,r20
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r20.u32, xer);
	// addi r26,r11,8980
	ctx.r26.s64 = ctx.r11.s64 + 8980;
	// addi r28,r10,30872
	ctx.r28.s64 = ctx.r10.s64 + 30872;
	// beq cr6,0x82de4474
	if (cr6.eq) goto loc_82DE4474;
loc_82DE437C:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82de2158
	ctx.lr = 0x82DE438C;
	sub_82DE2158(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82de4468
	if (cr6.eq) goto loc_82DE4468;
	// lwz r10,480(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// lwz r11,484(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x82de4444
	if (cr6.lt) goto loc_82DE4444;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x82de4430
	if (!cr6.gt) goto loc_82DE4430;
	// addi r11,r1,488
	ctx.r11.s64 = ctx.r1.s64 + 488;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// stw r29,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r29.u32);
	// addi r9,r1,484
	ctx.r9.s64 = ctx.r1.s64 + 484;
	// stw r11,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r11.u32);
	// stw r10,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r10.u32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// stw r9,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r29,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r29.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8247b270
	ctx.lr = 0x82DE43EC;
	sub_8247B270(ctx, base);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// b 0x82de4434
	goto loc_82DE4434;
loc_82DE43F4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82DE4400;
	sub_831CC188(ctx, base);
loc_82DE4400:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82DE440C;
	sub_831CC188(ctx, base);
loc_82DE440C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// bl 0x831cc150
	ctx.lr = 0x82DE4418;
	sub_831CC150(ctx, base);
loc_82DE4418:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// bl 0x831cc150
	ctx.lr = 0x82DE4424;
	sub_831CC150(ctx, base);
loc_82DE4424:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82DE4430;
	sub_831CC188(ctx, base);
loc_82DE4430:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82DE4434:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de4468
	if (cr6.eq) goto loc_82DE4468;
	// lwz r10,480(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
loc_82DE4444:
	// lwz r9,488(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82de445c
	if (cr0.eq) goto loc_82DE445C;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_82DE445C:
	// lwz r11,480(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r10.u32);
loc_82DE4468:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r30,r20
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r20.u32, xer);
	// bne cr6,0x82de437c
	if (!cr6.eq) goto loc_82DE437C;
loc_82DE4474:
	// lwz r11,480(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de44c4
	if (cr6.eq) goto loc_82DE44C4;
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
loc_82DE4488:
	// lwz r10,488(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x82de3998
	ctx.lr = 0x82DE44B0;
	sub_82DE3998(ctx, base);
	// lwz r8,480(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x82de4488
	if (cr6.lt) goto loc_82DE4488;
loc_82DE44C4:
	// bl 0x82dad2e0
	ctx.lr = 0x82DE44C8;
	sub_82DAD2E0(ctx, base);
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82de44dc
	if (!cr6.eq) goto loc_82DE44DC;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// b 0x82de44e4
	goto loc_82DE44E4;
loc_82DE44DC:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82e74498
	ctx.lr = 0x82DE44E4;
	sub_82E74498(ctx, base);
loc_82DE44E4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de46fc
	if (!cr6.eq) goto loc_82DE46FC;
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// stw r20,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r20.u32);
	// stw r20,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r20.u32);
	// cmplw cr6,r4,r20
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r20.u32, xer);
	// beq cr6,0x82de4520
	if (cr6.eq) goto loc_82DE4520;
loc_82DE4504:
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DE4514;
	sub_825952B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r20
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r20.u32, xer);
	// bne cr6,0x82de4504
	if (!cr6.eq) goto loc_82DE4504;
loc_82DE4520:
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x82DE4530;
	sub_825952B8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r29,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r29.u32);
	// addi r8,r11,30904
	ctx.r8.s64 = ctx.r11.s64 + 30904;
	// stw r29,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r29.u32);
	// addi r7,r10,30892
	ctx.r7.s64 = ctx.r10.s64 + 30892;
	// addi r6,r9,30888
	ctx.r6.s64 = ctx.r9.s64 + 30888;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// addi r5,r1,488
	ctx.r5.s64 = ctx.r1.s64 + 488;
	// stw r7,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r7.u32);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// stw r6,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r6.u32);
	// addi r3,r1,484
	ctx.r3.s64 = ctx.r1.s64 + 484;
	// stw r5,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r5.u32);
	// stw r4,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r4.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r3,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r3.u32);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x8247b7d8
	ctx.lr = 0x82DE4584;
	sub_8247B7D8(ctx, base);
	// lwz r3,488(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// stw r16,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r16.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de45a4
	if (cr6.eq) goto loc_82DE45A4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8247b268
	ctx.lr = 0x82DE459C;
	sub_8247B268(ctx, base);
	// stw r16,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r16.u32);
	// stw r16,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r16.u32);
loc_82DE45A4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,460(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r7,r11,25580
	ctx.r7.s64 = ctx.r11.s64 + 25580;
	// addi r6,r9,25568
	ctx.r6.s64 = ctx.r9.s64 + 25568;
	// addi r5,r8,25548
	ctx.r5.s64 = ctx.r8.s64 + 25548;
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// stw r6,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r6.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r5,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r5.u32);
	// blt cr6,0x82de45e0
	if (cr6.lt) goto loc_82DE45E0;
	// lwz r3,440(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// bl 0x8386d088
	ctx.lr = 0x82DE45E0;
	sub_8386D088(ctx, base);
loc_82DE45E0:
	// lwz r11,432(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// li r31,15
	ctx.r31.s64 = 15;
	// stw r16,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r16.u32);
	// stw r31,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r16,440(r1)
	PPC_STORE_U8(ctx.r1.u32 + 440, ctx.r16.u8);
	// blt cr6,0x82de4604
	if (cr6.lt) goto loc_82DE4604;
	// lwz r3,412(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// bl 0x8386d088
	ctx.lr = 0x82DE4604;
	sub_8386D088(ctx, base);
loc_82DE4604:
	// lwz r11,400(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stw r16,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r16.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r16,412(r1)
	PPC_STORE_U8(ctx.r1.u32 + 412, ctx.r16.u8);
	// blt cr6,0x82de4624
	if (cr6.lt) goto loc_82DE4624;
	// lwz r3,380(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// bl 0x8386d088
	ctx.lr = 0x82DE4624;
	sub_8386D088(ctx, base);
loc_82DE4624:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stw r16,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r16.u32);
	// addi r10,r11,25536
	ctx.r10.s64 = ctx.r11.s64 + 25536;
	// stb r16,380(r1)
	PPC_STORE_U8(ctx.r1.u32 + 380, ctx.r16.u8);
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// stw r10,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r10.u32);
	// bl 0x831cf100
	ctx.lr = 0x82DE4644;
	sub_831CF100(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r8,r9,25556
	ctx.r8.s64 = ctx.r9.s64 + 25556;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// bl 0x82535aa0
	ctx.lr = 0x82DE4658;
	sub_82535AA0(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwz r5,320(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// addi r6,r7,-68
	ctx.r6.s64 = ctx.r7.s64 + -68;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// stw r6,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r6.u32);
	// blt cr6,0x82de4678
	if (cr6.lt) goto loc_82DE4678;
	// lwz r3,300(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// bl 0x8386d088
	ctx.lr = 0x82DE4678;
	sub_8386D088(ctx, base);
loc_82DE4678:
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// stw r16,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r16.u32);
	// stb r16,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r16.u8);
	// bl 0x825458c8
	ctx.lr = 0x82DE468C;
	sub_825458C8(ctx, base);
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82de46a0
	if (cr6.lt) goto loc_82DE46A0;
	// lwz r3,264(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x8386d088
	ctx.lr = 0x82DE46A0;
	sub_8386D088(ctx, base);
loc_82DE46A0:
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// stw r16,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r16.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r16,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r16.u8);
	// blt cr6,0x82de46c0
	if (cr6.lt) goto loc_82DE46C0;
	// lwz r3,216(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x8386d088
	ctx.lr = 0x82DE46C0;
	sub_8386D088(ctx, base);
loc_82DE46C0:
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r16,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r16.u32);
	// stb r16,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r16.u8);
	// bl 0x82450cc0
	ctx.lr = 0x82DE46D4;
	sub_82450CC0(ctx, base);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x8386d088
	ctx.lr = 0x82DE46DC;
	sub_8386D088(ctx, base);
	// stw r16,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r16.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82450950
	ctx.lr = 0x82DE46E8;
	sub_82450950(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x8386d088
	ctx.lr = 0x82DE46F0;
	sub_8386D088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1104
	ctx.r1.s64 = ctx.r1.s64 + 1104;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_82DE46FC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,167(r17)
	PPC_STORE_U8(ctx.r17.u32 + 167, ctx.r11.u8);
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// stw r20,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r20.u32);
	// cmplw cr6,r4,r20
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r20.u32, xer);
	// stw r20,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r20.u32);
	// beq cr6,0x82de4734
	if (cr6.eq) goto loc_82DE4734;
loc_82DE4718:
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DE4728;
	sub_825952B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r20
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r20.u32, xer);
	// bne cr6,0x82de4718
	if (!cr6.eq) goto loc_82DE4718;
loc_82DE4734:
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825952b8
	ctx.lr = 0x82DE4744;
	sub_825952B8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r29,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r29.u32);
	// addi r8,r11,30904
	ctx.r8.s64 = ctx.r11.s64 + 30904;
	// stw r29,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r29.u32);
	// addi r7,r10,30892
	ctx.r7.s64 = ctx.r10.s64 + 30892;
	// addi r6,r9,30888
	ctx.r6.s64 = ctx.r9.s64 + 30888;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// addi r5,r1,488
	ctx.r5.s64 = ctx.r1.s64 + 488;
	// stw r7,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r7.u32);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// stw r6,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r6.u32);
	// addi r3,r1,484
	ctx.r3.s64 = ctx.r1.s64 + 484;
	// stw r5,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r5.u32);
	// stw r4,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r4.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r3,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r3.u32);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x8247b7d8
	ctx.lr = 0x82DE4798;
	sub_8247B7D8(ctx, base);
	// lwz r3,488(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// stw r16,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r16.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de47b8
	if (cr6.eq) goto loc_82DE47B8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8247b268
	ctx.lr = 0x82DE47B0;
	sub_8247B268(ctx, base);
	// stw r16,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r16.u32);
	// stw r16,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r16.u32);
loc_82DE47B8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,460(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r7,r11,25580
	ctx.r7.s64 = ctx.r11.s64 + 25580;
	// addi r6,r9,25568
	ctx.r6.s64 = ctx.r9.s64 + 25568;
	// addi r5,r8,25548
	ctx.r5.s64 = ctx.r8.s64 + 25548;
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// stw r6,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r6.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r5,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r5.u32);
	// blt cr6,0x82de47f4
	if (cr6.lt) goto loc_82DE47F4;
	// lwz r3,440(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// bl 0x8386d088
	ctx.lr = 0x82DE47F4;
	sub_8386D088(ctx, base);
loc_82DE47F4:
	// lwz r11,432(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// li r31,15
	ctx.r31.s64 = 15;
	// stw r16,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r16.u32);
	// stw r31,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r16,440(r1)
	PPC_STORE_U8(ctx.r1.u32 + 440, ctx.r16.u8);
	// blt cr6,0x82de4818
	if (cr6.lt) goto loc_82DE4818;
	// lwz r3,412(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// bl 0x8386d088
	ctx.lr = 0x82DE4818;
	sub_8386D088(ctx, base);
loc_82DE4818:
	// lwz r11,400(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stw r16,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r16.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r16,412(r1)
	PPC_STORE_U8(ctx.r1.u32 + 412, ctx.r16.u8);
	// blt cr6,0x82de4838
	if (cr6.lt) goto loc_82DE4838;
	// lwz r3,380(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// bl 0x8386d088
	ctx.lr = 0x82DE4838;
	sub_8386D088(ctx, base);
loc_82DE4838:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stw r16,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r16.u32);
	// addi r10,r11,25536
	ctx.r10.s64 = ctx.r11.s64 + 25536;
	// stb r16,380(r1)
	PPC_STORE_U8(ctx.r1.u32 + 380, ctx.r16.u8);
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// stw r10,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r10.u32);
	// bl 0x831cf100
	ctx.lr = 0x82DE4858;
	sub_831CF100(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r8,r9,25556
	ctx.r8.s64 = ctx.r9.s64 + 25556;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// bl 0x82535aa0
	ctx.lr = 0x82DE486C;
	sub_82535AA0(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwz r5,320(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// addi r6,r7,-68
	ctx.r6.s64 = ctx.r7.s64 + -68;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// stw r6,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r6.u32);
	// blt cr6,0x82de488c
	if (cr6.lt) goto loc_82DE488C;
	// lwz r3,300(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// bl 0x8386d088
	ctx.lr = 0x82DE488C;
	sub_8386D088(ctx, base);
loc_82DE488C:
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// stw r16,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r16.u32);
	// stb r16,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r16.u8);
	// bl 0x825458c8
	ctx.lr = 0x82DE48A0;
	sub_825458C8(ctx, base);
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82de48b4
	if (cr6.lt) goto loc_82DE48B4;
	// lwz r3,264(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x8386d088
	ctx.lr = 0x82DE48B4;
	sub_8386D088(ctx, base);
loc_82DE48B4:
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// stw r16,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r16.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r16,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r16.u8);
	// blt cr6,0x82de48d4
	if (cr6.lt) goto loc_82DE48D4;
	// lwz r3,216(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x8386d088
	ctx.lr = 0x82DE48D4;
	sub_8386D088(ctx, base);
loc_82DE48D4:
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r16,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r16.u32);
	// stb r16,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r16.u8);
	// bl 0x82450cc0
	ctx.lr = 0x82DE48E8;
	sub_82450CC0(ctx, base);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x8386d088
	ctx.lr = 0x82DE48F0;
	sub_8386D088(ctx, base);
	// stw r16,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r16.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82450950
	ctx.lr = 0x82DE48FC;
	sub_82450950(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x8386d088
	ctx.lr = 0x82DE4904;
	sub_8386D088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1104
	ctx.r1.s64 = ctx.r1.s64 + 1104;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE4910"))) PPC_WEAK_FUNC(sub_82DE4910);
PPC_FUNC_IMPL(__imp__sub_82DE4910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DE4918;
	__savegprlr_27(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82DE4924;
	sub_82DAD2E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de4a8c
	if (cr6.eq) goto loc_82DE4A8C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c5bc60
	ctx.lr = 0x82DE4940;
	sub_82C5BC60(ctx, base);
	// addi r31,r31,344
	ctx.r31.s64 = ctx.r31.s64 + 344;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82de4970
	if (cr6.eq) goto loc_82DE4970;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82c5d148
	ctx.lr = 0x82DE4964;
	sub_82C5D148(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c5d268
	ctx.lr = 0x82DE4970;
	sub_82C5D268(ctx, base);
loc_82DE4970:
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r31,r6
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x82de4a6c
	if (cr6.eq) goto loc_82DE4A6C;
	// li r27,24
	ctx.r27.s64 = 24;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82DE4990:
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82c5cb88
	ctx.lr = 0x82DE499C;
	sub_82C5CB88(ctx, base);
	// lbz r10,453(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 453);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82de4a4c
	if (!cr6.eq) goto loc_82DE4A4C;
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82da8d18
	ctx.lr = 0x82DE49B4;
	sub_82DA8D18(ctx, base);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DE49CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,288(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,412
	ctx.r4.s64 = ctx.r1.s64 + 412;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// stb r9,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r9.u8);
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE49F0;
	sub_8259CB28(ctx, base);
	// ld r6,376(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// stw r5,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r5.u32);
	// stb r11,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r11.u8);
	// bl 0x82da8fd0
	ctx.lr = 0x82DE4A18;
	sub_82DA8FD0(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r29,96
	ctx.r4.s64 = ctx.r29.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// bl 0x82de2fc8
	ctx.lr = 0x82DE4A30;
	sub_82DE2FC8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82da8c38
	ctx.lr = 0x82DE4A38;
	sub_82DA8C38(ctx, base);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x835977d8
	ctx.lr = 0x82DE4A44;
	sub_835977D8(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82da8c38
	ctx.lr = 0x82DE4A4C;
	sub_82DA8C38(ctx, base);
loc_82DE4A4C:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82b6a860
	ctx.lr = 0x82DE4A54;
	sub_82B6A860(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82c5ba08
	ctx.lr = 0x82DE4A5C;
	sub_82C5BA08(ctx, base);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r6
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, xer);
	// bne cr6,0x82de4990
	if (!cr6.eq) goto loc_82DE4990;
loc_82DE4A6C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82c5d148
	ctx.lr = 0x82DE4A7C;
	sub_82C5D148(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x82DE4A8C;
	sub_825952B8(ctx, base);
loc_82DE4A8C:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE4A94"))) PPC_WEAK_FUNC(sub_82DE4A94);
PPC_FUNC_IMPL(__imp__sub_82DE4A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE4A98"))) PPC_WEAK_FUNC(sub_82DE4A98);
PPC_FUNC_IMPL(__imp__sub_82DE4A98) {
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
	ctx.lr = 0x82DE4AA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82DE4AAC;
	sub_82DAD2E0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r28,5
	ctx.r28.s64 = 5;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r27,r11,-9195
	ctx.r27.s64 = ctx.r11.s64 + -9195;
	// bne cr6,0x82de4afc
	if (!cr6.eq) goto loc_82DE4AFC;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// bl 0x82e7e2f8
	ctx.lr = 0x82DE4ACC;
	sub_82E7E2F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de4c08
	if (cr6.eq) goto loc_82DE4C08;
	// addi r4,r27,243
	ctx.r4.s64 = ctx.r27.s64 + 243;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82DE4AE4;
	sub_837B0C10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r27,-39
	ctx.r4.s64 = ctx.r27.s64 + -39;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82DE4AF4;
	sub_837B0C10(ctx, base);
	// li r6,132
	ctx.r6.s64 = 132;
	// b 0x82de4bf8
	goto loc_82DE4BF8;
loc_82DE4AFC:
	// bl 0x82dad2e0
	ctx.lr = 0x82DE4B00;
	sub_82DAD2E0(ctx, base);
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82de4b14
	if (!cr6.eq) goto loc_82DE4B14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82de4b18
	goto loc_82DE4B18;
loc_82DE4B14:
	// bl 0x82e744e0
	ctx.lr = 0x82DE4B18;
	sub_82E744E0(ctx, base);
loc_82DE4B18:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de4b5c
	if (cr6.eq) goto loc_82DE4B5C;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// bl 0x82e7e2f8
	ctx.lr = 0x82DE4B2C;
	sub_82E7E2F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de4c08
	if (cr6.eq) goto loc_82DE4C08;
	// addi r4,r27,355
	ctx.r4.s64 = ctx.r27.s64 + 355;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82DE4B44;
	sub_837B0C10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r27,-38
	ctx.r4.s64 = ctx.r27.s64 + -38;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82DE4B54;
	sub_837B0C10(ctx, base);
	// li r6,137
	ctx.r6.s64 = 137;
	// b 0x82de4bf8
	goto loc_82DE4BF8;
loc_82DE4B5C:
	// bl 0x82dad2e0
	ctx.lr = 0x82DE4B60;
	sub_82DAD2E0(ctx, base);
	// bl 0x82b85ff8
	ctx.lr = 0x82DE4B64;
	sub_82B85FF8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bgt cr6,0x82de4ba4
	if (cr6.gt) goto loc_82DE4BA4;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// bl 0x82e7e2f8
	ctx.lr = 0x82DE4B74;
	sub_82E7E2F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de4c08
	if (cr6.eq) goto loc_82DE4C08;
	// addi r4,r27,467
	ctx.r4.s64 = ctx.r27.s64 + 467;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82DE4B8C;
	sub_837B0C10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r27,-27
	ctx.r4.s64 = ctx.r27.s64 + -27;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82DE4B9C;
	sub_837B0C10(ctx, base);
	// li r6,142
	ctx.r6.s64 = 142;
	// b 0x82de4bf8
	goto loc_82DE4BF8;
loc_82DE4BA4:
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x82de4c08
	if (cr6.eq) goto loc_82DE4C08;
	// bl 0x83a7d958
	ctx.lr = 0x82DE4BB4;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DE4BB8;
	sub_83524138(ctx, base);
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// cmpld cr6,r3,r11
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, xer);
	// ble cr6,0x82de4c08
	if (!cr6.gt) goto loc_82DE4C08;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// bl 0x82e7e2f8
	ctx.lr = 0x82DE4BCC;
	sub_82E7E2F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de4c08
	if (cr6.eq) goto loc_82DE4C08;
	// addi r4,r27,579
	ctx.r4.s64 = ctx.r27.s64 + 579;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82DE4BE4;
	sub_837B0C10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r27,-26
	ctx.r4.s64 = ctx.r27.s64 + -26;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82DE4BF4;
	sub_837B0C10(ctx, base);
	// li r6,148
	ctx.r6.s64 = 148;
loc_82DE4BF8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e7eb70
	ctx.lr = 0x82DE4C08;
	sub_82E7EB70(ctx, base);
loc_82DE4C08:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de4c1c
	if (cr6.eq) goto loc_82DE4C1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de2da8
	ctx.lr = 0x82DE4C1C;
	sub_82DE2DA8(ctx, base);
loc_82DE4C1C:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82de505c
	if (cr6.gt) goto loc_82DE505C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82de4cec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DE4CEC;
	// bdzf 4*cr6+eq,0x82de4d60
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DE4D60;
	// bdzf 4*cr6+eq,0x82de4da8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DE4DA8;
	// bdzf 4*cr6+eq,0x82de505c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DE505C;
	// bne cr6,0x82de5054
	if (!cr6.eq) goto loc_82DE5054;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de24a0
	ctx.lr = 0x82DE4C4C;
	sub_82DE24A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de4ca4
	if (!cr6.eq) goto loc_82DE4CA4;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// bl 0x82e7e2f8
	ctx.lr = 0x82DE4C60;
	sub_82E7E2F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de505c
	if (cr6.eq) goto loc_82DE505C;
	// addi r4,r27,691
	ctx.r4.s64 = ctx.r27.s64 + 691;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82DE4C78;
	sub_837B0C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r27,-14
	ctx.r4.s64 = ctx.r27.s64 + -14;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82DE4C88;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,164
	ctx.r6.s64 = 164;
	// bl 0x82e7eb70
	ctx.lr = 0x82DE4C9C;
	sub_82E7EB70(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82DE4CA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de4910
	ctx.lr = 0x82DE4CAC;
	sub_82DE4910(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82DE4CB0;
	sub_82DAD2E0(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r4,13
	ctx.r4.s64 = 13;
	// ori r5,r5,37856
	ctx.r5.u64 = ctx.r5.u64 | 37856;
	// bl 0x82dae510
	ctx.lr = 0x82DE4CC0;
	sub_82DAE510(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de3ae0
	ctx.lr = 0x82DE4CC8;
	sub_82DE3AE0(ctx, base);
	// bl 0x83a7d958
	ctx.lr = 0x82DE4CCC;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DE4CD0;
	sub_83524138(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// ori r10,r11,60000
	ctx.r10.u64 = ctx.r11.u64 | 60000;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// std r9,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r9.u64);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82DE4CEC:
	// lbz r11,165(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 165);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de4d28
	if (cr6.eq) goto loc_82DE4D28;
	// lbz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 164);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82de4d10
	if (!cr6.eq) goto loc_82DE4D10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de3ae0
	ctx.lr = 0x82DE4D0C;
	sub_82DE3AE0(ctx, base);
	// b 0x82de4d20
	goto loc_82DE4D20;
loc_82DE4D10:
	// bl 0x82dad2e0
	ctx.lr = 0x82DE4D14;
	sub_82DAD2E0(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82dafab0
	ctx.lr = 0x82DE4D20;
	sub_82DAFAB0(ctx, base);
loc_82DE4D20:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 165, ctx.r11.u8);
loc_82DE4D28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de3bd0
	ctx.lr = 0x82DE4D30;
	sub_82DE3BD0(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82DE4D34;
	sub_82DAD2E0(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82dafaf8
	ctx.lr = 0x82DE4D40;
	sub_82DAFAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82de505c
	if (!cr6.eq) goto loc_82DE505C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r29,166(r31)
	PPC_STORE_U8(ctx.r31.u32 + 166, ctx.r29.u8);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82DE4D60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de26d0
	ctx.lr = 0x82DE4D68;
	sub_82DE26D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de4d98
	if (cr6.eq) goto loc_82DE4D98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de3dc0
	ctx.lr = 0x82DE4D7C;
	sub_82DE3DC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de505c
	if (cr6.eq) goto loc_82DE505C;
	// bl 0x83a7d958
	ctx.lr = 0x82DE4D8C;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DE4D90;
	sub_83524138(ctx, base);
	// addi r11,r3,3000
	ctx.r11.s64 = ctx.r3.s64 + 3000;
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
loc_82DE4D98:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d482c0
	ctx.lr = 0x82DE4DA0;
	sub_82D482C0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82DE4DA8:
	// bl 0x83a7d958
	ctx.lr = 0x82DE4DAC;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DE4DB0;
	sub_83524138(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de26d0
	ctx.lr = 0x82DE4DBC;
	sub_82DE26D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de4de4
	if (cr6.eq) goto loc_82DE4DE4;
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// cmpld cr6,r30,r11
	cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, xer);
	// ble cr6,0x82de4de4
	if (!cr6.gt) goto loc_82DE4DE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de3dc0
	ctx.lr = 0x82DE4DDC;
	sub_82DE3DC0(ctx, base);
	// addi r11,r30,3000
	ctx.r11.s64 = ctx.r30.s64 + 3000;
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
loc_82DE4DE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de26d0
	ctx.lr = 0x82DE4DEC;
	sub_82DE26D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de4e14
	if (cr6.eq) goto loc_82DE4E14;
	// lbz r11,167(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 167);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de4e14
	if (!cr6.eq) goto loc_82DE4E14;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82DE4E14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de26d0
	ctx.lr = 0x82DE4E1C;
	sub_82DE26D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de4e3c
	if (!cr6.eq) goto loc_82DE4E3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de3d20
	ctx.lr = 0x82DE4E30;
	sub_82DE3D20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de505c
	if (cr6.eq) goto loc_82DE505C;
loc_82DE4E3C:
	// bl 0x82d86078
	ctx.lr = 0x82DE4E40;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82de4e94
	if (!cr6.eq) goto loc_82DE4E94;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// bl 0x82e7e2f8
	ctx.lr = 0x82DE4E50;
	sub_82E7E2F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de505c
	if (cr6.eq) goto loc_82DE505C;
	// addi r4,r27,803
	ctx.r4.s64 = ctx.r27.s64 + 803;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82DE4E68;
	sub_837B0C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r27,-6
	ctx.r4.s64 = ctx.r27.s64 + -6;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82DE4E78;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,243
	ctx.r6.s64 = 243;
	// bl 0x82e7eb70
	ctx.lr = 0x82DE4E8C;
	sub_82E7EB70(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82DE4E94:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE4E9C;
	sub_831F81F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d860f0
	ctx.lr = 0x82DE4EA4;
	sub_82D860F0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82de2b50
	ctx.lr = 0x82DE4EB8;
	sub_82DE2B50(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de4f5c
	if (cr6.eq) goto loc_82DE4F5C;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82de4ef4
	if (cr0.eq) goto loc_82DE4EF4;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82de4ef8
	goto loc_82DE4EF8;
loc_82DE4EF4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82DE4EF8:
	// stw r11,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r11.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82de4f1c
	if (cr0.eq) goto loc_82DE4F1C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82de4f20
	goto loc_82DE4F20;
loc_82DE4F1C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82DE4F20:
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82b73340
	ctx.lr = 0x82DE4F2C;
	sub_82B73340(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dbbf30
	ctx.lr = 0x82DE4F38;
	sub_82DBBF30(ctx, base);
	// lwz r3,432(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x82dcb990
	ctx.lr = 0x82DE4F40;
	sub_82DCB990(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de4f54
	if (cr6.eq) goto loc_82DE4F54;
	// lwz r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// stw r11,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r11.u32);
loc_82DE4F54:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82b73218
	ctx.lr = 0x82DE4F5C;
	sub_82B73218(ctx, base);
loc_82DE4F5C:
	// bl 0x82d86078
	ctx.lr = 0x82DE4F60;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82de4fb4
	if (!cr6.eq) goto loc_82DE4FB4;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// bl 0x82e7e2f8
	ctx.lr = 0x82DE4F70;
	sub_82E7E2F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de505c
	if (cr6.eq) goto loc_82DE505C;
	// addi r4,r27,915
	ctx.r4.s64 = ctx.r27.s64 + 915;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82DE4F88;
	sub_837B0C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82DE4F98;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,275
	ctx.r6.s64 = 275;
	// bl 0x82e7eb70
	ctx.lr = 0x82DE4FAC;
	sub_82E7EB70(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82DE4FB4:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DE4FBC;
	sub_831F81F8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x82de502c
	if (cr6.eq) goto loc_82DE502C;
loc_82DE4FDC:
	// addi r5,r30,80
	ctx.r5.s64 = ctx.r30.s64 + 80;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82de2438
	ctx.lr = 0x82DE4FEC;
	sub_82DE2438(ctx, base);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// bl 0x82ef5b50
	ctx.lr = 0x82DE501C;
	sub_82EF5B50(ctx, base);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// bne cr6,0x82de4fdc
	if (!cr6.eq) goto loc_82DE4FDC;
loc_82DE502C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 184, ctx.r11.u32);
	// stw r10,188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 188, ctx.r10.u32);
	// bl 0x82d482c0
	ctx.lr = 0x82DE5044;
	sub_82D482C0(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82DE5054:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de1f20
	ctx.lr = 0x82DE505C;
	sub_82DE1F20(ctx, base);
loc_82DE505C:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE5064"))) PPC_WEAK_FUNC(sub_82DE5064);
PPC_FUNC_IMPL(__imp__sub_82DE5064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE5068"))) PPC_WEAK_FUNC(sub_82DE5068);
PPC_FUNC_IMPL(__imp__sub_82DE5068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r3,-24928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24928);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE5074"))) PPC_WEAK_FUNC(sub_82DE5074);
PPC_FUNC_IMPL(__imp__sub_82DE5074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE5078"))) PPC_WEAK_FUNC(sub_82DE5078);
PPC_FUNC_IMPL(__imp__sub_82DE5078) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r11,-24928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24928);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de50dc
	if (cr6.eq) goto loc_82DE50DC;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82DE50AC;
	sub_82595150(ctx, base);
	// lwz r3,-24928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24928);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de50cc
	if (cr6.eq) goto loc_82DE50CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DE50CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DE50CC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82DE50D4;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-24928(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24928, ctx.r11.u32);
loc_82DE50DC:
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

__attribute__((alias("__imp__sub_82DE50F0"))) PPC_WEAK_FUNC(sub_82DE50F0);
PPC_FUNC_IMPL(__imp__sub_82DE50F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DE50F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addis r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 65536;
	// addi r10,r11,-7616
	ctx.r10.s64 = ctx.r11.s64 + -7616;
	// addi r27,r27,-16376
	ctx.r27.s64 = ctx.r27.s64 + -16376;
	// li r28,511
	ctx.r28.s64 = 511;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r31,r27,84
	ctx.r31.s64 = ctx.r27.s64 + 84;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82DE5120:
	// lwzu r11,-96(r31)
	ea = -96 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addi r27,r27,-96
	ctx.r27.s64 = ctx.r27.s64 + -96;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82de5138
	if (cr6.lt) goto loc_82DE5138;
	// lwz r3,-20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// bl 0x82416268
	ctx.lr = 0x82DE5138;
	sub_82416268(ctx, base);
loc_82DE5138:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stb r30,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r30.u8);
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82de5158
	if (cr6.lt) goto loc_82DE5158;
	// lwz r3,-48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// bl 0x82416268
	ctx.lr = 0x82DE5158;
	sub_82416268(ctx, base);
loc_82DE5158:
	// stw r29,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r29.u32);
	// stw r30,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r30.u32);
	// stb r30,-48(r31)
	PPC_STORE_U8(ctx.r31.u32 + -48, ctx.r30.u8);
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82de5178
	if (cr6.lt) goto loc_82DE5178;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82DE5178;
	sub_82416268(ctx, base);
loc_82DE5178:
	// stw r29,-64(r31)
	PPC_STORE_U32(ctx.r31.u32 + -64, ctx.r29.u32);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r30,-68(r31)
	PPC_STORE_U32(ctx.r31.u32 + -68, ctx.r30.u32);
	// stb r30,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r30.u8);
	// bge 0x82de5120
	if (!cr0.lt) goto loc_82DE5120;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE5194"))) PPC_WEAK_FUNC(sub_82DE5194);
PPC_FUNC_IMPL(__imp__sub_82DE5194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE5198"))) PPC_WEAK_FUNC(sub_82DE5198);
PPC_FUNC_IMPL(__imp__sub_82DE5198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,128
	ctx.r10.s64 = 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-31757
	ctx.r6.s64 = -2081226752;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82DE51AC:
	// lwz r10,-24928(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24928);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de51d0
	if (cr6.lt) goto loc_82DE51D0;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82de51d4
	goto loc_82DE51D4;
loc_82DE51D0:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82DE51D4:
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r9,r10,36
	ctx.r9.s64 = ctx.r10.s64 + 36;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// blt cr6,0x82de51fc
	if (cr6.lt) goto loc_82DE51FC;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82de5200
	goto loc_82DE5200;
loc_82DE51FC:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82DE5200:
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r9,r10,64
	ctx.r9.s64 = ctx.r10.s64 + 64;
	// lwz r8,84(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// blt cr6,0x82de521c
	if (cr6.lt) goto loc_82DE521C;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82DE521C:
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stb r11,92(r10)
	PPC_STORE_U8(ctx.r10.u32 + 92, ctx.r11.u8);
	// lwz r10,-24928(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24928);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,104
	ctx.r10.s64 = ctx.r10.s64 + 104;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de5248
	if (cr6.lt) goto loc_82DE5248;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82de524c
	goto loc_82DE524C;
loc_82DE5248:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82DE524C:
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// addi r9,r10,36
	ctx.r9.s64 = ctx.r10.s64 + 36;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// lwz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82de5274
	if (cr6.lt) goto loc_82DE5274;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82de5278
	goto loc_82DE5278;
loc_82DE5274:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82DE5278:
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r9,r10,64
	ctx.r9.s64 = ctx.r10.s64 + 64;
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// lwz r8,84(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82de5294
	if (cr6.lt) goto loc_82DE5294;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82DE5294:
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stb r11,92(r10)
	PPC_STORE_U8(ctx.r10.u32 + 92, ctx.r11.u8);
	// lwz r10,-24928(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24928);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,200
	ctx.r10.s64 = ctx.r10.s64 + 200;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de52c0
	if (cr6.lt) goto loc_82DE52C0;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82de52c4
	goto loc_82DE52C4;
loc_82DE52C0:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82DE52C4:
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r9,r10,36
	ctx.r9.s64 = ctx.r10.s64 + 36;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// lwz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82de52ec
	if (cr6.lt) goto loc_82DE52EC;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82de52f0
	goto loc_82DE52F0;
loc_82DE52EC:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82DE52F0:
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r9,r10,64
	ctx.r9.s64 = ctx.r10.s64 + 64;
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// lwz r8,84(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82de530c
	if (cr6.lt) goto loc_82DE530C;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82DE530C:
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stb r11,92(r10)
	PPC_STORE_U8(ctx.r10.u32 + 92, ctx.r11.u8);
	// lwz r10,-24928(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24928);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,296
	ctx.r10.s64 = ctx.r10.s64 + 296;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de5338
	if (cr6.lt) goto loc_82DE5338;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82de533c
	goto loc_82DE533C;
loc_82DE5338:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82DE533C:
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r9,r10,36
	ctx.r9.s64 = ctx.r10.s64 + 36;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// lwz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82de5364
	if (cr6.lt) goto loc_82DE5364;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82de5368
	goto loc_82DE5368;
loc_82DE5364:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82DE5368:
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r9,r10,64
	ctx.r9.s64 = ctx.r10.s64 + 64;
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// lwz r8,84(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82de5384
	if (cr6.lt) goto loc_82DE5384;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82DE5384:
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// addi r7,r7,384
	ctx.r7.s64 = ctx.r7.s64 + 384;
	// stb r11,92(r10)
	PPC_STORE_U8(ctx.r10.u32 + 92, ctx.r11.u8);
	// bdnz 0x82de51ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DE51AC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE5398"))) PPC_WEAK_FUNC(sub_82DE5398);
PPC_FUNC_IMPL(__imp__sub_82DE5398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r9,128
	ctx.r9.s64 = 128;
	// addi r8,r11,-7616
	ctx.r8.s64 = ctx.r11.s64 + -7616;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 + 56;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82DE53C0:
	// stw r5,-36(r11)
	PPC_STORE_U32(ctx.r11.u32 + -36, ctx.r5.u32);
	// addi r8,r11,-20
	ctx.r8.s64 = ctx.r11.s64 + -20;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stb r10,-20(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20, ctx.r10.u8);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// lwz r7,-36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// stw r10,-40(r11)
	PPC_STORE_U32(ctx.r11.u32 + -40, ctx.r10.u32);
	// blt cr6,0x82de5400
	if (cr6.lt) goto loc_82DE5400;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82de5404
	goto loc_82DE5404;
loc_82DE5400:
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
loc_82DE5404:
	// stb r10,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
	// stw r10,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r10.u32);
	// stw r10,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r10.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// blt cr6,0x82de5424
	if (cr6.lt) goto loc_82DE5424;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82DE5424:
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// blt cr6,0x82de543c
	if (cr6.lt) goto loc_82DE543C;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82DE543C:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r6,r11,40
	ctx.r6.s64 = ctx.r11.s64 + 40;
	// stb r10,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// addi r7,r11,76
	ctx.r7.s64 = ctx.r11.s64 + 76;
	// stw r5,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// stw r5,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r5.u32);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de5474
	if (cr6.lt) goto loc_82DE5474;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x82de5478
	goto loc_82DE5478;
loc_82DE5474:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82DE5478:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stw r5,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r5.u32);
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// addi r9,r11,104
	ctx.r9.s64 = ctx.r11.s64 + 104;
	// blt cr6,0x82de549c
	if (cr6.lt) goto loc_82DE549C;
	// lwz r8,104(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// b 0x82de54a0
	goto loc_82DE54A0;
loc_82DE549C:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82DE54A0:
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82de54bc
	if (cr6.lt) goto loc_82DE54BC;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x82de54c0
	goto loc_82DE54C0;
loc_82DE54BC:
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_82DE54C0:
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82de54e4
	if (cr6.lt) goto loc_82DE54E4;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x82de54e8
	goto loc_82DE54E8;
loc_82DE54E4:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82DE54E8:
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// lwz r8,124(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82de5500
	if (cr6.lt) goto loc_82DE5500;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82DE5500:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r6,r11,136
	ctx.r6.s64 = ctx.r11.s64 + 136;
	// stb r10,132(r11)
	PPC_STORE_U8(ctx.r11.u32 + 132, ctx.r10.u8);
	// addi r7,r11,172
	ctx.r7.s64 = ctx.r11.s64 + 172;
	// stw r5,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r5.u32);
	// stw r10,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// stb r10,136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 136, ctx.r10.u8);
	// stw r5,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r5.u32);
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// lwz r9,192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de5538
	if (cr6.lt) goto loc_82DE5538;
	// lwz r9,172(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// b 0x82de553c
	goto loc_82DE553C;
loc_82DE5538:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82DE553C:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stw r5,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r5.u32);
	// stw r10,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r10.u32);
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// addi r9,r11,200
	ctx.r9.s64 = ctx.r11.s64 + 200;
	// blt cr6,0x82de5560
	if (cr6.lt) goto loc_82DE5560;
	// lwz r8,200(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// b 0x82de5564
	goto loc_82DE5564;
loc_82DE5560:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82DE5564:
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// stw r10,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// lwz r8,156(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82de5580
	if (cr6.lt) goto loc_82DE5580;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x82de5584
	goto loc_82DE5584;
loc_82DE5580:
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_82DE5584:
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// lwz r8,192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82de55a8
	if (cr6.lt) goto loc_82DE55A8;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x82de55ac
	goto loc_82DE55AC;
loc_82DE55A8:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82DE55AC:
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// stw r10,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r10.u32);
	// lwz r8,220(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82de55c4
	if (cr6.lt) goto loc_82DE55C4;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82DE55C4:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r6,r11,232
	ctx.r6.s64 = ctx.r11.s64 + 232;
	// stb r10,228(r11)
	PPC_STORE_U8(ctx.r11.u32 + 228, ctx.r10.u8);
	// addi r7,r11,268
	ctx.r7.s64 = ctx.r11.s64 + 268;
	// stw r5,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r5.u32);
	// stw r10,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r10.u32);
	// stb r10,232(r11)
	PPC_STORE_U8(ctx.r11.u32 + 232, ctx.r10.u8);
	// stw r5,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r5.u32);
	// stw r10,284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 284, ctx.r10.u32);
	// lwz r9,288(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de55fc
	if (cr6.lt) goto loc_82DE55FC;
	// lwz r9,268(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// b 0x82de5600
	goto loc_82DE5600;
loc_82DE55FC:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82DE5600:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r8,r11,296
	ctx.r8.s64 = ctx.r11.s64 + 296;
	// stw r5,316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 316, ctx.r5.u32);
	// stw r10,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r10.u32);
	// lwz r9,316(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de5624
	if (cr6.lt) goto loc_82DE5624;
	// lwz r9,296(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// b 0x82de5628
	goto loc_82DE5628;
loc_82DE5624:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82DE5628:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stw r10,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r10.u32);
	// lwz r9,252(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de5644
	if (cr6.lt) goto loc_82DE5644;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x82de5648
	goto loc_82DE5648;
loc_82DE5644:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_82DE5648:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stw r10,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// stw r10,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r10.u32);
	// stw r10,284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 284, ctx.r10.u32);
	// lwz r9,288(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de566c
	if (cr6.lt) goto loc_82DE566C;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x82de5670
	goto loc_82DE5670;
loc_82DE566C:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82DE5670:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stw r10,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r10.u32);
	// lwz r9,316(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de568c
	if (cr6.lt) goto loc_82DE568C;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x82de5690
	goto loc_82DE5690;
loc_82DE568C:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82DE5690:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r4,r4,384
	ctx.r4.s64 = ctx.r4.s64 + 384;
	// stb r10,324(r11)
	PPC_STORE_U8(ctx.r11.u32 + 324, ctx.r10.u8);
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// bdnz 0x82de53c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DE53C0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r7,r9,49164
	ctx.r7.u64 = ctx.r9.u64 | 49164;
	// ori r8,r11,49160
	ctx.r8.u64 = ctx.r11.u64 | 49160;
	// li r9,128
	ctx.r9.s64 = 128;
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stbx r10,r3,r7
	PPC_STORE_U8(ctx.r3.u32 + ctx.r7.u32, ctx.r10.u8);
	// stwx r10,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82DE56C8:
	// lwz r9,-36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	// stw r10,-40(r11)
	PPC_STORE_U32(ctx.r11.u32 + -40, ctx.r10.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de56e0
	if (cr6.lt) goto loc_82DE56E0;
	// lwz r9,-56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -56);
	// b 0x82de56e4
	goto loc_82DE56E4;
loc_82DE56E0:
	// addi r9,r11,-56
	ctx.r9.s64 = ctx.r11.s64 + -56;
loc_82DE56E4:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stw r10,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r10.u32);
	// stw r10,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r10.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de5708
	if (cr6.lt) goto loc_82DE5708;
	// lwz r9,-20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// b 0x82de570c
	goto loc_82DE570C;
loc_82DE5708:
	// addi r9,r11,-20
	ctx.r9.s64 = ctx.r11.s64 + -20;
loc_82DE570C:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de5728
	if (cr6.lt) goto loc_82DE5728;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82de572c
	goto loc_82DE572C;
loc_82DE5728:
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
loc_82DE572C:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stb r10,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de574c
	if (cr6.lt) goto loc_82DE574C;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82de5750
	goto loc_82DE5750;
loc_82DE574C:
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
loc_82DE5750:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de5774
	if (cr6.lt) goto loc_82DE5774;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x82de5778
	goto loc_82DE5778;
loc_82DE5774:
	// addi r9,r11,76
	ctx.r9.s64 = ctx.r11.s64 + 76;
loc_82DE5778:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de5794
	if (cr6.lt) goto loc_82DE5794;
	// lwz r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// b 0x82de5798
	goto loc_82DE5798;
loc_82DE5794:
	// addi r9,r11,104
	ctx.r9.s64 = ctx.r11.s64 + 104;
loc_82DE5798:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stb r10,132(r11)
	PPC_STORE_U8(ctx.r11.u32 + 132, ctx.r10.u8);
	// stw r10,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// lwz r9,156(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de57b8
	if (cr6.lt) goto loc_82DE57B8;
	// lwz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x82de57bc
	goto loc_82DE57BC;
loc_82DE57B8:
	// addi r9,r11,136
	ctx.r9.s64 = ctx.r11.s64 + 136;
loc_82DE57BC:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// lwz r9,192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de57e0
	if (cr6.lt) goto loc_82DE57E0;
	// lwz r9,172(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// b 0x82de57e4
	goto loc_82DE57E4;
loc_82DE57E0:
	// addi r9,r11,172
	ctx.r9.s64 = ctx.r11.s64 + 172;
loc_82DE57E4:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stw r10,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r10.u32);
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de5800
	if (cr6.lt) goto loc_82DE5800;
	// lwz r9,200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// b 0x82de5804
	goto loc_82DE5804;
loc_82DE5800:
	// addi r9,r11,200
	ctx.r9.s64 = ctx.r11.s64 + 200;
loc_82DE5804:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stb r10,228(r11)
	PPC_STORE_U8(ctx.r11.u32 + 228, ctx.r10.u8);
	// stw r10,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r10.u32);
	// lwz r9,252(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de5824
	if (cr6.lt) goto loc_82DE5824;
	// lwz r9,232(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// b 0x82de5828
	goto loc_82DE5828;
loc_82DE5824:
	// addi r9,r11,232
	ctx.r9.s64 = ctx.r11.s64 + 232;
loc_82DE5828:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stw r10,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// stw r10,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r10.u32);
	// stw r10,284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 284, ctx.r10.u32);
	// lwz r9,288(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de584c
	if (cr6.lt) goto loc_82DE584C;
	// lwz r9,268(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// b 0x82de5850
	goto loc_82DE5850;
loc_82DE584C:
	// addi r9,r11,268
	ctx.r9.s64 = ctx.r11.s64 + 268;
loc_82DE5850:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stw r10,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r10.u32);
	// lwz r9,316(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de586c
	if (cr6.lt) goto loc_82DE586C;
	// lwz r9,296(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// b 0x82de5870
	goto loc_82DE5870;
loc_82DE586C:
	// addi r9,r11,296
	ctx.r9.s64 = ctx.r11.s64 + 296;
loc_82DE5870:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stb r10,324(r11)
	PPC_STORE_U8(ctx.r11.u32 + 324, ctx.r10.u8);
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// bdnz 0x82de56c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DE56C8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE5884"))) PPC_WEAK_FUNC(sub_82DE5884);
PPC_FUNC_IMPL(__imp__sub_82DE5884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE5888"))) PPC_WEAK_FUNC(sub_82DE5888);
PPC_FUNC_IMPL(__imp__sub_82DE5888) {
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
	// bl 0x82de50f0
	ctx.lr = 0x82DE58A8;
	sub_82DE50F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de58c0
	if (cr6.eq) goto loc_82DE58C0;
	// bl 0x82416268
	ctx.lr = 0x82DE58BC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DE58C0:
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

__attribute__((alias("__imp__sub_82DE58D8"))) PPC_WEAK_FUNC(sub_82DE58D8);
PPC_FUNC_IMPL(__imp__sub_82DE58D8) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r11,-24928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24928);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de5940
	if (!cr6.eq) goto loc_82DE5940;
	// li r11,29
	ctx.r11.s64 = 29;
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,49168
	ctx.r4.u64 = ctx.r4.u64 | 49168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DE5914;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de5938
	if (cr6.eq) goto loc_82DE5938;
	// bl 0x82de5398
	ctx.lr = 0x82DE5920;
	sub_82DE5398(ctx, base);
	// stw r3,-24928(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24928, ctx.r3.u32);
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
loc_82DE5938:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-24928(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24928, ctx.r11.u32);
loc_82DE5940:
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

__attribute__((alias("__imp__sub_82DE5954"))) PPC_WEAK_FUNC(sub_82DE5954);
PPC_FUNC_IMPL(__imp__sub_82DE5954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE5958"))) PPC_WEAK_FUNC(sub_82DE5958);
PPC_FUNC_IMPL(__imp__sub_82DE5958) {
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
	// addi r3,r3,1764
	ctx.r3.s64 = ctx.r3.s64 + 1764;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82DE5980:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82de59c4
	if (cr6.eq) goto loc_82DE59C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// blt cr6,0x82de5980
	if (cr6.lt) goto loc_82DE5980;
	// addi r4,r31,1766
	ctx.r4.s64 = ctx.r31.s64 + 1766;
	// li r5,198
	ctx.r5.s64 = 198;
	// bl 0x831cee08
	ctx.lr = 0x82DE59A8;
	sub_831CEE08(ctx, base);
	// sth r30,1962(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1962, ctx.r30.u16);
loc_82DE59AC:
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
loc_82DE59C4:
	// addi r11,r11,882
	ctx.r11.s64 = ctx.r11.s64 + 882;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r10,r31
	PPC_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r30.u16);
	// b 0x82de59ac
	goto loc_82DE59AC;
}

__attribute__((alias("__imp__sub_82DE59D4"))) PPC_WEAK_FUNC(sub_82DE59D4);
PPC_FUNC_IMPL(__imp__sub_82DE59D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE59D8"))) PPC_WEAK_FUNC(sub_82DE59D8);
PPC_FUNC_IMPL(__imp__sub_82DE59D8) {
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
	// addi r3,r3,1964
	ctx.r3.s64 = ctx.r3.s64 + 1964;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82DE5A00:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82de5a44
	if (cr6.eq) goto loc_82DE5A44;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// blt cr6,0x82de5a00
	if (cr6.lt) goto loc_82DE5A00;
	// addi r4,r31,1966
	ctx.r4.s64 = ctx.r31.s64 + 1966;
	// li r5,198
	ctx.r5.s64 = 198;
	// bl 0x831cee08
	ctx.lr = 0x82DE5A28;
	sub_831CEE08(ctx, base);
	// sth r30,2162(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2162, ctx.r30.u16);
loc_82DE5A2C:
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
loc_82DE5A44:
	// addi r11,r11,982
	ctx.r11.s64 = ctx.r11.s64 + 982;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r10,r31
	PPC_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r30.u16);
	// b 0x82de5a2c
	goto loc_82DE5A2C;
}

__attribute__((alias("__imp__sub_82DE5A54"))) PPC_WEAK_FUNC(sub_82DE5A54);
PPC_FUNC_IMPL(__imp__sub_82DE5A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE5A58"))) PPC_WEAK_FUNC(sub_82DE5A58);
PPC_FUNC_IMPL(__imp__sub_82DE5A58) {
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
	// bl 0x82e6e978
	ctx.lr = 0x82DE5A6C;
	sub_82E6E978(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82de5a8c
	if (!cr6.eq) goto loc_82DE5A8C;
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
loc_82DE5A8C:
	// li r3,9
	ctx.r3.s64 = 9;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x835fa418
	ctx.lr = 0x82DE5A98;
	sub_835FA418(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DE5A9C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e80aa8
	ctx.lr = 0x82DE5AA8;
	sub_82E80AA8(ctx, base);
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

__attribute__((alias("__imp__sub_82DE5ABC"))) PPC_WEAK_FUNC(sub_82DE5ABC);
PPC_FUNC_IMPL(__imp__sub_82DE5ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE5AC0"))) PPC_WEAK_FUNC(sub_82DE5AC0);
PPC_FUNC_IMPL(__imp__sub_82DE5AC0) {
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
	// bl 0x82e6e978
	ctx.lr = 0x82DE5AD4;
	sub_82E6E978(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82de5af4
	if (!cr6.eq) goto loc_82DE5AF4;
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
loc_82DE5AF4:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x835fa418
	ctx.lr = 0x82DE5B00;
	sub_835FA418(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82DE5B04;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e80aa8
	ctx.lr = 0x82DE5B10;
	sub_82E80AA8(ctx, base);
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

__attribute__((alias("__imp__sub_82DE5B24"))) PPC_WEAK_FUNC(sub_82DE5B24);
PPC_FUNC_IMPL(__imp__sub_82DE5B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE5B28"))) PPC_WEAK_FUNC(sub_82DE5B28);
PPC_FUNC_IMPL(__imp__sub_82DE5B28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DE5B30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82de5ba0
	if (cr6.eq) goto loc_82DE5BA0;
	// cmpldi cr6,r5,0
	cr6.compare<uint64_t>(ctx.r5.u64, 0, xer);
	// beq cr6,0x82de5ba0
	if (cr6.eq) goto loc_82DE5BA0;
	// addi r3,r3,184
	ctx.r3.s64 = ctx.r3.s64 + 184;
	// rotlwi r31,r5,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// bl 0x82b79e78
	ctx.lr = 0x82DE5B5C;
	sub_82B79E78(ctx, base);
	// li r11,29
	ctx.r11.s64 = 29;
	// std r29,200(r30)
	PPC_STORE_U64(ctx.r30.u32 + 200, ctx.r29.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DE5B78;
	sub_82595718(ctx, base);
	// stw r3,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de5ba0
	if (cr6.eq) goto loc_82DE5BA0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831d0080
	ctx.lr = 0x82DE5B94;
	sub_831D0080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DE5BA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE5BAC"))) PPC_WEAK_FUNC(sub_82DE5BAC);
PPC_FUNC_IMPL(__imp__sub_82DE5BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE5BB0"))) PPC_WEAK_FUNC(sub_82DE5BB0);
PPC_FUNC_IMPL(__imp__sub_82DE5BB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DE5BB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-7192
	ctx.r10.s64 = ctx.r11.s64 + -7192;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r30,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r30.u64);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82de5bf8
	if (cr6.eq) goto loc_82DE5BF8;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DE5BF4;
	sub_825952B8(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82DE5BF8:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de5c10
	if (cr6.eq) goto loc_82DE5C10;
	// bl 0x82416268
	ctx.lr = 0x82DE5C0C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DE5C10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE5C18"))) PPC_WEAK_FUNC(sub_82DE5C18);
PPC_FUNC_IMPL(__imp__sub_82DE5C18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DE5C20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r3,1764
	ctx.r5.s64 = ctx.r3.s64 + 1764;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82DE5C38:
	// lhz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82de5ca8
	if (cr6.eq) goto loc_82DE5CA8;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r9,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82de5c94
	if (cr6.eq) goto loc_82DE5C94;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// ble cr6,0x82de5cc0
	if (!cr6.gt) goto loc_82DE5CC0;
loc_82DE5C70:
	// lhzx r29,r10,r8
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// beq cr6,0x82de5c90
	if (cr6.eq) goto loc_82DE5C90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82de5c70
	if (cr6.gt) goto loc_82DE5C70;
	// b 0x82de5c94
	goto loc_82DE5C94;
loc_82DE5C90:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82DE5C94:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de5ca8
	if (!cr6.eq) goto loc_82DE5CA8;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r31,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r31.u16);
loc_82DE5CA8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmplwi cr6,r30,100
	cr6.compare<uint32_t>(ctx.r30.u32, 100, xer);
	// blt cr6,0x82de5c38
	if (cr6.lt) goto loc_82DE5C38;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DE5CC0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82DE5CCC;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82DE5CCC"))) PPC_WEAK_FUNC(sub_82DE5CCC);
PPC_FUNC_IMPL(__imp__sub_82DE5CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE5CD0"))) PPC_WEAK_FUNC(sub_82DE5CD0);
PPC_FUNC_IMPL(__imp__sub_82DE5CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DE5CD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r3,1964
	ctx.r5.s64 = ctx.r3.s64 + 1964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82DE5CF0:
	// lhz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82de5d60
	if (cr6.eq) goto loc_82DE5D60;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r9,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82de5d4c
	if (cr6.eq) goto loc_82DE5D4C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// ble cr6,0x82de5d78
	if (!cr6.gt) goto loc_82DE5D78;
loc_82DE5D28:
	// lhzx r29,r10,r8
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// beq cr6,0x82de5d48
	if (cr6.eq) goto loc_82DE5D48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82de5d28
	if (cr6.gt) goto loc_82DE5D28;
	// b 0x82de5d4c
	goto loc_82DE5D4C;
loc_82DE5D48:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82DE5D4C:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de5d60
	if (!cr6.eq) goto loc_82DE5D60;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r31,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r31.u16);
loc_82DE5D60:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmplwi cr6,r30,100
	cr6.compare<uint32_t>(ctx.r30.u32, 100, xer);
	// blt cr6,0x82de5cf0
	if (cr6.lt) goto loc_82DE5CF0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DE5D78:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82DE5D84;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82DE5D84"))) PPC_WEAK_FUNC(sub_82DE5D84);
PPC_FUNC_IMPL(__imp__sub_82DE5D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE5D88"))) PPC_WEAK_FUNC(sub_82DE5D88);
PPC_FUNC_IMPL(__imp__sub_82DE5D88) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82de5dc0
	if (!cr6.eq) goto loc_82DE5DC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82de5e18
	goto loc_82DE5E18;
loc_82DE5DC0:
	// lis r11,1365
	ctx.r11.s64 = 89456640;
	// ori r10,r11,21845
	ctx.r10.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82de5ddc
	if (!cr6.gt) goto loc_82DE5DDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82DE5DDC;
	sub_831CC150(ctx, base);
loc_82DE5DDC:
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r30,r9,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82595718
	ctx.lr = 0x82DE5E00;
	sub_82595718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82DE5E18:
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

__attribute__((alias("__imp__sub_82DE5E30"))) PPC_WEAK_FUNC(sub_82DE5E30);
PPC_FUNC_IMPL(__imp__sub_82DE5E30) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lhz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82DE5E94;
	sub_8259CB28(ctx, base);
	// lbz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_82DE5EB8"))) PPC_WEAK_FUNC(sub_82DE5EB8);
PPC_FUNC_IMPL(__imp__sub_82DE5EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DE5EC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de5f2c
	if (cr6.eq) goto loc_82DE5F2C;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82DE5EDC:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -4);
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE5F10;
	sub_8259CB28(ctx, base);
	// lbz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,-8
	ctx.r6.s64 = ctx.r31.s64 + -8;
	// stb r7,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r7.u8);
	// cmplw cr6,r6,r29
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bne cr6,0x82de5edc
	if (!cr6.eq) goto loc_82DE5EDC;
loc_82DE5F2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE5F38"))) PPC_WEAK_FUNC(sub_82DE5F38);
PPC_FUNC_IMPL(__imp__sub_82DE5F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DE5F40;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de5fd0
	if (cr6.eq) goto loc_82DE5FD0;
	// addi r31,r5,36
	ctx.r31.s64 = ctx.r5.s64 + 36;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82DE5F68:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82de5fb8
	if (cr6.eq) goto loc_82DE5FB8;
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// addi r3,r31,-20
	ctx.r3.s64 = ctx.r31.s64 + -20;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lhz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + -4);
	// sth r10,-32(r31)
	PPC_STORE_U16(ctx.r31.u32 + -32, ctx.r10.u16);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r8.u32);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r28,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
	// stb r28,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r28.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82DE5FB0;
	sub_8259CB28(ctx, base);
	// lbz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// stb r7,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r7.u8);
loc_82DE5FB8:
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// bne cr6,0x82de5f68
	if (!cr6.eq) goto loc_82DE5F68;
loc_82DE5FD0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE5FDC"))) PPC_WEAK_FUNC(sub_82DE5FDC);
PPC_FUNC_IMPL(__imp__sub_82DE5FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE5FE0"))) PPC_WEAK_FUNC(sub_82DE5FE0);
PPC_FUNC_IMPL(__imp__sub_82DE5FE0) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82c67528
	ctx.lr = 0x82DE6000;
	sub_82C67528(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c67528
	ctx.lr = 0x82DE600C;
	sub_82C67528(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de6034
	if (cr6.eq) goto loc_82DE6034;
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
	// b 0x82de6058
	goto loc_82DE6058;
loc_82DE6034:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de6054
	if (cr6.eq) goto loc_82DE6054;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r9,31
	ctx.r31.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de6058
	goto loc_82DE6058;
loc_82DE6054:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82DE6058:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b7a190
	ctx.lr = 0x82DE6060;
	sub_82B7A190(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b7a190
	ctx.lr = 0x82DE6068;
	sub_82B7A190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE6080"))) PPC_WEAK_FUNC(sub_82DE6080);
PPC_FUNC_IMPL(__imp__sub_82DE6080) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82de5e30
	ctx.lr = 0x82DE60A8;
	sub_82DE5E30(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7a310
	ctx.lr = 0x82DE60B4;
	sub_82B7A310(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b7a310
	ctx.lr = 0x82DE60C0;
	sub_82B7A310(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82de60e0
	if (cr6.lt) goto loc_82DE60E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DE60E0;
	sub_825952B8(ctx, base);
loc_82DE60E0:
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

__attribute__((alias("__imp__sub_82DE60F8"))) PPC_WEAK_FUNC(sub_82DE60F8);
PPC_FUNC_IMPL(__imp__sub_82DE60F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82DE6100;
	__savegprlr_23(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r26,0
	ctx.r26.s64 = 0;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addze r29,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r29.s64 = temp.s64;
	// li r24,-1
	ctx.r24.s64 = -1;
loc_82DE612C:
	// cmpw cr6,r23,r28
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r28.s32, xer);
	// bge cr6,0x82de61bc
	if (!cr6.lt) goto loc_82DE61BC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82c67528
	ctx.lr = 0x82DE6140;
	sub_82C67528(ctx, base);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// ori r31,r26,1
	ctx.r31.u64 = ctx.r26.u64 | 1;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82c67528
	ctx.lr = 0x82DE615C;
	sub_82C67528(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// ori r26,r31,2
	ctx.r26.u64 = ctx.r31.u64 | 2;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de6188
	if (cr6.eq) goto loc_82DE6188;
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
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de61ac
	goto loc_82DE61AC;
loc_82DE6188:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de61a8
	if (cr6.eq) goto loc_82DE61A8;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de61ac
	goto loc_82DE61AC;
loc_82DE61A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DE61AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82de61c0
	if (!cr6.eq) goto loc_82DE61C0;
loc_82DE61BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DE61C0:
	// rlwinm r10,r26,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82de61dc
	if (cr6.eq) goto loc_82DE61DC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r26,r26,0,31,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82b7a190
	ctx.lr = 0x82DE61DC;
	sub_82B7A190(ctx, base);
loc_82DE61DC:
	// clrlwi r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82de61f4
	if (cr6.eq) goto loc_82DE61F4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r26,r26,0,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82b7a190
	ctx.lr = 0x82DE61F4;
	sub_82B7A190(ctx, base);
loc_82DE61F4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x82de6270
	if (cr6.eq) goto loc_82DE6270;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r27
	ctx.r31.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stwx r8,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r8.u32);
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r7,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r7.u16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE6254;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// addi r9,r29,-1
	ctx.r9.s64 = ctx.r29.s64 + -1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r29,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r29.s64 = temp.s64;
	// stb r7,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r7.u8);
	// b 0x82de612c
	goto loc_82DE612C;
loc_82DE6270:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r25,16
	ctx.r4.s64 = ctx.r25.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stwx r10,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u32);
	// lhz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
	// lwz r7,8(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE62A0;
	sub_8259CB28(ctx, base);
	// lbz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 44);
	// stb r10,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r10.u8);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE62B0"))) PPC_WEAK_FUNC(sub_82DE62B0);
PPC_FUNC_IMPL(__imp__sub_82DE62B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DE62B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de6320
	if (cr6.eq) goto loc_82DE6320;
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82DE62D4:
	// addi r31,r31,-48
	ctx.r31.s64 = ctx.r31.s64 + -48;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// stwu r11,-48(r30)
	ea = -48 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// lhz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -4);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE630C;
	sub_8259CB28(ctx, base);
	// lbz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// addi r7,r31,-8
	ctx.r7.s64 = ctx.r31.s64 + -8;
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// stb r6,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r6.u8);
	// bne cr6,0x82de62d4
	if (!cr6.eq) goto loc_82DE62D4;
loc_82DE6320:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE632C"))) PPC_WEAK_FUNC(sub_82DE632C);
PPC_FUNC_IMPL(__imp__sub_82DE632C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE6330"))) PPC_WEAK_FUNC(sub_82DE6330);
PPC_FUNC_IMPL(__imp__sub_82DE6330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82DE6338;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// stb r7,215(r1)
	PPC_STORE_U8(ctx.r1.u32 + 215, ctx.r7.u8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r24,-1
	ctx.r24.s64 = -1;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r28.s64 = temp.s64;
	// bge cr6,0x82de63f8
	if (!cr6.lt) goto loc_82DE63F8;
loc_82DE6368:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r3,r1,215
	ctx.r3.s64 = ctx.r1.s64 + 215;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82de5fe0
	ctx.lr = 0x82DE6388;
	sub_82DE5FE0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82de63f8
	if (cr6.eq) goto loc_82DE63F8;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// stwx r10,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u32);
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r8,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r8.u16);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE63D8;
	sub_8259CB28(ctx, base);
	// lbz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// cmpw cr6,r25,r28
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r28.s32, xer);
	// addze r28,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r28.s64 = temp.s64;
	// stb r8,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r8.u8);
	// blt cr6,0x82de6368
	if (cr6.lt) goto loc_82DE6368;
loc_82DE63F8:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stwx r10,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u32);
	// lhz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
	// lwz r7,8(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE643C;
	sub_8259CB28(ctx, base);
	// lbz r10,44(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 44);
	// stb r10,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE644C"))) PPC_WEAK_FUNC(sub_82DE644C);
PPC_FUNC_IMPL(__imp__sub_82DE644C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE6450"))) PPC_WEAK_FUNC(sub_82DE6450);
PPC_FUNC_IMPL(__imp__sub_82DE6450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82DE6458;
	__savegprlr_21(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r24,48
	ctx.r24.s64 = 48;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r26,r3,8
	ctx.r26.s64 = ctx.r3.s64 + 8;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// divw. r11,r9,r24
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82de6560
	if (cr0.eq) goto loc_82DE6560;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r25,15
	ctx.r25.s64 = 15;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r23,6
	ctx.r23.s64 = 6;
	// li r21,2
	ctx.r21.s64 = 2;
loc_82DE6498:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// sth r30,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r30.u16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r30.u8);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// beq cr6,0x82de650c
	if (cr6.eq) goto loc_82DE650C;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// ble cr6,0x82de650c
	if (!cr6.gt) goto loc_82DE650C;
	// lwzx r11,r28,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// add r31,r28,r10
	ctx.r31.u64 = ctx.r28.u64 + ctx.r10.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r10,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE6504;
	sub_8259CB28(ctx, base);
	// lbz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// stb r9,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r9.u8);
loc_82DE650C:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de656c
	if (cr6.eq) goto loc_82DE656C;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82de6534
	if (cr6.lt) goto loc_82DE6534;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82DE6534;
	sub_825952B8(ctx, base);
loc_82DE6534:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// divw r11,r9,r24
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82de6498
	if (cr6.lt) goto loc_82DE6498;
loc_82DE6560:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82DE656C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82c67528
	ctx.lr = 0x82DE6578;
	sub_82C67528(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lhz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r22,16
	ctx.r3.s64 = ctx.r22.s64 + 16;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// sth r10,4(r22)
	PPC_STORE_U16(ctx.r22.u32 + 4, ctx.r10.u16);
	// stw r9,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r9.u32);
	// stw r8,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE65AC;
	sub_8259CB28(ctx, base);
	// lbz r7,188(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 188);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r22,48
	ctx.r3.s64 = ctx.r22.s64 + 48;
	// stb r7,44(r22)
	PPC_STORE_U8(ctx.r22.u32 + 44, ctx.r7.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82DE65C8;
	sub_8259CB28(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// addi r3,r22,76
	ctx.r3.s64 = ctx.r22.s64 + 76;
	// bl 0x8259cb28
	ctx.lr = 0x82DE65DC;
	sub_8259CB28(ctx, base);
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r22,112
	ctx.r3.s64 = ctx.r22.s64 + 112;
	// stw r11,104(r22)
	PPC_STORE_U32(ctx.r22.u32 + 104, ctx.r11.u32);
	// stw r10,108(r22)
	PPC_STORE_U32(ctx.r22.u32 + 108, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE6600;
	sub_8259CB28(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b7a190
	ctx.lr = 0x82DE6608;
	sub_82B7A190(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de6624
	if (cr6.lt) goto loc_82DE6624;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82DE6624;
	sub_825952B8(ctx, base);
loc_82DE6624:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE6630"))) PPC_WEAK_FUNC(sub_82DE6630);
PPC_FUNC_IMPL(__imp__sub_82DE6630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82DE6638;
	__savegprlr_21(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r24,48
	ctx.r24.s64 = 48;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r26,r3,24
	ctx.r26.s64 = ctx.r3.s64 + 24;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// divw. r11,r9,r24
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82de6740
	if (cr0.eq) goto loc_82DE6740;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r25,15
	ctx.r25.s64 = 15;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r23,6
	ctx.r23.s64 = 6;
	// li r21,2
	ctx.r21.s64 = 2;
loc_82DE6678:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// sth r30,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r30.u16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r30.u8);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// beq cr6,0x82de66ec
	if (cr6.eq) goto loc_82DE66EC;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// ble cr6,0x82de66ec
	if (!cr6.gt) goto loc_82DE66EC;
	// lwzx r11,r28,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// add r31,r28,r10
	ctx.r31.u64 = ctx.r28.u64 + ctx.r10.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r10,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE66E4;
	sub_8259CB28(ctx, base);
	// lbz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// stb r9,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r9.u8);
loc_82DE66EC:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de674c
	if (cr6.eq) goto loc_82DE674C;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82de6714
	if (cr6.lt) goto loc_82DE6714;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82DE6714;
	sub_825952B8(ctx, base);
loc_82DE6714:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// divw r11,r9,r24
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82de6678
	if (cr6.lt) goto loc_82DE6678;
loc_82DE6740:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82DE674C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82c67528
	ctx.lr = 0x82DE6758;
	sub_82C67528(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lhz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r22,16
	ctx.r3.s64 = ctx.r22.s64 + 16;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// sth r10,4(r22)
	PPC_STORE_U16(ctx.r22.u32 + 4, ctx.r10.u16);
	// stw r9,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r9.u32);
	// stw r8,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE678C;
	sub_8259CB28(ctx, base);
	// lbz r7,188(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 188);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r22,48
	ctx.r3.s64 = ctx.r22.s64 + 48;
	// stb r7,44(r22)
	PPC_STORE_U8(ctx.r22.u32 + 44, ctx.r7.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82DE67A8;
	sub_8259CB28(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// addi r3,r22,76
	ctx.r3.s64 = ctx.r22.s64 + 76;
	// bl 0x8259cb28
	ctx.lr = 0x82DE67BC;
	sub_8259CB28(ctx, base);
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r22,112
	ctx.r3.s64 = ctx.r22.s64 + 112;
	// stw r11,104(r22)
	PPC_STORE_U32(ctx.r22.u32 + 104, ctx.r11.u32);
	// stw r10,108(r22)
	PPC_STORE_U32(ctx.r22.u32 + 108, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE67E0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b7a190
	ctx.lr = 0x82DE67E8;
	sub_82B7A190(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de6804
	if (cr6.lt) goto loc_82DE6804;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82DE6804;
	sub_825952B8(ctx, base);
loc_82DE6804:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE6810"))) PPC_WEAK_FUNC(sub_82DE6810);
PPC_FUNC_IMPL(__imp__sub_82DE6810) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b7a268
	ctx.lr = 0x82DE682C;
	sub_82B7A268(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de6450
	ctx.lr = 0x82DE6838;
	sub_82DE6450(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de6884
	if (!cr6.eq) goto loc_82DE6884;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b79f80
	ctx.lr = 0x82DE684C;
	sub_82B79F80(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de6630
	ctx.lr = 0x82DE6858;
	sub_82DE6630(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de6884
	if (!cr6.eq) goto loc_82DE6884;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b7a190
	ctx.lr = 0x82DE686C;
	sub_82B7A190(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82DE6884:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b7a190
	ctx.lr = 0x82DE688C;
	sub_82B7A190(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE68A4"))) PPC_WEAK_FUNC(sub_82DE68A4);
PPC_FUNC_IMPL(__imp__sub_82DE68A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE68A8"))) PPC_WEAK_FUNC(sub_82DE68A8);
PPC_FUNC_IMPL(__imp__sub_82DE68A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82DE68B0;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r24,48
	ctx.r24.s64 = 48;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// addi r27,r3,8
	ctx.r27.s64 = ctx.r3.s64 + 8;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// divw. r11,r9,r24
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82de69bc
	if (cr0.eq) goto loc_82DE69BC;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r25,15
	ctx.r25.s64 = 15;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r23,6
	ctx.r23.s64 = 6;
	// li r20,2
	ctx.r20.s64 = 2;
loc_82DE68F4:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// sth r30,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r30.u16);
	// stb r30,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r30.u8);
	// beq cr6,0x82de6964
	if (cr6.eq) goto loc_82DE6964;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// ble cr6,0x82de6964
	if (!cr6.gt) goto loc_82DE6964;
	// lwzx r11,r28,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// add r31,r28,r10
	ctx.r31.u64 = ctx.r28.u64 + ctx.r10.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r10,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE695C;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// stb r7,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r7.u8);
loc_82DE6964:
	// lhz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lhz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82de69c8
	if (cr6.eq) goto loc_82DE69C8;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82de6990
	if (cr6.lt) goto loc_82DE6990;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82DE6990;
	sub_825952B8(ctx, base);
loc_82DE6990:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// divw r11,r9,r24
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82de68f4
	if (cr6.lt) goto loc_82DE68F4;
loc_82DE69BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82DE69C8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82de69ec
	if (cr6.gt) goto loc_82DE69EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82DE69EC;
	sub_831CC188(ctx, base);
loc_82DE69EC:
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// add r8,r29,r10
	ctx.r8.u64 = ctx.r29.u64 + ctx.r10.u64;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r9,44(r7)
	PPC_STORE_U8(ctx.r7.u32 + 44, ctx.r9.u8);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x82de6a20
	if (cr6.lt) goto loc_82DE6A20;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82DE6A20;
	sub_825952B8(ctx, base);
loc_82DE6A20:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE6A2C"))) PPC_WEAK_FUNC(sub_82DE6A2C);
PPC_FUNC_IMPL(__imp__sub_82DE6A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE6A30"))) PPC_WEAK_FUNC(sub_82DE6A30);
PPC_FUNC_IMPL(__imp__sub_82DE6A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82DE6A38;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r24,48
	ctx.r24.s64 = 48;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// addi r27,r3,24
	ctx.r27.s64 = ctx.r3.s64 + 24;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// divw. r11,r9,r24
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82de6b44
	if (cr0.eq) goto loc_82DE6B44;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r25,15
	ctx.r25.s64 = 15;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r23,6
	ctx.r23.s64 = 6;
	// li r20,2
	ctx.r20.s64 = 2;
loc_82DE6A7C:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// sth r30,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r30.u16);
	// stb r30,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r30.u8);
	// beq cr6,0x82de6aec
	if (cr6.eq) goto loc_82DE6AEC;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// ble cr6,0x82de6aec
	if (!cr6.gt) goto loc_82DE6AEC;
	// lwzx r11,r28,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// add r31,r28,r10
	ctx.r31.u64 = ctx.r28.u64 + ctx.r10.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r10,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE6AE4;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// stb r7,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r7.u8);
loc_82DE6AEC:
	// lhz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lhz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82de6b50
	if (cr6.eq) goto loc_82DE6B50;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82de6b18
	if (cr6.lt) goto loc_82DE6B18;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82DE6B18;
	sub_825952B8(ctx, base);
loc_82DE6B18:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// divw r11,r9,r24
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82de6a7c
	if (cr6.lt) goto loc_82DE6A7C;
loc_82DE6B44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82DE6B50:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82de6b74
	if (cr6.gt) goto loc_82DE6B74;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82DE6B74;
	sub_831CC188(ctx, base);
loc_82DE6B74:
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// add r8,r29,r10
	ctx.r8.u64 = ctx.r29.u64 + ctx.r10.u64;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r9,44(r7)
	PPC_STORE_U8(ctx.r7.u32 + 44, ctx.r9.u8);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x82de6ba8
	if (cr6.lt) goto loc_82DE6BA8;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82DE6BA8;
	sub_825952B8(ctx, base);
loc_82DE6BA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE6BB4"))) PPC_WEAK_FUNC(sub_82DE6BB4);
PPC_FUNC_IMPL(__imp__sub_82DE6BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE6BB8"))) PPC_WEAK_FUNC(sub_82DE6BB8);
PPC_FUNC_IMPL(__imp__sub_82DE6BB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DE6BC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-992(r1)
	ea = -992 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c67528
	ctx.lr = 0x82DE6BDC;
	sub_82C67528(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82c67528
	ctx.lr = 0x82DE6BE8;
	sub_82C67528(ctx, base);
	// lwz r11,668(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 668);
	// lwz r10,380(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de6c10
	if (cr6.eq) goto loc_82DE6C10;
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
	// clrlwi r31,r6,31
	ctx.r31.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de6c34
	goto loc_82DE6C34;
loc_82DE6C10:
	// lwz r11,656(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// lwz r10,368(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de6c30
	if (cr6.eq) goto loc_82DE6C30;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r9,31
	ctx.r31.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de6c34
	goto loc_82DE6C34;
loc_82DE6C30:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82DE6C34:
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82b7a190
	ctx.lr = 0x82DE6C3C;
	sub_82B7A190(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82b7a190
	ctx.lr = 0x82DE6C44;
	sub_82B7A190(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de6c5c
	if (cr6.eq) goto loc_82DE6C5C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de6080
	ctx.lr = 0x82DE6C5C;
	sub_82DE6080(ctx, base);
loc_82DE6C5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82c67528
	ctx.lr = 0x82DE6C68;
	sub_82C67528(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c67528
	ctx.lr = 0x82DE6C74;
	sub_82C67528(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de6c9c
	if (cr6.eq) goto loc_82DE6C9C;
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
	// clrlwi r31,r6,31
	ctx.r31.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de6cc0
	goto loc_82DE6CC0;
loc_82DE6C9C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de6cbc
	if (cr6.eq) goto loc_82DE6CBC;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r9,31
	ctx.r31.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de6cc0
	goto loc_82DE6CC0;
loc_82DE6CBC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82DE6CC0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b7a190
	ctx.lr = 0x82DE6CC8;
	sub_82B7A190(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b7a190
	ctx.lr = 0x82DE6CD0;
	sub_82B7A190(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de6ce8
	if (cr6.eq) goto loc_82DE6CE8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82de6080
	ctx.lr = 0x82DE6CE8;
	sub_82DE6080(ctx, base);
loc_82DE6CE8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82c67528
	ctx.lr = 0x82DE6CF4;
	sub_82C67528(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82c67528
	ctx.lr = 0x82DE6D00;
	sub_82C67528(ctx, base);
	// lwz r11,524(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r10,812(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de6d28
	if (cr6.eq) goto loc_82DE6D28;
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
	// clrlwi r31,r6,31
	ctx.r31.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de6d4c
	goto loc_82DE6D4C;
loc_82DE6D28:
	// lwz r11,512(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// lwz r10,800(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de6d48
	if (cr6.eq) goto loc_82DE6D48;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r9,31
	ctx.r31.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de6d4c
	goto loc_82DE6D4C;
loc_82DE6D48:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82DE6D4C:
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82b7a190
	ctx.lr = 0x82DE6D54;
	sub_82B7A190(ctx, base);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82b7a190
	ctx.lr = 0x82DE6D5C;
	sub_82B7A190(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de6d74
	if (cr6.eq) goto loc_82DE6D74;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de6080
	ctx.lr = 0x82DE6D74;
	sub_82DE6080(ctx, base);
loc_82DE6D74:
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE6D7C"))) PPC_WEAK_FUNC(sub_82DE6D7C);
PPC_FUNC_IMPL(__imp__sub_82DE6D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE6D80"))) PPC_WEAK_FUNC(sub_82DE6D80);
PPC_FUNC_IMPL(__imp__sub_82DE6D80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82DE6D88;
	__savegprlr_23(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x82de6ebc
	if (!cr6.lt) goto loc_82DE6EBC;
loc_82DE6DB4:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// bl 0x82c67528
	ctx.lr = 0x82DE6DD0;
	sub_82C67528(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c67528
	ctx.lr = 0x82DE6DDC;
	sub_82C67528(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de6e04
	if (cr6.eq) goto loc_82DE6E04;
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
	// clrlwi r30,r6,31
	ctx.r30.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de6e28
	goto loc_82DE6E28;
loc_82DE6E04:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de6e24
	if (cr6.eq) goto loc_82DE6E24;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r30,r9,31
	ctx.r30.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de6e28
	goto loc_82DE6E28;
loc_82DE6E24:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82DE6E28:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b7a190
	ctx.lr = 0x82DE6E30;
	sub_82B7A190(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b7a190
	ctx.lr = 0x82DE6E38;
	sub_82B7A190(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de6e48
	if (cr6.eq) goto loc_82DE6E48;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82DE6E48:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r10,r27
	ctx.r30.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// stwx r8,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r8.u32);
	// lhz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// sth r7,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r7.u16);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE6E9C;
	sub_8259CB28(ctx, base);
	// lbz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// rlwinm r31,r9,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, xer);
	// stb r8,44(r29)
	PPC_STORE_U8(ctx.r29.u32 + 44, ctx.r8.u8);
	// blt cr6,0x82de6db4
	if (cr6.lt) goto loc_82DE6DB4;
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, xer);
loc_82DE6EBC:
	// bne cr6,0x82de6f24
	if (!cr6.eq) goto loc_82DE6F24;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r27
	ctx.r31.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r31,-48
	ctx.r11.s64 = ctx.r31.s64 + -48;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r8,-48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lhz r7,-44(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + -44);
	// sth r7,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r7.u16);
	// lwz r11,-40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,-36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE6F18;
	sub_8259CB28(ctx, base);
	// lbz r9,-4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// addi r28,r26,-1
	ctx.r28.s64 = ctx.r26.s64 + -1;
	// stb r9,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r9.u8);
loc_82DE6F24:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82de60f8
	ctx.lr = 0x82DE6F38;
	sub_82DE60F8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE6F40"))) PPC_WEAK_FUNC(sub_82DE6F40);
PPC_FUNC_IMPL(__imp__sub_82DE6F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DE6F48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stb r6,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r6.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,159
	ctx.r3.s64 = ctx.r1.s64 + 159;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82de5fe0
	ctx.lr = 0x82DE6F68;
	sub_82DE5FE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de6f80
	if (cr6.eq) goto loc_82DE6F80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de6080
	ctx.lr = 0x82DE6F80;
	sub_82DE6080(ctx, base);
loc_82DE6F80:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,159
	ctx.r3.s64 = ctx.r1.s64 + 159;
	// bl 0x82de5fe0
	ctx.lr = 0x82DE6F90;
	sub_82DE5FE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de6fa8
	if (cr6.eq) goto loc_82DE6FA8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82de6080
	ctx.lr = 0x82DE6FA8;
	sub_82DE6080(ctx, base);
loc_82DE6FA8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,159
	ctx.r3.s64 = ctx.r1.s64 + 159;
	// bl 0x82de5fe0
	ctx.lr = 0x82DE6FB8;
	sub_82DE5FE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de6fd0
	if (cr6.eq) goto loc_82DE6FD0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de6080
	ctx.lr = 0x82DE6FD0;
	sub_82DE6080(ctx, base);
loc_82DE6FD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE6FD8"))) PPC_WEAK_FUNC(sub_82DE6FD8);
PPC_FUNC_IMPL(__imp__sub_82DE6FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82DE6FE0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x82de70b0
	if (!cr6.lt) goto loc_82DE70B0;
loc_82DE7010:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,231
	ctx.r3.s64 = ctx.r1.s64 + 231;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r5,r4,-48
	ctx.r5.s64 = ctx.r4.s64 + -48;
	// bl 0x82de5fe0
	ctx.lr = 0x82DE702C;
	sub_82DE5FE0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82de703c
	if (cr6.eq) goto loc_82DE703C;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82DE703C:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r10,r27
	ctx.r30.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// stwx r8,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r8.u32);
	// lhz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// sth r7,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r7.u16);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE7090;
	sub_8259CB28(ctx, base);
	// lbz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// rlwinm r31,r9,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, xer);
	// stb r8,44(r29)
	PPC_STORE_U8(ctx.r29.u32 + 44, ctx.r8.u8);
	// blt cr6,0x82de7010
	if (cr6.lt) goto loc_82DE7010;
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, xer);
loc_82DE70B0:
	// bne cr6,0x82de7118
	if (!cr6.eq) goto loc_82DE7118;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r27
	ctx.r31.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r31,-48
	ctx.r11.s64 = ctx.r31.s64 + -48;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r8,-48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lhz r7,-44(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + -44);
	// sth r7,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r7.u16);
	// lwz r11,-40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,-36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE710C;
	sub_8259CB28(ctx, base);
	// lbz r9,-4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// addi r28,r26,-1
	ctx.r28.s64 = ctx.r26.s64 + -1;
	// stb r9,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r9.u8);
loc_82DE7118:
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82de6330
	ctx.lr = 0x82DE7130;
	sub_82DE6330(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE7138"))) PPC_WEAK_FUNC(sub_82DE7138);
PPC_FUNC_IMPL(__imp__sub_82DE7138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82de714c
	if (!cr6.eq) goto loc_82DE714C;
	// b 0x82de6a30
	sub_82DE6A30(ctx, base);
	return;
loc_82DE714C:
	// b 0x82de68a8
	sub_82DE68A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE7150"))) PPC_WEAK_FUNC(sub_82DE7150);
PPC_FUNC_IMPL(__imp__sub_82DE7150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DE7158;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// divw r11,r11,r10
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// ble cr6,0x82de71e8
	if (!cr6.gt) goto loc_82DE71E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r31,r8,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r27,r7,5,0,26
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r28,r31,r3
	ctx.r28.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r5,r27,r3
	ctx.r5.u64 = ctx.r27.u64 + ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82de6bb8
	ctx.lr = 0x82DE71AC;
	sub_82DE6BB8(ctx, base);
	// add r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// bl 0x82de6bb8
	ctx.lr = 0x82DE71BC;
	sub_82DE6BB8(ctx, base);
	// subf r31,r31,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r31.s64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r27,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r27.s64;
	// bl 0x82de6bb8
	ctx.lr = 0x82DE71D0;
	sub_82DE6BB8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82de6bb8
	ctx.lr = 0x82DE71E0;
	sub_82DE6BB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DE71E8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82de6bb8
	ctx.lr = 0x82DE71F4;
	sub_82DE6BB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE71FC"))) PPC_WEAK_FUNC(sub_82DE71FC);
PPC_FUNC_IMPL(__imp__sub_82DE71FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE7200"))) PPC_WEAK_FUNC(sub_82DE7200);
PPC_FUNC_IMPL(__imp__sub_82DE7200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82DE7208;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// divw r25,r11,r10
	ctx.r25.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// srawi r9,r25,1
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r25.s32 >> 1;
	// addze. r30,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r30.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble 0x82de72e0
	if (!cr0.gt) goto loc_82DE72E0;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r28,15
	ctx.r28.s64 = 15;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r26,-1
	ctx.r26.s64 = -1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r24,2
	ctx.r24.s64 = 2;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
loc_82DE724C:
	// addi r31,r31,-48
	ctx.r31.s64 = ctx.r31.s64 + -48;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lhz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// sth r10,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE7294;
	sub_8259CB28(ctx, base);
	// lbz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r7,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r7.u8);
	// bl 0x82de6d80
	ctx.lr = 0x82DE72B0;
	sub_82DE6D80(ctx, base);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x82de72cc
	if (cr6.lt) goto loc_82DE72CC;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82DE72CC;
	sub_825952B8(ctx, base);
loc_82DE72CC:
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// bgt cr6,0x82de724c
	if (cr6.gt) goto loc_82DE724C;
loc_82DE72E0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE72E8"))) PPC_WEAK_FUNC(sub_82DE72E8);
PPC_FUNC_IMPL(__imp__sub_82DE72E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82DE72F0;
	__savegprlr_20(ctx, base);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de7578
	if (cr6.eq) goto loc_82DE7578;
	// addi r29,r3,48
	ctx.r29.s64 = ctx.r3.s64 + 48;
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de7578
	if (cr6.eq) goto loc_82DE7578;
	// lbz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r23,15
	ctx.r23.s64 = 15;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r20,2
	ctx.r20.s64 = 2;
loc_82DE7324:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// sth r10,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stb r24,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r24.u8);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE736C;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stb r7,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r7.u8);
	// bl 0x82c67528
	ctx.lr = 0x82DE7380;
	sub_82C67528(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82c67528
	ctx.lr = 0x82DE738C;
	sub_82C67528(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r10,460(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de73b4
	if (cr6.eq) goto loc_82DE73B4;
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
	// clrlwi r28,r6,31
	ctx.r28.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de73d8
	goto loc_82DE73D8;
loc_82DE73B4:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,448(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de73d4
	if (cr6.eq) goto loc_82DE73D4;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r28,r9,31
	ctx.r28.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de73d8
	goto loc_82DE73D8;
loc_82DE73D4:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_82DE73D8:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82b7a190
	ctx.lr = 0x82DE73E0;
	sub_82B7A190(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82b7a190
	ctx.lr = 0x82DE73E8;
	sub_82B7A190(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de7448
	if (cr6.eq) goto loc_82DE7448;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r29,48
	ctx.r5.s64 = ctx.r29.s64 + 48;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82de62b0
	ctx.lr = 0x82DE7408;
	sub_82DE62B0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// sth r10,4(r26)
	PPC_STORE_U16(ctx.r26.u32 + 4, ctx.r10.u16);
	// stw r9,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r9.u32);
	// stw r8,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE743C;
	sub_8259CB28(ctx, base);
	// lbz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 140);
	// stb r7,44(r26)
	PPC_STORE_U8(ctx.r26.u32 + 44, ctx.r7.u8);
	// b 0x82de7544
	goto loc_82DE7544;
loc_82DE7448:
	// addi r31,r31,-48
	ctx.r31.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r27,r31,-8
	ctx.r27.s64 = ctx.r31.s64 + -8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82c67528
	ctx.lr = 0x82DE745C;
	sub_82C67528(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82c67528
	ctx.lr = 0x82DE7468;
	sub_82C67528(ctx, base);
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r10,604(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de7490
	if (cr6.eq) goto loc_82DE7490;
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
	// clrlwi r28,r6,31
	ctx.r28.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de74b4
	goto loc_82DE74B4;
loc_82DE7490:
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r10,592(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de74b0
	if (cr6.eq) goto loc_82DE74B0;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r28,r9,31
	ctx.r28.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de74b4
	goto loc_82DE74B4;
loc_82DE74B0:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_82DE74B4:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82b7a190
	ctx.lr = 0x82DE74BC;
	sub_82B7A190(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82b7a190
	ctx.lr = 0x82DE74C4;
	sub_82B7A190(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// beq cr6,0x82de7514
	if (cr6.eq) goto loc_82DE7514;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -4);
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE7504;
	sub_8259CB28(ctx, base);
	// lbz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// stb r7,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r7.u8);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82de7448
	goto loc_82DE7448;
loc_82DE7514:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lhz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE753C;
	sub_8259CB28(ctx, base);
	// lbz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 140);
	// stb r7,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r7.u8);
loc_82DE7544:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82de7560
	if (cr6.lt) goto loc_82DE7560;
	// stw r20,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r20.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82DE7560;
	sub_825952B8(ctx, base);
loc_82DE7560:
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// cmplw cr6,r29,r22
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, xer);
	// stb r24,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r24.u8);
	// bne cr6,0x82de7324
	if (!cr6.eq) goto loc_82DE7324;
loc_82DE7578:
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE7580"))) PPC_WEAK_FUNC(sub_82DE7580);
PPC_FUNC_IMPL(__imp__sub_82DE7580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DE7588;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// divw r11,r11,r10
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// ble cr6,0x82de7628
	if (!cr6.gt) goto loc_82DE7628;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r31,r8,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r26,r7,5,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r27,r31,r3
	ctx.r27.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82de6f40
	ctx.lr = 0x82DE75E0;
	sub_82DE6F40(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// bl 0x82de6f40
	ctx.lr = 0x82DE75F4;
	sub_82DE6F40(ctx, base);
	// subf r31,r31,r28
	ctx.r31.s64 = ctx.r28.s64 - ctx.r31.s64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r3,r26,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r26.s64;
	// bl 0x82de6f40
	ctx.lr = 0x82DE760C;
	sub_82DE6F40(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82de6f40
	ctx.lr = 0x82DE7620;
	sub_82DE6F40(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82DE7628:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82de6f40
	ctx.lr = 0x82DE7634;
	sub_82DE6F40(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE763C"))) PPC_WEAK_FUNC(sub_82DE763C);
PPC_FUNC_IMPL(__imp__sub_82DE763C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE7640"))) PPC_WEAK_FUNC(sub_82DE7640);
PPC_FUNC_IMPL(__imp__sub_82DE7640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82DE7648;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// divw r25,r11,r10
	ctx.r25.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// srawi r9,r25,1
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r25.s32 >> 1;
	// addze. r30,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r30.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble 0x82de7728
	if (!cr0.gt) goto loc_82DE7728;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r28,15
	ctx.r28.s64 = 15;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r26,-1
	ctx.r26.s64 = -1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r23,2
	ctx.r23.s64 = 2;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
loc_82DE7690:
	// addi r31,r31,-48
	ctx.r31.s64 = ctx.r31.s64 + -48;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lhz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// sth r10,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE76D8;
	sub_8259CB28(ctx, base);
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r11.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82de6fd8
	ctx.lr = 0x82DE76F8;
	sub_82DE6FD8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82de7714
	if (cr6.lt) goto loc_82DE7714;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82DE7714;
	sub_825952B8(ctx, base);
loc_82DE7714:
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// bgt cr6,0x82de7690
	if (cr6.gt) goto loc_82DE7690;
loc_82DE7728:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE7730"))) PPC_WEAK_FUNC(sub_82DE7730);
PPC_FUNC_IMPL(__imp__sub_82DE7730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82DE7738;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r5,279(r1)
	PPC_STORE_U8(ctx.r1.u32 + 279, ctx.r5.u8);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de791c
	if (cr6.eq) goto loc_82DE791C;
	// addi r29,r3,48
	ctx.r29.s64 = ctx.r3.s64 + 48;
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de791c
	if (cr6.eq) goto loc_82DE791C;
	// lbz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r25,15
	ctx.r25.s64 = 15;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r22,2
	ctx.r22.s64 = 2;
loc_82DE7770:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// sth r10,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE77B4;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,279
	ctx.r3.s64 = ctx.r1.s64 + 279;
	// stb r7,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r7.u8);
	// bl 0x82de5fe0
	ctx.lr = 0x82DE77CC;
	sub_82DE5FE0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82de782c
	if (cr6.eq) goto loc_82DE782C;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r29,48
	ctx.r5.s64 = ctx.r29.s64 + 48;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82de62b0
	ctx.lr = 0x82DE77EC;
	sub_82DE62B0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// sth r10,4(r28)
	PPC_STORE_U16(ctx.r28.u32 + 4, ctx.r10.u16);
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// stw r8,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE7820;
	sub_8259CB28(ctx, base);
	// lbz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 140);
	// stb r7,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r7.u8);
	// b 0x82de78e8
	goto loc_82DE78E8;
loc_82DE782C:
	// addi r5,r29,-48
	ctx.r5.s64 = ctx.r29.s64 + -48;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,279
	ctx.r3.s64 = ctx.r1.s64 + 279;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82de5fe0
	ctx.lr = 0x82DE7840;
	sub_82DE5FE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de78ac
	if (cr6.eq) goto loc_82DE78AC;
loc_82DE784C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE7880;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,279
	ctx.r3.s64 = ctx.r1.s64 + 279;
	// stb r7,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r7.u8);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r31,r31,-48
	ctx.r31.s64 = ctx.r31.s64 + -48;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82de5fe0
	ctx.lr = 0x82DE78A0;
	sub_82DE5FE0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82de784c
	if (!cr6.eq) goto loc_82DE784C;
loc_82DE78AC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lhz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE78E0;
	sub_8259CB28(ctx, base);
	// lbz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 140);
	// stb r7,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r7.u8);
loc_82DE78E8:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82de7904
	if (cr6.lt) goto loc_82DE7904;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82DE7904;
	sub_825952B8(ctx, base);
loc_82DE7904:
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// bne cr6,0x82de7770
	if (!cr6.eq) goto loc_82DE7770;
loc_82DE791C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE7924"))) PPC_WEAK_FUNC(sub_82DE7924);
PPC_FUNC_IMPL(__imp__sub_82DE7924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE7928"))) PPC_WEAK_FUNC(sub_82DE7928);
PPC_FUNC_IMPL(__imp__sub_82DE7928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DE7930;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-7188
	ctx.r10.s64 = ctx.r11.s64 + -7188;
	// addi r28,r3,236
	ctx.r28.s64 = ctx.r3.s64 + 236;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// lwz r9,256(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82de7968
	if (cr6.lt) goto loc_82DE7968;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82DE7968;
	sub_825952B8(ctx, base);
loc_82DE7968:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// addi r30,r29,208
	ctx.r30.s64 = ctx.r29.s64 + 208;
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82de799c
	if (cr6.lt) goto loc_82DE799C;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82DE799C;
	sub_825952B8(ctx, base);
loc_82DE799C:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// addi r28,r29,184
	ctx.r28.s64 = ctx.r29.s64 + 184;
	// addi r10,r11,-7192
	ctx.r10.s64 = ctx.r11.s64 + -7192;
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// std r31,200(r29)
	PPC_STORE_U64(ctx.r29.u32 + 200, ctx.r31.u64);
	// stw r10,184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 184, ctx.r10.u32);
	// lwz r4,192(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82de79dc
	if (cr6.eq) goto loc_82DE79DC;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DE79D8;
	sub_825952B8(ctx, base);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
loc_82DE79DC:
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x82b7a190
	ctx.lr = 0x82DE79E4;
	sub_82B7A190(ctx, base);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r30,r29,24
	ctx.r30.s64 = ctx.r29.s64 + 24;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de7a14
	if (cr6.eq) goto loc_82DE7A14;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82c67458
	ctx.lr = 0x82DE7A04;
	sub_82C67458(ctx, base);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82DE7A14;
	sub_825952B8(ctx, base);
loc_82DE7A14:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de7a50
	if (cr6.eq) goto loc_82DE7A50;
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82c67458
	ctx.lr = 0x82DE7A40;
	sub_82C67458(ctx, base);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82DE7A50;
	sub_825952B8(ctx, base);
loc_82DE7A50:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE7A64"))) PPC_WEAK_FUNC(sub_82DE7A64);
PPC_FUNC_IMPL(__imp__sub_82DE7A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE7A68"))) PPC_WEAK_FUNC(sub_82DE7A68);
PPC_FUNC_IMPL(__imp__sub_82DE7A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DE7A70;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1365
	ctx.r11.s64 = 89456640;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,21845
	ctx.r10.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82de7a94
	if (!cr6.gt) goto loc_82DE7A94;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82DE7A94;
	sub_831CC150(ctx, base);
loc_82DE7A94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,48
	ctx.r27.s64 = 48;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82de7b4c
	if (!cr6.lt) goto loc_82DE7B4C;
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwinm r28,r11,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82595718
	ctx.lr = 0x82DE7AD4;
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
	// bl 0x82de5f38
	ctx.lr = 0x82DE7AF8;
	sub_82DE5F38(ctx, base);
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
	// beq cr6,0x82de7b2c
	if (cr6.eq) goto loc_82DE7B2C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c67458
	ctx.lr = 0x82DE7B1C;
	sub_82C67458(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82DE7B2C;
	sub_825952B8(ctx, base);
loc_82DE7B2C:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_82DE7B4C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE7B54"))) PPC_WEAK_FUNC(sub_82DE7B54);
PPC_FUNC_IMPL(__imp__sub_82DE7B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE7B58"))) PPC_WEAK_FUNC(sub_82DE7B58);
PPC_FUNC_IMPL(__imp__sub_82DE7B58) {
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
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de7ba4
	if (cr6.eq) goto loc_82DE7BA4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82de5eb8
	ctx.lr = 0x82DE7B8C;
	sub_82DE5EB8(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c67458
	ctx.lr = 0x82DE7BA0;
	sub_82C67458(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82DE7BA4:
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

__attribute__((alias("__imp__sub_82DE7BBC"))) PPC_WEAK_FUNC(sub_82DE7BBC);
PPC_FUNC_IMPL(__imp__sub_82DE7BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE7BC0"))) PPC_WEAK_FUNC(sub_82DE7BC0);
PPC_FUNC_IMPL(__imp__sub_82DE7BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1365
	ctx.r10.s64 = 89456640;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,48
	ctx.r9.s64 = 48;
	// ori r8,r10,21845
	ctx.r8.u64 = ctx.r10.u64 | 21845;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82de7bf4
	if (!cr6.lt) goto loc_82DE7BF4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82DE7BF4:
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
	// blt cr6,0x82de7c24
	if (cr6.lt) goto loc_82DE7C24;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82DE7C24:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82de7c30
	if (!cr6.lt) goto loc_82DE7C30;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82DE7C30:
	// b 0x82de7a68
	sub_82DE7A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE7C34"))) PPC_WEAK_FUNC(sub_82DE7C34);
PPC_FUNC_IMPL(__imp__sub_82DE7C34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DE7C38"))) PPC_WEAK_FUNC(sub_82DE7C38);
PPC_FUNC_IMPL(__imp__sub_82DE7C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82DE7C40;
	__savegprlr_17(ctx, base);
	// stwu r1,-2880(r1)
	ea = -2880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r23,0
	ctx.r23.s64 = 0;
	// divw r9,r11,r10
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r5,-48
	ctx.r5.s64 = ctx.r5.s64 + -48;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82de7150
	ctx.lr = 0x82DE7C90;
	sub_82DE7150(ctx, base);
	// addi r24,r31,48
	ctx.r24.s64 = ctx.r31.s64 + 48;
loc_82DE7C94:
	// cmplw cr6,r19,r31
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r31.u32, xer);
	// bge cr6,0x82de7d94
	if (!cr6.lt) goto loc_82DE7D94;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x82c67528
	ctx.lr = 0x82DE7CA8;
	sub_82C67528(ctx, base);
	// addi r29,r31,-48
	ctx.r29.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,2176
	ctx.r3.s64 = ctx.r1.s64 + 2176;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
	// bl 0x82c67528
	ctx.lr = 0x82DE7CBC;
	sub_82C67528(ctx, base);
	// lwz r11,2188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2188);
	// lwz r10,1036(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1036);
	// ori r30,r30,2
	ctx.r30.u64 = ctx.r30.u64 | 2;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de7ce8
	if (cr6.eq) goto loc_82DE7CE8;
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
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de7d0c
	goto loc_82DE7D0C;
loc_82DE7CE8:
	// lwz r11,2176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2176);
	// lwz r10,1024(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1024);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de7d08
	if (cr6.eq) goto loc_82DE7D08;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de7d0c
	goto loc_82DE7D0C;
loc_82DE7D08:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82DE7D0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de7d94
	if (!cr6.eq) goto loc_82DE7D94;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82c67528
	ctx.lr = 0x82DE7D24;
	sub_82C67528(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// ori r30,r30,4
	ctx.r30.u64 = ctx.r30.u64 | 4;
	// bl 0x82c67528
	ctx.lr = 0x82DE7D34;
	sub_82C67528(ctx, base);
	// lwz r11,460(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r10,748(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// ori r30,r30,8
	ctx.r30.u64 = ctx.r30.u64 | 8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de7d60
	if (cr6.eq) goto loc_82DE7D60;
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
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de7d84
	goto loc_82DE7D84;
loc_82DE7D60:
	// lwz r11,448(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// lwz r10,736(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de7d80
	if (cr6.eq) goto loc_82DE7D80;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de7d84
	goto loc_82DE7D84;
loc_82DE7D80:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82DE7D84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82de7d98
	if (cr6.eq) goto loc_82DE7D98;
loc_82DE7D94:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82DE7D98:
	// rlwinm r10,r30,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82de7db4
	if (cr6.eq) goto loc_82DE7DB4;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// rlwinm r30,r30,0,29,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82b7a190
	ctx.lr = 0x82DE7DB4;
	sub_82B7A190(ctx, base);
loc_82DE7DB4:
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82de7dcc
	if (cr6.eq) goto loc_82DE7DCC;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// rlwinm r30,r30,0,30,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82b7a190
	ctx.lr = 0x82DE7DCC;
	sub_82B7A190(ctx, base);
loc_82DE7DCC:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82de7de4
	if (cr6.eq) goto loc_82DE7DE4;
	// addi r3,r1,2176
	ctx.r3.s64 = ctx.r1.s64 + 2176;
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82b7a190
	ctx.lr = 0x82DE7DE4;
	sub_82B7A190(ctx, base);
loc_82DE7DE4:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82de7dfc
	if (cr6.eq) goto loc_82DE7DFC;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// rlwinm r30,r30,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82b7a190
	ctx.lr = 0x82DE7DFC;
	sub_82B7A190(ctx, base);
loc_82DE7DFC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de7e10
	if (cr6.eq) goto loc_82DE7E10;
	// addi r31,r31,-48
	ctx.r31.s64 = ctx.r31.s64 + -48;
	// b 0x82de7c94
	goto loc_82DE7C94;
loc_82DE7E10:
	// cmplw cr6,r24,r18
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r18.u32, xer);
	// bge cr6,0x82de7f0c
	if (!cr6.lt) goto loc_82DE7F0C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// bl 0x82c67528
	ctx.lr = 0x82DE7E24;
	sub_82C67528(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,2464
	ctx.r3.s64 = ctx.r1.s64 + 2464;
	// ori r30,r30,16
	ctx.r30.u64 = ctx.r30.u64 | 16;
	// bl 0x82c67528
	ctx.lr = 0x82DE7E34;
	sub_82C67528(ctx, base);
	// lwz r11,2476(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2476);
	// lwz r10,1612(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1612);
	// ori r30,r30,32
	ctx.r30.u64 = ctx.r30.u64 | 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de7e60
	if (cr6.eq) goto loc_82DE7E60;
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
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de7e84
	goto loc_82DE7E84;
loc_82DE7E60:
	// lwz r11,2464(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2464);
	// lwz r10,1600(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1600);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de7e80
	if (cr6.eq) goto loc_82DE7E80;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de7e84
	goto loc_82DE7E84;
loc_82DE7E80:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82DE7E84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de7f0c
	if (!cr6.eq) goto loc_82DE7F0C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x82c67528
	ctx.lr = 0x82DE7E9C;
	sub_82C67528(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,1888
	ctx.r3.s64 = ctx.r1.s64 + 1888;
	// ori r30,r30,64
	ctx.r30.u64 = ctx.r30.u64 | 64;
	// bl 0x82c67528
	ctx.lr = 0x82DE7EAC;
	sub_82C67528(ctx, base);
	// lwz r11,1900(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1900);
	// lwz r10,1324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1324);
	// ori r30,r30,128
	ctx.r30.u64 = ctx.r30.u64 | 128;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de7ed8
	if (cr6.eq) goto loc_82DE7ED8;
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
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de7efc
	goto loc_82DE7EFC;
loc_82DE7ED8:
	// lwz r11,1888(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1888);
	// lwz r10,1312(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1312);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de7ef8
	if (cr6.eq) goto loc_82DE7EF8;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de7efc
	goto loc_82DE7EFC;
loc_82DE7EF8:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82DE7EFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82de7f10
	if (cr6.eq) goto loc_82DE7F10;
loc_82DE7F0C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82DE7F10:
	// rlwinm r10,r30,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82de7f2c
	if (cr6.eq) goto loc_82DE7F2C;
	// addi r3,r1,1888
	ctx.r3.s64 = ctx.r1.s64 + 1888;
	// rlwinm r30,r30,0,25,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// bl 0x82b7a190
	ctx.lr = 0x82DE7F2C;
	sub_82B7A190(ctx, base);
loc_82DE7F2C:
	// rlwinm r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82de7f44
	if (cr6.eq) goto loc_82DE7F44;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// rlwinm r30,r30,0,26,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82b7a190
	ctx.lr = 0x82DE7F44;
	sub_82B7A190(ctx, base);
loc_82DE7F44:
	// rlwinm r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82de7f5c
	if (cr6.eq) goto loc_82DE7F5C;
	// addi r3,r1,2464
	ctx.r3.s64 = ctx.r1.s64 + 2464;
	// rlwinm r30,r30,0,27,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82b7a190
	ctx.lr = 0x82DE7F5C;
	sub_82B7A190(ctx, base);
loc_82DE7F5C:
	// rlwinm r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82de7f74
	if (cr6.eq) goto loc_82DE7F74;
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// rlwinm r30,r30,0,28,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82b7a190
	ctx.lr = 0x82DE7F74;
	sub_82B7A190(ctx, base);
loc_82DE7F74:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de7f88
	if (cr6.eq) goto loc_82DE7F88;
	// addi r24,r24,48
	ctx.r24.s64 = ctx.r24.s64 + 48;
	// b 0x82de7e10
	goto loc_82DE7E10;
loc_82DE7F88:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// li r22,15
	ctx.r22.s64 = 15;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r20,2
	ctx.r20.s64 = 2;
loc_82DE7F9C:
	// cmplw cr6,r29,r18
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r18.u32, xer);
	// bge cr6,0x82de81a8
	if (!cr6.lt) goto loc_82DE81A8;
loc_82DE7FA4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82c67528
	ctx.lr = 0x82DE7FB0;
	sub_82C67528(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82c67528
	ctx.lr = 0x82DE7FBC;
	sub_82C67528(ctx, base);
	// lwz r11,604(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r10,892(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de7fe4
	if (cr6.eq) goto loc_82DE7FE4;
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
	// clrlwi r30,r6,31
	ctx.r30.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de8008
	goto loc_82DE8008;
loc_82DE7FE4:
	// lwz r11,592(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// lwz r10,880(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 880);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de8004
	if (cr6.eq) goto loc_82DE8004;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r30,r9,31
	ctx.r30.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de8008
	goto loc_82DE8008;
loc_82DE8004:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82DE8008:
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82b7a190
	ctx.lr = 0x82DE8010;
	sub_82B7A190(ctx, base);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82b7a190
	ctx.lr = 0x82DE8018;
	sub_82B7A190(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de819c
	if (!cr6.eq) goto loc_82DE819C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x82c67528
	ctx.lr = 0x82DE8030;
	sub_82C67528(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x82c67528
	ctx.lr = 0x82DE803C;
	sub_82C67528(ctx, base);
	// lwz r11,1180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1180);
	// lwz r10,1468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1468);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de8064
	if (cr6.eq) goto loc_82DE8064;
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
	// clrlwi r30,r6,31
	ctx.r30.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de8088
	goto loc_82DE8088;
loc_82DE8064:
	// lwz r11,1168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1168);
	// lwz r10,1456(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1456);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de8084
	if (cr6.eq) goto loc_82DE8084;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r30,r9,31
	ctx.r30.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de8088
	goto loc_82DE8088;
loc_82DE8084:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82DE8088:
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x82b7a190
	ctx.lr = 0x82DE8090;
	sub_82B7A190(ctx, base);
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x82b7a190
	ctx.lr = 0x82DE8098;
	sub_82B7A190(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de81a8
	if (!cr6.eq) goto loc_82DE81A8;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lhz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r24.u32 + 4);
	// addi r28,r24,16
	ctx.r28.s64 = ctx.r24.s64 + 16;
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r23,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r23.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r24,r24,48
	ctx.r24.s64 = ctx.r24.s64 + 48;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// sth r10,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r10.u16);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE80F0;
	sub_8259CB28(ctx, base);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// addi r27,r29,16
	ctx.r27.s64 = ctx.r29.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stb r11,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r11.u8);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE8130;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r7,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r7.u8);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// sth r10,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r10.u16);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// stw r8,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE816C;
	sub_8259CB28(ctx, base);
	// lbz r7,156(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// stb r7,44(r29)
	PPC_STORE_U8(ctx.r29.u32 + 44, ctx.r7.u8);
	// blt cr6,0x82de8190
	if (cr6.lt) goto loc_82DE8190;
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82DE8190;
	sub_825952B8(ctx, base);
loc_82DE8190:
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// stb r23,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r23.u8);
loc_82DE819C:
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmplw cr6,r29,r18
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r18.u32, xer);
	// blt cr6,0x82de7fa4
	if (cr6.lt) goto loc_82DE7FA4;
loc_82DE81A8:
	// cmplw cr6,r21,r19
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r19.u32, xer);
	// ble cr6,0x82de83c0
	if (!cr6.gt) goto loc_82DE83C0;
	// addi r30,r21,-40
	ctx.r30.s64 = ctx.r21.s64 + -40;
loc_82DE81B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// bl 0x82c67528
	ctx.lr = 0x82DE81C0;
	sub_82C67528(ctx, base);
	// addi r25,r30,-8
	ctx.r25.s64 = ctx.r30.s64 + -8;
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82c67528
	ctx.lr = 0x82DE81D0;
	sub_82C67528(ctx, base);
	// lwz r11,1756(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1756);
	// lwz r10,2044(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2044);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de81f8
	if (cr6.eq) goto loc_82DE81F8;
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
	// clrlwi r28,r6,31
	ctx.r28.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de821c
	goto loc_82DE821C;
loc_82DE81F8:
	// lwz r11,1744(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1744);
	// lwz r10,2032(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2032);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de8218
	if (cr6.eq) goto loc_82DE8218;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r28,r9,31
	ctx.r28.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de821c
	goto loc_82DE821C;
loc_82DE8218:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82DE821C:
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// bl 0x82b7a190
	ctx.lr = 0x82DE8224;
	sub_82B7A190(ctx, base);
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// bl 0x82b7a190
	ctx.lr = 0x82DE822C;
	sub_82B7A190(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de83a8
	if (!cr6.eq) goto loc_82DE83A8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// bl 0x82c67528
	ctx.lr = 0x82DE8244;
	sub_82C67528(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// bl 0x82c67528
	ctx.lr = 0x82DE8250;
	sub_82C67528(ctx, base);
	// lwz r11,2332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2332);
	// lwz r10,2620(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2620);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de8278
	if (cr6.eq) goto loc_82DE8278;
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
	// clrlwi r28,r6,31
	ctx.r28.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de829c
	goto loc_82DE829C;
loc_82DE8278:
	// lwz r11,2320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2320);
	// lwz r10,2608(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2608);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de8298
	if (cr6.eq) goto loc_82DE8298;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r28,r9,31
	ctx.r28.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de829c
	goto loc_82DE829C;
loc_82DE8298:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82DE829C:
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// bl 0x82b7a190
	ctx.lr = 0x82DE82A4;
	sub_82B7A190(ctx, base);
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// bl 0x82b7a190
	ctx.lr = 0x82DE82AC;
	sub_82B7A190(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de83bc
	if (!cr6.eq) goto loc_82DE83BC;
	// lwzu r11,-48(r31)
	ea = -48 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r22,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r23,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r23.u32);
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// stb r23,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r23.u8);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// sth r10,356(r1)
	PPC_STORE_U16(ctx.r1.u32 + 356, ctx.r10.u16);
	// stw r9,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r9.u32);
	// stw r8,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE82FC;
	sub_8259CB28(ctx, base);
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + -4);
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stb r11,396(r1)
	PPC_STORE_U8(ctx.r1.u32 + 396, ctx.r11.u8);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE833C;
	sub_8259CB28(ctx, base);
	// lbz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// lwz r11,352(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 356);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,360(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// lwz r8,364(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r7,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r7.u8);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// sth r10,-4(r30)
	PPC_STORE_U16(ctx.r30.u32 + -4, ctx.r10.u16);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE8378;
	sub_8259CB28(ctx, base);
	// lbz r7,396(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 396);
	// lwz r6,388(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// stb r7,36(r30)
	PPC_STORE_U8(ctx.r30.u32 + 36, ctx.r7.u8);
	// blt cr6,0x82de839c
	if (cr6.lt) goto loc_82DE839C;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x825952b8
	ctx.lr = 0x82DE839C;
	sub_825952B8(ctx, base);
loc_82DE839C:
	// stw r22,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r22.u32);
	// stw r23,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r23.u32);
	// stb r23,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r23.u8);
loc_82DE83A8:
	// addi r11,r21,-48
	ctx.r11.s64 = ctx.r21.s64 + -48;
	// addi r30,r30,-48
	ctx.r30.s64 = ctx.r30.s64 + -48;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// cmplw cr6,r19,r11
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, xer);
	// blt cr6,0x82de81b4
	if (cr6.lt) goto loc_82DE81B4;
loc_82DE83BC:
	// cmplw cr6,r21,r19
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r19.u32, xer);
loc_82DE83C0:
	// bne cr6,0x82de85cc
	if (!cr6.eq) goto loc_82DE85CC;
	// cmplw cr6,r29,r18
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r18.u32, xer);
	// beq cr6,0x82de88cc
	if (cr6.eq) goto loc_82DE88CC;
	// cmplw cr6,r24,r29
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r29.u32, xer);
	// beq cr6,0x82de84c4
	if (cr6.eq) goto loc_82DE84C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r22,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r22.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// stw r23,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r23.u32);
	// sth r10,260(r1)
	PPC_STORE_U16(ctx.r1.u32 + 260, ctx.r10.u16);
	// stb r23,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r23.u8);
	// stw r9,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r9.u32);
	// stw r8,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE8418;
	sub_8259CB28(ctx, base);
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// addi r28,r24,16
	ctx.r28.s64 = ctx.r24.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r24.u32 + 4);
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// stb r11,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r11.u8);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE8458;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r24)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r24.u32 + 44);
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 260);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,264(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r8,268(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r7,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r7.u8);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// sth r10,4(r24)
	PPC_STORE_U16(ctx.r24.u32 + 4, ctx.r10.u16);
	// stw r9,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r9.u32);
	// stw r8,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE8494;
	sub_8259CB28(ctx, base);
	// lbz r7,300(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 300);
	// lwz r6,292(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// stb r7,44(r24)
	PPC_STORE_U8(ctx.r24.u32 + 44, ctx.r7.u8);
	// blt cr6,0x82de84b8
	if (cr6.lt) goto loc_82DE84B8;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x82DE84B8;
	sub_825952B8(ctx, base);
loc_82DE84B8:
	// stw r22,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r22.u32);
	// stw r23,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r23.u32);
	// stb r23,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r23.u8);
loc_82DE84C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r22,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r22.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r23,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r23.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stb r23,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r23.u8);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// addi r24,r24,48
	ctx.r24.s64 = ctx.r24.s64 + 48;
	// sth r10,164(r1)
	PPC_STORE_U16(ctx.r1.u32 + 164, ctx.r10.u16);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE851C;
	sub_8259CB28(ctx, base);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// addi r25,r28,16
	ctx.r25.s64 = ctx.r28.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r11,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r11.u8);
	// lhz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE855C;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r8,172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r7,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r7.u8);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// sth r10,4(r28)
	PPC_STORE_U16(ctx.r28.u32 + 4, ctx.r10.u16);
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// stw r8,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE8598;
	sub_8259CB28(ctx, base);
	// lbz r7,204(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 204);
	// lwz r6,196(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// stb r7,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r7.u8);
	// blt cr6,0x82de85bc
	if (cr6.lt) goto loc_82DE85BC;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82DE85BC;
	sub_825952B8(ctx, base);
loc_82DE85BC:
	// stw r22,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r22.u32);
	// stw r23,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r23.u32);
	// stb r23,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r23.u8);
	// b 0x82de7f9c
	goto loc_82DE7F9C;
loc_82DE85CC:
	// cmplw cr6,r29,r18
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r18.u32, xer);
	// bne cr6,0x82de87cc
	if (!cr6.eq) goto loc_82DE87CC;
	// addi r11,r21,-48
	ctx.r11.s64 = ctx.r21.s64 + -48;
	// addi r31,r31,-48
	ctx.r31.s64 = ctx.r31.s64 + -48;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82de86d8
	if (cr6.eq) goto loc_82DE86D8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r21,16
	ctx.r30.s64 = ctx.r21.s64 + 16;
	// lhz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r21.u32 + 4);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r9,8(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,12(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r22,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r22.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r23,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r23.u32);
	// sth r10,212(r1)
	PPC_STORE_U16(ctx.r1.u32 + 212, ctx.r10.u16);
	// stb r23,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r23.u8);
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE862C;
	sub_8259CB28(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,44(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 44);
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r10,4(r21)
	PPC_STORE_U16(ctx.r21.u32 + 4, ctx.r10.u16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r11,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r11.u8);
	// stw r8,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE866C;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 212);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r8,220(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r7,44(r21)
	PPC_STORE_U8(ctx.r21.u32 + 44, ctx.r7.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE86A8;
	sub_8259CB28(ctx, base);
	// lbz r7,252(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 252);
	// lwz r6,244(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// stb r7,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r7.u8);
	// blt cr6,0x82de86cc
	if (cr6.lt) goto loc_82DE86CC;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82DE86CC;
	sub_825952B8(ctx, base);
loc_82DE86CC:
	// stw r22,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r22.u32);
	// stw r23,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r23.u32);
	// stb r23,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r23.u8);
loc_82DE86D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r22,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r22.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// stw r23,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r23.u32);
	// sth r10,308(r1)
	PPC_STORE_U16(ctx.r1.u32 + 308, ctx.r10.u16);
	// stb r23,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r23.u8);
	// stw r9,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r9.u32);
	// stw r8,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE871C;
	sub_8259CB28(ctx, base);
	// lwzu r7,-48(r24)
	ea = -48 + ctx.r24.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r24.u32 = ea;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r30,r24,16
	ctx.r30.s64 = ctx.r24.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,348(r1)
	PPC_STORE_U8(ctx.r1.u32 + 348, ctx.r11.u8);
	// lhz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r24.u32 + 4);
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE875C;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r24)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r24.u32 + 44);
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 308);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,312(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r8,316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r7,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r7.u8);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// sth r10,4(r24)
	PPC_STORE_U16(ctx.r24.u32 + 4, ctx.r10.u16);
	// stw r9,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r9.u32);
	// stw r8,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE8798;
	sub_8259CB28(ctx, base);
	// lbz r7,348(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 348);
	// lwz r6,340(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// stb r7,44(r24)
	PPC_STORE_U8(ctx.r24.u32 + 44, ctx.r7.u8);
	// blt cr6,0x82de87bc
	if (cr6.lt) goto loc_82DE87BC;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x82DE87BC;
	sub_825952B8(ctx, base);
loc_82DE87BC:
	// stw r22,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r22.u32);
	// stw r23,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r23.u32);
	// stb r23,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r23.u8);
	// b 0x82de7f9c
	goto loc_82DE7F9C;
loc_82DE87CC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r29,16
	ctx.r28.s64 = ctx.r29.s64 + 16;
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r30,r21,-48
	ctx.r30.s64 = ctx.r21.s64 + -48;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r22,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r11.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// sth r10,404(r1)
	PPC_STORE_U16(ctx.r1.u32 + 404, ctx.r10.u16);
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// stw r23,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r23.u32);
	// stw r9,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r9.u32);
	// stb r23,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r23.u8);
	// stw r8,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE8818;
	sub_8259CB28(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// addi r27,r30,16
	ctx.r27.s64 = ctx.r30.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,444(r1)
	PPC_STORE_U8(ctx.r1.u32 + 444, ctx.r11.u8);
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// sth r10,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r10.u16);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE8858;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// lwz r11,400(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 404);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,408(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// lwz r8,412(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r7,44(r29)
	PPC_STORE_U8(ctx.r29.u32 + 44, ctx.r7.u8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE8894;
	sub_8259CB28(ctx, base);
	// lbz r7,444(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 444);
	// lwz r6,436(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// stb r7,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r7.u8);
	// blt cr6,0x82de88b8
	if (cr6.lt) goto loc_82DE88B8;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x825952b8
	ctx.lr = 0x82DE88B8;
	sub_825952B8(ctx, base);
loc_82DE88B8:
	// stw r22,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r22.u32);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// stw r23,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r23.u32);
	// stb r23,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r23.u8);
	// b 0x82de7f9c
	goto loc_82DE7F9C;
loc_82DE88CC:
	// stw r31,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r31.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r24,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r24.u32);
	// addi r1,r1,2880
	ctx.r1.s64 = ctx.r1.s64 + 2880;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE88E0"))) PPC_WEAK_FUNC(sub_82DE88E0);
PPC_FUNC_IMPL(__imp__sub_82DE88E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82DE88E8;
	__savegprlr_17(ctx, base);
	// stwu r1,-2880(r1)
	ea = -2880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// divw r9,r11,r10
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r5,-48
	ctx.r5.s64 = ctx.r5.s64 + -48;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82de7580
	ctx.lr = 0x82DE892C;
	sub_82DE7580(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r24,r31,48
	ctx.r24.s64 = ctx.r31.s64 + 48;
	// cmplw cr6,r19,r31
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r31.u32, xer);
	// bge cr6,0x82de8a4c
	if (!cr6.lt) goto loc_82DE8A4C;
loc_82DE893C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82c67528
	ctx.lr = 0x82DE8948;
	sub_82C67528(ctx, base);
	// addi r29,r31,-48
	ctx.r29.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c67528
	ctx.lr = 0x82DE8958;
	sub_82C67528(ctx, base);
	// lwz r11,460(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r10,748(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de8980
	if (cr6.eq) goto loc_82DE8980;
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
	// clrlwi r30,r6,31
	ctx.r30.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de89a4
	goto loc_82DE89A4;
loc_82DE8980:
	// lwz r11,448(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// lwz r10,736(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de89a0
	if (cr6.eq) goto loc_82DE89A0;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r30,r9,31
	ctx.r30.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de89a4
	goto loc_82DE89A4;
loc_82DE89A0:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82DE89A4:
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82b7a190
	ctx.lr = 0x82DE89AC;
	sub_82B7A190(ctx, base);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82b7a190
	ctx.lr = 0x82DE89B4;
	sub_82B7A190(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de8a4c
	if (!cr6.eq) goto loc_82DE8A4C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x82c67528
	ctx.lr = 0x82DE89CC;
	sub_82C67528(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,2176
	ctx.r3.s64 = ctx.r1.s64 + 2176;
	// bl 0x82c67528
	ctx.lr = 0x82DE89D8;
	sub_82C67528(ctx, base);
	// lwz r11,2188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2188);
	// lwz r10,1036(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1036);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de8a00
	if (cr6.eq) goto loc_82DE8A00;
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
	// clrlwi r30,r6,31
	ctx.r30.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de8a24
	goto loc_82DE8A24;
loc_82DE8A00:
	// lwz r11,2176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2176);
	// lwz r10,1024(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1024);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de8a20
	if (cr6.eq) goto loc_82DE8A20;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r30,r9,31
	ctx.r30.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de8a24
	goto loc_82DE8A24;
loc_82DE8A20:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82DE8A24:
	// addi r3,r1,2176
	ctx.r3.s64 = ctx.r1.s64 + 2176;
	// bl 0x82b7a190
	ctx.lr = 0x82DE8A2C;
	sub_82B7A190(ctx, base);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x82b7a190
	ctx.lr = 0x82DE8A34;
	sub_82B7A190(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de8a4c
	if (!cr6.eq) goto loc_82DE8A4C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r19,r29
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r29.u32, xer);
	// blt cr6,0x82de893c
	if (cr6.lt) goto loc_82DE893C;
loc_82DE8A4C:
	// cmplw cr6,r24,r18
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r18.u32, xer);
	// bge cr6,0x82de8b60
	if (!cr6.lt) goto loc_82DE8B60;
loc_82DE8A54:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x82c67528
	ctx.lr = 0x82DE8A60;
	sub_82C67528(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,1888
	ctx.r3.s64 = ctx.r1.s64 + 1888;
	// bl 0x82c67528
	ctx.lr = 0x82DE8A6C;
	sub_82C67528(ctx, base);
	// lwz r11,1900(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1900);
	// lwz r10,1324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1324);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de8a94
	if (cr6.eq) goto loc_82DE8A94;
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
	// clrlwi r30,r6,31
	ctx.r30.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de8ab8
	goto loc_82DE8AB8;
loc_82DE8A94:
	// lwz r11,1888(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1888);
	// lwz r10,1312(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1312);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de8ab4
	if (cr6.eq) goto loc_82DE8AB4;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r30,r9,31
	ctx.r30.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de8ab8
	goto loc_82DE8AB8;
loc_82DE8AB4:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82DE8AB8:
	// addi r3,r1,1888
	ctx.r3.s64 = ctx.r1.s64 + 1888;
	// bl 0x82b7a190
	ctx.lr = 0x82DE8AC0;
	sub_82B7A190(ctx, base);
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x82b7a190
	ctx.lr = 0x82DE8AC8;
	sub_82B7A190(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de8b60
	if (!cr6.eq) goto loc_82DE8B60;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// bl 0x82c67528
	ctx.lr = 0x82DE8AE0;
	sub_82C67528(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,2464
	ctx.r3.s64 = ctx.r1.s64 + 2464;
	// bl 0x82c67528
	ctx.lr = 0x82DE8AEC;
	sub_82C67528(ctx, base);
	// lwz r11,2476(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2476);
	// lwz r10,1612(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1612);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de8b14
	if (cr6.eq) goto loc_82DE8B14;
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
	// clrlwi r30,r6,31
	ctx.r30.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de8b38
	goto loc_82DE8B38;
loc_82DE8B14:
	// lwz r11,2464(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2464);
	// lwz r10,1600(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1600);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de8b34
	if (cr6.eq) goto loc_82DE8B34;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r30,r9,31
	ctx.r30.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de8b38
	goto loc_82DE8B38;
loc_82DE8B34:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82DE8B38:
	// addi r3,r1,2464
	ctx.r3.s64 = ctx.r1.s64 + 2464;
	// bl 0x82b7a190
	ctx.lr = 0x82DE8B40;
	sub_82B7A190(ctx, base);
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// bl 0x82b7a190
	ctx.lr = 0x82DE8B48;
	sub_82B7A190(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de8b60
	if (!cr6.eq) goto loc_82DE8B60;
	// addi r24,r24,48
	ctx.r24.s64 = ctx.r24.s64 + 48;
	// cmplw cr6,r24,r18
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r18.u32, xer);
	// blt cr6,0x82de8a54
	if (cr6.lt) goto loc_82DE8A54;
loc_82DE8B60:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// li r22,15
	ctx.r22.s64 = 15;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r20,2
	ctx.r20.s64 = 2;
loc_82DE8B74:
	// cmplw cr6,r29,r18
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r18.u32, xer);
	// bge cr6,0x82de8d80
	if (!cr6.lt) goto loc_82DE8D80;
loc_82DE8B7C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82c67528
	ctx.lr = 0x82DE8B88;
	sub_82C67528(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82c67528
	ctx.lr = 0x82DE8B94;
	sub_82C67528(ctx, base);
	// lwz r11,604(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r10,892(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de8bbc
	if (cr6.eq) goto loc_82DE8BBC;
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
	// clrlwi r30,r6,31
	ctx.r30.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de8be0
	goto loc_82DE8BE0;
loc_82DE8BBC:
	// lwz r11,592(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// lwz r10,880(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 880);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de8bdc
	if (cr6.eq) goto loc_82DE8BDC;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r30,r9,31
	ctx.r30.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de8be0
	goto loc_82DE8BE0;
loc_82DE8BDC:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82DE8BE0:
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82b7a190
	ctx.lr = 0x82DE8BE8;
	sub_82B7A190(ctx, base);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82b7a190
	ctx.lr = 0x82DE8BF0;
	sub_82B7A190(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de8d74
	if (!cr6.eq) goto loc_82DE8D74;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x82c67528
	ctx.lr = 0x82DE8C08;
	sub_82C67528(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x82c67528
	ctx.lr = 0x82DE8C14;
	sub_82C67528(ctx, base);
	// lwz r11,1180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1180);
	// lwz r10,1468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1468);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de8c3c
	if (cr6.eq) goto loc_82DE8C3C;
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
	// clrlwi r30,r6,31
	ctx.r30.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de8c60
	goto loc_82DE8C60;
loc_82DE8C3C:
	// lwz r11,1168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1168);
	// lwz r10,1456(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1456);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de8c5c
	if (cr6.eq) goto loc_82DE8C5C;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r30,r9,31
	ctx.r30.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de8c60
	goto loc_82DE8C60;
loc_82DE8C5C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82DE8C60:
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x82b7a190
	ctx.lr = 0x82DE8C68;
	sub_82B7A190(ctx, base);
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x82b7a190
	ctx.lr = 0x82DE8C70;
	sub_82B7A190(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de8d80
	if (!cr6.eq) goto loc_82DE8D80;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lhz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r24.u32 + 4);
	// addi r28,r24,16
	ctx.r28.s64 = ctx.r24.s64 + 16;
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r23,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r23.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r24,r24,48
	ctx.r24.s64 = ctx.r24.s64 + 48;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// sth r10,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r10.u16);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE8CC8;
	sub_8259CB28(ctx, base);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// addi r27,r29,16
	ctx.r27.s64 = ctx.r29.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stb r11,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r11.u8);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE8D08;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r7,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r7.u8);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// sth r10,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r10.u16);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// stw r8,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE8D44;
	sub_8259CB28(ctx, base);
	// lbz r7,156(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// stb r7,44(r29)
	PPC_STORE_U8(ctx.r29.u32 + 44, ctx.r7.u8);
	// blt cr6,0x82de8d68
	if (cr6.lt) goto loc_82DE8D68;
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82DE8D68;
	sub_825952B8(ctx, base);
loc_82DE8D68:
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// stb r23,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r23.u8);
loc_82DE8D74:
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmplw cr6,r29,r18
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r18.u32, xer);
	// blt cr6,0x82de8b7c
	if (cr6.lt) goto loc_82DE8B7C;
loc_82DE8D80:
	// cmplw cr6,r21,r19
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r19.u32, xer);
	// ble cr6,0x82de8f98
	if (!cr6.gt) goto loc_82DE8F98;
	// addi r30,r21,-40
	ctx.r30.s64 = ctx.r21.s64 + -40;
loc_82DE8D8C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// bl 0x82c67528
	ctx.lr = 0x82DE8D98;
	sub_82C67528(ctx, base);
	// addi r25,r30,-8
	ctx.r25.s64 = ctx.r30.s64 + -8;
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82c67528
	ctx.lr = 0x82DE8DA8;
	sub_82C67528(ctx, base);
	// lwz r11,1756(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1756);
	// lwz r10,2044(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2044);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de8dd0
	if (cr6.eq) goto loc_82DE8DD0;
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
	// clrlwi r28,r6,31
	ctx.r28.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de8df4
	goto loc_82DE8DF4;
loc_82DE8DD0:
	// lwz r11,1744(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1744);
	// lwz r10,2032(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2032);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de8df0
	if (cr6.eq) goto loc_82DE8DF0;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r28,r9,31
	ctx.r28.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de8df4
	goto loc_82DE8DF4;
loc_82DE8DF0:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82DE8DF4:
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// bl 0x82b7a190
	ctx.lr = 0x82DE8DFC;
	sub_82B7A190(ctx, base);
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// bl 0x82b7a190
	ctx.lr = 0x82DE8E04;
	sub_82B7A190(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de8f80
	if (!cr6.eq) goto loc_82DE8F80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// bl 0x82c67528
	ctx.lr = 0x82DE8E1C;
	sub_82C67528(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// bl 0x82c67528
	ctx.lr = 0x82DE8E28;
	sub_82C67528(ctx, base);
	// lwz r11,2332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2332);
	// lwz r10,2620(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2620);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82de8e50
	if (cr6.eq) goto loc_82DE8E50;
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
	// clrlwi r28,r6,31
	ctx.r28.u64 = ctx.r6.u32 & 0x1;
	// b 0x82de8e74
	goto loc_82DE8E74;
loc_82DE8E50:
	// lwz r11,2320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2320);
	// lwz r10,2608(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2608);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82de8e70
	if (cr6.eq) goto loc_82DE8E70;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r28,r9,31
	ctx.r28.u64 = ctx.r9.u32 & 0x1;
	// b 0x82de8e74
	goto loc_82DE8E74;
loc_82DE8E70:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82DE8E74:
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// bl 0x82b7a190
	ctx.lr = 0x82DE8E7C;
	sub_82B7A190(ctx, base);
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// bl 0x82b7a190
	ctx.lr = 0x82DE8E84;
	sub_82B7A190(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82de8f94
	if (!cr6.eq) goto loc_82DE8F94;
	// lwzu r11,-48(r31)
	ea = -48 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r22,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r23,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r23.u32);
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// stb r23,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r23.u8);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// sth r10,356(r1)
	PPC_STORE_U16(ctx.r1.u32 + 356, ctx.r10.u16);
	// stw r9,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r9.u32);
	// stw r8,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE8ED4;
	sub_8259CB28(ctx, base);
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + -4);
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stb r11,396(r1)
	PPC_STORE_U8(ctx.r1.u32 + 396, ctx.r11.u8);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE8F14;
	sub_8259CB28(ctx, base);
	// lbz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// lwz r11,352(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 356);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,360(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// lwz r8,364(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r7,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r7.u8);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// sth r10,-4(r30)
	PPC_STORE_U16(ctx.r30.u32 + -4, ctx.r10.u16);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE8F50;
	sub_8259CB28(ctx, base);
	// lbz r7,396(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 396);
	// lwz r6,388(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// stb r7,36(r30)
	PPC_STORE_U8(ctx.r30.u32 + 36, ctx.r7.u8);
	// blt cr6,0x82de8f74
	if (cr6.lt) goto loc_82DE8F74;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x825952b8
	ctx.lr = 0x82DE8F74;
	sub_825952B8(ctx, base);
loc_82DE8F74:
	// stw r22,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r22.u32);
	// stw r23,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r23.u32);
	// stb r23,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r23.u8);
loc_82DE8F80:
	// addi r11,r21,-48
	ctx.r11.s64 = ctx.r21.s64 + -48;
	// addi r30,r30,-48
	ctx.r30.s64 = ctx.r30.s64 + -48;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// cmplw cr6,r19,r11
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, xer);
	// blt cr6,0x82de8d8c
	if (cr6.lt) goto loc_82DE8D8C;
loc_82DE8F94:
	// cmplw cr6,r21,r19
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r19.u32, xer);
loc_82DE8F98:
	// bne cr6,0x82de91a4
	if (!cr6.eq) goto loc_82DE91A4;
	// cmplw cr6,r29,r18
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r18.u32, xer);
	// beq cr6,0x82de94a4
	if (cr6.eq) goto loc_82DE94A4;
	// cmplw cr6,r24,r29
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r29.u32, xer);
	// beq cr6,0x82de909c
	if (cr6.eq) goto loc_82DE909C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r22,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r22.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// stw r23,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r23.u32);
	// sth r10,260(r1)
	PPC_STORE_U16(ctx.r1.u32 + 260, ctx.r10.u16);
	// stb r23,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r23.u8);
	// stw r9,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r9.u32);
	// stw r8,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE8FF0;
	sub_8259CB28(ctx, base);
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// addi r28,r24,16
	ctx.r28.s64 = ctx.r24.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r24.u32 + 4);
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// stb r11,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r11.u8);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE9030;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r24)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r24.u32 + 44);
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 260);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,264(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r8,268(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r7,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r7.u8);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// sth r10,4(r24)
	PPC_STORE_U16(ctx.r24.u32 + 4, ctx.r10.u16);
	// stw r9,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r9.u32);
	// stw r8,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE906C;
	sub_8259CB28(ctx, base);
	// lbz r7,300(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 300);
	// lwz r6,292(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// stb r7,44(r24)
	PPC_STORE_U8(ctx.r24.u32 + 44, ctx.r7.u8);
	// blt cr6,0x82de9090
	if (cr6.lt) goto loc_82DE9090;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x82DE9090;
	sub_825952B8(ctx, base);
loc_82DE9090:
	// stw r22,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r22.u32);
	// stw r23,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r23.u32);
	// stb r23,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r23.u8);
loc_82DE909C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r22,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r22.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r23,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r23.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stb r23,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r23.u8);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// addi r24,r24,48
	ctx.r24.s64 = ctx.r24.s64 + 48;
	// sth r10,164(r1)
	PPC_STORE_U16(ctx.r1.u32 + 164, ctx.r10.u16);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE90F4;
	sub_8259CB28(ctx, base);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// addi r25,r28,16
	ctx.r25.s64 = ctx.r28.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r11,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r11.u8);
	// lhz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE9134;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r8,172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r7,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r7.u8);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// sth r10,4(r28)
	PPC_STORE_U16(ctx.r28.u32 + 4, ctx.r10.u16);
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// stw r8,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE9170;
	sub_8259CB28(ctx, base);
	// lbz r7,204(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 204);
	// lwz r6,196(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// stb r7,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r7.u8);
	// blt cr6,0x82de9194
	if (cr6.lt) goto loc_82DE9194;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82DE9194;
	sub_825952B8(ctx, base);
loc_82DE9194:
	// stw r22,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r22.u32);
	// stw r23,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r23.u32);
	// stb r23,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r23.u8);
	// b 0x82de8b74
	goto loc_82DE8B74;
loc_82DE91A4:
	// cmplw cr6,r29,r18
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r18.u32, xer);
	// bne cr6,0x82de93a4
	if (!cr6.eq) goto loc_82DE93A4;
	// addi r11,r21,-48
	ctx.r11.s64 = ctx.r21.s64 + -48;
	// addi r31,r31,-48
	ctx.r31.s64 = ctx.r31.s64 + -48;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82de92b0
	if (cr6.eq) goto loc_82DE92B0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r21,16
	ctx.r30.s64 = ctx.r21.s64 + 16;
	// lhz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r21.u32 + 4);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r9,8(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,12(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r22,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r22.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r23,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r23.u32);
	// sth r10,212(r1)
	PPC_STORE_U16(ctx.r1.u32 + 212, ctx.r10.u16);
	// stb r23,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r23.u8);
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE9204;
	sub_8259CB28(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,44(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 44);
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r10,4(r21)
	PPC_STORE_U16(ctx.r21.u32 + 4, ctx.r10.u16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r11,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r11.u8);
	// stw r8,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE9244;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 212);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r8,220(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r7,44(r21)
	PPC_STORE_U8(ctx.r21.u32 + 44, ctx.r7.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE9280;
	sub_8259CB28(ctx, base);
	// lbz r7,252(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 252);
	// lwz r6,244(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// stb r7,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r7.u8);
	// blt cr6,0x82de92a4
	if (cr6.lt) goto loc_82DE92A4;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82DE92A4;
	sub_825952B8(ctx, base);
loc_82DE92A4:
	// stw r22,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r22.u32);
	// stw r23,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r23.u32);
	// stb r23,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r23.u8);
loc_82DE92B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r22,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r22.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// stw r23,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r23.u32);
	// sth r10,308(r1)
	PPC_STORE_U16(ctx.r1.u32 + 308, ctx.r10.u16);
	// stb r23,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r23.u8);
	// stw r9,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r9.u32);
	// stw r8,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE92F4;
	sub_8259CB28(ctx, base);
	// lwzu r7,-48(r24)
	ea = -48 + ctx.r24.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r24.u32 = ea;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r30,r24,16
	ctx.r30.s64 = ctx.r24.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,348(r1)
	PPC_STORE_U8(ctx.r1.u32 + 348, ctx.r11.u8);
	// lhz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r24.u32 + 4);
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE9334;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r24)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r24.u32 + 44);
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 308);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,312(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r8,316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r7,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r7.u8);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// sth r10,4(r24)
	PPC_STORE_U16(ctx.r24.u32 + 4, ctx.r10.u16);
	// stw r9,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r9.u32);
	// stw r8,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE9370;
	sub_8259CB28(ctx, base);
	// lbz r7,348(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 348);
	// lwz r6,340(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// stb r7,44(r24)
	PPC_STORE_U8(ctx.r24.u32 + 44, ctx.r7.u8);
	// blt cr6,0x82de9394
	if (cr6.lt) goto loc_82DE9394;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x82DE9394;
	sub_825952B8(ctx, base);
loc_82DE9394:
	// stw r22,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r22.u32);
	// stw r23,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r23.u32);
	// stb r23,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r23.u8);
	// b 0x82de8b74
	goto loc_82DE8B74;
loc_82DE93A4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r29,16
	ctx.r28.s64 = ctx.r29.s64 + 16;
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r30,r21,-48
	ctx.r30.s64 = ctx.r21.s64 + -48;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r22,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r11.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// sth r10,404(r1)
	PPC_STORE_U16(ctx.r1.u32 + 404, ctx.r10.u16);
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// stw r23,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r23.u32);
	// stw r9,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r9.u32);
	// stb r23,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r23.u8);
	// stw r8,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE93F0;
	sub_8259CB28(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// addi r27,r30,16
	ctx.r27.s64 = ctx.r30.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,444(r1)
	PPC_STORE_U8(ctx.r1.u32 + 444, ctx.r11.u8);
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// sth r10,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r10.u16);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE9430;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// lwz r11,400(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 404);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,408(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// lwz r8,412(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r7,44(r29)
	PPC_STORE_U8(ctx.r29.u32 + 44, ctx.r7.u8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE946C;
	sub_8259CB28(ctx, base);
	// lbz r7,444(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 444);
	// lwz r6,436(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// stb r7,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r7.u8);
	// blt cr6,0x82de9490
	if (cr6.lt) goto loc_82DE9490;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x825952b8
	ctx.lr = 0x82DE9490;
	sub_825952B8(ctx, base);
loc_82DE9490:
	// stw r22,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r22.u32);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// stw r23,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r23.u32);
	// stb r23,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r23.u8);
	// b 0x82de8b74
	goto loc_82DE8B74;
loc_82DE94A4:
	// stw r31,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r31.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r24,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r24.u32);
	// addi r1,r1,2880
	ctx.r1.s64 = ctx.r1.s64 + 2880;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE94B8"))) PPC_WEAK_FUNC(sub_82DE94B8);
PPC_FUNC_IMPL(__imp__sub_82DE94B8) {
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
	// bl 0x82de7928
	ctx.lr = 0x82DE94D8;
	sub_82DE7928(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de94f0
	if (cr6.eq) goto loc_82DE94F0;
	// bl 0x82416268
	ctx.lr = 0x82DE94EC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DE94F0:
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

__attribute__((alias("__imp__sub_82DE9508"))) PPC_WEAK_FUNC(sub_82DE9508);
PPC_FUNC_IMPL(__imp__sub_82DE9508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DE9510;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de9550
	if (cr6.eq) goto loc_82DE9550;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82de5eb8
	ctx.lr = 0x82DE9538;
	sub_82DE5EB8(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c67458
	ctx.lr = 0x82DE954C;
	sub_82C67458(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82DE9550:
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de9588
	if (cr6.eq) goto loc_82DE9588;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82de5eb8
	ctx.lr = 0x82DE9570;
	sub_82DE5EB8(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c67458
	ctx.lr = 0x82DE9584;
	sub_82C67458(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82DE9588:
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x82b79f80
	ctx.lr = 0x82DE9590;
	sub_82B79F80(ctx, base);
	// lwz r4,192(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r30,184
	ctx.r29.s64 = ctx.r30.s64 + 184;
	// std r31,200(r30)
	PPC_STORE_U64(ctx.r30.u32 + 200, ctx.r31.u64);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82de95bc
	if (cr6.eq) goto loc_82DE95BC;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DE95B8;
	sub_825952B8(ctx, base);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
loc_82DE95BC:
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// addi r11,r30,208
	ctx.r11.s64 = ctx.r30.s64 + 208;
	// stw r31,224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 224, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82de95d4
	if (cr6.lt) goto loc_82DE95D4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DE95D4:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r31.u32);
	// blt cr6,0x82de95f8
	if (cr6.lt) goto loc_82DE95F8;
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DE95F8:
	// stb r31,236(r30)
	PPC_STORE_U8(ctx.r30.u32 + 236, ctx.r31.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE9604"))) PPC_WEAK_FUNC(sub_82DE9604);
PPC_FUNC_IMPL(__imp__sub_82DE9604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE9608"))) PPC_WEAK_FUNC(sub_82DE9608);
PPC_FUNC_IMPL(__imp__sub_82DE9608) {
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
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de9654
	if (cr6.eq) goto loc_82DE9654;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82de5eb8
	ctx.lr = 0x82DE963C;
	sub_82DE5EB8(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c67458
	ctx.lr = 0x82DE9650;
	sub_82C67458(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82DE9654:
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

__attribute__((alias("__imp__sub_82DE966C"))) PPC_WEAK_FUNC(sub_82DE966C);
PPC_FUNC_IMPL(__imp__sub_82DE966C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE9670"))) PPC_WEAK_FUNC(sub_82DE9670);
PPC_FUNC_IMPL(__imp__sub_82DE9670) {
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
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de96bc
	if (cr6.eq) goto loc_82DE96BC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82de5eb8
	ctx.lr = 0x82DE96A4;
	sub_82DE5EB8(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c67458
	ctx.lr = 0x82DE96B8;
	sub_82C67458(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82DE96BC:
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

__attribute__((alias("__imp__sub_82DE96D4"))) PPC_WEAK_FUNC(sub_82DE96D4);
PPC_FUNC_IMPL(__imp__sub_82DE96D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE96D8"))) PPC_WEAK_FUNC(sub_82DE96D8);
PPC_FUNC_IMPL(__imp__sub_82DE96D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DE96E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82de9838
	if (cr6.eq) goto loc_82DE9838;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,48
	ctx.r29.s64 = 48;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r3,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r3.s64;
	// divw. r9,r11,r29
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r29.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82de9720
	if (!cr0.eq) goto loc_82DE9720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7b58
	ctx.lr = 0x82DE9714;
	sub_82DE7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DE9720:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// divw r10,r10,r29
	ctx.r10.s32 = PPCDivide(ctx.r10.s32, ctx.r29.s32);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82de978c
	if (cr6.gt) goto loc_82DE978C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x82de5eb8
	ctx.lr = 0x82DE9748;
	sub_82DE5EB8(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c67458
	ctx.lr = 0x82DE9758;
	sub_82C67458(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r8,r29
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DE978C:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r6,r7,r29
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r29.s32);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bgt cr6,0x82de97cc
	if (cr6.gt) goto loc_82DE97CC;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82de5eb8
	ctx.lr = 0x82DE97C0;
	sub_82DE5EB8(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82de9824
	goto loc_82DE9824;
loc_82DE97CC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82de97f8
	if (cr6.eq) goto loc_82DE97F8;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82c67458
	ctx.lr = 0x82DE97E4;
	sub_82C67458(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DE97F8;
	sub_825952B8(ctx, base);
loc_82DE97F8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r4,r9,r29
	ctx.r4.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// bl 0x82de5d88
	ctx.lr = 0x82DE9810;
	sub_82DE5D88(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82de9838
	if (cr6.eq) goto loc_82DE9838;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82DE9824:
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82de5f38
	ctx.lr = 0x82DE9834;
	sub_82DE5F38(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82DE9838:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE9844"))) PPC_WEAK_FUNC(sub_82DE9844);
PPC_FUNC_IMPL(__imp__sub_82DE9844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE9848"))) PPC_WEAK_FUNC(sub_82DE9848);
PPC_FUNC_IMPL(__imp__sub_82DE9848) {
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
	// bge cr6,0x82de9880
	if (!cr6.lt) goto loc_82DE9880;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82de9884
	if (!cr6.gt) goto loc_82DE9884;
loc_82DE9880:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82DE9884:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82de98dc
	if (cr6.eq) goto loc_82DE98DC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,48
	ctx.r9.s64 = 48;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82de98b8
	if (!cr6.eq) goto loc_82DE98B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7bc0
	ctx.lr = 0x82DE98B8;
	sub_82DE7BC0(ctx, base);
loc_82DE98B8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de9908
	if (cr6.eq) goto loc_82DE9908;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82de9904
	goto loc_82DE9904;
loc_82DE98DC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82de98f4
	if (!cr6.eq) goto loc_82DE98F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82de7bc0
	ctx.lr = 0x82DE98F4;
	sub_82DE7BC0(ctx, base);
loc_82DE98F4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82de9908
	if (cr6.eq) goto loc_82DE9908;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82DE9904:
	// bl 0x82de5e30
	ctx.lr = 0x82DE9908;
	sub_82DE5E30(ctx, base);
loc_82DE9908:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
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

__attribute__((alias("__imp__sub_82DE992C"))) PPC_WEAK_FUNC(sub_82DE992C);
PPC_FUNC_IMPL(__imp__sub_82DE992C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE9930"))) PPC_WEAK_FUNC(sub_82DE9930);
PPC_FUNC_IMPL(__imp__sub_82DE9930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82DE9938;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,48
	ctx.r25.s64 = 48;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r10,r11,r25
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ble cr6,0x82de9a50
	if (!cr6.gt) goto loc_82DE9A50;
	// subfic r24,r3,-8
	xer.ca = ctx.r3.u32 <= 4294967288;
	ctx.r24.s64 = -8 - ctx.r3.s64;
	// addi r23,r3,16
	ctx.r23.s64 = ctx.r3.s64 + 16;
	// addi r31,r4,-40
	ctx.r31.s64 = ctx.r4.s64 + -40;
	// subfic r22,r3,40
	xer.ca = ctx.r3.u32 <= 40;
	ctx.r22.s64 = 40 - ctx.r3.s64;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r21,2
	ctx.r21.s64 = 2;
loc_82DE9974:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// lhz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -4);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// sth r10,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE99B8;
	sub_8259CB28(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r7,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r7.u32);
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// sth r10,-4(r31)
	PPC_STORE_U16(ctx.r31.u32 + -4, ctx.r10.u16);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stb r11,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r11.u8);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE99F4;
	sub_8259CB28(ctx, base);
	// lbz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// add r7,r24,r31
	ctx.r7.u64 = ctx.r24.u64 + ctx.r31.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// divw r5,r7,r25
	ctx.r5.s32 = PPCDivide(ctx.r7.s32, ctx.r25.s32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de6d80
	ctx.lr = 0x82DE9A14;
	sub_82DE6D80(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82de9a30
	if (cr6.lt) goto loc_82DE9A30;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82DE9A30;
	sub_825952B8(ctx, base);
loc_82DE9A30:
	// addi r31,r31,-48
	ctx.r31.s64 = ctx.r31.s64 + -48;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// add r11,r22,r31
	ctx.r11.u64 = ctx.r22.u64 + ctx.r31.u64;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// divw r10,r11,r25
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bgt cr6,0x82de9974
	if (cr6.gt) goto loc_82DE9974;
loc_82DE9A50:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE9A58"))) PPC_WEAK_FUNC(sub_82DE9A58);
PPC_FUNC_IMPL(__imp__sub_82DE9A58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82DE9A60;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,48
	ctx.r25.s64 = 48;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r10,r11,r25
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ble cr6,0x82de9b80
	if (!cr6.gt) goto loc_82DE9B80;
	// subfic r24,r3,-8
	xer.ca = ctx.r3.u32 <= 4294967288;
	ctx.r24.s64 = -8 - ctx.r3.s64;
	// addi r23,r3,16
	ctx.r23.s64 = ctx.r3.s64 + 16;
	// addi r31,r4,-40
	ctx.r31.s64 = ctx.r4.s64 + -40;
	// subfic r21,r3,40
	xer.ca = ctx.r3.u32 <= 40;
	ctx.r21.s64 = 40 - ctx.r3.s64;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r20,2
	ctx.r20.s64 = 2;
loc_82DE9AA0:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// lhz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -4);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// sth r10,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE9AE4;
	sub_8259CB28(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r7,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r7.u32);
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// sth r10,-4(r31)
	PPC_STORE_U16(ctx.r31.u32 + -4, ctx.r10.u16);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stb r11,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r11.u8);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DE9B20;
	sub_8259CB28(ctx, base);
	// lbz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// add r5,r24,r31
	ctx.r5.u64 = ctx.r24.u64 + ctx.r31.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// divw r5,r5,r25
	ctx.r5.s32 = PPCDivide(ctx.r5.s32, ctx.r25.s32);
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de6fd8
	ctx.lr = 0x82DE9B44;
	sub_82DE6FD8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82de9b60
	if (cr6.lt) goto loc_82DE9B60;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82DE9B60;
	sub_825952B8(ctx, base);
loc_82DE9B60:
	// addi r31,r31,-48
	ctx.r31.s64 = ctx.r31.s64 + -48;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// add r11,r21,r31
	ctx.r11.u64 = ctx.r21.u64 + ctx.r31.u64;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// divw r10,r11,r25
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bgt cr6,0x82de9aa0
	if (cr6.gt) goto loc_82DE9AA0;
loc_82DE9B80:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE9B88"))) PPC_WEAK_FUNC(sub_82DE9B88);
PPC_FUNC_IMPL(__imp__sub_82DE9B88) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-7188
	ctx.r10.s64 = ctx.r11.s64 + -7188;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x82b7a268
	ctx.lr = 0x82DE9BD0;
	sub_82B7A268(ctx, base);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// addi r8,r9,-7192
	ctx.r8.s64 = ctx.r9.s64 + -7192;
	// std r30,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r8.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stb r30,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r30.u8);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stb r30,236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 236, ctx.r30.u8);
	// bl 0x82de9508
	ctx.lr = 0x82DE9C08;
	sub_82DE9508(ctx, base);
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

__attribute__((alias("__imp__sub_82DE9C24"))) PPC_WEAK_FUNC(sub_82DE9C24);
PPC_FUNC_IMPL(__imp__sub_82DE9C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE9C28"))) PPC_WEAK_FUNC(sub_82DE9C28);
PPC_FUNC_IMPL(__imp__sub_82DE9C28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82de9c3c
	if (!cr6.eq) goto loc_82DE9C3C;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// b 0x82de9848
	sub_82DE9848(ctx, base);
	return;
loc_82DE9C3C:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82de9848
	sub_82DE9848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE9C44"))) PPC_WEAK_FUNC(sub_82DE9C44);
PPC_FUNC_IMPL(__imp__sub_82DE9C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DE9C48"))) PPC_WEAK_FUNC(sub_82DE9C48);
PPC_FUNC_IMPL(__imp__sub_82DE9C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DE9C50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,48
	ctx.r26.s64 = 48;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r11,r11,r26
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r26.s32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82de9cf8
	if (!cr6.gt) goto loc_82DE9CF8;
loc_82DE9C74:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82de9d18
	if (!cr6.gt) goto loc_82DE9D18;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de7c38
	ctx.lr = 0x82DE9C8C;
	sub_82DE7C38(ctx, base);
	// srawi r11,r29,1
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r28,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r28.s64;
	// subf r8,r30,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r30.s64;
	// divw r7,r9,r26
	ctx.r7.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// divw r6,r8,r26
	ctx.r6.s32 = PPCDivide(ctx.r8.s32, ctx.r26.s32);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// bge cr6,0x82de9cd8
	if (!cr6.lt) goto loc_82DE9CD8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de9c48
	ctx.lr = 0x82DE9CD0;
	sub_82DE9C48(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x82de9ce8
	goto loc_82DE9CE8;
loc_82DE9CD8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82de9c48
	ctx.lr = 0x82DE9CE4;
	sub_82DE9C48(ctx, base);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82DE9CE8:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// divw r11,r11,r26
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r26.s32);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x82de9c74
	if (cr6.gt) goto loc_82DE9C74;
loc_82DE9CF8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82de9d10
	if (!cr6.gt) goto loc_82DE9D10;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de72e8
	ctx.lr = 0x82DE9D10;
	sub_82DE72E8(ctx, base);
loc_82DE9D10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82DE9D18:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82de9cf8
	if (!cr6.gt) goto loc_82DE9CF8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82de9d3c
	if (!cr6.gt) goto loc_82DE9D3C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7200
	ctx.lr = 0x82DE9D3C;
	sub_82DE7200(ctx, base);
loc_82DE9D3C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de9930
	ctx.lr = 0x82DE9D48;
	sub_82DE9930(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE9D50"))) PPC_WEAK_FUNC(sub_82DE9D50);
PPC_FUNC_IMPL(__imp__sub_82DE9D50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DE9D58;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,48
	ctx.r25.s64 = 48;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82de9e0c
	if (!cr6.gt) goto loc_82DE9E0C;
loc_82DE9D80:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82de9e30
	if (!cr6.gt) goto loc_82DE9E30;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de88e0
	ctx.lr = 0x82DE9D9C;
	sub_82DE88E0(ctx, base);
	// srawi r11,r29,1
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r27,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subf r8,r30,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r30.s64;
	// divw r7,r9,r25
	ctx.r7.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// divw r6,r8,r25
	ctx.r6.s32 = PPCDivide(ctx.r8.s32, ctx.r25.s32);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bge cr6,0x82de9dec
	if (!cr6.lt) goto loc_82DE9DEC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de9d50
	ctx.lr = 0x82DE9DE4;
	sub_82DE9D50(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82de9dfc
	goto loc_82DE9DFC;
loc_82DE9DEC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82de9d50
	ctx.lr = 0x82DE9DF8;
	sub_82DE9D50(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82DE9DFC:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x82de9d80
	if (cr6.gt) goto loc_82DE9D80;
loc_82DE9E0C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82de9e28
	if (!cr6.gt) goto loc_82DE9E28;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7730
	ctx.lr = 0x82DE9E28;
	sub_82DE7730(ctx, base);
loc_82DE9E28:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DE9E30:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82de9e0c
	if (!cr6.gt) goto loc_82DE9E0C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82de9e58
	if (!cr6.gt) goto loc_82DE9E58;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de7640
	ctx.lr = 0x82DE9E58;
	sub_82DE7640(ctx, base);
loc_82DE9E58:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82de9a58
	ctx.lr = 0x82DE9E68;
	sub_82DE9A58(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DE9E70"))) PPC_WEAK_FUNC(sub_82DE9E70);
PPC_FUNC_IMPL(__imp__sub_82DE9E70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82DE9E78;
	__savegprlr_19(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r28,48
	ctx.r28.s64 = 48;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// divw r5,r11,r28
	ctx.r5.s32 = PPCDivide(ctx.r11.s32, ctx.r28.s32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x82de9c48
	ctx.lr = 0x82DE9EB4;
	sub_82DE9C48(ctx, base);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r24,r29,8
	ctx.r24.s64 = ctx.r29.s64 + 8;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r5,r10,r28
	ctx.r5.s32 = PPCDivide(ctx.r10.s32, ctx.r28.s32);
	// bl 0x82de9c48
	ctx.lr = 0x82DE9ECC;
	sub_82DE9C48(ctx, base);
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r5,r8,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subf r4,r6,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r6.s64;
	// divw r10,r5,r28
	ctx.r10.s32 = PPCDivide(ctx.r5.s32, ctx.r28.s32);
	// divw r11,r4,r28
	ctx.r11.s32 = PPCDivide(ctx.r4.s32, ctx.r28.s32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r4,30
	cr6.compare<uint32_t>(ctx.r4.u32, 30, xer);
	// ble cr6,0x82de9efc
	if (!cr6.gt) goto loc_82DE9EFC;
	// li r4,30
	ctx.r4.s64 = 30;
loc_82DE9EFC:
	// clrlwi r20,r27,24
	ctx.r20.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x82de9f0c
	if (cr6.eq) goto loc_82DE9F0C;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82DE9F0C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82de7a68
	ctx.lr = 0x82DE9F14;
	sub_82DE7A68(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r25,15
	ctx.r25.s64 = 15;
	// li r23,-1
	ctx.r23.s64 = -1;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r22,6
	ctx.r22.s64 = 6;
	// li r19,2
	ctx.r19.s64 = 2;
	// divw. r11,r9,r28
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82de9fe8
	if (cr0.eq) goto loc_82DE9FE8;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82DE9F40:
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r8,r27,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r27.s64;
	// divw r7,r8,r28
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	// cmplwi cr6,r7,30
	cr6.compare<uint32_t>(ctx.r7.u32, 30, xer);
	// bge cr6,0x82de9fec
	if (!cr6.lt) goto loc_82DE9FEC;
	// stw r25,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r25.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r23,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r23.u32);
	// sth r31,228(r1)
	PPC_STORE_U16(ctx.r1.u32 + 228, ctx.r31.u16);
	// stw r22,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r22.u32);
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// beq cr6,0x82de9f94
	if (cr6.eq) goto loc_82DE9F94;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// ble cr6,0x82de9f94
	if (!cr6.gt) goto loc_82DE9F94;
	// add r4,r26,r10
	ctx.r4.u64 = ctx.r26.u64 + ctx.r10.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b7a310
	ctx.lr = 0x82DE9F94;
	sub_82B7A310(ctx, base);
loc_82DE9F94:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82de9848
	ctx.lr = 0x82DE9FA0;
	sub_82DE9848(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82de9fbc
	if (cr6.lt) goto loc_82DE9FBC;
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82DE9FBC;
	sub_825952B8(ctx, base);
loc_82DE9FBC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r26,r26,48
	ctx.r26.s64 = ctx.r26.s64 + 48;
	// stw r25,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r25.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// divw r11,r9,r28
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82de9f40
	if (cr6.lt) goto loc_82DE9F40;
loc_82DE9FE8:
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82DE9FEC:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r11,r9,r28
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82dea0e4
	if (cr0.eq) goto loc_82DEA0E4;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82DEA008:
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r8,r27,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r27.s64;
	// divw r7,r8,r28
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	// cmplwi cr6,r7,30
	cr6.compare<uint32_t>(ctx.r7.u32, 30, xer);
	// bge cr6,0x82dea0e4
	if (!cr6.lt) goto loc_82DEA0E4;
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// sth r31,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r31.u16);
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// beq cr6,0x82dea08c
	if (cr6.eq) goto loc_82DEA08C;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// ble cr6,0x82dea08c
	if (!cr6.gt) goto loc_82DEA08C;
	// lwzx r11,r26,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// add r30,r26,r10
	ctx.r30.u64 = ctx.r26.u64 + ctx.r10.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// sth r10,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r10.u16);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DEA084;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// stb r7,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r7.u8);
loc_82DEA08C:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82de9848
	ctx.lr = 0x82DEA098;
	sub_82DE9848(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dea0b4
	if (cr6.lt) goto loc_82DEA0B4;
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82DEA0B4;
	sub_825952B8(ctx, base);
loc_82DEA0B4:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r26,r26,48
	ctx.r26.s64 = ctx.r26.s64 + 48;
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// divw r11,r9,r28
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82dea008
	if (cr6.lt) goto loc_82DEA008;
loc_82DEA0E4:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x82dea16c
	if (cr6.eq) goto loc_82DEA16C;
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r22,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r22.u32);
	// addi r4,r11,-7292
	ctx.r4.s64 = ctx.r11.s64 + -7292;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// stb r31,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r31.u8);
	// sth r31,180(r1)
	PPC_STORE_U16(ctx.r1.u32 + 180, ctx.r31.u16);
	// bl 0x8259cc28
	ctx.lr = 0x82DEA120;
	sub_8259CC28(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82de9848
	ctx.lr = 0x82DEA140;
	sub_82DE9848(ctx, base);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82dea15c
	if (cr6.lt) goto loc_82DEA15C;
	// stw r19,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82DEA15C;
	sub_825952B8(ctx, base);
loc_82DEA15C:
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_82DEA16C:
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subf r11,r27,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r27.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// divw r31,r11,r28
	ctx.r31.s32 = PPCDivide(ctx.r11.s32, ctx.r28.s32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82de9c48
	ctx.lr = 0x82DEA188;
	sub_82DE9C48(ctx, base);
	// lwz r4,4(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82dea1bc
	if (cr6.eq) goto loc_82DEA1BC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82de5eb8
	ctx.lr = 0x82DEA1A4;
	sub_82DE5EB8(ctx, base);
	// addi r5,r21,12
	ctx.r5.s64 = ctx.r21.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,4(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// bl 0x82c67458
	ctx.lr = 0x82DEA1B8;
	sub_82C67458(ctx, base);
	// stw r29,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r29.u32);
loc_82DEA1BC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82de7a68
	ctx.lr = 0x82DEA1C8;
	sub_82DE7A68(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82de96d8
	ctx.lr = 0x82DEA1D4;
	sub_82DE96D8(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82dea200
	if (cr6.eq) goto loc_82DEA200;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c67458
	ctx.lr = 0x82DEA1F0;
	sub_82C67458(ctx, base);
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x82DEA200;
	sub_825952B8(ctx, base);
loc_82DEA200:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DEA20C"))) PPC_WEAK_FUNC(sub_82DEA20C);
PPC_FUNC_IMPL(__imp__sub_82DEA20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DEA210"))) PPC_WEAK_FUNC(sub_82DEA210);
PPC_FUNC_IMPL(__imp__sub_82DEA210) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82de9e70
	ctx.lr = 0x82DEA248;
	sub_82DE9E70(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,48
	ctx.r10.s64 = 48;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divw r10,r7,r10
	ctx.r10.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x82dea2a4
	if (cr6.lt) goto loc_82DEA2A4;
	// bgt cr6,0x82dea278
	if (cr6.gt) goto loc_82DEA278;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82DEA278;
	sub_831CC188(ctx, base);
loc_82DEA278:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82c67528
	ctx.lr = 0x82DEA290;
	sub_82C67528(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82b7a410
	ctx.lr = 0x82DEA29C;
	sub_82B7A410(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b7a190
	ctx.lr = 0x82DEA2A4;
	sub_82B7A190(ctx, base);
loc_82DEA2A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c67608
	ctx.lr = 0x82DEA2AC;
	sub_82C67608(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

__attribute__((alias("__imp__sub_82DEA2C4"))) PPC_WEAK_FUNC(sub_82DEA2C4);
PPC_FUNC_IMPL(__imp__sub_82DEA2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DEA2C8"))) PPC_WEAK_FUNC(sub_82DEA2C8);
PPC_FUNC_IMPL(__imp__sub_82DEA2C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82DEA2D0;
	__savegprlr_16(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82DEA2DC;
	sub_831156E8(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dea2f0
	if (!cr6.eq) goto loc_82DEA2F0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82DEA2F0:
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// li r22,48
	ctx.r22.s64 = 48;
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,52(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 52);
	// addi r25,r17,8
	ctx.r25.s64 = ctx.r17.s64 + 8;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addis r21,r9,1
	ctx.r21.s64 = ctx.r9.s64 + 65536;
	// li r23,15
	ctx.r23.s64 = 15;
	// divw. r11,r8,r22
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r22.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r20,6
	ctx.r20.s64 = 6;
	// li r16,2
	ctx.r16.s64 = 2;
	// li r19,1
	ctx.r19.s64 = 1;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r21,r21,30440
	ctx.r21.s64 = ctx.r21.s64 + 30440;
	// beq 0x82dea43c
	if (cr0.eq) goto loc_82DEA43C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82DEA338:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// sth r30,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r30.u16);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// stb r30,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r30.u8);
	// beq cr6,0x82dea37c
	if (cr6.eq) goto loc_82DEA37C;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// ble cr6,0x82dea37c
	if (!cr6.gt) goto loc_82DEA37C;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b7a310
	ctx.lr = 0x82DEA378;
	sub_82B7A310(ctx, base);
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
loc_82DEA37C:
	// lbz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82dea3a0
	if (!cr6.eq) goto loc_82DEA3A0;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dea410
	if (cr6.lt) goto loc_82DEA410;
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// b 0x82dea408
	goto loc_82DEA408;
loc_82DEA3A0:
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r11,r21,1764
	ctx.r11.s64 = ctx.r21.s64 + 1764;
loc_82DEA3B0:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x82dea4d4
	if (cr6.eq) goto loc_82DEA4D4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r10,100
	cr6.compare<uint32_t>(ctx.r10.u32, 100, xer);
	// blt cr6,0x82dea3b0
	if (cr6.lt) goto loc_82DEA3B0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82DEA3D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r19,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r19.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// beq cr6,0x82dea3f0
	if (cr6.eq) goto loc_82DEA3F0;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
loc_82DEA3F0:
	// bl 0x82de68a8
	ctx.lr = 0x82DEA3F4;
	sub_82DE68A8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dea410
	if (cr6.lt) goto loc_82DEA410;
	// stw r16,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
loc_82DEA408:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82DEA410;
	sub_825952B8(ctx, base);
loc_82DEA410:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// divw r11,r9,r22
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r22.s32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x82dea338
	if (cr6.lt) goto loc_82DEA338;
loc_82DEA43C:
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dea544
	if (cr6.eq) goto loc_82DEA544;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82DEA45C:
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// sth r30,212(r1)
	PPC_STORE_U16(ctx.r1.u32 + 212, ctx.r30.u16);
	// stw r20,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r20.u32);
	// stw r30,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
	// stb r30,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r30.u8);
	// beq cr6,0x82dea4dc
	if (cr6.eq) goto loc_82DEA4DC;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// ble cr6,0x82dea4dc
	if (!cr6.gt) goto loc_82DEA4DC;
	// lwzx r11,r10,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// add r31,r10,r29
	ctx.r31.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r10,212(r1)
	PPC_STORE_U16(ctx.r1.u32 + 212, ctx.r10.u16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DEA4C4;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stb r7,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r7.u8);
	// b 0x82dea4e0
	goto loc_82DEA4E0;
loc_82DEA4D4:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82dea3d0
	goto loc_82DEA3D0;
loc_82DEA4DC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82DEA4E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dea4f8
	if (cr6.eq) goto loc_82DEA4F8;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82badd90
	ctx.lr = 0x82DEA4F8;
	sub_82BADD90(ctx, base);
loc_82DEA4F8:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dea514
	if (cr6.lt) goto loc_82DEA514;
	// stw r16,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r16.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82DEA514;
	sub_825952B8(ctx, base);
loc_82DEA514:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
	// divw r11,r9,r22
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r22.s32);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x82dea45c
	if (cr6.lt) goto loc_82DEA45C;
	// lwz r24,256(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
loc_82DEA544:
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82de5c18
	ctx.lr = 0x82DEA550;
	sub_82DE5C18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ori r27,r10,37446
	ctx.r27.u64 = ctx.r10.u64 | 37446;
	// bne cr6,0x82dea56c
	if (!cr6.eq) goto loc_82DEA56C;
	// lwz r11,52(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 52);
	// stbx r19,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r19.u8);
loc_82DEA56C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// divw. r11,r10,r22
	ctx.r11.s32 = PPCDivide(ctx.r10.s32, ctx.r22.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82dea6b8
	if (cr0.eq) goto loc_82DEA6B8;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82DEA588:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r20,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r20.u32);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r23,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r23.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// sth r30,164(r1)
	PPC_STORE_U16(ctx.r1.u32 + 164, ctx.r30.u16);
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// stb r30,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r30.u8);
	// beq cr6,0x82dea60c
	if (cr6.eq) goto loc_82DEA60C;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// ble cr6,0x82dea60c
	if (!cr6.gt) goto loc_82DEA60C;
	// lwzx r11,r3,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	// add r31,r3,r29
	ctx.r31.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r10,164(r1)
	PPC_STORE_U16(ctx.r1.u32 + 164, ctx.r10.u16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DEA5F8;
	sub_8259CB28(ctx, base);
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// lhz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stb r10,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r10.u8);
	// b 0x82dea610
	goto loc_82DEA610;
loc_82DEA60C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82DEA610:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dea670
	if (cr6.eq) goto loc_82DEA670;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82dea670
	if (!cr6.eq) goto loc_82DEA670;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r11,r21,1764
	ctx.r11.s64 = ctx.r21.s64 + 1764;
loc_82DEA634:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x82dea6f0
	if (cr6.eq) goto loc_82DEA6F0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r10,100
	cr6.compare<uint32_t>(ctx.r10.u32, 100, xer);
	// blt cr6,0x82dea634
	if (cr6.lt) goto loc_82DEA634;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82DEA654:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82dea670
	if (!cr6.eq) goto loc_82DEA670;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82de5958
	ctx.lr = 0x82DEA668;
	sub_82DE5958(ctx, base);
	// lwz r11,52(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 52);
	// stbx r19,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r19.u8);
loc_82DEA670:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dea68c
	if (cr6.lt) goto loc_82DEA68C;
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82DEA68C;
	sub_825952B8(ctx, base);
loc_82DEA68C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// stw r23,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r23.u32);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// divw r11,r10,r22
	ctx.r11.s32 = PPCDivide(ctx.r10.s32, ctx.r22.s32);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x82dea588
	if (cr6.lt) goto loc_82DEA588;
loc_82DEA6B8:
	// lwz r4,12(r17)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r5,r11,r22
	ctx.r5.s32 = PPCDivide(ctx.r11.s32, ctx.r22.s32);
	// bl 0x82de9d50
	ctx.lr = 0x82DEA6CC;
	sub_82DE9D50(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82dea6e4
	if (cr6.eq) goto loc_82DEA6E4;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r16.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82DEA6E4;
	sub_825952B8(ctx, base);
loc_82DEA6E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82DEA6F0:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82dea654
	goto loc_82DEA654;
}

__attribute__((alias("__imp__sub_82DEA6F8"))) PPC_WEAK_FUNC(sub_82DEA6F8);
PPC_FUNC_IMPL(__imp__sub_82DEA6F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82DEA700;
	__savegprlr_16(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82DEA70C;
	sub_831156E8(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82dea720
	if (!cr6.eq) goto loc_82DEA720;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82DEA720:
	// lwz r11,28(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28);
	// li r22,48
	ctx.r22.s64 = 48;
	// lwz r10,24(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,52(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 52);
	// addi r25,r17,24
	ctx.r25.s64 = ctx.r17.s64 + 24;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addis r21,r9,1
	ctx.r21.s64 = ctx.r9.s64 + 65536;
	// li r23,15
	ctx.r23.s64 = 15;
	// divw. r11,r8,r22
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r22.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r20,6
	ctx.r20.s64 = 6;
	// li r16,2
	ctx.r16.s64 = 2;
	// li r19,1
	ctx.r19.s64 = 1;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r21,r21,30440
	ctx.r21.s64 = ctx.r21.s64 + 30440;
	// beq 0x82dea86c
	if (cr0.eq) goto loc_82DEA86C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82DEA768:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// sth r30,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r30.u16);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// stb r30,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r30.u8);
	// beq cr6,0x82dea7ac
	if (cr6.eq) goto loc_82DEA7AC;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// ble cr6,0x82dea7ac
	if (!cr6.gt) goto loc_82DEA7AC;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b7a310
	ctx.lr = 0x82DEA7A8;
	sub_82B7A310(ctx, base);
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
loc_82DEA7AC:
	// lbz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82dea7d0
	if (!cr6.eq) goto loc_82DEA7D0;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dea840
	if (cr6.lt) goto loc_82DEA840;
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// b 0x82dea838
	goto loc_82DEA838;
loc_82DEA7D0:
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r11,r21,1964
	ctx.r11.s64 = ctx.r21.s64 + 1964;
loc_82DEA7E0:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x82dea904
	if (cr6.eq) goto loc_82DEA904;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r10,100
	cr6.compare<uint32_t>(ctx.r10.u32, 100, xer);
	// blt cr6,0x82dea7e0
	if (cr6.lt) goto loc_82DEA7E0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82DEA800:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r19,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r19.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// beq cr6,0x82dea820
	if (cr6.eq) goto loc_82DEA820;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
loc_82DEA820:
	// bl 0x82de6a30
	ctx.lr = 0x82DEA824;
	sub_82DE6A30(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dea840
	if (cr6.lt) goto loc_82DEA840;
	// stw r16,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
loc_82DEA838:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82DEA840;
	sub_825952B8(ctx, base);
loc_82DEA840:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// divw r11,r9,r22
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r22.s32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x82dea768
	if (cr6.lt) goto loc_82DEA768;
loc_82DEA86C:
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dea974
	if (cr6.eq) goto loc_82DEA974;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82DEA88C:
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// sth r30,212(r1)
	PPC_STORE_U16(ctx.r1.u32 + 212, ctx.r30.u16);
	// stw r20,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r20.u32);
	// stw r30,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
	// stb r30,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r30.u8);
	// beq cr6,0x82dea90c
	if (cr6.eq) goto loc_82DEA90C;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// ble cr6,0x82dea90c
	if (!cr6.gt) goto loc_82DEA90C;
	// lwzx r11,r10,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// add r31,r10,r29
	ctx.r31.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r10,212(r1)
	PPC_STORE_U16(ctx.r1.u32 + 212, ctx.r10.u16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DEA8F4;
	sub_8259CB28(ctx, base);
	// lbz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stb r7,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r7.u8);
	// b 0x82dea910
	goto loc_82DEA910;
loc_82DEA904:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82dea800
	goto loc_82DEA800;
loc_82DEA90C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82DEA910:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82dea928
	if (cr6.eq) goto loc_82DEA928;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82badd90
	ctx.lr = 0x82DEA928;
	sub_82BADD90(ctx, base);
loc_82DEA928:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82dea944
	if (cr6.lt) goto loc_82DEA944;
	// stw r16,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r16.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82DEA944;
	sub_825952B8(ctx, base);
loc_82DEA944:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
	// divw r11,r9,r22
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r22.s32);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x82dea88c
	if (cr6.lt) goto loc_82DEA88C;
	// lwz r24,256(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
loc_82DEA974:
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82de5cd0
	ctx.lr = 0x82DEA980;
	sub_82DE5CD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ori r27,r10,37446
	ctx.r27.u64 = ctx.r10.u64 | 37446;
	// bne cr6,0x82dea99c
	if (!cr6.eq) goto loc_82DEA99C;
	// lwz r11,52(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 52);
	// stbx r19,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r19.u8);
loc_82DEA99C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// divw. r11,r10,r22
	ctx.r11.s32 = PPCDivide(ctx.r10.s32, ctx.r22.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82deaae8
	if (cr0.eq) goto loc_82DEAAE8;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82DEA9B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r20,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r20.u32);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r23,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r23.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// sth r30,164(r1)
	PPC_STORE_U16(ctx.r1.u32 + 164, ctx.r30.u16);
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// stb r30,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r30.u8);
	// beq cr6,0x82deaa3c
	if (cr6.eq) goto loc_82DEAA3C;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// ble cr6,0x82deaa3c
	if (!cr6.gt) goto loc_82DEAA3C;
	// lwzx r11,r3,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	// add r31,r3,r29
	ctx.r31.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r10,164(r1)
	PPC_STORE_U16(ctx.r1.u32 + 164, ctx.r10.u16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DEAA28;
	sub_8259CB28(ctx, base);
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// lhz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stb r10,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r10.u8);
	// b 0x82deaa40
	goto loc_82DEAA40;
loc_82DEAA3C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82DEAA40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82deaaa0
	if (cr6.eq) goto loc_82DEAAA0;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82deaaa0
	if (!cr6.eq) goto loc_82DEAAA0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r11,r21,1964
	ctx.r11.s64 = ctx.r21.s64 + 1964;
loc_82DEAA64:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x82deab20
	if (cr6.eq) goto loc_82DEAB20;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r10,100
	cr6.compare<uint32_t>(ctx.r10.u32, 100, xer);
	// blt cr6,0x82deaa64
	if (cr6.lt) goto loc_82DEAA64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82DEAA84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82deaaa0
	if (!cr6.eq) goto loc_82DEAAA0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82de59d8
	ctx.lr = 0x82DEAA98;
	sub_82DE59D8(ctx, base);
	// lwz r11,52(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 52);
	// stbx r19,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r19.u8);
loc_82DEAAA0:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82deaabc
	if (cr6.lt) goto loc_82DEAABC;
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82DEAABC;
	sub_825952B8(ctx, base);
loc_82DEAABC:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// stw r23,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r23.u32);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// divw r11,r10,r22
	ctx.r11.s32 = PPCDivide(ctx.r10.s32, ctx.r22.s32);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x82dea9b8
	if (cr6.lt) goto loc_82DEA9B8;
loc_82DEAAE8:
	// lwz r4,28(r17)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r5,r11,r22
	ctx.r5.s32 = PPCDivide(ctx.r11.s32, ctx.r22.s32);
	// bl 0x82de9d50
	ctx.lr = 0x82DEAAFC;
	sub_82DE9D50(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82deab14
	if (cr6.eq) goto loc_82DEAB14;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r16.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82DEAB14;
	sub_825952B8(ctx, base);
loc_82DEAB14:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82DEAB20:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82deaa84
	goto loc_82DEAA84;
}

__attribute__((alias("__imp__sub_82DEAB28"))) PPC_WEAK_FUNC(sub_82DEAB28);
PPC_FUNC_IMPL(__imp__sub_82DEAB28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lbz r10,-24176(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -24176);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,-24176(r11)
	PPC_STORE_U8(ctx.r11.u32 + -24176, ctx.r10.u8);
	// b 0x82d73e70
	sub_82D73E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DEAB44"))) PPC_WEAK_FUNC(sub_82DEAB44);
PPC_FUNC_IMPL(__imp__sub_82DEAB44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEAB48"))) PPC_WEAK_FUNC(sub_82DEAB48);
PPC_FUNC_IMPL(__imp__sub_82DEAB48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lbz r10,-24176(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -24176);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-24176(r11)
	PPC_STORE_U8(ctx.r11.u32 + -24176, ctx.r10.u8);
	// b 0x82d73f90
	sub_82D73F90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DEAB64"))) PPC_WEAK_FUNC(sub_82DEAB64);
PPC_FUNC_IMPL(__imp__sub_82DEAB64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEAB68"))) PPC_WEAK_FUNC(sub_82DEAB68);
PPC_FUNC_IMPL(__imp__sub_82DEAB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lbz r3,-24176(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -24176);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEAB74"))) PPC_WEAK_FUNC(sub_82DEAB74);
PPC_FUNC_IMPL(__imp__sub_82DEAB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DEAB78"))) PPC_WEAK_FUNC(sub_82DEAB78);
PPC_FUNC_IMPL(__imp__sub_82DEAB78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEAB8C"))) PPC_WEAK_FUNC(sub_82DEAB8C);
PPC_FUNC_IMPL(__imp__sub_82DEAB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DEAB90"))) PPC_WEAK_FUNC(sub_82DEAB90);
PPC_FUNC_IMPL(__imp__sub_82DEAB90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,404(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEABA4"))) PPC_WEAK_FUNC(sub_82DEABA4);
PPC_FUNC_IMPL(__imp__sub_82DEABA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DEABA8"))) PPC_WEAK_FUNC(sub_82DEABA8);
PPC_FUNC_IMPL(__imp__sub_82DEABA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,408
	ctx.r3.s64 = ctx.r3.s64 + 408;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEABB0"))) PPC_WEAK_FUNC(sub_82DEABB0);
PPC_FUNC_IMPL(__imp__sub_82DEABB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,428
	ctx.r3.s64 = ctx.r3.s64 + 428;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEABB8"))) PPC_WEAK_FUNC(sub_82DEABB8);
PPC_FUNC_IMPL(__imp__sub_82DEABB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,448
	ctx.r3.s64 = ctx.r3.s64 + 448;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEABC0"))) PPC_WEAK_FUNC(sub_82DEABC0);
PPC_FUNC_IMPL(__imp__sub_82DEABC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,468
	ctx.r3.s64 = ctx.r3.s64 + 468;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEABC8"))) PPC_WEAK_FUNC(sub_82DEABC8);
PPC_FUNC_IMPL(__imp__sub_82DEABC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,488
	ctx.r3.s64 = ctx.r3.s64 + 488;
	// li r5,72
	ctx.r5.s64 = 72;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DEABD4"))) PPC_WEAK_FUNC(sub_82DEABD4);
PPC_FUNC_IMPL(__imp__sub_82DEABD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DEABD8"))) PPC_WEAK_FUNC(sub_82DEABD8);
PPC_FUNC_IMPL(__imp__sub_82DEABD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,488
	ctx.r3.s64 = ctx.r3.s64 + 488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEABE0"))) PPC_WEAK_FUNC(sub_82DEABE0);
PPC_FUNC_IMPL(__imp__sub_82DEABE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,560
	ctx.r3.s64 = ctx.r3.s64 + 560;
	// li r5,72
	ctx.r5.s64 = 72;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DEABEC"))) PPC_WEAK_FUNC(sub_82DEABEC);
PPC_FUNC_IMPL(__imp__sub_82DEABEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DEABF0"))) PPC_WEAK_FUNC(sub_82DEABF0);
PPC_FUNC_IMPL(__imp__sub_82DEABF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,560
	ctx.r3.s64 = ctx.r3.s64 + 560;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEABF8"))) PPC_WEAK_FUNC(sub_82DEABF8);
PPC_FUNC_IMPL(__imp__sub_82DEABF8) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r11,-24168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82deac5c
	if (cr6.eq) goto loc_82DEAC5C;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82DEAC2C;
	sub_82595150(ctx, base);
	// lwz r3,-24168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24168);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82deac4c
	if (cr6.eq) goto loc_82DEAC4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DEAC4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DEAC4C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82DEAC54;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-24168(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24168, ctx.r11.u32);
loc_82DEAC5C:
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

__attribute__((alias("__imp__sub_82DEAC70"))) PPC_WEAK_FUNC(sub_82DEAC70);
PPC_FUNC_IMPL(__imp__sub_82DEAC70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,56
	ctx.r10.s64 = 56;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r9,r7,r10
	ctx.r9.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82deacb8
	if (cr6.eq) goto loc_82DEACB8;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82deacc0
	if (!cr6.gt) goto loc_82DEACC0;
loc_82DEAC9C:
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x82deaccc
	if (cr6.eq) goto loc_82DEACCC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82deac9c
	if (cr6.gt) goto loc_82DEAC9C;
loc_82DEACB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82DEACC0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
loc_82DEACCC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEACD4"))) PPC_WEAK_FUNC(sub_82DEACD4);
PPC_FUNC_IMPL(__imp__sub_82DEACD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DEACD8"))) PPC_WEAK_FUNC(sub_82DEACD8);
PPC_FUNC_IMPL(__imp__sub_82DEACD8) {
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
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// li r9,84
	ctx.r9.s64 = 84;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// stw r8,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r8.u32);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// stw r11,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r11.u32);
	// stw r7,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r7.u32);
	// stb r11,48(r4)
	PPC_STORE_U8(ctx.r4.u32 + 48, ctx.r11.u8);
	// stb r11,49(r4)
	PPC_STORE_U8(ctx.r4.u32 + 49, ctx.r11.u8);
	// stb r11,50(r4)
	PPC_STORE_U8(ctx.r4.u32 + 50, ctx.r11.u8);
	// stb r11,51(r4)
	PPC_STORE_U8(ctx.r4.u32 + 51, ctx.r11.u8);
	// stb r11,52(r4)
	PPC_STORE_U8(ctx.r4.u32 + 52, ctx.r11.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82dead90
	if (cr6.eq) goto loc_82DEAD90;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r8,56
	ctx.r8.s64 = 56;
	// divw r9,r9,r8
	ctx.r9.s32 = PPCDivide(ctx.r9.s32, ctx.r8.s32);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82dead90
	if (!cr6.gt) goto loc_82DEAD90;
	// mulli r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 * 56;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x82DEAD80;
	sub_831CE980(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82DEAD90;
	sub_831CE980(ctx, base);
loc_82DEAD90:
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

__attribute__((alias("__imp__sub_82DEADA4"))) PPC_WEAK_FUNC(sub_82DEADA4);
PPC_FUNC_IMPL(__imp__sub_82DEADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DEADA8"))) PPC_WEAK_FUNC(sub_82DEADA8);
PPC_FUNC_IMPL(__imp__sub_82DEADA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DEADB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r31,r5,56
	ctx.r31.s64 = ctx.r5.s64 + 56;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// beq cr6,0x82deadf4
	if (cr6.eq) goto loc_82DEADF4;
	// addi r30,r31,-56
	ctx.r30.s64 = ctx.r31.s64 + -56;
loc_82DEADD4:
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82DEADE4;
	sub_831CE980(ctx, base);
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82deadd4
	if (!cr6.eq) goto loc_82DEADD4;
loc_82DEADF4:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// addi r11,r11,-56
	ctx.r11.s64 = ctx.r11.s64 + -56;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DEAE10"))) PPC_WEAK_FUNC(sub_82DEAE10);
PPC_FUNC_IMPL(__imp__sub_82DEAE10) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// beq cr6,0x82deae4c
	if (cr6.eq) goto loc_82DEAE4C;
loc_82DEAE2C:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x82deae44
	if (cr6.eq) goto loc_82DEAE44;
	// addi r5,r5,56
	ctx.r5.s64 = ctx.r5.s64 + 56;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bne cr6,0x82deae2c
	if (!cr6.eq) goto loc_82DEAE2C;
loc_82DEAE44:
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bne cr6,0x82deae60
	if (!cr6.eq) goto loc_82DEAE60;
loc_82DEAE4C:
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
loc_82DEAE60:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82deada8
	ctx.lr = 0x82DEAE6C;
	sub_82DEADA8(ctx, base);
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

__attribute__((alias("__imp__sub_82DEAE80"))) PPC_WEAK_FUNC(sub_82DEAE80);
PPC_FUNC_IMPL(__imp__sub_82DEAE80) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-6696
	ctx.r10.s64 = ctx.r11.s64 + -6696;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,468(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82deaeb4
	if (cr6.eq) goto loc_82DEAEB4;
	// bl 0x82416268
	ctx.lr = 0x82DEAEB4;
	sub_82416268(ctx, base);
loc_82DEAEB4:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// lwz r3,448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82deaed4
	if (cr6.eq) goto loc_82DEAED4;
	// bl 0x82416268
	ctx.lr = 0x82DEAED4;
	sub_82416268(ctx, base);
loc_82DEAED4:
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82deaef0
	if (cr6.eq) goto loc_82DEAEF0;
	// bl 0x82416268
	ctx.lr = 0x82DEAEF0;
	sub_82416268(ctx, base);
loc_82DEAEF0:
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// lwz r3,408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82deaf0c
	if (cr6.eq) goto loc_82DEAF0C;
	// bl 0x82416268
	ctx.lr = 0x82DEAF0C;
	sub_82416268(ctx, base);
loc_82DEAF0C:
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82DEAF30"))) PPC_WEAK_FUNC(sub_82DEAF30);
PPC_FUNC_IMPL(__imp__sub_82DEAF30) {
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
	// bl 0x82deae80
	ctx.lr = 0x82DEAF50;
	sub_82DEAE80(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82deaf68
	if (cr6.eq) goto loc_82DEAF68;
	// bl 0x82416268
	ctx.lr = 0x82DEAF64;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DEAF68:
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

__attribute__((alias("__imp__sub_82DEAF80"))) PPC_WEAK_FUNC(sub_82DEAF80);
PPC_FUNC_IMPL(__imp__sub_82DEAF80) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x837e7a18
	ctx.lr = 0x82DEAFA8;
	sub_837E7A18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82DEAFC4"))) PPC_WEAK_FUNC(sub_82DEAFC4);
PPC_FUNC_IMPL(__imp__sub_82DEAFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DEAFC8"))) PPC_WEAK_FUNC(sub_82DEAFC8);
PPC_FUNC_IMPL(__imp__sub_82DEAFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DEAFD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// li r28,84
	ctx.r28.s64 = 84;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r6,r10,16960
	ctx.r6.u64 = ctx.r10.u64 | 16960;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// li r5,200
	ctx.r5.s64 = 200;
	// stb r30,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r30.u8);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r30.u8);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// stb r30,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r30.u8);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// stb r30,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r30.u8);
loc_82DEB040:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82deb040
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DEB040;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r30,384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 384, ctx.r30.u32);
	// stb r30,392(r11)
	PPC_STORE_U8(ctx.r11.u32 + 392, ctx.r30.u8);
	// addi r4,r31,408
	ctx.r4.s64 = ctx.r31.s64 + 408;
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 388, ctx.r29.u32);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// lwz r6,412(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// lwz r5,408(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// bl 0x837e7a18
	ctx.lr = 0x82DEB078;
	sub_837E7A18(ctx, base);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// addi r4,r31,428
	ctx.r4.s64 = ctx.r31.s64 + 428;
	// lwz r6,432(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,428(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// bl 0x837e7a18
	ctx.lr = 0x82DEB090;
	sub_837E7A18(ctx, base);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// addi r4,r31,448
	ctx.r4.s64 = ctx.r31.s64 + 448;
	// lwz r6,452(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,448(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// bl 0x837e7a18
	ctx.lr = 0x82DEB0A8;
	sub_837E7A18(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
	// stw r30,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r30.u32);
	// stw r30,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r30.u32);
	// stw r28,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r28.u32);
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// stw r29,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r29.u32);
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// stw r30,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r30.u32);
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
	// stb r30,540(r31)
	PPC_STORE_U8(ctx.r31.u32 + 540, ctx.r30.u8);
	// stb r30,541(r31)
	PPC_STORE_U8(ctx.r31.u32 + 541, ctx.r30.u8);
	// stb r30,542(r31)
	PPC_STORE_U8(ctx.r31.u32 + 542, ctx.r30.u8);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// stb r30,548(r31)
	PPC_STORE_U8(ctx.r31.u32 + 548, ctx.r30.u8);
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// stb r30,556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 556, ctx.r30.u8);
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stw r30,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r30.u32);
	// stw r28,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r28.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// stw r29,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r29.u32);
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// stw r11,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// stw r30,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r30.u32);
	// stw r30,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r30.u32);
	// stw r30,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
	// stb r30,612(r31)
	PPC_STORE_U8(ctx.r31.u32 + 612, ctx.r30.u8);
	// stb r30,613(r31)
	PPC_STORE_U8(ctx.r31.u32 + 613, ctx.r30.u8);
	// stb r30,614(r31)
	PPC_STORE_U8(ctx.r31.u32 + 614, ctx.r30.u8);
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// stb r30,620(r31)
	PPC_STORE_U8(ctx.r31.u32 + 620, ctx.r30.u8);
	// stw r30,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r30.u32);
	// stb r30,628(r31)
	PPC_STORE_U8(ctx.r31.u32 + 628, ctx.r30.u8);
	// stw r9,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r9.u32);
	// stw r30,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// stb r30,640(r31)
	PPC_STORE_U8(ctx.r31.u32 + 640, ctx.r30.u8);
	// stb r30,641(r31)
	PPC_STORE_U8(ctx.r31.u32 + 641, ctx.r30.u8);
	// stb r30,642(r31)
	PPC_STORE_U8(ctx.r31.u32 + 642, ctx.r30.u8);
	// stb r30,643(r31)
	PPC_STORE_U8(ctx.r31.u32 + 643, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DEB174"))) PPC_WEAK_FUNC(sub_82DEB174);
PPC_FUNC_IMPL(__imp__sub_82DEB174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DEB178"))) PPC_WEAK_FUNC(sub_82DEB178);
PPC_FUNC_IMPL(__imp__sub_82DEB178) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c6ab40
	sub_82C6AB40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DEB17C"))) PPC_WEAK_FUNC(sub_82DEB17C);
PPC_FUNC_IMPL(__imp__sub_82DEB17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DEB180"))) PPC_WEAK_FUNC(sub_82DEB180);
PPC_FUNC_IMPL(__imp__sub_82DEB180) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// addi r7,r11,-6696
	ctx.r7.s64 = ctx.r11.s64 + -6696;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// li r8,84
	ctx.r8.s64 = 84;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// ori r4,r10,16960
	ctx.r4.u64 = ctx.r10.u64 | 16960;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r3,200
	ctx.r3.s64 = 200;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r6,1000
	ctx.r6.s64 = 1000;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// addi r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 + 48;
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
loc_82DEB204:
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82deb204
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DEB204;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r11,384(r9)
	PPC_STORE_U32(ctx.r9.u32 + 384, ctx.r11.u32);
	// stb r11,392(r9)
	PPC_STORE_U8(ctx.r9.u32 + 392, ctx.r11.u8);
	// li r6,6
	ctx.r6.s64 = 6;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,388(r9)
	PPC_STORE_U32(ctx.r9.u32 + 388, ctx.r10.u32);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// stw r11,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// stw r8,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r8.u32);
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
	// stw r11,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// stw r6,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r6.u32);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// stw r11,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r11.u32);
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// stb r11,540(r31)
	PPC_STORE_U8(ctx.r31.u32 + 540, ctx.r11.u8);
	// stb r11,541(r31)
	PPC_STORE_U8(ctx.r31.u32 + 541, ctx.r11.u8);
	// stb r11,542(r31)
	PPC_STORE_U8(ctx.r31.u32 + 542, ctx.r11.u8);
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// stb r11,548(r31)
	PPC_STORE_U8(ctx.r31.u32 + 548, ctx.r11.u8);
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// stb r11,556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 556, ctx.r11.u8);
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// stw r8,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r8.u32);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// stw r6,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r6.u32);
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// stw r11,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r11.u32);
	// stw r11,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
	// stb r11,612(r31)
	PPC_STORE_U8(ctx.r31.u32 + 612, ctx.r11.u8);
	// stb r11,613(r31)
	PPC_STORE_U8(ctx.r31.u32 + 613, ctx.r11.u8);
	// stb r11,614(r31)
	PPC_STORE_U8(ctx.r31.u32 + 614, ctx.r11.u8);
	// stw r11,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r11.u32);
	// stb r11,620(r31)
	PPC_STORE_U8(ctx.r31.u32 + 620, ctx.r11.u8);
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// stb r11,628(r31)
	PPC_STORE_U8(ctx.r31.u32 + 628, ctx.r11.u8);
	// bl 0x82deafc8
	ctx.lr = 0x82DEB314;
	sub_82DEAFC8(ctx, base);
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

__attribute__((alias("__imp__sub_82DEB32C"))) PPC_WEAK_FUNC(sub_82DEB32C);
PPC_FUNC_IMPL(__imp__sub_82DEB32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DEB330"))) PPC_WEAK_FUNC(sub_82DEB330);
PPC_FUNC_IMPL(__imp__sub_82DEB330) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r3,-24168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24168);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82deb380
	if (!cr6.eq) goto loc_82DEB380;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,644
	ctx.r4.s64 = 644;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DEB368;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82deb378
	if (cr6.eq) goto loc_82DEB378;
	// bl 0x82deb180
	ctx.lr = 0x82DEB374;
	sub_82DEB180(ctx, base);
	// b 0x82deb37c
	goto loc_82DEB37C;
loc_82DEB378:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DEB37C:
	// stw r3,-24168(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24168, ctx.r3.u32);
loc_82DEB380:
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

__attribute__((alias("__imp__sub_82DEB394"))) PPC_WEAK_FUNC(sub_82DEB394);
PPC_FUNC_IMPL(__imp__sub_82DEB394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DEB398"))) PPC_WEAK_FUNC(sub_82DEB398);
PPC_FUNC_IMPL(__imp__sub_82DEB398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,-23792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23792);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82deb3b0
	if (cr6.eq) goto loc_82DEB3B0;
	// lbz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 100);
	// blr 
	return;
loc_82DEB3B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEB3B8"))) PPC_WEAK_FUNC(sub_82DEB3B8);
PPC_FUNC_IMPL(__imp__sub_82DEB3B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,-23792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23792);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82deb3d0
	if (cr6.eq) goto loc_82DEB3D0;
	// lbz r3,101(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 101);
	// blr 
	return;
loc_82DEB3D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEB3D8"))) PPC_WEAK_FUNC(sub_82DEB3D8);
PPC_FUNC_IMPL(__imp__sub_82DEB3D8) {
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
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82deb414
	if (cr6.eq) goto loc_82DEB414;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DEB410;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
loc_82DEB414:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82deb434
	if (cr6.eq) goto loc_82DEB434;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DEB430;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
loc_82DEB434:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82deb454
	if (cr6.eq) goto loc_82DEB454;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DEB450;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
loc_82DEB454:
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

__attribute__((alias("__imp__sub_82DEB470"))) PPC_WEAK_FUNC(sub_82DEB470);
PPC_FUNC_IMPL(__imp__sub_82DEB470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DEB478;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31757
	ctx.r10.s64 = -2081226752;
	// addi r9,r11,-6460
	ctx.r9.s64 = ctx.r11.s64 + -6460;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// stw r29,-23792(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23792, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bl 0x8308ac30
	ctx.lr = 0x82DEB4A4;
	sub_8308AC30(ctx, base);
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DEB4B8;
	sub_825952B8(ctx, base);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x8344cfa0
	ctx.lr = 0x82DEB4C4;
	sub_8344CFA0(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x825952b8
	ctx.lr = 0x82DEB4D4;
	sub_825952B8(ctx, base);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831032a0
	ctx.lr = 0x82DEB4E0;
	sub_831032A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DEB4E8"))) PPC_WEAK_FUNC(sub_82DEB4E8);
PPC_FUNC_IMPL(__imp__sub_82DEB4E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82deb580
	if (!cr6.gt) goto loc_82DEB580;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,88(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// beq cr6,0x82deb514
	if (cr6.eq) goto loc_82DEB514;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82DEB514:
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r10,r7,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82deb52c
	if (cr6.gt) goto loc_82DEB52C;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
loc_82DEB52C:
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r3,r5,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82deb56c
	if (cr6.gt) goto loc_82DEB56C;
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
loc_82DEB56C:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// bnelr 
	if (!cr0.eq) return;
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// blr 
	return;
loc_82DEB580:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEB588"))) PPC_WEAK_FUNC(sub_82DEB588);
PPC_FUNC_IMPL(__imp__sub_82DEB588) {
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
	// bl 0x82deb470
	ctx.lr = 0x82DEB5A8;
	sub_82DEB470(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82deb5c0
	if (cr6.eq) goto loc_82DEB5C0;
	// bl 0x82416268
	ctx.lr = 0x82DEB5BC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DEB5C0:
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

__attribute__((alias("__imp__sub_82DEB5D8"))) PPC_WEAK_FUNC(sub_82DEB5D8);
PPC_FUNC_IMPL(__imp__sub_82DEB5D8) {
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
	// lis r10,263
	ctx.r10.s64 = 17235968;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r9,r10,4104
	ctx.r9.u64 = ctx.r10.u64 | 4104;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82deb618
	if (cr6.lt) goto loc_82DEB618;
	// lis r10,263
	ctx.r10.s64 = 17235968;
	// ori r9,r10,4107
	ctx.r9.u64 = ctx.r10.u64 | 4107;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82deb618
	if (!cr6.lt) goto loc_82DEB618;
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// bl 0x82dc72d8
	ctx.lr = 0x82DEB618;
	sub_82DC72D8(ctx, base);
loc_82DEB618:
	// lbz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
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

__attribute__((alias("__imp__sub_82DEB630"))) PPC_WEAK_FUNC(sub_82DEB630);
PPC_FUNC_IMPL(__imp__sub_82DEB630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DEB638;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82deb6c4
	if (cr6.lt) goto loc_82DEB6C4;
	// beq cr6,0x82deb6cc
	if (cr6.eq) goto loc_82DEB6CC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82deb724
	if (!cr6.lt) goto loc_82DEB724;
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x82ddcec8
	ctx.lr = 0x82DEB660;
	sub_82DDCEC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82deb738
	if (cr6.eq) goto loc_82DEB738;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82deb690
	if (cr6.eq) goto loc_82DEB690;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DEB68C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
loc_82DEB690:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// bne cr6,0x82deb6b0
	if (!cr6.eq) goto loc_82DEB6B0;
	// lis r11,-32033
	ctx.r11.s64 = -2099314688;
	// addi r10,r11,-17920
	ctx.r10.s64 = ctx.r11.s64 + -17920;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DEB6B0:
	// lis r11,-32033
	ctx.r11.s64 = -2099314688;
	// addi r10,r11,-17752
	ctx.r10.s64 = ctx.r11.s64 + -17752;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DEB6C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_82DEB6CC:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-6640
	ctx.r4.s64 = ctx.r11.s64 + -6640;
	// bl 0x837b0c10
	ctx.lr = 0x82DEB6DC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82DEB6E8;
	sub_82D894E0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82deb70c
	if (cr6.lt) goto loc_82DEB70C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82DEB70C;
	sub_825952B8(ctx, base);
loc_82DEB70C:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82deb724
	if (cr6.eq) goto loc_82DEB724;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DEB724:
	// lis r11,-32033
	ctx.r11.s64 = -2099314688;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-17752
	ctx.r9.s64 = ctx.r11.s64 + -17752;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
loc_82DEB738:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DEB740"))) PPC_WEAK_FUNC(sub_82DEB740);
PPC_FUNC_IMPL(__imp__sub_82DEB740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DEB748;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82deb7d4
	if (cr6.lt) goto loc_82DEB7D4;
	// beq cr6,0x82deb7dc
	if (cr6.eq) goto loc_82DEB7DC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82deb834
	if (!cr6.lt) goto loc_82DEB834;
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// bl 0x82ddcec8
	ctx.lr = 0x82DEB770;
	sub_82DDCEC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82deb848
	if (cr6.eq) goto loc_82DEB848;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82deb7a0
	if (cr6.eq) goto loc_82DEB7A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DEB79C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
loc_82DEB7A0:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// bne cr6,0x82deb7c0
	if (!cr6.eq) goto loc_82DEB7C0;
	// lis r11,-32033
	ctx.r11.s64 = -2099314688;
	// addi r10,r11,-17920
	ctx.r10.s64 = ctx.r11.s64 + -17920;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DEB7C0:
	// lis r11,-32033
	ctx.r11.s64 = -2099314688;
	// addi r10,r11,-17752
	ctx.r10.s64 = ctx.r11.s64 + -17752;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DEB7D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_82DEB7DC:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-6604
	ctx.r4.s64 = ctx.r11.s64 + -6604;
	// bl 0x837b0c10
	ctx.lr = 0x82DEB7EC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82DEB7F8;
	sub_82D894E0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82deb81c
	if (cr6.lt) goto loc_82DEB81C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82DEB81C;
	sub_825952B8(ctx, base);
loc_82DEB81C:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82deb834
	if (cr6.eq) goto loc_82DEB834;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DEB834:
	// lis r11,-32033
	ctx.r11.s64 = -2099314688;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-17752
	ctx.r9.s64 = ctx.r11.s64 + -17752;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
loc_82DEB848:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DEB850"))) PPC_WEAK_FUNC(sub_82DEB850);
PPC_FUNC_IMPL(__imp__sub_82DEB850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DEB858;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82deb8e4
	if (cr6.lt) goto loc_82DEB8E4;
	// beq cr6,0x82deb8ec
	if (cr6.eq) goto loc_82DEB8EC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82deb944
	if (!cr6.lt) goto loc_82DEB944;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x82ddcec8
	ctx.lr = 0x82DEB880;
	sub_82DDCEC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82deb958
	if (cr6.eq) goto loc_82DEB958;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82deb8b0
	if (cr6.eq) goto loc_82DEB8B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DEB8AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
loc_82DEB8B0:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// bne cr6,0x82deb8d0
	if (!cr6.eq) goto loc_82DEB8D0;
	// lis r11,-32033
	ctx.r11.s64 = -2099314688;
	// addi r10,r11,-17920
	ctx.r10.s64 = ctx.r11.s64 + -17920;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DEB8D0:
	// lis r11,-32033
	ctx.r11.s64 = -2099314688;
	// addi r10,r11,-17752
	ctx.r10.s64 = ctx.r11.s64 + -17752;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DEB8E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_82DEB8EC:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-6572
	ctx.r4.s64 = ctx.r11.s64 + -6572;
	// bl 0x837b0c10
	ctx.lr = 0x82DEB8FC;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82DEB908;
	sub_82D894E0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82deb92c
	if (cr6.lt) goto loc_82DEB92C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82DEB92C;
	sub_825952B8(ctx, base);
loc_82DEB92C:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82deb944
	if (cr6.eq) goto loc_82DEB944;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DEB944:
	// lis r11,-32033
	ctx.r11.s64 = -2099314688;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-17752
	ctx.r9.s64 = ctx.r11.s64 + -17752;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
loc_82DEB958:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DEB960"))) PPC_WEAK_FUNC(sub_82DEB960);
PPC_FUNC_IMPL(__imp__sub_82DEB960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r7,263
	ctx.r7.s64 = 17235968;
	// lis r6,263
	ctx.r6.s64 = 17235968;
	// ori r7,r7,4104
	ctx.r7.u64 = ctx.r7.u64 | 4104;
	// ori r6,r6,4105
	ctx.r6.u64 = ctx.r6.u64 | 4105;
	// lis r11,-32033
	ctx.r11.s64 = -2099314688;
	// stw r7,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r7.u32);
	// lis r10,-32033
	ctx.r10.s64 = -2099314688;
	// stw r6,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r6.u32);
	// lis r8,-32033
	ctx.r8.s64 = -2099314688;
	// lis r5,263
	ctx.r5.s64 = 17235968;
	// addi r11,r11,-18896
	ctx.r11.s64 = ctx.r11.s64 + -18896;
	// addi r10,r10,-18624
	ctx.r10.s64 = ctx.r10.s64 + -18624;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// ori r7,r5,4106
	ctx.r7.u64 = ctx.r5.u64 | 4106;
	// stw r10,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r10.u32);
	// addi r6,r8,-18352
	ctx.r6.s64 = ctx.r8.s64 + -18352;
	// stw r9,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r9.u32);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r6,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r6.u32);
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// stw r9,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r9.u32);
loc_82DEB9BC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82deb9e4
	if (cr6.eq) goto loc_82DEB9E4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x82deb9bc
	if (cr6.lt) goto loc_82DEB9BC;
	// stw r9,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r9.u32);
	// stw r9,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// blr 
	return;
loc_82DEB9E4:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r9.u32);
	// addi r10,r1,-28
	ctx.r10.s64 = ctx.r1.s64 + -28;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEB9FC"))) PPC_WEAK_FUNC(sub_82DEB9FC);
PPC_FUNC_IMPL(__imp__sub_82DEB9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DEBA00"))) PPC_WEAK_FUNC(sub_82DEBA00);
PPC_FUNC_IMPL(__imp__sub_82DEBA00) {
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
	// lbz r11,101(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 101);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82deba8c
	if (!cr6.eq) goto loc_82DEBA8C;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82deba8c
	if (!cr6.gt) goto loc_82DEBA8C;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r3,104
	ctx.r31.s64 = ctx.r3.s64 + 104;
	// stb r11,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// beq cr6,0x82deba4c
	if (cr6.eq) goto loc_82DEBA4C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82DEBA4C:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82deba5c
	if (cr6.gt) goto loc_82DEBA5C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82DEBA5C:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82deb960
	ctx.lr = 0x82DEBA70;
	sub_82DEB960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8308a698
	ctx.lr = 0x82DEBA78;
	sub_8308A698(ctx, base);
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
loc_82DEBA8C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82DEBAA8"))) PPC_WEAK_FUNC(sub_82DEBAA8);
PPC_FUNC_IMPL(__imp__sub_82DEBAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32033
	ctx.r11.s64 = -2099314688;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-17920
	ctx.r8.s64 = ctx.r11.s64 + -17920;
	// stb r10,101(r3)
	PPC_STORE_U8(ctx.r3.u32 + 101, ctx.r10.u8);
	// stw r9,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r9.u32);
	// stw r8,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEBAC8"))) PPC_WEAK_FUNC(sub_82DEBAC8);
PPC_FUNC_IMPL(__imp__sub_82DEBAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32033
	ctx.r10.s64 = -2099314688;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-17920
	ctx.r9.s64 = ctx.r10.s64 + -17920;
	// stb r11,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r11.u8);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r9,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DEBAE4"))) PPC_WEAK_FUNC(sub_82DEBAE4);
PPC_FUNC_IMPL(__imp__sub_82DEBAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DEBAE8"))) PPC_WEAK_FUNC(sub_82DEBAE8);
PPC_FUNC_IMPL(__imp__sub_82DEBAE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31757
	ctx.r10.s64 = -2081226752;
	// lwz r9,-23792(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23792);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32033
	ctx.r8.s64 = -2099314688;
	// stb r11,100(r9)
	PPC_STORE_U8(ctx.r9.u32 + 100, ctx.r11.u8);
	// lwz r9,-23792(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23792);
	// addi r7,r8,-17720
	ctx.r7.s64 = ctx.r8.s64 + -17720;
	// stb r11,101(r9)
	PPC_STORE_U8(ctx.r9.u32 + 101, ctx.r11.u8);
	// lwz r9,-23792(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23792);
	// stw r11,132(r9)
	PPC_STORE_U32(ctx.r9.u32 + 132, ctx.r11.u32);
	// lwz r9,-23792(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23792);
	// stw r11,136(r9)
	PPC_STORE_U32(ctx.r9.u32 + 136, ctx.r11.u32);
	// lwz r9,-23792(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23792);
	// stw r11,140(r9)
	PPC_STORE_U32(ctx.r9.u32 + 140, ctx.r11.u32);
	// lwz r9,-23792(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23792);
	// stw r11,144(r9)
	PPC_STORE_U32(ctx.r9.u32 + 144, ctx.r11.u32);
	// lwz r10,-23792(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23792);
	// stw r11,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, ctx.r11.u32);
	// stw r7,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r7.u32);
	// blr 
	return;
}

