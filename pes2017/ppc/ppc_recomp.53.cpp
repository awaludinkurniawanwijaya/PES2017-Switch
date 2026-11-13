#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825D7F24"))) PPC_WEAK_FUNC(sub_825D7F24);
PPC_FUNC_IMPL(__imp__sub_825D7F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D7F28"))) PPC_WEAK_FUNC(sub_825D7F28);
PPC_FUNC_IMPL(__imp__sub_825D7F28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f13,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D7F78"))) PPC_WEAK_FUNC(sub_825D7F78);
PPC_FUNC_IMPL(__imp__sub_825D7F78) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825d802c
	if (cr6.eq) goto loc_825D802C;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825d8024
	if (cr6.eq) goto loc_825D8024;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837a5ea8
	ctx.lr = 0x825D7FAC;
	sub_837A5EA8(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f9,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x837a5d88
	ctx.lr = 0x825D8010;
	sub_837A5D88(ctx, base);
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
loc_825D8024:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837a5ea8
	ctx.lr = 0x825D802C;
	sub_837A5EA8(ctx, base);
loc_825D802C:
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

__attribute__((alias("__imp__sub_825D8040"))) PPC_WEAK_FUNC(sub_825D8040);
PPC_FUNC_IMPL(__imp__sub_825D8040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825D8048;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825d809c
	if (cr6.eq) goto loc_825D809C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825D8070;
	sub_82595150(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825d8090
	if (cr6.eq) goto loc_825D8090;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825D8090;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825D8090:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825D8098;
	sub_82595170(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_825D809C:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825d80dc
	if (cr6.eq) goto loc_825D80DC;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x825D80B0;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x825d80cc
	if (cr6.gt) goto loc_825D80CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825D80CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825D80CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r10.u8);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_825D80DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D80E4"))) PPC_WEAK_FUNC(sub_825D80E4);
PPC_FUNC_IMPL(__imp__sub_825D80E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D80E8"))) PPC_WEAK_FUNC(sub_825D80E8);
PPC_FUNC_IMPL(__imp__sub_825D80E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825d8154
	if (cr6.eq) goto loc_825D8154;
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// li r6,60
	ctx.r6.s64 = 60;
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// addi r11,r5,8
	ctx.r11.s64 = ctx.r5.s64 + 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw. r7,r7,r6
	ctx.r7.s32 = PPCDivide(ctx.r7.s32, ctx.r6.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x825d8154
	if (cr0.eq) goto loc_825D8154;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825D8120:
	// subf r3,r11,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r3,r3,r6
	ctx.r3.s32 = PPCDivide(ctx.r3.s32, ctx.r6.s32);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x825d815c
	if (!cr6.gt) goto loc_825D815C;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// cmpw cr6,r3,r4
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, xer);
	// beq cr6,0x825d8168
	if (cr6.eq) goto loc_825D8168;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,60
	ctx.r9.s64 = ctx.r9.s64 + 60;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x825d8120
	if (cr6.lt) goto loc_825D8120;
loc_825D8154:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825D815C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
loc_825D8168:
	// lbz r11,84(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 84);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// beq cr6,0x825d8180
	if (cr6.eq) goto loc_825D8180;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x825d8188
	if (!cr6.eq) goto loc_825D8188;
loc_825D8180:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,28(r5)
	PPC_STORE_U8(ctx.r5.u32 + 28, ctx.r11.u8);
loc_825D8188:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8190"))) PPC_WEAK_FUNC(sub_825D8190);
PPC_FUNC_IMPL(__imp__sub_825D8190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x825D8198;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r3,64
	ctx.r30.s64 = ctx.r3.s64 + 64;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825d81c4
	if (cr6.lt) goto loc_825D81C4;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x825D81C4;
	sub_825952B8(ctx, base);
loc_825D81C4:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// addi r31,r28,36
	ctx.r31.s64 = ctx.r28.s64 + 36;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825d81f8
	if (cr6.lt) goto loc_825D81F8;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x825D81F8;
	sub_825952B8(ctx, base);
loc_825D81F8:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825d8224
	if (cr6.lt) goto loc_825D8224;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x825D8224;
	sub_825952B8(ctx, base);
loc_825D8224:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D8238"))) PPC_WEAK_FUNC(sub_825D8238);
PPC_FUNC_IMPL(__imp__sub_825D8238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x825D8240;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stfs f31,8(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stfs f31,12(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stfs f31,16(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// lfs f30,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stfs f31,20(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stfs f31,28(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// stfs f31,24(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stfs f30,32(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stfs f31,36(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// stfs f31,40(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stfs f31,44(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stb r31,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r31.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r29,r3,20
	ctx.r29.s64 = ctx.r3.s64 + 20;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r30,36
	ctx.r28.s64 = ctx.r30.s64 + 36;
	// bl 0x82595718
	ctx.lr = 0x825D82EC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825d82fc
	if (cr6.eq) goto loc_825D82FC;
	// bl 0x837a5d00
	ctx.lr = 0x825D82F8;
	sub_837A5D00(ctx, base);
	// b 0x825d8300
	goto loc_825D8300;
loc_825D82FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825D8300:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825d8354
	if (cr6.eq) goto loc_825D8354;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_825D8314:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825d8314
	if (!cr6.eq) goto loc_825D8314;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x825D833C;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x837a5d28
	ctx.lr = 0x825D8348;
	sub_837A5D28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x837a5ea8
	ctx.lr = 0x825D8354;
	sub_837A5EA8(ctx, base);
loc_825D8354:
	// stfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f31,4(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f31,8(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f30,12(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// stfs f30,0(r28)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f30,4(r28)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f30,8(r28)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// bl 0x825d8190
	ctx.lr = 0x825D8378;
	sub_825D8190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D838C"))) PPC_WEAK_FUNC(sub_825D838C);
PPC_FUNC_IMPL(__imp__sub_825D838C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D8390"))) PPC_WEAK_FUNC(sub_825D8390);
PPC_FUNC_IMPL(__imp__sub_825D8390) {
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
	// bl 0x8353b230
	ctx.lr = 0x825D83A0;
	sub_8353B230(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
loc_825D83A8:
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// and r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 & ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825d83d8
	if (!cr6.eq) goto loc_825D83D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x825d83a8
	if (cr6.lt) goto loc_825D83A8;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_825D83D8:
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

__attribute__((alias("__imp__sub_825D83EC"))) PPC_WEAK_FUNC(sub_825D83EC);
PPC_FUNC_IMPL(__imp__sub_825D83EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D83F0"))) PPC_WEAK_FUNC(sub_825D83F0);
PPC_FUNC_IMPL(__imp__sub_825D83F0) {
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
	// bl 0x825ca6b8
	ctx.lr = 0x825D8408;
	sub_825CA6B8(ctx, base);
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// beq cr6,0x825d8430
	if (cr6.eq) goto loc_825D8430;
	// mulli r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 * 112;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
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
loc_825D8430:
	// li r3,24
	ctx.r3.s64 = 24;
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

__attribute__((alias("__imp__sub_825D8448"))) PPC_WEAK_FUNC(sub_825D8448);
PPC_FUNC_IMPL(__imp__sub_825D8448) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825D8478;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,1004(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// addi r3,r31,1004
	ctx.r3.s64 = ctx.r31.s64 + 1004;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x825D848C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,2104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2104);
	// addi r3,r31,2104
	ctx.r3.s64 = ctx.r31.s64 + 2104;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x825D84A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,3108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3108);
	// addi r3,r31,3108
	ctx.r3.s64 = ctx.r31.s64 + 3108;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D84B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,4200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4200);
	// addi r3,r31,4200
	ctx.r3.s64 = ctx.r31.s64 + 4200;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825D84C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,5208(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5208);
	// addi r3,r31,5208
	ctx.r3.s64 = ctx.r31.s64 + 5208;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x825D84DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,6308(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// addi r3,r31,6308
	ctx.r3.s64 = ctx.r31.s64 + 6308;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x825D84F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,7460(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7460);
	// addi r3,r31,7460
	ctx.r3.s64 = ctx.r31.s64 + 7460;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D8504;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,8476(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8476);
	// addi r3,r31,8476
	ctx.r3.s64 = ctx.r31.s64 + 8476;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825D8518;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,9544(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9544);
	// addi r3,r31,9544
	ctx.r3.s64 = ctx.r31.s64 + 9544;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x825D852C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,10596(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10596);
	// addi r3,r31,10596
	ctx.r3.s64 = ctx.r31.s64 + 10596;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x825D8540;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,11760(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11760);
	// addi r3,r31,11760
	ctx.r3.s64 = ctx.r31.s64 + 11760;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D8554;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,12920(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12920);
	// addi r3,r31,12920
	ctx.r3.s64 = ctx.r31.s64 + 12920;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825D8568;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,14068(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14068);
	// addi r3,r31,14068
	ctx.r3.s64 = ctx.r31.s64 + 14068;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x825D857C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,15240(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15240);
	// addi r3,r31,15240
	ctx.r3.s64 = ctx.r31.s64 + 15240;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x825D8590;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,16252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16252);
	// addi r3,r31,16252
	ctx.r3.s64 = ctx.r31.s64 + 16252;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D85A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,17256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17256);
	// addi r3,r31,17256
	ctx.r3.s64 = ctx.r31.s64 + 17256;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825D85B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,19356(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19356);
	// addi r3,r31,19356
	ctx.r3.s64 = ctx.r31.s64 + 19356;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x825D85CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,20360(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20360);
	// addi r3,r31,20360
	ctx.r3.s64 = ctx.r31.s64 + 20360;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x825D85E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,21416(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21416);
	// addi r3,r31,21416
	ctx.r3.s64 = ctx.r31.s64 + 21416;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D85F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,22436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22436);
	// addi r3,r31,22436
	ctx.r3.s64 = ctx.r31.s64 + 22436;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825D8608;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,24612(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24612);
	// addi r3,r31,24612
	ctx.r3.s64 = ctx.r31.s64 + 24612;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x825D861C;
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

__attribute__((alias("__imp__sub_825D8630"))) PPC_WEAK_FUNC(sub_825D8630);
PPC_FUNC_IMPL(__imp__sub_825D8630) {
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
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825d869c
	if (cr6.eq) goto loc_825D869C;
	// lis r31,-31778
	ctx.r31.s64 = -2082603008;
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825D8664;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825d86a8
	if (cr6.eq) goto loc_825D86A8;
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825D8684;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825d86a8
	if (cr6.eq) goto loc_825D86A8;
	// bl 0x830ff290
	ctx.lr = 0x825D8694;
	sub_830FF290(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825d86a4
	goto loc_825D86A4;
loc_825D869C:
	// bl 0x830ff290
	ctx.lr = 0x825D86A0;
	sub_830FF290(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
loc_825D86A4:
	// bl 0x830ff7d8
	ctx.lr = 0x825D86A8;
	sub_830FF7D8(ctx, base);
loc_825D86A8:
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

__attribute__((alias("__imp__sub_825D86BC"))) PPC_WEAK_FUNC(sub_825D86BC);
PPC_FUNC_IMPL(__imp__sub_825D86BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D86C0"))) PPC_WEAK_FUNC(sub_825D86C0);
PPC_FUNC_IMPL(__imp__sub_825D86C0) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x826178b0
	ctx.lr = 0x825D86DC;
	sub_826178B0(ctx, base);
	// addi r3,r31,1004
	ctx.r3.s64 = ctx.r31.s64 + 1004;
	// bl 0x826175f0
	ctx.lr = 0x825D86E4;
	sub_826175F0(ctx, base);
	// addi r3,r31,2104
	ctx.r3.s64 = ctx.r31.s64 + 2104;
	// bl 0x82616698
	ctx.lr = 0x825D86EC;
	sub_82616698(ctx, base);
	// addi r3,r31,3108
	ctx.r3.s64 = ctx.r31.s64 + 3108;
	// bl 0x82615698
	ctx.lr = 0x825D86F4;
	sub_82615698(ctx, base);
	// addi r3,r31,4200
	ctx.r3.s64 = ctx.r31.s64 + 4200;
	// bl 0x82614be8
	ctx.lr = 0x825D86FC;
	sub_82614BE8(ctx, base);
	// addi r3,r31,5208
	ctx.r3.s64 = ctx.r31.s64 + 5208;
	// bl 0x82613e10
	ctx.lr = 0x825D8704;
	sub_82613E10(ctx, base);
	// addi r3,r31,6308
	ctx.r3.s64 = ctx.r31.s64 + 6308;
	// bl 0x826132f8
	ctx.lr = 0x825D870C;
	sub_826132F8(ctx, base);
	// addi r3,r31,7460
	ctx.r3.s64 = ctx.r31.s64 + 7460;
	// bl 0x82612870
	ctx.lr = 0x825D8714;
	sub_82612870(ctx, base);
	// addi r3,r31,8476
	ctx.r3.s64 = ctx.r31.s64 + 8476;
	// bl 0x826117a8
	ctx.lr = 0x825D871C;
	sub_826117A8(ctx, base);
	// addi r3,r31,9544
	ctx.r3.s64 = ctx.r31.s64 + 9544;
	// bl 0x82610b60
	ctx.lr = 0x825D8724;
	sub_82610B60(ctx, base);
	// addi r3,r31,10596
	ctx.r3.s64 = ctx.r31.s64 + 10596;
	// bl 0x826104d0
	ctx.lr = 0x825D872C;
	sub_826104D0(ctx, base);
	// addi r3,r31,11760
	ctx.r3.s64 = ctx.r31.s64 + 11760;
	// bl 0x8260fb18
	ctx.lr = 0x825D8734;
	sub_8260FB18(ctx, base);
	// addi r3,r31,12920
	ctx.r3.s64 = ctx.r31.s64 + 12920;
	// bl 0x8260f2b8
	ctx.lr = 0x825D873C;
	sub_8260F2B8(ctx, base);
	// addi r3,r31,14068
	ctx.r3.s64 = ctx.r31.s64 + 14068;
	// bl 0x8260e280
	ctx.lr = 0x825D8744;
	sub_8260E280(ctx, base);
	// addi r3,r31,15240
	ctx.r3.s64 = ctx.r31.s64 + 15240;
	// bl 0x8260df40
	ctx.lr = 0x825D874C;
	sub_8260DF40(ctx, base);
	// addi r3,r31,16252
	ctx.r3.s64 = ctx.r31.s64 + 16252;
	// bl 0x8260cdd8
	ctx.lr = 0x825D8754;
	sub_8260CDD8(ctx, base);
	// addi r3,r31,17256
	ctx.r3.s64 = ctx.r31.s64 + 17256;
	// bl 0x8260c4d8
	ctx.lr = 0x825D875C;
	sub_8260C4D8(ctx, base);
	// addi r3,r31,18332
	ctx.r3.s64 = ctx.r31.s64 + 18332;
	// bl 0x8260b9b8
	ctx.lr = 0x825D8764;
	sub_8260B9B8(ctx, base);
	// addi r3,r31,19356
	ctx.r3.s64 = ctx.r31.s64 + 19356;
	// bl 0x8260ae00
	ctx.lr = 0x825D876C;
	sub_8260AE00(ctx, base);
	// addi r3,r31,20360
	ctx.r3.s64 = ctx.r31.s64 + 20360;
	// bl 0x8260a138
	ctx.lr = 0x825D8774;
	sub_8260A138(ctx, base);
	// addi r3,r31,21416
	ctx.r3.s64 = ctx.r31.s64 + 21416;
	// bl 0x82609b80
	ctx.lr = 0x825D877C;
	sub_82609B80(ctx, base);
	// addi r3,r31,22436
	ctx.r3.s64 = ctx.r31.s64 + 22436;
	// bl 0x82608f30
	ctx.lr = 0x825D8784;
	sub_82608F30(ctx, base);
	// addi r3,r31,23596
	ctx.r3.s64 = ctx.r31.s64 + 23596;
	// bl 0x82608210
	ctx.lr = 0x825D878C;
	sub_82608210(ctx, base);
	// addi r3,r31,24612
	ctx.r3.s64 = ctx.r31.s64 + 24612;
	// bl 0x82607c30
	ctx.lr = 0x825D8794;
	sub_82607C30(ctx, base);
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

__attribute__((alias("__imp__sub_825D87AC"))) PPC_WEAK_FUNC(sub_825D87AC);
PPC_FUNC_IMPL(__imp__sub_825D87AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D87B0"))) PPC_WEAK_FUNC(sub_825D87B0);
PPC_FUNC_IMPL(__imp__sub_825D87B0) {
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
	// addi r3,r3,24612
	ctx.r3.s64 = ctx.r3.s64 + 24612;
	// bl 0x82607c98
	ctx.lr = 0x825D87CC;
	sub_82607C98(ctx, base);
	// addi r3,r31,23596
	ctx.r3.s64 = ctx.r31.s64 + 23596;
	// bl 0x82608298
	ctx.lr = 0x825D87D4;
	sub_82608298(ctx, base);
	// addi r3,r31,22436
	ctx.r3.s64 = ctx.r31.s64 + 22436;
	// bl 0x82608fd0
	ctx.lr = 0x825D87DC;
	sub_82608FD0(ctx, base);
	// addi r3,r31,21416
	ctx.r3.s64 = ctx.r31.s64 + 21416;
	// bl 0x82609c18
	ctx.lr = 0x825D87E4;
	sub_82609C18(ctx, base);
	// addi r3,r31,20360
	ctx.r3.s64 = ctx.r31.s64 + 20360;
	// bl 0x8260a1b8
	ctx.lr = 0x825D87EC;
	sub_8260A1B8(ctx, base);
	// addi r3,r31,19356
	ctx.r3.s64 = ctx.r31.s64 + 19356;
	// bl 0x8260ae50
	ctx.lr = 0x825D87F4;
	sub_8260AE50(ctx, base);
	// addi r3,r31,18332
	ctx.r3.s64 = ctx.r31.s64 + 18332;
	// bl 0x8260ba40
	ctx.lr = 0x825D87FC;
	sub_8260BA40(ctx, base);
	// addi r3,r31,17256
	ctx.r3.s64 = ctx.r31.s64 + 17256;
	// bl 0x8260c550
	ctx.lr = 0x825D8804;
	sub_8260C550(ctx, base);
	// addi r3,r31,16252
	ctx.r3.s64 = ctx.r31.s64 + 16252;
	// bl 0x8260ce30
	ctx.lr = 0x825D880C;
	sub_8260CE30(ctx, base);
	// addi r3,r31,15240
	ctx.r3.s64 = ctx.r31.s64 + 15240;
	// bl 0x8260d408
	ctx.lr = 0x825D8814;
	sub_8260D408(ctx, base);
	// addi r3,r31,14068
	ctx.r3.s64 = ctx.r31.s64 + 14068;
	// bl 0x8260e880
	ctx.lr = 0x825D881C;
	sub_8260E880(ctx, base);
	// addi r3,r31,12920
	ctx.r3.s64 = ctx.r31.s64 + 12920;
	// bl 0x8260f330
	ctx.lr = 0x825D8824;
	sub_8260F330(ctx, base);
	// addi r3,r31,11760
	ctx.r3.s64 = ctx.r31.s64 + 11760;
	// bl 0x8260fb78
	ctx.lr = 0x825D882C;
	sub_8260FB78(ctx, base);
	// addi r3,r31,10596
	ctx.r3.s64 = ctx.r31.s64 + 10596;
	// bl 0x82610560
	ctx.lr = 0x825D8834;
	sub_82610560(ctx, base);
	// addi r3,r31,9544
	ctx.r3.s64 = ctx.r31.s64 + 9544;
	// bl 0x82610c08
	ctx.lr = 0x825D883C;
	sub_82610C08(ctx, base);
	// addi r3,r31,8476
	ctx.r3.s64 = ctx.r31.s64 + 8476;
	// bl 0x826117f0
	ctx.lr = 0x825D8844;
	sub_826117F0(ctx, base);
	// addi r3,r31,7460
	ctx.r3.s64 = ctx.r31.s64 + 7460;
	// bl 0x82612910
	ctx.lr = 0x825D884C;
	sub_82612910(ctx, base);
	// addi r3,r31,6308
	ctx.r3.s64 = ctx.r31.s64 + 6308;
	// bl 0x82613370
	ctx.lr = 0x825D8854;
	sub_82613370(ctx, base);
	// addi r3,r31,5208
	ctx.r3.s64 = ctx.r31.s64 + 5208;
	// bl 0x82613e78
	ctx.lr = 0x825D885C;
	sub_82613E78(ctx, base);
	// addi r3,r31,4200
	ctx.r3.s64 = ctx.r31.s64 + 4200;
	// bl 0x82614c50
	ctx.lr = 0x825D8864;
	sub_82614C50(ctx, base);
	// addi r3,r31,3108
	ctx.r3.s64 = ctx.r31.s64 + 3108;
	// bl 0x82615700
	ctx.lr = 0x825D886C;
	sub_82615700(ctx, base);
	// addi r3,r31,2104
	ctx.r3.s64 = ctx.r31.s64 + 2104;
	// bl 0x826166e0
	ctx.lr = 0x825D8874;
	sub_826166E0(ctx, base);
	// addi r3,r31,1004
	ctx.r3.s64 = ctx.r31.s64 + 1004;
	// bl 0x82616f98
	ctx.lr = 0x825D887C;
	sub_82616F98(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x826178f0
	ctx.lr = 0x825D8884;
	sub_826178F0(ctx, base);
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

__attribute__((alias("__imp__sub_825D8898"))) PPC_WEAK_FUNC(sub_825D8898);
PPC_FUNC_IMPL(__imp__sub_825D8898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 308);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// b 0x826640f8
	sub_826640F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D88AC"))) PPC_WEAK_FUNC(sub_825D88AC);
PPC_FUNC_IMPL(__imp__sub_825D88AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D88B0"))) PPC_WEAK_FUNC(sub_825D88B0);
PPC_FUNC_IMPL(__imp__sub_825D88B0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,872(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 872);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 872, ctx.r11.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x83740868
	ctx.lr = 0x825D88DC;
	sub_83740868(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f12,f1,f31
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bgt cr6,0x825d88fc
	if (cr6.gt) goto loc_825D88FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825D88FC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8914"))) PPC_WEAK_FUNC(sub_825D8914);
PPC_FUNC_IMPL(__imp__sub_825D8914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D8918"))) PPC_WEAK_FUNC(sub_825D8918);
PPC_FUNC_IMPL(__imp__sub_825D8918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,35
	cr6.compare<int32_t>(ctx.r4.s32, 35, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r4,36
	cr6.compare<int32_t>(ctx.r4.s32, 36, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,861(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 861);
	// addi r11,r11,195
	ctx.r11.s64 = ctx.r11.s64 + 195;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u32);
	// lbz r11,861(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 861);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r9,861(r3)
	PPC_STORE_U8(ctx.r3.u32 + 861, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8948"))) PPC_WEAK_FUNC(sub_825D8948);
PPC_FUNC_IMPL(__imp__sub_825D8948) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,64832
	ctx.r9.u64 = ctx.r11.u64 | 64832;
	// ori r8,r10,64828
	ctx.r8.u64 = ctx.r10.u64 | 64828;
	// addi r3,r3,3736
	ctx.r3.s64 = ctx.r3.s64 + 3736;
	// stwx r5,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u32);
	// stwx r4,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u32);
	// bl 0x82665ae0
	ctx.lr = 0x825D897C;
	sub_82665AE0(ctx, base);
	// addi r3,r31,3476
	ctx.r3.s64 = ctx.r31.s64 + 3476;
	// bl 0x82a199d0
	ctx.lr = 0x825D8984;
	sub_82A199D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,7084(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7084, ctx.r11.u8);
	// stb r11,7085(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7085, ctx.r11.u8);
	// stb r11,7086(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7086, ctx.r11.u8);
	// stb r11,7087(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7087, ctx.r11.u8);
	// stb r11,3354(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3354, ctx.r11.u8);
	// stb r11,3368(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3368, ctx.r11.u8);
	// stb r11,3369(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3369, ctx.r11.u8);
	// stb r11,2828(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2828, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_825D89BC"))) PPC_WEAK_FUNC(sub_825D89BC);
PPC_FUNC_IMPL(__imp__sub_825D89BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D89C0"))) PPC_WEAK_FUNC(sub_825D89C0);
PPC_FUNC_IMPL(__imp__sub_825D89C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,64832
	ctx.r9.u64 = ctx.r11.u64 | 64832;
	// ori r8,r10,64828
	ctx.r8.u64 = ctx.r10.u64 | 64828;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r11,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D89E0"))) PPC_WEAK_FUNC(sub_825D89E0);
PPC_FUNC_IMPL(__imp__sub_825D89E0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-56
	ctx.r11.s64 = ctx.r11.s64 + -56;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x825d8a60
	if (cr6.gt) goto loc_825D8A60;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x825d8a34
	if (cr6.eq) goto loc_825D8A34;
	// bdz 0x825d8a24
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_825D8A24;
	// bdz 0x825d8a2c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_825D8A2C;
	// bdz 0x825d8a40
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_825D8A40;
	// bdz 0x825d8a4c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_825D8A4C;
	// b 0x825d8a58
	goto loc_825D8A58;
loc_825D8A24:
	// bl 0x82618f28
	ctx.lr = 0x825D8A28;
	sub_82618F28(ctx, base);
	// b 0x825d8a60
	goto loc_825D8A60;
loc_825D8A2C:
	// bl 0x82619430
	ctx.lr = 0x825D8A30;
	sub_82619430(ctx, base);
	// b 0x825d8a60
	goto loc_825D8A60;
loc_825D8A34:
	// bl 0x826187f8
	ctx.lr = 0x825D8A38;
	sub_826187F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x825d8a60
	goto loc_825D8A60;
loc_825D8A40:
	// bl 0x82618a10
	ctx.lr = 0x825D8A44;
	sub_82618A10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x825d8a60
	goto loc_825D8A60;
loc_825D8A4C:
	// bl 0x82617d88
	ctx.lr = 0x825D8A50;
	sub_82617D88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x825d8a60
	goto loc_825D8A60;
loc_825D8A58:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82619948
	ctx.lr = 0x825D8A60;
	sub_82619948(ctx, base);
loc_825D8A60:
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

__attribute__((alias("__imp__sub_825D8A78"))) PPC_WEAK_FUNC(sub_825D8A78);
PPC_FUNC_IMPL(__imp__sub_825D8A78) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r11,r11,-62
	ctx.r11.s64 = ctx.r11.s64 + -62;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x825d8b04
	if (cr6.gt) goto loc_825D8B04;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x825d8acc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825D8ACC;
	// bdzf 4*cr6+eq,0x825d8ad4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825D8AD4;
	// bdzf 4*cr6+eq,0x825d8adc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825D8ADC;
	// bdzf 4*cr6+eq,0x825d8ae4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825D8AE4;
	// bdzf 4*cr6+eq,0x825d8aec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825D8AEC;
	// bdzf 4*cr6+eq,0x825d8af4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825D8AF4;
	// bne cr6,0x825d8afc
	if (!cr6.eq) goto loc_825D8AFC;
	// bl 0x825e93c0
	ctx.lr = 0x825D8AC8;
	sub_825E93C0(ctx, base);
	// b 0x825d8b00
	goto loc_825D8B00;
loc_825D8ACC:
	// bl 0x825e9688
	ctx.lr = 0x825D8AD0;
	sub_825E9688(ctx, base);
	// b 0x825d8b04
	goto loc_825D8B04;
loc_825D8AD4:
	// bl 0x825e9868
	ctx.lr = 0x825D8AD8;
	sub_825E9868(ctx, base);
	// b 0x825d8b00
	goto loc_825D8B00;
loc_825D8ADC:
	// bl 0x825eafb8
	ctx.lr = 0x825D8AE0;
	sub_825EAFB8(ctx, base);
	// b 0x825d8b00
	goto loc_825D8B00;
loc_825D8AE4:
	// bl 0x825ea328
	ctx.lr = 0x825D8AE8;
	sub_825EA328(ctx, base);
	// b 0x825d8b00
	goto loc_825D8B00;
loc_825D8AEC:
	// bl 0x825ea980
	ctx.lr = 0x825D8AF0;
	sub_825EA980(ctx, base);
	// b 0x825d8b04
	goto loc_825D8B04;
loc_825D8AF4:
	// bl 0x825e9430
	ctx.lr = 0x825D8AF8;
	sub_825E9430(ctx, base);
	// b 0x825d8b04
	goto loc_825D8B04;
loc_825D8AFC:
	// bl 0x825e97c0
	ctx.lr = 0x825D8B00;
	sub_825E97C0(ctx, base);
loc_825D8B00:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_825D8B04:
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

__attribute__((alias("__imp__sub_825D8B1C"))) PPC_WEAK_FUNC(sub_825D8B1C);
PPC_FUNC_IMPL(__imp__sub_825D8B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D8B20"))) PPC_WEAK_FUNC(sub_825D8B20);
PPC_FUNC_IMPL(__imp__sub_825D8B20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8032
	ctx.r3.s64 = ctx.r3.s64 + 8032;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8B28"))) PPC_WEAK_FUNC(sub_825D8B28);
PPC_FUNC_IMPL(__imp__sub_825D8B28) {
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
	// lwz r11,872(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 872);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 872, ctx.r11.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x83740868
	ctx.lr = 0x825D8B4C;
	sub_83740868(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,-9984(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9984);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bgt cr6,0x825d8b74
	if (cr6.gt) goto loc_825D8B74;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825D8B74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_825D8B90"))) PPC_WEAK_FUNC(sub_825D8B90);
PPC_FUNC_IMPL(__imp__sub_825D8B90) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825D8BC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825d8c3c
	if (cr6.eq) goto loc_825D8C3C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825d8c3c
	if (cr6.eq) goto loc_825D8C3C;
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,51
	ctx.r4.u64 = ctx.r4.u64 | 51;
	// bl 0x83535150
	ctx.lr = 0x825D8BF4;
	sub_83535150(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// bl 0x83535150
	ctx.lr = 0x825D8C14;
	sub_83535150(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
	// bl 0x83535150
	ctx.lr = 0x825D8C34;
	sub_83535150(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825d8630
	ctx.lr = 0x825D8C3C;
	sub_825D8630(ctx, base);
loc_825D8C3C:
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

__attribute__((alias("__imp__sub_825D8C54"))) PPC_WEAK_FUNC(sub_825D8C54);
PPC_FUNC_IMPL(__imp__sub_825D8C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D8C58"))) PPC_WEAK_FUNC(sub_825D8C58);
PPC_FUNC_IMPL(__imp__sub_825D8C58) {
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
	// lbz r11,860(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 860);
	// addi r11,r11,195
	ctx.r11.s64 = ctx.r11.s64 + 195;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,62
	cr6.compare<int32_t>(ctx.r11.s32, 62, xer);
	// blt cr6,0x825d8c98
	if (cr6.lt) goto loc_825D8C98;
	// cmpwi cr6,r11,69
	cr6.compare<int32_t>(ctx.r11.s32, 69, xer);
	// bgt cr6,0x825d8c98
	if (cr6.gt) goto loc_825D8C98;
	// bl 0x825e94d0
	ctx.lr = 0x825D8C88;
	sub_825E94D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825D8C98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825D8C98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8CA8"))) PPC_WEAK_FUNC(sub_825D8CA8);
PPC_FUNC_IMPL(__imp__sub_825D8CA8) {
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
	// lbz r11,860(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 860);
	// addi r11,r11,195
	ctx.r11.s64 = ctx.r11.s64 + 195;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,62
	cr6.compare<int32_t>(ctx.r11.s32, 62, xer);
	// blt cr6,0x825d8ce8
	if (cr6.lt) goto loc_825D8CE8;
	// cmpwi cr6,r11,69
	cr6.compare<int32_t>(ctx.r11.s32, 69, xer);
	// bgt cr6,0x825d8ce8
	if (cr6.gt) goto loc_825D8CE8;
	// bl 0x825e94d0
	ctx.lr = 0x825D8CD8;
	sub_825E94D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825D8CE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825D8CE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8CF8"))) PPC_WEAK_FUNC(sub_825D8CF8);
PPC_FUNC_IMPL(__imp__sub_825D8CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-712
	ctx.r11.s64 = ctx.r11.s64 + -712;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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

__attribute__((alias("__imp__sub_825D8D20"))) PPC_WEAK_FUNC(sub_825D8D20);
PPC_FUNC_IMPL(__imp__sub_825D8D20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8D24"))) PPC_WEAK_FUNC(sub_825D8D24);
PPC_FUNC_IMPL(__imp__sub_825D8D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D8D28"))) PPC_WEAK_FUNC(sub_825D8D28);
PPC_FUNC_IMPL(__imp__sub_825D8D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,64824
	ctx.r10.u64 = ctx.r11.u64 | 64824;
	// lwzx r3,r3,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837f99c0
	sub_837F99C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D8D40"))) PPC_WEAK_FUNC(sub_825D8D40);
PPC_FUNC_IMPL(__imp__sub_825D8D40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8D44"))) PPC_WEAK_FUNC(sub_825D8D44);
PPC_FUNC_IMPL(__imp__sub_825D8D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D8D48"))) PPC_WEAK_FUNC(sub_825D8D48);
PPC_FUNC_IMPL(__imp__sub_825D8D48) {
	PPC_FUNC_PROLOGUE();
	// stb r4,7914(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7914, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8D50"))) PPC_WEAK_FUNC(sub_825D8D50);
PPC_FUNC_IMPL(__imp__sub_825D8D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x825D8D58;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825d8e90
	if (cr6.eq) goto loc_825D8E90;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825d8e90
	if (cr6.eq) goto loc_825D8E90;
	// lbz r11,18(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 18);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x825d8e90
	if (!cr6.eq) goto loc_825D8E90;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82a16ee8
	ctx.lr = 0x825D8D94;
	sub_82A16EE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825d8e90
	if (!cr6.eq) goto loc_825D8E90;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835d31a8
	ctx.lr = 0x825D8DA8;
	sub_835D31A8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x825d8e90
	if (!cr6.eq) goto loc_825D8E90;
	// lwz r11,4548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4548);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x825d8e90
	if (!cr6.eq) goto loc_825D8E90;
	// lwz r30,4456(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4456);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x825d8e90
	if (!cr6.gt) goto loc_825D8E90;
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(ctx.r30.s32, 7, xer);
	// bgt cr6,0x825d8e90
	if (cr6.gt) goto loc_825D8E90;
	// addis r27,r28,1
	ctx.r27.s64 = ctx.r28.s64 + 65536;
	// addi r27,r27,-720
	ctx.r27.s64 = ctx.r27.s64 + -720;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825d8e90
	if (cr6.eq) goto loc_825D8E90;
	// lfs f31,4464(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4464);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a29110
	ctx.lr = 0x825D8DF0;
	sub_82A29110(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a29130
	ctx.lr = 0x825D8DF8;
	sub_82A29130(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r28,7636
	ctx.r3.s64 = ctx.r28.s64 + 7636;
	// bl 0x82a5c5b0
	ctx.lr = 0x825D8E08;
	sub_82A5C5B0(ctx, base);
	// cmplwi cr6,r3,30
	cr6.compare<uint32_t>(ctx.r3.u32, 30, xer);
	// bge cr6,0x825d8e88
	if (!cr6.lt) goto loc_825D8E88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a16f00
	ctx.lr = 0x825D8E1C;
	sub_82A16F00(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x825d8e48
	if (cr6.gt) goto loc_825D8E48;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x825d8e48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825D8E48;
	// bdzf 4*cr6+eq,0x825d8e48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825D8E48;
	// bdzf 4*cr6+eq,0x825d8e48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825D8E48;
	// bdzf 4*cr6+eq,0x825d8e48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825D8E48;
	// bdzf 4*cr6+eq,0x825d8e48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825D8E48;
	// bne cr6,0x825d8e48
	if (!cr6.eq) goto loc_825D8E48;
loc_825D8E48:
	// bl 0x8378b870
	ctx.lr = 0x825D8E4C;
	sub_8378B870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825d8e88
	if (cr6.eq) goto loc_825D8E88;
	// bl 0x8378b870
	ctx.lr = 0x825D8E58;
	sub_8378B870(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stb r11,2348(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2348, ctx.r11.u8);
	// beq cr6,0x825d8e88
	if (cr6.eq) goto loc_825D8E88;
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,57
	ctx.r4.u64 = ctx.r4.u64 | 57;
	// bl 0x83535150
	ctx.lr = 0x825D8E88;
	sub_83535150(ctx, base);
loc_825D8E88:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
loc_825D8E90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D8E9C"))) PPC_WEAK_FUNC(sub_825D8E9C);
PPC_FUNC_IMPL(__imp__sub_825D8E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D8EA0"))) PPC_WEAK_FUNC(sub_825D8EA0);
PPC_FUNC_IMPL(__imp__sub_825D8EA0) {
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
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825d8ef8
	if (cr6.eq) goto loc_825D8EF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a225d0
	ctx.lr = 0x825D8EC8;
	sub_82A225D0(ctx, base);
	// addis r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 196608;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r3,-29136
	ctx.r3.s64 = ctx.r3.s64 + -29136;
	// bl 0x82919698
	ctx.lr = 0x825D8ED8;
	sub_82919698(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a225d0
	ctx.lr = 0x825D8EE4;
	sub_82A225D0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82919698
	ctx.lr = 0x825D8EEC;
	sub_82919698(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// bl 0x837a0b78
	ctx.lr = 0x825D8EF8;
	sub_837A0B78(ctx, base);
loc_825D8EF8:
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

__attribute__((alias("__imp__sub_825D8F10"))) PPC_WEAK_FUNC(sub_825D8F10);
PPC_FUNC_IMPL(__imp__sub_825D8F10) {
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
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r4,776(r3)
	PPC_STORE_U32(ctx.r3.u32 + 776, ctx.r4.u32);
	// addi r11,r3,780
	ctx.r11.s64 = ctx.r3.s64 + 780;
	// li r9,72
	ctx.r9.s64 = 72;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825D8F3C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x825d8f3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D8F3C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,7144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7144, ctx.r8.u32);
	// stb r31,861(r3)
	PPC_STORE_U8(ctx.r3.u32 + 861, ctx.r31.u8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r31,860(r3)
	PPC_STORE_U8(ctx.r3.u32 + 860, ctx.r31.u8);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stw r31,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r31.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stw r31,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r31.u32);
	// stw r31,872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 872, ctx.r31.u32);
	// addi r10,r3,7668
	ctx.r10.s64 = ctx.r3.s64 + 7668;
	// stb r31,862(r3)
	PPC_STORE_U8(ctx.r3.u32 + 862, ctx.r31.u8);
	// addi r9,r3,7670
	ctx.r9.s64 = ctx.r3.s64 + 7670;
	// stb r31,863(r3)
	PPC_STORE_U8(ctx.r3.u32 + 863, ctx.r31.u8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stb r31,864(r3)
	PPC_STORE_U8(ctx.r3.u32 + 864, ctx.r31.u8);
	// stw r31,868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 868, ctx.r31.u32);
	// stb r7,876(r3)
	PPC_STORE_U8(ctx.r3.u32 + 876, ctx.r7.u8);
	// stb r31,7608(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7608, ctx.r31.u8);
	// stb r31,7609(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7609, ctx.r31.u8);
	// stw r31,7612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7612, ctx.r31.u32);
	// stb r31,7616(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7616, ctx.r31.u8);
	// stb r31,7617(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7617, ctx.r31.u8);
	// stb r31,7618(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7618, ctx.r31.u8);
	// stb r31,7619(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7619, ctx.r31.u8);
	// stb r31,7620(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7620, ctx.r31.u8);
	// stb r31,7621(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7621, ctx.r31.u8);
	// stw r31,7624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7624, ctx.r31.u32);
	// stw r31,7628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7628, ctx.r31.u32);
	// stw r31,7632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7632, ctx.r31.u32);
	// stw r31,7140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7140, ctx.r31.u32);
	// stw r31,7148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7148, ctx.r31.u32);
	// stw r31,7152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7152, ctx.r31.u32);
	// stw r31,7156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7156, ctx.r31.u32);
	// stb r31,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r31.u8);
	// stw r31,7700(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7700, ctx.r31.u32);
loc_825D8FE4:
	// stbx r31,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u8);
	// stbx r31,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825d8fe4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D8FE4;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r31,7672(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7672, ctx.r31.u8);
	// li r11,22
	ctx.r11.s64 = 22;
	// sth r31,7674(r3)
	PPC_STORE_U16(ctx.r3.u32 + 7674, ctx.r31.u16);
	// stw r10,3356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3356, ctx.r10.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,3360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3360, ctx.r10.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stb r31,7676(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7676, ctx.r31.u8);
	// li r7,5
	ctx.r7.s64 = 5;
	// stb r31,7677(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7677, ctx.r31.u8);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stb r31,3320(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3320, ctx.r31.u8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r9,3324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3324, ctx.r9.u32);
	// stw r8,3364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3364, ctx.r8.u32);
	// stb r31,3370(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3370, ctx.r31.u8);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825D903C:
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825d903c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825D903C;
	// stw r9,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// stw r31,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r31.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r31,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r31.u32);
	// addi r30,r30,-712
	ctx.r30.s64 = ctx.r30.s64 + -712;
	// stw r8,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r8.u32);
	// ori r10,r11,64816
	ctx.r10.u64 = ctx.r11.u64 | 64816;
	// stb r31,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r31.u8);
	// stb r31,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r31.u8);
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// stb r31,110(r3)
	PPC_STORE_U8(ctx.r3.u32 + 110, ctx.r31.u8);
	// stb r31,111(r3)
	PPC_STORE_U8(ctx.r3.u32 + 111, ctx.r31.u8);
	// stb r31,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r31.u8);
	// stfs f0,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stw r9,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// stw r31,7916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7916, ctx.r31.u32);
	// stbx r31,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r31.u8);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825d90dc
	if (cr6.eq) goto loc_825D90DC;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825D90B0;
	sub_82595150(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825d90d0
	if (cr6.eq) goto loc_825D90D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825D90D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825D90D0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825D90D8;
	sub_82595170(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_825D90DC:
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

__attribute__((alias("__imp__sub_825D90F4"))) PPC_WEAK_FUNC(sub_825D90F4);
PPC_FUNC_IMPL(__imp__sub_825D90F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D90F8"))) PPC_WEAK_FUNC(sub_825D90F8);
PPC_FUNC_IMPL(__imp__sub_825D90F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825D9100;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,2783(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2783);
	// addi r29,r3,2756
	ctx.r29.s64 = ctx.r3.s64 + 2756;
	// lwz r4,2744(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2744);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82a198b0
	ctx.lr = 0x825D9124;
	sub_82A198B0(ctx, base);
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r3,472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825d914c
	if (cr6.eq) goto loc_825D914C;
	// bl 0x82a47d40
	ctx.lr = 0x825D913C;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825d91fc
	if (!cr6.eq) goto loc_825D91FC;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
loc_825D914C:
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825d9168
	if (cr6.eq) goto loc_825D9168;
	// bl 0x82da1d10
	ctx.lr = 0x825D915C;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825d91fc
	if (!cr6.eq) goto loc_825D91FC;
loc_825D9168:
	// bl 0x83572958
	ctx.lr = 0x825D916C;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825d91fc
	if (!cr6.eq) goto loc_825D91FC;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// addi r30,r31,2740
	ctx.r30.s64 = ctx.r31.s64 + 2740;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r29,312(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// bl 0x82a29340
	ctx.lr = 0x825D918C;
	sub_82A29340(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825d91c4
	if (cr6.eq) goto loc_825D91C4;
	// lfs f0,2752(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2752);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a29040
	ctx.lr = 0x825D91B0;
	sub_82A29040(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a29208
	ctx.lr = 0x825D91B8;
	sub_82A29208(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a46f90
	ctx.lr = 0x825D91C4;
	sub_82A46F90(ctx, base);
loc_825D91C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82dcb990
	ctx.lr = 0x825D91D0;
	sub_82DCB990(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825d91fc
	if (cr6.eq) goto loc_825D91FC;
	// lfs f0,2748(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2748);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a28fb8
	ctx.lr = 0x825D91F0;
	sub_82A28FB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a19888
	ctx.lr = 0x825D91FC;
	sub_82A19888(ctx, base);
loc_825D91FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D9204"))) PPC_WEAK_FUNC(sub_825D9204);
PPC_FUNC_IMPL(__imp__sub_825D9204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D9208"))) PPC_WEAK_FUNC(sub_825D9208);
PPC_FUNC_IMPL(__imp__sub_825D9208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825D9210;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r5.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lbz r11,861(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 861);
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r27,r7,24
	ctx.r27.u64 = ctx.r7.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r28,70
	ctx.r28.s64 = 70;
	// stwx r10,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// lbz r11,861(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// stb r11,861(r3)
	PPC_STORE_U8(ctx.r3.u32 + 861, ctx.r11.u8);
	// beq cr6,0x825d9290
	if (cr6.eq) goto loc_825D9290;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// lbz r11,861(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r3)
	PPC_STORE_U8(ctx.r3.u32 + 861, ctx.r11.u8);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r28.u32);
	// lbz r11,861(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 861);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stb r4,861(r3)
	PPC_STORE_U8(ctx.r3.u32 + 861, ctx.r4.u8);
loc_825D9290:
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r3,472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825d92c0
	if (cr6.eq) goto loc_825D92C0;
	// bl 0x82a47d40
	ctx.lr = 0x825D92A8;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825d92c0
	if (cr6.eq) goto loc_825D92C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2740
	ctx.r3.s64 = ctx.r31.s64 + 2740;
	// bl 0x825e9338
	ctx.lr = 0x825D92C0;
	sub_825E9338(ctx, base);
loc_825D92C0:
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r11,5388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5388);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x825d938c
	if (cr6.eq) goto loc_825D938C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x825d936c
	if (cr6.eq) goto loc_825D936C;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x825d9338
	if (cr6.eq) goto loc_825D9338;
	// lwz r11,5356(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5356);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x825d9330
	if (!cr6.gt) goto loc_825D9330;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// ble cr6,0x825d9308
	if (!cr6.gt) goto loc_825D9308;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x825d9330
	if (!cr6.eq) goto loc_825D9330;
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x825d9370
	goto loc_825D9370;
loc_825D9308:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x825d9328
	if (cr6.eq) goto loc_825D9328;
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x825d937c
	goto loc_825D937C;
loc_825D9328:
	// li r10,9
	ctx.r10.s64 = 9;
	// b 0x825d937c
	goto loc_825D937C;
loc_825D9330:
	// li r10,9
	ctx.r10.s64 = 9;
	// b 0x825d9370
	goto loc_825D9370;
loc_825D9338:
	// lbz r11,5437(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5437);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825d936c
	if (!cr6.eq) goto loc_825D936C;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825d9358
	if (cr6.eq) goto loc_825D9358;
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x825d9370
	goto loc_825D9370;
loc_825D9358:
	// lwz r11,5408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5408);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x825d938c
	if (cr6.eq) goto loc_825D938C;
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x825d9370
	goto loc_825D9370;
loc_825D936C:
	// li r10,4
	ctx.r10.s64 = 4;
loc_825D9370:
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_825D937C:
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
loc_825D938C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x825d93b0
	if (!cr6.eq) goto loc_825D93B0;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,195
	ctx.r11.s64 = ctx.r11.s64 + 195;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r28.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r9,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r9.u8);
loc_825D93B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D93B8"))) PPC_WEAK_FUNC(sub_825D93B8);
PPC_FUNC_IMPL(__imp__sub_825D93B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825D93C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825D93D4;
	sub_825D8F10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2740
	ctx.r3.s64 = ctx.r31.s64 + 2740;
	// bl 0x825e9338
	ctx.lr = 0x825D93E0;
	sub_825E9338(ctx, base);
	// lis r29,-31778
	ctx.r29.s64 = -2082603008;
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825D93F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,876(r31)
	PPC_STORE_U8(ctx.r31.u32 + 876, ctx.r8.u8);
	// lwz r11,-3564(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3564);
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r7,4456(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4456);
	// cmpwi cr6,r7,10
	cr6.compare<int32_t>(ctx.r7.s32, 10, xer);
	// bne cr6,0x825d94d8
	if (!cr6.eq) goto loc_825D94D8;
	// lwz r11,5388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5388);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x825d9444
	if (!cr6.eq) goto loc_825D9444;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
loc_825D9444:
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,34
	ctx.r10.s64 = 34;
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,72
	ctx.r4.u64 = ctx.r4.u64 | 72;
	// stwx r10,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x83535150
	ctx.lr = 0x825D9484;
	sub_83535150(ctx, base);
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,184(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825D9498;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9208
	ctx.lr = 0x825D94B0;
	sub_825D9208(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stb r4,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r4.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825D94D8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9208
	ctx.lr = 0x825D94F0;
	sub_825D9208(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,70
	ctx.r10.s64 = 70;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// li r8,33
	ctx.r8.s64 = 33;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,13
	ctx.r5.s64 = 13;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r3,r11,195
	ctx.r3.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r6.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,4456(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4456);
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// li r10,37
	ctx.r10.s64 = 37;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x825d9594
	if (cr6.eq) goto loc_825D9594;
	// li r10,25
	ctx.r10.s64 = 25;
loc_825D9594:
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D95AC"))) PPC_WEAK_FUNC(sub_825D95AC);
PPC_FUNC_IMPL(__imp__sub_825D95AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D95B0"))) PPC_WEAK_FUNC(sub_825D95B0);
PPC_FUNC_IMPL(__imp__sub_825D95B0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825d983c
	if (cr6.eq) goto loc_825D983C;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x825d8f10
	ctx.lr = 0x825D95E4;
	sub_825D8F10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2740
	ctx.r3.s64 = ctx.r31.s64 + 2740;
	// bl 0x825e9338
	ctx.lr = 0x825D95F0;
	sub_825E9338(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,64832
	ctx.r10.u64 = ctx.r11.u64 | 64832;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x826240b8
	ctx.lr = 0x825D9608;
	sub_826240B8(ctx, base);
	// lwz r8,7148(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7148);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r8.u32);
	// bl 0x825d9208
	ctx.lr = 0x825D9628;
	sub_825D9208(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1aaa8
	ctx.lr = 0x825D9630;
	sub_82A1AAA8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x825d965c
	if (!cr6.eq) goto loc_825D965C;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,27
	ctx.r10.s64 = 27;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
loc_825D965C:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825D9674;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x825d96e8
	if (cr6.eq) goto loc_825D96E8;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// stb r10,7677(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7677, ctx.r10.u8);
	// li r7,15
	ctx.r7.s64 = 15;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,8
	ctx.r5.s64 = 8;
	// stwx r9,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r3,r11,195
	ctx.r3.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
loc_825D96E8:
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,31
	ctx.r10.s64 = 31;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// li r7,16
	ctx.r7.s64 = 16;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,17
	ctx.r5.s64 = 17;
	// stwx r10,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r3,r11,195
	ctx.r3.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// lwz r10,5388(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5388);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x825d979c
	if (!cr6.eq) goto loc_825D979C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
loc_825D979C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,18
	ctx.r10.s64 = 18;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// li r8,19
	ctx.r8.s64 = 19;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,24
	ctx.r4.s64 = 24;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r7,r11,195
	ctx.r7.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r6.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r7,r11,195
	ctx.r7.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r4.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stb r5,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r5.u8);
loc_825D983C:
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

__attribute__((alias("__imp__sub_825D9854"))) PPC_WEAK_FUNC(sub_825D9854);
PPC_FUNC_IMPL(__imp__sub_825D9854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825D9858"))) PPC_WEAK_FUNC(sub_825D9858);
PPC_FUNC_IMPL(__imp__sub_825D9858) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,2740
	ctx.r3.s64 = ctx.r3.s64 + 2740;
	// bl 0x825e9338
	ctx.lr = 0x825D987C;
	sub_825E9338(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825D9888;
	sub_825D8F10(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// li r8,70
	ctx.r8.s64 = 70;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,17
	ctx.r4.s64 = 17;
	// li r3,18
	ctx.r3.s64 = 18;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// li r10,19
	ctx.r10.s64 = 19;
	// li r9,10
	ctx.r9.s64 = 10;
	// li r7,23
	ctx.r7.s64 = 23;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r30,r11,195
	ctx.r30.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r4.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r3.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r11,195
	ctx.r4.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r11,195
	ctx.r5.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,24
	ctx.r8.s64 = 24;
	// stwx r8,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
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

__attribute__((alias("__imp__sub_825D99E0"))) PPC_WEAK_FUNC(sub_825D99E0);
PPC_FUNC_IMPL(__imp__sub_825D99E0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,2740
	ctx.r3.s64 = ctx.r3.s64 + 2740;
	// bl 0x825e9338
	ctx.lr = 0x825D9A04;
	sub_825E9338(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825D9A10;
	sub_825D8F10(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// li r8,70
	ctx.r8.s64 = 70;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,17
	ctx.r4.s64 = 17;
	// li r3,18
	ctx.r3.s64 = 18;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// li r10,19
	ctx.r10.s64 = 19;
	// li r9,10
	ctx.r9.s64 = 10;
	// li r7,23
	ctx.r7.s64 = 23;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r30,r11,195
	ctx.r30.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r4.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r3.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r11,195
	ctx.r4.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r11,195
	ctx.r5.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,24
	ctx.r8.s64 = 24;
	// stwx r8,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
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

__attribute__((alias("__imp__sub_825D9B68"))) PPC_WEAK_FUNC(sub_825D9B68);
PPC_FUNC_IMPL(__imp__sub_825D9B68) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,2740
	ctx.r3.s64 = ctx.r3.s64 + 2740;
	// bl 0x825e9338
	ctx.lr = 0x825D9B8C;
	sub_825E9338(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825D9B98;
	sub_825D8F10(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// li r8,70
	ctx.r8.s64 = 70;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,17
	ctx.r4.s64 = 17;
	// li r3,18
	ctx.r3.s64 = 18;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// li r10,19
	ctx.r10.s64 = 19;
	// li r9,10
	ctx.r9.s64 = 10;
	// li r7,23
	ctx.r7.s64 = 23;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r30,r11,195
	ctx.r30.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r4.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r3.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r11,195
	ctx.r4.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r11,195
	ctx.r5.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,24
	ctx.r8.s64 = 24;
	// stwx r8,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
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

__attribute__((alias("__imp__sub_825D9CF0"))) PPC_WEAK_FUNC(sub_825D9CF0);
PPC_FUNC_IMPL(__imp__sub_825D9CF0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,2740
	ctx.r3.s64 = ctx.r3.s64 + 2740;
	// bl 0x825e9338
	ctx.lr = 0x825D9D14;
	sub_825E9338(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825D9D20;
	sub_825D8F10(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// li r8,70
	ctx.r8.s64 = 70;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,17
	ctx.r4.s64 = 17;
	// li r3,18
	ctx.r3.s64 = 18;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// li r10,19
	ctx.r10.s64 = 19;
	// li r9,10
	ctx.r9.s64 = 10;
	// li r7,23
	ctx.r7.s64 = 23;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r30,r11,195
	ctx.r30.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r4.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r3.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r11,195
	ctx.r4.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r11,195
	ctx.r5.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,24
	ctx.r8.s64 = 24;
	// stwx r8,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
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

__attribute__((alias("__imp__sub_825D9E78"))) PPC_WEAK_FUNC(sub_825D9E78);
PPC_FUNC_IMPL(__imp__sub_825D9E78) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,2740
	ctx.r3.s64 = ctx.r3.s64 + 2740;
	// bl 0x825e9338
	ctx.lr = 0x825D9E9C;
	sub_825E9338(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825D9EA8;
	sub_825D8F10(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// li r8,70
	ctx.r8.s64 = 70;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,17
	ctx.r4.s64 = 17;
	// li r3,21
	ctx.r3.s64 = 21;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r9,19
	ctx.r9.s64 = 19;
	// li r7,10
	ctx.r7.s64 = 10;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r30,r11,195
	ctx.r30.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r4.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r3.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r11,195
	ctx.r4.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r11,195
	ctx.r5.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,23
	ctx.r8.s64 = 23;
	// li r7,24
	ctx.r7.s64 = 24;
	// stwx r8,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r11,195
	ctx.r5.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stb r3,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_825DA020"))) PPC_WEAK_FUNC(sub_825DA020);
PPC_FUNC_IMPL(__imp__sub_825DA020) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,2740
	ctx.r3.s64 = ctx.r3.s64 + 2740;
	// bl 0x825e9338
	ctx.lr = 0x825DA044;
	sub_825E9338(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825DA050;
	sub_825D8F10(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// li r8,70
	ctx.r8.s64 = 70;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,17
	ctx.r4.s64 = 17;
	// li r3,18
	ctx.r3.s64 = 18;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// li r10,19
	ctx.r10.s64 = 19;
	// li r9,10
	ctx.r9.s64 = 10;
	// li r7,23
	ctx.r7.s64 = 23;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r30,r11,195
	ctx.r30.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r4.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r3.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r11,195
	ctx.r4.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r11,195
	ctx.r5.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,24
	ctx.r8.s64 = 24;
	// stwx r8,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
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

__attribute__((alias("__imp__sub_825DA1A8"))) PPC_WEAK_FUNC(sub_825DA1A8);
PPC_FUNC_IMPL(__imp__sub_825DA1A8) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,64832
	ctx.r10.u64 = ctx.r11.u64 | 64832;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825da1ec
	if (cr6.eq) goto loc_825DA1EC;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825da1ec
	if (cr6.eq) goto loc_825DA1EC;
	// bl 0x82dad028
	ctx.lr = 0x825DA1EC;
	sub_82DAD028(ctx, base);
loc_825DA1EC:
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825DA1F8;
	sub_825D8F10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e94d0
	ctx.lr = 0x825DA200;
	sub_825E94D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82628338
	ctx.lr = 0x825DA208;
	sub_82628338(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825DA21C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2740
	ctx.r3.s64 = ctx.r31.s64 + 2740;
	// bl 0x825e9338
	ctx.lr = 0x825DA228;
	sub_825E9338(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r9,13
	ctx.r9.s64 = 13;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// li r7,70
	ctx.r7.s64 = 70;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,65
	ctx.r4.s64 = 65;
	// li r3,66
	ctx.r3.s64 = 66;
	// li r10,20
	ctx.r10.s64 = 20;
	// stwx r9,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,18
	ctx.r8.s64 = 18;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r4.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r7,r11,195
	ctx.r7.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r3.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r11,195
	ctx.r4.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r11,195
	ctx.r5.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,19
	ctx.r8.s64 = 19;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// li r7,10
	ctx.r7.s64 = 10;
	// stwx r8,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
	// li r6,23
	ctx.r6.s64 = 23;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r11,195
	ctx.r3.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r6.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stb r3,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_825DA3C0"))) PPC_WEAK_FUNC(sub_825DA3C0);
PPC_FUNC_IMPL(__imp__sub_825DA3C0) {
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
	ctx.lr = 0x825DA3C8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// bl 0x837d59a0
	ctx.lr = 0x825DA3D8;
	sub_837D59A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837d5c78
	ctx.lr = 0x825DA3E0;
	sub_837D5C78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825da7c8
	if (cr6.eq) goto loc_825DA7C8;
	// bl 0x837d59a0
	ctx.lr = 0x825DA3F0;
	sub_837D59A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837d5c78
	ctx.lr = 0x825DA3F8;
	sub_837D5C78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825da7c8
	if (cr6.eq) goto loc_825DA7C8;
	// bl 0x830ff290
	ctx.lr = 0x825DA408;
	sub_830FF290(ctx, base);
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r26,292(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x825da7c8
	if (cr6.eq) goto loc_825DA7C8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a1aa88
	ctx.lr = 0x825DA428;
	sub_82A1AA88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825da7c8
	if (cr6.eq) goto loc_825DA7C8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825da7c8
	if (cr6.eq) goto loc_825DA7C8;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// bl 0x830ffaa8
	ctx.lr = 0x825DA44C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x825da464
	if (cr6.eq) goto loc_825DA464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ffaa8
	ctx.lr = 0x825DA45C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bne cr6,0x825da4bc
	if (!cr6.eq) goto loc_825DA4BC;
loc_825DA464:
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r29,192(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x825da4c0
	if (cr6.eq) goto loc_825DA4C0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a0c738
	ctx.lr = 0x825DA480;
	sub_82A0C738(ctx, base);
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c738
	ctx.lr = 0x825DA494;
	sub_82A0C738(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825da4bc
	if (cr6.eq) goto loc_825DA4BC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825da4bc
	if (cr6.eq) goto loc_825DA4BC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a323c8
	ctx.lr = 0x825DA4B8;
	sub_82A323C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_825DA4BC:
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
loc_825DA4C0:
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825da7c8
	if (!cr6.eq) goto loc_825DA7C8;
	// lwz r30,192(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// li r28,24
	ctx.r28.s64 = 24;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825da564
	if (cr6.eq) goto loc_825DA564;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_825DA4E8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,24
	cr6.compare<uint32_t>(ctx.r27.u32, 24, xer);
	// blt cr6,0x825da4f8
	if (cr6.lt) goto loc_825DA4F8;
	// li r11,23
	ctx.r11.s64 = 23;
loc_825DA4F8:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x825da558
	if (cr6.eq) goto loc_825DA558;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r10,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825da530
	if (cr0.eq) goto loc_825DA530;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x825da558
	if (cr6.eq) goto loc_825DA558;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825da558
	if (!cr6.eq) goto loc_825DA558;
loc_825DA530:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a322f0
	ctx.lr = 0x825DA538;
	sub_82A322F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825da558
	if (cr6.eq) goto loc_825DA558;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825da558
	if (!cr6.eq) goto loc_825DA558;
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_825DA558:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,24
	cr6.compare<uint32_t>(ctx.r27.u32, 24, xer);
	// blt cr6,0x825da4e8
	if (cr6.lt) goto loc_825DA4E8;
loc_825DA564:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825da578
	if (!cr6.eq) goto loc_825DA578;
	// bl 0x825d8390
	ctx.lr = 0x825DA574;
	sub_825D8390(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_825DA578:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8353b168
	ctx.lr = 0x825DA584;
	sub_8353B168(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825da7c8
	if (cr6.eq) goto loc_825DA7C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825DA5A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825da7c8
	if (cr6.eq) goto loc_825DA7C8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a1aaa8
	ctx.lr = 0x825DA5B4;
	sub_82A1AAA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a1aab8
	ctx.lr = 0x825DA5C0;
	sub_82A1AAB8(ctx, base);
	// addis r30,r23,1
	ctx.r30.s64 = ctx.r23.s64 + 65536;
	// clrlwi r29,r31,24
	ctx.r29.u64 = ctx.r31.u32 & 0xFF;
	// addi r30,r30,-719
	ctx.r30.s64 = ctx.r30.s64 + -719;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x825da608
	if (cr6.eq) goto loc_825DA608;
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x825da6b8
	if (cr6.eq) goto loc_825DA6B8;
	// ori r4,r4,70
	ctx.r4.u64 = ctx.r4.u64 | 70;
	// bl 0x83535150
	ctx.lr = 0x825DA600;
	sub_83535150(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_825DA608:
	// addis r31,r23,1
	ctx.r31.s64 = ctx.r23.s64 + 65536;
	// addi r31,r31,-716
	ctx.r31.s64 = ctx.r31.s64 + -716;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// beq cr6,0x825da66c
	if (cr6.eq) goto loc_825DA66C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x825da7a8
	if (cr6.eq) goto loc_825DA7A8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x825da774
	if (cr6.eq) goto loc_825DA774;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x825da65c
	if (!cr6.eq) goto loc_825DA65C;
	// ori r4,r4,68
	ctx.r4.u64 = ctx.r4.u64 | 68;
	// bl 0x83535150
	ctx.lr = 0x825DA654;
	sub_83535150(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_825DA65C:
	// ori r4,r4,69
	ctx.r4.u64 = ctx.r4.u64 | 69;
	// bl 0x83535150
	ctx.lr = 0x825DA664;
	sub_83535150(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_825DA66C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825DA684;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825da714
	if (cr6.eq) goto loc_825DA714;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x825da6fc
	if (cr6.eq) goto loc_825DA6FC;
	// stb r24,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r24.u8);
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
loc_825DA6B8:
	// ori r4,r4,71
	ctx.r4.u64 = ctx.r4.u64 | 71;
	// bl 0x83535150
	ctx.lr = 0x825DA6C0;
	sub_83535150(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a1aaa8
	ctx.lr = 0x825DA6C8;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825da7c8
	if (cr6.eq) goto loc_825DA7C8;
	// bl 0x837d59a0
	ctx.lr = 0x825DA6D8;
	sub_837D59A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837d5ea0
	ctx.lr = 0x825DA6F4;
	sub_837D5EA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_825DA6FC:
	// stb r25,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r25.u8);
	// ori r4,r4,70
	ctx.r4.u64 = ctx.r4.u64 | 70;
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// bl 0x83535150
	ctx.lr = 0x825DA70C;
	sub_83535150(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_825DA714:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a1aa98
	ctx.lr = 0x825DA71C;
	sub_82A1AA98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825da7c8
	if (cr6.eq) goto loc_825DA7C8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825DA740;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825da780
	if (cr6.eq) goto loc_825DA780;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825DA764;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825da780
	if (!cr6.eq) goto loc_825DA780;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
loc_825DA774:
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// ori r4,r4,68
	ctx.r4.u64 = ctx.r4.u64 | 68;
	// b 0x825da7b0
	goto loc_825DA7B0;
loc_825DA780:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825DA798;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825da7c8
	if (cr6.eq) goto loc_825DA7C8;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
loc_825DA7A8:
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// ori r4,r4,69
	ctx.r4.u64 = ctx.r4.u64 | 69;
loc_825DA7B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x83535150
	ctx.lr = 0x825DA7C8;
	sub_83535150(ctx, base);
loc_825DA7C8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DA7D0"))) PPC_WEAK_FUNC(sub_825DA7D0);
PPC_FUNC_IMPL(__imp__sub_825DA7D0) {
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,71
	ctx.r4.u64 = ctx.r4.u64 | 71;
	// lwz r31,292(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x83535150
	ctx.lr = 0x825DA80C;
	sub_83535150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1aaa8
	ctx.lr = 0x825DA814;
	sub_82A1AAA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825da840
	if (cr6.eq) goto loc_825DA840;
	// bl 0x837d59a0
	ctx.lr = 0x825DA824;
	sub_837D59A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837d5ea0
	ctx.lr = 0x825DA840;
	sub_837D5EA0(ctx, base);
loc_825DA840:
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

__attribute__((alias("__imp__sub_825DA854"))) PPC_WEAK_FUNC(sub_825DA854);
PPC_FUNC_IMPL(__imp__sub_825DA854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DA858"))) PPC_WEAK_FUNC(sub_825DA858);
PPC_FUNC_IMPL(__imp__sub_825DA858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825DA860;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// addi r10,r10,-704
	ctx.r10.s64 = ctx.r10.s64 + -704;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r7,4515(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4515);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// lwz r29,12(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// beq cr6,0x825da8a0
	if (cr6.eq) goto loc_825DA8A0;
loc_825DA894:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825DA8A0:
	// lfs f0,8152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8152);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,6112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x825da8cc
	if (cr6.gt) goto loc_825DA8CC;
	// lfs f13,8144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x825da894
	if (!cr6.gt) goto loc_825DA894;
loc_825DA8CC:
	// lfs f13,8144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x825da894
	if (cr6.gt) goto loc_825DA894;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x825da894
	if (cr6.gt) goto loc_825DA894;
	// lwz r11,5412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5412);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x825da894
	if (!cr6.lt) goto loc_825DA894;
	// lwz r11,5356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5356);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x825da894
	if (cr6.eq) goto loc_825DA894;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82629730
	ctx.lr = 0x825DA914;
	sub_82629730(ctx, base);
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// bne cr6,0x825da894
	if (!cr6.eq) goto loc_825DA894;
	// lfs f0,8160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8160);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,8164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8164);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8156);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,-11412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11412);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-20096(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20096);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fcmpu cr6,f6,f13
	cr6.compare(ctx.f6.f64, ctx.f13.f64);
	// bgt cr6,0x825da894
	if (cr6.gt) goto loc_825DA894;
	// bl 0x83740858
	ctx.lr = 0x825DA958;
	sub_83740858(ctx, base);
	// rlwinm r4,r3,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x825DA964;
	sub_82A44AC0(ctx, base);
	// lfs f0,5376(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5376);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,5384(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5384);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f0,-9980(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9980);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f6,f0
	cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bgt cr6,0x825da894
	if (cr6.gt) goto loc_825DA894;
	// lwz r11,8516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8516);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x825da9e4
	if (!cr6.eq) goto loc_825DA9E4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,24224
	ctx.r10.u64 = ctx.r11.u64 | 24224;
	// lbzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825da9d0
	if (!cr6.eq) goto loc_825DA9D0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,24225
	ctx.r10.u64 = ctx.r11.u64 | 24225;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825da9d4
	if (cr6.eq) goto loc_825DA9D4;
loc_825DA9D0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825DA9D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825da9e8
	if (!cr6.eq) goto loc_825DA9E8;
loc_825DA9E4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825DA9E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DA9F0"))) PPC_WEAK_FUNC(sub_825DA9F0);
PPC_FUNC_IMPL(__imp__sub_825DA9F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x825DA9F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r29,r29,-704
	ctx.r29.s64 = ctx.r29.s64 + -704;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r28,32(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r30,6112(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lwz r25,292(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,8516(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8516);
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// lwz r27,132(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// bne cr6,0x825daa80
	if (!cr6.eq) goto loc_825DAA80;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,24224
	ctx.r9.u64 = ctx.r10.u64 | 24224;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825daa64
	if (!cr6.eq) goto loc_825DAA64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,24225
	ctx.r9.u64 = ctx.r10.u64 | 24225;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825daa68
	if (cr6.eq) goto loc_825DAA68;
loc_825DAA64:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825DAA68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825daa80
	if (cr6.eq) goto loc_825DAA80;
loc_825DAA74:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_825DAA80:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,4520(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4520);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a22b40
	ctx.lr = 0x825DAA90;
	sub_82A22B40(ctx, base);
	// lwz r11,4552(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4552);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x825daadc
	if (!cr6.gt) goto loc_825DAADC;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x825daab4
	if (cr6.lt) goto loc_825DAAB4;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825daab8
	if (cr6.lt) goto loc_825DAAB8;
loc_825DAAB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DAAB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825daa74
	if (cr6.eq) goto loc_825DAA74;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a2b388
	ctx.lr = 0x825DAAD4;
	sub_82A2B388(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// bne cr6,0x825daa74
	if (!cr6.eq) goto loc_825DAA74;
loc_825DAADC:
	// lfs f0,8152(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8152);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x825dab04
	if (cr6.gt) goto loc_825DAB04;
	// lfs f13,8144(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f11,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x825daa74
	if (!cr6.gt) goto loc_825DAA74;
loc_825DAB04:
	// lfs f13,8144(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x825daa74
	if (cr6.gt) goto loc_825DAA74;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x825daa74
	if (cr6.gt) goto loc_825DAA74;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x825dab3c
	if (cr6.lt) goto loc_825DAB3C;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825dab40
	if (cr6.lt) goto loc_825DAB40;
loc_825DAB3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DAB40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825dab58
	if (!cr6.eq) goto loc_825DAB58;
loc_825DAB4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_825DAB58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x825DAB64;
	sub_82A0C7B0(ctx, base);
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dabc8
	if (cr6.eq) goto loc_825DABC8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a2a558
	ctx.lr = 0x825DAB80;
	sub_82A2A558(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a22c10
	ctx.lr = 0x825DAB94;
	sub_82A22C10(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x825dabb8
	if (!cr6.eq) goto loc_825DABB8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x825dabbc
	if (cr6.eq) goto loc_825DABBC;
loc_825DABB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DABBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825dab4c
	if (!cr6.eq) goto loc_825DAB4C;
loc_825DABC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x825DABD4;
	sub_82A0C760(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,41
	cr6.compare<int32_t>(ctx.r11.s32, 41, xer);
	// blt cr6,0x825dabec
	if (cr6.lt) goto loc_825DABEC;
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(ctx.r11.s32, 43, xer);
	// ble cr6,0x825dab4c
	if (!cr6.gt) goto loc_825DAB4C;
loc_825DABEC:
	// bl 0x83740858
	ctx.lr = 0x825DABF0;
	sub_83740858(ctx, base);
	// rlwinm r4,r3,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x825DABFC;
	sub_82A44AC0(ctx, base);
	// lfs f0,5376(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 5376);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,5384(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 5384);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f0,-9980(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9980);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f6,f0
	cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bgt cr6,0x825daa74
	if (cr6.gt) goto loc_825DAA74;
	// lfs f0,8160(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8160);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,8164(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8164);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8156(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8156);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,-11412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11412);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-20096(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20096);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fcmpu cr6,f6,f13
	cr6.compare(ctx.f6.f64, ctx.f13.f64);
	// bgt cr6,0x825daa74
	if (cr6.gt) goto loc_825DAA74;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f1,-7352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7352);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d88b0
	ctx.lr = 0x825DAC78;
	sub_825D88B0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DAC8C"))) PPC_WEAK_FUNC(sub_825DAC8C);
PPC_FUNC_IMPL(__imp__sub_825DAC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DAC90"))) PPC_WEAK_FUNC(sub_825DAC90);
PPC_FUNC_IMPL(__imp__sub_825DAC90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825DAC98;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// clrlwi r30,r4,24
	ctx.r30.u64 = ctx.r4.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r28,6112(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lwz r27,292(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// beq cr6,0x825dacd0
	if (cr6.eq) goto loc_825DACD0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,-4460(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4460);
	ctx.f31.f64 = double(temp.f32);
	// b 0x825dacd8
	goto loc_825DACD8;
loc_825DACD0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,-26940(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26940);
	ctx.f31.f64 = double(temp.f32);
loc_825DACD8:
	// lwz r11,7916(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7916);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,7916(r29)
	PPC_STORE_U32(ctx.r29.u32 + 7916, ctx.r11.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x83740868
	ctx.lr = 0x825DACF0;
	sub_83740868(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f12,f1,f31
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bgt cr6,0x825dad10
	if (cr6.gt) goto loc_825DAD10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DAD10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825dae84
	if (!cr6.eq) goto loc_825DAE84;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// beq cr6,0x825dae94
	if (cr6.eq) goto loc_825DAE94;
	// lwz r11,4524(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4524);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x825dad3c
	if (cr6.lt) goto loc_825DAD3C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825dad40
	if (cr6.lt) goto loc_825DAD40;
loc_825DAD3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DAD40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825daf04
	if (cr6.eq) goto loc_825DAF04;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,8152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8152);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-9976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9976);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x825dae84
	if (cr6.gt) goto loc_825DAE84;
	// lfs f0,8144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x825dae84
	if (cr6.gt) goto loc_825DAE84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a2df00
	ctx.lr = 0x825DAD90;
	sub_82A2DF00(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-10296
	ctx.r11.s64 = ctx.r11.s64 + -10296;
	// lfs f0,-11412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x825dae84
	if (cr6.gt) goto loc_825DAE84;
	// lfs f13,8148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8148);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x825dae84
	if (cr6.gt) goto loc_825DAE84;
	// lfs f13,8160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8160);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,8164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8164);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8156);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fcmpu cr6,f6,f13
	cr6.compare(ctx.f6.f64, ctx.f13.f64);
	// bgt cr6,0x825dae84
	if (cr6.gt) goto loc_825DAE84;
	// lfs f0,5376(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 5376);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f12
	cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bgt cr6,0x825dae84
	if (cr6.gt) goto loc_825DAE84;
	// lfs f0,8152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8152);
	ctx.f0.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x825dae3c
	if (!cr6.gt) goto loc_825DAE3C;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bgt cr6,0x825dae84
	if (cr6.gt) goto loc_825DAE84;
loc_825DAE3C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r10,r11,64832
	ctx.r10.u64 = ctx.r11.u64 | 64832;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82a2b4e0
	ctx.lr = 0x825DAE54;
	sub_82A2B4E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825dae68
	if (cr6.lt) goto loc_825DAE68;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825dae6c
	if (cr6.lt) goto loc_825DAE6C;
loc_825DAE68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DAE6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825daf04
	if (cr6.eq) goto loc_825DAF04;
	// lwz r11,4524(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4524);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x825daf04
	if (cr6.eq) goto loc_825DAF04;
loc_825DAE84:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_825DAE94:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,8152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8152);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-9976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9976);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x825dae84
	if (cr6.gt) goto loc_825DAE84;
	// lfs f0,8144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x825dae84
	if (cr6.gt) goto loc_825DAE84;
	// lfs f0,5364(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 5364);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,8144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,5372(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 5372);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8152);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r11,-10296
	ctx.r10.s64 = ctx.r11.s64 + -10296;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f0,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f6,f0
	cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bgt cr6,0x825daf08
	if (cr6.gt) goto loc_825DAF08;
loc_825DAF04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825DAF08:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DAF14"))) PPC_WEAK_FUNC(sub_825DAF14);
PPC_FUNC_IMPL(__imp__sub_825DAF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DAF18"))) PPC_WEAK_FUNC(sub_825DAF18);
PPC_FUNC_IMPL(__imp__sub_825DAF18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825DAF20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// ori r8,r11,64832
	ctx.r8.u64 = ctx.r11.u64 | 64832;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-3564(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3564);
	// lwzx r7,r3,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwz r29,312(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r31,132(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 132);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825db020
	if (cr6.eq) goto loc_825DB020;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x825db020
	if (cr6.eq) goto loc_825DB020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a225d0
	ctx.lr = 0x825DAF60;
	sub_82A225D0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82919698
	ctx.lr = 0x825DAF68;
	sub_82919698(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a225d0
	ctx.lr = 0x825DAF74;
	sub_82A225D0(ctx, base);
	// addis r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 196608;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r3,-29136
	ctx.r3.s64 = ctx.r3.s64 + -29136;
	// bl 0x82919698
	ctx.lr = 0x825DAF84;
	sub_82919698(ctx, base);
	// lbz r10,101(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 101);
	// lbz r9,102(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 102);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825db014
	if (cr6.eq) goto loc_825DB014;
	// lbz r7,99(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 99);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825dafd4
	if (cr6.eq) goto loc_825DAFD4;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_825DAFD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825db014
	if (cr6.eq) goto loc_825DB014;
	// lbz r11,97(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825daff8
	if (cr6.eq) goto loc_825DAFF8;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825DAFF8:
	// lbz r11,98(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 98);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 10;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825DB014:
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825DB020:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DB02C"))) PPC_WEAK_FUNC(sub_825DB02C);
PPC_FUNC_IMPL(__imp__sub_825DB02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DB030"))) PPC_WEAK_FUNC(sub_825DB030);
PPC_FUNC_IMPL(__imp__sub_825DB030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x825DB038;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// ori r8,r11,64832
	ctx.r8.u64 = ctx.r11.u64 | 64832;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-3564(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3564);
	// lwzx r7,r3,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwz r26,312(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r31,132(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 132);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825db13c
	if (cr6.eq) goto loc_825DB13C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x825db13c
	if (cr6.eq) goto loc_825DB13C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a225d0
	ctx.lr = 0x825DB078;
	sub_82A225D0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82919698
	ctx.lr = 0x825DB080;
	sub_82919698(ctx, base);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a225d0
	ctx.lr = 0x825DB08C;
	sub_82A225D0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82919698
	ctx.lr = 0x825DB094;
	sub_82919698(ctx, base);
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a225d0
	ctx.lr = 0x825DB0A0;
	sub_82A225D0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r30,r11,36400
	ctx.r30.u64 = ctx.r11.u64 | 36400;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// bl 0x82919698
	ctx.lr = 0x825DB0B4;
	sub_82919698(ctx, base);
	// clrlwi r27,r3,24
	ctx.r27.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a225d0
	ctx.lr = 0x825DB0C0;
	sub_82A225D0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// bl 0x82919698
	ctx.lr = 0x825DB0CC;
	sub_82919698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825db130
	if (cr6.eq) goto loc_825DB130;
	// lbz r8,100(r26)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r26.u32 + 100);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825db108
	if (cr6.eq) goto loc_825DB108;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_825DB108:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825db130
	if (cr6.eq) goto loc_825DB130;
	// lbz r11,98(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 98);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 10;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_825DB130:
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_825DB13C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DB148"))) PPC_WEAK_FUNC(sub_825DB148);
PPC_FUNC_IMPL(__imp__sub_825DB148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825DB150;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// li r25,0
	ctx.r25.s64 = 0;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r29,-704
	ctx.r29.s64 = ctx.r29.s64 + -704;
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// li r28,1
	ctx.r28.s64 = 1;
loc_825DB17C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a2a310
	ctx.lr = 0x825DB18C;
	sub_82A2A310(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825db1a4
	if (cr6.lt) goto loc_825DB1A4;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// blt cr6,0x825db1a8
	if (cr6.lt) goto loc_825DB1A8;
loc_825DB1A4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_825DB1A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825db204
	if (cr6.eq) goto loc_825DB204;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x825DB1C0;
	sub_82A0C738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a164c8
	ctx.lr = 0x825DB1C8;
	sub_82A164C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83767d18
	ctx.lr = 0x825DB1D0;
	sub_83767D18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x825db204
	if (!cr6.eq) goto loc_825DB204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x825DB1E4;
	sub_83102DB0(ctx, base);
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825db204
	if (!cr6.eq) goto loc_825DB204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x825DB1F8;
	sub_83102DB0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x825db20c
	if (cr6.lt) goto loc_825DB20C;
loc_825DB204:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r28,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u8);
loc_825DB20C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x825db17c
	if (cr6.lt) goto loc_825DB17C;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825db230
	if (!cr6.eq) goto loc_825DB230;
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825db2f4
	if (cr6.eq) goto loc_825DB2F4;
loc_825DB230:
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r29,r27,7088
	ctx.r29.s64 = ctx.r27.s64 + 7088;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ori r28,r10,34548
	ctx.r28.u64 = ctx.r10.u64 | 34548;
loc_825DB244:
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825db2e0
	if (cr6.eq) goto loc_825DB2E0;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// bl 0x82a32ec0
	ctx.lr = 0x825DB260;
	sub_82A32EC0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825db2e0
	if (cr6.eq) goto loc_825DB2E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x825DB278;
	sub_82A0C710(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// bl 0x82917a08
	ctx.lr = 0x825DB284;
	sub_82917A08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825db298
	if (cr6.eq) goto loc_825DB298;
	// lbz r11,65(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825db2e0
	if (!cr6.eq) goto loc_825DB2E0;
loc_825DB298:
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_825DB2A8:
	// lbzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825db2c0
	if (cr6.eq) goto loc_825DB2C0;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
loc_825DB2C0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x825db2a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DB2A8;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// lwz r9,312(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// lbz r8,23(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 23);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bgt cr6,0x825db300
	if (cr6.gt) goto loc_825DB300;
loc_825DB2E0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,11
	ctx.r29.s64 = ctx.r29.s64 + 11;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x825db244
	if (cr6.lt) goto loc_825DB244;
loc_825DB2F4:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DB300:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DB30C"))) PPC_WEAK_FUNC(sub_825DB30C);
PPC_FUNC_IMPL(__imp__sub_825DB30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DB310"))) PPC_WEAK_FUNC(sub_825DB310);
PPC_FUNC_IMPL(__imp__sub_825DB310) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r30,-704
	ctx.r30.s64 = ctx.r30.s64 + -704;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82665608
	ctx.lr = 0x825DB344;
	sub_82665608(ctx, base);
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lwz r11,-3564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r9,6092(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6092);
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x82a47670
	ctx.lr = 0x825DB364;
	sub_82A47670(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r6,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r6.u8);
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

__attribute__((alias("__imp__sub_825DB388"))) PPC_WEAK_FUNC(sub_825DB388);
PPC_FUNC_IMPL(__imp__sub_825DB388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825DB390;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lbz r10,5813(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5813);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825db3c8
	if (cr6.eq) goto loc_825DB3C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DB3C8:
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r27,r31,152
	ctx.r27.s64 = ctx.r31.s64 + 152;
	// addi r28,r28,-704
	ctx.r28.s64 = ctx.r28.s64 + -704;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826654f0
	ctx.lr = 0x825DB3E4;
	sub_826654F0(ctx, base);
	// lbz r11,862(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 862);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x825db580
	if (cr6.lt) goto loc_825DB580;
	// beq cr6,0x825db4c4
	if (cr6.eq) goto loc_825DB4C4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x825db624
	if (!cr6.lt) goto loc_825DB624;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,64824
	ctx.r10.u64 = ctx.r11.u64 | 64824;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825db624
	if (!cr6.eq) goto loc_825DB624;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x825DB41C;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825db470
	if (!cr6.eq) goto loc_825DB470;
	// bl 0x837d59a0
	ctx.lr = 0x825DB42C;
	sub_837D59A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837d5cf8
	ctx.lr = 0x825DB434;
	sub_837D5CF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825db470
	if (!cr6.eq) goto loc_825DB470;
	// bl 0x837d59a0
	ctx.lr = 0x825DB440;
	sub_837D59A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837d5cf8
	ctx.lr = 0x825DB448;
	sub_837D5CF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825db470
	if (!cr6.eq) goto loc_825DB470;
	// bl 0x837d59a0
	ctx.lr = 0x825DB454;
	sub_837D59A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837d5ea0
	ctx.lr = 0x825DB470;
	sub_837D5EA0(ctx, base);
loc_825DB470:
	// li r10,22
	ctx.r10.s64 = 22;
	// stb r29,2786(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2786, ctx.r29.u8);
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r29,2791(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2791, ctx.r29.u8);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stb r30,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r30.u8);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,5
	ctx.r10.s64 = 5;
loc_825DB498:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x825db498
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DB498;
	// stb r29,3329(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3329, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r29,3352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3352, ctx.r29.u8);
	// stb r29,3353(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3353, ctx.r29.u8);
	// stb r29,3296(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3296, ctx.r29.u8);
	// bl 0x8261a740
	ctx.lr = 0x825DB4B8;
	sub_8261A740(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DB4C4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262ce20
	ctx.lr = 0x825DB4D4;
	sub_8262CE20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825db51c
	if (cr6.eq) goto loc_825DB51C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lbz r11,862(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 862);
	// ori r9,r10,64824
	ctx.r9.u64 = ctx.r10.u64 | 64824;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stb r8,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r8.u8);
	// lwzx r6,r31,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825db56c
	if (cr6.eq) goto loc_825DB56C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,2791(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2791, ctx.r11.u8);
	// bl 0x8261df48
	ctx.lr = 0x825DB510;
	sub_8261DF48(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DB51C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,64824
	ctx.r10.u64 = ctx.r11.u64 | 64824;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825db56c
	if (cr6.eq) goto loc_825DB56C;
	// lbz r11,7608(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7608);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825db558
	if (!cr6.eq) goto loc_825DB558;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261e0b8
	ctx.lr = 0x825DB544;
	sub_8261E0B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261df48
	ctx.lr = 0x825DB54C;
	sub_8261DF48(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DB558:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825db56c
	if (cr6.eq) goto loc_825DB56C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_825DB56C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261df48
	ctx.lr = 0x825DB574;
	sub_8261DF48(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DB580:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// ori r10,r11,64816
	ctx.r10.u64 = ctx.r11.u64 | 64816;
	// stb r30,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r30.u8);
	// stbx r30,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u8);
loc_825DB594:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261a5f8
	ctx.lr = 0x825DB5A0;
	sub_8261A5F8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x825db594
	if (cr6.lt) goto loc_825DB594;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r29,312(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// bl 0x83740858
	ctx.lr = 0x825DB5B8;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,88(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// li r10,136
	ctx.r10.s64 = 136;
	// stb r30,2786(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2786, ctx.r30.u8);
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f9.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82664310
	ctx.lr = 0x825DB5FC;
	sub_82664310(ctx, base);
	// stfs f1,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262b4c8
	ctx.lr = 0x825DB608;
	sub_8262B4C8(ctx, base);
	// stfs f1,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stb r30,7616(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7616, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261a728
	ctx.lr = 0x825DB618;
	sub_8261A728(ctx, base);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x825d8ea0
	ctx.lr = 0x825DB624;
	sub_825D8EA0(ctx, base);
loc_825DB624:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DB630"))) PPC_WEAK_FUNC(sub_825DB630);
PPC_FUNC_IMPL(__imp__sub_825DB630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825DB638;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lbz r10,5813(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5813);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825db670
	if (cr6.eq) goto loc_825DB670;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DB670:
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r29,r31,152
	ctx.r29.s64 = ctx.r31.s64 + 152;
	// addi r28,r28,-704
	ctx.r28.s64 = ctx.r28.s64 + -704;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826654f0
	ctx.lr = 0x825DB68C;
	sub_826654F0(ctx, base);
	// lbz r11,862(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 862);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x825db760
	if (cr6.lt) goto loc_825DB760;
	// beq cr6,0x825db6dc
	if (cr6.eq) goto loc_825DB6DC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x825db87c
	if (!cr6.lt) goto loc_825DB87C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,64824
	ctx.r10.u64 = ctx.r11.u64 | 64824;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825db87c
	if (!cr6.eq) goto loc_825DB87C;
	// li r27,1
	ctx.r27.s64 = 1;
	// stb r26,2786(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2786, ctx.r26.u8);
	// stb r26,2791(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2791, ctx.r26.u8);
	// stb r27,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r27.u8);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// stb r26,7609(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7609, ctx.r26.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DB6DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262ce20
	ctx.lr = 0x825DB6EC;
	sub_8262CE20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825db72c
	if (cr6.eq) goto loc_825DB72C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lbz r11,862(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 862);
	// ori r9,r10,64824
	ctx.r9.u64 = ctx.r10.u64 | 64824;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stb r8,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r8.u8);
	// lwzx r6,r31,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825db87c
	if (cr6.eq) goto loc_825DB87C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r11,2791(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2791, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DB72C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,64824
	ctx.r10.u64 = ctx.r11.u64 | 64824;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825db87c
	if (cr6.eq) goto loc_825DB87C;
	// lbz r11,7608(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7608);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825db87c
	if (!cr6.eq) goto loc_825DB87C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82629350
	ctx.lr = 0x825DB754;
	sub_82629350(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DB760:
	// li r27,1
	ctx.r27.s64 = 1;
	// stb r27,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r27.u8);
	// stb r27,2786(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2786, ctx.r27.u8);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r26,312(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// bl 0x83740858
	ctx.lr = 0x825DB778;
	sub_83740858(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,88(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// li r12,136
	ctx.r12.s64 = 136;
	// stfiwx f9,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f9.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82664310
	ctx.lr = 0x825DB7BC;
	sub_82664310(ctx, base);
	// lis r6,0
	ctx.r6.s64 = 0;
	// stfs f1,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// ori r5,r6,64824
	ctx.r5.u64 = ctx.r6.u64 | 64824;
	// lwzx r4,r31,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825db7e4
	if (!cr6.eq) goto loc_825DB7E4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// b 0x825db834
	goto loc_825DB834;
loc_825DB7E4:
	// lwz r3,7148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7148);
	// bl 0x82a175b0
	ctx.lr = 0x825DB7EC;
	sub_82A175B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825db834
	if (cr6.eq) goto loc_825DB834;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r30,312(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// bl 0x83740858
	ctx.lr = 0x825DB804;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// li r12,136
	ctx.r12.s64 = 136;
	// stfiwx f9,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f9.u32);
loc_825DB834:
	// lwz r3,7148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7148);
	// bl 0x82a173b0
	ctx.lr = 0x825DB83C;
	sub_82A173B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825db870
	if (!cr6.eq) goto loc_825DB870;
	// lwz r3,7148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7148);
	// bl 0x82a17450
	ctx.lr = 0x825DB850;
	sub_82A17450(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825db870
	if (!cr6.eq) goto loc_825DB870;
	// lwz r3,7148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7148);
	// bl 0x82a175b0
	ctx.lr = 0x825DB864;
	sub_82A175B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825db87c
	if (cr6.eq) goto loc_825DB87C;
loc_825DB870:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,64816
	ctx.r10.u64 = ctx.r11.u64 | 64816;
	// stbx r27,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r27.u8);
loc_825DB87C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DB888"))) PPC_WEAK_FUNC(sub_825DB888);
PPC_FUNC_IMPL(__imp__sub_825DB888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825DB890;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lbz r10,5813(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5813);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825db8c4
	if (cr6.eq) goto loc_825DB8C4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DB8C4:
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// addi r29,r29,-704
	ctx.r29.s64 = ctx.r29.s64 + -704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826654f0
	ctx.lr = 0x825DB8E0;
	sub_826654F0(ctx, base);
	// lbz r11,862(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 862);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x825db9dc
	if (cr6.lt) goto loc_825DB9DC;
	// beq cr6,0x825db92c
	if (cr6.eq) goto loc_825DB92C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x825dba1c
	if (!cr6.lt) goto loc_825DBA1C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,64824
	ctx.r10.u64 = ctx.r11.u64 | 64824;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825dba1c
	if (!cr6.eq) goto loc_825DBA1C;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// stb r28,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r28.u8);
	// stb r11,2786(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2786, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DB92C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x825d88b0
	ctx.lr = 0x825DB93C;
	sub_825D88B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825db950
	if (cr6.eq) goto loc_825DB950;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_825DB950:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262ce20
	ctx.lr = 0x825DB960;
	sub_8262CE20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825db984
	if (cr6.eq) goto loc_825DB984;
	// lbz r11,862(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 862);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DB984:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-712
	ctx.r30.s64 = ctx.r30.s64 + -712;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dba1c
	if (cr6.eq) goto loc_825DBA1C;
	// lbz r11,7608(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7608);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825dba1c
	if (!cr6.eq) goto loc_825DBA1C;
	// bl 0x837d59a0
	ctx.lr = 0x825DB9A8;
	sub_837D59A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837d5c78
	ctx.lr = 0x825DB9B0;
	sub_837D5C78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dba1c
	if (cr6.eq) goto loc_825DBA1C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x825dba1c
	if (!cr6.eq) goto loc_825DBA1C;
	// stb r28,7608(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7608, ctx.r28.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DB9DC:
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r28,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r28.u8);
	// stb r28,2786(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2786, ctx.r28.u8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82664310
	ctx.lr = 0x825DB9F8;
	sub_82664310(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,64824
	ctx.r9.u64 = ctx.r10.u64 | 64824;
	// stfs f1,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825dba1c
	if (cr6.eq) goto loc_825DBA1C;
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x825DBA1C;
	sub_82A1AAA8(ctx, base);
loc_825DBA1C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DBA28"))) PPC_WEAK_FUNC(sub_825DBA28);
PPC_FUNC_IMPL(__imp__sub_825DBA28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825DBA30;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lbz r10,5813(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5813);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825dba68
	if (cr6.eq) goto loc_825DBA68;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DBA68:
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// addi r29,r29,-704
	ctx.r29.s64 = ctx.r29.s64 + -704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826654f0
	ctx.lr = 0x825DBA84;
	sub_826654F0(ctx, base);
	// lbz r11,862(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 862);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x825dbb7c
	if (cr6.lt) goto loc_825DBB7C;
	// beq cr6,0x825dbacc
	if (cr6.eq) goto loc_825DBACC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x825dbc28
	if (!cr6.lt) goto loc_825DBC28;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,64824
	ctx.r10.u64 = ctx.r11.u64 | 64824;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825dbc28
	if (!cr6.eq) goto loc_825DBC28;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r27,2786(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2786, ctx.r27.u8);
	// li r25,1
	ctx.r25.s64 = 1;
	// stb r11,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r11.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DBACC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bl 0x825d88b0
	ctx.lr = 0x825DBADC;
	sub_825D88B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dbaec
	if (cr6.eq) goto loc_825DBAEC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_825DBAEC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262ce20
	ctx.lr = 0x825DBAFC;
	sub_8262CE20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dbb20
	if (cr6.eq) goto loc_825DBB20;
	// lbz r11,862(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 862);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DBB20:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-712
	ctx.r30.s64 = ctx.r30.s64 + -712;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dbc28
	if (cr6.eq) goto loc_825DBC28;
	// lbz r11,7608(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7608);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825dbc28
	if (!cr6.eq) goto loc_825DBC28;
	// bl 0x837d59a0
	ctx.lr = 0x825DBB44;
	sub_837D59A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837d5c78
	ctx.lr = 0x825DBB4C;
	sub_837D5C78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dbc28
	if (cr6.eq) goto loc_825DBC28;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x825dbc28
	if (!cr6.eq) goto loc_825DBC28;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r11,7608(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7608, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DBB7C:
	// stw r27,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826315b0
	ctx.lr = 0x825DBB88;
	sub_826315B0(ctx, base);
	// lbz r11,862(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 862);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r10,2786(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2786, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r9,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r9.u8);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x82664310
	ctx.lr = 0x825DBBAC;
	sub_82664310(ctx, base);
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r5,r6,64824
	ctx.r5.u64 = ctx.r6.u64 | 64824;
	// stfs f1,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lwzx r4,r31,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825dbc1c
	if (cr6.eq) goto loc_825DBC1C;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x825DBBD4;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dbbe4
	if (cr6.eq) goto loc_825DBBE4;
	// li r31,1
	ctx.r31.s64 = 1;
loc_825DBBE4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x825dbc28
	if (cr6.eq) goto loc_825DBC28;
	// bl 0x837d59a0
	ctx.lr = 0x825DBBF4;
	sub_837D59A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837d5ea0
	ctx.lr = 0x825DBC10;
	sub_837D5EA0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DBC1C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
loc_825DBC28:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DBC34"))) PPC_WEAK_FUNC(sub_825DBC34);
PPC_FUNC_IMPL(__imp__sub_825DBC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DBC38"))) PPC_WEAK_FUNC(sub_825DBC38);
PPC_FUNC_IMPL(__imp__sub_825DBC38) {
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
	// bl 0x830ff290
	ctx.lr = 0x825DBC50;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x825DBC54;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x825dbc64
	if (cr6.eq) goto loc_825DBC64;
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x825dbca0
	if (!cr6.eq) goto loc_825DBCA0;
loc_825DBC64:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x825DBC74;
	sub_82A1AAA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825dbca0
	if (!cr6.eq) goto loc_825DBCA0;
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
	// bl 0x83535150
	ctx.lr = 0x825DBCA0;
	sub_83535150(ctx, base);
loc_825DBCA0:
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

__attribute__((alias("__imp__sub_825DBCB8"))) PPC_WEAK_FUNC(sub_825DBCB8);
PPC_FUNC_IMPL(__imp__sub_825DBCB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x825DBCC0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r21,r3,1
	ctx.r21.s64 = ctx.r3.s64 + 65536;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r21,r21,360
	ctx.r21.s64 = ctx.r21.s64 + 360;
	// ori r23,r11,336
	ctx.r23.u64 = ctx.r11.u64 | 336;
	// ori r24,r10,340
	ctx.r24.u64 = ctx.r10.u64 | 340;
	// lis r20,-31763
	ctx.r20.s64 = -2081619968;
	// ori r25,r9,344
	ctx.r25.u64 = ctx.r9.u64 | 344;
	// li r26,1
	ctx.r26.s64 = 1;
	// ori r27,r8,348
	ctx.r27.u64 = ctx.r8.u64 | 348;
loc_825DBCFC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,-3564(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x825DBD08;
	sub_82A0C738(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_825DBD10:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a16490
	ctx.lr = 0x825DBD1C;
	sub_82A16490(ctx, base);
	// bl 0x83767d18
	ctx.lr = 0x825DBD20;
	sub_83767D18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825dbdc8
	if (!cr6.eq) goto loc_825DBDC8;
	// lwz r11,-3564(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3564);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r8,4456(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4456);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bne cr6,0x825dbdc8
	if (!cr6.eq) goto loc_825DBDC8;
	// lfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a29110
	ctx.lr = 0x825DBD50;
	sub_82A29110(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x825dbd94
	if (cr6.gt) goto loc_825DBD94;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x825dbd80
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DBD80;
	// bdzf 4*cr6+eq,0x825dbd88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DBD88;
	// bdzf 4*cr6+eq,0x825dbd88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DBD88;
	// bdzf 4*cr6+eq,0x825dbd90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DBD90;
	// bne cr6,0x825dbd90
	if (!cr6.eq) goto loc_825DBD90;
loc_825DBD80:
	// addi r30,r30,45
	ctx.r30.s64 = ctx.r30.s64 + 45;
	// b 0x825dbd94
	goto loc_825DBD94;
loc_825DBD88:
	// addi r30,r30,90
	ctx.r30.s64 = ctx.r30.s64 + 90;
	// b 0x825dbd94
	goto loc_825DBD94;
loc_825DBD90:
	// addi r30,r30,105
	ctx.r30.s64 = ctx.r30.s64 + 105;
loc_825DBD94:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x825dbda8
	if (cr6.lt) goto loc_825DBDA8;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// ble cr6,0x825dbdc8
	if (!cr6.gt) goto loc_825DBDC8;
loc_825DBDA8:
	// stbx r26,r31,r23
	PPC_STORE_U8(ctx.r31.u32 + ctx.r23.u32, ctx.r26.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stwx r26,r31,r24
	PPC_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r26.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r22,r31,r25
	PPC_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r22.u32);
	// bl 0x82a16188
	ctx.lr = 0x825DBDC0;
	sub_82A16188(ctx, base);
	// stwx r3,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r3.u32);
	// stw r30,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r30.u32);
loc_825DBDC8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// blt cr6,0x825dbd10
	if (cr6.lt) goto loc_825DBD10;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmpwi cr6,r22,2
	cr6.compare<int32_t>(ctx.r22.s32, 2, xer);
	// blt cr6,0x825dbcfc
	if (cr6.lt) goto loc_825DBCFC;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DBDEC"))) PPC_WEAK_FUNC(sub_825DBDEC);
PPC_FUNC_IMPL(__imp__sub_825DBDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DBDF0"))) PPC_WEAK_FUNC(sub_825DBDF0);
PPC_FUNC_IMPL(__imp__sub_825DBDF0) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,212(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// bl 0x82dab6d0
	ctx.lr = 0x825DBE14;
	sub_82DAB6D0(ctx, base);
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x825dbe24
	if (!cr6.eq) goto loc_825DBE24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825DBE24:
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

__attribute__((alias("__imp__sub_825DBE38"))) PPC_WEAK_FUNC(sub_825DBE38);
PPC_FUNC_IMPL(__imp__sub_825DBE38) {
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
	ctx.lr = 0x825DBE40;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31763
	ctx.r24.s64 = -2081619968;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r23,255
	ctx.r23.s64 = 255;
	// lwz r11,-3564(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// lwz r27,292(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
loc_825DBE60:
	// li r28,0
	ctx.r28.s64 = 0;
loc_825DBE64:
	// add. r30,r25,r28
	ctx.r30.u64 = ctx.r25.u64 + ctx.r28.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt 0x825dbe78
	if (cr0.lt) goto loc_825DBE78;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825dbe7c
	if (cr6.lt) goto loc_825DBE7C;
loc_825DBE78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DBE7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dc004
	if (cr6.eq) goto loc_825DC004;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x825DBE94;
	sub_82A0C738(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a16490
	ctx.lr = 0x825DBE9C;
	sub_82A16490(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a16c18
	ctx.lr = 0x825DBEA4;
	sub_82A16C18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dbff4
	if (cr6.eq) goto loc_825DBFF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a16280
	ctx.lr = 0x825DBEB8;
	sub_82A16280(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dbff4
	if (cr6.eq) goto loc_825DBFF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x825DBECC;
	sub_83102DB0(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825dbff4
	if (!cr6.eq) goto loc_825DBFF4;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bge cr6,0x825dbff4
	if (!cr6.lt) goto loc_825DBFF4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x825dbf00
	if (cr6.lt) goto loc_825DBF00;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825dbf04
	if (cr6.lt) goto loc_825DBF04;
loc_825DBF00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DBF04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dbf24
	if (cr6.eq) goto loc_825DBF24;
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825dbf28
	goto loc_825DBF28;
loc_825DBF24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DBF28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dbf6c
	if (cr6.eq) goto loc_825DBF6C;
	// lwz r11,2380(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2380);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bne cr6,0x825dbf6c
	if (!cr6.eq) goto loc_825DBF6C;
	// addi r31,r29,2740
	ctx.r31.s64 = ctx.r29.s64 + 2740;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825e92e0
	ctx.lr = 0x825DBF54;
	sub_825E92E0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e9308
	ctx.lr = 0x825DBF64;
	sub_825E9308(ctx, base);
	// stw r23,2380(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2380, ctx.r23.u32);
	// b 0x825dc004
	goto loc_825DC004;
loc_825DBF6C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x825dbf80
	if (cr6.lt) goto loc_825DBF80;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825dbf84
	if (cr6.lt) goto loc_825DBF84;
loc_825DBF80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DBF84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dbfa4
	if (cr6.eq) goto loc_825DBFA4;
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lbz r10,5790(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5790);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825dbfa8
	goto loc_825DBFA8;
loc_825DBFA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DBFA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825dbff4
	if (!cr6.eq) goto loc_825DBFF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83767d18
	ctx.lr = 0x825DBFBC;
	sub_83767D18(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825DBFCC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825dbfcc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DBFCC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,2740
	ctx.r3.s64 = ctx.r29.s64 + 2740;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x825dbffc
	if (!cr6.eq) goto loc_825DBFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x825dc000
	goto loc_825DC000;
loc_825DBFF4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,2740
	ctx.r3.s64 = ctx.r29.s64 + 2740;
loc_825DBFFC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_825DC000:
	// bl 0x825e92e0
	ctx.lr = 0x825DC004;
	sub_825E92E0(ctx, base);
loc_825DC004:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,11
	cr6.compare<int32_t>(ctx.r28.s32, 11, xer);
	// blt cr6,0x825dbe64
	if (cr6.lt) goto loc_825DBE64;
	// addi r25,r25,11
	ctx.r25.s64 = ctx.r25.s64 + 11;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r25,22
	cr6.compare<int32_t>(ctx.r25.s32, 22, xer);
	// blt cr6,0x825dbe60
	if (cr6.lt) goto loc_825DBE60;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC02C"))) PPC_WEAK_FUNC(sub_825DC02C);
PPC_FUNC_IMPL(__imp__sub_825DC02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC030"))) PPC_WEAK_FUNC(sub_825DC030);
PPC_FUNC_IMPL(__imp__sub_825DC030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x825DC038;
	__savegprlr_20(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r20,292(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bl 0x82a0c710
	ctx.lr = 0x825DC054;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c738
	ctx.lr = 0x825DC068;
	sub_82A0C738(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_825DC084:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825dc084
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DC084;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825DC0A0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x825dc0a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DC0A0;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825DC0BC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x825dc0bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DC0BC;
	// lwz r29,128(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r21,r31,11
	ctx.r21.s64 = ctx.r31.s64 * 11;
	// lwz r24,176(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r8,15304
	ctx.r8.s64 = 15304;
loc_825DC0DC:
	// add. r10,r21,r9
	ctx.r10.u64 = ctx.r21.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x825dc0f0
	if (cr0.lt) goto loc_825DC0F0;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825dc0f4
	if (cr6.lt) goto loc_825DC0F4;
loc_825DC0F0:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_825DC0F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dc114
	if (cr6.eq) goto loc_825DC114;
	// add r11,r10,r20
	ctx.r11.u64 = ctx.r10.u64 + ctx.r20.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r7,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subfe r11,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825dc118
	goto loc_825DC118;
loc_825DC114:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_825DC118:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dc1c0
	if (cr6.eq) goto loc_825DC1C0;
	// addi r11,r30,3612
	ctx.r11.s64 = ctx.r30.s64 + 3612;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// bge cr6,0x825dc138
	if (!cr6.lt) goto loc_825DC138;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// b 0x825dc13c
	goto loc_825DC13C;
loc_825DC138:
	// lwz r11,15304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15304);
loc_825DC13C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x825dc1c0
	if (cr6.gt) goto loc_825DC1C0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x825dc170
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DC170;
	// bdzf 4*cr6+eq,0x825dc18c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DC18C;
	// bdzf 4*cr6+eq,0x825dc18c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DC18C;
	// bdzf 4*cr6+eq,0x825dc18c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DC18C;
	// bdzf 4*cr6+eq,0x825dc18c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DC18C;
	// bdzf 4*cr6+eq,0x825dc1a8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DC1A8;
	// bdzf 4*cr6+eq,0x825dc1a8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DC1A8;
	// bne cr6,0x825dc1a8
	if (!cr6.eq) goto loc_825DC1A8;
loc_825DC170:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r29,r7,1
	ctx.r29.s64 = ctx.r7.s64 + 1;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// b 0x825dc1c0
	goto loc_825DC1C0;
loc_825DC18C:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r26,r7,1
	ctx.r26.s64 = ctx.r7.s64 + 1;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// b 0x825dc1c0
	goto loc_825DC1C0;
loc_825DC1A8:
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r24,r7,1
	ctx.r24.s64 = ctx.r7.s64 + 1;
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
loc_825DC1C0:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,15348
	cr6.compare<int32_t>(ctx.r8.s32, 15348, xer);
	// blt cr6,0x825dc0dc
	if (cr6.lt) goto loc_825DC0DC;
	// li r25,255
	ctx.r25.s64 = 255;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_825DC1D8:
	// add. r4,r21,r31
	ctx.r4.u64 = ctx.r21.u64 + ctx.r31.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt 0x825dc1ec
	if (cr0.lt) goto loc_825DC1EC;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825dc1f0
	if (cr6.lt) goto loc_825DC1F0;
loc_825DC1EC:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_825DC1F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dc210
	if (cr6.eq) goto loc_825DC210;
	// add r11,r4,r20
	ctx.r11.u64 = ctx.r4.u64 + ctx.r20.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825dc214
	goto loc_825DC214;
loc_825DC210:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_825DC214:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dc238
	if (cr6.eq) goto loc_825DC238;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x825DC228;
	sub_82A0C7B0(ctx, base);
	// bl 0x8355a178
	ctx.lr = 0x825DC22C;
	sub_8355A178(ctx, base);
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825dc248
	if (!cr6.eq) goto loc_825DC248;
loc_825DC238:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x825dc1d8
	if (cr6.lt) goto loc_825DC1D8;
	// b 0x825dc254
	goto loc_825DC254;
loc_825DC248:
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,255
	cr6.compare<int32_t>(ctx.r31.s32, 255, xer);
	// bne cr6,0x825dc48c
	if (!cr6.eq) goto loc_825DC48C;
loc_825DC254:
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x825dc2dc
	if (cr6.lt) goto loc_825DC2DC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// addi r29,r1,132
	ctx.r29.s64 = ctx.r1.s64 + 132;
	// cmplw cr6,r9,r27
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, xer);
	// beq cr6,0x825dc2dc
	if (cr6.eq) goto loc_825DC2DC;
loc_825DC27C:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a16490
	ctx.lr = 0x825DC28C;
	sub_82A16490(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a16c18
	ctx.lr = 0x825DC294;
	sub_82A16C18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dc2c8
	if (cr6.eq) goto loc_825DC2C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83530640
	ctx.lr = 0x825DC2A8;
	sub_83530640(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8291a4c0
	ctx.lr = 0x825DC2B0;
	sub_8291A4C0(ctx, base);
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x825dc2c8
	if (cr6.gt) goto loc_825DC2C8;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_825DC2C8:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// bne cr6,0x825dc27c
	if (!cr6.eq) goto loc_825DC27C;
	// cmpwi cr6,r25,255
	cr6.compare<int32_t>(ctx.r25.s32, 255, xer);
	// bne cr6,0x825dc48c
	if (!cr6.eq) goto loc_825DC48C;
loc_825DC2DC:
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// blt cr6,0x825dc364
	if (cr6.lt) goto loc_825DC364;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// addi r29,r1,84
	ctx.r29.s64 = ctx.r1.s64 + 84;
	// cmplw cr6,r9,r27
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, xer);
	// beq cr6,0x825dc364
	if (cr6.eq) goto loc_825DC364;
loc_825DC304:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a16490
	ctx.lr = 0x825DC314;
	sub_82A16490(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a16c18
	ctx.lr = 0x825DC31C;
	sub_82A16C18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dc350
	if (cr6.eq) goto loc_825DC350;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83530640
	ctx.lr = 0x825DC330;
	sub_83530640(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8291a4c0
	ctx.lr = 0x825DC338;
	sub_8291A4C0(ctx, base);
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x825dc350
	if (cr6.gt) goto loc_825DC350;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_825DC350:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// bne cr6,0x825dc304
	if (!cr6.eq) goto loc_825DC304;
	// cmpwi cr6,r25,255
	cr6.compare<int32_t>(ctx.r25.s32, 255, xer);
	// bne cr6,0x825dc48c
	if (!cr6.eq) goto loc_825DC48C;
loc_825DC364:
	// cmplwi cr6,r24,1
	cr6.compare<uint32_t>(ctx.r24.u32, 1, xer);
	// blt cr6,0x825dc3ec
	if (cr6.lt) goto loc_825DC3EC;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,180
	ctx.r11.s64 = ctx.r1.s64 + 180;
	// addi r9,r1,180
	ctx.r9.s64 = ctx.r1.s64 + 180;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// addi r29,r1,180
	ctx.r29.s64 = ctx.r1.s64 + 180;
	// cmplw cr6,r9,r27
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, xer);
	// beq cr6,0x825dc3ec
	if (cr6.eq) goto loc_825DC3EC;
loc_825DC38C:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a16490
	ctx.lr = 0x825DC39C;
	sub_82A16490(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a16c18
	ctx.lr = 0x825DC3A4;
	sub_82A16C18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dc3d8
	if (cr6.eq) goto loc_825DC3D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83530640
	ctx.lr = 0x825DC3B8;
	sub_83530640(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8291a4c0
	ctx.lr = 0x825DC3C0;
	sub_8291A4C0(ctx, base);
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x825dc3d8
	if (cr6.gt) goto loc_825DC3D8;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_825DC3D8:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// bne cr6,0x825dc38c
	if (!cr6.eq) goto loc_825DC38C;
	// cmpwi cr6,r25,255
	cr6.compare<int32_t>(ctx.r25.s32, 255, xer);
	// bne cr6,0x825dc48c
	if (!cr6.eq) goto loc_825DC48C;
loc_825DC3EC:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_825DC3F0:
	// add. r10,r21,r3
	ctx.r10.u64 = ctx.r21.u64 + ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x825dc404
	if (cr0.lt) goto loc_825DC404;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825dc408
	if (cr6.lt) goto loc_825DC408;
loc_825DC404:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_825DC408:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dc428
	if (cr6.eq) goto loc_825DC428;
	// add r11,r10,r20
	ctx.r11.u64 = ctx.r10.u64 + ctx.r20.u64;
	// lbz r9,5768(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825dc42c
	goto loc_825DC42C;
loc_825DC428:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_825DC42C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825dc490
	if (!cr6.eq) goto loc_825DC490;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x825dc44c
	if (cr6.lt) goto loc_825DC44C;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825dc450
	if (cr6.lt) goto loc_825DC450;
loc_825DC44C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_825DC450:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dc470
	if (cr6.eq) goto loc_825DC470;
	// add r11,r10,r20
	ctx.r11.u64 = ctx.r10.u64 + ctx.r20.u64;
	// lbz r10,5790(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5790);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825dc474
	goto loc_825DC474;
loc_825DC470:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_825DC474:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825dc490
	if (!cr6.eq) goto loc_825DC490;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// blt cr6,0x825dc3f0
	if (cr6.lt) goto loc_825DC3F0;
loc_825DC48C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_825DC490:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC498"))) PPC_WEAK_FUNC(sub_825DC498);
PPC_FUNC_IMPL(__imp__sub_825DC498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825DC4A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r29,192(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// bl 0x82a0c738
	ctx.lr = 0x825DC4BC;
	sub_82A0C738(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c738
	ctx.lr = 0x825DC4D0;
	sub_82A0C738(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r28,-31780
	ctx.r28.s64 = -2082734080;
loc_825DC4DC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x825dc4ec
	if (cr6.lt) goto loc_825DC4EC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_825DC4EC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r5,22
	cr6.compare<int32_t>(ctx.r5.s32, 22, xer);
	// blt cr6,0x825dc504
	if (cr6.lt) goto loc_825DC504;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_825DC504:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x825dc518
	if (!cr6.eq) goto loc_825DC518;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x825dc520
	goto loc_825DC520;
loc_825DC518:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_825DC520:
	// cmpwi cr6,r5,22
	cr6.compare<int32_t>(ctx.r5.s32, 22, xer);
	// bge cr6,0x825dc560
	if (!cr6.lt) goto loc_825DC560;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x825dc538
	if (cr6.eq) goto loc_825DC538;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825dc560
	if (!cr6.eq) goto loc_825DC560;
loc_825DC538:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a169d8
	ctx.lr = 0x825DC54C;
	sub_82A169D8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// b 0x825dc568
	goto loc_825DC568;
loc_825DC560:
	// ld r11,28696(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 28696);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_825DC568:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x825dc4dc
	if (cr6.lt) goto loc_825DC4DC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC580"))) PPC_WEAK_FUNC(sub_825DC580);
PPC_FUNC_IMPL(__imp__sub_825DC580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x825DC588;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r25,192(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// bl 0x82a0c738
	ctx.lr = 0x825DC5A8;
	sub_82A0C738(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c738
	ctx.lr = 0x825DC5BC;
	sub_82A0C738(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r29,r27,3640
	ctx.r29.s64 = ctx.r27.s64 + 3640;
	// stb r10,3636(r27)
	PPC_STORE_U8(ctx.r27.u32 + 3636, ctx.r10.u8);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r24,255
	ctx.r24.s64 = 255;
	// addi r26,r11,28696
	ctx.r26.s64 = ctx.r11.s64 + 28696;
loc_825DC5E0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,24
	cr6.compare<uint32_t>(ctx.r28.u32, 24, xer);
	// blt cr6,0x825dc5f0
	if (cr6.lt) goto loc_825DC5F0;
	// li r11,23
	ctx.r11.s64 = 23;
loc_825DC5F0:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x825dc6a8
	if (cr6.eq) goto loc_825DC6A8;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825dc618
	if (cr0.eq) goto loc_825DC618;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x825dc6a8
	if (!cr6.eq) goto loc_825DC6A8;
loc_825DC618:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825dc634
	if (!cr6.eq) goto loc_825DC634;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x825dc65c
	goto loc_825DC65C;
loc_825DC634:
	// lhz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x825dc654
	if (!cr6.eq) goto loc_825DC654;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// beq cr6,0x825dc658
	if (cr6.eq) goto loc_825DC658;
loc_825DC654:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DC658:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_825DC65C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825dc6a8
	if (!cr6.eq) goto loc_825DC6A8;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a16a60
	ctx.lr = 0x825DC67C;
	sub_82A16A60(ctx, base);
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// bge cr6,0x825dc6a8
	if (!cr6.lt) goto loc_825DC6A8;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// blt cr6,0x825dc694
	if (cr6.lt) goto loc_825DC694;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
loc_825DC694:
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// beq cr6,0x825dc6a0
	if (cr6.eq) goto loc_825DC6A0;
	// stb r23,3636(r27)
	PPC_STORE_U8(ctx.r27.u32 + 3636, ctx.r23.u8);
loc_825DC6A0:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// b 0x825dc6ac
	goto loc_825DC6AC;
loc_825DC6A8:
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
loc_825DC6AC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r28,24
	cr6.compare<uint32_t>(ctx.r28.u32, 24, xer);
	// blt cr6,0x825dc5e0
	if (cr6.lt) goto loc_825DC5E0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC6C8"))) PPC_WEAK_FUNC(sub_825DC6C8);
PPC_FUNC_IMPL(__imp__sub_825DC6C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x825DC6D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lbz r11,862(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 862);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r9,r10,64832
	ctx.r9.u64 = ctx.r10.u64 | 64832;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// lwzx r8,r27,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r26,0(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,292(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bgt cr6,0x825dc8f4
	if (cr6.gt) goto loc_825DC8F4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x825dc82c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DC82C;
	// bdzf 4*cr6+eq,0x825dc884
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DC884;
	// bdzf 4*cr6+eq,0x825dc898
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DC898;
	// bdzf 4*cr6+eq,0x825dc8c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DC8C4;
	// bne cr6,0x825dc8f0
	if (!cr6.eq) goto loc_825DC8F0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r25,r11,34548
	ctx.r25.u64 = ctx.r11.u64 | 34548;
	// b 0x825dc73c
	goto loc_825DC73C;
loc_825DC738:
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
loc_825DC73C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a0c710
	ctx.lr = 0x825DC744;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c738
	ctx.lr = 0x825DC758;
	sub_82A0C738(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2a310
	ctx.lr = 0x825DC768;
	sub_82A2A310(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825dc780
	if (cr6.lt) goto loc_825DC780;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825dc784
	if (cr6.lt) goto loc_825DC784;
loc_825DC780:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DC784:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dc7a8
	if (cr6.eq) goto loc_825DC7A8;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x825DC798;
	sub_82A0C7B0(ctx, base);
	// lbz r11,5045(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5045);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825dc7a8
	if (!cr6.eq) goto loc_825DC7A8;
	// li r24,1
	ctx.r24.s64 = 1;
loc_825DC7A8:
	// add r3,r31,r25
	ctx.r3.u64 = ctx.r31.u64 + ctx.r25.u64;
	// bl 0x82917b90
	ctx.lr = 0x825DC7B0;
	sub_82917B90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a16440
	ctx.lr = 0x825DC7BC;
	sub_82A16440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825dc7d4
	if (cr6.lt) goto loc_825DC7D4;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825dc7d8
	if (cr6.lt) goto loc_825DC7D8;
loc_825DC7D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DC7D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dc7fc
	if (cr6.eq) goto loc_825DC7FC;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x825DC7EC;
	sub_82A0C7B0(ctx, base);
	// lbz r11,5044(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5044);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825dc7fc
	if (!cr6.eq) goto loc_825DC7FC;
	// li r24,1
	ctx.r24.s64 = 1;
loc_825DC7FC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// blt cr6,0x825dc738
	if (cr6.lt) goto loc_825DC738;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// stb r8,862(r27)
	PPC_STORE_U8(ctx.r27.u32 + 862, ctx.r8.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_825DC82C:
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// bl 0x83535150
	ctx.lr = 0x825DC84C;
	sub_83535150(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
	// bl 0x83535150
	ctx.lr = 0x825DC86C;
	sub_83535150(ctx, base);
	// lbz r11,862(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 862);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,862(r27)
	PPC_STORE_U8(ctx.r27.u32 + 862, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_825DC884:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stb r11,862(r27)
	PPC_STORE_U8(ctx.r27.u32 + 862, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_825DC898:
	// bl 0x8378cba8
	ctx.lr = 0x825DC89C;
	sub_8378CBA8(ctx, base);
	// bl 0x8378cc20
	ctx.lr = 0x825DC8A0;
	sub_8378CC20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dc8f4
	if (cr6.eq) goto loc_825DC8F4;
	// lbz r11,862(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 862);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,862(r27)
	PPC_STORE_U8(ctx.r27.u32 + 862, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_825DC8C4:
	// addi r6,r27,3412
	ctx.r6.s64 = ctx.r27.s64 + 3412;
	// addi r5,r10,5356
	ctx.r5.s64 = ctx.r10.s64 + 5356;
	// addi r4,r27,3628
	ctx.r4.s64 = ctx.r27.s64 + 3628;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82632c78
	ctx.lr = 0x825DC8D8;
	sub_82632C78(ctx, base);
	// lbz r11,862(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 862);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,862(r27)
	PPC_STORE_U8(ctx.r27.u32 + 862, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_825DC8F0:
	// li r23,1
	ctx.r23.s64 = 1;
loc_825DC8F4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC900"))) PPC_WEAK_FUNC(sub_825DC900);
PPC_FUNC_IMPL(__imp__sub_825DC900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825DC908;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r9,r11,64832
	ctx.r9.u64 = ctx.r11.u64 | 64832;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lwzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// lwz r3,-3564(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r30,292(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r4,5360(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5360);
	// addis r31,r6,1
	ctx.r31.s64 = ctx.r6.s64 + 65536;
	// addi r31,r31,20120
	ctx.r31.s64 = ctx.r31.s64 + 20120;
	// bl 0x82a0c710
	ctx.lr = 0x825DC940;
	sub_82A0C710(ctx, base);
	// lwz r11,5360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5360);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x825dc958
	if (!cr6.lt) goto loc_825DC958;
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x825dc95c
	goto loc_825DC95C;
loc_825DC958:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_825DC95C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,2808(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2808, ctx.r11.u32);
	// beq cr6,0x825dca1c
	if (cr6.eq) goto loc_825DCA1C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x825dc980
	if (cr6.lt) goto loc_825DC980;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x825dc984
	if (cr6.lt) goto loc_825DC984;
loc_825DC980:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825DC984:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825dca1c
	if (cr6.eq) goto loc_825DCA1C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x825dc9bc
	if (cr6.lt) goto loc_825DC9BC;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x825dc9bc
	if (!cr6.lt) goto loc_825DC9BC;
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
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// b 0x825dc9c0
	goto loc_825DC9C0;
loc_825DC9BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DC9C0:
	// addi r10,r3,3612
	ctx.r10.s64 = ctx.r3.s64 + 3612;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x825dc9dc
	if (!cr6.lt) goto loc_825DC9DC;
	// addi r11,r11,3826
	ctx.r11.s64 = ctx.r11.s64 + 3826;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x825dc9e0
	goto loc_825DC9E0;
loc_825DC9DC:
	// lwz r11,15304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15304);
loc_825DC9E0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x825dca1c
	if (!cr6.eq) goto loc_825DCA1C;
	// lwz r11,5360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5360);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x825dca10
	if (!cr6.lt) goto loc_825DCA10;
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,2808(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2808, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825DCA10:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,2808(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2808, ctx.r11.u32);
loc_825DCA1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DCA24"))) PPC_WEAK_FUNC(sub_825DCA24);
PPC_FUNC_IMPL(__imp__sub_825DCA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCA28"))) PPC_WEAK_FUNC(sub_825DCA28);
PPC_FUNC_IMPL(__imp__sub_825DCA28) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825DCA40;
	sub_825D8F10(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,65
	ctx.r4.u64 = ctx.r4.u64 | 65;
	// bl 0x83535150
	ctx.lr = 0x825DCA60;
	sub_83535150(ctx, base);
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

__attribute__((alias("__imp__sub_825DCA74"))) PPC_WEAK_FUNC(sub_825DCA74);
PPC_FUNC_IMPL(__imp__sub_825DCA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCA78"))) PPC_WEAK_FUNC(sub_825DCA78);
PPC_FUNC_IMPL(__imp__sub_825DCA78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825DCA80;
	__savegprlr_25(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825dcac0
	if (cr6.eq) goto loc_825DCAC0;
	// bl 0x82da1d10
	ctx.lr = 0x825DCAA0;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dcabc
	if (cr6.eq) goto loc_825DCABC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,2788(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2788, ctx.r11.u8);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DCABC:
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
loc_825DCAC0:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r26,232(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// ori r9,r10,64832
	ctx.r9.u64 = ctx.r10.u64 | 64832;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r27,132(r7)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 132);
	// stb r29,2789(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2789, ctx.r29.u8);
	// lbz r6,4504(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4504);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x825dcb4c
	if (!cr6.eq) goto loc_825DCB4C;
	// bl 0x837d59a0
	ctx.lr = 0x825DCAF8;
	sub_837D59A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837d5cf8
	ctx.lr = 0x825DCB00;
	sub_837D5CF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825dcb0c
	if (cr6.eq) goto loc_825DCB0C;
	// stb r29,2788(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2788, ctx.r29.u8);
loc_825DCB0C:
	// lwz r11,4460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4460);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x825dcb2c
	if (!cr6.eq) goto loc_825DCB2C;
	// lwz r25,4488(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4488);
	// bl 0x83740858
	ctx.lr = 0x825DCB20;
	sub_83740858(ctx, base);
	// cmplw cr6,r25,r3
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, xer);
	// blt cr6,0x825dcb2c
	if (cr6.lt) goto loc_825DCB2C;
	// stb r29,2788(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2788, ctx.r29.u8);
loc_825DCB2C:
	// lwz r11,4460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4460);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x825dcb80
	if (!cr6.eq) goto loc_825DCB80;
	// lwz r11,7140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7140);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x825dcb80
	if (!cr6.eq) goto loc_825DCB80;
	// stb r29,2788(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2788, ctx.r29.u8);
	// b 0x825dcb80
	goto loc_825DCB80;
loc_825DCB4C:
	// bl 0x837d59a0
	ctx.lr = 0x825DCB50;
	sub_837D59A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837d5cf8
	ctx.lr = 0x825DCB58;
	sub_837D5CF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825dcb80
	if (!cr6.eq) goto loc_825DCB80;
	// lwz r11,4460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4460);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825dcb80
	if (!cr6.eq) goto loc_825DCB80;
	// stb r28,2789(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2789, ctx.r28.u8);
	// stb r28,2788(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2788, ctx.r28.u8);
	// bl 0x835f6d58
	ctx.lr = 0x825DCB78;
	sub_835F6D58(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x835f6d68
	ctx.lr = 0x825DCB80;
	sub_835F6D68(ctx, base);
loc_825DCB80:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a23768
	ctx.lr = 0x825DCB90;
	sub_82A23768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x825DCBA0;
	sub_831CE980(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x825dcbc0
	if (cr6.eq) goto loc_825DCBC0;
	// stb r28,2789(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2789, ctx.r28.u8);
	// stb r28,2788(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2788, ctx.r28.u8);
	// bl 0x835f6d58
	ctx.lr = 0x825DCBB8;
	sub_835F6D58(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x835f6d68
	ctx.lr = 0x825DCBC0;
	sub_835F6D68(ctx, base);
loc_825DCBC0:
	// lbz r11,4506(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4506);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// lbz r11,1764(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1764);
	// bne cr6,0x825dcbec
	if (!cr6.eq) goto loc_825DCBEC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825dcbf8
	if (!cr6.eq) goto loc_825DCBF8;
	// stb r29,2790(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2790, ctx.r29.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x825DCBE4;
	sub_83102DB0(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DCBEC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dcbf8
	if (cr6.eq) goto loc_825DCBF8;
	// stb r28,2790(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2790, ctx.r28.u8);
loc_825DCBF8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x825DCC00;
	sub_83102DB0(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DCC08"))) PPC_WEAK_FUNC(sub_825DCC08);
PPC_FUNC_IMPL(__imp__sub_825DCC08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825DCC10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,862(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 862);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x825dcc84
	if (cr6.lt) goto loc_825DCC84;
	// bne cr6,0x825dcdb8
	if (!cr6.eq) goto loc_825DCDB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// stb r11,2792(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2792, ctx.r11.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// bl 0x83535150
	ctx.lr = 0x825DCC58;
	sub_83535150(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,12
	ctx.r4.u64 = ctx.r4.u64 | 12;
	// bl 0x83535150
	ctx.lr = 0x825DCC78;
	sub_83535150(ctx, base);
loc_825DCC78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825DCC84:
	// lbz r11,7914(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7914);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dcc78
	if (cr6.eq) goto loc_825DCC78;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r30,728(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 728);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825dcc78
	if (cr6.eq) goto loc_825DCC78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a56490
	ctx.lr = 0x825DCCA8;
	sub_82A56490(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dcc78
	if (cr6.eq) goto loc_825DCC78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a56488
	ctx.lr = 0x825DCCBC;
	sub_82A56488(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825dcc78
	if (cr6.eq) goto loc_825DCC78;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ab10
	ctx.lr = 0x825DCCD8;
	sub_82A1AB10(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825dccf0
	if (cr6.lt) goto loc_825DCCF0;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x825dccf4
	if (cr6.lt) goto loc_825DCCF4;
loc_825DCCF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DCCF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dcdb0
	if (cr6.eq) goto loc_825DCDB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ab20
	ctx.lr = 0x825DCD08;
	sub_82A1AB20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825dcd1c
	if (cr6.lt) goto loc_825DCD1C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x825dcd20
	if (cr6.lt) goto loc_825DCD20;
loc_825DCD1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DCD20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dcdb0
	if (cr6.eq) goto loc_825DCDB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ab40
	ctx.lr = 0x825DCD34;
	sub_82A1AB40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825dcdb0
	if (cr6.eq) goto loc_825DCDB0;
	// stb r29,2792(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2792, ctx.r29.u8);
	// addi r3,r31,3784
	ctx.r3.s64 = ctx.r31.s64 + 3784;
	// bl 0x82a19c88
	ctx.lr = 0x825DCD48;
	sub_82A19C88(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,3788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3788, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,3792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3792, ctx.r10.u32);
	// bl 0x82a1ab10
	ctx.lr = 0x825DCD60;
	sub_82A1AB10(ctx, base);
	// stw r3,3796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3796, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ab20
	ctx.lr = 0x825DCD6C;
	sub_82A1AB20(ctx, base);
	// stw r3,3800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3800, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ab30
	ctx.lr = 0x825DCD78;
	sub_82A1AB30(ctx, base);
	// stw r3,3804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3804, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ab38
	ctx.lr = 0x825DCD84;
	sub_82A1AB38(ctx, base);
	// stw r3,3808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3808, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ab48
	ctx.lr = 0x825DCD90;
	sub_82A1AB48(ctx, base);
	// stw r3,3812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3812, ctx.r3.u32);
	// stb r29,3816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3816, ctx.r29.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ab40
	ctx.lr = 0x825DCDA0;
	sub_82A1AB40(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r3,3824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3824, ctx.r3.u32);
	// ori r8,r9,64816
	ctx.r8.u64 = ctx.r9.u64 | 64816;
	// stbx r29,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r29.u8);
loc_825DCDB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r29,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r29.u8);
loc_825DCDB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DCDC0"))) PPC_WEAK_FUNC(sub_825DCDC0);
PPC_FUNC_IMPL(__imp__sub_825DCDC0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4456(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// cmpwi cr6,r9,10
	cr6.compare<int32_t>(ctx.r9.s32, 10, xer);
	// bne cr6,0x825dce2c
	if (!cr6.eq) goto loc_825DCE2C;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// bl 0x83535150
	ctx.lr = 0x825DCE0C;
	sub_83535150(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,53
	ctx.r4.u64 = ctx.r4.u64 | 53;
	// b 0x825dce30
	goto loc_825DCE30;
loc_825DCE2C:
	// ori r4,r4,27
	ctx.r4.u64 = ctx.r4.u64 | 27;
loc_825DCE30:
	// bl 0x83535150
	ctx.lr = 0x825DCE34;
	sub_83535150(ctx, base);
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

__attribute__((alias("__imp__sub_825DCE48"))) PPC_WEAK_FUNC(sub_825DCE48);
PPC_FUNC_IMPL(__imp__sub_825DCE48) {
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
	// lbz r11,3817(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3817);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825dcebc
	if (!cr6.eq) goto loc_825DCEBC;
	// lwz r11,3736(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3736);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x825dce90
	if (cr6.eq) goto loc_825DCE90;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x825dcebc
	if (!cr6.eq) goto loc_825DCEBC;
	// lwz r11,3788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3788);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x825dcebc
	if (cr6.eq) goto loc_825DCEBC;
loc_825DCE90:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// bl 0x82a47d40
	ctx.lr = 0x825DCEA0;
	sub_82A47D40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825dceb4
	if (!cr6.eq) goto loc_825DCEB4;
	// stw r30,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r30.u32);
	// b 0x825dcebc
	goto loc_825DCEBC;
loc_825DCEB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r11.u32);
loc_825DCEBC:
	// li r11,255
	ctx.r11.s64 = 255;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,3628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3628, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,3632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3632, ctx.r11.u32);
	// addi r11,r31,3628
	ctx.r11.s64 = ctx.r31.s64 + 3628;
	// bl 0x825d8f10
	ctx.lr = 0x825DCED8;
	sub_825D8F10(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r11,r11,195
	ctx.r11.s64 = ctx.r11.s64 + 195;
	// addi r3,r31,2740
	ctx.r3.s64 = ctx.r31.s64 + 2740;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r30.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r9,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r9.u8);
	// bl 0x83131d70
	ctx.lr = 0x825DCF00;
	sub_83131D70(ctx, base);
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

__attribute__((alias("__imp__sub_825DCF18"))) PPC_WEAK_FUNC(sub_825DCF18);
PPC_FUNC_IMPL(__imp__sub_825DCF18) {
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
	// addi r30,r3,2740
	ctx.r30.s64 = ctx.r3.s64 + 2740;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e9338
	ctx.lr = 0x825DCF40;
	sub_825E9338(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825DCF4C;
	sub_825D8F10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262f160
	ctx.lr = 0x825DCF58;
	sub_8262F160(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825dcfcc
	if (cr6.eq) goto loc_825DCFCC;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// stb r10,7677(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7677, ctx.r10.u8);
	// li r7,14
	ctx.r7.s64 = 14;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,8
	ctx.r5.s64 = 8;
	// stwx r9,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r3,r11,195
	ctx.r3.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
loc_825DCFCC:
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,13
	ctx.r10.s64 = 13;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// li r7,16
	ctx.r7.s64 = 16;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,17
	ctx.r5.s64 = 17;
	// lis r4,-31763
	ctx.r4.s64 = -2081619968;
	// stwx r10,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r3,r11,195
	ctx.r3.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// lwz r10,-3564(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + -3564);
	// lwz r6,292(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// lwz r5,5356(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 5356);
	// cmpwi cr6,r5,5
	cr6.compare<int32_t>(ctx.r5.s32, 5, xer);
	// bne cr6,0x825dd08c
	if (!cr6.eq) goto loc_825DD08C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
loc_825DD08C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,18
	ctx.r10.s64 = 18;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// li r8,19
	ctx.r8.s64 = 19;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r4,2
	ctx.r4.s64 = 2;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r6.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stb r6,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r6.u8);
	// bl 0x83131d70
	ctx.lr = 0x825DD138;
	sub_83131D70(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r31,3736
	ctx.r3.s64 = ctx.r31.s64 + 3736;
	// bl 0x82dab6e0
	ctx.lr = 0x825DD144;
	sub_82DAB6E0(ctx, base);
	// addi r3,r31,2780
	ctx.r3.s64 = ctx.r31.s64 + 2780;
	// bl 0x82a199b0
	ctx.lr = 0x825DD14C;
	sub_82A199B0(ctx, base);
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

__attribute__((alias("__imp__sub_825DD164"))) PPC_WEAK_FUNC(sub_825DD164);
PPC_FUNC_IMPL(__imp__sub_825DD164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD168"))) PPC_WEAK_FUNC(sub_825DD168);
PPC_FUNC_IMPL(__imp__sub_825DD168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825DD170;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r8,r10,64832
	ctx.r8.u64 = ctx.r10.u64 | 64832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r7,r28,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	// lwz r31,292(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r26,6112(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// lwz r27,192(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r30,5360(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5360);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r25,12(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// bl 0x82a0c710
	ctx.lr = 0x825DD1BC;
	sub_82A0C710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r26,r31,5364
	ctx.r26.s64 = ctx.r31.s64 + 5364;
	// lbz r11,252(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 252);
	// lfs f31,9008(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f30,f11,f0
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82a407e0
	ctx.lr = 0x825DD204;
	sub_82A407E0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// lfs f0,-10732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10732);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x825dd220
	if (!cr6.lt) goto loc_825DD220;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x825dd22c
	goto loc_825DD22C;
loc_825DD220:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x825dd230
	if (cr6.lt) goto loc_825DD230;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
loc_825DD22C:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_825DD230:
	// lwz r3,5408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5408);
	// bl 0x82a29f20
	ctx.lr = 0x825DD238;
	sub_82A29F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dd270
	if (cr6.eq) goto loc_825DD270;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f12,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-11368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11368);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x825dd270
	if (!cr6.lt) goto loc_825DD270;
	// li r29,1
	ctx.r29.s64 = 1;
loc_825DD270:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a32ec0
	ctx.lr = 0x825DD27C;
	sub_82A32EC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825dd398
	if (!cr6.eq) goto loc_825DD398;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82a1a878
	ctx.lr = 0x825DD298;
	sub_82A1A878(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x825dd2f8
	if (cr6.lt) goto loc_825DD2F8;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f12,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-9972(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9972);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x825dd2f8
	if (!cr6.lt) goto loc_825DD2F8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825ca9d8
	ctx.lr = 0x825DD2D8;
	sub_825CA9D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825cb910
	ctx.lr = 0x825DD2E4;
	sub_825CB910(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,19176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19176);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x825dd2fc
	if (cr6.lt) goto loc_825DD2FC;
loc_825DD2F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DD2FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dd384
	if (cr6.eq) goto loc_825DD384;
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// lwz r10,4472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// ori r9,r11,34079
	ctx.r9.u64 = ctx.r11.u64 | 34079;
	// mulhwu r8,r10,r9
	ctx.r8.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r7,r8,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// mulli r6,r7,100
	ctx.r6.s64 = ctx.r7.s64 * 100;
	// subf r11,r6,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r6.s64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x825dd344
	if (!cr6.lt) goto loc_825DD344;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3412(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3412, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DD344:
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// bge cr6,0x825dd364
	if (!cr6.lt) goto loc_825DD364;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,3412(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3412, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DD364:
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// bge cr6,0x825dd384
	if (!cr6.lt) goto loc_825DD384;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,3412(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3412, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DD384:
	// stw r30,3412(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3412, ctx.r30.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DD398:
	// stw r29,3412(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3412, ctx.r29.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DD3AC"))) PPC_WEAK_FUNC(sub_825DD3AC);
PPC_FUNC_IMPL(__imp__sub_825DD3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD3B0"))) PPC_WEAK_FUNC(sub_825DD3B0);
PPC_FUNC_IMPL(__imp__sub_825DD3B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825DD3B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,7714(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7714);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dd598
	if (cr6.eq) goto loc_825DD598;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// addi r28,r28,-704
	ctx.r28.s64 = ctx.r28.s64 + -704;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,132(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825dd3f8
	if (!cr6.eq) goto loc_825DD3F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,7714(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7714, ctx.r11.u8);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825DD3F8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82a229e8
	ctx.lr = 0x825DD404;
	sub_82A229E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x825DD414;
	sub_831CE980(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(ctx.r11.s32, 23, xer);
	// bne cr6,0x825dd590
	if (!cr6.eq) goto loc_825DD590;
	// lbz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825dd590
	if (cr6.eq) goto loc_825DD590;
	// lbz r10,175(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 175);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825dd588
	if (!cr6.eq) goto loc_825DD588;
	// lbz r10,177(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 177);
	// lwz r29,108(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825dd4e8
	if (cr6.eq) goto loc_825DD4E8;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x825dd460
	if (cr6.eq) goto loc_825DD460;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// beq cr6,0x825dd460
	if (cr6.eq) goto loc_825DD460;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x825dd468
	goto loc_825DD468;
loc_825DD460:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_825DD468:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a2a310
	ctx.lr = 0x825DD478;
	sub_82A2A310(ctx, base);
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,-3564(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x825DD48C;
	sub_82A0C738(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a161a8
	ctx.lr = 0x825DD494;
	sub_82A161A8(ctx, base);
	// addi r9,r30,844
	ctx.r9.s64 = ctx.r30.s64 + 844;
	// addi r8,r29,846
	ctx.r8.s64 = ctx.r29.s64 + 846;
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r4,3372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3372, ctx.r4.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stwx r11,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r11.u32);
	// stwx r7,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r7.u32);
	// bl 0x82a23e98
	ctx.lr = 0x825DD4C4;
	sub_82A23E98(ctx, base);
	// addi r10,r30,848
	ctx.r10.s64 = ctx.r30.s64 + 848;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r9,7714(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7714, ctx.r9.u8);
	// bl 0x83102db0
	ctx.lr = 0x825DD4E0;
	sub_83102DB0(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825DD4E8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x825dd500
	if (cr6.eq) goto loc_825DD500;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// beq cr6,0x825dd500
	if (cr6.eq) goto loc_825DD500;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x825dd508
	goto loc_825DD508;
loc_825DD500:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_825DD508:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a2a310
	ctx.lr = 0x825DD518;
	sub_82A2A310(ctx, base);
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,-3564(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x825DD52C;
	sub_82A0C738(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a161a8
	ctx.lr = 0x825DD534;
	sub_82A161A8(ctx, base);
	// addi r9,r30,844
	ctx.r9.s64 = ctx.r30.s64 + 844;
	// addi r8,r29,846
	ctx.r8.s64 = ctx.r29.s64 + 846;
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r4,3373(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3373, ctx.r4.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stwx r11,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r11.u32);
	// stwx r7,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r7.u32);
	// bl 0x82a23e98
	ctx.lr = 0x825DD564;
	sub_82A23E98(ctx, base);
	// addi r10,r29,848
	ctx.r10.s64 = ctx.r29.s64 + 848;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r9,7714(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7714, ctx.r9.u8);
	// bl 0x83102db0
	ctx.lr = 0x825DD580;
	sub_83102DB0(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825DD588:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,7714(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7714, ctx.r11.u8);
loc_825DD590:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x825DD598;
	sub_83102DB0(ctx, base);
loc_825DD598:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DD5A0"))) PPC_WEAK_FUNC(sub_825DD5A0);
PPC_FUNC_IMPL(__imp__sub_825DD5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// addi r8,r9,-112
	ctx.r8.s64 = ctx.r9.s64 + -112;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,27
	ctx.r9.s64 = 27;
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_825DD5C8:
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stwu r10,112(r8)
	ea = 112 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stb r10,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stb r10,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r10.u8);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stb r10,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r10.u8);
	// stfs f0,96(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// stfs f0,96(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f0,104(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stbu r10,112(r11)
	ea = 112 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x825dd5c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DD5C8;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_825DD670:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stb r10,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stb r10,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r10.u8);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stb r10,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r10.u8);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// stfs f0,96(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f0,104(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stbu r10,112(r11)
	ea = 112 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x825dd670
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DD670;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD6E8"))) PPC_WEAK_FUNC(sub_825DD6E8);
PPC_FUNC_IMPL(__imp__sub_825DD6E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825DD6F0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r31,r30,-24
	ctx.r31.s64 = ctx.r30.s64 + -24;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_825DD714:
	// stfs f31,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f31,60(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfsu f31,76(r31)
	ea = 76 + ctx.r31.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r31.u32 = ea;
	// bl 0x82a46eb8
	ctx.lr = 0x825DD734;
	sub_82A46EB8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,76
	ctx.r30.s64 = ctx.r30.s64 + 76;
	// bge 0x825dd714
	if (!cr0.lt) goto loc_825DD714;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DD750"))) PPC_WEAK_FUNC(sub_825DD750);
PPC_FUNC_IMPL(__imp__sub_825DD750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825DD758;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_825DD77C:
	// stfs f31,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stfs f31,-4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x82a3b9a8
	ctx.lr = 0x825DD79C;
	sub_82A3B9A8(ctx, base);
	// stfs f31,1336(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1336, temp.u32);
	// stfs f31,1340(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1340, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f31,1344(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1344, temp.u32);
	// stfs f31,1348(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1348, temp.u32);
	// stfs f31,1352(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1352, temp.u32);
	// stfs f31,1356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1356, temp.u32);
	// bl 0x82a47028
	ctx.lr = 0x825DD7BC;
	sub_82A47028(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,1396
	ctx.r30.s64 = ctx.r30.s64 + 1396;
	// addi r31,r31,1396
	ctx.r31.s64 = ctx.r31.s64 + 1396;
	// bge 0x825dd77c
	if (!cr0.lt) goto loc_825DD77C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DD7DC"))) PPC_WEAK_FUNC(sub_825DD7DC);
PPC_FUNC_IMPL(__imp__sub_825DD7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD7E0"))) PPC_WEAK_FUNC(sub_825DD7E0);
PPC_FUNC_IMPL(__imp__sub_825DD7E0) {
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
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// li r30,1
	ctx.r30.s64 = 1;
loc_825DD7FC:
	// addi r31,r31,-48
	ctx.r31.s64 = ctx.r31.s64 + -48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x825DD808;
	sub_83102DB0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x825dd7fc
	if (!cr0.lt) goto loc_825DD7FC;
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

__attribute__((alias("__imp__sub_825DD828"))) PPC_WEAK_FUNC(sub_825DD828);
PPC_FUNC_IMPL(__imp__sub_825DD828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825DD830;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-37
	ctx.r11.s64 = ctx.r4.s64 + -37;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bgt cr6,0x825dd9d8
	if (cr6.gt) goto loc_825DD9D8;
	// lis r12,-32162
	ctx.r12.s64 = -2107768832;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-10132
	ctx.r12.s64 = ctx.r12.s64 + -10132;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_825DD8B0;
	case 1:
		goto loc_825DD8C0;
	case 2:
		goto loc_825DD8D4;
	case 3:
		goto loc_825DD8E4;
	case 4:
		goto loc_825DD8F4;
	case 5:
		goto loc_825DD904;
	case 6:
		goto loc_825DD910;
	case 7:
		goto loc_825DD924;
	case 8:
		goto loc_825DD938;
	case 9:
		goto loc_825DD944;
	case 10:
		goto loc_825DD954;
	case 11:
		goto loc_825DD964;
	case 12:
		goto loc_825DD978;
	case 13:
		goto loc_825DD988;
	case 14:
		goto loc_825DD99C;
	case 15:
		goto loc_825DD9B0;
	case 16:
		goto loc_825DD9C0;
	default:
		return;
	}
	// lwz r18,-10064(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10064);
	// lwz r18,-10048(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10048);
	// lwz r18,-10028(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10028);
	// lwz r18,-10012(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + -10012);
	// lwz r18,-9996(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9996);
	// lwz r18,-9980(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9980);
	// lwz r18,-9968(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9968);
	// lwz r18,-9948(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9948);
	// lwz r18,-9928(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9928);
	// lwz r18,-9916(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9916);
	// lwz r18,-9900(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9900);
	// lwz r18,-9884(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9884);
	// lwz r18,-9864(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9864);
	// lwz r18,-9848(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9848);
	// lwz r18,-9828(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9828);
	// lwz r18,-9808(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9808);
	// lwz r18,-9792(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9792);
loc_825DD8B0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634800
	ctx.lr = 0x825DD8BC;
	sub_82634800(ctx, base);
	// b 0x825dd9d8
	goto loc_825DD9D8;
loc_825DD8C0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82633d30
	ctx.lr = 0x825DD8CC;
	sub_82633D30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825dd9d8
	goto loc_825DD9D8;
loc_825DD8D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634180
	ctx.lr = 0x825DD8DC;
	sub_82634180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825dd9d8
	goto loc_825DD9D8;
loc_825DD8E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634918
	ctx.lr = 0x825DD8EC;
	sub_82634918(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825dd9d8
	goto loc_825DD9D8;
loc_825DD8F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826354c8
	ctx.lr = 0x825DD8FC;
	sub_826354C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825dd9d8
	goto loc_825DD9D8;
loc_825DD904:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634238
	ctx.lr = 0x825DD90C;
	sub_82634238(ctx, base);
	// b 0x825dd9d8
	goto loc_825DD9D8;
loc_825DD910:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82633e30
	ctx.lr = 0x825DD91C;
	sub_82633E30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825dd9d8
	goto loc_825DD9D8;
loc_825DD924:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82633f38
	ctx.lr = 0x825DD930;
	sub_82633F38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825dd9d8
	goto loc_825DD9D8;
loc_825DD938:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634380
	ctx.lr = 0x825DD940;
	sub_82634380(ctx, base);
	// b 0x825dd9d8
	goto loc_825DD9D8;
loc_825DD944:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826353a8
	ctx.lr = 0x825DD950;
	sub_826353A8(ctx, base);
	// b 0x825dd9d8
	goto loc_825DD9D8;
loc_825DD954:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634520
	ctx.lr = 0x825DD95C;
	sub_82634520(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825dd9d8
	goto loc_825DD9D8;
loc_825DD964:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634698
	ctx.lr = 0x825DD970;
	sub_82634698(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825dd9d8
	goto loc_825DD9D8;
loc_825DD978:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826350e8
	ctx.lr = 0x825DD980;
	sub_826350E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825dd9d8
	goto loc_825DD9D8;
loc_825DD988:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635178
	ctx.lr = 0x825DD994;
	sub_82635178(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825dd9d8
	goto loc_825DD9D8;
loc_825DD99C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634030
	ctx.lr = 0x825DD9A8;
	sub_82634030(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825dd9d8
	goto loc_825DD9D8;
loc_825DD9B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826340a8
	ctx.lr = 0x825DD9B8;
	sub_826340A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825dd9d8
	goto loc_825DD9D8;
loc_825DD9C0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82634118
	ctx.lr = 0x825DD9CC;
	sub_82634118(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dcdc0
	ctx.lr = 0x825DD9D8;
	sub_825DCDC0(ctx, base);
loc_825DD9D8:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262d530
	ctx.lr = 0x825DD9EC;
	sub_8262D530(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DD9F8"))) PPC_WEAK_FUNC(sub_825DD9F8);
PPC_FUNC_IMPL(__imp__sub_825DD9F8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,2740
	ctx.r3.s64 = ctx.r3.s64 + 2740;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x825e9338
	ctx.lr = 0x825DDA20;
	sub_825E9338(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r9,31
	ctx.r9.s64 = 31;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// li r7,20
	ctx.r7.s64 = 20;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,17
	ctx.r4.s64 = 17;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// stwx r9,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r6,r11,195
	ctx.r6.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r4.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// lwz r9,-3564(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r6,292(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 292);
	// lwz r5,5356(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 5356);
	// cmpwi cr6,r5,5
	cr6.compare<int32_t>(ctx.r5.s32, 5, xer);
	// bne cr6,0x825ddae0
	if (!cr6.eq) goto loc_825DDAE0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r9,21
	ctx.r9.s64 = 21;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
loc_825DDAE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r9,18
	ctx.r9.s64 = 18;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// li r7,19
	ctx.r7.s64 = 19;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r11,195
	ctx.r4.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// lwz r11,-3564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ddb64
	if (cr6.eq) goto loc_825DDB64;
	// bl 0x82da1d10
	ctx.lr = 0x825DDB34;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ddb64
	if (cr6.eq) goto loc_825DDB64;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,63
	ctx.r10.s64 = 63;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
	// b 0x825ddbd8
	goto loc_825DDBD8;
loc_825DDB64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dbcb8
	ctx.lr = 0x825DDB6C;
	sub_825DBCB8(ctx, base);
	// cmpwi cr6,r30,35
	cr6.compare<int32_t>(ctx.r30.s32, 35, xer);
	// beq cr6,0x825ddb98
	if (cr6.eq) goto loc_825DDB98;
	// cmpwi cr6,r30,36
	cr6.compare<int32_t>(ctx.r30.s32, 36, xer);
	// beq cr6,0x825ddb98
	if (cr6.eq) goto loc_825DDB98;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,195
	ctx.r11.s64 = ctx.r11.s64 + 195;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r30.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r9,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r9.u8);
loc_825DDB98:
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,23
	ctx.r10.s64 = 23;
	// li r9,24
	ctx.r9.s64 = 24;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r11,195
	ctx.r5.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stb r3,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r3.u8);
loc_825DDBD8:
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

__attribute__((alias("__imp__sub_825DDBF0"))) PPC_WEAK_FUNC(sub_825DDBF0);
PPC_FUNC_IMPL(__imp__sub_825DDBF0) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825DDC0C;
	sub_825D8F10(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// li r8,70
	ctx.r8.s64 = 70;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// li r5,10
	ctx.r5.s64 = 10;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r3,r11,195
	ctx.r3.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r10,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r10.u8);
	// bl 0x825dd9f8
	ctx.lr = 0x825DDC5C;
	sub_825DD9F8(ctx, base);
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

__attribute__((alias("__imp__sub_825DDC70"))) PPC_WEAK_FUNC(sub_825DDC70);
PPC_FUNC_IMPL(__imp__sub_825DDC70) {
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
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825DDC8C;
	sub_825D8F10(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// li r8,70
	ctx.r8.s64 = 70;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// li r5,10
	ctx.r5.s64 = 10;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r3,r11,195
	ctx.r3.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r10,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r10.u8);
	// bl 0x825dd9f8
	ctx.lr = 0x825DDCDC;
	sub_825DD9F8(ctx, base);
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

__attribute__((alias("__imp__sub_825DDCF0"))) PPC_WEAK_FUNC(sub_825DDCF0);
PPC_FUNC_IMPL(__imp__sub_825DDCF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825DDCF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825DDD0C;
	sub_825D8F10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8262aac0
	ctx.lr = 0x825DDD18;
	sub_8262AAC0(ctx, base);
	// addi r28,r31,152
	ctx.r28.s64 = ctx.r31.s64 + 152;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9208
	ctx.lr = 0x825DDD38;
	sub_825D9208(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825ddd64
	if (cr6.eq) goto loc_825DDD64;
	// addi r3,r30,5644
	ctx.r3.s64 = ctx.r30.s64 + 5644;
	// bl 0x8307e040
	ctx.lr = 0x825DDD58;
	sub_8307E040(ctx, base);
	// addi r11,r3,-14
	ctx.r11.s64 = ctx.r3.s64 + -14;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r10,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_825DDD64:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dde58
	if (cr6.eq) goto loc_825DDE58;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825ddd94
	if (cr6.eq) goto loc_825DDD94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1aaa8
	ctx.lr = 0x825DDD80;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ddd94
	if (cr6.eq) goto loc_825DDD94;
	// li r10,14
	ctx.r10.s64 = 14;
	// b 0x825dde24
	goto loc_825DDE24;
loc_825DDD94:
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,27
	ctx.r9.s64 = 27;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// clrlwi r7,r29,24
	ctx.r7.u64 = ctx.r29.u32 & 0xFF;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stwx r10,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r11,195
	ctx.r4.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// beq cr6,0x825dde40
	if (cr6.eq) goto loc_825DDE40;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9208
	ctx.lr = 0x825DDDF8;
	sub_825D9208(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r10,r11,64832
	ctx.r10.u64 = ctx.r11.u64 | 64832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8262a738
	ctx.lr = 0x825DDE14;
	sub_8262A738(ctx, base);
	// lbz r8,7914(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7914);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825dde40
	if (cr6.eq) goto loc_825DDE40;
	// li r10,28
	ctx.r10.s64 = 28;
loc_825DDE24:
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
loc_825DDE40:
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dd9f8
	ctx.lr = 0x825DDE50;
	sub_825DD9F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825DDE58:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dded0
	if (cr6.eq) goto loc_825DDED0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9208
	ctx.lr = 0x825DDE7C;
	sub_825D9208(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r10,r11,64832
	ctx.r10.u64 = ctx.r11.u64 | 64832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8262a738
	ctx.lr = 0x825DDE98;
	sub_8262A738(ctx, base);
	// lbz r8,7914(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7914);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825ddec4
	if (cr6.eq) goto loc_825DDEC4;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,28
	ctx.r10.s64 = 28;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
loc_825DDEC4:
	// li r10,15
	ctx.r10.s64 = 15;
	// li r5,12
	ctx.r5.s64 = 12;
	// b 0x825dded8
	goto loc_825DDED8;
loc_825DDED0:
	// li r10,14
	ctx.r10.s64 = 14;
	// li r5,10
	ctx.r5.s64 = 10;
loc_825DDED8:
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
	// bl 0x825dd9f8
	ctx.lr = 0x825DDF00;
	sub_825DD9F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DDF08"))) PPC_WEAK_FUNC(sub_825DDF08);
PPC_FUNC_IMPL(__imp__sub_825DDF08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x825DDF10;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825DDF24;
	sub_825D8F10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8262aac0
	ctx.lr = 0x825DDF30;
	sub_8262AAC0(ctx, base);
	// addi r26,r31,152
	ctx.r26.s64 = ctx.r31.s64 + 152;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825d9208
	ctx.lr = 0x825DDF50;
	sub_825D9208(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x8262f160
	ctx.lr = 0x825DDF64;
	sub_8262F160(ctx, base);
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ddf90
	if (cr6.eq) goto loc_825DDF90;
	// bl 0x82a1aaa8
	ctx.lr = 0x825DDF80;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825de060
	if (!cr6.eq) goto loc_825DE060;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
loc_825DDF90:
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ddff0
	if (cr6.eq) goto loc_825DDFF0;
	// addi r3,r11,5644
	ctx.r3.s64 = ctx.r11.s64 + 5644;
	// bl 0x8307e040
	ctx.lr = 0x825DDFA4;
	sub_8307E040(ctx, base);
	// cmpwi cr6,r3,14
	cr6.compare<int32_t>(ctx.r3.s32, 14, xer);
	// beq cr6,0x825ddff0
	if (cr6.eq) goto loc_825DDFF0;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,27
	ctx.r9.s64 = 27;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// li r29,1
	ctx.r29.s64 = 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r11,195
	ctx.r5.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stb r3,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r3.u8);
loc_825DDFF0:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825de060
	if (cr6.eq) goto loc_825DE060;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x825d9208
	ctx.lr = 0x825DE018;
	sub_825D9208(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r10,r11,64832
	ctx.r10.u64 = ctx.r11.u64 | 64832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8262a738
	ctx.lr = 0x825DE034;
	sub_8262A738(ctx, base);
	// lbz r8,7914(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7914);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825de060
	if (cr6.eq) goto loc_825DE060;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,28
	ctx.r10.s64 = 28;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
loc_825DE060:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825de168
	if (!cr6.eq) goto loc_825DE168;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bne cr6,0x825de0e4
	if (!cr6.eq) goto loc_825DE0E4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// beq cr6,0x825de14c
	if (cr6.eq) goto loc_825DE14C;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r10,7677(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7677, ctx.r10.u8);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r5,8
	ctx.r5.s64 = 8;
	// stwx r9,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// addi r3,r11,195
	ctx.r3.s64 = ctx.r11.s64 + 195;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r5.u32);
	// b 0x825de15c
	goto loc_825DE15C;
loc_825DE0E4:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// bne cr6,0x825de14c
	if (!cr6.eq) goto loc_825DE14C;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r10,7677(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7677, ctx.r10.u8);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r5,8
	ctx.r5.s64 = 8;
	// stwx r9,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r3,r11,195
	ctx.r3.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r5.u32);
	// b 0x825de15c
	goto loc_825DE15C;
loc_825DE14C:
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// li r10,14
	ctx.r10.s64 = 14;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
loc_825DE15C:
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
loc_825DE168:
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dd9f8
	ctx.lr = 0x825DE178;
	sub_825DD9F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DE180"))) PPC_WEAK_FUNC(sub_825DE180);
PPC_FUNC_IMPL(__imp__sub_825DE180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825DE188;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825de564
	if (cr6.eq) goto loc_825DE564;
	// lbz r9,5813(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5813);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,5388(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5388);
	// li r4,7
	ctx.r4.s64 = 7;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// addi r11,r10,-10
	ctx.r11.s64 = ctx.r10.s64 + -10;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r28,r9,r5
	ctx.r28.u64 = ctx.r9.u64 & ctx.r5.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825DE1D8;
	sub_825D8F10(ctx, base);
	// clrlwi r8,r28,24
	ctx.r8.u64 = ctx.r28.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825de244
	if (!cr6.eq) goto loc_825DE244;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,14
	ctx.r10.s64 = 14;
	// li r9,70
	ctx.r9.s64 = 70;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// li r5,11
	ctx.r5.s64 = 11;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
	// bl 0x825dd9f8
	ctx.lr = 0x825DE234;
	sub_825DD9F8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825DE244:
	// lwz r11,5408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5408);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825de3d4
	if (!cr6.eq) goto loc_825DE3D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8262f160
	ctx.lr = 0x825DE258;
	sub_8262F160(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262aac0
	ctx.lr = 0x825DE268;
	sub_8262AAC0(ctx, base);
	// addi r28,r31,152
	ctx.r28.s64 = ctx.r31.s64 + 152;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9208
	ctx.lr = 0x825DE288;
	sub_825D9208(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
	// bl 0x82a1aaa8
	ctx.lr = 0x825DE2B0;
	sub_82A1AAA8(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x825de2dc
	if (!cr6.eq) goto loc_825DE2DC;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,27
	ctx.r10.s64 = 27;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
loc_825DE2DC:
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x825de348
	if (cr6.eq) goto loc_825DE348;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9208
	ctx.lr = 0x825DE300;
	sub_825D9208(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r10,r11,64832
	ctx.r10.u64 = ctx.r11.u64 | 64832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8262a738
	ctx.lr = 0x825DE31C;
	sub_8262A738(ctx, base);
	// lbz r8,7914(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7914);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825de348
	if (cr6.eq) goto loc_825DE348;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,28
	ctx.r10.s64 = 28;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
loc_825DE348:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x825de368
	if (!cr6.eq) goto loc_825DE368;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x825de374
	if (!cr6.eq) goto loc_825DE374;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x825de3b8
	if (cr6.eq) goto loc_825DE3B8;
loc_825DE368:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x825de3b8
	if (!cr6.eq) goto loc_825DE3B8;
loc_825DE374:
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r30,7677(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7677, ctx.r30.u8);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r11,195
	ctx.r5.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stb r3,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r3.u8);
loc_825DE3B8:
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dd9f8
	ctx.lr = 0x825DE3C8;
	sub_825DD9F8(ctx, base);
	// stw r30,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825DE3D4:
	// bl 0x825da858
	ctx.lr = 0x825DE3D8;
	sub_825DA858(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825de430
	if (cr6.eq) goto loc_825DE430;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,22
	ctx.r10.s64 = 22;
	// lwz r9,4472(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4472);
	// lis r8,-31778
	ctx.r8.s64 = -2082603008;
	// addi r7,r11,195
	ctx.r7.s64 = ctx.r11.s64 + 195;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,2836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2836, ctx.r9.u32);
	// stwx r10,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stb r5,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r5.u8);
	// lwz r3,2056(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825DE428;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825DE430:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r10,r11,64832
	ctx.r10.u64 = ctx.r11.u64 | 64832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8262a738
	ctx.lr = 0x825DE44C;
	sub_8262A738(ctx, base);
	// lwz r8,7148(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7148);
	// addi r28,r31,152
	ctx.r28.s64 = ctx.r31.s64 + 152;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9208
	ctx.lr = 0x825DE470;
	sub_825D9208(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r29,15
	ctx.r29.s64 = 15;
	// addi r7,r11,195
	ctx.r7.s64 = ctx.r11.s64 + 195;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r29.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stb r5,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r5.u8);
	// bl 0x82a1aaa8
	ctx.lr = 0x825DE498;
	sub_82A1AAA8(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825de4c4
	if (!cr6.eq) goto loc_825DE4C4;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,27
	ctx.r10.s64 = 27;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
loc_825DE4C4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262f160
	ctx.lr = 0x825DE4D0;
	sub_8262F160(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825de540
	if (!cr6.eq) goto loc_825DE540;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// stb r10,7677(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7677, ctx.r10.u8);
	// li r7,8
	ctx.r7.s64 = 8;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r11,195
	ctx.r4.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r29.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stb r8,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r8.u8);
loc_825DE540:
	// lwz r11,5388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5388);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x825de55c
	if (cr6.eq) goto loc_825DE55C;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dd9f8
	ctx.lr = 0x825DE55C;
	sub_825DD9F8(ctx, base);
loc_825DE55C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r11.u32);
loc_825DE564:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DE56C"))) PPC_WEAK_FUNC(sub_825DE56C);
PPC_FUNC_IMPL(__imp__sub_825DE56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE570"))) PPC_WEAK_FUNC(sub_825DE570);
PPC_FUNC_IMPL(__imp__sub_825DE570) {
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
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825DE58C;
	sub_825D8F10(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r11,r11,195
	ctx.r11.s64 = ctx.r11.s64 + 195;
	// li r9,70
	ctx.r9.s64 = 70;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,54
	ctx.r7.s64 = 54;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// li r5,10
	ctx.r5.s64 = 10;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r3,r11,195
	ctx.r3.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
	// bl 0x825dd9f8
	ctx.lr = 0x825DE618;
	sub_825DD9F8(ctx, base);
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

__attribute__((alias("__imp__sub_825DE62C"))) PPC_WEAK_FUNC(sub_825DE62C);
PPC_FUNC_IMPL(__imp__sub_825DE62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE630"))) PPC_WEAK_FUNC(sub_825DE630);
PPC_FUNC_IMPL(__imp__sub_825DE630) {
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
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825DE64C;
	sub_825D8F10(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// li r8,70
	ctx.r8.s64 = 70;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// li r5,10
	ctx.r5.s64 = 10;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r3,r11,195
	ctx.r3.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r10,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r10.u8);
	// bl 0x825dd9f8
	ctx.lr = 0x825DE69C;
	sub_825DD9F8(ctx, base);
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

__attribute__((alias("__imp__sub_825DE6B0"))) PPC_WEAK_FUNC(sub_825DE6B0);
PPC_FUNC_IMPL(__imp__sub_825DE6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825DE6B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r29,292(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r27,6112(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lbz r11,4515(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4515);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825de8e4
	if (!cr6.eq) goto loc_825DE8E4;
	// lis r30,-31778
	ctx.r30.s64 = -2082603008;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825DE6FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825de8e4
	if (!cr6.eq) goto loc_825DE8E4;
	// lwz r3,2056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825DE720;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825de8e4
	if (!cr6.eq) goto loc_825DE8E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1ab00
	ctx.lr = 0x825DE734;
	sub_82A1AB00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825de8e4
	if (!cr6.eq) goto loc_825DE8E4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,8160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8160);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r11,-10292
	ctx.r28.s64 = ctx.r11.s64 + -10292;
	// lfs f0,-11412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,-8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x825de8e4
	if (cr6.gt) goto loc_825DE8E4;
	// lfs f13,8148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8148);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f13,-4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x825de8e4
	if (cr6.gt) goto loc_825DE8E4;
	// lfs f13,8160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8160);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,8164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8164);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8156);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,-12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fcmpu cr6,f6,f13
	cr6.compare(ctx.f6.f64, ctx.f13.f64);
	// bgt cr6,0x825de8e4
	if (cr6.gt) goto loc_825DE8E4;
	// lfs f0,5376(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5376);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,-20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -20);
	ctx.f12.f64 = double(temp.f32);
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f12
	cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bgt cr6,0x825de8e4
	if (cr6.gt) goto loc_825DE8E4;
	// lfs f0,8152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8152);
	ctx.f0.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x825de7e8
	if (!cr6.gt) goto loc_825DE7E8;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bgt cr6,0x825de8e4
	if (cr6.gt) goto loc_825DE8E4;
loc_825DE7E8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825dc900
	ctx.lr = 0x825DE7F0;
	sub_825DC900(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,2808(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2808);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x825de80c
	if (cr6.lt) goto loc_825DE80C;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825de810
	if (cr6.lt) goto loc_825DE810;
loc_825DE80C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825DE810:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825de820
	if (!cr6.eq) goto loc_825DE820;
	// li r30,1
	ctx.r30.s64 = 1;
loc_825DE820:
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// ori r9,r11,64832
	ctx.r9.u64 = ctx.r11.u64 | 64832;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwzx r8,r25,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r31,12(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// bne cr6,0x825de868
	if (!cr6.eq) goto loc_825DE868;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825de868
	if (cr6.eq) goto loc_825DE868;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,20428
	ctx.r3.s64 = ctx.r3.s64 + 20428;
	// bl 0x825ca600
	ctx.lr = 0x825DE858;
	sub_825CA600(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x825de868
	if (cr6.lt) goto loc_825DE868;
	// li r30,1
	ctx.r30.s64 = 1;
loc_825DE868:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825de898
	if (!cr6.eq) goto loc_825DE898;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,20120
	ctx.r3.s64 = ctx.r3.s64 + 20120;
	// bl 0x825ca600
	ctx.lr = 0x825DE884;
	sub_825CA600(ctx, base);
	// fsqrts f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f1.f64)));
	// lfs f0,-16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x825de898
	if (!cr6.gt) goto loc_825DE898;
	// li r30,1
	ctx.r30.s64 = 1;
loc_825DE898:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x825DE8A4;
	sub_82A0C788(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825de8d0
	if (!cr6.eq) goto loc_825DE8D0;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// cmpwi cr6,r11,89
	cr6.compare<int32_t>(ctx.r11.s32, 89, xer);
	// beq cr6,0x825de8cc
	if (cr6.eq) goto loc_825DE8CC;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(ctx.r11.s32, 90, xer);
	// beq cr6,0x825de8cc
	if (cr6.eq) goto loc_825DE8CC;
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(ctx.r11.s32, 91, xer);
	// bne cr6,0x825de8d0
	if (!cr6.eq) goto loc_825DE8D0;
loc_825DE8CC:
	// li r30,1
	ctx.r30.s64 = 1;
loc_825DE8D0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825de8f0
	if (cr6.eq) goto loc_825DE8F0;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,2808(r25)
	PPC_STORE_U32(ctx.r25.u32 + 2808, ctx.r11.u32);
loc_825DE8E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825DE8F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DE8FC"))) PPC_WEAK_FUNC(sub_825DE8FC);
PPC_FUNC_IMPL(__imp__sub_825DE8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DE900"))) PPC_WEAK_FUNC(sub_825DE900);
PPC_FUNC_IMPL(__imp__sub_825DE900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825DE908;
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
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,5356(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5356);
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bne cr6,0x825de990
	if (!cr6.eq) goto loc_825DE990;
	// bl 0x837d59a0
	ctx.lr = 0x825DE92C;
	sub_837D59A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837d5cf8
	ctx.lr = 0x825DE934;
	sub_837D5CF8(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825de954
	if (!cr6.eq) goto loc_825DE954;
	// bl 0x837d59a0
	ctx.lr = 0x825DE940;
	sub_837D59A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837d60f8
	ctx.lr = 0x825DE954;
	sub_837D60F8(ctx, base);
loc_825DE954:
	// addi r31,r29,3736
	ctx.r31.s64 = ctx.r29.s64 + 3736;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832f8
	ctx.lr = 0x825DE964;
	sub_825832F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,5360(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5360);
	// bl 0x83131d70
	ctx.lr = 0x825DE970;
	sub_83131D70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,5364
	ctx.r4.s64 = ctx.r30.s64 + 5364;
	// bl 0x82a19c30
	ctx.lr = 0x825DE97C;
	sub_82A19C30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6e0
	ctx.lr = 0x825DE988;
	sub_82DAB6E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825dce48
	ctx.lr = 0x825DE990;
	sub_825DCE48(ctx, base);
loc_825DE990:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DE998"))) PPC_WEAK_FUNC(sub_825DE998);
PPC_FUNC_IMPL(__imp__sub_825DE998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x825DE9A0;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lbz r10,5813(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5813);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825de9e0
	if (cr6.eq) goto loc_825DE9E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_825DE9E0:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r28,r31,152
	ctx.r28.s64 = ctx.r31.s64 + 152;
	// addi r30,r30,-704
	ctx.r30.s64 = ctx.r30.s64 + -704;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826654f0
	ctx.lr = 0x825DE9FC;
	sub_826654F0(ctx, base);
	// lwz r10,-3564(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lbz r11,862(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 862);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// lwz r26,212(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// blt cr6,0x825deca0
	if (cr6.lt) goto loc_825DECA0;
	// beq cr6,0x825dea3c
	if (cr6.eq) goto loc_825DEA3C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x825ded0c
	if (!cr6.lt) goto loc_825DED0C;
	// li r23,1
	ctx.r23.s64 = 1;
	// stb r25,2786(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2786, ctx.r25.u8);
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// stb r23,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r23.u8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_825DEA3C:
	// lbz r11,7672(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7672);
	// li r23,1
	ctx.r23.s64 = 1;
	// lis r24,21504
	ctx.r24.s64 = 1409286144;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825deb98
	if (cr6.eq) goto loc_825DEB98;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x825deb80
	if (cr6.eq) goto loc_825DEB80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x825DEA64;
	sub_82DAB6D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x825dea74
	if (!cr6.lt) goto loc_825DEA74;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x825dea9c
	goto loc_825DEA9C;
loc_825DEA74:
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// bge cr6,0x825dea84
	if (!cr6.lt) goto loc_825DEA84;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x825dea9c
	goto loc_825DEA9C;
loc_825DEA84:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// eqv r9,r11,r3
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r3.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
loc_825DEA9C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a2a310
	ctx.lr = 0x825DEAA8;
	sub_82A2A310(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x825DEAB4;
	sub_82DAB6D0(ctx, base);
	// cmpw cr6,r20,r3
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r3.s32, xer);
	// bne cr6,0x825deb28
	if (!cr6.eq) goto loc_825DEB28;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x825DEAC8;
	sub_82DAB6D0(ctx, base);
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c760
	ctx.lr = 0x825DEAD8;
	sub_82A0C760(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r10,r24
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r24.s32, xer);
	// bne cr6,0x825deb00
	if (!cr6.eq) goto loc_825DEB00;
	// lhz r10,7674(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 7674);
	// lhz r9,18(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x825deb00
	if (cr6.lt) goto loc_825DEB00;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// b 0x825deb28
	goto loc_825DEB28;
loc_825DEB00:
	// rlwinm r11,r11,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// lis r10,84
	ctx.r10.s64 = 5505024;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x825deb28
	if (!cr6.eq) goto loc_825DEB28;
	// stb r25,7672(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7672, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82664310
	ctx.lr = 0x825DEB24;
	sub_82664310(ctx, base);
	// stfs f1,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
loc_825DEB28:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825deb98
	if (cr6.eq) goto loc_825DEB98;
	// lwz r11,872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// bl 0x83740868
	ctx.lr = 0x825DEB50;
	sub_83740868(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,-24912(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fcmpu cr6,f31,f12
	cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// ble cr6,0x825deb98
	if (!cr6.gt) goto loc_825DEB98;
	// stb r23,3328(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3328, ctx.r23.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x834ea438
	ctx.lr = 0x825DEB70;
	sub_834EA438(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x834ebb58
	ctx.lr = 0x825DEB7C;
	sub_834EBB58(ctx, base);
	// b 0x825deb98
	goto loc_825DEB98;
loc_825DEB80:
	// stb r25,7672(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7672, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82664310
	ctx.lr = 0x825DEB94;
	sub_82664310(ctx, base);
	// stfs f1,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
loc_825DEB98:
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x825d88b0
	ctx.lr = 0x825DEBB0;
	sub_825D88B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825dec58
	if (cr6.eq) goto loc_825DEC58;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x825dec58
	if (cr6.eq) goto loc_825DEC58;
	// lbz r11,5044(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5044);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dec58
	if (cr6.eq) goto loc_825DEC58;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x825DEBD8;
	sub_82DAB6D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825debec
	if (cr6.lt) goto loc_825DEBEC;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// blt cr6,0x825debf0
	if (cr6.lt) goto loc_825DEBF0;
loc_825DEBEC:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_825DEBF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dec10
	if (cr6.eq) goto loc_825DEC10;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825dec14
	goto loc_825DEC14;
loc_825DEC10:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_825DEC14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dec58
	if (cr6.eq) goto loc_825DEC58;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x825DEC28;
	sub_82DAB6D0(ctx, base);
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c760
	ctx.lr = 0x825DEC38;
	sub_82A0C760(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r10,r24
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r24.s32, xer);
	// bne cr6,0x825dec58
	if (!cr6.eq) goto loc_825DEC58;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a46f80
	ctx.lr = 0x825DEC50;
	sub_82A46F80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x825dec5c
	goto loc_825DEC5C;
loc_825DEC58:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
loc_825DEC5C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dec68
	if (cr6.eq) goto loc_825DEC68;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_825DEC68:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262ce20
	ctx.lr = 0x825DEC78;
	sub_8262CE20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ded0c
	if (cr6.eq) goto loc_825DED0C;
	// lbz r11,862(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 862);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_825DECA0:
	// li r23,1
	ctx.r23.s64 = 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r23,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r23.u8);
	// stb r23,2786(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2786, ctx.r23.u8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82664310
	ctx.lr = 0x825DECBC;
	sub_82664310(ctx, base);
	// stfs f1,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dbdf0
	ctx.lr = 0x825DECC8;
	sub_825DBDF0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825ded0c
	if (cr6.eq) goto loc_825DED0C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// stb r23,7672(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7672, ctx.r23.u8);
	// lfs f0,-9984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9984);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,132(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// bl 0x83740858
	ctx.lr = 0x825DECF0;
	sub_83740858(ctx, base);
	// mulli r4,r3,100
	ctx.r4.s64 = ctx.r3.s64 * 100;
	// addi r3,r31,7636
	ctx.r3.s64 = ctx.r31.s64 + 7636;
	// bl 0x82a5c698
	ctx.lr = 0x825DECFC;
	sub_82A5C698(ctx, base);
	// li r10,100
	ctx.r10.s64 = 100;
	// divw r11,r3,r10
	ctx.r11.s32 = PPCDivide(ctx.r3.s32, ctx.r10.s32);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// sth r9,7674(r31)
	PPC_STORE_U16(ctx.r31.u32 + 7674, ctx.r9.u16);
loc_825DED0C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DED1C"))) PPC_WEAK_FUNC(sub_825DED1C);
PPC_FUNC_IMPL(__imp__sub_825DED1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DED20"))) PPC_WEAK_FUNC(sub_825DED20);
PPC_FUNC_IMPL(__imp__sub_825DED20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r8,r3,10
	ctx.r8.s64 = ctx.r3.s64 + 10;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825DED38:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x825ded38
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DED38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DED48"))) PPC_WEAK_FUNC(sub_825DED48);
PPC_FUNC_IMPL(__imp__sub_825DED48) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// li r5,48
	ctx.r5.s64 = 48;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DED5C"))) PPC_WEAK_FUNC(sub_825DED5C);
PPC_FUNC_IMPL(__imp__sub_825DED5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DED60"))) PPC_WEAK_FUNC(sub_825DED60);
PPC_FUNC_IMPL(__imp__sub_825DED60) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// addi r4,r4,52
	ctx.r4.s64 = ctx.r4.s64 + 52;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f12,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f11,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,36(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f10,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,40(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f9,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,44(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// bl 0x825a5200
	ctx.lr = 0x825DEDF0;
	sub_825A5200(ctx, base);
	// lwz r4,1324(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1324);
	// stw r4,1324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1324, ctx.r4.u32);
	// lwz r3,1328(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1328);
	// stw r3,1328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1328, ctx.r3.u32);
	// lwz r11,1332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1332);
	// stw r11,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r11.u32);
	// lwz r10,1336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1336);
	// stw r10,1336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1336, ctx.r10.u32);
	// lwz r9,1340(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1340);
	// stw r9,1340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1340, ctx.r9.u32);
	// lwz r8,1344(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1344);
	// stw r8,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r8.u32);
	// lwz r7,1348(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1348);
	// stw r7,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r7.u32);
	// lbz r6,1352(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1352);
	// stb r6,1352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1352, ctx.r6.u8);
	// lbz r5,1353(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1353);
	// stb r5,1353(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1353, ctx.r5.u8);
	// lwz r4,1356(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1356);
	// stw r4,1356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1356, ctx.r4.u32);
	// lbz r3,1360(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1360);
	// stb r3,1360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1360, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1364);
	// stw r11,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r11.u32);
	// lfs f8,1368(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1368);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,1368(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1368, temp.u32);
	// lfs f7,1372(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1372);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,1372(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1372, temp.u32);
	// lfs f6,1376(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1376);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,1376(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1376, temp.u32);
	// lfs f5,1380(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1380);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,1380(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1380, temp.u32);
	// lfs f4,1384(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1384);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,1384(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1384, temp.u32);
	// lfs f3,1388(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1388);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,1388(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1388, temp.u32);
	// lwz r10,1392(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1392);
	// stw r10,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_825DEEA4"))) PPC_WEAK_FUNC(sub_825DEEA4);
PPC_FUNC_IMPL(__imp__sub_825DEEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DEEA8"))) PPC_WEAK_FUNC(sub_825DEEA8);
PPC_FUNC_IMPL(__imp__sub_825DEEA8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r11,436
	ctx.r4.s64 = ctx.r11.s64 + 436;
	// li r5,432
	ctx.r5.s64 = 432;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DEEBC"))) PPC_WEAK_FUNC(sub_825DEEBC);
PPC_FUNC_IMPL(__imp__sub_825DEEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DEEC0"))) PPC_WEAK_FUNC(sub_825DEEC0);
PPC_FUNC_IMPL(__imp__sub_825DEEC0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a19bd0
	ctx.lr = 0x825DEEE0;
	sub_82A19BD0(ctx, base);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x831ce980
	ctx.lr = 0x825DEEF0;
	sub_831CE980(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r30,116
	ctx.r11.s64 = ctx.r30.s64 + 116;
	// addi r10,r31,116
	ctx.r10.s64 = ctx.r31.s64 + 116;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r9,108(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// lwz r8,112(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// lwz r7,116(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
loc_825DEF18:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825def18
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DEF18;
	// addi r4,r30,156
	ctx.r4.s64 = ctx.r30.s64 + 156;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// li r5,180
	ctx.r5.s64 = 180;
	// bl 0x831ce980
	ctx.lr = 0x825DEF34;
	sub_831CE980(ctx, base);
	// addi r4,r30,336
	ctx.r4.s64 = ctx.r30.s64 + 336;
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// bl 0x825a4b60
	ctx.lr = 0x825DEF40;
	sub_825A4B60(ctx, base);
	// lbz r11,3344(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3344);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,3344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3344, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_825DEF64"))) PPC_WEAK_FUNC(sub_825DEF64);
PPC_FUNC_IMPL(__imp__sub_825DEF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DEF68"))) PPC_WEAK_FUNC(sub_825DEF68);
PPC_FUNC_IMPL(__imp__sub_825DEF68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x825DEF70;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825DEF84;
	sub_825D8F10(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_825DEF94:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x825DEFA0;
	sub_82A0C710(ctx, base);
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// bl 0x825832e0
	ctx.lr = 0x825DEFA8;
	sub_825832E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825defc0
	if (!cr6.eq) goto loc_825DEFC0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x825def94
	if (cr6.lt) goto loc_825DEF94;
	// b 0x825defc4
	goto loc_825DEFC4;
loc_825DEFC0:
	// li r29,1
	ctx.r29.s64 = 1;
loc_825DEFC4:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825df0b0
	if (!cr6.eq) goto loc_825DF0B0;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lis r26,22528
	ctx.r26.s64 = 1476395008;
	// lwz r27,292(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
loc_825DEFE4:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_825DEFE8:
	// add. r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt 0x825deffc
	if (cr0.lt) goto loc_825DEFFC;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825df000
	if (cr6.lt) goto loc_825DF000;
loc_825DEFFC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_825DF000:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825df020
	if (cr6.eq) goto loc_825DF020;
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
	// b 0x825df024
	goto loc_825DF024;
loc_825DF020:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_825DF024:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825df048
	if (cr6.eq) goto loc_825DF048;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x825DF038;
	sub_82A0C760(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r10,r26
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, xer);
	// beq cr6,0x825df058
	if (cr6.eq) goto loc_825DF058;
loc_825DF048:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x825defe8
	if (cr6.lt) goto loc_825DEFE8;
	// b 0x825df05c
	goto loc_825DF05C;
loc_825DF058:
	// li r25,1
	ctx.r25.s64 = 1;
loc_825DF05C:
	// addi r29,r29,11
	ctx.r29.s64 = ctx.r29.s64 + 11;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// blt cr6,0x825defe4
	if (cr6.lt) goto loc_825DEFE4;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825df0b0
	if (!cr6.eq) goto loc_825DF0B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825de6b0
	ctx.lr = 0x825DF07C;
	sub_825DE6B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825df0b0
	if (cr6.eq) goto loc_825DF0B0;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,55
	ctx.r10.s64 = 55;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_825DF0B0:
	// addi r29,r31,152
	ctx.r29.s64 = ctx.r31.s64 + 152;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9208
	ctx.lr = 0x825DF0CC;
	sub_825D9208(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262f160
	ctx.lr = 0x825DF0D8;
	sub_8262F160(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// bl 0x8262aac0
	ctx.lr = 0x825DF0EC;
	sub_8262AAC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825df15c
	if (cr6.eq) goto loc_825DF15C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x825d9208
	ctx.lr = 0x825DF114;
	sub_825D9208(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r10,r11,64832
	ctx.r10.u64 = ctx.r11.u64 | 64832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8262a738
	ctx.lr = 0x825DF130;
	sub_8262A738(ctx, base);
	// lbz r8,7914(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7914);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825df15c
	if (cr6.eq) goto loc_825DF15C;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,28
	ctx.r10.s64 = 28;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
loc_825DF15C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825df1e4
	if (!cr6.eq) goto loc_825DF1E4;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825df1dc
	if (cr6.eq) goto loc_825DF1DC;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r23,7677(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7677, ctx.r23.u8);
	// li r9,14
	ctx.r9.s64 = 14;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// li r7,8
	ctx.r7.s64 = 8;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r11,195
	ctx.r4.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stb r8,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r8.u8);
	// b 0x825df2c8
	goto loc_825DF2C8;
loc_825DF1DC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825df288
	if (cr6.eq) goto loc_825DF288;
loc_825DF1E4:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x825df25c
	if (!cr6.eq) goto loc_825DF25C;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// stb r10,7677(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7677, ctx.r10.u8);
	// li r7,14
	ctx.r7.s64 = 14;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,8
	ctx.r5.s64 = 8;
	// stwx r9,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r3,r11,195
	ctx.r3.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
	// b 0x825df2c8
	goto loc_825DF2C8;
loc_825DF25C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825df288
	if (cr6.eq) goto loc_825DF288;
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,71
	ctx.r10.s64 = 71;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
	// b 0x825df2c8
	goto loc_825DF2C8;
loc_825DF288:
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,14
	ctx.r10.s64 = 14;
	// li r9,71
	ctx.r9.s64 = 71;
	// addi r8,r11,195
	ctx.r8.s64 = ctx.r11.s64 + 195;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r11,195
	ctx.r5.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stb r3,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r3.u8);
loc_825DF2C8:
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dd9f8
	ctx.lr = 0x825DF2D8;
	sub_825DD9F8(ctx, base);
	// stw r23,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r23.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DF2E4"))) PPC_WEAK_FUNC(sub_825DF2E4);
PPC_FUNC_IMPL(__imp__sub_825DF2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DF2E8"))) PPC_WEAK_FUNC(sub_825DF2E8);
PPC_FUNC_IMPL(__imp__sub_825DF2E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DF2F4"))) PPC_WEAK_FUNC(sub_825DF2F4);
PPC_FUNC_IMPL(__imp__sub_825DF2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DF2F8"))) PPC_WEAK_FUNC(sub_825DF2F8);
PPC_FUNC_IMPL(__imp__sub_825DF2F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,1400
	ctx.r3.s64 = ctx.r11.s64 + 1400;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DF304"))) PPC_WEAK_FUNC(sub_825DF304);
PPC_FUNC_IMPL(__imp__sub_825DF304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DF308"))) PPC_WEAK_FUNC(sub_825DF308);
PPC_FUNC_IMPL(__imp__sub_825DF308) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DF314"))) PPC_WEAK_FUNC(sub_825DF314);
PPC_FUNC_IMPL(__imp__sub_825DF314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DF318"))) PPC_WEAK_FUNC(sub_825DF318);
PPC_FUNC_IMPL(__imp__sub_825DF318) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,436
	ctx.r3.s64 = ctx.r11.s64 + 436;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DF324"))) PPC_WEAK_FUNC(sub_825DF324);
PPC_FUNC_IMPL(__imp__sub_825DF324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DF328"))) PPC_WEAK_FUNC(sub_825DF328);
PPC_FUNC_IMPL(__imp__sub_825DF328) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DF334"))) PPC_WEAK_FUNC(sub_825DF334);
PPC_FUNC_IMPL(__imp__sub_825DF334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DF338"))) PPC_WEAK_FUNC(sub_825DF338);
PPC_FUNC_IMPL(__imp__sub_825DF338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r9,1
	ctx.r9.s64 = 1;
loc_825DF354:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r9,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825df354
	if (!cr0.eq) goto loc_825DF354;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825df3a0
	if (!cr6.eq) goto loc_825DF3A0;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825DF380;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-4832
	ctx.r5.s64 = ctx.r11.s64 + -4832;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825DF3A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825DF3A0:
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

__attribute__((alias("__imp__sub_825DF3B8"))) PPC_WEAK_FUNC(sub_825DF3B8);
PPC_FUNC_IMPL(__imp__sub_825DF3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r9,1
	ctx.r9.s64 = 1;
loc_825DF3D4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r9,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825df3d4
	if (!cr0.eq) goto loc_825DF3D4;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825df420
	if (!cr6.eq) goto loc_825DF420;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825DF400;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-4440
	ctx.r5.s64 = ctx.r11.s64 + -4440;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825DF420;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825DF420:
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

__attribute__((alias("__imp__sub_825DF438"))) PPC_WEAK_FUNC(sub_825DF438);
PPC_FUNC_IMPL(__imp__sub_825DF438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r9,1
	ctx.r9.s64 = 1;
loc_825DF454:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r9,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825df454
	if (!cr0.eq) goto loc_825DF454;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825df4a0
	if (!cr6.eq) goto loc_825DF4A0;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825DF480;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-4792
	ctx.r5.s64 = ctx.r11.s64 + -4792;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825DF4A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825DF4A0:
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

__attribute__((alias("__imp__sub_825DF4B8"))) PPC_WEAK_FUNC(sub_825DF4B8);
PPC_FUNC_IMPL(__imp__sub_825DF4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825DF4C0;
	__savegprlr_27(ctx, base);
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lwz r9,84(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// lbz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 88);
	// lfs f0,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lbz r7,96(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r6,100(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lfs f13,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,104(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lfs f12,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,108(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lfs f11,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lwz r31,136(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// lfs f10,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// lwz r30,140(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lfs f9,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// lbz r29,144(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// lfs f8,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// lbz r28,145(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 145);
	// lfs f7,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f7.f64 = double(temp.f32);
	// lbz r11,146(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 146);
	// lwz r27,152(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stb r8,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r8.u8);
	// stb r7,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r7.u8);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f11,44(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f10,48(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f9,52(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f8,56(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stw r31,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
	// stfs f7,72(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r30,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r30.u32);
	// stb r29,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r29.u8);
	// stb r28,69(r3)
	PPC_STORE_U8(ctx.r3.u32 + 69, ctx.r28.u8);
	// stb r11,70(r3)
	PPC_STORE_U8(ctx.r3.u32 + 70, ctx.r11.u8);
	// stw r27,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r27.u32);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DF574"))) PPC_WEAK_FUNC(sub_825DF574);
PPC_FUNC_IMPL(__imp__sub_825DF574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DF578"))) PPC_WEAK_FUNC(sub_825DF578);
PPC_FUNC_IMPL(__imp__sub_825DF578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwsync 
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825DF590:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r4
	ea = ctx.r4.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r4
	ea = ctx.r4.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825df590
	if (!cr0.eq) goto loc_825DF590;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x825df5d0
	if (!cr6.eq) goto loc_825DF5D0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825df5d0
	if (cr6.eq) goto loc_825DF5D0;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x825DF5D0;
	sub_825952B8(ctx, base);
loc_825DF5D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DF5E0"))) PPC_WEAK_FUNC(sub_825DF5E0);
PPC_FUNC_IMPL(__imp__sub_825DF5E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwsync 
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825DF5FC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825df5fc
	if (!cr0.eq) goto loc_825DF5FC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x825df648
	if (!cr6.eq) goto loc_825DF648;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825df648
	if (cr6.eq) goto loc_825DF648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dd7e0
	ctx.lr = 0x825DF634;
	sub_825DD7E0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825DF648;
	sub_825952B8(ctx, base);
loc_825DF648:
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

__attribute__((alias("__imp__sub_825DF65C"))) PPC_WEAK_FUNC(sub_825DF65C);
PPC_FUNC_IMPL(__imp__sub_825DF65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DF660"))) PPC_WEAK_FUNC(sub_825DF660);
PPC_FUNC_IMPL(__imp__sub_825DF660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x825DF668;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r23,r3,116
	ctx.r23.s64 = ctx.r3.s64 + 116;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f31,124(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stfs f31,132(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stb r30,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r30.u8);
	// stfs f31,144(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// bl 0x82663e70
	ctx.lr = 0x825DF6B0;
	sub_82663E70(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r30.u32);
	// addi r3,r31,880
	ctx.r3.s64 = ctx.r31.s64 + 880;
	// stb r30,860(r31)
	PPC_STORE_U8(ctx.r31.u32 + 860, ctx.r30.u8);
	// stb r30,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r30.u8);
	// stb r30,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r30.u8);
	// stb r30,863(r31)
	PPC_STORE_U8(ctx.r31.u32 + 863, ctx.r30.u8);
	// stb r30,864(r31)
	PPC_STORE_U8(ctx.r31.u32 + 864, ctx.r30.u8);
	// stw r30,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r30.u32);
	// stw r30,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r30.u32);
	// stb r9,876(r31)
	PPC_STORE_U8(ctx.r31.u32 + 876, ctx.r9.u8);
	// bl 0x826694d8
	ctx.lr = 0x825DF6E0;
	sub_826694D8(ctx, base);
	// stw r30,2736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2736, ctx.r30.u32);
	// addi r3,r31,2740
	ctx.r3.s64 = ctx.r31.s64 + 2740;
	// bl 0x825e9340
	ctx.lr = 0x825DF6EC;
	sub_825E9340(ctx, base);
	// li r20,2
	ctx.r20.s64 = 2;
	// stw r30,7140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7140, ctx.r30.u32);
	// addi r27,r31,7156
	ctx.r27.s64 = ctx.r31.s64 + 7156;
	// stw r20,7144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7144, ctx.r20.u32);
	// stw r30,7148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7148, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,7152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7152, ctx.r30.u32);
	// bl 0x825dd5a0
	ctx.lr = 0x825DF70C;
	sub_825DD5A0(ctx, base);
	// stb r30,7608(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7608, ctx.r30.u8);
	// stb r30,7609(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7609, ctx.r30.u8);
	// addi r21,r31,7636
	ctx.r21.s64 = ctx.r31.s64 + 7636;
	// stw r30,7612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7612, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r30,7616(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7616, ctx.r30.u8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stb r30,7617(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7617, ctx.r30.u8);
	// stb r30,7618(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7618, ctx.r30.u8);
	// stb r30,7619(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7619, ctx.r30.u8);
	// stb r30,7620(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7620, ctx.r30.u8);
	// stb r30,7621(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7621, ctx.r30.u8);
	// stw r30,7624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7624, ctx.r30.u32);
	// stw r30,7628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7628, ctx.r30.u32);
	// stw r30,7632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7632, ctx.r30.u32);
	// bl 0x82a5c638
	ctx.lr = 0x825DF74C;
	sub_82A5C638(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r22,r31,7716
	ctx.r22.s64 = ctx.r31.s64 + 7716;
	// stb r30,7672(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7672, ctx.r30.u8);
	// lis r10,0
	ctx.r10.s64 = 0;
	// sth r30,7674(r31)
	PPC_STORE_U16(ctx.r31.u32 + 7674, ctx.r30.u16);
	// stb r30,7676(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7676, ctx.r30.u8);
	// stb r30,7677(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7677, ctx.r30.u8);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stb r30,7696(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7696, ctx.r30.u8);
	// stw r30,7700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7700, ctx.r30.u32);
	// addi r11,r22,-4
	ctx.r11.s64 = ctx.r22.s64 + -4;
	// stw r30,7704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7704, ctx.r30.u32);
	// stw r30,7708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7708, ctx.r30.u32);
	// stb r30,7712(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7712, ctx.r30.u8);
	// stb r30,7713(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7713, ctx.r30.u8);
	// stb r30,7714(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7714, ctx.r30.u8);
loc_825DF790:
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// stwu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x825df790
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DF790;
	// stb r30,7914(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7914, ctx.r30.u8);
	// addi r29,r31,8032
	ctx.r29.s64 = ctx.r31.s64 + 8032;
	// stw r30,7916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7916, ctx.r30.u32);
	// stw r30,7920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7920, ctx.r30.u32);
	// addi r26,r29,28
	ctx.r26.s64 = ctx.r29.s64 + 28;
	// stw r30,7924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7924, ctx.r30.u32);
	// addi r28,r29,12
	ctx.r28.s64 = ctx.r29.s64 + 12;
	// stw r30,7928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7928, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,7932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7932, ctx.r30.u32);
	// stw r30,7936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7936, ctx.r30.u32);
	// stb r30,8028(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8028, ctx.r30.u8);
	// stfs f31,8032(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8032, temp.u32);
	// stfs f31,8036(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8036, temp.u32);
	// stfs f31,8040(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8040, temp.u32);
	// stfs f31,8044(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8044, temp.u32);
	// stfs f31,8048(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8048, temp.u32);
	// stfs f31,8052(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8052, temp.u32);
	// bl 0x82a1acc8
	ctx.lr = 0x825DF7E8;
	sub_82A1ACC8(ctx, base);
	// addi r25,r29,88
	ctx.r25.s64 = ctx.r29.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a157b0
	ctx.lr = 0x825DF7F4;
	sub_82A157B0(ctx, base);
	// addis r24,r31,1
	ctx.r24.s64 = ctx.r31.s64 + 65536;
	// addi r24,r24,-26480
	ctx.r24.s64 = ctx.r24.s64 + -26480;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825d86c0
	ctx.lr = 0x825DF804;
	sub_825D86C0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,64816
	ctx.r8.u64 = ctx.r11.u64 | 64816;
	// ori r7,r10,64817
	ctx.r7.u64 = ctx.r10.u64 | 64817;
	// ori r6,r9,64820
	ctx.r6.u64 = ctx.r9.u64 | 64820;
	// li r11,20
	ctx.r11.s64 = 20;
	// addi r10,r31,780
	ctx.r10.s64 = ctx.r31.s64 + 780;
	// stbx r30,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stbx r30,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u8);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_825DF83C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825df83c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DF83C;
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// addi r11,r31,7940
	ctx.r11.s64 = ctx.r31.s64 + 7940;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825DF85C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x825df85c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DF85C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mtctr r20
	ctr.u64 = ctx.r20.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r31,7668
	ctx.r9.s64 = ctx.r31.s64 + 7668;
	// addi r8,r31,7670
	ctx.r8.s64 = ctx.r31.s64 + 7670;
	// addi r7,r31,7908
	ctx.r7.s64 = ctx.r31.s64 + 7908;
	// addi r6,r31,7910
	ctx.r6.s64 = ctx.r31.s64 + 7910;
	// addi r5,r31,7912
	ctx.r5.s64 = ctx.r31.s64 + 7912;
	// addi r10,r31,7684
	ctx.r10.s64 = ctx.r31.s64 + 7684;
	// li r3,7
	ctx.r3.s64 = 7;
	// li r4,255
	ctx.r4.s64 = 255;
loc_825DF890:
	// stbx r30,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u8);
	// stbx r30,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r30.u8);
	// stw r3,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r3.u32);
	// stwu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// stbx r30,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r30.u8);
	// stbx r30,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r30.u8);
	// stbx r30,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825df890
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DF890;
	// stfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stfs f31,4(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f31,8(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f31,0(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f31,4(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f31,8(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stw r30,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r30.u32);
	// bl 0x82a19b88
	ctx.lr = 0x825DF8D8;
	sub_82A19B88(ctx, base);
	// stb r30,76(r29)
	PPC_STORE_U8(ctx.r29.u32 + 76, ctx.r30.u8);
	// stw r30,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r30,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r30.u32);
	// bl 0x82a14720
	ctx.lr = 0x825DF8EC;
	sub_82A14720(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825d8448
	ctx.lr = 0x825DF8F4;
	sub_825D8448(ctx, base);
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r11,r22,-8
	ctx.r11.s64 = ctx.r22.s64 + -8;
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825DF904:
	// ld r10,28696(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 28696);
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x825df904
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DF904;
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825DF928:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x825df928
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DF928;
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r29,-31778
	ctx.r29.s64 = -2082603008;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r20,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r20.u32);
	// stb r30,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// stb r30,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r30.u8);
	// stb r30,110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 110, ctx.r30.u8);
	// stb r30,111(r31)
	PPC_STORE_U8(ctx.r31.u32 + 111, ctx.r30.u8);
	// stb r30,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r30.u8);
	// stfs f31,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// stfs f31,4(r23)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r23.u32 + 4, temp.u32);
	// stfs f31,8(r23)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r23.u32 + 8, temp.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825DF984;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825dfa14
	if (cr6.eq) goto loc_825DFA14;
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825DF9A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,2056(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,228(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825DF9C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,2056(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,228(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 228);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x825DF9E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x826501d8
	ctx.lr = 0x825DF9FC;
	sub_826501D8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x826501d8
	ctx.lr = 0x825DFA0C;
	sub_826501D8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// b 0x825dfa94
	goto loc_825DFA94;
loc_825DFA14:
	// bl 0x83a7d958
	ctx.lr = 0x825DFA18;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x825DFA1C;
	sub_83524138(ctx, base);
	// lis r11,14470
	ctx.r11.s64 = 948305920;
	// lis r10,13421
	ctx.r10.s64 = 879558656;
	// ori r9,r11,22859
	ctx.r9.u64 = ctx.r11.u64 | 22859;
	// ori r8,r10,50646
	ctx.r8.u64 = ctx.r10.u64 | 50646;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulhdu r6,r7,r9
	ctx.r6.u64 = ((unsigned __int128)ctx.r7.u64 * (unsigned __int128)ctx.r9.u64) >> 64;
	// rldicl r5,r6,53,11
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 53) & 0x1FFFFFFFFFFFFF;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mulli r11,r5,10000
	ctx.r11.s64 = ctx.r5.s64 * 10000;
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// rotlwi r29,r10,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x826501d8
	ctx.lr = 0x825DFA58;
	sub_826501D8(ctx, base);
	// lis r9,-11849
	ctx.r9.s64 = -776536064;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// ori r30,r9,5977
	ctx.r30.u64 = ctx.r9.u64 | 5977;
	// li r4,1
	ctx.r4.s64 = 1;
	// mulhwu r8,r11,r30
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// rlwinm r7,r8,19,13,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0x7FFFF;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mulli r6,r7,10000
	ctx.r6.s64 = ctx.r7.s64 * 10000;
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// bl 0x826501d8
	ctx.lr = 0x825DFA80;
	sub_826501D8(ctx, base);
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// mulhwu r5,r11,r30
	ctx.r5.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// rlwinm r10,r5,19,13,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 19) & 0x7FFFF;
	// mulli r9,r10,10000
	ctx.r9.s64 = ctx.r10.s64 * 10000;
	// subf r5,r9,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_825DFA94:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x826501d8
	ctx.lr = 0x825DFAA0;
	sub_826501D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DFAB0"))) PPC_WEAK_FUNC(sub_825DFAB0);
PPC_FUNC_IMPL(__imp__sub_825DFAB0) {
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
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,6
	ctx.r9.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
loc_825DFAFC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825dfafc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DFAFC;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x825a4738
	ctx.lr = 0x825DFB14;
	sub_825A4738(ctx, base);
	// addi r4,r30,100
	ctx.r4.s64 = ctx.r30.s64 + 100;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x825a4838
	ctx.lr = 0x825DFB20;
	sub_825A4838(ctx, base);
	// addi r11,r30,672
	ctx.r11.s64 = ctx.r30.s64 + 672;
	// addi r11,r31,672
	ctx.r11.s64 = ctx.r31.s64 + 672;
	// addi r4,r30,736
	ctx.r4.s64 = ctx.r30.s64 + 736;
	// addi r3,r31,736
	ctx.r3.s64 = ctx.r31.s64 + 736;
	// li r5,148
	ctx.r5.s64 = 148;
	// lwz r11,660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// stw r11,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r11.u32);
	// lwz r10,664(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// stw r10,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r10.u32);
	// lwz r9,668(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 668);
	// stw r9,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r9.u32);
	// lwz r8,672(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// stw r8,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r8.u32);
	// lbz r7,676(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 676);
	// stb r7,676(r31)
	PPC_STORE_U8(ctx.r31.u32 + 676, ctx.r7.u8);
	// lwz r6,680(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 680);
	// stw r6,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r6.u32);
	// lwz r11,684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 684);
	// stw r11,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r11.u32);
	// lwz r10,688(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 688);
	// stw r10,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r10.u32);
	// lwz r9,692(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// stw r9,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r9.u32);
	// lwz r8,696(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 696);
	// stw r8,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r8.u32);
	// lwz r7,700(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 700);
	// stw r7,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r7.u32);
	// lwz r6,704(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// stw r6,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r6.u32);
	// lfs f0,708(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 708);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,708(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 708, temp.u32);
	// lfs f13,712(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,712(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 712, temp.u32);
	// lfs f12,716(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 716);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,716(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 716, temp.u32);
	// lbz r11,720(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 720);
	// stb r11,720(r31)
	PPC_STORE_U8(ctx.r31.u32 + 720, ctx.r11.u8);
	// lbz r10,721(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 721);
	// stb r10,721(r31)
	PPC_STORE_U8(ctx.r31.u32 + 721, ctx.r10.u8);
	// lfs f11,724(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,724(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 724, temp.u32);
	// lfs f10,728(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 728);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,728(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 728, temp.u32);
	// lwz r9,732(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 732);
	// stw r9,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r9.u32);
	// bl 0x831ce980
	ctx.lr = 0x825DFBD8;
	sub_831CE980(ctx, base);
	// lwz r8,884(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 884);
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r11,r31,900
	ctx.r11.s64 = ctx.r31.s64 + 900;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// stw r8,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r8.u32);
	// lwz r7,888(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 888);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r7,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r7.u32);
	// lwz r6,892(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 892);
	// stw r6,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r6.u32);
	// lbz r5,896(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 896);
	// stb r5,896(r31)
	PPC_STORE_U8(ctx.r31.u32 + 896, ctx.r5.u8);
loc_825DFC08:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825dfc08
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DFC08;
	// addi r4,r30,996
	ctx.r4.s64 = ctx.r30.s64 + 996;
	// addi r3,r31,996
	ctx.r3.s64 = ctx.r31.s64 + 996;
	// bl 0x825deec0
	ctx.lr = 0x825DFC24;
	sub_825DEEC0(ctx, base);
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,4348
	ctx.r9.s64 = ctx.r30.s64 + 4348;
	// addi r8,r31,4348
	ctx.r8.s64 = ctx.r31.s64 + 4348;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lbz r10,4344(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4344);
	// stb r10,4344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4344, ctx.r10.u8);
	// lbz r7,4345(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4345);
	// stb r7,4345(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4345, ctx.r7.u8);
	// lbz r6,4346(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4346);
	// stb r6,4346(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4346, ctx.r6.u8);
	// lbz r5,4347(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4347);
	// stb r5,4347(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4347, ctx.r5.u8);
loc_825DFC58:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825dfc58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DFC58;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,4370
	ctx.r9.s64 = ctx.r30.s64 + 4370;
	// addi r8,r31,4370
	ctx.r8.s64 = ctx.r31.s64 + 4370;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825DFC7C:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825dfc7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825DFC7C;
	// lfs f0,4392(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4392);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,4392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4392, temp.u32);
	// lbz r11,4396(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4396);
	// stb r11,4396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4396, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_825DFCB8"))) PPC_WEAK_FUNC(sub_825DFCB8);
PPC_FUNC_IMPL(__imp__sub_825DFCB8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lbz r10,5813(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5813);
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// blt cr6,0x825dfd34
	if (cr6.lt) goto loc_825DFD34;
	// cmpwi cr6,r10,14
	cr6.compare<int32_t>(ctx.r10.s32, 14, xer);
	// ble cr6,0x825dfd18
	if (!cr6.gt) goto loc_825DFD18;
	// cmpwi cr6,r10,15
	cr6.compare<int32_t>(ctx.r10.s32, 15, xer);
	// bne cr6,0x825dfd34
	if (!cr6.eq) goto loc_825DFD34;
	// bl 0x825de570
	ctx.lr = 0x825DFCF8;
	sub_825DE570(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,2740
	ctx.r3.s64 = ctx.r31.s64 + 2740;
	// bl 0x83131d70
	ctx.lr = 0x825DFD04;
	sub_83131D70(ctx, base);
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
loc_825DFD18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825de570
	ctx.lr = 0x825DFD20;
	sub_825DE570(ctx, base);
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
loc_825DFD34:
	// lwz r10,5388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5388);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bgt cr6,0x825dfe9c
	if (cr6.gt) goto loc_825DFE9C;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x825dfe9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DFE9C;
	// bdzf 4*cr6+eq,0x825dfe9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DFE9C;
	// bdzf 4*cr6+eq,0x825dfd84
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DFD84;
	// bdzf 4*cr6+eq,0x825dfe9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DFE9C;
	// bdzf 4*cr6+eq,0x825dfe90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DFE90;
	// bdzf 4*cr6+eq,0x825dfe9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DFE9C;
	// bdzf 4*cr6+eq,0x825dfda0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DFDA0;
	// bne cr6,0x825dfe74
	if (!cr6.eq) goto loc_825DFE74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ddbf0
	ctx.lr = 0x825DFD70;
	sub_825DDBF0(ctx, base);
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
loc_825DFD84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d95b0
	ctx.lr = 0x825DFD8C;
	sub_825D95B0(ctx, base);
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
loc_825DFDA0:
	// lwz r11,5356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5356);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x825dff60
	if (cr6.gt) goto loc_825DFF60;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x825dfde8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DFDE8;
	// bdzf 4*cr6+eq,0x825dfe04
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DFE04;
	// bdzf 4*cr6+eq,0x825dfe20
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DFE20;
	// bdzf 4*cr6+eq,0x825dfe3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DFE3C;
	// bne cr6,0x825dfe58
	if (!cr6.eq) goto loc_825DFE58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9858
	ctx.lr = 0x825DFDD4;
	sub_825D9858(ctx, base);
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
loc_825DFDE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9cf0
	ctx.lr = 0x825DFDF0;
	sub_825D9CF0(ctx, base);
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
loc_825DFE04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9b68
	ctx.lr = 0x825DFE0C;
	sub_825D9B68(ctx, base);
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
loc_825DFE20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d99e0
	ctx.lr = 0x825DFE28;
	sub_825D99E0(ctx, base);
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
loc_825DFE3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d9e78
	ctx.lr = 0x825DFE44;
	sub_825D9E78(ctx, base);
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
loc_825DFE58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825da020
	ctx.lr = 0x825DFE60;
	sub_825DA020(ctx, base);
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
loc_825DFE74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825da1a8
	ctx.lr = 0x825DFE7C;
	sub_825DA1A8(ctx, base);
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
loc_825DFE90:
	// lbz r10,5437(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5437);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825dfd84
	if (!cr6.eq) goto loc_825DFD84;
loc_825DFE9C:
	// lwz r11,5356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5356);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x825dff60
	if (cr6.gt) goto loc_825DFF60;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x825dfee8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DFEE8;
	// bdzf 4*cr6+eq,0x825dff04
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DFF04;
	// bdzf 4*cr6+eq,0x825dff20
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DFF20;
	// bdzf 4*cr6+eq,0x825dff3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DFF3C;
	// bdzf 4*cr6+eq,0x825dff3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825DFF3C;
	// bne cr6,0x825dff58
	if (!cr6.eq) goto loc_825DFF58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ddc70
	ctx.lr = 0x825DFED4;
	sub_825DDC70(ctx, base);
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
loc_825DFEE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825def68
	ctx.lr = 0x825DFEF0;
	sub_825DEF68(ctx, base);
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
loc_825DFF04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ddf08
	ctx.lr = 0x825DFF0C;
	sub_825DDF08(ctx, base);
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
loc_825DFF20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ddcf0
	ctx.lr = 0x825DFF28;
	sub_825DDCF0(ctx, base);
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
loc_825DFF3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825de180
	ctx.lr = 0x825DFF44;
	sub_825DE180(ctx, base);
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
loc_825DFF58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d93b8
	ctx.lr = 0x825DFF60;
	sub_825D93B8(ctx, base);
loc_825DFF60:
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

__attribute__((alias("__imp__sub_825DFF74"))) PPC_WEAK_FUNC(sub_825DFF74);
PPC_FUNC_IMPL(__imp__sub_825DFF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DFF78"))) PPC_WEAK_FUNC(sub_825DFF78);
PPC_FUNC_IMPL(__imp__sub_825DFF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825DFF80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r27,r11,64832
	ctx.r27.u64 = ctx.r11.u64 | 64832;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lwz r29,292(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825dffcc
	if (cr6.eq) goto loc_825DFFCC;
	// bl 0x82da1d10
	ctx.lr = 0x825DFFB0;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825dffc8
	if (cr6.eq) goto loc_825DFFC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825da1a8
	ctx.lr = 0x825DFFC4;
	sub_825DA1A8(ctx, base);
	// b 0x825e006c
	goto loc_825E006C;
loc_825DFFC8:
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
loc_825DFFCC:
	// lwz r3,472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e0020
	if (cr6.eq) goto loc_825E0020;
	// bl 0x82a47d40
	ctx.lr = 0x825DFFDC;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e0020
	if (cr6.eq) goto loc_825E0020;
	// lbz r11,862(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 862);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e0060
	if (!cr6.eq) goto loc_825E0060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82617e28
	ctx.lr = 0x825DFFFC;
	sub_82617E28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e0060
	if (cr6.eq) goto loc_825E0060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82618aa8
	ctx.lr = 0x825E0010;
	sub_82618AA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_825E0020:
	// lbz r11,5813(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5813);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e0060
	if (cr6.eq) goto loc_825E0060;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x825e0060
	if (!cr6.eq) goto loc_825E0060;
	// lwzx r11,r31,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x837475e8
	ctx.lr = 0x825E0044;
	sub_837475E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2740
	ctx.r3.s64 = ctx.r31.s64 + 2740;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r5,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x825e92e0
	ctx.lr = 0x825E0060;
	sub_825E92E0(ctx, base);
loc_825E0060:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dfcb8
	ctx.lr = 0x825E006C;
	sub_825DFCB8(ctx, base);
loc_825E006C:
	// addi r29,r29,5356
	ctx.r29.s64 = ctx.r29.s64 + 5356;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x825e0088
	if (!cr6.eq) goto loc_825E0088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dd168
	ctx.lr = 0x825E0084;
	sub_825DD168(ctx, base);
	// b 0x825e00e4
	goto loc_825E00E4;
loc_825E0088:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x825e00d4
	if (!cr6.eq) goto loc_825E00D4;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r4,5360(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5360);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x825e00b0
	if (!cr6.eq) goto loc_825E00B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3472, ctx.r11.u32);
	// b 0x825e00e4
	goto loc_825E00E4;
loc_825E00B0:
	// lwzx r11,r31,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a29dc0
	ctx.lr = 0x825E00C0;
	sub_82A29DC0(ctx, base);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,3472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3472, ctx.r11.u32);
	// b 0x825e00e4
	goto loc_825E00E4;
loc_825E00D4:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x825e00e4
	if (!cr6.eq) goto loc_825E00E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,7714(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7714, ctx.r11.u8);
loc_825E00E4:
	// lbz r11,7714(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7714);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e00f8
	if (cr6.eq) goto loc_825E00F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dd3b0
	ctx.lr = 0x825E00F8;
	sub_825DD3B0(ctx, base);
loc_825E00F8:
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r4,r31,3628
	ctx.r4.s64 = ctx.r31.s64 + 3628;
	// stw r11,3628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3628, ctx.r11.u32);
	// addi r6,r31,3412
	ctx.r6.s64 = ctx.r31.s64 + 3412;
	// stw r11,3632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3632, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82632c78
	ctx.lr = 0x825E0118;
	sub_82632C78(ctx, base);
	// addi r3,r31,2780
	ctx.r3.s64 = ctx.r31.s64 + 2780;
	// bl 0x82a199b0
	ctx.lr = 0x825E0120;
	sub_82A199B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E0128"))) PPC_WEAK_FUNC(sub_825E0128);
PPC_FUNC_IMPL(__imp__sub_825E0128) {
	PPC_FUNC_PROLOGUE();
	// b 0x825df338
	sub_825DF338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E012C"))) PPC_WEAK_FUNC(sub_825E012C);
PPC_FUNC_IMPL(__imp__sub_825E012C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E0130"))) PPC_WEAK_FUNC(sub_825E0130);
PPC_FUNC_IMPL(__imp__sub_825E0130) {
	PPC_FUNC_PROLOGUE();
	// b 0x825df3b8
	sub_825DF3B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E0134"))) PPC_WEAK_FUNC(sub_825E0134);
PPC_FUNC_IMPL(__imp__sub_825E0134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E0138"))) PPC_WEAK_FUNC(sub_825E0138);
PPC_FUNC_IMPL(__imp__sub_825E0138) {
	PPC_FUNC_PROLOGUE();
	// b 0x825df438
	sub_825DF438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E013C"))) PPC_WEAK_FUNC(sub_825E013C);
PPC_FUNC_IMPL(__imp__sub_825E013C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E0140"))) PPC_WEAK_FUNC(sub_825E0140);
PPC_FUNC_IMPL(__imp__sub_825E0140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825E0148;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x825e01d8
	if (cr6.eq) goto loc_825E01D8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e01cc
	if (!cr6.eq) goto loc_825E01CC;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825E017C;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e01ac
	if (cr6.eq) goto loc_825E01AC;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825E0194:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a461f0
	ctx.lr = 0x825E019C;
	sub_82A461F0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bge 0x825e0194
	if (!cr0.lt) goto loc_825E0194;
	// b 0x825e01b0
	goto loc_825E01B0;
loc_825E01AC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825E01B0:
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x825e01cc
	if (!cr6.eq) goto loc_825E01CC;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825E01CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825E01D8:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e01e8
	if (cr6.eq) goto loc_825E01E8;
	// bl 0x825df578
	ctx.lr = 0x825E01E8;
	sub_825DF578(ctx, base);
loc_825E01E8:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825E0200;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e0230
	if (cr6.eq) goto loc_825E0230;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825E0218:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a461f0
	ctx.lr = 0x825E0220;
	sub_82A461F0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bge 0x825e0218
	if (!cr0.lt) goto loc_825E0218;
	// b 0x825e0234
	goto loc_825E0234;
loc_825E0230:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825E0234:
	// addic r11,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// lis r9,1536
	ctx.r9.s64 = 100663296;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,3
	ctx.r7.u64 = ctx.r9.u64 | 3;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E0254"))) PPC_WEAK_FUNC(sub_825E0254);
PPC_FUNC_IMPL(__imp__sub_825E0254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E0258"))) PPC_WEAK_FUNC(sub_825E0258);
PPC_FUNC_IMPL(__imp__sub_825E0258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r9,1
	ctx.r9.s64 = 1;
loc_825E0274:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r9,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825e0274
	if (!cr0.eq) goto loc_825E0274;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e02c0
	if (!cr6.eq) goto loc_825E02C0;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825E02A0;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-2888
	ctx.r5.s64 = ctx.r11.s64 + -2888;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825E02C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825E02C0:
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

__attribute__((alias("__imp__sub_825E02D8"))) PPC_WEAK_FUNC(sub_825E02D8);
PPC_FUNC_IMPL(__imp__sub_825E02D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825E02E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x825e0370
	if (cr6.eq) goto loc_825E0370;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e0364
	if (!cr6.eq) goto loc_825E0364;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825E0314;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e0344
	if (cr6.eq) goto loc_825E0344;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825E032C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a46278
	ctx.lr = 0x825E0334;
	sub_82A46278(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,6
	ctx.r30.s64 = ctx.r30.s64 + 6;
	// bge 0x825e032c
	if (!cr0.lt) goto loc_825E032C;
	// b 0x825e0348
	goto loc_825E0348;
loc_825E0344:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825E0348:
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x825e0364
	if (!cr6.eq) goto loc_825E0364;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825E0364:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825E0370:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e0380
	if (cr6.eq) goto loc_825E0380;
	// bl 0x825df578
	ctx.lr = 0x825E0380;
	sub_825DF578(ctx, base);
loc_825E0380:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825E0398;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e03c8
	if (cr6.eq) goto loc_825E03C8;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825E03B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a46278
	ctx.lr = 0x825E03B8;
	sub_82A46278(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,6
	ctx.r30.s64 = ctx.r30.s64 + 6;
	// bge 0x825e03b0
	if (!cr0.lt) goto loc_825E03B0;
	// b 0x825e03cc
	goto loc_825E03CC;
loc_825E03C8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825E03CC:
	// addic r11,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// lis r9,1536
	ctx.r9.s64 = 100663296;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,3
	ctx.r7.u64 = ctx.r9.u64 | 3;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E03EC"))) PPC_WEAK_FUNC(sub_825E03EC);
PPC_FUNC_IMPL(__imp__sub_825E03EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E03F0"))) PPC_WEAK_FUNC(sub_825E03F0);
PPC_FUNC_IMPL(__imp__sub_825E03F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825E03F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x825e0488
	if (cr6.eq) goto loc_825E0488;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e047c
	if (!cr6.eq) goto loc_825E047C;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,868
	ctx.r4.s64 = 868;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825E042C;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e045c
	if (cr6.eq) goto loc_825E045C;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825E0444:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2c198
	ctx.lr = 0x825E044C;
	sub_82A2C198(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,432
	ctx.r30.s64 = ctx.r30.s64 + 432;
	// bge 0x825e0444
	if (!cr0.lt) goto loc_825E0444;
	// b 0x825e0460
	goto loc_825E0460;
loc_825E045C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825E0460:
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x825e047c
	if (!cr6.eq) goto loc_825E047C;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825E047C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825E0488:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e0498
	if (cr6.eq) goto loc_825E0498;
	// bl 0x825df578
	ctx.lr = 0x825E0498;
	sub_825DF578(ctx, base);
loc_825E0498:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,868
	ctx.r4.s64 = 868;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825E04B0;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e04e0
	if (cr6.eq) goto loc_825E04E0;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825E04C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2c198
	ctx.lr = 0x825E04D0;
	sub_82A2C198(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,432
	ctx.r30.s64 = ctx.r30.s64 + 432;
	// bge 0x825e04c8
	if (!cr0.lt) goto loc_825E04C8;
	// b 0x825e04e4
	goto loc_825E04E4;
loc_825E04E0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825E04E4:
	// addic r11,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// lis r9,1536
	ctx.r9.s64 = 100663296;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,3
	ctx.r7.u64 = ctx.r9.u64 | 3;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E0504"))) PPC_WEAK_FUNC(sub_825E0504);
PPC_FUNC_IMPL(__imp__sub_825E0504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E0508"))) PPC_WEAK_FUNC(sub_825E0508);
PPC_FUNC_IMPL(__imp__sub_825E0508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825E0510;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x825e05a0
	if (cr6.eq) goto loc_825E05A0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e0594
	if (!cr6.eq) goto loc_825E0594;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825E0544;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e0574
	if (cr6.eq) goto loc_825E0574;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825E055C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a46e68
	ctx.lr = 0x825E0564;
	sub_82A46E68(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bge 0x825e055c
	if (!cr0.lt) goto loc_825E055C;
	// b 0x825e0578
	goto loc_825E0578;
loc_825E0574:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825E0578:
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x825e0594
	if (!cr6.eq) goto loc_825E0594;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825E0594:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825E05A0:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e05b0
	if (cr6.eq) goto loc_825E05B0;
	// bl 0x825df5e0
	ctx.lr = 0x825E05B0;
	sub_825DF5E0(ctx, base);
loc_825E05B0:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825E05C8;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e05f8
	if (cr6.eq) goto loc_825E05F8;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825E05E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a46e68
	ctx.lr = 0x825E05E8;
	sub_82A46E68(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bge 0x825e05e0
	if (!cr0.lt) goto loc_825E05E0;
	// b 0x825e05fc
	goto loc_825E05FC;
loc_825E05F8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825E05FC:
	// addic r11,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// lis r9,1536
	ctx.r9.s64 = 100663296;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,3
	ctx.r7.u64 = ctx.r9.u64 | 3;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E061C"))) PPC_WEAK_FUNC(sub_825E061C);
PPC_FUNC_IMPL(__imp__sub_825E061C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E0620"))) PPC_WEAK_FUNC(sub_825E0620);
PPC_FUNC_IMPL(__imp__sub_825E0620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825E0628;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,6
	ctx.r29.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825E0644;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e06b0
	if (cr6.eq) goto loc_825E06B0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-9880
	ctx.r10.s64 = ctx.r11.s64 + -9880;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// rotlwi r3,r30,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e0680
	if (cr6.eq) goto loc_825E0680;
	// bl 0x825df578
	ctx.lr = 0x825E0680;
	sub_825DF578(ctx, base);
loc_825E0680:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2796
	ctx.r4.s64 = 2796;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825E0694;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e06bc
	if (cr6.eq) goto loc_825E06BC;
	// bl 0x825dd750
	ctx.lr = 0x825E06A0;
	sub_825DD750(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825E06B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825E06BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E06D0"))) PPC_WEAK_FUNC(sub_825E06D0);
PPC_FUNC_IMPL(__imp__sub_825E06D0) {
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
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825E06F8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e0748
	if (cr6.eq) goto loc_825E0748;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-9968
	ctx.r8.s64 = ctx.r10.s64 + -9968;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x825e0140
	ctx.lr = 0x825E0730;
	sub_825E0140(ctx, base);
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
loc_825E0748:
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

__attribute__((alias("__imp__sub_825E0760"))) PPC_WEAK_FUNC(sub_825E0760);
PPC_FUNC_IMPL(__imp__sub_825E0760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825E0768;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,6
	ctx.r29.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825E0784;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e07f0
	if (cr6.eq) goto loc_825E07F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-9924
	ctx.r10.s64 = ctx.r11.s64 + -9924;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// rotlwi r3,r30,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e07c0
	if (cr6.eq) goto loc_825E07C0;
	// bl 0x825df578
	ctx.lr = 0x825E07C0;
	sub_825DF578(ctx, base);
loc_825E07C0:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,156
	ctx.r4.s64 = 156;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825E07D4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e07fc
	if (cr6.eq) goto loc_825E07FC;
	// bl 0x825dd6e8
	ctx.lr = 0x825E07E0;
	sub_825DD6E8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825E07F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825E07FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E0810"))) PPC_WEAK_FUNC(sub_825E0810);
PPC_FUNC_IMPL(__imp__sub_825E0810) {
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
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825E0838;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e0888
	if (cr6.eq) goto loc_825E0888;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-9836
	ctx.r8.s64 = ctx.r10.s64 + -9836;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x825e02d8
	ctx.lr = 0x825E0870;
	sub_825E02D8(ctx, base);
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
loc_825E0888:
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

__attribute__((alias("__imp__sub_825E08A0"))) PPC_WEAK_FUNC(sub_825E08A0);
PPC_FUNC_IMPL(__imp__sub_825E08A0) {
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
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825E08C8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e0918
	if (cr6.eq) goto loc_825E0918;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-9792
	ctx.r8.s64 = ctx.r10.s64 + -9792;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x825e03f0
	ctx.lr = 0x825E0900;
	sub_825E03F0(ctx, base);
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
loc_825E0918:
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

__attribute__((alias("__imp__sub_825E0930"))) PPC_WEAK_FUNC(sub_825E0930);
PPC_FUNC_IMPL(__imp__sub_825E0930) {
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
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825E0958;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e09a8
	if (cr6.eq) goto loc_825E09A8;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-9748
	ctx.r8.s64 = ctx.r10.s64 + -9748;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x825e0508
	ctx.lr = 0x825E0990;
	sub_825E0508(ctx, base);
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
loc_825E09A8:
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

__attribute__((alias("__imp__sub_825E09C0"))) PPC_WEAK_FUNC(sub_825E09C0);
PPC_FUNC_IMPL(__imp__sub_825E09C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825e0258
	sub_825E0258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E09C4"))) PPC_WEAK_FUNC(sub_825E09C4);
PPC_FUNC_IMPL(__imp__sub_825E09C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E09C8"))) PPC_WEAK_FUNC(sub_825E09C8);
PPC_FUNC_IMPL(__imp__sub_825E09C8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-9968
	ctx.r10.s64 = ctx.r11.s64 + -9968;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825e0a08
	if (cr6.eq) goto loc_825E0A08;
	// bl 0x825df578
	ctx.lr = 0x825E0A00;
	sub_825DF578(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825E0A08:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-25192
	ctx.r9.s64 = ctx.r11.s64 + -25192;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825e0a34
	if (cr6.eq) goto loc_825E0A34;
	// bl 0x82595188
	ctx.lr = 0x825E0A24;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825E0A34;
	sub_825952B8(ctx, base);
loc_825E0A34:
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

__attribute__((alias("__imp__sub_825E0A50"))) PPC_WEAK_FUNC(sub_825E0A50);
PPC_FUNC_IMPL(__imp__sub_825E0A50) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-9924
	ctx.r10.s64 = ctx.r11.s64 + -9924;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825e0a90
	if (cr6.eq) goto loc_825E0A90;
	// bl 0x825df578
	ctx.lr = 0x825E0A88;
	sub_825DF578(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825E0A90:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-25192
	ctx.r9.s64 = ctx.r11.s64 + -25192;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825e0abc
	if (cr6.eq) goto loc_825E0ABC;
	// bl 0x82595188
	ctx.lr = 0x825E0AAC;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825E0ABC;
	sub_825952B8(ctx, base);
loc_825E0ABC:
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

__attribute__((alias("__imp__sub_825E0AD8"))) PPC_WEAK_FUNC(sub_825E0AD8);
PPC_FUNC_IMPL(__imp__sub_825E0AD8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-9880
	ctx.r10.s64 = ctx.r11.s64 + -9880;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825e0b18
	if (cr6.eq) goto loc_825E0B18;
	// bl 0x825df578
	ctx.lr = 0x825E0B10;
	sub_825DF578(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825E0B18:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-25192
	ctx.r9.s64 = ctx.r11.s64 + -25192;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825e0b44
	if (cr6.eq) goto loc_825E0B44;
	// bl 0x82595188
	ctx.lr = 0x825E0B34;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825E0B44;
	sub_825952B8(ctx, base);
loc_825E0B44:
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

__attribute__((alias("__imp__sub_825E0B60"))) PPC_WEAK_FUNC(sub_825E0B60);
PPC_FUNC_IMPL(__imp__sub_825E0B60) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-9836
	ctx.r10.s64 = ctx.r11.s64 + -9836;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825e0ba0
	if (cr6.eq) goto loc_825E0BA0;
	// bl 0x825df578
	ctx.lr = 0x825E0B98;
	sub_825DF578(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825E0BA0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-25192
	ctx.r9.s64 = ctx.r11.s64 + -25192;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825e0bcc
	if (cr6.eq) goto loc_825E0BCC;
	// bl 0x82595188
	ctx.lr = 0x825E0BBC;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825E0BCC;
	sub_825952B8(ctx, base);
loc_825E0BCC:
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

__attribute__((alias("__imp__sub_825E0BE8"))) PPC_WEAK_FUNC(sub_825E0BE8);
PPC_FUNC_IMPL(__imp__sub_825E0BE8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-9792
	ctx.r10.s64 = ctx.r11.s64 + -9792;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825e0c28
	if (cr6.eq) goto loc_825E0C28;
	// bl 0x825df578
	ctx.lr = 0x825E0C20;
	sub_825DF578(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825E0C28:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-25192
	ctx.r9.s64 = ctx.r11.s64 + -25192;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825e0c54
	if (cr6.eq) goto loc_825E0C54;
	// bl 0x82595188
	ctx.lr = 0x825E0C44;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825E0C54;
	sub_825952B8(ctx, base);
loc_825E0C54:
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

__attribute__((alias("__imp__sub_825E0C70"))) PPC_WEAK_FUNC(sub_825E0C70);
PPC_FUNC_IMPL(__imp__sub_825E0C70) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-9748
	ctx.r10.s64 = ctx.r11.s64 + -9748;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825e0cb0
	if (cr6.eq) goto loc_825E0CB0;
	// bl 0x825df5e0
	ctx.lr = 0x825E0CA8;
	sub_825DF5E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825E0CB0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-25192
	ctx.r9.s64 = ctx.r11.s64 + -25192;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825e0cdc
	if (cr6.eq) goto loc_825E0CDC;
	// bl 0x82595188
	ctx.lr = 0x825E0CCC;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825E0CDC;
	sub_825952B8(ctx, base);
loc_825E0CDC:
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

__attribute__((alias("__imp__sub_825E0CF8"))) PPC_WEAK_FUNC(sub_825E0CF8);
PPC_FUNC_IMPL(__imp__sub_825E0CF8) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e0d4c
	if (cr6.eq) goto loc_825E0D4C;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e0d4c
	if (cr6.eq) goto loc_825E0D4C;
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
	ctx.lr = 0x825E0D40;
	sub_8353F3B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x825e0d50
	goto loc_825E0D50;
loc_825E0D4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E0D50:
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_825E0D6C"))) PPC_WEAK_FUNC(sub_825E0D6C);
PPC_FUNC_IMPL(__imp__sub_825E0D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E0D70"))) PPC_WEAK_FUNC(sub_825E0D70);
PPC_FUNC_IMPL(__imp__sub_825E0D70) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r11,1400
	ctx.r4.s64 = ctx.r11.s64 + 1400;
	// b 0x825ded60
	sub_825DED60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E0D80"))) PPC_WEAK_FUNC(sub_825E0D80);
PPC_FUNC_IMPL(__imp__sub_825E0D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r9,1
	ctx.r9.s64 = 1;
loc_825E0D9C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r9,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825e0d9c
	if (!cr0.eq) goto loc_825E0D9C;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e0de8
	if (!cr6.eq) goto loc_825E0DE8;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825E0DC8;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,3440
	ctx.r5.s64 = ctx.r11.s64 + 3440;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825E0DE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825E0DE8:
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

__attribute__((alias("__imp__sub_825E0E00"))) PPC_WEAK_FUNC(sub_825E0E00);
PPC_FUNC_IMPL(__imp__sub_825E0E00) {
	PPC_FUNC_PROLOGUE();
	// b 0x825e0d80
	sub_825E0D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E0E04"))) PPC_WEAK_FUNC(sub_825E0E04);
PPC_FUNC_IMPL(__imp__sub_825E0E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E0E08"))) PPC_WEAK_FUNC(sub_825E0E08);
PPC_FUNC_IMPL(__imp__sub_825E0E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825E0E10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-9704
	ctx.r10.s64 = ctx.r11.s64 + -9704;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825E0E2C;
	sub_825E0CF8(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e0e58
	if (cr6.eq) goto loc_825E0E58;
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
	ctx.lr = 0x825E0E50;
	sub_8353F3B8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_825E0E58:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e0e70
	if (cr6.eq) goto loc_825E0E70;
	// bl 0x82416268
	ctx.lr = 0x825E0E6C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825E0E70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E0E78"))) PPC_WEAK_FUNC(sub_825E0E78);
PPC_FUNC_IMPL(__imp__sub_825E0E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-9680
	ctx.r3.s64 = ctx.r11.s64 + -9680;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E0E84"))) PPC_WEAK_FUNC(sub_825E0E84);
PPC_FUNC_IMPL(__imp__sub_825E0E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E0E88"))) PPC_WEAK_FUNC(sub_825E0E88);
PPC_FUNC_IMPL(__imp__sub_825E0E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-9656
	ctx.r3.s64 = ctx.r11.s64 + -9656;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E0E94"))) PPC_WEAK_FUNC(sub_825E0E94);
PPC_FUNC_IMPL(__imp__sub_825E0E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E0E98"))) PPC_WEAK_FUNC(sub_825E0E98);
PPC_FUNC_IMPL(__imp__sub_825E0E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-9624
	ctx.r3.s64 = ctx.r11.s64 + -9624;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E0EA4"))) PPC_WEAK_FUNC(sub_825E0EA4);
PPC_FUNC_IMPL(__imp__sub_825E0EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E0EA8"))) PPC_WEAK_FUNC(sub_825E0EA8);
PPC_FUNC_IMPL(__imp__sub_825E0EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-9604
	ctx.r3.s64 = ctx.r11.s64 + -9604;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E0EB4"))) PPC_WEAK_FUNC(sub_825E0EB4);
PPC_FUNC_IMPL(__imp__sub_825E0EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E0EB8"))) PPC_WEAK_FUNC(sub_825E0EB8);
PPC_FUNC_IMPL(__imp__sub_825E0EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-9576
	ctx.r3.s64 = ctx.r11.s64 + -9576;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E0EC4"))) PPC_WEAK_FUNC(sub_825E0EC4);
PPC_FUNC_IMPL(__imp__sub_825E0EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E0EC8"))) PPC_WEAK_FUNC(sub_825E0EC8);
PPC_FUNC_IMPL(__imp__sub_825E0EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-9548
	ctx.r3.s64 = ctx.r11.s64 + -9548;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E0ED4"))) PPC_WEAK_FUNC(sub_825E0ED4);
PPC_FUNC_IMPL(__imp__sub_825E0ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E0ED8"))) PPC_WEAK_FUNC(sub_825E0ED8);
PPC_FUNC_IMPL(__imp__sub_825E0ED8) {
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
	ctx.lr = 0x825E0EE0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// addi r10,r11,-3088
	ctx.r10.s64 = ctx.r11.s64 + -3088;
	// addi r31,r31,-712
	ctx.r31.s64 = ctx.r31.s64 + -712;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r26.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825e0f4c
	if (cr6.eq) goto loc_825E0F4C;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825E0F20;
	sub_82595150(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e0f40
	if (cr6.eq) goto loc_825E0F40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E0F40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825E0F40:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825E0F48;
	sub_82595170(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E0F4C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,220
	ctx.r10.u64 = ctx.r11.u64 | 220;
	// lwzx r3,r25,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e0f64
	if (cr6.eq) goto loc_825E0F64;
	// bl 0x837d63e8
	ctx.lr = 0x825E0F64;
	sub_837D63E8(ctx, base);
loc_825E0F64:
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,628
	ctx.r31.s64 = ctx.r31.s64 + 628;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825E0F80;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e0fa8
	if (cr6.eq) goto loc_825E0FA8;
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
	ctx.lr = 0x825E0FA4;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E0FA8:
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,608
	ctx.r31.s64 = ctx.r31.s64 + 608;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825E0FC4;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e0fec
	if (cr6.eq) goto loc_825E0FEC;
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
	ctx.lr = 0x825E0FE8;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E0FEC:
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,588
	ctx.r31.s64 = ctx.r31.s64 + 588;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825E1008;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e1030
	if (cr6.eq) goto loc_825E1030;
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
	ctx.lr = 0x825E102C;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E1030:
	// addi r29,r25,40
	ctx.r29.s64 = ctx.r25.s64 + 40;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addis r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 65536;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r30,r30,548
	ctx.r30.s64 = ctx.r30.s64 + 548;
	// addi r28,r11,-24712
	ctx.r28.s64 = ctx.r11.s64 + -24712;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
loc_825E104C:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// stwu r28,-20(r30)
	ea = -20 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e1084
	if (cr6.eq) goto loc_825E1084;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e1084
	if (cr6.eq) goto loc_825E1084;
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
	ctx.lr = 0x825E1080;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E1084:
	// stb r26,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r26.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e10ac
	if (cr6.eq) goto loc_825E10AC;
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
	ctx.lr = 0x825E10A8;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E10AC:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bge 0x825e104c
	if (!cr0.lt) goto loc_825E104C;
	// addis r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r30,508
	ctx.r30.s64 = ctx.r30.s64 + 508;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// addi r29,r11,-24712
	ctx.r29.s64 = ctx.r11.s64 + -24712;
loc_825E10CC:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// stwu r29,-20(r30)
	ea = -20 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e1104
	if (cr6.eq) goto loc_825E1104;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e1104
	if (cr6.eq) goto loc_825E1104;
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
	ctx.lr = 0x825E1100;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E1104:
	// stb r26,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r26.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e112c
	if (cr6.eq) goto loc_825E112C;
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
	ctx.lr = 0x825E1128;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E112C:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x825e10cc
	if (!cr0.lt) goto loc_825E10CC;
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,488
	ctx.r31.s64 = ctx.r31.s64 + 488;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825E1150;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e1178
	if (cr6.eq) goto loc_825E1178;
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
	ctx.lr = 0x825E1174;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E1178:
	// addis r3,r25,1
	ctx.r3.s64 = ctx.r25.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,468
	ctx.r3.s64 = ctx.r3.s64 + 468;
	// addi r10,r11,-16652
	ctx.r10.s64 = ctx.r11.s64 + -16652;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825c3358
	ctx.lr = 0x825E1190;
	sub_825C3358(ctx, base);
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r31,r31,448
	ctx.r31.s64 = ctx.r31.s64 + 448;
	// addi r8,r9,-9704
	ctx.r8.s64 = ctx.r9.s64 + -9704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825E11AC;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e11d4
	if (cr6.eq) goto loc_825E11D4;
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
	ctx.lr = 0x825E11D0;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E11D4:
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,428
	ctx.r31.s64 = ctx.r31.s64 + 428;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825E11F0;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e1218
	if (cr6.eq) goto loc_825E1218;
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
	ctx.lr = 0x825E1214;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E1218:
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,408
	ctx.r31.s64 = ctx.r31.s64 + 408;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825E1234;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e125c
	if (cr6.eq) goto loc_825E125C;
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
	ctx.lr = 0x825E1258;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E125C:
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,388
	ctx.r31.s64 = ctx.r31.s64 + 388;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825E1278;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e12a0
	if (cr6.eq) goto loc_825E12A0;
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
	ctx.lr = 0x825E129C;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E12A0:
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,368
	ctx.r31.s64 = ctx.r31.s64 + 368;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825E12BC;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e12e4
	if (cr6.eq) goto loc_825E12E4;
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
	ctx.lr = 0x825E12E0;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E12E4:
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,304
	ctx.r31.s64 = ctx.r31.s64 + 304;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825E1300;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e1328
	if (cr6.eq) goto loc_825E1328;
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
	ctx.lr = 0x825E1324;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E1328:
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,284
	ctx.r31.s64 = ctx.r31.s64 + 284;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825E1344;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e136c
	if (cr6.eq) goto loc_825E136C;
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
	ctx.lr = 0x825E1368;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E136C:
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,264
	ctx.r31.s64 = ctx.r31.s64 + 264;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825E1388;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e13b0
	if (cr6.eq) goto loc_825E13B0;
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
	ctx.lr = 0x825E13AC;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E13B0:
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,244
	ctx.r31.s64 = ctx.r31.s64 + 244;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825E13CC;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e13f4
	if (cr6.eq) goto loc_825E13F4;
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
	ctx.lr = 0x825E13F0;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E13F4:
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,224
	ctx.r31.s64 = ctx.r31.s64 + 224;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825E1410;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e1438
	if (cr6.eq) goto loc_825E1438;
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
	ctx.lr = 0x825E1434;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E1438:
	// addi r27,r25,440
	ctx.r27.s64 = ctx.r25.s64 + 440;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addis r30,r27,1
	ctx.r30.s64 = ctx.r27.s64 + 65536;
	// li r28,21
	ctx.r28.s64 = 21;
	// addi r30,r30,-220
	ctx.r30.s64 = ctx.r30.s64 + -220;
	// addi r29,r11,-24712
	ctx.r29.s64 = ctx.r11.s64 + -24712;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
loc_825E1454:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// stwu r29,-20(r30)
	ea = -20 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e148c
	if (cr6.eq) goto loc_825E148C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e148c
	if (cr6.eq) goto loc_825E148C;
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
	ctx.lr = 0x825E1488;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E148C:
	// stb r26,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r26.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e14b4
	if (cr6.eq) goto loc_825E14B4;
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
	ctx.lr = 0x825E14B0;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E14B4:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x825e1454
	if (!cr0.lt) goto loc_825E1454;
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,-240
	ctx.r31.s64 = ctx.r31.s64 + -240;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825E14D8;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e1500
	if (cr6.eq) goto loc_825E1500;
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
	ctx.lr = 0x825E14FC;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E1500:
	// addis r30,r27,1
	ctx.r30.s64 = ctx.r27.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r30,-680
	ctx.r30.s64 = ctx.r30.s64 + -680;
	// li r28,21
	ctx.r28.s64 = 21;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// addi r29,r11,-9704
	ctx.r29.s64 = ctx.r11.s64 + -9704;
loc_825E1518:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// stwu r29,-20(r30)
	ea = -20 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e1550
	if (cr6.eq) goto loc_825E1550;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e1550
	if (cr6.eq) goto loc_825E1550;
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
	ctx.lr = 0x825E154C;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E1550:
	// stb r26,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r26.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e1578
	if (cr6.eq) goto loc_825E1578;
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
	ctx.lr = 0x825E1574;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E1578:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x825e1518
	if (!cr0.lt) goto loc_825E1518;
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,-700
	ctx.r31.s64 = ctx.r31.s64 + -700;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825E159C;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825e15c4
	if (cr6.eq) goto loc_825E15C4;
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
	ctx.lr = 0x825E15C0;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825E15C4:
	// addis r3,r25,1
	ctx.r3.s64 = ctx.r25.s64 + 65536;
	// addi r3,r3,-26480
	ctx.r3.s64 = ctx.r3.s64 + -26480;
	// bl 0x825d87b0
	ctx.lr = 0x825E15D0;
	sub_825D87B0(ctx, base);
	// addi r3,r25,7636
	ctx.r3.s64 = ctx.r25.s64 + 7636;
	// bl 0x82a5c688
	ctx.lr = 0x825E15D8;
	sub_82A5C688(ctx, base);
	// addi r3,r25,880
	ctx.r3.s64 = ctx.r25.s64 + 880;
	// bl 0x826693f8
	ctx.lr = 0x825E15E0;
	sub_826693F8(ctx, base);
	// addi r3,r25,152
	ctx.r3.s64 = ctx.r25.s64 + 152;
	// bl 0x82663d90
	ctx.lr = 0x825E15E8;
	sub_82663D90(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E15F0"))) PPC_WEAK_FUNC(sub_825E15F0);
PPC_FUNC_IMPL(__imp__sub_825E15F0) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e16d0
	if (!cr6.eq) goto loc_825E16D0;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x825e1628
	if (!cr6.eq) goto loc_825E1628;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825E1628:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825e1658
	if (cr6.eq) goto loc_825E1658;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825E163C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825e163c
	if (!cr6.eq) goto loc_825E163C;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825E1658:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825e1668
	if (!cr6.eq) goto loc_825E1668;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825E1668:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x825e1694
	if (cr6.eq) goto loc_825E1694;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825E1678:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825e1678
	if (!cr6.eq) goto loc_825E1678;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825E1694:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32162
	ctx.r8.s64 = -2107768832;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,-704
	ctx.r10.s64 = ctx.r11.s64 + -704;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,1568
	ctx.r8.s64 = ctx.r8.s64 + 1568;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r6,10584
	ctx.r6.s64 = ctx.r6.s64 + 10584;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8353f448
	ctx.lr = 0x825E16C8;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_825E16D0:
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

__attribute__((alias("__imp__sub_825E16E4"))) PPC_WEAK_FUNC(sub_825E16E4);
PPC_FUNC_IMPL(__imp__sub_825E16E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E16E8"))) PPC_WEAK_FUNC(sub_825E16E8);
PPC_FUNC_IMPL(__imp__sub_825E16E8) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e17c8
	if (!cr6.eq) goto loc_825E17C8;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x825e1720
	if (!cr6.eq) goto loc_825E1720;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825E1720:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825e1750
	if (cr6.eq) goto loc_825E1750;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825E1734:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825e1734
	if (!cr6.eq) goto loc_825E1734;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825E1750:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825e1760
	if (!cr6.eq) goto loc_825E1760;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825E1760:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x825e178c
	if (cr6.eq) goto loc_825E178C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825E1770:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825e1770
	if (!cr6.eq) goto loc_825E1770;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825E178C:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32162
	ctx.r8.s64 = -2107768832;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,-704
	ctx.r10.s64 = ctx.r11.s64 + -704;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,1744
	ctx.r8.s64 = ctx.r8.s64 + 1744;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r6,10584
	ctx.r6.s64 = ctx.r6.s64 + 10584;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8353f448
	ctx.lr = 0x825E17C0;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_825E17C8:
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

__attribute__((alias("__imp__sub_825E17DC"))) PPC_WEAK_FUNC(sub_825E17DC);
PPC_FUNC_IMPL(__imp__sub_825E17DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E17E0"))) PPC_WEAK_FUNC(sub_825E17E0);
PPC_FUNC_IMPL(__imp__sub_825E17E0) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e18c0
	if (!cr6.eq) goto loc_825E18C0;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x825e1818
	if (!cr6.eq) goto loc_825E1818;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825E1818:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825e1848
	if (cr6.eq) goto loc_825E1848;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825E182C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825e182c
	if (!cr6.eq) goto loc_825E182C;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825E1848:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825e1858
	if (!cr6.eq) goto loc_825E1858;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825E1858:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x825e1884
	if (cr6.eq) goto loc_825E1884;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825E1868:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825e1868
	if (!cr6.eq) goto loc_825E1868;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825E1884:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32162
	ctx.r8.s64 = -2107768832;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,-704
	ctx.r10.s64 = ctx.r11.s64 + -704;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,1888
	ctx.r8.s64 = ctx.r8.s64 + 1888;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r6,10584
	ctx.r6.s64 = ctx.r6.s64 + 10584;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8353f448
	ctx.lr = 0x825E18B8;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_825E18C0:
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

__attribute__((alias("__imp__sub_825E18D4"))) PPC_WEAK_FUNC(sub_825E18D4);
PPC_FUNC_IMPL(__imp__sub_825E18D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E18D8"))) PPC_WEAK_FUNC(sub_825E18D8);
PPC_FUNC_IMPL(__imp__sub_825E18D8) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e193c
	if (!cr6.eq) goto loc_825E193C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E190C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825E1924;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825e15f0
	ctx.lr = 0x825E1934;
	sub_825E15F0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825E193C:
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

__attribute__((alias("__imp__sub_825E1954"))) PPC_WEAK_FUNC(sub_825E1954);
PPC_FUNC_IMPL(__imp__sub_825E1954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E1958"))) PPC_WEAK_FUNC(sub_825E1958);
PPC_FUNC_IMPL(__imp__sub_825E1958) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e1a38
	if (!cr6.eq) goto loc_825E1A38;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x825e1990
	if (!cr6.eq) goto loc_825E1990;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825E1990:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825e19c0
	if (cr6.eq) goto loc_825E19C0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825E19A4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825e19a4
	if (!cr6.eq) goto loc_825E19A4;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825E19C0:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825e19d0
	if (!cr6.eq) goto loc_825E19D0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825E19D0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x825e19fc
	if (cr6.eq) goto loc_825E19FC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825E19E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825e19e0
	if (!cr6.eq) goto loc_825E19E0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825E19FC:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32162
	ctx.r8.s64 = -2107768832;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,-704
	ctx.r10.s64 = ctx.r11.s64 + -704;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,2064
	ctx.r8.s64 = ctx.r8.s64 + 2064;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r6,10584
	ctx.r6.s64 = ctx.r6.s64 + 10584;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8353f448
	ctx.lr = 0x825E1A30;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_825E1A38:
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

__attribute__((alias("__imp__sub_825E1A4C"))) PPC_WEAK_FUNC(sub_825E1A4C);
PPC_FUNC_IMPL(__imp__sub_825E1A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E1A50"))) PPC_WEAK_FUNC(sub_825E1A50);
PPC_FUNC_IMPL(__imp__sub_825E1A50) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e1b30
	if (!cr6.eq) goto loc_825E1B30;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x825e1a88
	if (!cr6.eq) goto loc_825E1A88;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825E1A88:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825e1ab8
	if (cr6.eq) goto loc_825E1AB8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825E1A9C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825e1a9c
	if (!cr6.eq) goto loc_825E1A9C;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825E1AB8:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825e1ac8
	if (!cr6.eq) goto loc_825E1AC8;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825E1AC8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x825e1af4
	if (cr6.eq) goto loc_825E1AF4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825E1AD8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825e1ad8
	if (!cr6.eq) goto loc_825E1AD8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825E1AF4:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32162
	ctx.r8.s64 = -2107768832;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,-704
	ctx.r10.s64 = ctx.r11.s64 + -704;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,2208
	ctx.r8.s64 = ctx.r8.s64 + 2208;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r6,10584
	ctx.r6.s64 = ctx.r6.s64 + 10584;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8353f448
	ctx.lr = 0x825E1B28;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_825E1B30:
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

__attribute__((alias("__imp__sub_825E1B44"))) PPC_WEAK_FUNC(sub_825E1B44);
PPC_FUNC_IMPL(__imp__sub_825E1B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E1B48"))) PPC_WEAK_FUNC(sub_825E1B48);
PPC_FUNC_IMPL(__imp__sub_825E1B48) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e1c28
	if (!cr6.eq) goto loc_825E1C28;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x825e1b80
	if (!cr6.eq) goto loc_825E1B80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825E1B80:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825e1bb0
	if (cr6.eq) goto loc_825E1BB0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825E1B94:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825e1b94
	if (!cr6.eq) goto loc_825E1B94;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825E1BB0:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825e1bc0
	if (!cr6.eq) goto loc_825E1BC0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825E1BC0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x825e1bec
	if (cr6.eq) goto loc_825E1BEC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825E1BD0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825e1bd0
	if (!cr6.eq) goto loc_825E1BD0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825E1BEC:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32162
	ctx.r8.s64 = -2107768832;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,-704
	ctx.r10.s64 = ctx.r11.s64 + -704;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,2352
	ctx.r8.s64 = ctx.r8.s64 + 2352;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r6,10584
	ctx.r6.s64 = ctx.r6.s64 + 10584;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8353f448
	ctx.lr = 0x825E1C20;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_825E1C28:
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

__attribute__((alias("__imp__sub_825E1C3C"))) PPC_WEAK_FUNC(sub_825E1C3C);
PPC_FUNC_IMPL(__imp__sub_825E1C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E1C40"))) PPC_WEAK_FUNC(sub_825E1C40);
PPC_FUNC_IMPL(__imp__sub_825E1C40) {
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
	// bne cr6,0x825e1c64
	if (!cr6.eq) goto loc_825E1C64;
	// bl 0x825a9e30
	ctx.lr = 0x825E1C64;
	sub_825A9E30(ctx, base);
loc_825E1C64:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e1c80
	if (!cr6.eq) goto loc_825E1C80;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,140
	ctx.r10.s64 = ctx.r11.s64 + 140;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825E1C80:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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

__attribute__((alias("__imp__sub_825E1C98"))) PPC_WEAK_FUNC(sub_825E1C98);
PPC_FUNC_IMPL(__imp__sub_825E1C98) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e1cfc
	if (!cr6.eq) goto loc_825E1CFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E1CCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825E1CE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825e16e8
	ctx.lr = 0x825E1CF4;
	sub_825E16E8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825E1CFC:
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

__attribute__((alias("__imp__sub_825E1D14"))) PPC_WEAK_FUNC(sub_825E1D14);
PPC_FUNC_IMPL(__imp__sub_825E1D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E1D18"))) PPC_WEAK_FUNC(sub_825E1D18);
PPC_FUNC_IMPL(__imp__sub_825E1D18) {
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
	// bne cr6,0x825e1d3c
	if (!cr6.eq) goto loc_825E1D3C;
	// bl 0x825e1c98
	ctx.lr = 0x825E1D3C;
	sub_825E1C98(ctx, base);
loc_825E1D3C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e1d58
	if (!cr6.eq) goto loc_825E1D58;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_825E1D58:
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

__attribute__((alias("__imp__sub_825E1D70"))) PPC_WEAK_FUNC(sub_825E1D70);
PPC_FUNC_IMPL(__imp__sub_825E1D70) {
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
	// bne cr6,0x825e1d94
	if (!cr6.eq) goto loc_825E1D94;
	// bl 0x825bf930
	ctx.lr = 0x825E1D94;
	sub_825BF930(ctx, base);
loc_825E1D94:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e1db4
	if (!cr6.eq) goto loc_825E1DB4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-3592
	ctx.r9.s64 = ctx.r9.s64 + -3592;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_825E1DB4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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

__attribute__((alias("__imp__sub_825E1DCC"))) PPC_WEAK_FUNC(sub_825E1DCC);
PPC_FUNC_IMPL(__imp__sub_825E1DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E1DD0"))) PPC_WEAK_FUNC(sub_825E1DD0);
PPC_FUNC_IMPL(__imp__sub_825E1DD0) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e1e34
	if (!cr6.eq) goto loc_825E1E34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E1E04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825E1E1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825e17e0
	ctx.lr = 0x825E1E2C;
	sub_825E17E0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825E1E34:
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

__attribute__((alias("__imp__sub_825E1E4C"))) PPC_WEAK_FUNC(sub_825E1E4C);
PPC_FUNC_IMPL(__imp__sub_825E1E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E1E50"))) PPC_WEAK_FUNC(sub_825E1E50);
PPC_FUNC_IMPL(__imp__sub_825E1E50) {
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
	// bne cr6,0x825e1e74
	if (!cr6.eq) goto loc_825E1E74;
	// bl 0x825e1dd0
	ctx.lr = 0x825E1E74;
	sub_825E1DD0(ctx, base);
loc_825E1E74:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e1e90
	if (!cr6.eq) goto loc_825E1E90;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825E1E90:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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

__attribute__((alias("__imp__sub_825E1EA8"))) PPC_WEAK_FUNC(sub_825E1EA8);
PPC_FUNC_IMPL(__imp__sub_825E1EA8) {
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
	// bne cr6,0x825e1ecc
	if (!cr6.eq) goto loc_825E1ECC;
	// bl 0x825e18d8
	ctx.lr = 0x825E1ECC;
	sub_825E18D8(ctx, base);
loc_825E1ECC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e1ee8
	if (!cr6.eq) goto loc_825E1EE8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,1400
	ctx.r10.s64 = ctx.r11.s64 + 1400;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825E1EE8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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

__attribute__((alias("__imp__sub_825E1F00"))) PPC_WEAK_FUNC(sub_825E1F00);
PPC_FUNC_IMPL(__imp__sub_825E1F00) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e1f64
	if (!cr6.eq) goto loc_825E1F64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E1F34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825E1F4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825e1958
	ctx.lr = 0x825E1F5C;
	sub_825E1958(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825E1F64:
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

__attribute__((alias("__imp__sub_825E1F7C"))) PPC_WEAK_FUNC(sub_825E1F7C);
PPC_FUNC_IMPL(__imp__sub_825E1F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E1F80"))) PPC_WEAK_FUNC(sub_825E1F80);
PPC_FUNC_IMPL(__imp__sub_825E1F80) {
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
	// bne cr6,0x825e1fa4
	if (!cr6.eq) goto loc_825E1FA4;
	// bl 0x825e1f00
	ctx.lr = 0x825E1FA4;
	sub_825E1F00(ctx, base);
loc_825E1FA4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e1fc0
	if (!cr6.eq) goto loc_825E1FC0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,10
	ctx.r10.s64 = ctx.r11.s64 + 10;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825E1FC0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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

__attribute__((alias("__imp__sub_825E1FD8"))) PPC_WEAK_FUNC(sub_825E1FD8);
PPC_FUNC_IMPL(__imp__sub_825E1FD8) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e203c
	if (!cr6.eq) goto loc_825E203C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E200C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825E2024;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825e1a50
	ctx.lr = 0x825E2034;
	sub_825E1A50(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825E203C:
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

__attribute__((alias("__imp__sub_825E2054"))) PPC_WEAK_FUNC(sub_825E2054);
PPC_FUNC_IMPL(__imp__sub_825E2054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E2058"))) PPC_WEAK_FUNC(sub_825E2058);
PPC_FUNC_IMPL(__imp__sub_825E2058) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e20bc
	if (!cr6.eq) goto loc_825E20BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E208C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825E20A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825e1b48
	ctx.lr = 0x825E20B4;
	sub_825E1B48(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825E20BC:
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

__attribute__((alias("__imp__sub_825E20D4"))) PPC_WEAK_FUNC(sub_825E20D4);
PPC_FUNC_IMPL(__imp__sub_825E20D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E20D8"))) PPC_WEAK_FUNC(sub_825E20D8);
PPC_FUNC_IMPL(__imp__sub_825E20D8) {
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
	// bne cr6,0x825e20fc
	if (!cr6.eq) goto loc_825E20FC;
	// bl 0x825e2058
	ctx.lr = 0x825E20FC;
	sub_825E2058(ctx, base);
loc_825E20FC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e2118
	if (!cr6.eq) goto loc_825E2118;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,52
	ctx.r10.s64 = ctx.r11.s64 + 52;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825E2118:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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

__attribute__((alias("__imp__sub_825E2130"))) PPC_WEAK_FUNC(sub_825E2130);
PPC_FUNC_IMPL(__imp__sub_825E2130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x825E2138;
	__savegprlr_18(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r24,292(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lbz r11,5813(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 5813);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e2990
	if (!cr6.eq) goto loc_825E2990;
	// lwz r11,7140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7140);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// beq cr6,0x825e2990
	if (cr6.eq) goto loc_825E2990;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x825e2990
	if (cr6.eq) goto loc_825E2990;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// addis r19,r3,1
	ctx.r19.s64 = ctx.r3.s64 + 65536;
	// addi r29,r29,-704
	ctx.r29.s64 = ctx.r29.s64 + -704;
	// addi r19,r19,224
	ctx.r19.s64 = ctx.r19.s64 + 224;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r25,132(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// bl 0x825b46f0
	ctx.lr = 0x825E2194;
	sub_825B46F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r20,r11,36
	ctx.r20.s64 = ctx.r11.s64 + 36;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x831ce980
	ctx.lr = 0x825E21AC;
	sub_831CE980(ctx, base);
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// beq cr6,0x825e244c
	if (cr6.eq) goto loc_825E244C;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// bne cr6,0x825e2978
	if (!cr6.eq) goto loc_825E2978;
	// lwz r11,7140(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 7140);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x825e2978
	if (!cr6.eq) goto loc_825E2978;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r10,r11,64824
	ctx.r10.u64 = ctx.r11.u64 | 64824;
	// lwzx r11,r23,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// addi r4,r11,88
	ctx.r4.s64 = ctx.r11.s64 + 88;
	// bl 0x834b8ed8
	ctx.lr = 0x825E21E4;
	sub_834B8ED8(ctx, base);
	// addi r9,r1,141
	ctx.r9.s64 = ctx.r1.s64 + 141;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r8,14
	ctx.r8.s64 = 14;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stb r7,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r7.u8);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stb r11,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r11.u8);
	// stb r11,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
	// stb r11,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r11.u8);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r5,r27,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r27.s64;
	// srawi r28,r5,3
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r5.s32 >> 3;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x825e2410
	if (cr6.eq) goto loc_825E2410;
	// addi r31,r27,5
	ctx.r31.s64 = ctx.r27.s64 + 5;
	// cmplw cr6,r28,r21
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r21.u32, xer);
	// ble cr6,0x825e2440
	if (!cr6.gt) goto loc_825E2440;
loc_825E2234:
	// lwz r11,-5(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5);
	// addi r11,r11,-4097
	ctx.r11.s64 = ctx.r11.s64 + -4097;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x825e2400
	if (cr6.gt) goto loc_825E2400;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x825e22b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E22B8;
	// bdzf 4*cr6+eq,0x825e2304
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E2304;
	// bdzf 4*cr6+eq,0x825e2324
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E2324;
	// bdzf 4*cr6+eq,0x825e2400
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E2400;
	// bdzf 4*cr6+eq,0x825e2400
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E2400;
	// bdzf 4*cr6+eq,0x825e2344
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E2344;
	// bne cr6,0x825e2394
	if (!cr6.eq) goto loc_825E2394;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8262e4d8
	ctx.lr = 0x825E2270;
	sub_8262E4D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2294
	if (cr6.eq) goto loc_825E2294;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8262eab8
	ctx.lr = 0x825E2288;
	sub_8262EAB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2400
	if (cr6.eq) goto loc_825E2400;
loc_825E2294:
	// lbz r4,-1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// bl 0x82a0c738
	ctx.lr = 0x825E22A4;
	sub_82A0C738(ctx, base);
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82a16188
	ctx.lr = 0x825E22AC;
	sub_82A16188(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stb r9,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r9.u8);
	// b 0x825e2400
	goto loc_825E2400;
loc_825E22B8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8262e4d8
	ctx.lr = 0x825E22C0;
	sub_8262E4D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e22e4
	if (cr6.eq) goto loc_825E22E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8262eab8
	ctx.lr = 0x825E22D8;
	sub_8262EAB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2400
	if (cr6.eq) goto loc_825E2400;
loc_825E22E4:
	// lbz r4,-1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x825E22F0;
	sub_82A0C738(ctx, base);
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82a16188
	ctx.lr = 0x825E22F8;
	sub_82A16188(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stb r9,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, ctx.r9.u8);
	// b 0x825e2400
	goto loc_825E2400;
loc_825E2304:
	// lbz r4,-1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x825E2310;
	sub_82A0C738(ctx, base);
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82a16188
	ctx.lr = 0x825E2318;
	sub_82A16188(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stb r9,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r9.u8);
	// b 0x825e2400
	goto loc_825E2400;
loc_825E2324:
	// lbz r4,-1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x825E2330;
	sub_82A0C738(ctx, base);
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82a16188
	ctx.lr = 0x825E2338;
	sub_82A16188(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stb r9,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r9.u8);
	// b 0x825e2400
	goto loc_825E2400;
loc_825E2344:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8262e4d8
	ctx.lr = 0x825E234C;
	sub_8262E4D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2294
	if (cr6.eq) goto loc_825E2294;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8262eab8
	ctx.lr = 0x825E2364;
	sub_8262EAB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2400
	if (cr6.eq) goto loc_825E2400;
	// lbz r4,-1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// bl 0x82a0c738
	ctx.lr = 0x825E2380;
	sub_82A0C738(ctx, base);
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82a16188
	ctx.lr = 0x825E2388;
	sub_82A16188(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stb r9,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r9.u8);
	// b 0x825e2400
	goto loc_825E2400;
loc_825E2394:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8262e4d8
	ctx.lr = 0x825E239C;
	sub_8262E4D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e23e4
	if (cr6.eq) goto loc_825E23E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8262eab8
	ctx.lr = 0x825E23B4;
	sub_8262EAB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2400
	if (cr6.eq) goto loc_825E2400;
	// lbz r4,-1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// bl 0x82a0c738
	ctx.lr = 0x825E23D0;
	sub_82A0C738(ctx, base);
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82a16188
	ctx.lr = 0x825E23D8;
	sub_82A16188(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stb r9,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, ctx.r9.u8);
	// b 0x825e2400
	goto loc_825E2400;
loc_825E23E4:
	// lbz r4,-1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// bl 0x82a0c738
	ctx.lr = 0x825E23F4;
	sub_82A0C738(ctx, base);
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82a16188
	ctx.lr = 0x825E23FC;
	sub_82A16188(ctx, base);
	// stb r3,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, ctx.r3.u8);
loc_825E2400:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, xer);
	// bgt cr6,0x825e2234
	if (cr6.gt) goto loc_825E2234;
loc_825E2410:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831ce980
	ctx.lr = 0x825E2420;
	sub_831CE980(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x825e2978
	if (cr6.eq) goto loc_825E2978;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825E243C;
	sub_825952B8(ctx, base);
	// b 0x825e2978
	goto loc_825E2978;
loc_825E2440:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x825E244C;
	sub_831CC188(ctx, base);
loc_825E244C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a22a50
	ctx.lr = 0x825E2458;
	sub_82A22A50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r22,1
	ctx.r22.s64 = 1;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x825e2478
	if (cr6.eq) goto loc_825E2478;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// lwz r10,296(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x825e2490
	if (cr6.eq) goto loc_825E2490;
loc_825E2478:
	// lwz r11,5388(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 5388);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x825e2800
	if (!cr6.eq) goto loc_825E2800;
	// lbz r11,5437(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 5437);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2800
	if (cr6.eq) goto loc_825E2800;
loc_825E2490:
	// lbz r11,7621(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 7621);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e24b4
	if (cr6.eq) goto loc_825E24B4;
loc_825E249C:
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831ce980
	ctx.lr = 0x825E24B0;
	sub_831CE980(ctx, base);
	// b 0x825e2800
	goto loc_825E2800;
loc_825E24B4:
	// lwz r11,7140(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 7140);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x825e2800
	if (cr6.lt) goto loc_825E2800;
	// lis r26,-31778
	ctx.r26.s64 = -2082603008;
	// lwz r3,2056(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E24D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x825e27fc
	if (cr6.eq) goto loc_825E27FC;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r28,192(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ld r4,5472(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 5472);
	// bl 0x82a2b388
	ctx.lr = 0x825E2500;
	sub_82A2B388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d83f0
	ctx.lr = 0x825E2510;
	sub_825D83F0(ctx, base);
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bge cr6,0x825e2660
	if (!cr6.lt) goto loc_825E2660;
	// lwz r11,7140(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 7140);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x825e249c
	if (!cr6.eq) goto loc_825E249C;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r3,232(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// bl 0x82a17110
	ctx.lr = 0x825E2530;
	sub_82A17110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x825e249c
	if (!cr6.eq) goto loc_825E249C;
	// lwz r3,2056(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E2550;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825e2644
	if (cr6.eq) goto loc_825E2644;
	// li r11,2
	ctx.r11.s64 = 2;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bge cr6,0x825e2574
	if (!cr6.lt) goto loc_825E2574;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x825e259c
	goto loc_825E259C;
loc_825E2574:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x825e2584
	if (!cr6.lt) goto loc_825E2584;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x825e259c
	goto loc_825E259C;
loc_825E2584:
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
loc_825E259C:
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lbz r10,7910(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7910);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// bge cr6,0x825e25d8
	if (!cr6.lt) goto loc_825E25D8;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stb r21,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r21.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lbz r10,7912(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7912);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x831ce980
	ctx.lr = 0x825E25D4;
	sub_831CE980(ctx, base);
	// b 0x825e2800
	goto loc_825E2800;
loc_825E25D8:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x825e2608
	if (!cr6.lt) goto loc_825E2608;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stb r21,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r21.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lbz r10,7912(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7912);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x831ce980
	ctx.lr = 0x825E2604;
	sub_831CE980(ctx, base);
	// b 0x825e2800
	goto loc_825E2800;
loc_825E2608:
	// li r11,22
	ctx.r11.s64 = 22;
	// stb r21,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r21.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// subfc r10,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r9,r11,r31
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// li r5,44
	ctx.r5.s64 = 44;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lbz r10,7912(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7912);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x831ce980
	ctx.lr = 0x825E2640;
	sub_831CE980(ctx, base);
	// b 0x825e2800
	goto loc_825E2800;
loc_825E2644:
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r21,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r21.u8);
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831ce980
	ctx.lr = 0x825E265C;
	sub_831CE980(ctx, base);
	// b 0x825e2800
	goto loc_825E2800;
loc_825E2660:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8261de98
	ctx.lr = 0x825E2668;
	sub_8261DE98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e27fc
	if (!cr6.eq) goto loc_825E27FC;
	// lwz r3,2056(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E2688;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825e2800
	if (cr6.eq) goto loc_825E2800;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,24
	ctx.r27.s64 = 24;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,52(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
loc_825E26A8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x825e26b8
	if (cr6.lt) goto loc_825E26B8;
	// li r11,23
	ctx.r11.s64 = 23;
loc_825E26B8:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825e2724
	if (cr6.eq) goto loc_825E2724;
	// lwz r3,2056(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2056);
	// lwz r18,76(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E26E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r18,r9
	cr6.compare<uint32_t>(ctx.r18.u32, ctx.r9.u32, xer);
	// bne cr6,0x825e2724
	if (!cr6.eq) goto loc_825E2724;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// bl 0x82a31458
	ctx.lr = 0x825E2700;
	sub_82A31458(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e2724
	if (cr6.eq) goto loc_825E2724;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// bge cr6,0x825e2724
	if (!cr6.lt) goto loc_825E2724;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x825e2724
	if (cr6.eq) goto loc_825E2724;
	// stb r22,7617(r23)
	PPC_STORE_U8(ctx.r23.u32 + 7617, ctx.r22.u8);
loc_825E2724:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x825e26a8
	if (cr6.lt) goto loc_825E26A8;
	// lbz r11,7617(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 7617);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e27fc
	if (cr6.eq) goto loc_825E27FC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,72(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825e27c8
	if (cr6.eq) goto loc_825E27C8;
	// cmplwi cr6,r27,24
	cr6.compare<uint32_t>(ctx.r27.u32, 24, xer);
	// bge cr6,0x825e27c8
	if (!cr6.lt) goto loc_825E27C8;
	// mulli r11,r27,112
	ctx.r11.s64 = ctx.r27.s64 * 112;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x825e277c
	if (cr6.lt) goto loc_825E277C;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// blt cr6,0x825e2780
	if (cr6.lt) goto loc_825E2780;
loc_825E277C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_825E2780:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e27c8
	if (cr6.eq) goto loc_825E27C8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825d83f0
	ctx.lr = 0x825E2794;
	sub_825D83F0(ctx, base);
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bge cr6,0x825e27c8
	if (!cr6.lt) goto loc_825E27C8;
	// mulli r11,r3,2004
	ctx.r11.s64 = ctx.r3.s64 * 2004;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82a38c50
	ctx.lr = 0x825E27B8;
	sub_82A38C50(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825e27c8
	if (cr6.eq) goto loc_825E27C8;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_825E27C8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e27f8
	if (!cr6.eq) goto loc_825E27F8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8262b5f0
	ctx.lr = 0x825E27E0;
	sub_8262B5F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e27f8
	if (!cr6.eq) goto loc_825E27F8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// b 0x825e2800
	goto loc_825E2800;
loc_825E27F8:
	// stb r21,7617(r23)
	PPC_STORE_U8(ctx.r23.u32 + 7617, ctx.r21.u8);
loc_825E27FC:
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
loc_825E2800:
	// lwz r30,4488(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4488);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// bl 0x83740858
	ctx.lr = 0x825E280C;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x825e2824
	if (cr6.lt) goto loc_825E2824;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_825E2824:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2844
	if (cr6.eq) goto loc_825E2844;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x825e2968
	if (cr6.eq) goto loc_825E2968;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x825e2964
	goto loc_825E2964;
loc_825E2844:
	// lbz r11,5437(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 5437);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e2978
	if (!cr6.eq) goto loc_825E2978;
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// beq cr6,0x825e2978
	if (cr6.eq) goto loc_825E2978;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a22a50
	ctx.lr = 0x825E2868;
	sub_82A22A50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r31,296(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// bl 0x82a22a50
	ctx.lr = 0x825E287C;
	sub_82A22A50(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r30,300(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 300);
	// bl 0x82a22a50
	ctx.lr = 0x825E2890;
	sub_82A22A50(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r30,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r30.u8);
	// lwz r7,308(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 308);
	// stb r7,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, ctx.r7.u8);
	// bl 0x82a225d0
	ctx.lr = 0x825E28AC;
	sub_82A225D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8291adc0
	ctx.lr = 0x825E28B8;
	sub_8291ADC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x8291a868
	ctx.lr = 0x825E28C4;
	sub_8291A868(ctx, base);
	// lfs f1,4464(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// stb r22,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r22.u8);
	// stb r3,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r3.u8);
	// bl 0x82a29110
	ctx.lr = 0x825E28D4;
	sub_82A29110(ctx, base);
	// lwz r28,4488(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4488);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// stb r3,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, ctx.r3.u8);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// bl 0x83740858
	ctx.lr = 0x825E28E8;
	sub_83740858(ctx, base);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// blt cr6,0x825e28f8
	if (cr6.lt) goto loc_825E28F8;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_825E28F8:
	// lwz r28,4488(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4488);
	// bl 0x83740858
	ctx.lr = 0x825E2900;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x825e2914
	if (cr6.lt) goto loc_825E2914;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_825E2914:
	// cmpwi cr6,r29,9
	cr6.compare<int32_t>(ctx.r29.s32, 9, xer);
	// beq cr6,0x825e2934
	if (cr6.eq) goto loc_825E2934;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2934
	if (cr6.eq) goto loc_825E2934;
	// li r11,9
	ctx.r11.s64 = 9;
	// stb r21,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r21.u8);
	// b 0x825e2964
	goto loc_825E2964;
loc_825E2934:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2968
	if (cr6.eq) goto loc_825E2968;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a22a50
	ctx.lr = 0x825E294C;
	sub_82A22A50(ctx, base);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// lwz r9,276(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x825e2968
	if (!cr6.eq) goto loc_825E2968;
	// li r11,8
	ctx.r11.s64 = 8;
loc_825E2964:
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_825E2968:
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831ce980
	ctx.lr = 0x825E2978;
	sub_831CE980(ctx, base);
loc_825E2978:
	// lwz r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2990
	if (cr6.eq) goto loc_825E2990;
	// lwz r3,8(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x825E298C;
	sub_825B33F0(ctx, base);
	// stw r21,16(r19)
	PPC_STORE_U32(ctx.r19.u32 + 16, ctx.r21.u32);
loc_825E2990:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E2998"))) PPC_WEAK_FUNC(sub_825E2998);
PPC_FUNC_IMPL(__imp__sub_825E2998) {
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
	ctx.lr = 0x825E29A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e29d0
	if (cr6.eq) goto loc_825E29D0;
	// bl 0x82a1aaf0
	ctx.lr = 0x825E29CC;
	sub_82A1AAF0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_825E29D0:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825E29E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x825e2a00
	if (!cr6.eq) goto loc_825E2A00;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2d10
	if (cr6.eq) goto loc_825E2D10;
loc_825E2A00:
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r24,192(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x825e2d10
	if (cr6.eq) goto loc_825E2D10;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_825E2A1C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x825e2a2c
	if (cr6.lt) goto loc_825E2A2C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_825E2A2C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x825e2a88
	if (cr6.eq) goto loc_825E2A88;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x825e2a54
	if (cr0.eq) goto loc_825E2A54;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825e2a88
	if (!cr6.eq) goto loc_825E2A88;
loc_825E2A54:
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x8353b168
	ctx.lr = 0x825E2A64;
	sub_8353B168(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e2a98
	if (cr6.eq) goto loc_825E2A98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E2A7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825e2a98
	if (cr6.eq) goto loc_825E2A98;
loc_825E2A88:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x825e2a1c
	if (cr6.lt) goto loc_825E2A1C;
	// b 0x825e2aa0
	goto loc_825E2AA0;
loc_825E2A98:
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_825E2AA0:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2ba0
	if (cr6.eq) goto loc_825E2BA0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a32eb0
	ctx.lr = 0x825E2AB4;
	sub_82A32EB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e2d10
	if (!cr6.eq) goto loc_825E2D10;
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// bl 0x83535150
	ctx.lr = 0x825E2AE0;
	sub_83535150(ctx, base);
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// addi r31,r31,448
	ctx.r31.s64 = ctx.r31.s64 + 448;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e2afc
	if (!cr6.eq) goto loc_825E2AFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4878
	ctx.lr = 0x825E2AFC;
	sub_825B4878(ctx, base);
loc_825E2AFC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e2b18
	if (!cr6.eq) goto loc_825E2B18;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4336
	ctx.r10.s64 = ctx.r11.s64 + 4336;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825E2B18:
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825e2b38
	if (cr6.eq) goto loc_825E2B38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a326d8
	ctx.lr = 0x825E2B2C;
	sub_82A326D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a32eb8
	ctx.lr = 0x825E2B38;
	sub_82A32EB8(ctx, base);
loc_825E2B38:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2b50
	if (cr6.eq) goto loc_825E2B50;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825b3120
	ctx.lr = 0x825E2B4C;
	sub_825B3120(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_825E2B50:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837409a8
	ctx.lr = 0x825E2B68;
	sub_837409A8(ctx, base);
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E2B84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e2d10
	if (cr6.eq) goto loc_825E2D10;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x825E2B98;
	sub_831CE980(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_825E2BA0:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2d10
	if (cr6.eq) goto loc_825E2D10;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a32eb0
	ctx.lr = 0x825E2BB4;
	sub_82A32EB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e2d10
	if (!cr6.eq) goto loc_825E2D10;
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// bl 0x83535150
	ctx.lr = 0x825E2BE0;
	sub_83535150(ctx, base);
	// addis r31,r25,1
	ctx.r31.s64 = ctx.r25.s64 + 65536;
	// addi r31,r31,448
	ctx.r31.s64 = ctx.r31.s64 + 448;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e2bfc
	if (!cr6.eq) goto loc_825E2BFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4878
	ctx.lr = 0x825E2BFC;
	sub_825B4878(ctx, base);
loc_825E2BFC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e2c18
	if (!cr6.eq) goto loc_825E2C18;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4336
	ctx.r10.s64 = ctx.r11.s64 + 4336;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825E2C18:
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825e2c38
	if (cr6.eq) goto loc_825E2C38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a326d8
	ctx.lr = 0x825E2C2C;
	sub_82A326D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a32eb8
	ctx.lr = 0x825E2C38;
	sub_82A32EB8(ctx, base);
loc_825E2C38:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2c50
	if (cr6.eq) goto loc_825E2C50;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825b3120
	ctx.lr = 0x825E2C4C;
	sub_825B3120(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_825E2C50:
	// bl 0x825d8390
	ctx.lr = 0x825E2C54;
	sub_825D8390(ctx, base);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r30,2
	ctx.r30.s64 = 2;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r28,r9,r3
	ctx.r28.u64 = ctx.r9.u64 & ctx.r3.u64;
loc_825E2C68:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x825e2c78
	if (cr6.lt) goto loc_825E2C78;
	// li r11,23
	ctx.r11.s64 = 23;
loc_825E2C78:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a322f0
	ctx.lr = 0x825E2C88;
	sub_82A322F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2cbc
	if (cr6.eq) goto loc_825E2CBC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x825e2cbc
	if (!cr6.eq) goto loc_825E2CBC;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x825e2cb4
	if (!cr6.eq) goto loc_825E2CB4;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x825e2cbc
	goto loc_825E2CBC;
loc_825E2CB4:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_825E2CBC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x825e2c68
	if (cr6.lt) goto loc_825E2C68;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837409a8
	ctx.lr = 0x825E2CE0;
	sub_837409A8(ctx, base);
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E2CFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e2d10
	if (cr6.eq) goto loc_825E2D10;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x825E2D10;
	sub_831CE980(ctx, base);
loc_825E2D10:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E2D18"))) PPC_WEAK_FUNC(sub_825E2D18);
PPC_FUNC_IMPL(__imp__sub_825E2D18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x825E2D20;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r27,-704
	ctx.r27.s64 = ctx.r27.s64 + -704;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826697f0
	ctx.lr = 0x825E2D3C;
	sub_826697F0(ctx, base);
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,-3564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r30,432(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825e2d7c
	if (cr6.eq) goto loc_825E2D7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da1d10
	ctx.lr = 0x825E2D5C;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2d7c
	if (cr6.eq) goto loc_825E2D7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x825E2D70;
	sub_82A181B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a2f540
	ctx.lr = 0x825E2D78;
	sub_82A2F540(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_825E2D7C:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r30,368
	ctx.r30.s64 = ctx.r30.s64 + 368;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e2d9c
	if (!cr6.eq) goto loc_825E2D9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825bf930
	ctx.lr = 0x825E2D9C;
	sub_825BF930(ctx, base);
loc_825E2D9C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e2dbc
	if (!cr6.eq) goto loc_825E2DBC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-3592
	ctx.r9.s64 = ctx.r9.s64 + -3592;
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
loc_825E2DBC:
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x825e2e2c
	if (cr6.eq) goto loc_825E2E2C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a47d40
	ctx.lr = 0x825E2DD0;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2e2c
	if (cr6.eq) goto loc_825E2E2C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a47d60
	ctx.lr = 0x825E2DE4;
	sub_82A47D60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2e2c
	if (cr6.eq) goto loc_825E2E2C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a24528
	ctx.lr = 0x825E2DFC;
	sub_82A24528(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825E2E08;
	sub_825D8F10(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,57
	ctx.r10.s64 = 57;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// li r28,1
	ctx.r28.s64 = 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
loc_825E2E2C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2e48
	if (cr6.eq) goto loc_825E2E48;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x825bd920
	ctx.lr = 0x825E2E40;
	sub_825BD920(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_825E2E48:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e2eac
	if (!cr6.eq) goto loc_825E2EAC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82665ac8
	ctx.lr = 0x825E2E68;
	sub_82665AC8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82583300
	ctx.lr = 0x825E2E74;
	sub_82583300(ctx, base);
	// addi r30,r31,880
	ctx.r30.s64 = ctx.r31.s64 + 880;
	// addi r4,r31,3736
	ctx.r4.s64 = ctx.r31.s64 + 3736;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82666148
	ctx.lr = 0x825E2E88;
	sub_82666148(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826677d0
	ctx.lr = 0x825E2E90;
	sub_826677D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82666158
	ctx.lr = 0x825E2E98;
	sub_82666158(ctx, base);
	// lwz r10,3736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3736);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825e2eac
	if (cr6.eq) goto loc_825E2EAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825dce48
	ctx.lr = 0x825E2EAC;
	sub_825DCE48(ctx, base);
loc_825E2EAC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E2EB4"))) PPC_WEAK_FUNC(sub_825E2EB4);
PPC_FUNC_IMPL(__imp__sub_825E2EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E2EB8"))) PPC_WEAK_FUNC(sub_825E2EB8);
PPC_FUNC_IMPL(__imp__sub_825E2EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x825E2EC0;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lbz r9,5813(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5813);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825e2ef0
	if (cr6.eq) goto loc_825E2EF0;
loc_825E2EE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_825E2EF0:
	// lwz r3,472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e2f10
	if (cr6.eq) goto loc_825E2F10;
	// bl 0x82a47d40
	ctx.lr = 0x825E2F00;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e2ee4
	if (!cr6.eq) goto loc_825E2EE4;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
loc_825E2F10:
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e2f2c
	if (cr6.eq) goto loc_825E2F2C;
	// bl 0x82da1d10
	ctx.lr = 0x825E2F20;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e2ee4
	if (!cr6.eq) goto loc_825E2EE4;
loc_825E2F2C:
	// bl 0x830ff290
	ctx.lr = 0x825E2F30;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x825E2F34;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x825e2ee4
	if (cr6.eq) goto loc_825E2EE4;
	// bl 0x830ff290
	ctx.lr = 0x825E2F40;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x825E2F44;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// beq cr6,0x825e2ee4
	if (cr6.eq) goto loc_825E2EE4;
	// lbz r11,862(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 862);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x825e31ac
	if (cr6.gt) goto loc_825E31AC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x825e2fb8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E2FB8;
	// bdzf 4*cr6+eq,0x825e3148
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E3148;
	// bne cr6,0x825e3188
	if (!cr6.eq) goto loc_825E3188;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825db148
	ctx.lr = 0x825E2F78;
	sub_825DB148(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x825e31a8
	if (!cr6.lt) goto loc_825E31A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,862(r28)
	PPC_STORE_U8(ctx.r28.u32 + 862, ctx.r11.u8);
	// stb r11,2798(r28)
	PPC_STORE_U8(ctx.r28.u32 + 2798, ctx.r11.u8);
	// bl 0x837d59a0
	ctx.lr = 0x825E2F90;
	sub_837D59A0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837d60f8
	ctx.lr = 0x825E2FA4;
	sub_837D60F8(ctx, base);
	// bl 0x83740858
	ctx.lr = 0x825E2FA8;
	sub_83740858(ctx, base);
	// stb r3,863(r28)
	PPC_STORE_U8(ctx.r28.u32 + 863, ctx.r3.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_825E2FB8:
	// lbz r11,863(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 863);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e2fcc
	if (cr6.eq) goto loc_825E2FCC;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,863(r28)
	PPC_STORE_U8(ctx.r28.u32 + 863, ctx.r11.u8);
loc_825E2FCC:
	// lbz r11,863(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 863);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e31ac
	if (!cr6.eq) goto loc_825E31AC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825db148
	ctx.lr = 0x825E2FE0;
	sub_825DB148(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x825e3134
	if (!cr6.lt) goto loc_825E3134;
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// bl 0x83535150
	ctx.lr = 0x825E300C;
	sub_83535150(ctx, base);
	// addis r26,r28,1
	ctx.r26.s64 = ctx.r28.s64 + 65536;
	// addi r26,r26,448
	ctx.r26.s64 = ctx.r26.s64 + 448;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825b4950
	ctx.lr = 0x825E301C;
	sub_825B4950(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e3038
	if (cr6.eq) goto loc_825E3038;
	// bl 0x82a326d8
	ctx.lr = 0x825E302C;
	sub_82A326D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a32eb8
	ctx.lr = 0x825E3038;
	sub_82A32EB8(ctx, base);
loc_825E3038:
	// lis r31,-31778
	ctx.r31.s64 = -2082603008;
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E3050;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825E3068;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825e30f8
	if (cr6.eq) goto loc_825E30F8;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_825E3078:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x825e3088
	if (cr6.lt) goto loc_825E3088;
	// li r11,23
	ctx.r11.s64 = 23;
loc_825E3088:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x825e30a4
	if (!cr6.eq) goto loc_825E30A4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x825e30ac
	goto loc_825E30AC;
loc_825E30A4:
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_825E30AC:
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// bne cr6,0x825e30e4
	if (!cr6.eq) goto loc_825E30E4;
	// lbz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e30e4
	if (cr6.eq) goto loc_825E30E4;
	// lwz r3,2056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// lwz r22,76(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E30D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r22,r9
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r9.u32, xer);
	// beq cr6,0x825e30f4
	if (cr6.eq) goto loc_825E30F4;
loc_825E30E4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x825e3078
	if (cr6.lt) goto loc_825E3078;
	// b 0x825e30f8
	goto loc_825E30F8;
loc_825E30F4:
	// li r27,1
	ctx.r27.s64 = 1;
loc_825E30F8:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e3110
	if (cr6.eq) goto loc_825E3110;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x825b3120
	ctx.lr = 0x825E310C;
	sub_825B3120(ctx, base);
	// stw r24,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r24.u32);
loc_825E3110:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837409a8
	ctx.lr = 0x825E3128;
	sub_837409A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// bl 0x825b2e68
	ctx.lr = 0x825E3134;
	sub_825B2E68(ctx, base);
loc_825E3134:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r11,862(r28)
	PPC_STORE_U8(ctx.r28.u32 + 862, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_825E3148:
	// stb r24,2798(r28)
	PPC_STORE_U8(ctx.r28.u32 + 2798, ctx.r24.u8);
	// bl 0x837d59a0
	ctx.lr = 0x825E3150;
	sub_837D59A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837d5ea0
	ctx.lr = 0x825E316C;
	sub_837D5EA0(ctx, base);
	// bl 0x83740858
	ctx.lr = 0x825E3170;
	sub_83740858(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r3,863(r28)
	PPC_STORE_U8(ctx.r28.u32 + 863, ctx.r3.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r9,862(r28)
	PPC_STORE_U8(ctx.r28.u32 + 862, ctx.r9.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_825E3188:
	// lbz r11,863(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 863);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e319c
	if (cr6.eq) goto loc_825E319C;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,863(r28)
	PPC_STORE_U8(ctx.r28.u32 + 863, ctx.r11.u8);
loc_825E319C:
	// lbz r11,863(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 863);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e31ac
	if (!cr6.eq) goto loc_825E31AC;
loc_825E31A8:
	// li r24,1
	ctx.r24.s64 = 1;
loc_825E31AC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E31B8"))) PPC_WEAK_FUNC(sub_825E31B8);
PPC_FUNC_IMPL(__imp__sub_825E31B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x825E31C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lbz r10,5813(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5813);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825e31fc
	if (cr6.eq) goto loc_825E31FC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_825E31FC:
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// addi r27,r31,152
	ctx.r27.s64 = ctx.r31.s64 + 152;
	// addi r26,r26,-704
	ctx.r26.s64 = ctx.r26.s64 + -704;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826654f0
	ctx.lr = 0x825E3218;
	sub_826654F0(ctx, base);
	// lbz r8,140(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 140);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// lbz r11,862(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 862);
	// or r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stb r4,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r4.u8);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x825e3474
	if (cr6.gt) goto loc_825E3474;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x825e3284
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E3284;
	// bdzf 4*cr6+eq,0x825e32e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E32E8;
	// bdzf 4*cr6+eq,0x825e33f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E33F4;
	// bne cr6,0x825e3444
	if (!cr6.eq) goto loc_825E3444;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d88b0
	ctx.lr = 0x825E3260;
	sub_825D88B0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825e353c
	if (cr6.eq) goto loc_825E353C;
loc_825E326C:
	// lbz r11,862(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 862);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r11.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_825E3284:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262ce20
	ctx.lr = 0x825E3290;
	sub_8262CE20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e326c
	if (!cr6.eq) goto loc_825E326C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,64824
	ctx.r10.u64 = ctx.r11.u64 | 64824;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825e353c
	if (cr6.eq) goto loc_825E353C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x825d88b0
	ctx.lr = 0x825E32C8;
	sub_825D88B0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825e353c
	if (cr6.eq) goto loc_825E353C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r11,7608(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7608, ctx.r11.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_825E32E8:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,64824
	ctx.r9.u64 = ctx.r10.u64 | 64824;
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825e353c
	if (!cr6.eq) goto loc_825E353C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r28,2786(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2786, ctx.r28.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r11.u8);
	// stb r10,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r10.u8);
	// bl 0x837d59a0
	ctx.lr = 0x825E3314;
	sub_837D59A0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x837d5ea0
	ctx.lr = 0x825E3330;
	sub_837D5EA0(ctx, base);
	// bl 0x83740858
	ctx.lr = 0x825E3334;
	sub_83740858(ctx, base);
	// clrldi r7,r3,32
	ctx.r7.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,20048(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lbz r4,87(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// stb r4,863(r31)
	PPC_STORE_U8(ctx.r31.u32 + 863, ctx.r4.u8);
	// lwz r3,2056(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E337C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825e353c
	if (cr6.eq) goto loc_825E353C;
	// addis r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 65536;
	// addi r31,r31,224
	ctx.r31.s64 = ctx.r31.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b46f0
	ctx.lr = 0x825E3398;
	sub_825B46F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,36
	ctx.r30.s64 = ctx.r11.s64 + 36;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x825E33B0;
	sub_831CE980(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x825E33D0;
	sub_831CE980(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825e353c
	if (cr6.eq) goto loc_825E353C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x825E33E4;
	sub_825B33F0(ctx, base);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_825E33F4:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,64824
	ctx.r9.u64 = ctx.r10.u64 | 64824;
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825e353c
	if (!cr6.eq) goto loc_825E353C;
	// lbz r10,863(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 863);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825e3430
	if (!cr6.eq) goto loc_825E3430;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r11.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r10,3320(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3320, ctx.r10.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_825E3430:
	// addi r11,r10,255
	ctx.r11.s64 = ctx.r10.s64 + 255;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r11,863(r31)
	PPC_STORE_U8(ctx.r31.u32 + 863, ctx.r11.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_825E3444:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,64824
	ctx.r10.u64 = ctx.r11.u64 | 64824;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825e353c
	if (!cr6.eq) goto loc_825E353C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// bl 0x825dcdc0
	ctx.lr = 0x825E3468;
	sub_825DCDC0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_825E3474:
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// ori r8,r10,64816
	ctx.r8.u64 = ctx.r10.u64 | 64816;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r9,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r9.u8);
	// stb r30,2786(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2786, ctx.r30.u8);
	// stbx r30,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u8);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r6,292(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r5,5388(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 5388);
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bne cr6,0x825e34dc
	if (!cr6.eq) goto loc_825E34DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,7148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7148);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// bl 0x825dcdc0
	ctx.lr = 0x825E34C4;
	sub_825DCDC0(ctx, base);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// stb r30,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r30.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r28,2786(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2786, ctx.r28.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_825E34DC:
	// lis r30,-31778
	ctx.r30.s64 = -2082603008;
	// lwz r3,2056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E34F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825e3548
	if (cr6.eq) goto loc_825E3548;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,47
	ctx.r10.u64 = ctx.r11.u64 | 47;
	// stw r10,7148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7148, ctx.r10.u32);
	// lwz r3,2056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,328(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 328);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825E3520;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825E3520:
	// lwz r11,7148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7148);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82664310
	ctx.lr = 0x825E3538;
	sub_82664310(ctx, base);
	// stfs f1,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
loc_825E353C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_825E3548:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826383d0
	ctx.lr = 0x825E3550;
	sub_826383D0(ctx, base);
	// lis r11,7
	ctx.r11.s64 = 458752;
	// lwz r9,7148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7148);
	// ori r10,r11,47
	ctx.r10.u64 = ctx.r11.u64 | 47;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x825e3520
	if (!cr6.eq) goto loc_825E3520;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bne cr6,0x825e3520
	if (!cr6.eq) goto loc_825E3520;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825E3584;
	sub_825D8F10(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,65
	ctx.r4.u64 = ctx.r4.u64 | 65;
	// bl 0x83535150
	ctx.lr = 0x825E35A4;
	sub_83535150(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E35B0"))) PPC_WEAK_FUNC(sub_825E35B0);
PPC_FUNC_IMPL(__imp__sub_825E35B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825E35B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r28,472(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// lwz r26,292(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x825e35e8
	if (cr6.eq) goto loc_825E35E8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a47d40
	ctx.lr = 0x825E35E8;
	sub_82A47D40(ctx, base);
loc_825E35E8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e3660
	if (cr6.eq) goto loc_825E3660;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x825e3654
	if (cr6.eq) goto loc_825E3654;
	// addi r27,r30,2740
	ctx.r27.s64 = ctx.r30.s64 + 2740;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_825E3604:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_825E3608:
	// add r31,r29,r30
	ctx.r31.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a25108
	ctx.lr = 0x825E361C;
	sub_82A25108(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x825e3638
	if (cr6.eq) goto loc_825E3638;
	// li r5,1
	ctx.r5.s64 = 1;
loc_825E3638:
	// bl 0x825e92e0
	ctx.lr = 0x825E363C;
	sub_825E92E0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x825e3608
	if (cr6.lt) goto loc_825E3608;
	// addi r29,r29,11
	ctx.r29.s64 = ctx.r29.s64 + 11;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// blt cr6,0x825e3604
	if (cr6.lt) goto loc_825E3604;
loc_825E3654:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825E3660:
	// addis r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,628
	ctx.r31.s64 = ctx.r31.s64 + 628;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e367c
	if (!cr6.eq) goto loc_825E367C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa080
	ctx.lr = 0x825E367C;
	sub_825AA080(ctx, base);
loc_825E367C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e369c
	if (!cr6.eq) goto loc_825E369C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-10208
	ctx.r9.s64 = ctx.r9.s64 + -10208;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_825E369C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,644
	ctx.r10.u64 = ctx.r11.u64 | 644;
	// lwzx r29,r30,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x825e3714
	if (cr6.eq) goto loc_825E3714;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da1d10
	ctx.lr = 0x825E36B8;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e3714
	if (cr6.eq) goto loc_825E3714;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e94d0
	ctx.lr = 0x825E36CC;
	sub_825E94D0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ori r10,r11,64832
	ctx.r10.u64 = ctx.r11.u64 | 64832;
	// addi r4,r30,2740
	ctx.r4.s64 = ctx.r30.s64 + 2740;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwzx r5,r30,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825E36F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825e3708
	if (cr6.eq) goto loc_825E3708;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825a8ca0
	ctx.lr = 0x825E3704;
	sub_825A8CA0(ctx, base);
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
loc_825E3708:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825E3714:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e372c
	if (cr6.eq) goto loc_825E372C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825a8ca0
	ctx.lr = 0x825E3728;
	sub_825A8CA0(ctx, base);
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
loc_825E372C:
	// lbz r11,5813(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5813);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E3740"))) PPC_WEAK_FUNC(sub_825E3740);
PPC_FUNC_IMPL(__imp__sub_825E3740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x825E3748;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r22,-31763
	ctx.r22.s64 = -2081619968;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r10,r11,64832
	ctx.r10.u64 = ctx.r11.u64 | 64832;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,-3564(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwz r23,292(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r21,0(r9)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r8,5813(r23)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + 5813);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825e3788
	if (cr6.eq) goto loc_825E3788;
loc_825E377C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E3788:
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e37a8
	if (cr6.eq) goto loc_825E37A8;
	// bl 0x82da1d10
	ctx.lr = 0x825E3798;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e377c
	if (!cr6.eq) goto loc_825E377C;
	// lwz r11,-3564(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
loc_825E37A8:
	// lwz r3,472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e37dc
	if (cr6.eq) goto loc_825E37DC;
	// bl 0x82a47d40
	ctx.lr = 0x825E37B8;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e37d8
	if (cr6.eq) goto loc_825E37D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825dc6c8
	ctx.lr = 0x825E37D0;
	sub_825DC6C8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E37D8:
	// lwz r11,-3564(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
loc_825E37DC:
	// lbz r10,862(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 862);
	// li r20,0
	ctx.r20.s64 = 0;
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// bgt cr6,0x825e3efc
	if (cr6.gt) goto loc_825E3EFC;
	// lis r12,-32162
	ctx.r12.s64 = -2107768832;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,14340
	ctx.r12.s64 = ctx.r12.s64 + 14340;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_825E382C;
	case 1:
		goto loc_825E3858;
	case 2:
		goto loc_825E3870;
	case 3:
		goto loc_825E3A18;
	case 4:
		goto loc_825E3A70;
	case 5:
		goto loc_825E3A84;
	case 6:
		goto loc_825E3AB0;
	case 7:
		goto loc_825E3C44;
	case 8:
		goto loc_825E3C70;
	case 9:
		goto loc_825E3C9C;
	default:
		return;
	}
	// lwz r18,14380(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14380);
	// lwz r18,14424(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14424);
	// lwz r18,14448(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14448);
	// lwz r18,14872(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14872);
	// lwz r18,14960(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14960);
	// lwz r18,14980(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14980);
	// lwz r18,15024(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15024);
	// lwz r18,15428(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15428);
	// lwz r18,15472(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15472);
	// lwz r18,15516(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15516);
loc_825E382C:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r27,7716
	ctx.r4.s64 = ctx.r27.s64 + 7716;
	// stb r11,2796(r27)
	PPC_STORE_U8(ctx.r27.u32 + 2796, ctx.r11.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825dc498
	ctx.lr = 0x825E3840;
	sub_825DC498(ctx, base);
	// lbz r11,862(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 862);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r10,862(r27)
	PPC_STORE_U8(ctx.r27.u32 + 862, ctx.r10.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E3858:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r20,2796(r27)
	PPC_STORE_U8(ctx.r27.u32 + 2796, ctx.r20.u8);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stb r11,862(r27)
	PPC_STORE_U8(ctx.r27.u32 + 862, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E3870:
	// addis r25,r27,1
	ctx.r25.s64 = ctx.r27.s64 + 65536;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// addi r25,r25,524
	ctx.r25.s64 = ctx.r25.s64 + 524;
	// li r19,1
	ctx.r19.s64 = 1;
	// ori r24,r10,34548
	ctx.r24.u64 = ctx.r10.u64 | 34548;
	// b 0x825e3894
	goto loc_825E3894;
loc_825E3890:
	// lwz r11,-3564(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
loc_825E3894:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a0c710
	ctx.lr = 0x825E38A0;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c738
	ctx.lr = 0x825E38B4;
	sub_82A0C738(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a2a310
	ctx.lr = 0x825E38C4;
	sub_82A2A310(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825e38dc
	if (cr6.lt) goto loc_825E38DC;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// blt cr6,0x825e38e0
	if (cr6.lt) goto loc_825E38E0;
loc_825E38DC:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_825E38E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e3904
	if (cr6.eq) goto loc_825E3904;
	// lwz r3,-3564(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x825E38F4;
	sub_82A0C7B0(ctx, base);
	// lbz r11,5045(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5045);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e3990
	if (!cr6.eq) goto loc_825E3990;
	// b 0x825e398c
	goto loc_825E398C;
loc_825E3904:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825dc030
	ctx.lr = 0x825E390C;
	sub_825DC030(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,255
	ctx.r31.s64 = 255;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// addi r9,r28,3612
	ctx.r9.s64 = ctx.r28.s64 + 3612;
	// li r11,15304
	ctx.r11.s64 = 15304;
loc_825E3920:
	// cmplwi cr6,r8,11
	cr6.compare<uint32_t>(ctx.r8.u32, 11, xer);
	// bge cr6,0x825e3930
	if (!cr6.lt) goto loc_825E3930;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x825e3934
	goto loc_825E3934;
loc_825E3930:
	// lwz r10,15304(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15304);
loc_825E3934:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825e3950
	if (cr6.eq) goto loc_825E3950;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r11,15348
	cr6.compare<int32_t>(ctx.r11.s32, 15348, xer);
	// blt cr6,0x825e3920
	if (cr6.lt) goto loc_825E3920;
	// b 0x825e3954
	goto loc_825E3954;
loc_825E3950:
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
loc_825E3954:
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// bge cr6,0x825e3990
	if (!cr6.lt) goto loc_825E3990;
	// addi r3,r25,-16
	ctx.r3.s64 = ctx.r25.s64 + -16;
	// bl 0x825aa7d8
	ctx.lr = 0x825E3964;
	sub_825AA7D8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// bl 0x829187d8
	ctx.lr = 0x825E3974;
	sub_829187D8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e398c
	if (cr6.eq) goto loc_825E398C;
	// lwz r3,-8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8);
	// bl 0x825a7e88
	ctx.lr = 0x825E3988;
	sub_825A7E88(ctx, base);
	// stw r20,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r20.u32);
loc_825E398C:
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
loc_825E3990:
	// add r3,r28,r24
	ctx.r3.u64 = ctx.r28.u64 + ctx.r24.u64;
	// bl 0x82917b90
	ctx.lr = 0x825E3998;
	sub_82917B90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a16440
	ctx.lr = 0x825E39A4;
	sub_82A16440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825e39bc
	if (cr6.lt) goto loc_825E39BC;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// blt cr6,0x825e39c0
	if (cr6.lt) goto loc_825E39C0;
loc_825E39BC:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_825E39C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e39e4
	if (cr6.eq) goto loc_825E39E4;
	// lwz r3,-3564(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x825E39D4;
	sub_82A0C7B0(ctx, base);
	// lbz r11,5044(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5044);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e39e4
	if (!cr6.eq) goto loc_825E39E4;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
loc_825E39E4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r25,r25,20
	ctx.r25.s64 = ctx.r25.s64 + 20;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x825e3890
	if (cr6.lt) goto loc_825E3890;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// stb r8,862(r27)
	PPC_STORE_U8(ctx.r27.u32 + 862, ctx.r8.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E3A18:
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// bl 0x83535150
	ctx.lr = 0x825E3A38;
	sub_83535150(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
	// bl 0x83535150
	ctx.lr = 0x825E3A58;
	sub_83535150(ctx, base);
	// lbz r11,862(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 862);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,862(r27)
	PPC_STORE_U8(ctx.r27.u32 + 862, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E3A70:
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stb r11,862(r27)
	PPC_STORE_U8(ctx.r27.u32 + 862, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E3A84:
	// bl 0x8378cba8
	ctx.lr = 0x825E3A88;
	sub_8378CBA8(ctx, base);
	// bl 0x8378cc20
	ctx.lr = 0x825E3A8C;
	sub_8378CC20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e3efc
	if (cr6.eq) goto loc_825E3EFC;
	// lbz r11,862(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 862);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,862(r27)
	PPC_STORE_U8(ctx.r27.u32 + 862, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E3AB0:
	// lbz r11,5813(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 5813);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e3ad0
	if (cr6.eq) goto loc_825E3AD0;
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stb r11,862(r27)
	PPC_STORE_U8(ctx.r27.u32 + 862, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E3AD0:
	// stb r20,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r20.u8);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// stb r20,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r20.u8);
	// li r19,1
	ctx.r19.s64 = 1;
loc_825E3AE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a1a878
	ctx.lr = 0x825E3AEC;
	sub_82A1A878(ctx, base);
	// lwz r11,-3564(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r9,312(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// lbz r8,23(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 23);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x825e3b0c
	if (!cr6.lt) goto loc_825E3B0C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r19,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r19.u8);
loc_825E3B0C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x825e3ae0
	if (cr6.lt) goto loc_825E3AE0;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e3b34
	if (!cr6.eq) goto loc_825E3B34;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825e3c2c
	if (cr6.eq) goto loc_825E3C2C;
loc_825E3B34:
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x825e3b74
	if (cr6.eq) goto loc_825E3B74;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e3b74
	if (cr6.eq) goto loc_825E3B74;
	// lwz r11,5360(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5360);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x825e3b6c
	if (cr6.eq) goto loc_825E3B6C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x825e3b6c
	if (cr6.eq) goto loc_825E3B6C;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// b 0x825e3b74
	goto loc_825E3B74;
loc_825E3B6C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_825E3B74:
	// stw r31,3400(r27)
	PPC_STORE_U32(ctx.r27.u32 + 3400, ctx.r31.u32);
	// lwz r11,5360(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5360);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// bne cr6,0x825e3b90
	if (!cr6.eq) goto loc_825E3B90;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,3404(r27)
	PPC_STORE_U32(ctx.r27.u32 + 3404, ctx.r11.u32);
	// b 0x825e3b94
	goto loc_825E3B94;
loc_825E3B90:
	// stw r19,3404(r27)
	PPC_STORE_U32(ctx.r27.u32 + 3404, ctx.r19.u32);
loc_825E3B94:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x825e3bac
	if (cr6.eq) goto loc_825E3BAC;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x825e3bac
	if (cr6.eq) goto loc_825E3BAC;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x825e3bb4
	goto loc_825E3BB4;
loc_825E3BAC:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_825E3BB4:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r10,r31,r27
	ctx.r10.u64 = ctx.r31.u64 + ctx.r27.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r27,2740
	ctx.r3.s64 = ctx.r27.s64 + 2740;
	// stb r9,3408(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3408, ctx.r9.u8);
	// stb r20,3408(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3408, ctx.r20.u8);
	// bl 0x825832f8
	ctx.lr = 0x825E3BD4;
	sub_825832F8(ctx, base);
	// addi r30,r27,3736
	ctx.r30.s64 = ctx.r27.s64 + 3736;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832f8
	ctx.lr = 0x825E3BE4;
	sub_825832F8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6e0
	ctx.lr = 0x825E3BF0;
	sub_82DAB6E0(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x825e3c20
	if (cr6.eq) goto loc_825E3C20;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x825e3c20
	if (cr6.eq) goto loc_825E3C20;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lbz r11,862(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 862);
	// stw r20,3308(r27)
	PPC_STORE_U32(ctx.r27.u32 + 3308, ctx.r20.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,862(r27)
	PPC_STORE_U8(ctx.r27.u32 + 862, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E3C20:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,3308(r27)
	PPC_STORE_U32(ctx.r27.u32 + 3308, ctx.r11.u32);
loc_825E3C2C:
	// lbz r11,862(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 862);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,862(r27)
	PPC_STORE_U8(ctx.r27.u32 + 862, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E3C44:
	// addi r6,r27,3412
	ctx.r6.s64 = ctx.r27.s64 + 3412;
	// addi r5,r23,5356
	ctx.r5.s64 = ctx.r23.s64 + 5356;
	// addi r4,r27,3628
	ctx.r4.s64 = ctx.r27.s64 + 3628;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82632c78
	ctx.lr = 0x825E3C58;
	sub_82632C78(ctx, base);
	// lbz r11,862(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 862);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,862(r27)
	PPC_STORE_U8(ctx.r27.u32 + 862, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E3C70:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r27,7716
	ctx.r4.s64 = ctx.r27.s64 + 7716;
	// stb r11,2797(r27)
	PPC_STORE_U8(ctx.r27.u32 + 2797, ctx.r11.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825dc580
	ctx.lr = 0x825E3C84;
	sub_825DC580(ctx, base);
	// lbz r11,862(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 862);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r10,862(r27)
	PPC_STORE_U8(ctx.r27.u32 + 862, ctx.r10.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E3C9C:
	// stb r20,2797(r27)
	PPC_STORE_U8(ctx.r27.u32 + 2797, ctx.r20.u8);
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// stb r20,3636(r27)
	PPC_STORE_U8(ctx.r27.u32 + 3636, ctx.r20.u8);
	// bl 0x830ff290
	ctx.lr = 0x825E3CAC;
	sub_830FF290(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r19,1
	ctx.r19.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e3ebc
	if (cr6.eq) goto loc_825E3EBC;
	// bl 0x830ffaa8
	ctx.lr = 0x825E3CC0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x825e3cd8
	if (cr6.eq) goto loc_825E3CD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ffaa8
	ctx.lr = 0x825E3CD0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bne cr6,0x825e3ebc
	if (!cr6.eq) goto loc_825E3EBC;
loc_825E3CD8:
	// addis r25,r27,1
	ctx.r25.s64 = ctx.r27.s64 + 65536;
	// addi r25,r25,448
	ctx.r25.s64 = ctx.r25.s64 + 448;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825b48f8
	ctx.lr = 0x825E3CE8;
	sub_825B48F8(ctx, base);
	// addis r26,r27,1
	ctx.r26.s64 = ctx.r27.s64 + 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r26,r26,588
	ctx.r26.s64 = ctx.r26.s64 + 588;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825e1f80
	ctx.lr = 0x825E3CFC;
	sub_825E1F80(ctx, base);
	// addis r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r27,428
	ctx.r27.s64 = ctx.r27.s64 + 428;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825e1c40
	ctx.lr = 0x825E3D10;
	sub_825E1C40(ctx, base);
	// lwz r11,-3564(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a0c738
	ctx.lr = 0x825E3D24;
	sub_82A0C738(ctx, base);
	// lwz r11,-3564(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c738
	ctx.lr = 0x825E3D38;
	sub_82A0C738(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825e3e7c
	if (cr6.eq) goto loc_825E3E7C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825e3e7c
	if (cr6.eq) goto loc_825E3E7C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x825e3e7c
	if (cr6.eq) goto loc_825E3E7C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a323c8
	ctx.lr = 0x825E3D64;
	sub_82A323C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e3dd0
	if (!cr6.eq) goto loc_825E3DD0;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,64(r30)
	PPC_STORE_U8(ctx.r30.u32 + 64, ctx.r11.u8);
	// bl 0x82a46200
	ctx.lr = 0x825E3D84;
	sub_82A46200(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a46230
	ctx.lr = 0x825E3D90;
	sub_82A46230(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a46248
	ctx.lr = 0x825E3D9C;
	sub_82A46248(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a46260
	ctx.lr = 0x825E3DA8;
	sub_82A46260(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,21712(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21712);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-3400(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -3400);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// stfs f13,72(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// stfs f12,76(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// b 0x825e3e7c
	goto loc_825E3E7C;
loc_825E3DD0:
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// bl 0x82a47d60
	ctx.lr = 0x825E3DD8;
	sub_82A47D60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a46200
	ctx.lr = 0x825E3DE8;
	sub_82A46200(ctx, base);
	// cmplwi cr6,r29,12
	cr6.compare<uint32_t>(ctx.r29.u32, 12, xer);
	// bgt cr6,0x825e3e7c
	if (cr6.gt) goto loc_825E3E7C;
	// lis r12,-32162
	ctx.r12.s64 = -2107768832;
	// rlwinm r0,r29,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,15880
	ctx.r12.s64 = ctx.r12.s64 + 15880;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r29.u32) {
	case 0:
		goto loc_825E3E3C;
	case 1:
		goto loc_825E3E44;
	case 2:
		goto loc_825E3E3C;
	case 3:
		goto loc_825E3E4C;
	case 4:
		goto loc_825E3E54;
	case 5:
		goto loc_825E3E5C;
	case 6:
		goto loc_825E3E3C;
	case 7:
		goto loc_825E3E3C;
	case 8:
		goto loc_825E3E64;
	case 9:
		goto loc_825E3E6C;
	case 10:
		goto loc_825E3E7C;
	case 11:
		goto loc_825E3E74;
	case 12:
		goto loc_825E3E74;
	default:
		return;
	}
	// lwz r18,15932(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15932);
	// lwz r18,15940(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15940);
	// lwz r18,15932(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15932);
	// lwz r18,15948(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15948);
	// lwz r18,15956(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15956);
	// lwz r18,15964(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15964);
	// lwz r18,15932(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15932);
	// lwz r18,15932(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15932);
	// lwz r18,15972(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15972);
	// lwz r18,15980(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15980);
	// lwz r18,15996(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15996);
	// lwz r18,15988(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15988);
	// lwz r18,15988(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15988);
loc_825E3E3C:
	// stb r19,64(r30)
	PPC_STORE_U8(ctx.r30.u32 + 64, ctx.r19.u8);
	// b 0x825e3e7c
	goto loc_825E3E7C;
loc_825E3E44:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x825e3e78
	goto loc_825E3E78;
loc_825E3E4C:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x825e3e78
	goto loc_825E3E78;
loc_825E3E54:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x825e3e78
	goto loc_825E3E78;
loc_825E3E5C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x825e3e78
	goto loc_825E3E78;
loc_825E3E64:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x825e3e78
	goto loc_825E3E78;
loc_825E3E6C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x825e3e78
	goto loc_825E3E78;
loc_825E3E74:
	// li r11,5
	ctx.r11.s64 = 5;
loc_825E3E78:
	// stb r11,64(r30)
	PPC_STORE_U8(ctx.r30.u32 + 64, ctx.r11.u8);
loc_825E3E7C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e3e94
	if (cr6.eq) goto loc_825E3E94;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x825a5c98
	ctx.lr = 0x825E3E90;
	sub_825A5C98(ctx, base);
	// stw r20,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r20.u32);
loc_825E3E94:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e3eac
	if (cr6.eq) goto loc_825E3EAC;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x825df338
	ctx.lr = 0x825E3EA8;
	sub_825DF338(ctx, base);
	// stw r20,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r20.u32);
loc_825E3EAC:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e3ebc
	if (cr6.eq) goto loc_825E3EBC;
	// stw r20,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r20.u32);
loc_825E3EBC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a1aa88
	ctx.lr = 0x825E3EC4;
	sub_82A1AA88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e3ef8
	if (cr6.eq) goto loc_825E3EF8;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e3ef0
	if (cr6.eq) goto loc_825E3EF0;
	// bl 0x83740878
	ctx.lr = 0x825E3EE0;
	sub_83740878(ctx, base);
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E3EF0:
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x83740830
	ctx.lr = 0x825E3EF8;
	sub_83740830(ctx, base);
loc_825E3EF8:
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
loc_825E3EFC:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E3F08"))) PPC_WEAK_FUNC(sub_825E3F08);
PPC_FUNC_IMPL(__imp__sub_825E3F08) {
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
	ctx.lr = 0x825E3F10;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r15,-31763
	ctx.r15.s64 = -2081619968;
	// addis r14,r3,1
	ctx.r14.s64 = ctx.r3.s64 + 65536;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r3,-3564(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + -3564);
	// addi r14,r14,352
	ctx.r14.s64 = ctx.r14.s64 + 352;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// li r16,255
	ctx.r16.s64 = 255;
	// ori r19,r11,508
	ctx.r19.u64 = ctx.r11.u64 | 508;
	// lwz r17,292(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// b 0x825e3f50
	goto loc_825E3F50;
loc_825E3F4C:
	// lwz r3,-3564(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + -3564);
loc_825E3F50:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82a0c738
	ctx.lr = 0x825E3F58;
	sub_82A0C738(ctx, base);
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
loc_825E3F64:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82a16490
	ctx.lr = 0x825E3F70;
	sub_82A16490(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82a16c18
	ctx.lr = 0x825E3F78;
	sub_82A16C18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e451c
	if (cr6.eq) goto loc_825E451C;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// blt cr6,0x825e3f98
	if (cr6.lt) goto loc_825E3F98;
	// cmpwi cr6,r24,22
	cr6.compare<int32_t>(ctx.r24.s32, 22, xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// blt cr6,0x825e3f9c
	if (cr6.lt) goto loc_825E3F9C;
loc_825E3F98:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_825E3F9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e3fbc
	if (cr6.eq) goto loc_825E3FBC;
	// add r11,r24,r17
	ctx.r11.u64 = ctx.r24.u64 + ctx.r17.u64;
	// lbz r10,5790(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5790);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825e3fc0
	goto loc_825E3FC0;
loc_825E3FBC:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_825E3FC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e451c
	if (cr6.eq) goto loc_825E451C;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// addi r30,r22,3476
	ctx.r30.s64 = ctx.r22.s64 + 3476;
loc_825E3FDC:
	// clrlwi r31,r29,24
	ctx.r31.u64 = ctx.r29.u32 & 0xFF;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a19a28
	ctx.lr = 0x825E3FF0;
	sub_82A19A28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x825e400c
	if (cr6.eq) goto loc_825E400C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bne cr6,0x825e4010
	if (!cr6.eq) goto loc_825E4010;
loc_825E400C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_825E4010:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e4050
	if (cr6.eq) goto loc_825E4050;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a19a28
	ctx.lr = 0x825E402C;
	sub_82A19A28(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r20,r11
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, xer);
	// beq cr6,0x825e4048
	if (cr6.eq) goto loc_825E4048;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,6
	cr6.compare<uint32_t>(ctx.r29.u32, 6, xer);
	// blt cr6,0x825e3fdc
	if (cr6.lt) goto loc_825E3FDC;
	// b 0x825e4050
	goto loc_825E4050;
loc_825E4048:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_825E4050:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r31,4456(r17)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4456);
	// bl 0x83767d18
	ctx.lr = 0x825E405C;
	sub_83767D18(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// beq cr6,0x825e406c
	if (cr6.eq) goto loc_825E406C;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_825E406C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f1,4464(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82a290c8
	ctx.lr = 0x825E407C;
	sub_82A290C8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83767d18
	ctx.lr = 0x825E4084;
	sub_83767D18(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a290c8
	ctx.lr = 0x825E4094;
	sub_82A290C8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83767d18
	ctx.lr = 0x825E409C;
	sub_83767D18(ctx, base);
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4460(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4460);
	// ori r9,r11,52429
	ctx.r9.u64 = ctx.r11.u64 | 52429;
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mulhwu r7,r8,r9
	ctx.r7.u64 = (uint64_t(ctx.r8.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r11,r7,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r6,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r6.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mulli r11,r5,60
	ctx.r11.s64 = ctx.r5.s64 * 60;
	// bne cr6,0x825e4108
	if (!cr6.eq) goto loc_825E4108;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r6,r7,60
	ctx.r6.s64 = ctx.r7.s64 * 60;
	// subf r9,r8,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r8.s64;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bgt cr6,0x825e4108
	if (cr6.gt) goto loc_825E4108;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_825E4108:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e451c
	if (cr6.eq) goto loc_825E451C;
	// addi r31,r22,2740
	ctx.r31.s64 = ctx.r22.s64 + 2740;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x825e92e0
	ctx.lr = 0x825E4128;
	sub_825E92E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e9308
	ctx.lr = 0x825E4138;
	sub_825E9308(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e428c
	if (cr6.eq) goto loc_825E428C;
	// addis r30,r22,1
	ctx.r30.s64 = ctx.r22.s64 + 65536;
	// addi r30,r30,224
	ctx.r30.s64 = ctx.r30.s64 + 224;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e4198
	if (!cr6.eq) goto loc_825E4198;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E416C;
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
	ctx.lr = 0x825E4184;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825b4138
	ctx.lr = 0x825E4194;
	sub_825B4138(ctx, base);
	// stb r23,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r23.u8);
loc_825E4198:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e41b4
	if (!cr6.eq) goto loc_825E41B4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
loc_825E41B4:
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stb r23,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r23.u8);
	// bl 0x82a161a8
	ctx.lr = 0x825E41F0;
	sub_82A161A8(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// stw r16,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r16.u32);
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825e428c
	if (cr6.eq) goto loc_825E428C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_825E423C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r23,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r23.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825e423c
	if (!cr0.eq) goto loc_825E423C;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825e4288
	if (!cr6.eq) goto loc_825E4288;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825E4268;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,12704
	ctx.r5.s64 = ctx.r11.s64 + 12704;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825E4288;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825E4288:
	// stw r21,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r21.u32);
loc_825E428C:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// stb r23,2799(r22)
	PPC_STORE_U8(ctx.r22.u32 + 2799, ctx.r23.u8);
	// bge cr6,0x825e42a0
	if (!cr6.lt) goto loc_825E42A0;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x825e42c8
	goto loc_825E42C8;
loc_825E42A0:
	// cmpwi cr6,r24,11
	cr6.compare<int32_t>(ctx.r24.s32, 11, xer);
	// bge cr6,0x825e42b0
	if (!cr6.lt) goto loc_825E42B0;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x825e42c8
	goto loc_825E42C8;
loc_825E42B0:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r24
	xer.ca = ctx.r24.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r24.s64 - ctx.r11.s64;
	// eqv r9,r11,r24
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r24.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_825E42C8:
	// addi r11,r11,16472
	ctx.r11.s64 = ctx.r11.s64 + 16472;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r16,r10,r22
	PPC_STORE_U32(ctx.r10.u32 + ctx.r22.u32, ctx.r16.u32);
	// lwz r11,-3564(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + -3564);
	// lwz r4,192(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// bl 0x82a32398
	ctx.lr = 0x825E42E4;
	sub_82A32398(ctx, base);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825e451c
	if (cr6.eq) goto loc_825E451C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-3564(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x825E42FC;
	sub_82A0C738(ctx, base);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x82a16a60
	ctx.lr = 0x825E4304;
	sub_82A16A60(ctx, base);
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// bne cr6,0x825e4320
	if (!cr6.eq) goto loc_825E4320;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-3564(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x825E4318;
	sub_82A0C738(ctx, base);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x82a16a60
	ctx.lr = 0x825E4320;
	sub_82A16A60(ctx, base);
loc_825E4320:
	// cmpw cr6,r3,r24
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, xer);
	// bne cr6,0x825e451c
	if (!cr6.eq) goto loc_825E451C;
	// addis r29,r22,1
	ctx.r29.s64 = ctx.r22.s64 + 65536;
	// addi r29,r29,488
	ctx.r29.s64 = ctx.r29.s64 + 488;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e437c
	if (!cr6.eq) goto loc_825E437C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E4350;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825E4368;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825e16e8
	ctx.lr = 0x825E4378;
	sub_825E16E8(ctx, base);
	// stb r23,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r23.u8);
loc_825E437C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e4398
	if (!cr6.eq) goto loc_825E4398;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
loc_825E4398:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a47d40
	ctx.lr = 0x825E43A0;
	sub_82A47D40(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x825e43c0
	if (cr6.eq) goto loc_825E43C0;
	// cmpwi cr6,r28,11
	cr6.compare<int32_t>(ctx.r28.s32, 11, xer);
	// beq cr6,0x825e43c0
	if (cr6.eq) goto loc_825E43C0;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x825e43c8
	goto loc_825E43C8;
loc_825E43C0:
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_825E43C8:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r31,r10,r19
	ctx.r31.u64 = ctx.r10.u64 + ctx.r19.u64;
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825e4428
	if (!cr6.eq) goto loc_825E4428;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E43FC;
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
	ctx.lr = 0x825E4414;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x825a9f08
	ctx.lr = 0x825E4424;
	sub_825A9F08(ctx, base);
	// stb r23,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r23.u8);
loc_825E4428:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e4448
	if (!cr6.eq) goto loc_825E4448;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-20768
	ctx.r9.s64 = ctx.r9.s64 + -20768;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_825E4448:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x825e4464
	if (cr6.eq) goto loc_825E4464;
	// cmpwi cr6,r28,11
	cr6.compare<int32_t>(ctx.r28.s32, 11, xer);
	// beq cr6,0x825e4464
	if (cr6.eq) goto loc_825E4464;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// b 0x825e446c
	goto loc_825E446C;
loc_825E4464:
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_825E446C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a140a0
	ctx.lr = 0x825E4474;
	sub_82A140A0(ctx, base);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x825e448c
	if (cr6.eq) goto loc_825E448C;
	// cmpwi cr6,r28,11
	cr6.compare<int32_t>(ctx.r28.s32, 11, xer);
	// beq cr6,0x825e448c
	if (cr6.eq) goto loc_825E448C;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x825e4494
	goto loc_825E4494;
loc_825E448C:
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_825E4494:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r31,r10,r19
	ctx.r31.u64 = ctx.r10.u64 + ctx.r19.u64;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825e450c
	if (cr6.eq) goto loc_825E450C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
loc_825E44BC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r23,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r23.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825e44bc
	if (!cr0.eq) goto loc_825E44BC;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825e4508
	if (!cr6.eq) goto loc_825E4508;
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825E44E8;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,29056
	ctx.r5.s64 = ctx.r11.s64 + 29056;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825E4508;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825E4508:
	// stw r21,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r21.u32);
loc_825E450C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e451c
	if (cr6.eq) goto loc_825E451C;
	// stw r21,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r21.u32);
loc_825E451C:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r20,11
	cr6.compare<int32_t>(ctx.r20.s32, 11, xer);
	// blt cr6,0x825e3f64
	if (cr6.lt) goto loc_825E3F64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r14,r14,4
	ctx.r14.s64 = ctx.r14.s64 + 4;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// blt cr6,0x825e3f4c
	if (cr6.lt) goto loc_825E3F4C;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E4550"))) PPC_WEAK_FUNC(sub_825E4550);
PPC_FUNC_IMPL(__imp__sub_825E4550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825E4558;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,862(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 862);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x825e45b8
	if (cr6.lt) goto loc_825E45B8;
	// bne cr6,0x825e4678
	if (!cr6.eq) goto loc_825E4678;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lbz r9,4496(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4496);
	// cmplwi cr6,r9,20
	cr6.compare<uint32_t>(ctx.r9.u32, 20, xer);
	// beq cr6,0x825e45a0
	if (cr6.eq) goto loc_825E45A0;
	// lbz r11,2780(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2780);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,2780(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2780, ctx.r11.u8);
	// b 0x825e4678
	goto loc_825E4678;
loc_825E45A0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r29,2784(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2784, ctx.r29.u8);
	// stb r11,2785(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2785, ctx.r11.u8);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bl 0x837a6270
	ctx.lr = 0x825E45B4;
	sub_837A6270(ctx, base);
	// b 0x825e4678
	goto loc_825E4678;
loc_825E45B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// stb r11,2780(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2780, ctx.r11.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r11,2784(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2784, ctx.r11.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// bl 0x83535150
	ctx.lr = 0x825E45E4;
	sub_83535150(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,36
	ctx.r4.u64 = ctx.r4.u64 | 36;
	// bl 0x83535150
	ctx.lr = 0x825E4604;
	sub_83535150(ctx, base);
	// lbz r11,862(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 862);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,264
	ctx.r30.s64 = ctx.r30.s64 + 264;
	// stb r11,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825bf500
	ctx.lr = 0x825E4620;
	sub_825BF500(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e462c
	if (cr6.eq) goto loc_825E462C;
	// bl 0x82a36f68
	ctx.lr = 0x825E462C;
	sub_82A36F68(ctx, base);
loc_825E462C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e4644
	if (cr6.eq) goto loc_825E4644;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x825bdbd0
	ctx.lr = 0x825E4640;
	sub_825BDBD0(ctx, base);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
loc_825E4644:
	// addis r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 65536;
	// addi r31,r31,304
	ctx.r31.s64 = ctx.r31.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bf6b0
	ctx.lr = 0x825E4654;
	sub_825BF6B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e4660
	if (cr6.eq) goto loc_825E4660;
	// bl 0x82a37b40
	ctx.lr = 0x825E4660;
	sub_82A37B40(ctx, base);
loc_825E4660:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e4678
	if (cr6.eq) goto loc_825E4678;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825bde80
	ctx.lr = 0x825E4674;
	sub_825BDE80(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_825E4678:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e4690
	if (cr6.eq) goto loc_825E4690;
	// bl 0x835f6d58
	ctx.lr = 0x825E4688;
	sub_835F6D58(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x835f6d68
	ctx.lr = 0x825E4690;
	sub_835F6D68(ctx, base);
loc_825E4690:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E469C"))) PPC_WEAK_FUNC(sub_825E469C);
PPC_FUNC_IMPL(__imp__sub_825E469C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E46A0"))) PPC_WEAK_FUNC(sub_825E46A0);
PPC_FUNC_IMPL(__imp__sub_825E46A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x825E46A8;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r22,-31763
	ctx.r22.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// lwz r11,-3564(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// lwz r3,472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e46ec
	if (cr6.eq) goto loc_825E46EC;
	// bl 0x82a47d40
	ctx.lr = 0x825E46D4;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e46ec
	if (cr6.eq) goto loc_825E46EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,2740
	ctx.r3.s64 = ctx.r30.s64 + 2740;
	// bl 0x825e9338
	ctx.lr = 0x825E46EC;
	sub_825E9338(ctx, base);
loc_825E46EC:
	// lbz r11,862(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 862);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x825e4a94
	if (cr6.gt) goto loc_825E4A94;
	// lis r12,-32162
	ctx.r12.s64 = -2107768832;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,18192
	ctx.r12.s64 = ctx.r12.s64 + 18192;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_825E4740;
	case 1:
		goto loc_825E4770;
	case 2:
		goto loc_825E478C;
	case 3:
		goto loc_825E47A4;
	case 4:
		goto loc_825E47C0;
	case 5:
		goto loc_825E47D8;
	case 6:
		goto loc_825E47EC;
	case 7:
		goto loc_825E4930;
	case 8:
		goto loc_825E4A18;
	case 9:
		goto loc_825E4A2C;
	case 10:
		goto loc_825E4A6C;
	case 11:
		goto loc_825E4A8C;
	default:
		return;
	}
	// lwz r18,18240(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18240);
	// lwz r18,18288(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18288);
	// lwz r18,18316(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18316);
	// lwz r18,18340(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18340);
	// lwz r18,18368(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18368);
	// lwz r18,18392(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18392);
	// lwz r18,18412(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18412);
	// lwz r18,18736(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18736);
	// lwz r18,18968(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18968);
	// lwz r18,18988(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18988);
	// lwz r18,19052(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19052);
	// lwz r18,19084(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19084);
loc_825E4740:
	// lwz r11,-3564(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// addi r3,r11,5644
	ctx.r3.s64 = ctx.r11.s64 + 5644;
	// bl 0x825832e0
	ctx.lr = 0x825E4750;
	sub_825832E0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x825e4a94
	if (!cr6.eq) goto loc_825E4A94;
	// lbz r11,862(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 862);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,862(r30)
	PPC_STORE_U8(ctx.r30.u32 + 862, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E4770:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,2793(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2793, ctx.r11.u8);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stb r10,862(r30)
	PPC_STORE_U8(ctx.r30.u32 + 862, ctx.r10.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E478C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r20,2793(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2793, ctx.r20.u8);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stb r11,862(r30)
	PPC_STORE_U8(ctx.r30.u32 + 862, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E47A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,2794(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2794, ctx.r11.u8);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stb r10,862(r30)
	PPC_STORE_U8(ctx.r30.u32 + 862, ctx.r10.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E47C0:
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r20,2794(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2794, ctx.r20.u8);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stb r11,862(r30)
	PPC_STORE_U8(ctx.r30.u32 + 862, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E47D8:
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stb r11,862(r30)
	PPC_STORE_U8(ctx.r30.u32 + 862, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E47EC:
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// li r21,255
	ctx.r21.s64 = 255;
loc_825E47FC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-3564(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x825E4808;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c738
	ctx.lr = 0x825E481C;
	sub_82A0C738(ctx, base);
	// addi r26,r31,68
	ctx.r26.s64 = ctx.r31.s64 + 68;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a47828
	ctx.lr = 0x825E482C;
	sub_82A47828(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e48d8
	if (cr6.eq) goto loc_825E48D8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// bl 0x825832e0
	ctx.lr = 0x825E4844;
	sub_825832E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e48d8
	if (cr6.eq) goto loc_825E48D8;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_825E4850:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a477e0
	ctx.lr = 0x825E485C;
	sub_82A477E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a47740
	ctx.lr = 0x825E4864;
	sub_82A47740(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e48bc
	if (cr6.eq) goto loc_825E48BC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r30,3476
	ctx.r3.s64 = ctx.r30.s64 + 3476;
	// bl 0x82a19a28
	ctx.lr = 0x825E4880;
	sub_82A19A28(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82a163f0
	ctx.lr = 0x825E4890;
	sub_82A163F0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a163f0
	ctx.lr = 0x825E48A0;
	sub_82A163F0(ctx, base);
	// add r11,r25,r3
	ctx.r11.u64 = ctx.r25.u64 + ctx.r3.u64;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// lwz r10,2380(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2380);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x825e48bc
	if (!cr6.eq) goto loc_825E48BC;
	// stw r21,2380(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2380, ctx.r21.u32);
loc_825E48BC:
	// addi r11,r24,1
	ctx.r11.s64 = ctx.r24.s64 + 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// bl 0x825832e0
	ctx.lr = 0x825E48D0;
	sub_825832E0(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// blt cr6,0x825e4850
	if (cr6.lt) goto loc_825E4850;
loc_825E48D8:
	// addi r25,r25,11
	ctx.r25.s64 = ctx.r25.s64 + 11;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r25,22
	cr6.compare<int32_t>(ctx.r25.s32, 22, xer);
	// blt cr6,0x825e47fc
	if (cr6.lt) goto loc_825E47FC;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e491c
	if (cr6.eq) goto loc_825E491C;
	// lwz r11,-3564(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lbz r10,862(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 862);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r7,4472(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4472);
	// stb r10,862(r30)
	PPC_STORE_U8(ctx.r30.u32 + 862, ctx.r10.u8);
	// stw r7,3620(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3620, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E491C:
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stb r11,862(r30)
	PPC_STORE_U8(ctx.r30.u32 + 862, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E4930:
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// bl 0x83535150
	ctx.lr = 0x825E4950;
	sub_83535150(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x825E4954;
	sub_830FF290(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e49e0
	if (cr6.eq) goto loc_825E49E0;
	// bl 0x830ffaa8
	ctx.lr = 0x825E4964;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x825e497c
	if (cr6.eq) goto loc_825E497C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ffaa8
	ctx.lr = 0x825E4974;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bne cr6,0x825e49e0
	if (!cr6.eq) goto loc_825E49E0;
loc_825E497C:
	// addis r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 65536;
	// addi r29,r29,448
	ctx.r29.s64 = ctx.r29.s64 + 448;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825b4950
	ctx.lr = 0x825E498C;
	sub_825B4950(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e49c8
	if (cr6.eq) goto loc_825E49C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-3564(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x825E49A4;
	sub_82A0C738(ctx, base);
	// lwz r11,-3564(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3564);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c738
	ctx.lr = 0x825E49B8;
	sub_82A0C738(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32568
	ctx.lr = 0x825E49C8;
	sub_82A32568(ctx, base);
loc_825E49C8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e49e0
	if (cr6.eq) goto loc_825E49E0;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x825b3120
	ctx.lr = 0x825E49DC;
	sub_825B3120(ctx, base);
	// stw r20,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r20.u32);
loc_825E49E0:
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
	// bl 0x83535150
	ctx.lr = 0x825E4A00;
	sub_83535150(ctx, base);
	// lbz r11,862(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 862);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,862(r30)
	PPC_STORE_U8(ctx.r30.u32 + 862, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E4A18:
	// li r11,9
	ctx.r11.s64 = 9;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stb r11,862(r30)
	PPC_STORE_U8(ctx.r30.u32 + 862, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E4A2C:
	// bl 0x8378cba8
	ctx.lr = 0x825E4A30;
	sub_8378CBA8(ctx, base);
	// bl 0x8378cc20
	ctx.lr = 0x825E4A34;
	sub_8378CC20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e4a94
	if (cr6.eq) goto loc_825E4A94;
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// bl 0x83535150
	ctx.lr = 0x825E4A60;
	sub_83535150(ctx, base);
	// lbz r11,862(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 862);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,862(r30)
	PPC_STORE_U8(ctx.r30.u32 + 862, ctx.r11.u8);
loc_825E4A6C:
	// lbz r11,862(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 862);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r10,2795(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2795, ctx.r10.u8);
	// stb r9,862(r30)
	PPC_STORE_U8(ctx.r30.u32 + 862, ctx.r9.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_825E4A8C:
	// li r19,1
	ctx.r19.s64 = 1;
	// stb r20,2795(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2795, ctx.r20.u8);
loc_825E4A94:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E4AA0"))) PPC_WEAK_FUNC(sub_825E4AA0);
PPC_FUNC_IMPL(__imp__sub_825E4AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825E4AA8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r11,2808(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2808, ctx.r11.u32);
	// addi r30,r3,2740
	ctx.r30.s64 = ctx.r3.s64 + 2740;
	// stw r27,2832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2832, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e9338
	ctx.lr = 0x825E4AD0;
	sub_825E9338(ctx, base);
	// lbz r11,860(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 860);
	// addi r10,r11,195
	ctx.r10.s64 = ctx.r11.s64 + 195;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmpwi cr6,r8,46
	cr6.compare<int32_t>(ctx.r8.s32, 46, xer);
	// bne cr6,0x825e4b04
	if (!cr6.eq) goto loc_825E4B04;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83131d70
	ctx.lr = 0x825E4AFC;
	sub_83131D70(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825E4B04:
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// stb r27,2799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2799, ctx.r27.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r11,472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e4b28
	if (cr6.eq) goto loc_825E4B28;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a47d40
	ctx.lr = 0x825E4B28;
	sub_82A47D40(ctx, base);
loc_825E4B28:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e4bbc
	if (cr6.eq) goto loc_825E4BBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825e9330
	ctx.lr = 0x825E4B44;
	sub_825E9330(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832f8
	ctx.lr = 0x825E4B50;
	sub_825832F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83131d70
	ctx.lr = 0x825E4B5C;
	sub_83131D70(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825E4B68;
	sub_825D8F10(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,60
	ctx.r10.s64 = 60;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// li r8,61
	ctx.r8.s64 = 61;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r11,195
	ctx.r5.s64 = ctx.r11.s64 + 195;
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r27,8108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8108, ctx.r27.u8);
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// bl 0x82617cf8
	ctx.lr = 0x825E4BB4;
	sub_82617CF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825E4BBC:
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,628
	ctx.r29.s64 = ctx.r29.s64 + 628;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825bb510
	ctx.lr = 0x825E4BCC;
	sub_825BB510(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,644
	ctx.r10.u64 = ctx.r11.u64 | 644;
	// lwzx r28,r31,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x825e4ca8
	if (cr6.eq) goto loc_825E4CA8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da1d10
	ctx.lr = 0x825E4BE8;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e4ca8
	if (cr6.eq) goto loc_825E4CA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e94d0
	ctx.lr = 0x825E4BFC;
	sub_825E94D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r25,r25,-704
	ctx.r25.s64 = ctx.r25.s64 + -704;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E4C24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826260a0
	ctx.lr = 0x825E4C34;
	sub_826260A0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825e9330
	ctx.lr = 0x825E4C44;
	sub_825E9330(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832f8
	ctx.lr = 0x825E4C50;
	sub_825832F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83131d70
	ctx.lr = 0x825E4C5C;
	sub_83131D70(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825E4C68;
	sub_825D8F10(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r8,67
	ctx.r8.s64 = 67;
	// addi r7,r11,195
	ctx.r7.s64 = ctx.r11.s64 + 195;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r8.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stb r5,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r5.u8);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e4d60
	if (cr6.eq) goto loc_825E4D60;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x825a8ca0
	ctx.lr = 0x825E4C9C;
	sub_825A8CA0(ctx, base);
	// stw r27,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825E4CA8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e4cc0
	if (cr6.eq) goto loc_825E4CC0;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x825a8ca0
	ctx.lr = 0x825E4CBC;
	sub_825A8CA0(ctx, base);
	// stw r27,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r27.u32);
loc_825E4CC0:
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,5356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5356);
	// lwz r29,4456(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x825e4d14
	if (!cr6.eq) goto loc_825E4D14;
	// cmplwi cr6,r29,6
	cr6.compare<uint32_t>(ctx.r29.u32, 6, xer);
	// bgt cr6,0x825e4d04
	if (cr6.gt) goto loc_825E4D04;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bdzf 4*cr6+eq,0x825e4d04
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E4D04;
	// bdzf 4*cr6+eq,0x825e4d00
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E4D00;
	// bdzf 4*cr6+eq,0x825e4d04
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E4D04;
	// bdzf 4*cr6+eq,0x825e4d00
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E4D00;
	// bdzf 4*cr6+eq,0x825e4d04
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825E4D04;
	// bne cr6,0x825e4d00
	if (!cr6.eq) goto loc_825E4D00;
loc_825E4D00:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_825E4D04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,2748(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2748);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825e9330
	ctx.lr = 0x825E4D10;
	sub_825E9330(ctx, base);
	// bl 0x837f8df8
	ctx.lr = 0x825E4D14;
	sub_837F8DF8(ctx, base);
loc_825E4D14:
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// beq cr6,0x825e4d60
	if (cr6.eq) goto loc_825E4D60;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832f8
	ctx.lr = 0x825E4D28;
	sub_825832F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83131d70
	ctx.lr = 0x825E4D34;
	sub_83131D70(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d8f10
	ctx.lr = 0x825E4D40;
	sub_825D8F10(ctx, base);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// li r10,26
	ctx.r10.s64 = 26;
	// addi r9,r11,195
	ctx.r9.s64 = ctx.r11.s64 + 195;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,861(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 861);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r7.u8);
loc_825E4D60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E4D68"))) PPC_WEAK_FUNC(sub_825E4D68);
PPC_FUNC_IMPL(__imp__sub_825E4D68) {
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
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// addi r31,r31,284
	ctx.r31.s64 = ctx.r31.s64 + 284;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e4d94
	if (!cr6.eq) goto loc_825E4D94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bf708
	ctx.lr = 0x825E4D94;
	sub_825BF708(ctx, base);
loc_825E4D94:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825e4db0
	if (!cr6.eq) goto loc_825E4DB0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825E4DB0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e4dc0
	if (cr6.eq) goto loc_825E4DC0;
	// bl 0x82a38798
	ctx.lr = 0x825E4DC0;
	sub_82A38798(ctx, base);
loc_825E4DC0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e4ddc
	if (cr6.eq) goto loc_825E4DDC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825be018
	ctx.lr = 0x825E4DD4;
	sub_825BE018(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_825E4DDC:
	// bl 0x837a0e28
	ctx.lr = 0x825E4DE0;
	sub_837A0E28(ctx, base);
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

__attribute__((alias("__imp__sub_825E4DF4"))) PPC_WEAK_FUNC(sub_825E4DF4);
PPC_FUNC_IMPL(__imp__sub_825E4DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E4DF8"))) PPC_WEAK_FUNC(sub_825E4DF8);
PPC_FUNC_IMPL(__imp__sub_825E4DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825E4E00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x830ff290
	ctx.lr = 0x825E4E10;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e4ec4
	if (cr6.eq) goto loc_825E4EC4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x825e4ec4
	if (!cr6.eq) goto loc_825E4EC4;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,608
	ctx.r29.s64 = ctx.r29.s64 + 608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e20d8
	ctx.lr = 0x825E4E34;
	sub_825E20D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e4ea8
	if (cr6.eq) goto loc_825E4EA8;
	// lis r30,-31778
	ctx.r30.s64 = -2082603008;
	// lwz r3,2056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E4E58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a46298
	ctx.lr = 0x825E4E68;
	sub_82A46298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x825E4E70;
	sub_825832E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x825E4E78;
	sub_825832D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8332f198
	ctx.lr = 0x825E4E80;
	sub_8332F198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a47d40
	ctx.lr = 0x825E4E88;
	sub_82A47D40(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825e4ea8
	if (cr6.eq) goto loc_825E4EA8;
	// lwz r3,2056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825E4EA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825E4EA8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825e4ec4
	if (cr6.eq) goto loc_825E4EC4;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x825df438
	ctx.lr = 0x825E4EBC;
	sub_825DF438(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_825E4EC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825E4ECC"))) PPC_WEAK_FUNC(sub_825E4ECC);
PPC_FUNC_IMPL(__imp__sub_825E4ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

