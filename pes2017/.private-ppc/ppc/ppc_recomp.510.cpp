#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83AC9AC8"))) PPC_WEAK_FUNC(sub_83AC9AC8);
PPC_FUNC_IMPL(__imp__sub_83AC9AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83ac9ae0
	if (!cr6.eq) goto loc_83AC9AE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AC9AE0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ac9af0
	if (!cr6.eq) goto loc_83AC9AF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83AC9AF0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83ac9b00
	if (!cr6.eq) goto loc_83AC9B00;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83AC9B00:
	// lbz r10,8812(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8812);
	// lbz r11,8812(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8812);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC9B10"))) PPC_WEAK_FUNC(sub_83AC9B10);
PPC_FUNC_IMPL(__imp__sub_83AC9B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC9B18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,72
	ctx.r29.s64 = 72;
loc_83AC9B28:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac9b40
	if (cr6.eq) goto loc_83AC9B40;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83ac8fb8
	ctx.lr = 0x83AC9B40;
	sub_83AC8FB8(ctx, base);
loc_83AC9B40:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83ac9b28
	if (!cr0.eq) goto loc_83AC9B28;
	// addi r30,r31,288
	ctx.r30.s64 = ctx.r31.s64 + 288;
	// li r5,288
	ctx.r5.s64 = 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x83AC9B60;
	sub_831CE980(ctx, base);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-25912
	ctx.r6.s64 = ctx.r11.s64 + -25912;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d88b0
	ctx.lr = 0x83AC9B78;
	sub_831D88B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC9B80"))) PPC_WEAK_FUNC(sub_83AC9B80);
PPC_FUNC_IMPL(__imp__sub_83AC9B80) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac9bcc
	if (cr6.eq) goto loc_83AC9BCC;
	// cmplwi cr6,r3,128
	cr6.compare<uint32_t>(ctx.r3.u32, 128, xer);
	// bge cr6,0x83ac9bcc
	if (!cr6.lt) goto loc_83AC9BCC;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,30016
	ctx.r10.s64 = ctx.r10.s64 + 30016;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ac9bdc
	if (cr6.eq) goto loc_83AC9BDC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AC9BC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83ac9be0
	goto loc_83AC9BE0;
loc_83AC9BCC:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23132
	ctx.r4.s64 = ctx.r11.s64 + -23132;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC9BDC;
	sub_831EA3F0(ctx, base);
loc_83AC9BDC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83AC9BE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC9BF0"))) PPC_WEAK_FUNC(sub_83AC9BF0);
PPC_FUNC_IMPL(__imp__sub_83AC9BF0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83ac9c44
	if (cr6.eq) goto loc_83AC9C44;
	// cmplwi cr6,r4,128
	cr6.compare<uint32_t>(ctx.r4.u32, 128, xer);
	// bge cr6,0x83ac9c44
	if (!cr6.lt) goto loc_83AC9C44;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,30016
	ctx.r10.s64 = ctx.r10.s64 + 30016;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ac9c54
	if (cr6.eq) goto loc_83AC9C54;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AC9C40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83ac9c58
	goto loc_83AC9C58;
loc_83AC9C44:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23104
	ctx.r4.s64 = ctx.r11.s64 + -23104;
	// bl 0x831ea3f0
	ctx.lr = 0x83AC9C54;
	sub_831EA3F0(ctx, base);
loc_83AC9C54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AC9C58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AC9C68"))) PPC_WEAK_FUNC(sub_83AC9C68);
PPC_FUNC_IMPL(__imp__sub_83AC9C68) {
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
	// bl 0x83adcc30
	ctx.lr = 0x83AC9C7C;
	sub_83ADCC30(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,30016
	ctx.r31.s64 = ctx.r11.s64 + 30016;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x83adcc40
	ctx.lr = 0x83AC9C8C;
	sub_83ADCC40(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x83ad6bb8
	ctx.lr = 0x83AC9C94;
	sub_83AD6BB8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bl 0x83ad6bc8
	ctx.lr = 0x83AC9C9C;
	sub_83AD6BC8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// bl 0x83adb0d8
	ctx.lr = 0x83AC9CA4;
	sub_83ADB0D8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bl 0x83ada568
	ctx.lr = 0x83AC9CAC;
	sub_83ADA568(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// bl 0x83ad9830
	ctx.lr = 0x83AC9CB4;
	sub_83AD9830(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// bl 0x83ad9840
	ctx.lr = 0x83AC9CBC;
	sub_83AD9840(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// bl 0x83ad9668
	ctx.lr = 0x83AC9CC4;
	sub_83AD9668(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// bl 0x83ad5220
	ctx.lr = 0x83AC9CCC;
	sub_83AD5220(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// bl 0x83ad9298
	ctx.lr = 0x83AC9CD4;
	sub_83AD9298(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// bl 0x83ad4e08
	ctx.lr = 0x83AC9CDC;
	sub_83AD4E08(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// bl 0x83ad8d40
	ctx.lr = 0x83AC9CE4;
	sub_83AD8D40(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x83ad79d8
	ctx.lr = 0x83AC9CEC;
	sub_83AD79D8(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// bl 0x83ad6bd8
	ctx.lr = 0x83AC9CF4;
	sub_83AD6BD8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// bl 0x83ad4830
	ctx.lr = 0x83AC9CFC;
	sub_83AD4830(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// bl 0x83ad69f0
	ctx.lr = 0x83AC9D04;
	sub_83AD69F0(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83AC9D1C"))) PPC_WEAK_FUNC(sub_83AC9D1C);
PPC_FUNC_IMPL(__imp__sub_83AC9D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC9D20"))) PPC_WEAK_FUNC(sub_83AC9D20);
PPC_FUNC_IMPL(__imp__sub_83AC9D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AC9D28;
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83ac9d54
	if (!cr6.eq) goto loc_83AC9D54;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83ac9060
	ctx.lr = 0x83AC9D54;
	sub_83AC9060(ctx, base);
loc_83AC9D54:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
	// bl 0x83ac9b10
	ctx.lr = 0x83AC9D64;
	sub_83AC9B10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC9D6C"))) PPC_WEAK_FUNC(sub_83AC9D6C);
PPC_FUNC_IMPL(__imp__sub_83AC9D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AC9D70"))) PPC_WEAK_FUNC(sub_83AC9D70);
PPC_FUNC_IMPL(__imp__sub_83AC9D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AC9D78;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-23664
	ctx.r11.s64 = ctx.r11.s64 + -23664;
	// cmplwi cr6,r5,8
	cr6.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// stw r11,30528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30528, ctx.r11.u32);
	// ble cr6,0x83ac9dbc
	if (!cr6.gt) goto loc_83AC9DBC;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-23024
	ctx.r4.s64 = ctx.r11.s64 + -23024;
loc_83AC9DAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83AC9DB4;
	sub_831EA400(ctx, base);
loc_83AC9DB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ac9f00
	goto loc_83AC9F00;
loc_83AC9DBC:
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r5,72
	cr6.compare<uint32_t>(ctx.r5.u32, 72, xer);
	// ble cr6,0x83ac9dd4
	if (!cr6.gt) goto loc_83AC9DD4;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-23076
	ctx.r4.s64 = ctx.r11.s64 + -23076;
	// b 0x83ac9dac
	goto loc_83AC9DAC;
loc_83AC9DD4:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x83a77b68
	ctx.lr = 0x83AC9DDC;
	sub_83A77B68(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,804
	ctx.r4.s64 = 804;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83a77b78
	ctx.lr = 0x83AC9DEC;
	sub_83A77B78(ctx, base);
	// li r4,804
	ctx.r4.s64 = 804;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83AC9DF8;
	sub_831EA7A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r31,700
	ctx.r3.s64 = ctx.r31.s64 + 700;
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// bl 0x83a75be8
	ctx.lr = 0x83AC9E14;
	sub_83A75BE8(ctx, base);
	// stw r3,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ac9ec4
	if (cr0.eq) goto loc_83AC9EC4;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ea7a0
	ctx.lr = 0x83AC9E2C;
	sub_831EA7A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83ac8e78
	ctx.lr = 0x83AC9E44;
	sub_83AC8E78(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt 0x83ac9ec4
	if (cr0.lt) goto loc_83AC9EC4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83ac9ea8
	if (!cr6.gt) goto loc_83AC9EA8;
loc_83AC9E64:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83a77b78
	ctx.lr = 0x83AC9E74;
	sub_83A77B78(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x83ac9ec4
	if (cr0.eq) goto loc_83AC9EC4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83ac8ec8
	ctx.lr = 0x83AC9E88;
	sub_83AC8EC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9d20
	ctx.lr = 0x83AC9E98;
	sub_83AC9D20(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ac9e64
	if (cr6.lt) goto loc_83AC9E64;
loc_83AC9EA8:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x83AC9EB8;
	sub_83102DB0(ctx, base);
	// stw r3,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83ac9ed0
	if (!cr0.eq) goto loc_83AC9ED0;
loc_83AC9EC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac99d0
	ctx.lr = 0x83AC9ECC;
	sub_83AC99D0(ctx, base);
	// b 0x83ac9db4
	goto loc_83AC9DB4;
loc_83AC9ED0:
	// addi r29,r31,768
	ctx.r29.s64 = ctx.r31.s64 + 768;
	// li r30,8
	ctx.r30.s64 = 8;
loc_83AC9ED8:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83a77b78
	ctx.lr = 0x83AC9EE8;
	sub_83A77B78(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// bne 0x83ac9ed8
	if (!cr0.eq) goto loc_83AC9ED8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac9b10
	ctx.lr = 0x83AC9EFC;
	sub_83AC9B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83AC9F00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AC9F08"))) PPC_WEAK_FUNC(sub_83AC9F08);
PPC_FUNC_IMPL(__imp__sub_83AC9F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AC9F10;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r10,576(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	// lwz r6,616(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 616);
	// addi r9,r3,772
	ctx.r9.s64 = ctx.r3.s64 + 772;
	// lwz r7,580(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,600(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 600);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x83ac9f6c
	if (cr6.eq) goto loc_83AC9F6C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,604(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AC9F6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AC9F6C:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// li r29,72
	ctx.r29.s64 = 72;
loc_83AC9F74:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac9f84
	if (cr6.eq) goto loc_83AC9F84;
	// bl 0x83ac8f88
	ctx.lr = 0x83AC9F84;
	sub_83AC8F88(ctx, base);
loc_83AC9F84:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83ac9f74
	if (!cr0.eq) goto loc_83AC9F74;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,588
	ctx.r3.s64 = ctx.r31.s64 + 588;
	// bl 0x83ad6988
	ctx.lr = 0x83AC9F9C;
	sub_83AD6988(ctx, base);
	// lwz r3,624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// bl 0x83a75cd8
	ctx.lr = 0x83AC9FA4;
	sub_83A75CD8(ctx, base);
	// addi r30,r31,288
	ctx.r30.s64 = ctx.r31.s64 + 288;
	// li r29,72
	ctx.r29.s64 = 72;
loc_83AC9FAC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ac9fc0
	if (cr6.eq) goto loc_83AC9FC0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83ac9568
	ctx.lr = 0x83AC9FC0;
	sub_83AC9568(ctx, base);
loc_83AC9FC0:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83ac9fac
	if (!cr0.eq) goto loc_83AC9FAC;
	// lwz r3,624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// bl 0x83a75d58
	ctx.lr = 0x83AC9FD4;
	sub_83A75D58(ctx, base);
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aca000
	if (cr6.eq) goto loc_83ACA000;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,612(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ACA000;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83ACA000:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83102db0
	ctx.lr = 0x83ACA008;
	sub_83102DB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83aca040
	if (cr6.eq) goto loc_83ACA040;
	// addi r29,r26,-4
	ctx.r29.s64 = ctx.r26.s64 + -4;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_83ACA020:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce980
	ctx.lr = 0x83ACA034;
	sub_831CE980(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,1024
	ctx.r30.s64 = ctx.r30.s64 + 1024;
	// bne 0x83aca020
	if (!cr0.eq) goto loc_83ACA020;
loc_83ACA040:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACA04C"))) PPC_WEAK_FUNC(sub_83ACA04C);
PPC_FUNC_IMPL(__imp__sub_83ACA04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACA050"))) PPC_WEAK_FUNC(sub_83ACA050);
PPC_FUNC_IMPL(__imp__sub_83ACA050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// rlwinm. r11,r5,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF0;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// beq 0x83aca118
	if (cr0.eq) goto loc_83ACA118;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// li r11,32
	ctx.r11.s64 = 32;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83ACA07C:
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r11,-32
	ctx.r10.s64 = ctx.r11.s64 + -32;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lvx128 v63,r10,r6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r31
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v61,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lvx128 v60,r11,r6
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v63,v62
	simde_mm_store_ps(ctx.v63.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lvx128 v62,r11,r31
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v58,v60,v62
	simde_mm_store_ps(ctx.v58.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lvx128 v59,r9,r6
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v62,v60,v62
	simde_mm_store_ps(ctx.v62.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lvx128 v57,r9,r31
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r8,r6
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v56,v59,v57
	simde_mm_store_ps(ctx.v56.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v57.f32)));
	// lvx128 v55,r8,r31
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v59,v59,v57
	simde_mm_store_ps(ctx.v59.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vaddfp128 v57,v60,v55
	simde_mm_store_ps(ctx.v57.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vsubfp128 v60,v60,v55
	simde_mm_store_ps(ctx.v60.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v55.f32)));
	// stvx128 v61,r10,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stvx128 v63,r10,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stvx128 v56,r9,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stvx128 v59,r9,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stvx128 v58,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stvx128 v62,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stvx128 v57,r8,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stvx128 v60,r8,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x83aca07c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACA07C;
loc_83ACA118:
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bge cr6,0x83aca15c
	if (!cr6.lt) goto loc_83ACA15C;
	// subf r6,r7,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r7.s64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_83ACA13C:
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfsx f12,r11,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfsx f0,r11,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83aca13c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACA13C;
loc_83ACA15C:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACA168"))) PPC_WEAK_FUNC(sub_83ACA168);
PPC_FUNC_IMPL(__imp__sub_83ACA168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ACA170;
	__savegprlr_29(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm. r11,r5,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF0;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r6,r10,-24912
	ctx.r6.s64 = ctx.r10.s64 + -24912;
	// li r7,0
	ctx.r7.s64 = 0;
	// lvlx128 v63,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// beq 0x83aca260
	if (cr0.eq) goto loc_83ACA260;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// li r11,32
	ctx.r11.s64 = 32;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83ACA1A4:
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r11,-32
	ctx.r10.s64 = ctx.r11.s64 + -32;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lvx128 v62,r10,r31
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r10,r30
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v60,v62,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v61.f32)));
	// lvx128 v59,r11,r31
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v62,v62,v61
	simde_mm_store_ps(ctx.v62.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v61.f32)));
	// lvx128 v61,r11,r30
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v57,v59,v61
	simde_mm_store_ps(ctx.v57.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v61.f32)));
	// lvx128 v58,r9,r31
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v61,v59,v61
	simde_mm_store_ps(ctx.v61.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v61.f32)));
	// lvx128 v56,r9,r30
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r8,r31
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v55,v58,v56
	simde_mm_store_ps(ctx.v55.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v56.f32)));
	// lvx128 v54,r8,r30
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v58,v58,v56
	simde_mm_store_ps(ctx.v58.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vaddfp128 v56,v59,v54
	simde_mm_store_ps(ctx.v56.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vsubfp128 v59,v59,v54
	simde_mm_store_ps(ctx.v59.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vmulfp128 v60,v60,v63
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v62,v62,v63
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v57,v57,v63
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v61,v61,v63
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v55,v55,v63
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v58,v58,v63
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v56,v56,v63
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v59,v59,v63
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v60,r10,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stvx128 v62,r10,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stvx128 v55,r9,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stvx128 v58,r9,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stvx128 v57,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stvx128 v61,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stvx128 v56,r8,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stvx128 v59,r8,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x83aca1a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACA1A4;
loc_83ACA260:
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bge cr6,0x83aca2b0
	if (!cr6.lt) goto loc_83ACA2B0;
	// subf r5,r7,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r7.s64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
loc_83ACA288:
	// lfsx f12,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f13,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsx f12,r11,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f13,r11,r7
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83aca288
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACA288;
loc_83ACA2B0:
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACA2B4"))) PPC_WEAK_FUNC(sub_83ACA2B4);
PPC_FUNC_IMPL(__imp__sub_83ACA2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACA2B8"))) PPC_WEAK_FUNC(sub_83ACA2B8);
PPC_FUNC_IMPL(__imp__sub_83ACA2B8) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,32100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32100);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,-2240(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -2240);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// bl 0x831d20a0
	ctx.lr = 0x83ACA2E0;
	sub_831D20A0(ctx, base);
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

__attribute__((alias("__imp__sub_83ACA2F4"))) PPC_WEAK_FUNC(sub_83ACA2F4);
PPC_FUNC_IMPL(__imp__sub_83ACA2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACA2F8"))) PPC_WEAK_FUNC(sub_83ACA2F8);
PPC_FUNC_IMPL(__imp__sub_83ACA2F8) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,21212(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21212);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,20040(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 20040);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// bl 0x831d20a0
	ctx.lr = 0x83ACA320;
	sub_831D20A0(ctx, base);
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

__attribute__((alias("__imp__sub_83ACA334"))) PPC_WEAK_FUNC(sub_83ACA334);
PPC_FUNC_IMPL(__imp__sub_83ACA334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACA338"))) PPC_WEAK_FUNC(sub_83ACA338);
PPC_FUNC_IMPL(__imp__sub_83ACA338) {
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
	// bl 0x831d1e78
	ctx.lr = 0x83ACA348;
	sub_831D1E78(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f0,16088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16088);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACA368"))) PPC_WEAK_FUNC(sub_83ACA368);
PPC_FUNC_IMPL(__imp__sub_83ACA368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83ACA370;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aca3a0
	if (!cr6.eq) goto loc_83ACA3A0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x83aca448
	goto loc_83ACA448;
loc_83ACA3A0:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// blt cr6,0x83aca3b0
	if (cr6.lt) goto loc_83ACA3B0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_83ACA3B0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83aca3f4
	if (!cr6.gt) goto loc_83ACA3F4;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
loc_83ACA3C4:
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r9,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r9.s64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cdcf0
	ctx.lr = 0x83ACA3E4;
	sub_831CDCF0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x83aca3c4
	if (cr6.lt) goto loc_83ACA3C4;
loc_83ACA3F4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x83aca430
	if (!cr6.lt) goto loc_83ACA430;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_83ACA410:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83ACA420;
	sub_831CDCF0(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x83aca410
	if (cr6.lt) goto loc_83ACA410;
loc_83ACA430:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r29,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r29.u32);
loc_83ACA448:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACA450"))) PPC_WEAK_FUNC(sub_83ACA450);
PPC_FUNC_IMPL(__imp__sub_83ACA450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi. r9,r4,28
	ctx.r9.u64 = ctx.r4.u32 & 0xF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,9008
	ctx.r11.s64 = ctx.r11.s64 + 9008;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bne 0x83aca4e4
	if (!cr0.eq) goto loc_83ACA4E4;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm. r11,r3,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFF0;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// vspltw128 v13,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// beq 0x83aca4c0
	if (cr0.eq) goto loc_83ACA4C0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83ACA48C:
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vmaddfp v11,v0,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// lvx128 v0,r4,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r4,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r4,r8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// vmaddfp v0,v0,v0,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v12,v12,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// bdnz 0x83aca48c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACA48C;
loc_83ACA4C0:
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_83ACA4E4:
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83ACA4F8:
	// lfsu f0,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f0,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f1.f64));
	// bdnz 0x83aca4f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACA4F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACA508"))) PPC_WEAK_FUNC(sub_83ACA508);
PPC_FUNC_IMPL(__imp__sub_83ACA508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi. r9,r4,28
	ctx.r9.u64 = ctx.r4.u32 & 0xF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,9008
	ctx.r11.s64 = ctx.r11.s64 + 9008;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// bne 0x83aca5c4
	if (!cr0.eq) goto loc_83ACA5C4;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm. r11,r3,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFF0;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// beq 0x83aca588
	if (cr0.eq) goto loc_83ACA588;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83ACA544:
	// lvx128 v62,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vmulfp128 v62,v62,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v62.f32)));
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// lvx128 v61,r4,r11
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v61,v61,v61
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32)));
	// lvx128 v60,r4,r9
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v60,v60,v60
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v60.f32)));
	// lvx128 v59,r4,r8
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v59,v59,v59
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v59.f32)));
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// vmaxfp128 v63,v63,v62
	simde_mm_store_ps(ctx.v63.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmaxfp128 v63,v63,v61
	simde_mm_store_ps(ctx.v63.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vmaxfp128 v63,v63,v60
	simde_mm_store_ps(ctx.v63.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vmaxfp128 v63,v63,v59
	simde_mm_store_ps(ctx.v63.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v59.f32)));
	// bdnz 0x83aca544
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACA544;
loc_83ACA588:
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x83aca5a4
	if (cr6.gt) goto loc_83ACA5A4;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_83ACA5A4:
	// lfs f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83aca5b8
	if (cr6.gt) goto loc_83ACA5B8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_83ACA5B8:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x83aca5c4
	if (!cr6.gt) goto loc_83ACA5C4;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_83ACA5C4:
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bge cr6,0x83aca5f0
	if (!cr6.lt) goto loc_83ACA5F0;
	// subf r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83ACA5D4:
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x83aca5e8
	if (!cr6.gt) goto loc_83ACA5E8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_83ACA5E8:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x83aca5d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACA5D4;
loc_83ACA5F0:
	// fsqrts f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACA5F8"))) PPC_WEAK_FUNC(sub_83ACA5F8);
PPC_FUNC_IMPL(__imp__sub_83ACA5F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ACA600;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83ACA61C;
	sub_831EA7A0(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r10,r30,7
	ctx.r10.s64 = ctx.r30.s64 + 7;
	// addi r11,r11,31056
	ctx.r11.s64 = ctx.r11.s64 + 31056;
	// lis r7,-31739
	ctx.r7.s64 = -2080047104;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r8,r31,252
	ctx.r8.s64 = ctx.r31.s64 * 252;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,31044(r7)
	PPC_STORE_U32(ctx.r7.u32 + 31044, ctx.r10.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83aca678
	if (!cr6.gt) goto loc_83ACA678;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x83aca65c
	goto loc_83ACA65C;
loc_83ACA658:
	// lwz r10,31044(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 31044);
loc_83ACA65C:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r5,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r5.u32);
	// addi r8,r8,252
	ctx.r8.s64 = ctx.r8.s64 + 252;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x83aca658
	if (cr6.lt) goto loc_83ACA658;
loc_83ACA678:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,30536
	ctx.r31.s64 = ctx.r11.s64 + 30536;
	// stw r29,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r29.u32);
	// stw r6,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r6.u32);
	// bl 0x83ad0710
	ctx.lr = 0x83ACA68C;
	sub_83AD0710(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r8,508
	ctx.r8.s64 = 508;
	// li r6,25
	ctx.r6.s64 = 25;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83ab0510
	ctx.lr = 0x83ACA6A8;
	sub_83AB0510(ctx, base);
	// stw r3,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACA6B4"))) PPC_WEAK_FUNC(sub_83ACA6B4);
PPC_FUNC_IMPL(__imp__sub_83ACA6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACA6B8"))) PPC_WEAK_FUNC(sub_83ACA6B8);
PPC_FUNC_IMPL(__imp__sub_83ACA6B8) {
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
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// lwz r3,31080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aca6e4
	if (cr6.eq) goto loc_83ACA6E4;
	// bl 0x83ab05b8
	ctx.lr = 0x83ACA6DC;
	sub_83AB05B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31080, ctx.r11.u32);
loc_83ACA6E4:
	// bl 0x83ad1608
	ctx.lr = 0x83ACA6E8;
	sub_83AD1608(ctx, base);
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

__attribute__((alias("__imp__sub_83ACA6FC"))) PPC_WEAK_FUNC(sub_83ACA6FC);
PPC_FUNC_IMPL(__imp__sub_83ACA6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACA700"))) PPC_WEAK_FUNC(sub_83ACA700);
PPC_FUNC_IMPL(__imp__sub_83ACA700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r11,31044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31044);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,31056(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31056);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACA71C"))) PPC_WEAK_FUNC(sub_83ACA71C);
PPC_FUNC_IMPL(__imp__sub_83ACA71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACA720"))) PPC_WEAK_FUNC(sub_83ACA720);
PPC_FUNC_IMPL(__imp__sub_83ACA720) {
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
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x83aca754
	if (!cr6.lt) goto loc_83ACA754;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-22828
	ctx.r4.s64 = ctx.r11.s64 + -22828;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83ACA750;
	sub_831EA418(ctx, base);
	// b 0x83aca77c
	goto loc_83ACA77C;
loc_83ACA754:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,32100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32100);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,-2240(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -2240);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// bl 0x831d20a0
	ctx.lr = 0x83ACA770;
	sub_831D20A0(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,31072(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 31072, temp.u32);
loc_83ACA77C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACA78C"))) PPC_WEAK_FUNC(sub_83ACA78C);
PPC_FUNC_IMPL(__imp__sub_83ACA78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACA790"))) PPC_WEAK_FUNC(sub_83ACA790);
PPC_FUNC_IMPL(__imp__sub_83ACA790) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,31052
	ctx.r11.s64 = ctx.r11.s64 + 31052;
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r3,r6
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, xer);
	// ble cr6,0x83aca7c8
	if (!cr6.gt) goto loc_83ACA7C8;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-22800
	ctx.r4.s64 = ctx.r11.s64 + -22800;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACA7C0;
	sub_831EA3F0(ctx, base);
loc_83ACA7C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aca848
	goto loc_83ACA848;
loc_83ACA7C8:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83aca7f0
	if (!cr6.gt) goto loc_83ACA7F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83aca7f0
	if (!cr6.eq) goto loc_83ACA7F0;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-22816
	ctx.r4.s64 = ctx.r11.s64 + -22816;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83ACA7EC;
	sub_831EA418(ctx, base);
	// b 0x83aca7c0
	goto loc_83ACA7C0;
loc_83ACA7F0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83aca81c
	if (!cr6.gt) goto loc_83ACA81C;
	// addi r9,r8,-8
	ctx.r9.s64 = ctx.r8.s64 + -8;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83ACA810:
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r7,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83aca810
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACA810;
loc_83ACA81C:
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, xer);
	// bge cr6,0x83aca844
	if (!cr6.lt) goto loc_83ACA844;
	// subf r9,r11,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r11.s64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83ACA838:
	// li r10,0
	ctx.r10.s64 = 0;
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83aca838
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACA838;
loc_83ACA844:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83ACA848:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACA858"))) PPC_WEAK_FUNC(sub_83ACA858);
PPC_FUNC_IMPL(__imp__sub_83ACA858) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,31052
	ctx.r30.s64 = ctx.r11.s64 + 31052;
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// blt cr6,0x83aca89c
	if (cr6.lt) goto loc_83ACA89C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-22716
	ctx.r4.s64 = ctx.r11.s64 + -22716;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACA894;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aca8f8
	goto loc_83ACA8F8;
loc_83ACA89C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x83aca8b0
	if (!cr6.lt) goto loc_83ACA8B0;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r3,r11,31056
	ctx.r3.s64 = ctx.r11.s64 + 31056;
	// b 0x83aca8f8
	goto loc_83ACA8F8;
loc_83ACA8B0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aca8ec
	if (cr6.eq) goto loc_83ACA8EC;
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83aca8d0
	if (cr0.eq) goto loc_83ACA8D0;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
loc_83ACA8D0:
	// bl 0x83a9ce00
	ctx.lr = 0x83ACA8D4;
	sub_83A9CE00(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83aca8ec
	if (cr0.eq) goto loc_83ACA8EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83ab7bd0
	ctx.lr = 0x83ACA8E4;
	sub_83AB7BD0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83aca8f8
	if (!cr0.eq) goto loc_83ACA8F8;
loc_83ACA8EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_83ACA8F8:
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

__attribute__((alias("__imp__sub_83ACA910"))) PPC_WEAK_FUNC(sub_83ACA910);
PPC_FUNC_IMPL(__imp__sub_83ACA910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ACA918;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83aae588
	ctx.lr = 0x83ACA930;
	sub_83AAE588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83aade60
	ctx.lr = 0x83ACA93C;
	sub_83AADE60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aae538
	ctx.lr = 0x83ACA944;
	sub_83AAE538(ctx, base);
	// addi r29,r30,60
	ctx.r29.s64 = ctx.r30.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83ab2c60
	ctx.lr = 0x83ACA954;
	sub_83AB2C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ab28d8
	ctx.lr = 0x83ACA95C;
	sub_83AB28D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r30,108
	ctx.r5.s64 = ctx.r30.s64 + 108;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83aafca8
	ctx.lr = 0x83ACA96C;
	sub_83AAFCA8(ctx, base);
	// stb r3,172(r30)
	PPC_STORE_U8(ctx.r30.u32 + 172, ctx.r3.u8);
	// addi r29,r30,176
	ctx.r29.s64 = ctx.r30.s64 + 176;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aaf2a8
	ctx.lr = 0x83ACA984;
	sub_83AAF2A8(ctx, base);
	// lbz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 172);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83aca9c8
	if (!cr6.eq) goto loc_83ACA9C8;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lfs f13,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,25808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25808);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x83aca9c8
	if (cr6.gt) goto loc_83ACA9C8;
	// lfs f12,132(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x83aca9c8
	if (cr6.gt) goto loc_83ACA9C8;
	// lfs f12,136(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x83aca9c8
	if (cr6.gt) goto loc_83ACA9C8;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_83ACA9C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aaf228
	ctx.lr = 0x83ACA9E0;
	sub_83AAF228(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83aca9f0
	if (!cr6.eq) goto loc_83ACA9F0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r11,173(r30)
	PPC_STORE_U8(ctx.r30.u32 + 173, ctx.r11.u8);
loc_83ACA9F0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,49(r30)
	PPC_STORE_U8(ctx.r30.u32 + 49, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACAA00"))) PPC_WEAK_FUNC(sub_83ACAA00);
PPC_FUNC_IMPL(__imp__sub_83ACAA00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ACAA08;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83acaa38
	if (cr0.eq) goto loc_83ACAA38;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83acaa8c
	if (cr6.eq) goto loc_83ACAA8C;
	// lbz r11,49(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 49);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83acaa8c
	if (!cr0.eq) goto loc_83ACAA8C;
loc_83ACAA38:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x83ab2628
	ctx.lr = 0x83ACAA44;
	sub_83AB2628(ctx, base);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83acaa6c
	if (!cr0.eq) goto loc_83ACAA6C;
	// lbz r11,85(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83acaa6c
	if (!cr0.eq) goto loc_83ACAA6C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83acaa6c
	if (!cr6.eq) goto loc_83ACAA6C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83acaa80
	goto loc_83ACAA80;
loc_83ACAA6C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x83aca910
	ctx.lr = 0x83ACAA80;
	sub_83ACA910(ctx, base);
loc_83ACAA80:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r30,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r30.u8);
	// stb r10,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r10.u8);
loc_83ACAA8C:
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACAA9C"))) PPC_WEAK_FUNC(sub_83ACAA9C);
PPC_FUNC_IMPL(__imp__sub_83ACAA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACAAA0"))) PPC_WEAK_FUNC(sub_83ACAAA0);
PPC_FUNC_IMPL(__imp__sub_83ACAAA0) {
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
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83acaad8
	if (cr6.lt) goto loc_83ACAAD8;
	// bl 0x83aca858
	ctx.lr = 0x83ACAAC4;
	sub_83ACA858(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83acaad8
	if (cr0.eq) goto loc_83ACAAD8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_83ACAAD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACAAE8"))) PPC_WEAK_FUNC(sub_83ACAAE8);
PPC_FUNC_IMPL(__imp__sub_83ACAAE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83acab10
	if (!cr6.eq) goto loc_83ACAB10;
	// lbz r11,186(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 186);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83acab10
	if (!cr0.eq) goto loc_83ACAB10;
	// lbz r11,189(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 189);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
loc_83ACAB10:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACAB18"))) PPC_WEAK_FUNC(sub_83ACAB18);
PPC_FUNC_IMPL(__imp__sub_83ACAB18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACAB2C"))) PPC_WEAK_FUNC(sub_83ACAB2C);
PPC_FUNC_IMPL(__imp__sub_83ACAB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACAB30"))) PPC_WEAK_FUNC(sub_83ACAB30);
PPC_FUNC_IMPL(__imp__sub_83ACAB30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACAB48"))) PPC_WEAK_FUNC(sub_83ACAB48);
PPC_FUNC_IMPL(__imp__sub_83ACAB48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83ACAB50;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84a88
	ctx.lr = 0x83ACAB6C;
	sub_83A84A88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84b28
	ctx.lr = 0x83ACAB74;
	sub_83A84B28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84b40
	ctx.lr = 0x83ACAB7C;
	sub_83A84B40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83acaa00
	ctx.lr = 0x83ACAB8C;
	sub_83ACAA00(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aaedc0
	ctx.lr = 0x83ACAB9C;
	sub_83AAEDC0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acabbc
	if (!cr6.eq) goto loc_83ACABBC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x83acabb8
	if (!cr6.lt) goto loc_83ACABB8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83ACABB8:
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
loc_83ACABBC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aaee08
	ctx.lr = 0x83ACABCC;
	sub_83AAEE08(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acabdc
	if (!cr6.eq) goto loc_83ACABDC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 180, ctx.r11.u32);
loc_83ACABDC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aaee50
	ctx.lr = 0x83ACABEC;
	sub_83AAEE50(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acabfc
	if (!cr6.eq) goto loc_83ACABFC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
loc_83ACABFC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aaeea0
	ctx.lr = 0x83ACAC0C;
	sub_83AAEEA0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acac20
	if (!cr6.eq) goto loc_83ACAC20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a84870
	ctx.lr = 0x83ACAC20;
	sub_83A84870(ctx, base);
loc_83ACAC20:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aaeee8
	ctx.lr = 0x83ACAC30;
	sub_83AAEEE8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acac4c
	if (!cr6.eq) goto loc_83ACAC4C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84b20
	ctx.lr = 0x83ACAC4C;
	sub_83A84B20(ctx, base);
loc_83ACAC4C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aaf488
	ctx.lr = 0x83ACAC5C;
	sub_83AAF488(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x83acac94
	if (!cr6.eq) goto loc_83ACAC94;
	// lfs f13,31072(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 31072);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83acac84
	if (cr6.lt) goto loc_83ACAC84;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_83ACAC84:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x83acac90
	if (cr6.gt) goto loc_83ACAC90;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_83ACAC90:
	// stfs f0,388(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
loc_83ACAC94:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r28,60
	ctx.r4.s64 = ctx.r28.s64 + 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aaf518
	ctx.lr = 0x83ACACA8;
	sub_83AAF518(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acacd4
	if (!cr6.eq) goto loc_83ACACD4;
	// lfs f13,31072(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 31072);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83acacc4
	if (cr6.lt) goto loc_83ACACC4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_83ACACC4:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x83acacd0
	if (cr6.gt) goto loc_83ACACD0;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_83ACACD0:
	// stfs f0,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
loc_83ACACD4:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83aaef30
	ctx.lr = 0x83ACACE8;
	sub_83AAEF30(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acad40
	if (!cr6.eq) goto loc_83ACAD40;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84b20
	ctx.lr = 0x83ACAD04;
	sub_83A84B20(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x83a84b20
	ctx.lr = 0x83ACAD28;
	sub_83A84B20(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84b20
	ctx.lr = 0x83ACAD3C;
	sub_83A84B20(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_83ACAD40:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aaf188
	ctx.lr = 0x83ACAD50;
	sub_83AAF188(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acad70
	if (!cr6.eq) goto loc_83ACAD70;
	// li r5,3
	ctx.r5.s64 = 3;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84b20
	ctx.lr = 0x83ACAD6C;
	sub_83A84B20(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_83ACAD70:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aaeff8
	ctx.lr = 0x83ACAD80;
	sub_83AAEFF8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acadd8
	if (!cr6.eq) goto loc_83ACADD8;
	// li r5,4
	ctx.r5.s64 = 4;
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84b20
	ctx.lr = 0x83ACAD9C;
	sub_83A84B20(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x83a84b20
	ctx.lr = 0x83ACADC0;
	sub_83A84B20(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// lfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84b20
	ctx.lr = 0x83ACADD4;
	sub_83A84B20(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_83ACADD8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aaf1d8
	ctx.lr = 0x83ACADE8;
	sub_83AAF1D8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acae08
	if (!cr6.eq) goto loc_83ACAE08;
	// li r5,7
	ctx.r5.s64 = 7;
	// lfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84b20
	ctx.lr = 0x83ACAE04;
	sub_83A84B20(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_83ACAE08:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aaf0c0
	ctx.lr = 0x83ACAE18;
	sub_83AAF0C0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acae70
	if (!cr6.eq) goto loc_83ACAE70;
	// li r5,8
	ctx.r5.s64 = 8;
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84b20
	ctx.lr = 0x83ACAE34;
	sub_83A84B20(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x83a84b20
	ctx.lr = 0x83ACAE58;
	sub_83A84B20(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// lfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84b20
	ctx.lr = 0x83ACAE6C;
	sub_83A84B20(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_83ACAE70:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x83acae98
	if (!cr6.eq) goto loc_83ACAE98;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83a84b18
	ctx.lr = 0x83ACAE88;
	sub_83A84B18(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84b30
	ctx.lr = 0x83ACAE94;
	sub_83A84B30(ctx, base);
	// b 0x83acaea0
	goto loc_83ACAEA0;
loc_83ACAE98:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83a84b18
	ctx.lr = 0x83ACAEA0;
	sub_83A84B18(ctx, base);
loc_83ACAEA0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACAEAC"))) PPC_WEAK_FUNC(sub_83ACAEAC);
PPC_FUNC_IMPL(__imp__sub_83ACAEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACAEB0"))) PPC_WEAK_FUNC(sub_83ACAEB0);
PPC_FUNC_IMPL(__imp__sub_83ACAEB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x83a849a8
	sub_83A849A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACAEC4"))) PPC_WEAK_FUNC(sub_83ACAEC4);
PPC_FUNC_IMPL(__imp__sub_83ACAEC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACAEC8"))) PPC_WEAK_FUNC(sub_83ACAEC8);
PPC_FUNC_IMPL(__imp__sub_83ACAEC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x83a849b8
	sub_83A849B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACAEDC"))) PPC_WEAK_FUNC(sub_83ACAEDC);
PPC_FUNC_IMPL(__imp__sub_83ACAEDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACAEE0"))) PPC_WEAK_FUNC(sub_83ACAEE0);
PPC_FUNC_IMPL(__imp__sub_83ACAEE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83ACAEE8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31739
	ctx.r29.s64 = -2080047104;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r11,31056(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31056);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83acaf70
	if (!cr6.gt) goto loc_83ACAF70;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lis r26,-31739
	ctx.r26.s64 = -2080047104;
loc_83ACAF14:
	// lwz r10,31044(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 31044);
	// add r31,r30,r10
	ctx.r31.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lbz r10,187(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 187);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83acaf60
	if (cr0.eq) goto loc_83ACAF60;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x83acaf60
	if (!cr6.eq) goto loc_83ACAF60;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// bne cr6,0x83acaf60
	if (!cr6.eq) goto loc_83ACAF60;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83acaf54
	if (cr6.eq) goto loc_83ACAF54;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x83ad1580
	ctx.lr = 0x83ACAF54;
	sub_83AD1580(ctx, base);
loc_83ACAF54:
	// stb r27,186(r31)
	PPC_STORE_U8(ctx.r31.u32 + 186, ctx.r27.u8);
	// stb r27,189(r31)
	PPC_STORE_U8(ctx.r31.u32 + 189, ctx.r27.u8);
	// lwz r11,31056(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31056);
loc_83ACAF60:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,252
	ctx.r30.s64 = ctx.r30.s64 + 252;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x83acaf14
	if (cr6.lt) goto loc_83ACAF14;
loc_83ACAF70:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACAF78"))) PPC_WEAK_FUNC(sub_83ACAF78);
PPC_FUNC_IMPL(__imp__sub_83ACAF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,31056(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31056);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83acafcc
	if (!cr6.gt) goto loc_83ACAFCC;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,31044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31044);
	// addi r11,r11,187
	ctx.r11.s64 = ctx.r11.s64 + 187;
loc_83ACAF98:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x83acafbc
	if (cr0.eq) goto loc_83ACAFBC;
	// lwz r8,-179(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -179);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83acafbc
	if (!cr6.eq) goto loc_83ACAFBC;
	// lwz r8,-171(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -171);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// beq cr6,0x83acafd4
	if (cr6.eq) goto loc_83ACAFD4;
loc_83ACAFBC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,252
	ctx.r11.s64 = ctx.r11.s64 + 252;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83acaf98
	if (cr6.lt) goto loc_83ACAF98;
loc_83ACAFCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83ACAFD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACAFDC"))) PPC_WEAK_FUNC(sub_83ACAFDC);
PPC_FUNC_IMPL(__imp__sub_83ACAFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACAFE0"))) PPC_WEAK_FUNC(sub_83ACAFE0);
PPC_FUNC_IMPL(__imp__sub_83ACAFE0) {
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
	// lbz r11,190(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 190);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83acb05c
	if (cr0.eq) goto loc_83ACB05C;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lfs f0,25808(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25808);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x83acb054
	if (cr6.gt) goto loc_83ACB054;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83acb04c
	if (cr6.eq) goto loc_83ACB04C;
	// ble cr6,0x83acb054
	if (!cr6.gt) goto loc_83ACB054;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83acb054
	if (cr6.gt) goto loc_83ACB054;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83acb03c
	if (cr6.eq) goto loc_83ACB03C;
	// li r4,38
	ctx.r4.s64 = 38;
	// bl 0x83ad1580
	ctx.lr = 0x83ACB03C;
	sub_83AD1580(ctx, base);
loc_83ACB03C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,189(r31)
	PPC_STORE_U8(ctx.r31.u32 + 189, ctx.r11.u8);
	// b 0x83acb060
	goto loc_83ACB060;
loc_83ACB04C:
	// li r3,12
	ctx.r3.s64 = 12;
	// b 0x83acb060
	goto loc_83ACB060;
loc_83ACB054:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,189(r31)
	PPC_STORE_U8(ctx.r31.u32 + 189, ctx.r11.u8);
loc_83ACB05C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83ACB060:
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

__attribute__((alias("__imp__sub_83ACB074"))) PPC_WEAK_FUNC(sub_83ACB074);
PPC_FUNC_IMPL(__imp__sub_83ACB074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACB078"))) PPC_WEAK_FUNC(sub_83ACB078);
PPC_FUNC_IMPL(__imp__sub_83ACB078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,31076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31076);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83ACB088"))) PPC_WEAK_FUNC(sub_83ACB088);
PPC_FUNC_IMPL(__imp__sub_83ACB088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83ACB090;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31739
	ctx.r25.s64 = -2080047104;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,31056(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31056);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83acb160
	if (!cr6.gt) goto loc_83ACB160;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,54
	ctx.r27.s64 = 54;
	// li r28,100
	ctx.r28.s64 = 100;
	// lis r29,-31739
	ctx.r29.s64 = -2080047104;
loc_83ACB0B8:
	// lwz r11,31044(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31044);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r9,187(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 187);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x83acb148
	if (cr0.eq) goto loc_83ACB148;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83acb148
	if (cr6.eq) goto loc_83ACB148;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83acb148
	if (cr6.eq) goto loc_83ACB148;
	// bl 0x83a84b40
	ctx.lr = 0x83ACB0E8;
	sub_83A84B40(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_83ACB0EC:
	// lwz r11,31044(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31044);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r3,185(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 185);
	// lhzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x83aa0f50
	ctx.lr = 0x83ACB108;
	sub_83AA0F50(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x83acb138
	if (cr6.eq) goto loc_83ACB138;
	// lwz r11,31044(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31044);
	// add r10,r27,r30
	ctx.r10.u64 = ctx.r27.u64 + ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x83a84b38
	ctx.lr = 0x83ACB138;
	sub_83A84B38(ctx, base);
loc_83ACB138:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// blt cr6,0x83acb0ec
	if (cr6.lt) goto loc_83ACB0EC;
	// lwz r10,31056(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31056);
loc_83ACB148:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,126
	ctx.r28.s64 = ctx.r28.s64 + 126;
	// addi r31,r31,252
	ctx.r31.s64 = ctx.r31.s64 + 252;
	// addi r27,r27,63
	ctx.r27.s64 = ctx.r27.s64 + 63;
	// cmpw cr6,r26,r10
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, xer);
	// blt cr6,0x83acb0b8
	if (cr6.lt) goto loc_83ACB0B8;
loc_83ACB160:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACB168"))) PPC_WEAK_FUNC(sub_83ACB168);
PPC_FUNC_IMPL(__imp__sub_83ACB168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lis r7,-31739
	ctx.r7.s64 = -2080047104;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// addi r5,r11,31056
	ctx.r5.s64 = ctx.r11.s64 + 31056;
	// lwz r11,31056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31056);
	// lwz r9,31068(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 31068);
	// lwz r6,31044(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31044);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bge cr6,0x83acb1b4
	if (!cr6.lt) goto loc_83ACB1B4;
	// mulli r10,r9,252
	ctx.r10.s64 = ctx.r9.s64 * 252;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_83ACB198:
	// lbz r4,187(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 187);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x83acb214
	if (cr0.eq) goto loc_83ACB214;
	// addi r10,r10,252
	ctx.r10.s64 = ctx.r10.s64 + 252;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// blt cr6,0x83acb198
	if (cr6.lt) goto loc_83ACB198;
loc_83ACB1B4:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83acb1e0
	if (!cr6.gt) goto loc_83ACB1E0;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_83ACB1C4:
	// lbz r6,187(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 187);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x83acb214
	if (cr0.eq) goto loc_83ACB214;
	// addi r10,r10,252
	ctx.r10.s64 = ctx.r10.s64 + 252;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// blt cr6,0x83acb1c4
	if (cr6.lt) goto loc_83ACB1C4;
loc_83ACB1E0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83ACB1E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stb r11,187(r10)
	PPC_STORE_U8(ctx.r10.u32 + 187, ctx.r11.u8);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r11,192(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 192, ctx.r11.u32);
	// blr 
	return;
loc_83ACB214:
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r6,r8,r11
	ctx.r6.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mullw r6,r6,r11
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// twllei r11,0
	// subf r11,r6,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r6.s64;
	// twlgei r9,-1
	// stw r11,31068(r7)
	PPC_STORE_U32(ctx.r7.u32 + 31068, ctx.r11.u32);
	// b 0x83acb1e4
	goto loc_83ACB1E4;
}

__attribute__((alias("__imp__sub_83ACB23C"))) PPC_WEAK_FUNC(sub_83ACB23C);
PPC_FUNC_IMPL(__imp__sub_83ACB23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACB240"))) PPC_WEAK_FUNC(sub_83ACB240);
PPC_FUNC_IMPL(__imp__sub_83ACB240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83ACB248;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x83acb2d4
	if (cr6.lt) goto loc_83ACB2D4;
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83acb27c
	if (cr0.eq) goto loc_83ACB27C;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
loc_83ACB27C:
	// bl 0x83a9ce00
	ctx.lr = 0x83ACB280;
	sub_83A9CE00(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83acb2a4
	if (cr0.eq) goto loc_83ACB2A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ab7bd0
	ctx.lr = 0x83ACB294;
	sub_83AB7BD0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83acb2a4
	if (cr0.eq) goto loc_83ACB2A4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// b 0x83acb2b8
	goto loc_83ACB2B8;
loc_83ACB2A4:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,31052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31052);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_83ACB2B8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// adde r4,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83acb2dc
	goto loc_83ACB2DC;
loc_83ACB2D4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83ACB2DC:
	// addi r5,r30,40
	ctx.r5.s64 = ctx.r30.s64 + 40;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r11,r11,-21856
	ctx.r11.s64 = ctx.r11.s64 + -21856;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x83ad16a0
	ctx.lr = 0x83ACB310;
	sub_83AD16A0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83acb320
	if (!cr0.eq) goto loc_83ACB320;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83acb344
	goto loc_83ACB344;
loc_83ACB320:
	// lwz r3,196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// bl 0x83aa3ce8
	ctx.lr = 0x83ACB328;
	sub_83AA3CE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a84370
	ctx.lr = 0x83ACB334;
	sub_83A84370(ctx, base);
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ad0e08
	ctx.lr = 0x83ACB340;
	sub_83AD0E08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83ACB344:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACB34C"))) PPC_WEAK_FUNC(sub_83ACB34C);
PPC_FUNC_IMPL(__imp__sub_83ACB34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACB350"))) PPC_WEAK_FUNC(sub_83ACB350);
PPC_FUNC_IMPL(__imp__sub_83ACB350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83ACB358;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r23,4(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lfs f29,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stfs f29,96(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// bl 0x83acaa00
	ctx.lr = 0x83ACB398;
	sub_83ACAA00(ctx, base);
	// lbz r11,173(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 173);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// stb r11,380(r10)
	PPC_STORE_U8(ctx.r10.u32 + 380, ctx.r11.u8);
	// bne 0x83acb3b8
	if (!cr0.eq) goto loc_83ACB3B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83acb920
	goto loc_83ACB920;
loc_83ACB3B8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a47e60
	ctx.lr = 0x83ACB3C0;
	sub_82A47E60(ctx, base);
	// or r24,r3,r31
	ctx.r24.u64 = ctx.r3.u64 | ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aaf2a8
	ctx.lr = 0x83ACB3D4;
	sub_83AAF2A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aaf2f8
	ctx.lr = 0x83ACB3E8;
	sub_83AAF2F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aaf348
	ctx.lr = 0x83ACB3FC;
	sub_83AAF348(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aaf398
	ctx.lr = 0x83ACB410;
	sub_83AAF398(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// lfs f30,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x83acb44c
	if (cr6.eq) goto loc_83ACB44C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83acb44c
	if (cr6.eq) goto loc_83ACB44C;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x83acb43c
	if (cr6.eq) goto loc_83ACB43C;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83acb498
	if (!cr6.eq) goto loc_83ACB498;
loc_83ACB43C:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x83acb490
	goto loc_83ACB490;
loc_83ACB44C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aaf348
	ctx.lr = 0x83ACB45C;
	sub_83AAF348(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83acb47c
	if (!cr0.eq) goto loc_83ACB47C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83acb478
	if (!cr6.eq) goto loc_83ACB478;
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x83acb47c
	goto loc_83ACB47C;
loc_83ACB478:
	// stfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_83ACB47C:
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_83ACB490:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a84678
	ctx.lr = 0x83ACB498;
	sub_83A84678(ctx, base);
loc_83ACB498:
	// lbz r11,190(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 190);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83acb4b4
	if (cr0.eq) goto loc_83ACB4B4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f1,176(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83acafe0
	ctx.lr = 0x83ACB4B0;
	sub_83ACAFE0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_83ACB4B4:
	// lwz r11,108(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83acb4f8
	if (cr6.eq) goto loc_83ACB4F8;
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(ctx.r24.s32, 1, xer);
	// beq cr6,0x83acb4f8
	if (cr6.eq) goto loc_83ACB4F8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aaf6a0
	ctx.lr = 0x83ACB4D0;
	sub_83AAF6A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83acb4f8
	if (!cr0.eq) goto loc_83ACB4F8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aaf6f0
	ctx.lr = 0x83ACB4E0;
	sub_83AAF6F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83acb4f8
	if (!cr0.eq) goto loc_83ACB4F8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aaf730
	ctx.lr = 0x83ACB4F0;
	sub_83AAF730(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83acb58c
	if (cr0.eq) goto loc_83ACB58C;
loc_83ACB4F8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aaf698
	ctx.lr = 0x83ACB500;
	sub_83AAF698(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831f2130
	ctx.lr = 0x83ACB50C;
	sub_831F2130(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aaf728
	ctx.lr = 0x83ACB518;
	sub_83AAF728(ctx, base);
	// lbz r11,191(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 191);
	// li r10,8
	ctx.r10.s64 = 8;
	// lbz r4,172(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 172);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r26,112
	ctx.r3.s64 = ctx.r26.s64 + 112;
	// bl 0x83aa3420
	ctx.lr = 0x83ACB548;
	sub_83AA3420(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acb58c
	if (!cr6.eq) goto loc_83ACB58C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83acb58c
	if (!cr6.gt) goto loc_83ACB58C;
	// addi r30,r1,136
	ctx.r30.s64 = ctx.r1.s64 + 136;
loc_83ACB564:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a84750
	ctx.lr = 0x83ACB578;
	sub_83A84750(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x83acb564
	if (cr6.lt) goto loc_83ACB564;
loc_83ACB58C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aaf3e8
	ctx.lr = 0x83ACB59C;
	sub_83AAF3E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acb5b4
	if (!cr6.eq) goto loc_83ACB5B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a847c0
	ctx.lr = 0x83ACB5B4;
	sub_83A847C0(ctx, base);
loc_83ACB5B4:
	// lbz r11,191(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 191);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x83acb5ec
	if (!cr6.gt) goto loc_83ACB5EC;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aaf438
	ctx.lr = 0x83ACB5D4;
	sub_83AAF438(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acb5ec
	if (!cr6.eq) goto loc_83ACB5EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a847c0
	ctx.lr = 0x83ACB5EC;
	sub_83A847C0(ctx, base);
loc_83ACB5EC:
	// addi r31,r26,60
	ctx.r31.s64 = ctx.r26.s64 + 60;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aaf518
	ctx.lr = 0x83ACB604;
	sub_83AAF518(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acb62c
	if (!cr6.eq) goto loc_83ACB62C;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,31072(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31072);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x83acb628
	if (cr6.lt) goto loc_83ACB628;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_83ACB628:
	// stfs f13,392(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r23.u32 + 392, temp.u32);
loc_83ACB62C:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aaf5f0
	ctx.lr = 0x83ACB640;
	sub_83AAF5F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83acb654
	if (cr0.eq) goto loc_83ACB654;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r11.u32);
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_83ACB654:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aad800
	ctx.lr = 0x83ACB65C;
	sub_83AAD800(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// ble 0x83acb714
	if (!cr0.gt) goto loc_83ACB714;
	// addi r28,r26,216
	ctx.r28.s64 = ctx.r26.s64 + 216;
	// addi r29,r26,200
	ctx.r29.s64 = ctx.r26.s64 + 200;
loc_83ACB670:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aad7d8
	ctx.lr = 0x83ACB684;
	sub_83AAD7D8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acb700
	if (!cr6.eq) goto loc_83ACB700;
	// lhz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lbz r3,185(r26)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r26.u32 + 185);
	// bl 0x83aa0f50
	ctx.lr = 0x83ACB698;
	sub_83AA0F50(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r30,65535
	cr6.compare<uint32_t>(ctx.r30.u32, 65535, xer);
	// beq cr6,0x83acb6f4
	if (cr6.eq) goto loc_83ACB6F4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x83aad260
	ctx.lr = 0x83ACB6AC;
	sub_83AAD260(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83acb6bc
	if (cr0.eq) goto loc_83ACB6BC;
	// lfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f31.f64 = double(temp.f32);
	// b 0x83acb6c8
	goto loc_83ACB6C8;
loc_83ACB6BC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83acb6c8
	if (!cr6.eq) goto loc_83ACB6C8;
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
loc_83ACB6C8:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x83aad270
	ctx.lr = 0x83ACB6D0;
	sub_83AAD270(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83acb6e0
	if (cr0.eq) goto loc_83ACB6E0;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_83ACB6E0:
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a84b38
	ctx.lr = 0x83ACB6F4;
	sub_83A84B38(ctx, base);
loc_83ACB6F4:
	// lhz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// stfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_83ACB700:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r31,r25
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, xer);
	// blt cr6,0x83acb670
	if (cr6.lt) goto loc_83ACB670;
loc_83ACB714:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83ab2e00
	ctx.lr = 0x83ACB72C;
	sub_83AB2E00(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acb790
	if (!cr6.eq) goto loc_83ACB790;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83acb788
	if (!cr6.eq) goto loc_83ACB788;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83a84b20
	ctx.lr = 0x83ACB754;
	sub_83A84B20(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a84b20
	ctx.lr = 0x83ACB768;
	sub_83A84B20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a84b18
	ctx.lr = 0x83ACB778;
	sub_83A84B18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a84b30
	ctx.lr = 0x83ACB784;
	sub_83A84B30(ctx, base);
	// b 0x83acb790
	goto loc_83ACB790;
loc_83ACB788:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83a84b18
	ctx.lr = 0x83ACB790;
	sub_83A84B18(ctx, base);
loc_83ACB790:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83ab2ee8
	ctx.lr = 0x83ACB7B0;
	sub_83AB2EE8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acb868
	if (!cr6.eq) goto loc_83ACB868;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x83acb95c
	if (cr6.lt) goto loc_83ACB95C;
	// beq cr6,0x83acb954
	if (cr6.eq) goto loc_83ACB954;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x83acb94c
	if (cr6.lt) goto loc_83ACB94C;
	// beq cr6,0x83acb944
	if (cr6.eq) goto loc_83ACB944;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// blt cr6,0x83acb93c
	if (cr6.lt) goto loc_83ACB93C;
	// beq cr6,0x83acb934
	if (cr6.eq) goto loc_83ACB934;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bge cr6,0x83acb95c
	if (!cr6.lt) goto loc_83ACB95C;
	// li r11,5
	ctx.r11.s64 = 5;
loc_83ACB7EC:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x83a84b20
	ctx.lr = 0x83ACB810;
	sub_83A84B20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a84b20
	ctx.lr = 0x83ACB824;
	sub_83A84B20(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a84b20
	ctx.lr = 0x83ACB838;
	sub_83A84B20(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a84b20
	ctx.lr = 0x83ACB84C;
	sub_83A84B20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a84b18
	ctx.lr = 0x83ACB85C;
	sub_83A84B18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a84b30
	ctx.lr = 0x83ACB868;
	sub_83A84B30(ctx, base);
loc_83ACB868:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83ACB870:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aaf640
	ctx.lr = 0x83ACB884;
	sub_83AAF640(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acb8a4
	if (!cr6.eq) goto loc_83ACB8A4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a84b20
	ctx.lr = 0x83ACB8A0;
	sub_83A84B20(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_83ACB8A4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// blt cr6,0x83acb870
	if (cr6.lt) goto loc_83ACB870;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83acb8d4
	if (!cr6.eq) goto loc_83ACB8D4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a84b18
	ctx.lr = 0x83ACB8C8;
	sub_83A84B18(ctx, base);
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a84b30
	ctx.lr = 0x83ACB8D4;
	sub_83A84B30(ctx, base);
loc_83ACB8D4:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83aaf0c0
	ctx.lr = 0x83ACB8E4;
	sub_83AAF0C0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acb91c
	if (!cr6.eq) goto loc_83ACB91C;
	// li r5,8
	ctx.r5.s64 = 8;
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a84b20
	ctx.lr = 0x83ACB900;
	sub_83A84B20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a84b18
	ctx.lr = 0x83ACB910;
	sub_83A84B18(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a84b30
	ctx.lr = 0x83ACB91C;
	sub_83A84B30(ctx, base);
loc_83ACB91C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_83ACB920:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
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
loc_83ACB934:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x83acb7ec
	goto loc_83ACB7EC;
loc_83ACB93C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83acb7ec
	goto loc_83ACB7EC;
loc_83ACB944:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83acb7ec
	goto loc_83ACB7EC;
loc_83ACB94C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83acb7ec
	goto loc_83ACB7EC;
loc_83ACB954:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83acb7ec
	goto loc_83ACB7EC;
loc_83ACB95C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83acb7ec
	if (!cr6.eq) goto loc_83ACB7EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a84b18
	ctx.lr = 0x83ACB978;
	sub_83A84B18(ctx, base);
	// b 0x83acb868
	goto loc_83ACB868;
}

__attribute__((alias("__imp__sub_83ACB97C"))) PPC_WEAK_FUNC(sub_83ACB97C);
PPC_FUNC_IMPL(__imp__sub_83ACB97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACB980"))) PPC_WEAK_FUNC(sub_83ACB980);
PPC_FUNC_IMPL(__imp__sub_83ACB980) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,49(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 49);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83acb9b4
	if (!cr0.eq) goto loc_83ACB9B4;
loc_83ACB9AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83acba70
	goto loc_83ACBA70;
loc_83ACB9B4:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x83acb9e0
	if (!cr6.eq) goto loc_83ACB9E0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aaee08
	ctx.lr = 0x83ACB9D0;
	sub_83AAEE08(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acb9e0
	if (!cr6.eq) goto loc_83ACB9E0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
loc_83ACB9E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aaf270
	ctx.lr = 0x83ACB9F4;
	sub_83AAF270(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83acb9ac
	if (cr0.eq) goto loc_83ACB9AC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stb r11,190(r31)
	PPC_STORE_U8(ctx.r31.u32 + 190, ctx.r11.u8);
	// beq 0x83acb9ac
	if (cr0.eq) goto loc_83ACB9AC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lbz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x83acba50
	if (!cr6.eq) goto loc_83ACBA50;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lfs f13,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,25808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25808);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x83acba50
	if (cr6.gt) goto loc_83ACBA50;
	// lfs f12,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x83acba50
	if (cr6.gt) goto loc_83ACBA50;
	// lfs f12,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x83acba50
	if (cr6.gt) goto loc_83ACBA50;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
loc_83ACBA50:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aaf2a8
	ctx.lr = 0x83ACBA60;
	sub_83AAF2A8(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x83acafe0
	ctx.lr = 0x83ACBA70;
	sub_83ACAFE0(ctx, base);
loc_83ACBA70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_83ACBA8C"))) PPC_WEAK_FUNC(sub_83ACBA8C);
PPC_FUNC_IMPL(__imp__sub_83ACBA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACBA90"))) PPC_WEAK_FUNC(sub_83ACBA90);
PPC_FUNC_IMPL(__imp__sub_83ACBA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,31076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 31076, ctx.r3.u32);
	// bne cr6,0x83acbaac
	if (!cr6.eq) goto loc_83ACBAAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ad0f38
	sub_83AD0F38(ctx, base);
	return;
loc_83ACBAAC:
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r3,r11,-20360
	ctx.r3.s64 = ctx.r11.s64 + -20360;
	// b 0x83ad0f38
	sub_83AD0F38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACBAB8"))) PPC_WEAK_FUNC(sub_83ACBAB8);
PPC_FUNC_IMPL(__imp__sub_83ACBAB8) {
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
	ctx.lr = 0x83ACBAC0;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,28(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r24,r11,31068
	ctx.r24.s64 = ctx.r11.s64 + 31068;
	// blt cr6,0x83acbb30
	if (cr6.lt) goto loc_83ACBB30;
	// lwz r11,-20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -20);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x83acbb0c
	if (cr6.lt) goto loc_83ACBB0C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-22412
	ctx.r4.s64 = ctx.r11.s64 + -22412;
loc_83ACBB00:
	// bl 0x831ea3f0
	ctx.lr = 0x83ACBB04;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83acbdc4
	goto loc_83ACBDC4;
loc_83ACBB0C:
	// lwz r11,-16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16);
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83acbb30
	if (cr6.gt) goto loc_83ACBB30;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-22480
	ctx.r4.s64 = ctx.r11.s64 + -22480;
	// b 0x83acbb00
	goto loc_83ACBB00;
loc_83ACBB30:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83acb168
	ctx.lr = 0x83ACBB38;
	sub_83ACB168(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// lbz r25,32(r30)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
	// lbz r23,13(r29)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r29.u32 + 13);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83ACBB60:
	// lwzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x83acbb60
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACBB60;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// addi r27,r31,32
	ctx.r27.s64 = ctx.r31.s64 + 32;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lbz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// stb r11,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r11.u8);
	// lfs f0,-26260(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,14(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 14);
	// stb r11,185(r31)
	PPC_STORE_U8(ctx.r31.u32 + 185, ctx.r11.u8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r8,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r8.u32);
	// stb r23,186(r31)
	PPC_STORE_U8(ctx.r31.u32 + 186, ctx.r23.u8);
	// stb r25,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r25.u8);
	// lbz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// stb r11,191(r31)
	PPC_STORE_U8(ctx.r31.u32 + 191, ctx.r11.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stb r28,189(r31)
	PPC_STORE_U8(ctx.r31.u32 + 189, ctx.r28.u8);
	// stb r28,190(r31)
	PPC_STORE_U8(ctx.r31.u32 + 190, ctx.r28.u8);
	// stw r26,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
	// stb r28,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r28.u8);
	// stb r28,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r28.u8);
	// stb r28,173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 173, ctx.r28.u8);
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// bne cr6,0x83acbc00
	if (!cr6.eq) goto loc_83ACBC00;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_83ACBC00:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// addi r8,r31,212
	ctx.r8.s64 = ctx.r31.s64 + 212;
	// addi r9,r31,198
	ctx.r9.s64 = ctx.r31.s64 + 198;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_83ACBC1C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// stfsu f0,4(r8)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x83acbc1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACBC1C;
	// lwz r11,-4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-4(r24)
	PPC_STORE_U32(ctx.r24.u32 + -4, ctx.r11.u32);
	// bl 0x83ab2628
	ctx.lr = 0x83ACBC48;
	sub_83AB2628(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x83ab3040
	ctx.lr = 0x83ACBC58;
	sub_83AB3040(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,12(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83aca910
	ctx.lr = 0x83ACBC6C;
	sub_83ACA910(ctx, base);
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83aaf5f0
	ctx.lr = 0x83ACBC84;
	sub_83AAF5F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acb980
	ctx.lr = 0x83ACBC90;
	sub_83ACB980(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83acbdc0
	if (!cr0.eq) goto loc_83ACBDC0;
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83acbcfc
	if (cr6.eq) goto loc_83ACBCFC;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83acbcfc
	if (cr6.eq) goto loc_83ACBCFC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83acbcfc
	if (!cr6.eq) goto loc_83ACBCFC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83acbcfc
	if (!cr6.eq) goto loc_83ACBCFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aafdb8
	ctx.lr = 0x83ACBCD4;
	sub_83AAFDB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83acbcfc
	if (!cr0.eq) goto loc_83ACBCFC;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x83aa3ce8
	ctx.lr = 0x83ACBCE4;
	sub_83AA3CE8(ctx, base);
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-22640
	ctx.r4.s64 = ctx.r11.s64 + -22640;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83ACBCF8;
	sub_831EA400(ctx, base);
	// b 0x83acbdc0
	goto loc_83ACBDC0;
loc_83ACBCFC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acb240
	ctx.lr = 0x83ACBD0C;
	sub_83ACB240(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83acbd88
	if (!cr0.eq) goto loc_83ACBD88;
	// extsb. r11,r23
	ctx.r11.s64 = ctx.r23.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83acbdc0
	if (!cr0.eq) goto loc_83ACBDC0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83acbd30
	if (cr6.eq) goto loc_83ACBD30;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x83ad1580
	ctx.lr = 0x83ACBD30;
	sub_83AD1580(ctx, base);
loc_83ACBD30:
	// stb r28,186(r31)
	PPC_STORE_U8(ctx.r31.u32 + 186, ctx.r28.u8);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// stb r28,187(r31)
	PPC_STORE_U8(ctx.r31.u32 + 187, ctx.r28.u8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r11,31056
	ctx.r9.s64 = ctx.r11.s64 + 31056;
	// stb r28,189(r31)
	PPC_STORE_U8(ctx.r31.u32 + 189, ctx.r28.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// li r8,252
	ctx.r8.s64 = 252;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,31044(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31044);
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// divw r11,r10,r8
	ctx.r11.s32 = PPCDivide(ctx.r10.s32, ctx.r8.s32);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r10,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// b 0x83acbdc4
	goto loc_83ACBDC4;
loc_83ACBD88:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lfs f0,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stfs f0,420(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 420, temp.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83acbdc0
	if (cr6.lt) goto loc_83ACBDC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aca858
	ctx.lr = 0x83ACBDAC;
	sub_83ACA858(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83acbdc0
	if (cr0.eq) goto loc_83ACBDC0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_83ACBDC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83ACBDC4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACBDCC"))) PPC_WEAK_FUNC(sub_83ACBDCC);
PPC_FUNC_IMPL(__imp__sub_83ACBDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACBDD0"))) PPC_WEAK_FUNC(sub_83ACBDD0);
PPC_FUNC_IMPL(__imp__sub_83ACBDD0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83acbdf4
	if (cr6.eq) goto loc_83ACBDF4;
	// bl 0x83ad1580
	ctx.lr = 0x83ACBDF4;
	sub_83AD1580(ctx, base);
loc_83ACBDF4:
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r11,186(r31)
	PPC_STORE_U8(ctx.r31.u32 + 186, ctx.r11.u8);
	// lis r8,-31739
	ctx.r8.s64 = -2080047104;
	// stb r11,189(r31)
	PPC_STORE_U8(ctx.r31.u32 + 189, ctx.r11.u8);
	// li r7,252
	ctx.r7.s64 = 252;
	// stb r11,187(r31)
	PPC_STORE_U8(ctx.r31.u32 + 187, ctx.r11.u8);
	// addi r8,r8,31056
	ctx.r8.s64 = ctx.r8.s64 + 31056;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// lwz r10,31044(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31044);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// divw r11,r10,r7
	ctx.r11.s32 = PPCDivide(ctx.r10.s32, ctx.r7.s32);
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r11,31068(r9)
	PPC_STORE_U32(ctx.r9.u32 + 31068, ctx.r11.u32);
	// stw r10,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83ACBE60"))) PPC_WEAK_FUNC(sub_83ACBE60);
PPC_FUNC_IMPL(__imp__sub_83ACBE60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83ACBE68;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x83acbfe4
	if (!cr6.eq) goto loc_83ACBFE4;
	// bl 0x83acab48
	ctx.lr = 0x83ACBE88;
	sub_83ACAB48(ctx, base);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a849c8
	ctx.lr = 0x83ACBE98;
	sub_83A849C8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83acbf34
	if (cr6.eq) goto loc_83ACBF34;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83acbf20
	if (cr6.eq) goto loc_83ACBF20;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83acbf0c
	if (cr6.eq) goto loc_83ACBF0C;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83acbef8
	if (cr6.eq) goto loc_83ACBEF8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83acbedc
	if (cr6.eq) goto loc_83ACBEDC;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x83acbf44
	if (!cr6.eq) goto loc_83ACBF44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a841c8
	ctx.lr = 0x83ACBED8;
	sub_83A841C8(ctx, base);
	// b 0x83acbf44
	goto loc_83ACBF44;
loc_83ACBEDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a86df0
	ctx.lr = 0x83ACBEF4;
	sub_83A86DF0(ctx, base);
	// b 0x83acbf44
	goto loc_83ACBF44;
loc_83ACBEF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a86dc0
	ctx.lr = 0x83ACBF08;
	sub_83A86DC0(ctx, base);
	// b 0x83acbf44
	goto loc_83ACBF44;
loc_83ACBF0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a864c8
	ctx.lr = 0x83ACBF1C;
	sub_83A864C8(ctx, base);
	// b 0x83acbf44
	goto loc_83ACBF44;
loc_83ACBF20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a86438
	ctx.lr = 0x83ACBF30;
	sub_83A86438(ctx, base);
	// b 0x83acbf44
	goto loc_83ACBF44;
loc_83ACBF34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a851c0
	ctx.lr = 0x83ACBF44;
	sub_83A851C0(ctx, base);
loc_83ACBF44:
	// lbz r11,186(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 186);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83acbf60
	if (!cr0.eq) goto loc_83ACBF60;
	// lbz r11,190(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 190);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x83acbfac
	if (!cr6.gt) goto loc_83ACBFAC;
loc_83ACBF60:
	// lbz r11,190(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 190);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x83acbfac
	if (cr6.eq) goto loc_83ACBFAC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aaedc0
	ctx.lr = 0x83ACBF7C;
	sub_83AAEDC0(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83acbf8c
	if (!cr0.eq) goto loc_83ACBF8C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83ACBF8C:
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// li r10,-1
	ctx.r10.s64 = -1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, xer);
	// blt cr6,0x83acbfa8
	if (cr6.lt) goto loc_83ACBFA8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83ACBFA8:
	// stw r11,404(r30)
	PPC_STORE_U32(ctx.r30.u32 + 404, ctx.r11.u32);
loc_83ACBFAC:
	// lbz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x83a84a18
	ctx.lr = 0x83ACBFBC;
	sub_83A84A18(ctx, base);
	// lbz r11,185(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 185);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r10,r11,7
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x83a84a50
	ctx.lr = 0x83ACBFD8;
	sub_83A84A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a85500
	ctx.lr = 0x83ACBFE0;
	sub_83A85500(ctx, base);
	// b 0x83acbfec
	goto loc_83ACBFEC;
loc_83ACBFE4:
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// bne cr6,0x83acbff4
	if (!cr6.eq) goto loc_83ACBFF4;
loc_83ACBFEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83acc028
	goto loc_83ACC028;
loc_83ACBFF4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83a84528
	ctx.lr = 0x83ACC000;
	sub_83A84528(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acc010
	if (!cr6.eq) goto loc_83ACC010;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stb r11,191(r31)
	PPC_STORE_U8(ctx.r31.u32 + 191, ctx.r11.u8);
loc_83ACC010:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acb350
	ctx.lr = 0x83ACC028;
	sub_83ACB350(ctx, base);
loc_83ACC028:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACC030"))) PPC_WEAK_FUNC(sub_83ACC030);
PPC_FUNC_IMPL(__imp__sub_83ACC030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83ACC038;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r28,r10,31064
	ctx.r28.s64 = ctx.r10.s64 + 31064;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// stb r11,49(r3)
	PPC_STORE_U8(ctx.r3.u32 + 49, ctx.r11.u8);
	// lwz r29,16(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83acc18c
	if (!cr6.eq) goto loc_83ACC18C;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x83acc1a4
	if (!cr6.eq) goto loc_83ACC1A4;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// beq cr6,0x83acc1a4
	if (cr6.eq) goto loc_83ACC1A4;
	// lbz r11,189(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 189);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83acc0d4
	if (!cr6.eq) goto loc_83ACC0D4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83acaa00
	ctx.lr = 0x83ACC0A4;
	sub_83ACAA00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acb980
	ctx.lr = 0x83ACC0B0;
	sub_83ACB980(ctx, base);
	// lbz r11,189(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 189);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83acc0f8
	if (cr0.eq) goto loc_83ACC0F8;
	// li r10,2
	ctx.r10.s64 = 2;
loc_83ACC0C0:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// subfc r11,r25,r11
	xer.ca = ctx.r11.u32 >= ctx.r25.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x83acc2ec
	goto loc_83ACC2EC;
loc_83ACC0D4:
	// lbz r11,186(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 186);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83acc0e8
	if (!cr0.eq) goto loc_83ACC0E8;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x83acc2ec
	goto loc_83ACC2EC;
loc_83ACC0E8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acaa00
	ctx.lr = 0x83ACC0F8;
	sub_83ACAA00(ctx, base);
loc_83ACC0F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aad128
	ctx.lr = 0x83ACC100;
	sub_83AAD128(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83acc12c
	if (cr0.eq) goto loc_83ACC12C;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aaf5f0
	ctx.lr = 0x83ACC11C;
	sub_83AAF5F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83acc12c
	if (cr0.eq) goto loc_83ACC12C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_83ACC12C:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x83acb240
	ctx.lr = 0x83ACC144;
	sub_83ACB240(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83acc154
	if (!cr0.eq) goto loc_83ACC154;
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x83acc0c0
	goto loc_83ACC0C0;
loc_83ACC154:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lfs f0,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stfs f0,420(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 420, temp.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83acc18c
	if (cr6.lt) goto loc_83ACC18C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aca858
	ctx.lr = 0x83ACC178;
	sub_83ACA858(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83acc18c
	if (cr0.eq) goto loc_83ACC18C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_83ACC18C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r28,376(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 376);
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// bne cr6,0x83acc1ac
	if (!cr6.eq) goto loc_83ACC1AC;
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x83acc2ec
	goto loc_83ACC2EC;
loc_83ACC1A4:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x83acc2ec
	goto loc_83ACC2EC;
loc_83ACC1AC:
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// bne cr6,0x83acc1c4
	if (!cr6.eq) goto loc_83ACC1C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x83acc2ec
	goto loc_83ACC2EC;
loc_83ACC1C4:
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(ctx.r24.s32, 1, xer);
	// beq cr6,0x83acc2e4
	if (cr6.eq) goto loc_83ACC2E4;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// beq cr6,0x83acc2c8
	if (cr6.eq) goto loc_83ACC2C8;
	// cmpwi cr6,r24,3
	cr6.compare<int32_t>(ctx.r24.s32, 3, xer);
	// beq cr6,0x83acc23c
	if (cr6.eq) goto loc_83ACC23C;
	// cmpwi cr6,r24,4
	cr6.compare<int32_t>(ctx.r24.s32, 4, xer);
	// beq cr6,0x83acc1fc
	if (cr6.eq) goto loc_83ACC1FC;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-22680
	ctx.r4.s64 = ctx.r11.s64 + -22680;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACC1F4;
	sub_831EA3F0(ctx, base);
	// li r3,11
	ctx.r3.s64 = 11;
	// b 0x83acc2ec
	goto loc_83ACC2EC;
loc_83ACC1FC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acb350
	ctx.lr = 0x83ACC214;
	sub_83ACB350(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x83acc228
	if (!cr6.eq) goto loc_83ACC228;
	// li r31,10
	ctx.r31.s64 = 10;
	// b 0x83acc234
	goto loc_83ACC234;
loc_83ACC228:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83a84390
	ctx.lr = 0x83ACC234;
	sub_83A84390(ctx, base);
loc_83ACC234:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83acc2ec
	goto loc_83ACC2EC;
loc_83ACC23C:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x83acc2ac
	if (!cr6.eq) goto loc_83ACC2AC;
	// lbz r11,189(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 189);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83acc2a4
	if (!cr0.eq) goto loc_83ACC2A4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acaa00
	ctx.lr = 0x83ACC260;
	sub_83ACAA00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acb980
	ctx.lr = 0x83ACC26C;
	sub_83ACB980(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83acc2a4
	if (!cr0.eq) goto loc_83ACC2A4;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acbe60
	ctx.lr = 0x83ACC28C;
	sub_83ACBE60(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acb350
	ctx.lr = 0x83ACC2A4;
	sub_83ACB350(ctx, base);
loc_83ACC2A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83acc2ec
	goto loc_83ACC2EC;
loc_83ACC2AC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acb350
	ctx.lr = 0x83ACC2C4;
	sub_83ACB350(ctx, base);
	// b 0x83acc2ec
	goto loc_83ACC2EC;
loc_83ACC2C8:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acbe60
	ctx.lr = 0x83ACC2E0;
	sub_83ACBE60(ctx, base);
	// b 0x83acc2ec
	goto loc_83ACC2EC;
loc_83ACC2E4:
	// addic r11,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// subfe r3,r11,r28
	temp.u8 = (~ctx.r11.u32 + ctx.r28.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r28.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r28.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83ACC2EC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACC2F4"))) PPC_WEAK_FUNC(sub_83ACC2F4);
PPC_FUNC_IMPL(__imp__sub_83ACC2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACC2F8"))) PPC_WEAK_FUNC(sub_83ACC2F8);
PPC_FUNC_IMPL(__imp__sub_83ACC2F8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x83acc030
	sub_83ACC030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACC304"))) PPC_WEAK_FUNC(sub_83ACC304);
PPC_FUNC_IMPL(__imp__sub_83ACC304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACC308"))) PPC_WEAK_FUNC(sub_83ACC308);
PPC_FUNC_IMPL(__imp__sub_83ACC308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r3,r11,-22304
	ctx.r3.s64 = ctx.r11.s64 + -22304;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACC314"))) PPC_WEAK_FUNC(sub_83ACC314);
PPC_FUNC_IMPL(__imp__sub_83ACC314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACC318"))) PPC_WEAK_FUNC(sub_83ACC318);
PPC_FUNC_IMPL(__imp__sub_83ACC318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r10,r11,31140
	ctx.r10.s64 = ctx.r11.s64 + 31140;
	// stw r4,31140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 31140, ctx.r4.u32);
	// stw r3,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACC32C"))) PPC_WEAK_FUNC(sub_83ACC32C);
PPC_FUNC_IMPL(__imp__sub_83ACC32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACC330"))) PPC_WEAK_FUNC(sub_83ACC330);
PPC_FUNC_IMPL(__imp__sub_83ACC330) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83acc41c
	if (cr6.lt) goto loc_83ACC41C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x83acc41c
	if (cr6.lt) goto loc_83ACC41C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83acc41c
	if (!cr6.gt) goto loc_83ACC41C;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83acc41c
	if (!cr6.gt) goto loc_83ACC41C;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83acc41c
	if (!cr6.gt) goto loc_83ACC41C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// ble cr6,0x83acc3a4
	if (!cr6.gt) goto loc_83ACC3A4;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-22152
	ctx.r4.s64 = ctx.r11.s64 + -22152;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACC3A0;
	sub_831EA3F0(ctx, base);
	// b 0x83acc430
	goto loc_83ACC430;
loc_83ACC3A4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83acc3b0
	if (!cr6.eq) goto loc_83ACC3B0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_83ACC3B0:
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ea7a0
	ctx.lr = 0x83ACC3BC;
	sub_831EA7A0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bgt cr6,0x83acc404
	if (cr6.gt) goto loc_83ACC404;
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x83acc434
	goto loc_83ACC434;
loc_83ACC404:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83add580
	ctx.lr = 0x83ACC40C;
	sub_83ADD580(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83acc430
	if (cr0.lt) goto loc_83ACC430;
	// mullw r3,r3,r30
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// b 0x83acc434
	goto loc_83ACC434;
loc_83ACC41C:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-22164
	ctx.r4.s64 = ctx.r11.s64 + -22164;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83ACC430;
	sub_831EA418(ctx, base);
loc_83ACC430:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83ACC434:
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

__attribute__((alias("__imp__sub_83ACC44C"))) PPC_WEAK_FUNC(sub_83ACC44C);
PPC_FUNC_IMPL(__imp__sub_83ACC44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACC450"))) PPC_WEAK_FUNC(sub_83ACC450);
PPC_FUNC_IMPL(__imp__sub_83ACC450) {
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
	// addi r30,r11,31084
	ctx.r30.s64 = ctx.r11.s64 + 31084;
	// lwz r11,31084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31084);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83acc48c
	if (!cr6.eq) goto loc_83ACC48C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-22080
	ctx.r4.s64 = ctx.r11.s64 + -22080;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACC488;
	sub_831EA3F0(ctx, base);
	// b 0x83acc4d8
	goto loc_83ACC4D8;
loc_83ACC48C:
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
loc_83ACC490:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83acc4b0
	if (cr6.eq) goto loc_83ACC4B0;
	// bl 0x83add290
	ctx.lr = 0x83ACC4A0;
	sub_83ADD290(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83add708
	ctx.lr = 0x83ACC4A8;
	sub_83ADD708(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83ACC4B0:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x83acc490
	if (cr6.lt) goto loc_83ACC490;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// bl 0x83a7e0c0
	ctx.lr = 0x83ACC4D0;
	sub_83A7E0C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83ACC4D8:
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

__attribute__((alias("__imp__sub_83ACC4F0"))) PPC_WEAK_FUNC(sub_83ACC4F0);
PPC_FUNC_IMPL(__imp__sub_83ACC4F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ACC4F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,31084
	ctx.r31.s64 = ctx.r11.s64 + 31084;
	// lwz r11,31084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31084);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83acc540
	if (cr6.eq) goto loc_83ACC540;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83acc540
	if (!cr6.gt) goto loc_83ACC540;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_83ACC528:
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x83add7e8
	ctx.lr = 0x83ACC530;
	sub_83ADD7E8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x83acc528
	if (cr6.lt) goto loc_83ACC528;
loc_83ACC540:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACC548"))) PPC_WEAK_FUNC(sub_83ACC548);
PPC_FUNC_IMPL(__imp__sub_83ACC548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,31132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31132);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// addi r3,r11,1160
	ctx.r3.s64 = ctx.r11.s64 + 1160;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACC568"))) PPC_WEAK_FUNC(sub_83ACC568);
PPC_FUNC_IMPL(__imp__sub_83ACC568) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,98(r3)
	PPC_STORE_U8(ctx.r3.u32 + 98, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACC574"))) PPC_WEAK_FUNC(sub_83ACC574);
PPC_FUNC_IMPL(__imp__sub_83ACC574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACC578"))) PPC_WEAK_FUNC(sub_83ACC578);
PPC_FUNC_IMPL(__imp__sub_83ACC578) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,97(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 97);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACC588"))) PPC_WEAK_FUNC(sub_83ACC588);
PPC_FUNC_IMPL(__imp__sub_83ACC588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83ACC590;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83a7e180
	ctx.lr = 0x83ACC5A4;
	sub_83A7E180(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r11,31128
	ctx.r30.s64 = ctx.r11.s64 + 31128;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r28,24(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r27,20(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x83a7e170
	ctx.lr = 0x83ACC5C4;
	sub_83A7E170(ctx, base);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83a7fb40
	ctx.lr = 0x83ACC5E0;
	sub_83A7FB40(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x83acc604
	if (cr0.eq) goto loc_83ACC604;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-21740
	ctx.r4.s64 = ctx.r11.s64 + -21740;
	// bl 0x831ea400
	ctx.lr = 0x83ACC5F8;
	sub_831EA400(ctx, base);
loc_83ACC5F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r11.u8);
	// b 0x83acc72c
	goto loc_83ACC72C;
loc_83ACC604:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a7e3e0
	ctx.lr = 0x83ACC610;
	sub_83A7E3E0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a7e418
	ctx.lr = 0x83ACC61C;
	sub_83A7E418(ctx, base);
	// lwz r6,-4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r5,r6
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// ble cr6,0x83acc640
	if (!cr6.gt) goto loc_83ACC640;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-21824
	ctx.r4.s64 = ctx.r11.s64 + -21824;
loc_83ACC634:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea410
	ctx.lr = 0x83ACC63C;
	sub_831EA410(ctx, base);
	// b 0x83acc5f8
	goto loc_83ACC5F8;
loc_83ACC640:
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r5,r6
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// beq cr6,0x83acc65c
	if (cr6.eq) goto loc_83ACC65C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-21912
	ctx.r4.s64 = ctx.r11.s64 + -21912;
	// b 0x83acc634
	goto loc_83ACC634;
loc_83ACC65C:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// bl 0x83a7e488
	ctx.lr = 0x83ACC670;
	sub_83A7E488(ctx, base);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83a7e4f8
	ctx.lr = 0x83ACC688;
	sub_83A7E4F8(ctx, base);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// lwa r9,96(r1)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 96));
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwa r6,100(r1)
	ctx.r6.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 100));
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwa r5,104(r1)
	ctx.r5.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 104));
	// sradi r7,r7,9
	xer.ca = (ctx.r7.s64 < 0) & ((ctx.r7.u64 & 0x1FF) != 0);
	ctx.r7.s64 = ctx.r7.s64 >> 9;
	// lwa r4,80(r1)
	ctx.r4.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rldicl r9,r7,10,54
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u64, 10) & 0x3FF;
	// rldicr r7,r11,10,53
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 10) & 0xFFFFFFFFFFFFFC00;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// subf r30,r5,r7
	ctx.r30.s64 = ctx.r7.s64 - ctx.r5.s64;
	// sradi r10,r10,10
	xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r10.s64 >> 10;
	// cmpdi cr6,r30,0
	cr6.compare<int64_t>(ctx.r30.s64, 0, xer);
	// ble cr6,0x83acc6f0
	if (!cr6.gt) goto loc_83ACC6F0;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// rldicr r9,r9,10,53
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 10) & 0xFFFFFFFFFFFFFC00;
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// b 0x83acc704
	goto loc_83ACC704;
loc_83ACC6F0:
	// lwa r11,108(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 108));
	// lwa r9,112(r1)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 112));
	// rldicr r11,r11,10,53
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 10) & 0xFFFFFFFFFFFFFC00;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
loc_83ACC704:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rldicr r10,r10,10,53
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 10) & 0xFFFFFFFFFFFFFC00;
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x83a7e580
	ctx.lr = 0x83ACC71C;
	sub_83A7E580(ctx, base);
	// std r30,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r30.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x83a7a2f0
	ctx.lr = 0x83ACC72C;
	sub_83A7A2F0(ctx, base);
loc_83ACC72C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACC738"))) PPC_WEAK_FUNC(sub_83ACC738);
PPC_FUNC_IMPL(__imp__sub_83ACC738) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a7a0d8
	ctx.lr = 0x83ACC754;
	sub_83A7A0D8(ctx, base);
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

__attribute__((alias("__imp__sub_83ACC768"))) PPC_WEAK_FUNC(sub_83ACC768);
PPC_FUNC_IMPL(__imp__sub_83ACC768) {
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
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r4,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r4.u32);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x83acc7ac
	if (!cr0.lt) goto loc_83ACC7AC;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-21684
	ctx.r4.s64 = ctx.r11.s64 + -21684;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACC7A0;
	sub_831EA3F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r11.u8);
	// b 0x83acc7c4
	goto loc_83ACC7C4;
loc_83ACC7AC:
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,31088
	ctx.r10.s64 = ctx.r10.s64 + 31088;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x83add528
	ctx.lr = 0x83ACC7C4;
	sub_83ADD528(ctx, base);
loc_83ACC7C4:
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

__attribute__((alias("__imp__sub_83ACC7D8"))) PPC_WEAK_FUNC(sub_83ACC7D8);
PPC_FUNC_IMPL(__imp__sub_83ACC7D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACC7EC"))) PPC_WEAK_FUNC(sub_83ACC7EC);
PPC_FUNC_IMPL(__imp__sub_83ACC7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACC7F0"))) PPC_WEAK_FUNC(sub_83ACC7F0);
PPC_FUNC_IMPL(__imp__sub_83ACC7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// ld r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 120);
	// lwz r11,31128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31128);
	// std r10,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r10.u64);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACC808"))) PPC_WEAK_FUNC(sub_83ACC808);
PPC_FUNC_IMPL(__imp__sub_83ACC808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83ACC810;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// blt cr6,0x83acc848
	if (cr6.lt) goto loc_83ACC848;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-21628
	ctx.r4.s64 = ctx.r11.s64 + -21628;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACC83C;
	sub_831EA3F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,97(r27)
	PPC_STORE_U8(ctx.r27.u32 + 97, ctx.r11.u8);
	// b 0x83acc8b8
	goto loc_83ACC8B8;
loc_83ACC848:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// ble cr6,0x83acc8b8
	if (!cr6.gt) goto loc_83ACC8B8;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r25,r11,31088
	ctx.r25.s64 = ctx.r11.s64 + 31088;
loc_83ACC860:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x83acc8a8
	if (!cr6.gt) goto loc_83ACC8A8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83ACC870:
	// lbz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 96);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r3,r11,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bl 0x83add490
	ctx.lr = 0x83ACC898;
	sub_83ADD490(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, xer);
	// blt cr6,0x83acc870
	if (cr6.lt) goto loc_83ACC870;
loc_83ACC8A8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r24
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r24.s32, xer);
	// blt cr6,0x83acc860
	if (cr6.lt) goto loc_83ACC860;
loc_83ACC8B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACC8C0"))) PPC_WEAK_FUNC(sub_83ACC8C0);
PPC_FUNC_IMPL(__imp__sub_83ACC8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-5
	ctx.r5.s64 = -5;
	// addi r4,r11,-21572
	ctx.r4.s64 = ctx.r11.s64 + -21572;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACC8D4"))) PPC_WEAK_FUNC(sub_83ACC8D4);
PPC_FUNC_IMPL(__imp__sub_83ACC8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACC8D8"))) PPC_WEAK_FUNC(sub_83ACC8D8);
PPC_FUNC_IMPL(__imp__sub_83ACC8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-5
	ctx.r5.s64 = -5;
	// addi r4,r11,-21560
	ctx.r4.s64 = ctx.r11.s64 + -21560;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACC8EC"))) PPC_WEAK_FUNC(sub_83ACC8EC);
PPC_FUNC_IMPL(__imp__sub_83ACC8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACC8F0"))) PPC_WEAK_FUNC(sub_83ACC8F0);
PPC_FUNC_IMPL(__imp__sub_83ACC8F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stb r5,99(r3)
	PPC_STORE_U8(ctx.r3.u32 + 99, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACC900"))) PPC_WEAK_FUNC(sub_83ACC900);
PPC_FUNC_IMPL(__imp__sub_83ACC900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x83acc918
	if (!cr6.eq) goto loc_83ACC918;
	// stfs f1,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// blr 
	return;
loc_83ACC918:
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stfs f1,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACC928"))) PPC_WEAK_FUNC(sub_83ACC928);
PPC_FUNC_IMPL(__imp__sub_83ACC928) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bne cr6,0x83acc9ac
	if (!cr6.eq) goto loc_83ACC9AC;
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x83acc9ac
	if (cr0.lt) goto loc_83ACC9AC;
	// lbz r10,99(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 99);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83acc978
	if (cr0.eq) goto loc_83ACC978;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lfs f2,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f1,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r10,31128
	ctx.r11.s64 = ctx.r10.s64 + 31128;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x83acc9a8
	goto loc_83ACC9A8;
loc_83ACC978:
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r9,31128
	ctx.r10.s64 = ctx.r9.s64 + 31128;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r10,r10,-40
	ctx.r10.s64 = ctx.r10.s64 + -40;
	// lwa r11,31128(r9)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r9.u32 + 31128));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f1,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// frsp f2,f0
	ctx.f2.f64 = double(float(ctx.f0.f64));
loc_83ACC9A8:
	// bl 0x83add498
	ctx.lr = 0x83ACC9AC;
	sub_83ADD498(ctx, base);
loc_83ACC9AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACC9BC"))) PPC_WEAK_FUNC(sub_83ACC9BC);
PPC_FUNC_IMPL(__imp__sub_83ACC9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACC9C0"))) PPC_WEAK_FUNC(sub_83ACC9C0);
PPC_FUNC_IMPL(__imp__sub_83ACC9C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x83acc9d4
	if (!cr0.lt) goto loc_83ACC9D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83ACC9D4:
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,31088
	ctx.r10.s64 = ctx.r10.s64 + 31088;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82e877c8
	sub_82E877C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACC9E8"))) PPC_WEAK_FUNC(sub_83ACC9E8);
PPC_FUNC_IMPL(__imp__sub_83ACC9E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83acca08
	if (cr6.gt) goto loc_83ACCA08;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83ACCA08:
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
	// divw r11,r10,r9
	ctx.r11.s32 = PPCDivide(ctx.r10.s32, ctx.r9.s32);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r11,r11,1023
	ctx.r11.s64 = ctx.r11.s64 + 1023;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// srawi r11,r11,10
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 10;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// twllei r9,0
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// twlgei r10,-1
	// srawi r11,r11,10
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 10;
	// addze. r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt 0x83acca50
	if (cr0.gt) goto loc_83ACCA50;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83acca5c
	goto loc_83ACCA5C;
loc_83ACCA50:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// ble cr6,0x83acca5c
	if (!cr6.gt) goto loc_83ACCA5C;
	// li r11,4
	ctx.r11.s64 = 4;
loc_83ACCA5C:
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// stw r11,31132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31132, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACCA68"))) PPC_WEAK_FUNC(sub_83ACCA68);
PPC_FUNC_IMPL(__imp__sub_83ACCA68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83ACCA70;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83acc330
	ctx.lr = 0x83ACCA84;
	sub_83ACC330(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83acca94
	if (!cr0.lt) goto loc_83ACCA94;
loc_83ACCA8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83accc58
	goto loc_83ACCC58;
loc_83ACCA94:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,31084
	ctx.r31.s64 = ctx.r11.s64 + 31084;
	// lwz r11,31084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31084);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83accabc
	if (cr6.eq) goto loc_83ACCABC;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-21508
	ctx.r4.s64 = ctx.r11.s64 + -21508;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACCAB8;
	sub_831EA3F0(ctx, base);
	// b 0x83acca8c
	goto loc_83ACCA8C;
loc_83ACCABC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x83a7e080
	ctx.lr = 0x83ACCAC8;
	sub_83A7E080(ctx, base);
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831ea7a0
	ctx.lr = 0x83ACCAD4;
	sub_831EA7A0(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// ble cr6,0x83accc54
	if (!cr6.gt) goto loc_83ACCC54;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bne cr6,0x83accb2c
	if (!cr6.eq) goto loc_83ACCB2C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_83ACCB2C:
	// rotlwi r10,r28,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// divw r27,r28,r11
	ctx.r27.s32 = PPCDivide(ctx.r28.s32, ctx.r11.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// twllei r11,0
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// twlgei r10,-1
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83accba8
	if (!cr6.gt) goto loc_83ACCBA8;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
loc_83ACCB54:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83add8d0
	ctx.lr = 0x83ACCB64;
	sub_83ADD8D0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83accb88
	if (cr0.eq) goto loc_83ACCB88;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, xer);
	// blt cr6,0x83accb54
	if (cr6.lt) goto loc_83ACCB54;
loc_83ACCB88:
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, xer);
	// bge cr6,0x83accba8
	if (!cr6.lt) goto loc_83ACCBA8;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-21548
	ctx.r4.s64 = ctx.r11.s64 + -21548;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACCBA0;
	sub_831EA3F0(ctx, base);
	// bl 0x83acc450
	ctx.lr = 0x83ACCBA4;
	sub_83ACC450(ctx, base);
	// b 0x83acca8c
	goto loc_83ACCA8C;
loc_83ACCBA8:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x83accbc4
	if (cr6.gt) goto loc_83ACCBC4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_83ACCBC4:
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r9,r8,3
	ctx.r9.s64 = ctx.r8.s64 * 3;
	// divw r10,r9,r7
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r7.s32);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r10,r10,1023
	ctx.r10.s64 = ctx.r10.s64 + 1023;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// srawi r10,r10,10
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 10;
	// andc r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ~ctx.r9.u64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// twllei r7,0
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// twlgei r9,-1
	// srawi r10,r10,10
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 10;
	// addze. r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt 0x83accc0c
	if (cr0.gt) goto loc_83ACCC0C;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x83accc18
	goto loc_83ACCC18;
loc_83ACCC0C:
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// ble cr6,0x83accc18
	if (!cr6.gt) goto loc_83ACCC18;
	// li r10,4
	ctx.r10.s64 = 4;
loc_83ACCC18:
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// ble cr6,0x83accc54
	if (!cr6.gt) goto loc_83ACCC54;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_83ACCC3C:
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x83add070
	ctx.lr = 0x83ACCC44;
	sub_83ADD070(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x83accc3c
	if (cr6.lt) goto loc_83ACCC3C;
loc_83ACCC54:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83ACCC58:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACCC60"))) PPC_WEAK_FUNC(sub_83ACCC60);
PPC_FUNC_IMPL(__imp__sub_83ACCC60) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83accca8
	if (cr6.lt) goto loc_83ACCCA8;
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r10,31088
	ctx.r10.s64 = ctx.r10.s64 + 31088;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x83add468
	ctx.lr = 0x83ACCC9C;
	sub_83ADD468(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83ACCCA8:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x83102db0
	ctx.lr = 0x83ACCCB0;
	sub_83102DB0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83acccc8
	if (cr6.eq) goto loc_83ACCCC8;
	// bl 0x83a7e0f8
	ctx.lr = 0x83ACCCC0;
	sub_83A7E0F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83ACCCC8:
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

__attribute__((alias("__imp__sub_83ACCCDC"))) PPC_WEAK_FUNC(sub_83ACCCDC);
PPC_FUNC_IMPL(__imp__sub_83ACCCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACCCE0"))) PPC_WEAK_FUNC(sub_83ACCCE0);
PPC_FUNC_IMPL(__imp__sub_83ACCCE0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// std r11,112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 112, ctx.r11.u64);
	// std r11,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.r11.u64);
	// stb r11,98(r3)
	PPC_STORE_U8(ctx.r3.u32 + 98, ctx.r11.u8);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// b 0x83accd20
	goto loc_83ACCD20;
loc_83ACCD10:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83a7a0d8
	ctx.lr = 0x83ACCD20;
	sub_83A7A0D8(ctx, base);
loc_83ACCD20:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x83a7a038
	ctx.lr = 0x83ACCD2C;
	sub_83A7A038(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83accd10
	if (!cr0.eq) goto loc_83ACCD10;
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

__attribute__((alias("__imp__sub_83ACCD48"))) PPC_WEAK_FUNC(sub_83ACCD48);
PPC_FUNC_IMPL(__imp__sub_83ACCD48) {
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
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,-21456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// bl 0x83acc928
	ctx.lr = 0x83ACCD70;
	sub_83ACC928(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,99(r31)
	PPC_STORE_U8(ctx.r31.u32 + 99, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83ACCD8C"))) PPC_WEAK_FUNC(sub_83ACCD8C);
PPC_FUNC_IMPL(__imp__sub_83ACCD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACCD90"))) PPC_WEAK_FUNC(sub_83ACCD90);
PPC_FUNC_IMPL(__imp__sub_83ACCD90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83ACCD98;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x83accdcc
	if (!cr0.lt) goto loc_83ACCDCC;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-21452
	ctx.r4.s64 = ctx.r11.s64 + -21452;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACCDBC;
	sub_831EA3F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r11.u8);
	// b 0x83accff4
	goto loc_83ACCFF4;
loc_83ACCDCC:
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// ld r30,112(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,31088
	ctx.r10.s64 = ctx.r10.s64 + 31088;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x83add530
	ctx.lr = 0x83ACCDE4;
	sub_83ADD530(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// std r3,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r3.u64);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83accdfc
	if (cr6.eq) goto loc_83ACCDFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83accff4
	goto loc_83ACCFF4;
loc_83ACCDFC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83acce24
	if (!cr6.gt) goto loc_83ACCE24;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83acce24
	if (!cr6.eq) goto loc_83ACCE24;
	// ld r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
loc_83ACCE24:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a7e720
	ctx.lr = 0x83ACCE30;
	sub_83A7E720(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83accff0
	if (cr6.eq) goto loc_83ACCFF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x83a7a038
	ctx.lr = 0x83ACCE48;
	sub_83A7A038(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83acce70
	if (!cr0.eq) goto loc_83ACCE70;
	// lbz r11,98(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 98);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83accff0
	if (cr0.eq) goto loc_83ACCFF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,98(r31)
	PPC_STORE_U8(ctx.r31.u32 + 98, ctx.r11.u8);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// b 0x83accff0
	goto loc_83ACCFF0;
loc_83ACCE70:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r27,24(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x83a7a038
	ctx.lr = 0x83ACCE84;
	sub_83A7A038(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne 0x83acce98
	if (!cr0.eq) goto loc_83ACCE98;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x83accea0
	goto loc_83ACCEA0;
loc_83ACCE98:
	// lwz r26,24(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r25,20(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
loc_83ACCEA0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a7e598
	ctx.lr = 0x83ACCEAC;
	sub_83A7E598(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83accf20
	if (cr6.eq) goto loc_83ACCF20;
	// ld r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// cmpdi cr6,r5,0
	cr6.compare<int64_t>(ctx.r5.s64, 0, xer);
	// ble cr6,0x83acced0
	if (!cr6.gt) goto loc_83ACCED0;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a7e580
	ctx.lr = 0x83ACCED0;
	sub_83A7E580(ctx, base);
loc_83ACCED0:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r11,72
	cr6.compare<uint32_t>(ctx.r11.u32, 72, xer);
	// bne cr6,0x83accf20
	if (!cr6.eq) goto loc_83ACCF20;
	// lbz r11,1(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r11,67
	cr6.compare<uint32_t>(ctx.r11.u32, 67, xer);
	// bne cr6,0x83accf20
	if (!cr6.eq) goto loc_83ACCF20;
	// lbz r11,2(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(ctx.r11.u32, 65, xer);
	// bne cr6,0x83accf20
	if (!cr6.eq) goto loc_83ACCF20;
	// lbz r11,3(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 3);
	// clrlwi. r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83accf20
	if (!cr0.eq) goto loc_83ACCF20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acc588
	ctx.lr = 0x83ACCF18;
	sub_83ACC588(ctx, base);
	// lwz r27,24(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
loc_83ACCF20:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83a7fc98
	ctx.lr = 0x83ACCF3C;
	sub_83A7FC98(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, xer);
	// blt cr6,0x83accfa8
	if (cr6.lt) goto loc_83ACCFA8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a7a2f0
	ctx.lr = 0x83ACCF54;
	sub_83A7A2F0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83a7a0d8
	ctx.lr = 0x83ACCF64;
	sub_83A7A0D8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// subf r4,r29,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x83accfcc
	if (cr6.eq) goto loc_83ACCFCC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7a2f0
	ctx.lr = 0x83ACCF80;
	sub_83A7A2F0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// blt cr6,0x83accfa0
	if (cr6.lt) goto loc_83ACCFA0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lbz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x83a7a0d8
	ctx.lr = 0x83ACCF9C;
	sub_83A7A0D8(ctx, base);
	// b 0x83accfcc
	goto loc_83ACCFCC;
loc_83ACCFA0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x83accfc4
	goto loc_83ACCFC4;
loc_83ACCFA8:
	// bl 0x83a7a2f0
	ctx.lr = 0x83ACCFAC;
	sub_83A7A2F0(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83accfc0
	if (cr6.eq) goto loc_83ACCFC0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x83a7a090
	ctx.lr = 0x83ACCFC0;
	sub_83A7A090(ctx, base);
loc_83ACCFC0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83ACCFC4:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x83a7a090
	ctx.lr = 0x83ACCFCC;
	sub_83A7A090(ctx, base);
loc_83ACCFCC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a7e720
	ctx.lr = 0x83ACCFD8;
	sub_83A7E720(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83accff0
	if (!cr6.eq) goto loc_83ACCFF0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83ACCFF0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83ACCFF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACCFFC"))) PPC_WEAK_FUNC(sub_83ACCFFC);
PPC_FUNC_IMPL(__imp__sub_83ACCFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACD000"))) PPC_WEAK_FUNC(sub_83ACD000);
PPC_FUNC_IMPL(__imp__sub_83ACD000) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,31084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31084);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83acd03c
	if (!cr6.eq) goto loc_83ACD03C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-21384
	ctx.r4.s64 = ctx.r11.s64 + -21384;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACD038;
	sub_831EA3F0(ctx, base);
	// b 0x83acd0c0
	goto loc_83ACD0C0;
loc_83ACD03C:
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83ACD04C;
	sub_831EA7A0(ctx, base);
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r31,r11,0,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r11,r30,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 11) & 0xFFFFF800;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r11,1024
	ctx.r6.s64 = ctx.r11.s64 + 1024;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// stb r10,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r10.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7f9c0
	ctx.lr = 0x83ACD07C;
	sub_83A7F9C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83acd0a4
	if (!cr0.eq) goto loc_83ACD0A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83acd0a4
	if (cr6.eq) goto loc_83ACD0A4;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x83a7a000
	ctx.lr = 0x83ACD098;
	sub_83A7A000(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83acd0c4
	goto loc_83ACD0C4;
loc_83ACD0A4:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-21396
	ctx.r4.s64 = ctx.r11.s64 + -21396;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83ACD0B8;
	sub_831EA418(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83accc60
	ctx.lr = 0x83ACD0C0;
	sub_83ACCC60(ctx, base);
loc_83ACD0C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83ACD0C4:
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

__attribute__((alias("__imp__sub_83ACD0DC"))) PPC_WEAK_FUNC(sub_83ACD0DC);
PPC_FUNC_IMPL(__imp__sub_83ACD0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACD0E0"))) PPC_WEAK_FUNC(sub_83ACD0E0);
PPC_FUNC_IMPL(__imp__sub_83ACD0E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83ACD0E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83acd124
	if (!cr6.eq) goto loc_83ACD124;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-21164
	ctx.r4.s64 = ctx.r11.s64 + -21164;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83ACD114;
	sub_831EA418(ctx, base);
loc_83ACD114:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r11.u8);
	// b 0x83acd290
	goto loc_83ACD290;
loc_83ACD124:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83accce0
	ctx.lr = 0x83ACD12C;
	sub_83ACCCE0(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,31120
	ctx.r30.s64 = ctx.r11.s64 + 31120;
	// stb r10,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r10.u8);
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x83acd1d8
	if (cr6.eq) goto loc_83ACD1D8;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83acd178
	if (cr6.lt) goto loc_83ACD178;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,-32
	ctx.r10.s64 = ctx.r30.s64 + -32;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x83add468
	ctx.lr = 0x83ACD16C;
	sub_83ADD468(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83ACD178:
	// lwz r29,8(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x83acd1a0
	if (cr6.lt) goto loc_83ACD1A0;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-21928
	ctx.r4.s64 = ctx.r11.s64 + -21928;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83ACD19C;
	sub_831EA418(ctx, base);
	// b 0x83acd1d8
	goto loc_83ACD1D8;
loc_83ACD1A0:
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x83add3f8
	ctx.lr = 0x83ACD1B4;
	sub_83ADD3F8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83acd1d4
	if (!cr0.lt) goto loc_83ACD1D4;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-22016
	ctx.r4.s64 = ctx.r11.s64 + -22016;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACD1D0;
	sub_831EA3F0(ctx, base);
	// b 0x83acd1d8
	goto loc_83ACD1D8;
loc_83ACD1D4:
	// stb r29,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r29.u8);
loc_83ACD1D8:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x83acd1f8
	if (!cr0.lt) goto loc_83ACD1F8;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-21220
	ctx.r4.s64 = ctx.r11.s64 + -21220;
loc_83ACD1EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACD1F4;
	sub_831EA3F0(ctx, base);
	// b 0x83acd114
	goto loc_83ACD114;
loc_83ACD1F8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,-32
	ctx.r10.s64 = ctx.r30.s64 + -32;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x83102db0
	ctx.lr = 0x83ACD208;
	sub_83102DB0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// ble cr6,0x83acd220
	if (!cr6.gt) goto loc_83ACD220;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-21344
	ctx.r4.s64 = ctx.r11.s64 + -21344;
	// b 0x83acd1ec
	goto loc_83ACD1EC;
loc_83ACD220:
	// lbz r11,99(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 99);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83acd250
	if (cr0.eq) goto loc_83ACD250;
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// addi r10,r30,-32
	ctx.r10.s64 = ctx.r30.s64 + -32;
	// lfs f2,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lfs f1,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x83acd280
	goto loc_83ACD280;
loc_83ACD250:
	// lwa r11,8(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 8));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lbz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lfs f1,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r30,-32
	ctx.r8.s64 = ctx.r30.s64 + -32;
	// frsp f2,f0
	ctx.f2.f64 = double(float(ctx.f0.f64));
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
loc_83ACD280:
	// bl 0x83add498
	ctx.lr = 0x83ACD284;
	sub_83ADD498(ctx, base);
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_83ACD290:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACD298"))) PPC_WEAK_FUNC(sub_83ACD298);
PPC_FUNC_IMPL(__imp__sub_83ACD298) {
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
	// bl 0x83accce0
	ctx.lr = 0x83ACD2B0;
	sub_83ACCCE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83ACD2CC"))) PPC_WEAK_FUNC(sub_83ACD2CC);
PPC_FUNC_IMPL(__imp__sub_83ACD2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACD2D0"))) PPC_WEAK_FUNC(sub_83ACD2D0);
PPC_FUNC_IMPL(__imp__sub_83ACD2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ACD2D8;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83acd3d0
	if (cr6.eq) goto loc_83ACD3D0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83acd3d0
	if (!cr6.gt) goto loc_83ACD3D0;
	// cmpwi cr6,r4,44
	cr6.compare<int32_t>(ctx.r4.s32, 44, xer);
	// blt cr6,0x83acd3e4
	if (cr6.lt) goto loc_83ACD3E4;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// bne cr6,0x83acd324
	if (!cr6.eq) goto loc_83ACD324;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83acd324
	if (!cr0.eq) goto loc_83ACD324;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83b667c0
	ctx.lr = 0x83ACD320;
	sub_83B667C0(ctx, base);
	// b 0x83acd39c
	goto loc_83ACD39C;
loc_83ACD324:
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r10,72
	cr6.compare<uint32_t>(ctx.r10.u32, 72, xer);
	// bne cr6,0x83acd368
	if (!cr6.eq) goto loc_83ACD368;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// cmplwi cr6,r10,67
	cr6.compare<uint32_t>(ctx.r10.u32, 67, xer);
	// bne cr6,0x83acd368
	if (!cr6.eq) goto loc_83ACD368;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// cmplwi cr6,r10,65
	cr6.compare<uint32_t>(ctx.r10.u32, 65, xer);
	// bne cr6,0x83acd368
	if (!cr6.eq) goto loc_83ACD368;
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83acd368
	if (!cr0.eq) goto loc_83ACD368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a7c178
	ctx.lr = 0x83ACD364;
	sub_83A7C178(ctx, base);
	// b 0x83acd39c
	goto loc_83ACD39C;
loc_83ACD368:
	// cmplwi cr6,r11,82
	cr6.compare<uint32_t>(ctx.r11.u32, 82, xer);
	// bne cr6,0x83acd3e4
	if (!cr6.eq) goto loc_83ACD3E4;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,73
	cr6.compare<uint32_t>(ctx.r11.u32, 73, xer);
	// bne cr6,0x83acd3e4
	if (!cr6.eq) goto loc_83ACD3E4;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// bne cr6,0x83acd3e4
	if (!cr6.eq) goto loc_83ACD3E4;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// bne cr6,0x83acd3e4
	if (!cr6.eq) goto loc_83ACD3E4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83b68e28
	ctx.lr = 0x83ACD39C;
	sub_83B68E28(ctx, base);
loc_83ACD39C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ACD3C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83acd3e8
	goto loc_83ACD3E8;
loc_83ACD3D0:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-21084
	ctx.r4.s64 = ctx.r11.s64 + -21084;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83ACD3E4;
	sub_831EA418(ctx, base);
loc_83ACD3E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83ACD3E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACD3F0"))) PPC_WEAK_FUNC(sub_83ACD3F0);
PPC_FUNC_IMPL(__imp__sub_83ACD3F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ACD3F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83acd414
	if (!cr6.eq) goto loc_83ACD414;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_83ACD414:
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea798
	ctx.lr = 0x83ACD424;
	sub_831EA798(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83acd2d0
	ctx.lr = 0x83ACD434;
	sub_83ACD2D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83acd47c
	if (cr0.eq) goto loc_83ACD47C;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwa r7,140(r1)
	ctx.r7.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 140));
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// std r8,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r8.u64);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// std r7,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r7.u64);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
loc_83ACD47C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACD484"))) PPC_WEAK_FUNC(sub_83ACD484);
PPC_FUNC_IMPL(__imp__sub_83ACD484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACD488"))) PPC_WEAK_FUNC(sub_83ACD488);
PPC_FUNC_IMPL(__imp__sub_83ACD488) {
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
	// bl 0x83102db0
	ctx.lr = 0x83ACD498;
	sub_83102DB0(ctx, base);
	// lis r8,-31739
	ctx.r8.s64 = -2080047104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,31144
	ctx.r7.s64 = ctx.r8.s64 + 31144;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,31144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31144, ctx.r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACD4C8"))) PPC_WEAK_FUNC(sub_83ACD4C8);
PPC_FUNC_IMPL(__imp__sub_83ACD4C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83acaee0
	sub_83ACAEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACD4CC"))) PPC_WEAK_FUNC(sub_83ACD4CC);
PPC_FUNC_IMPL(__imp__sub_83ACD4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACD4D0"))) PPC_WEAK_FUNC(sub_83ACD4D0);
PPC_FUNC_IMPL(__imp__sub_83ACD4D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83acaf78
	sub_83ACAF78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACD4D4"))) PPC_WEAK_FUNC(sub_83ACD4D4);
PPC_FUNC_IMPL(__imp__sub_83ACD4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACD4D8"))) PPC_WEAK_FUNC(sub_83ACD4D8);
PPC_FUNC_IMPL(__imp__sub_83ACD4D8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83ACD500;
	sub_831EA7A0(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,31144
	ctx.r11.s64 = ctx.r11.s64 + 31144;
	// stb r10,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r10.u8);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stb r10,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r10.u8);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83acd540
	if (!cr6.eq) goto loc_83ACD540;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// b 0x83acd54c
	goto loc_83ACD54C;
loc_83ACD540:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
loc_83ACD54C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83ACD578"))) PPC_WEAK_FUNC(sub_83ACD578);
PPC_FUNC_IMPL(__imp__sub_83ACD578) {
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
	// b 0x83acd5a0
	goto loc_83ACD5A0;
loc_83ACD598:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83ad2f18
	ctx.lr = 0x83ACD5A0;
	sub_83AD2F18(ctx, base);
loc_83ACD5A0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83acd5d8
	if (cr6.eq) goto loc_83ACD5D8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bne cr6,0x83acd5c0
	if (!cr6.eq) goto loc_83ACD5C0;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_83ACD5C0:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bne cr6,0x83acd598
	if (!cr6.eq) goto loc_83ACD598;
loc_83ACD5D8:
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

__attribute__((alias("__imp__sub_83ACD5F0"))) PPC_WEAK_FUNC(sub_83ACD5F0);
PPC_FUNC_IMPL(__imp__sub_83ACD5F0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83ad2e38
	ctx.lr = 0x83ACD608;
	sub_83AD2E38(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83acd644
	if (cr0.eq) goto loc_83ACD644;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83acd624
	if (!cr6.eq) goto loc_83ACD624;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// b 0x83acd634
	goto loc_83ACD634;
loc_83ACD624:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_83ACD634:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_83ACD644:
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

__attribute__((alias("__imp__sub_83ACD658"))) PPC_WEAK_FUNC(sub_83ACD658);
PPC_FUNC_IMPL(__imp__sub_83ACD658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ACD660;
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
	// bl 0x83acd5f0
	ctx.lr = 0x83ACD674;
	sub_83ACD5F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83acd684
	if (!cr0.eq) goto loc_83ACD684;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83acd6a8
	goto loc_83ACD6A8;
loc_83ACD684:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_83ACD6A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACD6B0"))) PPC_WEAK_FUNC(sub_83ACD6B0);
PPC_FUNC_IMPL(__imp__sub_83ACD6B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ACD6B8;
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
	// bl 0x83acd5f0
	ctx.lr = 0x83ACD6CC;
	sub_83ACD5F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83acd6dc
	if (!cr0.eq) goto loc_83ACD6DC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83acd700
	goto loc_83ACD700;
loc_83ACD6DC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_83ACD700:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACD708"))) PPC_WEAK_FUNC(sub_83ACD708);
PPC_FUNC_IMPL(__imp__sub_83ACD708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83ACD710;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83acd5f0
	ctx.lr = 0x83ACD724;
	sub_83ACD5F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83acd734
	if (!cr0.eq) goto loc_83ACD734;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83acd770
	goto loc_83ACD770;
loc_83ACD734:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x83abbe40
	ctx.lr = 0x83ACD74C;
	sub_83ABBE40(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83acd760
	if (!cr6.eq) goto loc_83ACD760;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// b 0x83acd764
	goto loc_83ACD764;
loc_83ACD760:
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
loc_83ACD764:
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_83ACD770:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACD778"))) PPC_WEAK_FUNC(sub_83ACD778);
PPC_FUNC_IMPL(__imp__sub_83ACD778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83ACD780;
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
	// bl 0x83acd5f0
	ctx.lr = 0x83ACD79C;
	sub_83ACD5F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83acd7ac
	if (!cr0.eq) goto loc_83ACD7AC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83acd7d8
	goto loc_83ACD7D8;
loc_83ACD7AC:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// stw r27,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r27.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_83ACD7D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACD7E0"))) PPC_WEAK_FUNC(sub_83ACD7E0);
PPC_FUNC_IMPL(__imp__sub_83ACD7E0) {
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
	// bl 0x83acd5f0
	ctx.lr = 0x83ACD800;
	sub_83ACD5F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83acd810
	if (!cr0.eq) goto loc_83ACD810;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83acd830
	goto loc_83ACD830;
loc_83ACD810:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_83ACD830:
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

__attribute__((alias("__imp__sub_83ACD848"))) PPC_WEAK_FUNC(sub_83ACD848);
PPC_FUNC_IMPL(__imp__sub_83ACD848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ACD850;
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
	// bl 0x83acd5f0
	ctx.lr = 0x83ACD864;
	sub_83ACD5F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83acd874
	if (!cr0.eq) goto loc_83ACD874;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83acd898
	goto loc_83ACD898;
loc_83ACD874:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_83ACD898:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACD8A0"))) PPC_WEAK_FUNC(sub_83ACD8A0);
PPC_FUNC_IMPL(__imp__sub_83ACD8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83acd8d4
	if (cr6.lt) goto loc_83ACD8D4;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bge cr6,0x83acd8d4
	if (!cr6.lt) goto loc_83ACD8D4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83acd8cc
	if (!cr6.gt) goto loc_83ACD8CC;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
loc_83ACD8C4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bdnz 0x83acd8c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACD8C4;
loc_83ACD8CC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83acd8d8
	goto loc_83ACD8D8;
loc_83ACD8D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83ACD8D8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r5,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACD8E8"))) PPC_WEAK_FUNC(sub_83ACD8E8);
PPC_FUNC_IMPL(__imp__sub_83ACD8E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83acd91c
	if (cr6.lt) goto loc_83ACD91C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bge cr6,0x83acd91c
	if (!cr6.lt) goto loc_83ACD91C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83acd914
	if (!cr6.gt) goto loc_83ACD914;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
loc_83ACD90C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bdnz 0x83acd90c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACD90C;
loc_83ACD914:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83acd920
	goto loc_83ACD920;
loc_83ACD91C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83ACD920:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r10,r5,24,2,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 24) & 0x3F000000) | (ctx.r10.u64 & 0xFFFFFFFFC0FFFFFF);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACD938"))) PPC_WEAK_FUNC(sub_83ACD938);
PPC_FUNC_IMPL(__imp__sub_83ACD938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83acd96c
	if (cr6.lt) goto loc_83ACD96C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bge cr6,0x83acd96c
	if (!cr6.lt) goto loc_83ACD96C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83acd964
	if (!cr6.gt) goto loc_83ACD964;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
loc_83ACD95C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bdnz 0x83acd95c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACD95C;
loc_83ACD964:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83acd970
	goto loc_83ACD970;
loc_83ACD96C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83ACD970:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r10,r5,0,12,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFF00000);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACD988"))) PPC_WEAK_FUNC(sub_83ACD988);
PPC_FUNC_IMPL(__imp__sub_83ACD988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83acd9bc
	if (cr6.lt) goto loc_83ACD9BC;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bge cr6,0x83acd9bc
	if (!cr6.lt) goto loc_83ACD9BC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83acd9b4
	if (!cr6.gt) goto loc_83ACD9B4;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
loc_83ACD9AC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bdnz 0x83acd9ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACD9AC;
loc_83ACD9B4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83acd9c0
	goto loc_83ACD9C0;
loc_83ACD9BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83ACD9C0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stfs f1,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACD9D0"))) PPC_WEAK_FUNC(sub_83ACD9D0);
PPC_FUNC_IMPL(__imp__sub_83ACD9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83acda04
	if (cr6.lt) goto loc_83ACDA04;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bge cr6,0x83acda04
	if (!cr6.lt) goto loc_83ACDA04;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83acd9fc
	if (!cr6.gt) goto loc_83ACD9FC;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
loc_83ACD9F4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bdnz 0x83acd9f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACD9F4;
loc_83ACD9FC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83acda08
	goto loc_83ACDA08;
loc_83ACDA04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83ACDA08:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r10,r5,20,8,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 20) & 0xF00000) | (ctx.r10.u64 & 0xFFFFFFFFFF0FFFFF);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACDA20"))) PPC_WEAK_FUNC(sub_83ACDA20);
PPC_FUNC_IMPL(__imp__sub_83ACDA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83acda54
	if (cr6.lt) goto loc_83ACDA54;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bge cr6,0x83acda54
	if (!cr6.lt) goto loc_83ACDA54;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83acda4c
	if (!cr6.gt) goto loc_83ACDA4C;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
loc_83ACDA44:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bdnz 0x83acda44
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACDA44;
loc_83ACDA4C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83acda58
	goto loc_83ACDA58;
loc_83ACDA54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83ACDA58:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACDA68"))) PPC_WEAK_FUNC(sub_83ACDA68);
PPC_FUNC_IMPL(__imp__sub_83ACDA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83acda9c
	if (cr6.lt) goto loc_83ACDA9C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bge cr6,0x83acda9c
	if (!cr6.lt) goto loc_83ACDA9C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83acda94
	if (!cr6.gt) goto loc_83ACDA94;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
loc_83ACDA8C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bdnz 0x83acda8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACDA8C;
loc_83ACDA94:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83acdaa0
	goto loc_83ACDAA0;
loc_83ACDA9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83ACDAA0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stb r5,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACDAB0"))) PPC_WEAK_FUNC(sub_83ACDAB0);
PPC_FUNC_IMPL(__imp__sub_83ACDAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83acdae4
	if (cr6.lt) goto loc_83ACDAE4;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bge cr6,0x83acdae4
	if (!cr6.lt) goto loc_83ACDAE4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83acdadc
	if (!cr6.gt) goto loc_83ACDADC;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
loc_83ACDAD4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bdnz 0x83acdad4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACDAD4;
loc_83ACDADC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83acdae8
	goto loc_83ACDAE8;
loc_83ACDAE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83ACDAE8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stb r5,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACDAF8"))) PPC_WEAK_FUNC(sub_83ACDAF8);
PPC_FUNC_IMPL(__imp__sub_83ACDAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83acdb2c
	if (cr6.lt) goto loc_83ACDB2C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bge cr6,0x83acdb2c
	if (!cr6.lt) goto loc_83ACDB2C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83acdb24
	if (!cr6.gt) goto loc_83ACDB24;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
loc_83ACDB1C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bdnz 0x83acdb1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACDB1C;
loc_83ACDB24:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83acdb30
	goto loc_83ACDB30;
loc_83ACDB2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83ACDB30:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r5,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACDB40"))) PPC_WEAK_FUNC(sub_83ACDB40);
PPC_FUNC_IMPL(__imp__sub_83ACDB40) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,54(r3)
	PPC_STORE_U8(ctx.r3.u32 + 54, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACDB4C"))) PPC_WEAK_FUNC(sub_83ACDB4C);
PPC_FUNC_IMPL(__imp__sub_83ACDB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACDB50"))) PPC_WEAK_FUNC(sub_83ACDB50);
PPC_FUNC_IMPL(__imp__sub_83ACDB50) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83ad2680
	ctx.lr = 0x83ACDB64;
	sub_83AD2680(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83acdb74
	if (!cr0.eq) goto loc_83ACDB74;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83acdb78
	goto loc_83ACDB78;
loc_83ACDB74:
	// bl 0x83ad2d18
	ctx.lr = 0x83ACDB78;
	sub_83AD2D18(ctx, base);
loc_83ACDB78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACDB88"))) PPC_WEAK_FUNC(sub_83ACDB88);
PPC_FUNC_IMPL(__imp__sub_83ACDB88) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83ad2680
	ctx.lr = 0x83ACDB9C;
	sub_83AD2680(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83acdba8
	if (cr0.eq) goto loc_83ACDBA8;
	// bl 0x83ad2810
	ctx.lr = 0x83ACDBA8;
	sub_83AD2810(ctx, base);
loc_83ACDBA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACDBB8"))) PPC_WEAK_FUNC(sub_83ACDBB8);
PPC_FUNC_IMPL(__imp__sub_83ACDBB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83ACDBC0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r20,1
	ctx.r20.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stb r20,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r20.u8);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83acdbf0
	if (cr6.gt) goto loc_83ACDBF0;
loc_83ACDBE8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83acdd1c
	goto loc_83ACDD1C;
loc_83ACDBF0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83ad2460
	ctx.lr = 0x83ACDBF8;
	sub_83AD2460(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83acdbe8
	if (cr0.eq) goto loc_83ACDBE8;
	// lwz r27,8(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83acdc7c
	if (cr6.eq) goto loc_83ACDC7C;
	// addi r24,r31,32
	ctx.r24.s64 = ctx.r31.s64 + 32;
loc_83ACDC18:
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83aa3768
	ctx.lr = 0x83ACDC30;
	sub_83AA3768(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83acdc64
	if (cr0.eq) goto loc_83ACDC64;
	// sth r26,10(r30)
	PPC_STORE_U16(ctx.r30.u32 + 10, ctx.r26.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r11,33(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 33);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r11.u8);
	// lfs f0,36(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x83ad26d8
	ctx.lr = 0x83ACDC58;
	sub_83AD26D8(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x83acdc64
	if (!cr6.eq) goto loc_83ACDC64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_83ACDC64:
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
	// lwz r27,4(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// extsh r26,r11
	ctx.r26.s64 = ctx.r11.s16;
	// bne cr6,0x83acdc18
	if (!cr6.eq) goto loc_83ACDC18;
loc_83ACDC7C:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt 0x83acdc98
	if (cr0.gt) goto loc_83ACDC98;
	// li r4,33
	ctx.r4.s64 = 33;
	// bl 0x83ad2588
	ctx.lr = 0x83ACDC94;
	sub_83AD2588(ctx, base);
	// b 0x83acdbe8
	goto loc_83ACDBE8;
loc_83ACDC98:
	// lbz r4,55(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 55);
	// bl 0x83123818
	ctx.lr = 0x83ACDCA0;
	sub_83123818(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ad2798
	ctx.lr = 0x83ACDCB0;
	sub_83AD2798(ctx, base);
	// stb r20,24(r29)
	PPC_STORE_U8(ctx.r29.u32 + 24, ctx.r20.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83acdcc8
	if (!cr6.eq) goto loc_83ACDCC8;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// b 0x83acdcd8
	goto loc_83ACDCD8;
loc_83ACDCC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
loc_83ACDCD8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x83ad2648
	ctx.lr = 0x83ACDCF0;
	sub_83AD2648(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x83acaeb0
	ctx.lr = 0x83ACDD04;
	sub_83ACAEB0(ctx, base);
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x83acaec8
	ctx.lr = 0x83ACDD14;
	sub_83ACAEC8(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83ACDD1C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACDD24"))) PPC_WEAK_FUNC(sub_83ACDD24);
PPC_FUNC_IMPL(__imp__sub_83ACDD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACDD28"))) PPC_WEAK_FUNC(sub_83ACDD28);
PPC_FUNC_IMPL(__imp__sub_83ACDD28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ACDD30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// b 0x83acdd54
	goto loc_83ACDD54;
loc_83ACDD44:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83ad2710
	ctx.lr = 0x83ACDD50;
	sub_83AD2710(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83ACDD54:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83acdd44
	if (!cr6.eq) goto loc_83ACDD44;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,52(r30)
	PPC_STORE_U8(ctx.r30.u32 + 52, ctx.r11.u8);
	// stb r11,54(r30)
	PPC_STORE_U8(ctx.r30.u32 + 54, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACDD70"))) PPC_WEAK_FUNC(sub_83ACDD70);
PPC_FUNC_IMPL(__imp__sub_83ACDD70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83ACDD78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83ACDD8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83acddd4
	if (cr6.eq) goto loc_83ACDDD4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83acddac
	if (!cr6.eq) goto loc_83ACDDAC;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_83ACDDAC:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// beq cr6,0x83acddd4
	if (cr6.eq) goto loc_83ACDDD4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83ad2588
	ctx.lr = 0x83ACDDD0;
	sub_83AD2588(ctx, base);
	// b 0x83acdd8c
	goto loc_83ACDD8C;
loc_83ACDDD4:
	// stb r30,52(r29)
	PPC_STORE_U8(ctx.r29.u32 + 52, ctx.r30.u8);
	// stb r30,54(r29)
	PPC_STORE_U8(ctx.r29.u32 + 54, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACDDE4"))) PPC_WEAK_FUNC(sub_83ACDDE4);
PPC_FUNC_IMPL(__imp__sub_83ACDDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACDDE8"))) PPC_WEAK_FUNC(sub_83ACDDE8);
PPC_FUNC_IMPL(__imp__sub_83ACDDE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83ACDDF0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r23,31144(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31144);
	// cmplwi r23,0
	cr0.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq 0x83acdeec
	if (cr0.eq) goto loc_83ACDEEC;
	// bl 0x83aa4f98
	ctx.lr = 0x83ACDE08;
	sub_83AA4F98(ctx, base);
	// li r31,1000
	ctx.r31.s64 = 1000;
	// divdu r25,r3,r31
	ctx.r25.u64 = PPCDivide(ctx.r3.u64, ctx.r31.u64);
	// bl 0x83aa4fa8
	ctx.lr = 0x83ACDE14;
	sub_83AA4FA8(ctx, base);
	// divdu r24,r3,r31
	ctx.r24.u64 = PPCDivide(ctx.r3.u64, ctx.r31.u64);
	// li r27,0
	ctx.r27.s64 = 0;
loc_83ACDE1C:
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r30,r28,20
	ctx.r30.s64 = ctx.r28.s64 + 20;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83acdee0
	if (!cr6.gt) goto loc_83ACDEE0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_83ACDE34:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83acde64
	if (cr6.eq) goto loc_83ACDE64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x83acde54
	if (!cr6.eq) goto loc_83ACDE54;
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_83ACDE54:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_83ACDE64:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ad2d10
	ctx.lr = 0x83ACDE7C;
	sub_83AD2D10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83acde90
	if (cr6.eq) goto loc_83ACDE90;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,54(r28)
	PPC_STORE_U8(ctx.r28.u32 + 54, ctx.r11.u8);
loc_83ACDE90:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x83acdea8
	if (cr6.lt) goto loc_83ACDEA8;
	// addi r4,r3,15
	ctx.r4.s64 = ctx.r3.s64 + 15;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ad2588
	ctx.lr = 0x83ACDEA4;
	sub_83AD2588(ctx, base);
	// b 0x83acded8
	goto loc_83ACDED8;
loc_83ACDEA8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83acdebc
	if (!cr6.eq) goto loc_83ACDEBC;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// b 0x83acdec8
	goto loc_83ACDEC8;
loc_83ACDEBC:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_83ACDEC8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_83ACDED8:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne 0x83acde34
	if (!cr0.eq) goto loc_83ACDE34;
loc_83ACDEE0:
	// lwz r23,4(r23)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// bne cr6,0x83acde1c
	if (!cr6.eq) goto loc_83ACDE1C;
loc_83ACDEEC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACDEF4"))) PPC_WEAK_FUNC(sub_83ACDEF4);
PPC_FUNC_IMPL(__imp__sub_83ACDEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACDEF8"))) PPC_WEAK_FUNC(sub_83ACDEF8);
PPC_FUNC_IMPL(__imp__sub_83ACDEF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,54(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 54);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83acdf0c
	if (cr0.eq) goto loc_83ACDF0C;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83ACDF0C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83acdf30
	if (!cr6.eq) goto loc_83ACDF30;
	// lbz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// li r10,3
	ctx.r10.s64 = 3;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// blr 
	return;
loc_83ACDF30:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x83acdf58
	if (cr6.lt) goto loc_83ACDF58;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83acdf30
	if (!cr6.eq) goto loc_83ACDF30;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83ACDF58:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACDF60"))) PPC_WEAK_FUNC(sub_83ACDF60);
PPC_FUNC_IMPL(__imp__sub_83ACDF60) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83ad2680
	ctx.lr = 0x83ACDF7C;
	sub_83AD2680(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83acdf8c
	if (cr0.eq) goto loc_83ACDF8C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83ad2710
	ctx.lr = 0x83ACDF8C;
	sub_83AD2710(ctx, base);
loc_83ACDF8C:
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

__attribute__((alias("__imp__sub_83ACDFA0"))) PPC_WEAK_FUNC(sub_83ACDFA0);
PPC_FUNC_IMPL(__imp__sub_83ACDFA0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83ad2680
	ctx.lr = 0x83ACDFC4;
	sub_83AD2680(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ace050
	if (cr0.eq) goto loc_83ACE050;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x83acdff4
	if (!cr6.eq) goto loc_83ACDFF4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x83ace038
	if (!cr6.eq) goto loc_83ACE038;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// b 0x83ace038
	goto loc_83ACE038;
loc_83ACDFF4:
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83ace038
	if (cr0.eq) goto loc_83ACE038;
loc_83ACDFFC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// beq cr6,0x83ace014
	if (cr6.eq) goto loc_83ACE014;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83acdffc
	if (!cr0.eq) goto loc_83ACDFFC;
loc_83ACE014:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ace038
	if (cr6.eq) goto loc_83ACE038;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x83ace038
	if (!cr6.eq) goto loc_83ACE038;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_83ACE038:
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x83ad2588
	ctx.lr = 0x83ACE050;
	sub_83AD2588(ctx, base);
loc_83ACE050:
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

__attribute__((alias("__imp__sub_83ACE068"))) PPC_WEAK_FUNC(sub_83ACE068);
PPC_FUNC_IMPL(__imp__sub_83ACE068) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x83ad2680
	ctx.lr = 0x83ACE08C;
	sub_83AD2680(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ace0a0
	if (cr0.eq) goto loc_83ACE0A0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83ad2798
	ctx.lr = 0x83ACE0A0;
	sub_83AD2798(ctx, base);
loc_83ACE0A0:
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

__attribute__((alias("__imp__sub_83ACE0B8"))) PPC_WEAK_FUNC(sub_83ACE0B8);
PPC_FUNC_IMPL(__imp__sub_83ACE0B8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83ad2680
	ctx.lr = 0x83ACE0D4;
	sub_83AD2680(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83ace0f4
	if (!cr0.eq) goto loc_83ACE0F4;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// li r10,3
	ctx.r10.s64 = 3;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x83ace13c
	goto loc_83ACE13C;
loc_83ACE0F4:
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83ace138
	if (cr6.lt) goto loc_83ACE138;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x83ace130
	if (cr6.lt) goto loc_83ACE130;
	// beq cr6,0x83ace128
	if (cr6.eq) goto loc_83ACE128;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x83ace120
	if (cr6.lt) goto loc_83ACE120;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x83ace13c
	goto loc_83ACE13C;
loc_83ACE120:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83ace13c
	goto loc_83ACE13C;
loc_83ACE128:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83ace13c
	goto loc_83ACE13C;
loc_83ACE130:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83ace13c
	goto loc_83ACE13C;
loc_83ACE138:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83ACE13C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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

__attribute__((alias("__imp__sub_83ACE154"))) PPC_WEAK_FUNC(sub_83ACE154);
PPC_FUNC_IMPL(__imp__sub_83ACE154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACE158"))) PPC_WEAK_FUNC(sub_83ACE158);
PPC_FUNC_IMPL(__imp__sub_83ACE158) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83ad2680
	ctx.lr = 0x83ACE174;
	sub_83AD2680(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ace184
	if (cr0.eq) goto loc_83ACE184;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83ad27d8
	ctx.lr = 0x83ACE184;
	sub_83AD27D8(ctx, base);
loc_83ACE184:
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

__attribute__((alias("__imp__sub_83ACE198"))) PPC_WEAK_FUNC(sub_83ACE198);
PPC_FUNC_IMPL(__imp__sub_83ACE198) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x83ad2680
	ctx.lr = 0x83ACE1BC;
	sub_83AD2680(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ace1d0
	if (cr0.eq) goto loc_83ACE1D0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83ad2760
	ctx.lr = 0x83ACE1D0;
	sub_83AD2760(ctx, base);
loc_83ACE1D0:
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

__attribute__((alias("__imp__sub_83ACE1E8"))) PPC_WEAK_FUNC(sub_83ACE1E8);
PPC_FUNC_IMPL(__imp__sub_83ACE1E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,31144
	ctx.r11.s64 = ctx.r11.s64 + 31144;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x83ace22c
	if (!cr6.eq) goto loc_83ACE22C;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83ace270
	if (!cr6.eq) goto loc_83ACE270;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x83ace26c
	goto loc_83ACE26C;
loc_83ACE22C:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83ace270
	if (cr0.eq) goto loc_83ACE270;
loc_83ACE234:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ace24c
	if (cr6.eq) goto loc_83ACE24C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x83ace234
	if (!cr0.eq) goto loc_83ACE234;
loc_83ACE24C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83ace270
	if (cr6.eq) goto loc_83ACE270;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x83ace270
	if (!cr6.eq) goto loc_83ACE270;
loc_83ACE26C:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83ACE270:
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x83acdd70
	ctx.lr = 0x83ACE290;
	sub_83ACDD70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acd578
	ctx.lr = 0x83ACE298;
	sub_83ACD578(ctx, base);
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

__attribute__((alias("__imp__sub_83ACE2AC"))) PPC_WEAK_FUNC(sub_83ACE2AC);
PPC_FUNC_IMPL(__imp__sub_83ACE2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACE2B0"))) PPC_WEAK_FUNC(sub_83ACE2B0);
PPC_FUNC_IMPL(__imp__sub_83ACE2B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// li r5,1
	ctx.r5.s64 = 1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r6,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83acdbb8
	sub_83ACDBB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACE2C4"))) PPC_WEAK_FUNC(sub_83ACE2C4);
PPC_FUNC_IMPL(__imp__sub_83ACE2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACE2C8"))) PPC_WEAK_FUNC(sub_83ACE2C8);
PPC_FUNC_IMPL(__imp__sub_83ACE2C8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x83acdbb8
	sub_83ACDBB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACE2D4"))) PPC_WEAK_FUNC(sub_83ACE2D4);
PPC_FUNC_IMPL(__imp__sub_83ACE2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACE2D8"))) PPC_WEAK_FUNC(sub_83ACE2D8);
PPC_FUNC_IMPL(__imp__sub_83ACE2D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83acdde8
	sub_83ACDDE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACE2DC"))) PPC_WEAK_FUNC(sub_83ACE2DC);
PPC_FUNC_IMPL(__imp__sub_83ACE2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACE2E0"))) PPC_WEAK_FUNC(sub_83ACE2E0);
PPC_FUNC_IMPL(__imp__sub_83ACE2E0) {
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
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// b 0x83ace300
	goto loc_83ACE300;
loc_83ACE2F8:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83ace1e8
	ctx.lr = 0x83ACE300;
	sub_83ACE1E8(ctx, base);
loc_83ACE300:
	// lwz r11,31144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31144);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83ace2f8
	if (!cr0.eq) goto loc_83ACE2F8;
	// bl 0x83102db0
	ctx.lr = 0x83ACE310;
	sub_83102DB0(ctx, base);
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

__attribute__((alias("__imp__sub_83ACE324"))) PPC_WEAK_FUNC(sub_83ACE324);
PPC_FUNC_IMPL(__imp__sub_83ACE324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACE328"))) PPC_WEAK_FUNC(sub_83ACE328);
PPC_FUNC_IMPL(__imp__sub_83ACE328) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83a844e8
	ctx.lr = 0x83ACE34C;
	sub_83A844E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83ace35c
	if (cr6.eq) goto loc_83ACE35C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83ace39c
	if (!cr6.eq) goto loc_83ACE39C;
loc_83ACE35C:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83ace39c
	if (!cr6.eq) goto loc_83ACE39C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq cr6,0x83ace39c
	if (cr6.eq) goto loc_83ACE39C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84b18
	ctx.lr = 0x83ACE390;
	sub_83A84B18(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a85518
	ctx.lr = 0x83ACE39C;
	sub_83A85518(ctx, base);
loc_83ACE39C:
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

__attribute__((alias("__imp__sub_83ACE3B4"))) PPC_WEAK_FUNC(sub_83ACE3B4);
PPC_FUNC_IMPL(__imp__sub_83ACE3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACE3B8"))) PPC_WEAK_FUNC(sub_83ACE3B8);
PPC_FUNC_IMPL(__imp__sub_83ACE3B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83ACE3C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83a844e8
	ctx.lr = 0x83ACE3D4;
	sub_83A844E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83ace3e4
	if (cr6.eq) goto loc_83ACE3E4;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83ace474
	if (!cr6.eq) goto loc_83ACE474;
loc_83ACE3E4:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83ace474
	if (!cr6.eq) goto loc_83ACE474;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x83a84700
	ctx.lr = 0x83ACE404;
	sub_83A84700(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a846b0
	ctx.lr = 0x83ACE410;
	sub_83A846B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r28,381(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 381);
	// bl 0x83a844a0
	ctx.lr = 0x83ACE420;
	sub_83A844A0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,376(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// bl 0x83a844e8
	ctx.lr = 0x83ACE430;
	sub_83A844E8(ctx, base);
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r11,-20928
	ctx.r5.s64 = ctx.r11.s64 + -20928;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// extsb r10,r28
	ctx.r10.s64 = ctx.r28.s8;
	// bl 0x831ea730
	ctx.lr = 0x83ACE460;
	sub_831EA730(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACE46C;
	sub_831EA3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84448
	ctx.lr = 0x83ACE474;
	sub_83A84448(ctx, base);
loc_83ACE474:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACE47C"))) PPC_WEAK_FUNC(sub_83ACE47C);
PPC_FUNC_IMPL(__imp__sub_83ACE47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACE480"))) PPC_WEAK_FUNC(sub_83ACE480);
PPC_FUNC_IMPL(__imp__sub_83ACE480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ACE488;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83a83878
	ctx.lr = 0x83ACE498;
	sub_83A83878(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83ace4a8
	if (!cr0.eq) goto loc_83ACE4A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ace4d4
	goto loc_83ACE4D4;
loc_83ACE4A8:
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ea7a0
	ctx.lr = 0x83ACE4B4;
	sub_831EA7A0(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-7384
	ctx.r5.s64 = ctx.r11.s64 + -7384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b66598
	ctx.lr = 0x83ACE4D0;
	sub_83B66598(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83ACE4D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACE4DC"))) PPC_WEAK_FUNC(sub_83ACE4DC);
PPC_FUNC_IMPL(__imp__sub_83ACE4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACE4E0"))) PPC_WEAK_FUNC(sub_83ACE4E0);
PPC_FUNC_IMPL(__imp__sub_83ACE4E0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83a83878
	ctx.lr = 0x83ACE4FC;
	sub_83A83878(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83ace530
	if (cr0.eq) goto loc_83ACE530;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ea7a0
	ctx.lr = 0x83ACE510;
	sub_831EA7A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lis r10,-31827
	ctx.r10.s64 = -2085814272;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,-7240
	ctx.r5.s64 = ctx.r10.s64 + -7240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b66598
	ctx.lr = 0x83ACE530;
	sub_83B66598(ctx, base);
loc_83ACE530:
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

__attribute__((alias("__imp__sub_83ACE548"))) PPC_WEAK_FUNC(sub_83ACE548);
PPC_FUNC_IMPL(__imp__sub_83ACE548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ACE550;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83ace5a4
	if (!cr6.eq) goto loc_83ACE5A4;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x83ace5a4
	if (!cr6.eq) goto loc_83ACE5A4;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x83a82d10
	ctx.lr = 0x83ACE574;
	sub_83A82D10(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// li r5,32
	ctx.r5.s64 = 32;
	// bne 0x83ace59c
	if (!cr0.eq) goto loc_83ACE59C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-20648
	ctx.r4.s64 = ctx.r11.s64 + -20648;
loc_83ACE58C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83ACE594;
	sub_831EA418(ctx, base);
loc_83ACE594:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ace634
	goto loc_83ACE634;
loc_83ACE59C:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x83ace5d8
	goto loc_83ACE5D8;
loc_83ACE5A4:
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bge cr6,0x83ace5bc
	if (!cr6.lt) goto loc_83ACE5BC;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-20660
	ctx.r4.s64 = ctx.r11.s64 + -20660;
	// b 0x83ace58c
	goto loc_83ACE58C;
loc_83ACE5BC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83ace5d4
	if (!cr6.eq) goto loc_83ACE5D4;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-20672
	ctx.r4.s64 = ctx.r11.s64 + -20672;
	// b 0x83ace58c
	goto loc_83ACE58C;
loc_83ACE5D4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83ACE5D8:
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// ble cr6,0x83ace618
	if (!cr6.gt) goto loc_83ACE618;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-20684
	ctx.r4.s64 = ctx.r11.s64 + -20684;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83ACE604;
	sub_831EA418(ctx, base);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83ace594
	if (!cr6.eq) goto loc_83ACE594;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a82d38
	ctx.lr = 0x83ACE614;
	sub_83A82D38(ctx, base);
	// b 0x83ace594
	goto loc_83ACE594;
loc_83ACE618:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r11,r11,-14180
	ctx.r11.s64 = ctx.r11.s64 + -14180;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_83ACE634:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACE63C"))) PPC_WEAK_FUNC(sub_83ACE63C);
PPC_FUNC_IMPL(__imp__sub_83ACE63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACE640"))) PPC_WEAK_FUNC(sub_83ACE640);
PPC_FUNC_IMPL(__imp__sub_83ACE640) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83b68748
	ctx.lr = 0x83ACE658;
	sub_83B68748(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// ble cr6,0x83ace67c
	if (!cr6.gt) goto loc_83ACE67C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-20636
	ctx.r4.s64 = ctx.r11.s64 + -20636;
	// bl 0x831ea400
	ctx.lr = 0x83ACE674;
	sub_831EA400(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ace680
	goto loc_83ACE680;
loc_83ACE67C:
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
loc_83ACE680:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACE690"))) PPC_WEAK_FUNC(sub_83ACE690);
PPC_FUNC_IMPL(__imp__sub_83ACE690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ACE698;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b687e8
	ctx.lr = 0x83ACE6BC;
	sub_83B687E8(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACE6DC"))) PPC_WEAK_FUNC(sub_83ACE6DC);
PPC_FUNC_IMPL(__imp__sub_83ACE6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACE6E0"))) PPC_WEAK_FUNC(sub_83ACE6E0);
PPC_FUNC_IMPL(__imp__sub_83ACE6E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r5,r4,16
	ctx.r5.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x83b687a8
	ctx.lr = 0x83ACE700;
	sub_83B687A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ace71c
	if (!cr0.eq) goto loc_83ACE71C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-20584
	ctx.r4.s64 = ctx.r11.s64 + -20584;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACE714;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83ace720
	goto loc_83ACE720;
loc_83ACE71C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83ACE720:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACE730"))) PPC_WEAK_FUNC(sub_83ACE730);
PPC_FUNC_IMPL(__imp__sub_83ACE730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83ACE738;
	__savegprlr_28(ctx, base);
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ace790
	if (cr6.eq) goto loc_83ACE790;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83ace790
	if (!cr6.gt) goto loc_83ACE790;
	// bl 0x83b68348
	ctx.lr = 0x83ACE760;
	sub_83B68348(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x83ace780
	if (!cr0.eq) goto loc_83ACE780;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83aba370
	ctx.lr = 0x83ACE77C;
	sub_83ABA370(ctx, base);
	// b 0x83ace7a8
	goto loc_83ACE7A8;
loc_83ACE780:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83ace548
	ctx.lr = 0x83ACE78C;
	sub_83ACE548(ctx, base);
	// b 0x83ace7a8
	goto loc_83ACE7A8;
loc_83ACE790:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-20536
	ctx.r4.s64 = ctx.r11.s64 + -20536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83ACE7A4;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83ACE7A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACE7B0"))) PPC_WEAK_FUNC(sub_83ACE7B0);
PPC_FUNC_IMPL(__imp__sub_83ACE7B0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831eee28
	ctx.lr = 0x83ACE7D4;
	sub_831EEE28(ctx, base);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x831f1918
	ctx.lr = 0x83ACE7E0;
	sub_831F1918(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mulli r4,r30,10
	ctx.r4.s64 = ctx.r30.s64 * 10;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831f1990
	ctx.lr = 0x83ACE7F8;
	sub_831F1990(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// addi r3,r3,820
	ctx.r3.s64 = ctx.r3.s64 + 820;
	// blt cr6,0x83ace808
	if (cr6.lt) goto loc_83ACE808;
	// addi r3,r31,820
	ctx.r3.s64 = ctx.r31.s64 + 820;
loc_83ACE808:
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

__attribute__((alias("__imp__sub_83ACE820"))) PPC_WEAK_FUNC(sub_83ACE820);
PPC_FUNC_IMPL(__imp__sub_83ACE820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 31156, ctx.r11.u32);
	// bl 0x83abbd40
	ctx.lr = 0x83ACE844;
	sub_83ABBD40(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83ace86c
	if (!cr0.eq) goto loc_83ACE86C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ace8ac
	goto loc_83ACE8AC;
loc_83ACE854:
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83ace880
	if (cr6.eq) goto loc_83ACE880;
	// bl 0x83a81a70
	ctx.lr = 0x83ACE860;
	sub_83A81A70(ctx, base);
	// bl 0x83a83250
	ctx.lr = 0x83ACE864;
	sub_83A83250(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x83a75e98
	ctx.lr = 0x83ACE86C;
	sub_83A75E98(ctx, base);
loc_83ACE86C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83abbdf0
	ctx.lr = 0x83ACE874;
	sub_83ABBDF0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83ace854
	if (!cr6.eq) goto loc_83ACE854;
	// b 0x83ace8a8
	goto loc_83ACE8A8;
loc_83ACE880:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ACE894;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,31156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 31156, ctx.r11.u32);
	// bl 0x83abbf58
	ctx.lr = 0x83ACE8A4;
	sub_83ABBF58(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_83ACE8A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83ACE8AC:
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

__attribute__((alias("__imp__sub_83ACE8C4"))) PPC_WEAK_FUNC(sub_83ACE8C4);
PPC_FUNC_IMPL(__imp__sub_83ACE8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACE8C8"))) PPC_WEAK_FUNC(sub_83ACE8C8);
PPC_FUNC_IMPL(__imp__sub_83ACE8C8) {
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
	// addi r11,r3,3
	ctx.r11.s64 = ctx.r3.s64 + 3;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// beq cr6,0x83ace91c
	if (cr6.eq) goto loc_83ACE91C;
	// li r3,2049
	ctx.r3.s64 = 2049;
	// bl 0x83a82d10
	ctx.lr = 0x83ACE8F8;
	sub_83A82D10(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,2048
	ctx.r10.s64 = 2048;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r3,2048
	ctx.r3.s64 = 2048;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x83a82d10
	ctx.lr = 0x83ACE914;
	sub_83A82D10(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// b 0x83ace964
	goto loc_83ACE964;
loc_83ACE91C:
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// addi r10,r4,-40
	ctx.r10.s64 = ctx.r4.s64 + -40;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x83ace7b0
	ctx.lr = 0x83ACE940;
	sub_83ACE7B0(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// bge cr6,0x83ace950
	if (!cr6.lt) goto loc_83ACE950;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ace968
	goto loc_83ACE968;
loc_83ACE950:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_83ACE964:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83ACE968:
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

__attribute__((alias("__imp__sub_83ACE980"))) PPC_WEAK_FUNC(sub_83ACE980);
PPC_FUNC_IMPL(__imp__sub_83ACE980) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x83ace9cc
	if (cr6.eq) goto loc_83ACE9CC;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ace9b8
	if (cr6.eq) goto loc_83ACE9B8;
	// bl 0x83a82d38
	ctx.lr = 0x83ACE9B4;
	sub_83A82D38(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_83ACE9B8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ace9cc
	if (cr6.eq) goto loc_83ACE9CC;
	// bl 0x83a82d38
	ctx.lr = 0x83ACE9C8;
	sub_83A82D38(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_83ACE9CC:
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

__attribute__((alias("__imp__sub_83ACE9E4"))) PPC_WEAK_FUNC(sub_83ACE9E4);
PPC_FUNC_IMPL(__imp__sub_83ACE9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACE9E8"))) PPC_WEAK_FUNC(sub_83ACE9E8);
PPC_FUNC_IMPL(__imp__sub_83ACE9E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ACE9F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f14b0
	ctx.lr = 0x83ACEA08;
	sub_831F14B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83acea1c
	if (cr0.eq) goto loc_83ACEA1C;
loc_83ACEA10:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x83acea58
	goto loc_83ACEA58;
loc_83ACEA1C:
	// li r9,2048
	ctx.r9.s64 = 2048;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,2048
	ctx.r7.s64 = 2048;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x831f1010
	ctx.lr = 0x83ACEA3C;
	sub_831F1010(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83acea10
	if (!cr0.eq) goto loc_83ACEA10;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-14140
	ctx.r11.s64 = ctx.r11.s64 + -14140;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
loc_83ACEA58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACEA60"))) PPC_WEAK_FUNC(sub_83ACEA60);
PPC_FUNC_IMPL(__imp__sub_83ACEA60) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83acea90
	if (cr6.eq) goto loc_83ACEA90;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x831ed860
	ctx.lr = 0x83ACEA90;
	sub_831ED860(ctx, base);
loc_83ACEA90:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aceaa0
	if (cr6.eq) goto loc_83ACEAA0;
	// bl 0x831f11e8
	ctx.lr = 0x83ACEAA0;
	sub_831F11E8(ctx, base);
loc_83ACEAA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x83ace980
	ctx.lr = 0x83ACEAAC;
	sub_83ACE980(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83aceac0
	if (!cr6.eq) goto loc_83ACEAC0;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x83a82d38
	ctx.lr = 0x83ACEAC0;
	sub_83A82D38(ctx, base);
loc_83ACEAC0:
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

__attribute__((alias("__imp__sub_83ACEAD8"))) PPC_WEAK_FUNC(sub_83ACEAD8);
PPC_FUNC_IMPL(__imp__sub_83ACEAD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ACEAE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83aba1e0
	ctx.lr = 0x83ACEAFC;
	sub_83ABA1E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83acebd0
	if (cr0.eq) goto loc_83ACEBD0;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83acebd0
	if (!cr6.gt) goto loc_83ACEBD0;
	// bl 0x83ace7b0
	ctx.lr = 0x83ACEB14;
	sub_83ACE7B0(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r11,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r11.u16);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aceba4
	if (cr6.eq) goto loc_83ACEBA4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83a82d38
	ctx.lr = 0x83ACEB34;
	sub_83A82D38(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83aceb44
	if (cr6.eq) goto loc_83ACEB44;
	// bl 0x83a82d38
	ctx.lr = 0x83ACEB44;
	sub_83A82D38(ctx, base);
loc_83ACEB44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a82d10
	ctx.lr = 0x83ACEB4C;
	sub_83A82D10(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_83ACEB58:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831ee278
	ctx.lr = 0x83ACEB7C;
	sub_831EE278(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83acec20
	if (!cr0.eq) goto loc_83ACEC20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831ecad8
	ctx.lr = 0x83ACEB90;
	sub_831ECAD8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83acebc0
	if (cr0.eq) goto loc_83ACEBC0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831ed860
	ctx.lr = 0x83ACEBA0;
	sub_831ED860(ctx, base);
	// b 0x83acec20
	goto loc_83ACEC20;
loc_83ACEBA4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bge cr6,0x83aceb58
	if (!cr6.lt) goto loc_83ACEB58;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// b 0x83acec20
	goto loc_83ACEC20;
loc_83ACEBC0:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x83acec24
	goto loc_83ACEC24;
loc_83ACEBD0:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-20452
	ctx.r4.s64 = ctx.r11.s64 + -20452;
	// bl 0x831ea400
	ctx.lr = 0x83ACEBE4;
	sub_831EA400(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83acec20
	if (cr6.eq) goto loc_83ACEC20;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83acec0c
	if (cr6.eq) goto loc_83ACEC0C;
	// bl 0x83a82d38
	ctx.lr = 0x83ACEC08;
	sub_83A82D38(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_83ACEC0C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83acec20
	if (cr6.eq) goto loc_83ACEC20;
	// bl 0x83a82d38
	ctx.lr = 0x83ACEC1C;
	sub_83A82D38(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_83ACEC20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83ACEC24:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACEC2C"))) PPC_WEAK_FUNC(sub_83ACEC2C);
PPC_FUNC_IMPL(__imp__sub_83ACEC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACEC30"))) PPC_WEAK_FUNC(sub_83ACEC30);
PPC_FUNC_IMPL(__imp__sub_83ACEC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ACEC5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83acec84
	if (!cr0.eq) goto loc_83ACEC84;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83acec7c
	if (cr6.eq) goto loc_83ACEC7C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_83ACEC7C:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83acec88
	goto loc_83ACEC88;
loc_83ACEC84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83ACEC88:
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

__attribute__((alias("__imp__sub_83ACECA0"))) PPC_WEAK_FUNC(sub_83ACECA0);
PPC_FUNC_IMPL(__imp__sub_83ACECA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83ACECA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83acecc8
	if (!cr6.eq) goto loc_83ACECC8;
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
loc_83ACECC8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// bne cr6,0x83acecdc
	if (!cr6.eq) goto loc_83ACECDC;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_83ACECDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x83aced08
	if (!cr6.eq) goto loc_83ACED08;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-20336
	ctx.r4.s64 = ctx.r11.s64 + -20336;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83ACED00;
	sub_831EA418(ctx, base);
loc_83ACED00:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aced7c
	goto loc_83ACED7C;
loc_83ACED08:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ACED18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aced34
	if (cr0.eq) goto loc_83ACED34;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-20368
	ctx.r4.s64 = ctx.r11.s64 + -20368;
loc_83ACED28:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACED30;
	sub_831EA3F0(ctx, base);
	// b 0x83aced00
	goto loc_83ACED00;
loc_83ACED34:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83ACED40;
	sub_83A7BDA0(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// bl 0x831eca40
	ctx.lr = 0x83ACED50;
	sub_831ECA40(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aced68
	if (!cr6.eq) goto loc_83ACED68;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-20412
	ctx.r4.s64 = ctx.r11.s64 + -20412;
	// b 0x83aced28
	goto loc_83ACED28;
loc_83ACED68:
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_83ACED7C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACED84"))) PPC_WEAK_FUNC(sub_83ACED84);
PPC_FUNC_IMPL(__imp__sub_83ACED84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACED88"))) PPC_WEAK_FUNC(sub_83ACED88);
PPC_FUNC_IMPL(__imp__sub_83ACED88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83acedc4
	if (!cr6.eq) goto loc_83ACEDC4;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-20152
	ctx.r4.s64 = ctx.r11.s64 + -20152;
	// bl 0x831ea418
	ctx.lr = 0x83ACEDBC;
	sub_831EA418(ctx, base);
loc_83ACEDBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83acee58
	goto loc_83ACEE58;
loc_83ACEDC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ACEDD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83acedf0
	if (cr0.eq) goto loc_83ACEDF0;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-20184
	ctx.r4.s64 = ctx.r11.s64 + -20184;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACEDEC;
	sub_831EA3F0(ctx, base);
	// b 0x83acedbc
	goto loc_83ACEDBC;
loc_83ACEDF0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83ACEDFC;
	sub_83A7BDA0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83acee10
	if (!cr0.eq) goto loc_83ACEE10;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-20232
	ctx.r4.s64 = ctx.r11.s64 + -20232;
	// b 0x83acee4c
	goto loc_83ACEE4C;
loc_83ACEE10:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x831ecda0
	ctx.lr = 0x83ACEE24;
	sub_831ECDA0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83acee38
	if (cr0.eq) goto loc_83ACEE38;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-20280
	ctx.r4.s64 = ctx.r11.s64 + -20280;
	// b 0x83acee4c
	goto loc_83ACEE4C;
loc_83ACEE38:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83acee58
	if (!cr6.lt) goto loc_83ACEE58;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-20324
	ctx.r4.s64 = ctx.r11.s64 + -20324;
loc_83ACEE4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACEE54;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83ACEE58:
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

__attribute__((alias("__imp__sub_83ACEE70"))) PPC_WEAK_FUNC(sub_83ACEE70);
PPC_FUNC_IMPL(__imp__sub_83ACEE70) {
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
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83ACEE94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83aceeb4
	if (cr6.eq) goto loc_83ACEEB4;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-20140
	ctx.r4.s64 = ctx.r11.s64 + -20140;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACEEAC;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aceebc
	goto loc_83ACEEBC;
loc_83ACEEB4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
loc_83ACEEBC:
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

__attribute__((alias("__imp__sub_83ACEED0"))) PPC_WEAK_FUNC(sub_83ACEED0);
PPC_FUNC_IMPL(__imp__sub_83ACEED0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r3,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF0000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83aceef4
	if (cr0.eq) goto loc_83ACEEF4;
loc_83ACEEEC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83acef34
	goto loc_83ACEF34;
loc_83ACEEF4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831eef28
	ctx.lr = 0x83ACEEFC;
	sub_831EEF28(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83acef1c
	if (cr0.eq) goto loc_83ACEF1C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,-20092
	ctx.r4.s64 = ctx.r11.s64 + -20092;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83ACEF18;
	sub_831EA418(ctx, base);
	// b 0x83aceeec
	goto loc_83ACEEEC;
loc_83ACEF1C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r11,76
	ctx.r31.s64 = ctx.r11.s64 + 76;
	// bl 0x83ace7b0
	ctx.lr = 0x83ACEF2C;
	sub_83ACE7B0(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_83ACEF34:
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

__attribute__((alias("__imp__sub_83ACEF48"))) PPC_WEAK_FUNC(sub_83ACEF48);
PPC_FUNC_IMPL(__imp__sub_83ACEF48) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83acefc4
	if (!cr6.eq) goto loc_83ACEFC4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831effb8
	ctx.lr = 0x83ACEF7C;
	sub_831EFFB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83acefb0
	if (!cr6.eq) goto loc_83ACEFB0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83acefa0
	if (cr6.eq) goto loc_83ACEFA0;
	// bl 0x831f11e8
	ctx.lr = 0x83ACEF98;
	sub_831F11E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_83ACEFA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83acead8
	ctx.lr = 0x83ACEFA8;
	sub_83ACEAD8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83acefe8
	if (cr0.eq) goto loc_83ACEFE8;
loc_83ACEFB0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83acefe8
	if (cr6.eq) goto loc_83ACEFE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83acefec
	goto loc_83ACEFEC;
loc_83ACEFC4:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83acefe8
	if (!cr6.eq) goto loc_83ACEFE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83acf004
	if (!cr6.eq) goto loc_83ACF004;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-20080
	ctx.r4.s64 = ctx.r11.s64 + -20080;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACEFE8;
	sub_831EA3F0(ctx, base);
loc_83ACEFE8:
	// li r3,3
	ctx.r3.s64 = 3;
loc_83ACEFEC:
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
loc_83ACF004:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x831ee338
	ctx.lr = 0x83ACF010;
	sub_831EE338(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-14100
	ctx.r11.s64 = ctx.r11.s64 + -14100;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x83acefec
	goto loc_83ACEFEC;
}

__attribute__((alias("__imp__sub_83ACF028"))) PPC_WEAK_FUNC(sub_83ACF028);
PPC_FUNC_IMPL(__imp__sub_83ACF028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ACF030;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83a82cd8
	ctx.lr = 0x83ACF044;
	sub_83A82CD8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83acf060
	if (!cr0.eq) goto loc_83ACF060;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-19888
	ctx.r4.s64 = ctx.r11.s64 + -19888;
loc_83ACF054:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACF05C;
	sub_831EA3F0(ctx, base);
	// b 0x83acf16c
	goto loc_83ACF16C;
loc_83ACF060:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83acf0ac
	if (!cr6.eq) goto loc_83ACF0AC;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r11,r11,48000
	ctx.r11.u64 = ctx.r11.u64 | 48000;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// lfs f0,24504(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
loc_83ACF0AC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83acf0ec
	if (cr6.lt) goto loc_83ACF0EC;
	// bl 0x83a82e58
	ctx.lr = 0x83ACF0BC;
	sub_83A82E58(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x83acf0ec
	if (cr6.eq) goto loc_83ACF0EC;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-19976
	ctx.r4.s64 = ctx.r11.s64 + -19976;
	// b 0x83acf054
	goto loc_83ACF054;
loc_83ACF0EC:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831ea7a0
	ctx.lr = 0x83ACF0F8;
	sub_831EA7A0(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x83acc308
	ctx.lr = 0x83ACF148;
	sub_83ACC308(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83ac1648
	ctx.lr = 0x83ACF158;
	sub_83AC1648(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x83ac1748
	ctx.lr = 0x83ACF16C;
	sub_83AC1748(ctx, base);
loc_83ACF16C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACF174"))) PPC_WEAK_FUNC(sub_83ACF174);
PPC_FUNC_IMPL(__imp__sub_83ACF174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACF178"))) PPC_WEAK_FUNC(sub_83ACF178);
PPC_FUNC_IMPL(__imp__sub_83ACF178) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83acf1d8
	if (!cr6.eq) goto loc_83ACF1D8;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r11,r11,48000
	ctx.r11.u64 = ctx.r11.u64 | 48000;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// lfs f0,24504(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
loc_83ACF1D8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83acf1fc
	if (!cr6.eq) goto loc_83ACF1FC;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-19824
	ctx.r4.s64 = ctx.r11.s64 + -19824;
	// bl 0x831ea3f0
	ctx.lr = 0x83ACF1F4;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83acf25c
	goto loc_83ACF25C;
loc_83ACF1FC:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831ea7a0
	ctx.lr = 0x83ACF208;
	sub_831EA7A0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x83acc330
	ctx.lr = 0x83ACF25C;
	sub_83ACC330(ctx, base);
loc_83ACF25C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACF270"))) PPC_WEAK_FUNC(sub_83ACF270);
PPC_FUNC_IMPL(__imp__sub_83ACF270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// bl 0x83acc308
	ctx.lr = 0x83ACF288;
	sub_83ACC308(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83ac1648
	ctx.lr = 0x83ACF298;
	sub_83AC1648(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831ea7a0
	ctx.lr = 0x83ACF2A4;
	sub_831EA7A0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x83acc9e8
	ctx.lr = 0x83ACF2F8;
	sub_83ACC9E8(ctx, base);
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

__attribute__((alias("__imp__sub_83ACF30C"))) PPC_WEAK_FUNC(sub_83ACF30C);
PPC_FUNC_IMPL(__imp__sub_83ACF30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACF310"))) PPC_WEAK_FUNC(sub_83ACF310);
PPC_FUNC_IMPL(__imp__sub_83ACF310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ACF318;
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
	// bl 0x83a83240
	ctx.lr = 0x83ACF32C;
	sub_83A83240(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acf028
	ctx.lr = 0x83ACF33C;
	sub_83ACF028(ctx, base);
	// bl 0x83a83248
	ctx.lr = 0x83ACF340;
	sub_83A83248(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACF348"))) PPC_WEAK_FUNC(sub_83ACF348);
PPC_FUNC_IMPL(__imp__sub_83ACF348) {
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
	// bl 0x83a83240
	ctx.lr = 0x83ACF358;
	sub_83A83240(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x83ac17a0
	ctx.lr = 0x83ACF360;
	sub_83AC17A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x83ac1648
	ctx.lr = 0x83ACF370;
	sub_83AC1648(ctx, base);
	// bl 0x83a83248
	ctx.lr = 0x83ACF374;
	sub_83A83248(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACF384"))) PPC_WEAK_FUNC(sub_83ACF384);
PPC_FUNC_IMPL(__imp__sub_83ACF384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACF388"))) PPC_WEAK_FUNC(sub_83ACF388);
PPC_FUNC_IMPL(__imp__sub_83ACF388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// stfd f13,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r10,-4(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x83acf3b4
	if (cr6.gt) goto loc_83ACF3B4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83ACF3B4:
	// mulli r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 * 1000;
	// li r10,100
	ctx.r10.s64 = 100;
	// divwu r11,r11,r10
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,4172
	ctx.r3.s64 = ctx.r11.s64 + 4172;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACF3CC"))) PPC_WEAK_FUNC(sub_83ACF3CC);
PPC_FUNC_IMPL(__imp__sub_83ACF3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACF3D0"))) PPC_WEAK_FUNC(sub_83ACF3D0);
PPC_FUNC_IMPL(__imp__sub_83ACF3D0) {
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
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,3972
	ctx.r3.s64 = ctx.r3.s64 + 3972;
	// bl 0x831cdcf0
	ctx.lr = 0x83ACF3F8;
	sub_831CDCF0(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3892
	ctx.r3.s64 = ctx.r31.s64 + 3892;
	// bl 0x831cdcf0
	ctx.lr = 0x83ACF408;
	sub_831CDCF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,3840
	ctx.r5.s64 = 3840;
	// stw r30,4132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4132, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,4136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4136, ctx.r30.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x831cdcf0
	ctx.lr = 0x83ACF424;
	sub_831CDCF0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,3888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3888, ctx.r30.u32);
	// stw r30,4152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4152, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r30,4148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4148, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// ble cr6,0x83acf450
	if (!cr6.gt) goto loc_83ACF450;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_83ACF450:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// lfs f0,22388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22388);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x83acf46c
	if (!cr6.gt) goto loc_83ACF46C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_83ACF46C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// ble cr6,0x83acf480
	if (!cr6.gt) goto loc_83ACF480;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_83ACF480:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x83acf494
	if (!cr6.gt) goto loc_83ACF494;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_83ACF494:
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

__attribute__((alias("__imp__sub_83ACF4AC"))) PPC_WEAK_FUNC(sub_83ACF4AC);
PPC_FUNC_IMPL(__imp__sub_83ACF4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACF4B0"))) PPC_WEAK_FUNC(sub_83ACF4B0);
PPC_FUNC_IMPL(__imp__sub_83ACF4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83ACF4B8;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r29,r3,48
	ctx.r29.s64 = ctx.r3.s64 + 48;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83ACF4E0:
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// addi r10,r10,768
	ctx.r10.s64 = ctx.r10.s64 + 768;
	// bdnz 0x83acf4e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACF4E0;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r30,r11,-19664
	ctx.r30.s64 = ctx.r11.s64 + -19664;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r31,3972
	ctx.r4.s64 = ctx.r31.s64 + 3972;
	// bl 0x83ade018
	ctx.lr = 0x83ACF510;
	sub_83ADE018(ctx, base);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r31,4052
	ctx.r4.s64 = ctx.r31.s64 + 4052;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x83ade018
	ctx.lr = 0x83ACF52C;
	sub_83ADE018(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_83ACF534:
	// lwz r11,4136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4136);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,192
	ctx.r3.s64 = 192;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,973
	ctx.r11.s64 = ctx.r11.s64 + 973;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83aca450
	ctx.lr = 0x83ACF550;
	sub_83ACA450(ctx, base);
	// lfsx f0,r28,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfsx f0,r28,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, temp.u32);
	// addi r29,r29,768
	ctx.r29.s64 = ctx.r29.s64 + 768;
	// cmplwi cr6,r30,20
	cr6.compare<uint32_t>(ctx.r30.u32, 20, xer);
	// blt cr6,0x83acf534
	if (cr6.lt) goto loc_83ACF534;
	// lwz r11,4132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4132);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4132, ctx.r11.u32);
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// blt cr6,0x83acf70c
	if (cr6.lt) goto loc_83ACF70C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subfic r7,r8,973
	xer.ca = ctx.r8.u32 <= 973;
	ctx.r7.s64 = 973 - ctx.r8.s64;
	// lfs f30,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// stw r27,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r27.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r27,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r27.u32);
	// stw r27,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r27.u32);
	// lfs f13,-19176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19176);
	ctx.f13.f64 = double(temp.f32);
loc_83ACF5B8:
	// li r9,4
	ctx.r9.s64 = 4;
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83ACF5CC:
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// bdnz 0x83acf5cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACF5CC;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x83acf5b8
	if (!cr0.eq) goto loc_83ACF5B8;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-19180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19180);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f31,f0,f10
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x831d1e78
	ctx.lr = 0x83ACF62C;
	sub_831D1E78(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// lfs f0,-23848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-19184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,22388(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 22388);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f11,f0,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83acf658
	if (cr6.gt) goto loc_83ACF658;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_83ACF658:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83acf66c
	if (!cr6.gt) goto loc_83ACF66C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_83ACF66C:
	// lwz r11,4140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83acf6c8
	if (cr6.eq) goto loc_83ACF6C8;
	// lwz r10,4152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4152);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stfsx f31,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lwz r11,4140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4140);
	// lwz r10,4152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4152);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r10,4144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4144);
	// lwz r11,4152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4152);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4152, ctx.r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83acf6b4
	if (cr6.lt) goto loc_83ACF6B4;
	// stw r27,4152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4152, ctx.r27.u32);
loc_83ACF6B4:
	// lwz r11,4148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4148);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83acf6c8
	if (!cr6.lt) goto loc_83ACF6C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4148, ctx.r11.u32);
loc_83ACF6C8:
	// lwz r11,4136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4136, ctx.r11.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x83acf6e0
	if (cr6.lt) goto loc_83ACF6E0;
	// stw r27,4136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4136, ctx.r27.u32);
loc_83ACF6E0:
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83ACF6EC:
	// lwz r10,4136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4136);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,973
	ctx.r10.s64 = ctx.r10.s64 + 973;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f30,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x83acf6ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACF6EC;
	// stw r27,4132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4132, ctx.r27.u32);
loc_83ACF70C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACF71C"))) PPC_WEAK_FUNC(sub_83ACF71C);
PPC_FUNC_IMPL(__imp__sub_83ACF71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACF720"))) PPC_WEAK_FUNC(sub_83ACF720);
PPC_FUNC_IMPL(__imp__sub_83ACF720) {
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
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,4148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4148);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,4140(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4140);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r10,4144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4144);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x83acf75c
	if (cr6.lt) goto loc_83ACF75C;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_83ACF75C:
	// lwz r9,4152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4152);
	// twllei r10,0
	// subf r11,r6,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r6.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divwu r8,r11,r10
	ctx.r8.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83acf7a8
	if (cr6.gt) goto loc_83ACF7A8;
	// bge cr6,0x83acf7ec
	if (!cr6.lt) goto loc_83ACF7EC;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83ACF798:
	// lfsu f13,8(r11)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x83acf798
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACF798;
	// b 0x83acf7ec
	goto loc_83ACF7EC;
loc_83ACF7A8:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83acf7d0
	if (!cr6.lt) goto loc_83ACF7D0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83ACF7C4:
	// lfsu f13,8(r11)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x83acf7c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACF7C4;
loc_83ACF7D0:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83acf7ec
	if (cr6.eq) goto loc_83ACF7EC;
	// addi r11,r7,-8
	ctx.r11.s64 = ctx.r7.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83ACF7E0:
	// lfsu f13,8(r11)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x83acf7e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACF7E0;
loc_83ACF7EC:
	// clrldi r11,r6,32
	ctx.r11.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x831d1e78
	ctx.lr = 0x83ACF808;
	sub_831D1E78(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// lfs f0,-23848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-19184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,22388(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 22388);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f11,f0,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83acf834
	if (cr6.gt) goto loc_83ACF834;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_83ACF834:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// ble cr6,0x83acf848
	if (!cr6.gt) goto loc_83ACF848;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_83ACF848:
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

__attribute__((alias("__imp__sub_83ACF85C"))) PPC_WEAK_FUNC(sub_83ACF85C);
PPC_FUNC_IMPL(__imp__sub_83ACF85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACF860"))) PPC_WEAK_FUNC(sub_83ACF860);
PPC_FUNC_IMPL(__imp__sub_83ACF860) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,4148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4148);
	// lwz r10,4140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4140);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x83acf8b4
	if (cr6.eq) goto loc_83ACF8B4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83ACF88C:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f1
	cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// blt cr6,0x83acf8a4
	if (cr6.lt) goto loc_83ACF8A4;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_83ACF8A4:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x83acf88c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACF88C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83acf8c0
	if (!cr6.eq) goto loc_83ACF8C0;
loc_83ACF8B4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lfs f0,22388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22388);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83acf908
	goto loc_83ACF908;
loc_83ACF8C0:
	// clrldi r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x831d1e78
	ctx.lr = 0x83ACF8DC;
	sub_831D1E78(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// lfs f0,-23848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-19184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,22388(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 22388);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f11,f0,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83acf908
	if (cr6.gt) goto loc_83ACF908;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_83ACF908:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACF91C"))) PPC_WEAK_FUNC(sub_83ACF91C);
PPC_FUNC_IMPL(__imp__sub_83ACF91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACF920"))) PPC_WEAK_FUNC(sub_83ACF920);
PPC_FUNC_IMPL(__imp__sub_83ACF920) {
	PPC_FUNC_PROLOGUE();
	// li r3,4688
	ctx.r3.s64 = 4688;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACF928"))) PPC_WEAK_FUNC(sub_83ACF928);
PPC_FUNC_IMPL(__imp__sub_83ACF928) {
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
	// cmpwi cr6,r5,4688
	cr6.compare<int32_t>(ctx.r5.s32, 4688, xer);
	// bge cr6,0x83acf950
	if (!cr6.lt) goto loc_83ACF950;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83acf9e4
	goto loc_83ACF9E4;
loc_83ACF950:
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// li r5,4672
	ctx.r5.s64 = 4672;
	// rlwinm r31,r11,0,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83ACF968;
	sub_831CDCF0(ctx, base);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// li r9,25
	ctx.r9.s64 = 25;
	// addi r11,r11,-19408
	ctx.r11.s64 = ctx.r11.s64 + -19408;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// li r8,4624
	ctx.r8.s64 = 4624;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r11,1000
	ctx.r11.s64 = 1000;
	// stfiwx f0,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.f0.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// divwu r10,r10,r11
	ctx.r10.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4632, ctx.r10.u32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// divwu r11,r10,r11
	ctx.r11.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// stw r11,4668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4668, ctx.r11.u32);
loc_83ACF9E4:
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

__attribute__((alias("__imp__sub_83ACF9FC"))) PPC_WEAK_FUNC(sub_83ACF9FC);
PPC_FUNC_IMPL(__imp__sub_83ACF9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACFA00"))) PPC_WEAK_FUNC(sub_83ACFA00);
PPC_FUNC_IMPL(__imp__sub_83ACFA00) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4176
	ctx.r3.s64 = ctx.r3.s64 + 4176;
	// bl 0x831cdcf0
	ctx.lr = 0x83ACFA24;
	sub_831CDCF0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4560
	ctx.r3.s64 = ctx.r31.s64 + 4560;
	// bl 0x831cdcf0
	ctx.lr = 0x83ACFA34;
	sub_831CDCF0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4592
	ctx.r3.s64 = ctx.r31.s64 + 4592;
	// bl 0x831cdcf0
	ctx.lr = 0x83ACFA44;
	sub_831CDCF0(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// lfs f0,22388(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22388);
	ctx.f0.f64 = double(temp.f32);
loc_83ACFA5C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x83acfa70
	if (!cr6.lt) goto loc_83ACFA70;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
loc_83ACFA70:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x83acfa8c
	if (!cr6.lt) goto loc_83ACFA8C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
loc_83ACFA8C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83acfa5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACFA5C;
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

__attribute__((alias("__imp__sub_83ACFAAC"))) PPC_WEAK_FUNC(sub_83ACFAAC);
PPC_FUNC_IMPL(__imp__sub_83ACFAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACFAB0"))) PPC_WEAK_FUNC(sub_83ACFAB0);
PPC_FUNC_IMPL(__imp__sub_83ACFAB0) {
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
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce774
	ctx.lr = 0x83ACFAC0;
	__savefpr_27(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83acfbe4
	if (cr6.eq) goto loc_83ACFBE4;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
	// addi r7,r11,-19376
	ctx.r7.s64 = ctx.r11.s64 + -19376;
loc_83ACFAD8:
	// li r10,4
	ctx.r10.s64 = 4;
	// lfsu f0,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83ACFAEC:
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f11,f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f0.f64));
	// lfsu f0,48(r11)
	ea = 48 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfs f10,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f9,f8,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f11.f64));
	// fmadds f11,f7,f6,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f11.f64));
	// fmadds f11,f5,f4,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f11.f64));
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f13,f3,f2,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f13.f64));
	// fmadds f13,f1,f31,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f13,f30,f29,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fmadds f13,f28,f27,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f27.f64 + ctx.f13.f64));
	// fmadds f0,f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f13.f64));
	// stfsu f0,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x83acfaec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACFAEC;
	// lfs f0,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lfs f13,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// stfs f0,44(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// stfs f13,40(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// stfs f12,36(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// stfs f11,32(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// stfs f10,28(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// stfs f9,24(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// stfs f8,20(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f7,16(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// stfs f6,12(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f5,8(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f4,4(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// bne 0x83acfad8
	if (!cr0.eq) goto loc_83ACFAD8;
loc_83ACFBE4:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce7c0
	ctx.lr = 0x83ACFBEC;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83ACFBF8"))) PPC_WEAK_FUNC(sub_83ACFBF8);
PPC_FUNC_IMPL(__imp__sub_83ACFBF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83ACFC00;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83acf388
	ctx.lr = 0x83ACFC0C;
	sub_83ACF388(ctx, base);
	// cmpw cr6,r5,r3
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, xer);
	// bge cr6,0x83acfc1c
	if (!cr6.lt) goto loc_83ACFC1C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83acfcd8
	goto loc_83ACFCD8;
loc_83ACFC1C:
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// li r5,4156
	ctx.r5.s64 = 4156;
	// rlwinm r31,r11,0,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r31,4156
	ctx.r29.s64 = ctx.r31.s64 + 4156;
	// bl 0x831cdcf0
	ctx.lr = 0x83ACFC38;
	sub_831CDCF0(ctx, base);
	// li r10,24
	ctx.r10.s64 = 24;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r11,-19692
	ctx.r11.s64 = ctx.r11.s64 + -19692;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x83acfc6c
	if (cr6.lt) goto loc_83ACFC6C;
	// li r11,6
	ctx.r11.s64 = 6;
loc_83ACFC6C:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83acfca4
	if (!cr6.gt) goto loc_83ACFCA4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83ACFCA4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83acfccc
	if (cr6.eq) goto loc_83ACFCCC;
	// li r9,100
	ctx.r9.s64 = 100;
	// stw r29,4140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4140, ctx.r29.u32);
	// mulli r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 * 1000;
	// mulli r10,r10,1000
	ctx.r10.s64 = ctx.r10.s64 * 1000;
	// divwu r11,r11,r9
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r9.u32);
	// divwu r10,r10,r9
	ctx.r10.u32 = PPCDivide(ctx.r10.u32, ctx.r9.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,4144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4144, ctx.r10.u32);
loc_83ACFCCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83acf3d0
	ctx.lr = 0x83ACFCD4;
	sub_83ACF3D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83ACFCD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACFCE0"))) PPC_WEAK_FUNC(sub_83ACFCE0);
PPC_FUNC_IMPL(__imp__sub_83ACFCE0) {
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
	ctx.lr = 0x83ACFCE8;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce770
	ctx.lr = 0x83ACFCF0;
	__savefpr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// beq cr6,0x83acff44
	if (cr6.eq) goto loc_83ACFF44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lfs f26,22688(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22688);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,21212(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21212);
	ctx.f27.f64 = double(temp.f32);
	// addi r21,r3,80
	ctx.r21.s64 = ctx.r3.s64 + 80;
	// lfs f28,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,22388(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 22388);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,20056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20056);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,-26260(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
loc_83ACFD48:
	// subf r11,r23,r19
	ctx.r11.s64 = ctx.r19.s64 - ctx.r23.s64;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// blt cr6,0x83acfd58
	if (cr6.lt) goto loc_83ACFD58;
	// li r11,256
	ctx.r11.s64 = 256;
loc_83ACFD58:
	// add r24,r11,r23
	ctx.r24.u64 = ctx.r11.u64 + ctx.r23.u64;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// rlwinm r25,r24,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cdcf0
	ctx.lr = 0x83ACFD70;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83acfe40
	if (cr6.eq) goto loc_83ACFE40;
	// rlwinm r26,r23,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// addi r31,r30,4592
	ctx.r31.s64 = ctx.r30.s64 + 4592;
	// addi r29,r30,4176
	ctx.r29.s64 = ctx.r30.s64 + 4176;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_83ACFD8C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4624(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4624);
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83acfdec
	if (cr6.eq) goto loc_83ACFDEC;
	// subf r11,r24,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r24.s64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// beq cr6,0x83acfde8
	if (cr6.eq) goto loc_83ACFDE8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_83ACFDC0:
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x83acfdd0
	if (!cr6.gt) goto loc_83ACFDD0;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_83ACFDD0:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x83acfddc
	if (!cr6.lt) goto loc_83ACFDDC;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
loc_83ACFDDC:
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83acfdc0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83ACFDC0;
loc_83ACFDE8:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_83ACFDEC:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83acfab0
	ctx.lr = 0x83ACFDFC;
	sub_83ACFAB0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83aca508
	ctx.lr = 0x83ACFE08;
	sub_83ACA508(ctx, base);
	// lfs f0,-32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x83acfe2c
	if (!cr6.gt) goto loc_83ACFE2C;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,-32(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + -32, temp.u32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x83acfe2c
	if (!cr6.gt) goto loc_83ACFE2C;
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stw r18,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r18.u32);
loc_83ACFE2C:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83acfd8c
	if (!cr0.eq) goto loc_83ACFD8C;
loc_83ACFE40:
	// lwz r11,4628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4628);
	// add r23,r24,r23
	ctx.r23.u64 = ctx.r24.u64 + ctx.r23.u64;
	// lwz r10,4632(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4632);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r11,4628(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4628, ctx.r11.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83acfeb4
	if (cr6.lt) goto loc_83ACFEB4;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83acfeb0
	if (cr6.eq) goto loc_83ACFEB0;
	// addi r31,r30,4560
	ctx.r31.s64 = ctx.r30.s64 + 4560;
	// subfic r28,r30,-4560
	xer.ca = ctx.r30.u32 <= 4294962736;
	ctx.r28.s64 = -4560 - ctx.r30.s64;
loc_83ACFE70:
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83aca338
	ctx.lr = 0x83ACFE78;
	sub_83ACA338(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x83acfe84
	if (!cr6.lt) goto loc_83ACFE84;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
loc_83ACFE84:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x83acfe9c
	if (!cr6.lt) goto loc_83ACFE9C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stfsx f1,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
loc_83ACFE9C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stfs f28,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r22
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, xer);
	// blt cr6,0x83acfe70
	if (cr6.lt) goto loc_83ACFE70;
loc_83ACFEB0:
	// stw r18,4628(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4628, ctx.r18.u32);
loc_83ACFEB4:
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83acff3c
	if (cr6.eq) goto loc_83ACFF3C;
	// addi r31,r30,4592
	ctx.r31.s64 = ctx.r30.s64 + 4592;
	// subfic r28,r30,-4560
	xer.ca = ctx.r30.u32 <= 4294962736;
	ctx.r28.s64 = -4560 - ctx.r30.s64;
loc_83ACFEC8:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,4668(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4668);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83acfef4
	if (cr6.lt) goto loc_83ACFEF4;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f0,f27,f0
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f27.f64 - ctx.f0.f64)));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x83acfefc
	if (!cr6.lt) goto loc_83ACFEFC;
	// stfs f28,0(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x83acfefc
	goto loc_83ACFEFC;
loc_83ACFEF4:
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_83ACFEFC:
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83aca338
	ctx.lr = 0x83ACFF04;
	sub_83ACA338(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x83acff10
	if (!cr6.lt) goto loc_83ACFF10;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
loc_83ACFF10:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x83acff2c
	if (!cr6.lt) goto loc_83ACFF2C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfsx f1,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, temp.u32);
loc_83ACFF2C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r22
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, xer);
	// blt cr6,0x83acfec8
	if (cr6.lt) goto loc_83ACFEC8;
loc_83ACFF3C:
	// cmplw cr6,r23,r19
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r19.u32, xer);
	// blt cr6,0x83acfd48
	if (cr6.lt) goto loc_83ACFD48;
loc_83ACFF44:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce7bc
	ctx.lr = 0x83ACFF50;
	__restfpr_26(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83ACFF54"))) PPC_WEAK_FUNC(sub_83ACFF54);
PPC_FUNC_IMPL(__imp__sub_83ACFF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83ACFF58"))) PPC_WEAK_FUNC(sub_83ACFF58);
PPC_FUNC_IMPL(__imp__sub_83ACFF58) {
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
	ctx.lr = 0x83ACFF60;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r24,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// stw r24,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r24.u32);
	// beq cr6,0x83acffa0
	if (cr6.eq) goto loc_83ACFFA0;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
loc_83ACFFA0:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83acffac
	if (cr6.eq) goto loc_83ACFFAC;
	// stw r23,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r23.u32);
loc_83ACFFAC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83ad0198
	if (cr6.eq) goto loc_83AD0198;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83ad0198
	if (cr6.eq) goto loc_83AD0198;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83ad0000
	if (cr6.eq) goto loc_83AD0000;
	// cmplw cr6,r9,r25
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, xer);
	// beq cr6,0x83ad0000
	if (cr6.eq) goto loc_83AD0000;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83ad0000
	if (cr6.eq) goto loc_83AD0000;
	// rlwinm r27,r23,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// subf r26,r9,r25
	ctx.r26.s64 = ctx.r25.s64 - ctx.r9.s64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_83ACFFE4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwzx r4,r26,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831ce980
	ctx.lr = 0x83ACFFF4;
	sub_831CE980(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83acffe4
	if (!cr0.eq) goto loc_83ACFFE4;
loc_83AD0000:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83ad0010
	if (cr6.lt) goto loc_83AD0010;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83AD0010:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83ad0054
	if (cr6.eq) goto loc_83AD0054;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r8,r11,-19384
	ctx.r8.s64 = ctx.r11.s64 + -19384;
loc_83AD002C:
	// lbzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x83ad0048
	if (cr0.lt) goto loc_83AD0048;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stwx r7,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u32);
loc_83AD0048:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83ad002c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AD002C;
loc_83AD0054:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83ad0134
	if (cr6.eq) goto loc_83AD0134;
loc_83AD0060:
	// lwz r10,3888(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3888);
	// subf r11,r28,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r28.s64;
	// subfic r10,r10,192
	xer.ca = ctx.r10.u32 <= 192;
	ctx.r10.s64 = 192 - ctx.r10.s64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83ad007c
	if (cr6.lt) goto loc_83AD007C;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_83AD007C:
	// rlwinm r30,r26,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
loc_83AD0088:
	// lwz r11,3888(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3888);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq cr6,0x83ad00bc
	if (cr6.eq) goto loc_83AD00BC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x831ce980
	ctx.lr = 0x83AD00B8;
	sub_831CE980(ctx, base);
	// b 0x83ad00c4
	goto loc_83AD00C4;
loc_83AD00BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83AD00C4;
	sub_831CDCF0(ctx, base);
loc_83AD00C4:
	// addi r31,r31,192
	ctx.r31.s64 = ctx.r31.s64 + 192;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r31,960
	cr6.compare<uint32_t>(ctx.r31.u32, 960, xer);
	// blt cr6,0x83ad0088
	if (cr6.lt) goto loc_83AD0088;
	// lwz r11,3888(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3888);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r11,3888(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3888, ctx.r11.u32);
	// cmplwi cr6,r11,192
	cr6.compare<uint32_t>(ctx.r11.u32, 192, xer);
	// blt cr6,0x83ad0128
	if (cr6.lt) goto loc_83AD0128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83acf4b0
	ctx.lr = 0x83AD00F0;
	sub_83ACF4B0(ctx, base);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r24,3888(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3888, ctx.r24.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// ble cr6,0x83ad0128
	if (!cr6.gt) goto loc_83AD0128;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_83AD0128:
	// add r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 + ctx.r28.u64;
	// cmplw cr6,r28,r23
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, xer);
	// blt cr6,0x83ad0060
	if (cr6.lt) goto loc_83AD0060;
loc_83AD0134:
	// lwz r11,4140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ad0198
	if (cr6.eq) goto loc_83AD0198;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83acf720
	ctx.lr = 0x83AD0148;
	sub_83ACF720(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f31,12540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12540);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83acf860
	ctx.lr = 0x83AD015C;
	sub_83ACF860(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x83ad0184
	if (cr6.lt) goto loc_83AD0184;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,-23848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x83ad017c
	if (cr6.gt) goto loc_83AD017C;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
loc_83AD017C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83acf860
	ctx.lr = 0x83AD0184;
	sub_83ACF860(ctx, base);
loc_83AD0184:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// ble cr6,0x83ad0198
	if (!cr6.gt) goto loc_83AD0198;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_83AD0198:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AD01A4"))) PPC_WEAK_FUNC(sub_83AD01A4);
PPC_FUNC_IMPL(__imp__sub_83AD01A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AD01A8"))) PPC_WEAK_FUNC(sub_83AD01A8);
PPC_FUNC_IMPL(__imp__sub_83AD01A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83AD01B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83ad01d0
	if (cr6.eq) goto loc_83AD01D0;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
loc_83AD01D0:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83ad01dc
	if (cr6.eq) goto loc_83AD01DC;
	// stw r26,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r26.u32);
loc_83AD01DC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83ad0244
	if (cr6.eq) goto loc_83AD0244;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83ad0244
	if (cr6.eq) goto loc_83AD0244;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83ad0230
	if (cr6.eq) goto loc_83AD0230;
	// cmplw cr6,r9,r25
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, xer);
	// beq cr6,0x83ad0230
	if (cr6.eq) goto loc_83AD0230;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83ad0230
	if (cr6.eq) goto loc_83AD0230;
	// rlwinm r29,r26,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// subf r28,r9,r25
	ctx.r28.s64 = ctx.r25.s64 - ctx.r9.s64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_83AD0214:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzx r4,r28,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831ce980
	ctx.lr = 0x83AD0224;
	sub_831CE980(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83ad0214
	if (!cr0.eq) goto loc_83AD0214;
loc_83AD0230:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83acfce0
	ctx.lr = 0x83AD0244;
	sub_83ACFCE0(ctx, base);
loc_83AD0244:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AD024C"))) PPC_WEAK_FUNC(sub_83AD024C);
PPC_FUNC_IMPL(__imp__sub_83AD024C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AD0250"))) PPC_WEAK_FUNC(sub_83AD0250);
PPC_FUNC_IMPL(__imp__sub_83AD0250) {
	PPC_FUNC_PROLOGUE();
	// li r3,272
	ctx.r3.s64 = 272;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AD0258"))) PPC_WEAK_FUNC(sub_83AD0258);
PPC_FUNC_IMPL(__imp__sub_83AD0258) {
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
	// cmpwi cr6,r5,272
	cr6.compare<int32_t>(ctx.r5.s32, 272, xer);
	// bge cr6,0x83ad0280
	if (!cr6.lt) goto loc_83AD0280;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ad02e8
	goto loc_83AD02E8;
loc_83AD0280:
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// li r5,256
	ctx.r5.s64 = 256;
	// rlwinm r31,r11,0,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83AD0298;
	sub_831CDCF0(ctx, base);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// li r9,27
	ctx.r9.s64 = 27;
	// addi r11,r11,-19100
	ctx.r11.s64 = ctx.r11.s64 + -19100;
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mulli r9,r10,50
	ctx.r9.s64 = ctx.r10.s64 * 50;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// divw r10,r9,r11
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mulli r9,r9,1000
	ctx.r9.s64 = ctx.r9.s64 * 1000;
	// divw r11,r9,r11
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_83AD02E8:
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

__attribute__((alias("__imp__sub_83AD0300"))) PPC_WEAK_FUNC(sub_83AD0300);
PPC_FUNC_IMPL(__imp__sub_83AD0300) {
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
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bl 0x831cdcf0
	ctx.lr = 0x83AD032C;
	sub_831CDCF0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x831cdcf0
	ctx.lr = 0x83AD033C;
	sub_831CDCF0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x831cdcf0
	ctx.lr = 0x83AD034C;
	sub_831CDCF0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x831cdcf0
	ctx.lr = 0x83AD035C;
	sub_831CDCF0(ctx, base);
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

__attribute__((alias("__imp__sub_83AD0370"))) PPC_WEAK_FUNC(sub_83AD0370);
PPC_FUNC_IMPL(__imp__sub_83AD0370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83AD0378;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83ad0408
	if (cr6.eq) goto loc_83AD0408;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83ad0408
	if (cr6.eq) goto loc_83AD0408;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r30,r3,160
	ctx.r30.s64 = ctx.r3.s64 + 160;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
loc_83AD03AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83aca450
	ctx.lr = 0x83AD03B8;
	sub_83ACA450(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83aca508
	ctx.lr = 0x83AD03C8;
	sub_83ACA508(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x83ad03f8
	if (!cr6.gt) goto loc_83AD03F8;
	// lfs f0,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,32(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x83ad03f8
	if (!cr6.gt) goto loc_83AD03F8;
	// stfs f1,64(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// stw r25,-32(r30)
	PPC_STORE_U32(ctx.r30.u32 + -32, ctx.r25.u32);
loc_83AD03F8:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83ad03ac
	if (!cr0.eq) goto loc_83AD03AC;
loc_83AD0408:
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r11,r31,224
	ctx.r11.s64 = ctx.r31.s64 + 224;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,22688(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 22688);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21212(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21212);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
loc_83AD042C:
	// lwz r10,-96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -96);
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83ad0458
	if (cr6.lt) goto loc_83AD0458;
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f12,f12,f0,f12
	ctx.f12.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x83ad0460
	if (!cr6.lt) goto loc_83AD0460;
	// stfs f30,0(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x83ad0460
	goto loc_83AD0460;
loc_83AD0458:
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stw r10,-96(r11)
	PPC_STORE_U32(ctx.r11.u32 + -96, ctx.r10.u32);
loc_83AD0460:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83ad042c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AD042C;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83ad0534
	if (cr6.lt) goto loc_83AD0534;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// subfic r28,r31,-160
	xer.ca = ctx.r31.u32 <= 4294967136;
	ctx.r28.s64 = -160 - ctx.r31.s64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// subfic r27,r31,-128
	xer.ca = ctx.r31.u32 <= 4294967168;
	ctx.r27.s64 = -128 - ctx.r31.s64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r30,r31,192
	ctx.r30.s64 = ctx.r31.s64 + 192;
	// subfic r26,r31,-192
	xer.ca = ctx.r31.u32 <= 4294967104;
	ctx.r26.s64 = -192 - ctx.r31.s64;
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_83AD04B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x83ad04d8
	if (!cr6.lt) goto loc_83AD04D8;
	// lfs f0,-32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x83b67c08
	ctx.lr = 0x83AD04CC;
	sub_83B67C08(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfsx f1,r11,r26
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, temp.u32);
loc_83AD04D8:
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bge cr6,0x83ad04fc
	if (!cr6.lt) goto loc_83AD04FC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfsx f0,r11,r28
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, temp.u32);
loc_83AD04FC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x83ad0518
	if (!cr6.lt) goto loc_83AD0518;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfsx f0,r11,r27
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, temp.u32);
loc_83AD0518:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stfs f30,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f30,-32(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + -32, temp.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(ctx.r29.u32, 8, xer);
	// blt cr6,0x83ad04b4
	if (cr6.lt) goto loc_83AD04B4;
	// stw r25,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r25.u32);
loc_83AD0534:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AD0544"))) PPC_WEAK_FUNC(sub_83AD0544);
PPC_FUNC_IMPL(__imp__sub_83AD0544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AD0548"))) PPC_WEAK_FUNC(sub_83AD0548);
PPC_FUNC_IMPL(__imp__sub_83AD0548) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// mullw r9,r10,r4
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// divw r9,r9,r11
	ctx.r9.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	// divw r11,r10,r11
	ctx.r11.s32 = PPCDivide(ctx.r10.s32, ctx.r11.s32);
	// stw r9,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r9.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AD056C"))) PPC_WEAK_FUNC(sub_83AD056C);
PPC_FUNC_IMPL(__imp__sub_83AD056C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AD0570"))) PPC_WEAK_FUNC(sub_83AD0570);
PPC_FUNC_IMPL(__imp__sub_83AD0570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AD0578;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ea7a0
	ctx.lr = 0x83AD058C;
	sub_831EA7A0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83ad0778
	ctx.lr = 0x83AD059C;
	sub_83AD0778(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x83ad05ac
	if (!cr0.lt) goto loc_83AD05AC;
loc_83AD05A4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83ad05e8
	goto loc_83AD05E8;
loc_83AD05AC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ad05e4
	if (!cr6.gt) goto loc_83AD05E4;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
loc_83AD05C0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83adeb30
	ctx.lr = 0x83AD05C8;
	sub_83ADEB30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83ad05a4
	if (cr0.lt) goto loc_83AD05A4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x83ad05c0
	if (cr6.lt) goto loc_83AD05C0;
loc_83AD05E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83AD05E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AD05F0"))) PPC_WEAK_FUNC(sub_83AD05F0);
PPC_FUNC_IMPL(__imp__sub_83AD05F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AD05F8;
	__savegprlr_26(ctx, base);
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
	// bl 0x83ad0570
	ctx.lr = 0x83AD060C;
	sub_83AD0570(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// bge cr6,0x83ad0630
	if (!cr6.lt) goto loc_83AD0630;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-19004
	ctx.r4.s64 = ctx.r11.s64 + -19004;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AD0628;
	sub_831EA418(ctx, base);
loc_83AD0628:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ad0704
	goto loc_83AD0704;
loc_83AD0630:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ea7a0
	ctx.lr = 0x83AD063C;
	sub_831EA7A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83ad0778
	ctx.lr = 0x83AD064C;
	sub_83AD0778(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83ad07e8
	ctx.lr = 0x83AD0660;
	sub_83AD07E8(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq 0x83ad0628
	if (cr0.eq) goto loc_83AD0628;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83adeb30
	ctx.lr = 0x83AD0678;
	sub_83ADEB30(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt 0x83ad0628
	if (cr0.lt) goto loc_83AD0628;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ad06c4
	if (!cr6.gt) goto loc_83AD06C4;
loc_83AD0690:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83adeb90
	ctx.lr = 0x83AD06A0;
	sub_83ADEB90(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x83ad06c4
	if (cr0.eq) goto loc_83AD06C4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83ad0918
	ctx.lr = 0x83AD06B0;
	sub_83AD0918(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x83ad0690
	if (cr6.lt) goto loc_83AD0690;
loc_83AD06C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// beq cr6,0x83ad06dc
	if (cr6.eq) goto loc_83AD06DC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83ad1008
	ctx.lr = 0x83AD06D8;
	sub_83AD1008(ctx, base);
	// b 0x83ad0628
	goto loc_83AD0628;
loc_83AD06DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83adeaa0
	ctx.lr = 0x83AD06EC;
	sub_83ADEAA0(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83ad0940
	ctx.lr = 0x83AD0700;
	sub_83AD0940(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_83AD0704:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AD070C"))) PPC_WEAK_FUNC(sub_83AD070C);
PPC_FUNC_IMPL(__imp__sub_83AD070C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AD0710"))) PPC_WEAK_FUNC(sub_83AD0710);
PPC_FUNC_IMPL(__imp__sub_83AD0710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r11,31160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31160);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,31160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31160, ctx.r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r8,-31739
	ctx.r8.s64 = -2080047104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,31164
	ctx.r7.s64 = ctx.r8.s64 + 31164;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,31164(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31164, ctx.r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AD074C"))) PPC_WEAK_FUNC(sub_83AD074C);
PPC_FUNC_IMPL(__imp__sub_83AD074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AD0750"))) PPC_WEAK_FUNC(sub_83AD0750);
PPC_FUNC_IMPL(__imp__sub_83AD0750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,31164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31164);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AD076C"))) PPC_WEAK_FUNC(sub_83AD076C);
PPC_FUNC_IMPL(__imp__sub_83AD076C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AD0770"))) PPC_WEAK_FUNC(sub_83AD0770);
PPC_FUNC_IMPL(__imp__sub_83AD0770) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a83ff8
	sub_83A83FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AD0774"))) PPC_WEAK_FUNC(sub_83AD0774);
PPC_FUNC_IMPL(__imp__sub_83AD0774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AD0778"))) PPC_WEAK_FUNC(sub_83AD0778);
PPC_FUNC_IMPL(__imp__sub_83AD0778) {
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
	// bne cr6,0x83ad07a8
	if (!cr6.eq) goto loc_83AD07A8;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-18912
	ctx.r4.s64 = ctx.r11.s64 + -18912;
loc_83AD0794:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AD07A0;
	sub_831EA418(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83ad07d4
	goto loc_83AD07D4;
loc_83AD07A8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83ad07c0
	if (cr6.gt) goto loc_83AD07C0;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-18924
	ctx.r4.s64 = ctx.r11.s64 + -18924;
	// b 0x83ad0794
	goto loc_83AD0794;
loc_83AD07C0:
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(ctx.r11.s32, 32767, xer);
	// blt cr6,0x83ad07cc
	if (cr6.lt) goto loc_83AD07CC;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_83AD07CC:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
loc_83AD07D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AD07E4"))) PPC_WEAK_FUNC(sub_83AD07E4);
PPC_FUNC_IMPL(__imp__sub_83AD07E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AD07E8"))) PPC_WEAK_FUNC(sub_83AD07E8);
PPC_FUNC_IMPL(__imp__sub_83AD07E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AD07F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,31160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31160);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83ad0828
	if (cr6.gt) goto loc_83AD0828;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,-18876
	ctx.r4.s64 = ctx.r11.s64 + -18876;
loc_83AD0818:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AD0820;
	sub_831EA418(ctx, base);
loc_83AD0820:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ad08c0
	goto loc_83AD08C0;
loc_83AD0828:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x83ad0844
	if (cr6.gt) goto loc_83AD0844;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-18888
	ctx.r4.s64 = ctx.r11.s64 + -18888;
	// b 0x83ad0818
	goto loc_83AD0818;
loc_83AD0844:
	// cmpwi cr6,r31,32767
	cr6.compare<int32_t>(ctx.r31.s32, 32767, xer);
	// blt cr6,0x83ad0850
	if (cr6.lt) goto loc_83AD0850;
	// li r31,32767
	ctx.r31.s64 = 32767;
loc_83AD0850:
	// bl 0x83ad0778
	ctx.lr = 0x83AD0854;
	sub_83AD0778(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble 0x83ad0820
	if (!cr0.gt) goto loc_83AD0820;
	// cmpw cr6,r29,r4
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r4.s32, xer);
	// bge cr6,0x83ad0874
	if (!cr6.lt) goto loc_83AD0874;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-18900
	ctx.r4.s64 = ctx.r11.s64 + -18900;
	// b 0x83ad0818
	goto loc_83AD0818;
loc_83AD0874:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83AD087C;
	sub_831EA7A0(ctx, base);
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// rlwinm r3,r11,0,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// sth r31,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r31.u16);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// ble cr6,0x83ad08c0
	if (!cr6.gt) goto loc_83AD08C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
loc_83AD08A0:
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r9,-1
	ctx.r9.s64 = -1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x83ad08a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AD08A0;
loc_83AD08C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AD08C8"))) PPC_WEAK_FUNC(sub_83AD08C8);
PPC_FUNC_IMPL(__imp__sub_83AD08C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lha r9,10(r3)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 10));
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x83ad0904
	if (!cr0.gt) goto loc_83AD0904;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
loc_83AD08E0:
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,376(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 376);
	// rlwinm. r7,r7,0,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x83ad0904
	if (!cr0.eq) goto loc_83AD0904;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83ad08e0
	if (cr6.lt) goto loc_83AD08E0;
loc_83AD0904:
	// srawi r11,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// adde r3,r8,r11
	temp.u8 = (ctx.r8.u32 + ctx.r11.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AD0918"))) PPC_WEAK_FUNC(sub_83AD0918);
PPC_FUNC_IMPL(__imp__sub_83AD0918) {
	PPC_FUNC_PROLOGUE();
	// lha r10,12(r3)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 12));
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AD093C"))) PPC_WEAK_FUNC(sub_83AD093C);
PPC_FUNC_IMPL(__imp__sub_83AD093C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AD0940"))) PPC_WEAK_FUNC(sub_83AD0940);
PPC_FUNC_IMPL(__imp__sub_83AD0940) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AD0954"))) PPC_WEAK_FUNC(sub_83AD0954);
PPC_FUNC_IMPL(__imp__sub_83AD0954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AD0958"))) PPC_WEAK_FUNC(sub_83AD0958);
PPC_FUNC_IMPL(__imp__sub_83AD0958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AD0960;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,31164
	ctx.r31.s64 = ctx.r11.s64 + 31164;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt 0x83ad09b8
	if (cr0.gt) goto loc_83AD09B8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ad0994
	if (!cr6.eq) goto loc_83AD0994;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x83ad09a8
	goto loc_83AD09A8;
loc_83AD0994:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83AD09A8:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x83ad0bdc
	goto loc_83AD0BDC;
loc_83AD09B8:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// ble cr6,0x83ad0adc
	if (!cr6.gt) goto loc_83AD0ADC;
loc_83AD09CC:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83ad0a0c
	if (cr6.eq) goto loc_83AD0A0C;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x83ad09f8
	if (!cr6.eq) goto loc_83AD09F8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_83AD09F8:
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_83AD0A0C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83ad0ac4
	if (cr6.eq) goto loc_83AD0AC4;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r7,r9,2,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1;
	// lwz r8,24(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// rlwinm r6,r8,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x1;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// ble cr6,0x83ad0a40
	if (!cr6.gt) goto loc_83AD0A40;
loc_83AD0A30:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ad0a90
	if (!cr6.eq) goto loc_83AD0A90;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x83ad0aa0
	goto loc_83AD0AA0;
loc_83AD0A40:
	// blt cr6,0x83ad0adc
	if (cr6.lt) goto loc_83AD0ADC;
	// rlwinm r7,r9,8,26,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0x3F;
	// rlwinm r6,r8,8,26,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0x3F;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// bgt cr6,0x83ad0a30
	if (cr6.gt) goto loc_83AD0A30;
	// blt cr6,0x83ad0adc
	if (cr6.lt) goto loc_83AD0ADC;
	// clrlwi r9,r9,12
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFF;
	// clrlwi r8,r8,12
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFFF;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bgt cr6,0x83ad0a30
	if (cr6.gt) goto loc_83AD0A30;
	// blt cr6,0x83ad0adc
	if (cr6.lt) goto loc_83AD0ADC;
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r8,20(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x83ad0adc
	if (cr6.eq) goto loc_83AD0ADC;
	// clrlwi. r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x83ad0adc
	if (cr0.eq) goto loc_83AD0ADC;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83ad0adc
	if (cr0.eq) goto loc_83AD0ADC;
	// b 0x83ad0a30
	goto loc_83AD0A30;
loc_83AD0A90:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83AD0AA0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, xer);
	// blt cr6,0x83ad09cc
	if (cr6.lt) goto loc_83AD09CC;
	// b 0x83ad0adc
	goto loc_83AD0ADC;
loc_83AD0AC4:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-18864
	ctx.r4.s64 = ctx.r11.s64 + -18864;
	// bl 0x831ea3f0
	ctx.lr = 0x83AD0AD4;
	sub_831EA3F0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AD0ADC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ad0af0
	if (!cr6.eq) goto loc_83AD0AF0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x83ad0b04
	goto loc_83AD0B04;
loc_83AD0AF0:
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83AD0B04:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// beq cr6,0x83ad0b54
	if (cr6.eq) goto loc_83AD0B54;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83ad0b30
	if (!cr6.eq) goto loc_83AD0B30;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x83ad0b44
	goto loc_83AD0B44;
loc_83AD0B30:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83AD0B44:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_83AD0B54:
	// addi r8,r26,1
	ctx.r8.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r8,r27
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, xer);
	// bge cr6,0x83ad0bdc
	if (!cr6.lt) goto loc_83AD0BDC;
	// subf r8,r8,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r8.s64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83AD0B68:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83ad0ba0
	if (cr6.eq) goto loc_83AD0BA0;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x83ad0b8c
	if (!cr6.eq) goto loc_83AD0B8C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_83AD0B8C:
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_83AD0BA0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ad0bb4
	if (!cr6.eq) goto loc_83AD0BB4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x83ad0bcc
	goto loc_83AD0BCC;
loc_83AD0BB4:
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83AD0BCC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bdnz 0x83ad0b68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AD0B68;
loc_83AD0BDC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AD0BE4"))) PPC_WEAK_FUNC(sub_83AD0BE4);
PPC_FUNC_IMPL(__imp__sub_83AD0BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AD0BE8"))) PPC_WEAK_FUNC(sub_83AD0BE8);
PPC_FUNC_IMPL(__imp__sub_83AD0BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,31164
	ctx.r11.s64 = ctx.r11.s64 + 31164;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x83ad0c24
	if (!cr6.eq) goto loc_83AD0C24;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83ad0c68
	if (!cr6.eq) goto loc_83AD0C68;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x83ad0c64
	goto loc_83AD0C64;
loc_83AD0C24:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83ad0c68
	if (cr0.eq) goto loc_83AD0C68;
loc_83AD0C2C:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// beq cr6,0x83ad0c44
	if (cr6.eq) goto loc_83AD0C44;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x83ad0c2c
	if (!cr0.eq) goto loc_83AD0C2C;
loc_83AD0C44:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83ad0c68
	if (cr6.eq) goto loc_83AD0C68;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x83ad0c68
	if (!cr6.eq) goto loc_83AD0C68;
loc_83AD0C64:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83AD0C68:
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// sth r8,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r8.u16);
	// blr 
	return;
}

