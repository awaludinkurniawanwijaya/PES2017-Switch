#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825A8408"))) PPC_WEAK_FUNC(sub_825A8408);
PPC_FUNC_IMPL(__imp__sub_825A8408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825A8410;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,32
	ctx.r11.s64 = 32;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825A8434;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a84bc
	if (cr6.eq) goto loc_825A84BC;
	// bl 0x825a82c8
	ctx.lr = 0x825A8444;
	sub_825A82C8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-24772
	ctx.r9.s64 = ctx.r11.s64 + -24772;
	// addi r8,r10,-24796
	ctx.r8.s64 = ctx.r10.s64 + -24796;
	// li r7,21
	ctx.r7.s64 = 21;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83537ae8
	ctx.lr = 0x825A8470;
	sub_83537AE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b9870
	ctx.lr = 0x825A847C;
	sub_825B9870(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,14
	ctx.r10.s64 = 14;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r9,r11,-25728
	ctx.r9.s64 = ctx.r11.s64 + -25728;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x825A84B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825A84BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A84C8"))) PPC_WEAK_FUNC(sub_825A84C8);
PPC_FUNC_IMPL(__imp__sub_825A84C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825A84D0;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,32
	ctx.r27.s64 = 32;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// clrlwi r8,r11,8
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFFFF;
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// oris r5,r8,4352
	ctx.r5.u64 = ctx.r8.u64 | 285212672;
	// clrlwi r6,r10,8
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFFFF;
	// clrlwi r3,r5,8
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFFFF;
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// oris r8,r3,2048
	ctx.r8.u64 = ctx.r3.u64 | 134217728;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// oris r9,r4,770
	ctx.r9.u64 = ctx.r4.u64 | 50462720;
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// oris r11,r6,5120
	ctx.r11.u64 = ctx.r6.u64 | 335544320;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// li r10,27
	ctx.r10.s64 = 27;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// li r4,172
	ctx.r4.s64 = 172;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stb r28,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r28.u8);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// bl 0x82595718
	ctx.lr = 0x825A8574;
	sub_82595718(ctx, base);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f30,-26260(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x825a85b8
	if (cr6.eq) goto loc_825A85B8;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x825a8018
	ctx.lr = 0x825A85B0;
	sub_825A8018(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825a85bc
	goto loc_825A85BC;
loc_825A85B8:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_825A85BC:
	// stw r30,112(r29)
	PPC_STORE_U32(ctx.r29.u32 + 112, ctx.r30.u32);
	// bl 0x834ecf38
	ctx.lr = 0x825A85C4;
	sub_834ECF38(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x834ed340
	ctx.lr = 0x825A85D8;
	sub_834ED340(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r8,r11,8
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFFFF;
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// stfs f31,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// oris r4,r8,4352
	ctx.r4.u64 = ctx.r8.u64 | 285212672;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// clrlwi r3,r7,8
	ctx.r3.u64 = ctx.r7.u32 & 0xFFFFFF;
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// clrlwi r11,r4,8
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFFFF;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// oris r9,r3,5120
	ctx.r9.u64 = ctx.r3.u64 | 335544320;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// oris r8,r6,770
	ctx.r8.u64 = ctx.r6.u64 | 50462720;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// oris r7,r11,2304
	ctx.r7.u64 = ctx.r11.u64 | 150994944;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// li r4,172
	ctx.r4.s64 = 172;
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stb r28,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r28.u8);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// bl 0x82595718
	ctx.lr = 0x825A8658;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a8690
	if (cr6.eq) goto loc_825A8690;
	// stfs f31,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x825a8018
	ctx.lr = 0x825A868C;
	sub_825A8018(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_825A8690:
	// stw r31,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r31.u32);
	// addi r11,r29,944
	ctx.r11.s64 = ctx.r29.s64 + 944;
	// lwz r10,964(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 964);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825a86a8
	if (cr6.lt) goto loc_825A86A8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825A86A8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82420a60
	ctx.lr = 0x825A86B4;
	sub_82420A60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x834ecf38
	ctx.lr = 0x825A86BC;
	sub_834ECF38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x834eea68
	ctx.lr = 0x825A86D4;
	sub_834EEA68(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A86E4"))) PPC_WEAK_FUNC(sub_825A86E4);
PPC_FUNC_IMPL(__imp__sub_825A86E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A86E8"))) PPC_WEAK_FUNC(sub_825A86E8);
PPC_FUNC_IMPL(__imp__sub_825A86E8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,32
	ctx.r11.s64 = 32;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r7,r10,8
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFFFF;
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// oris r4,r7,4352
	ctx.r4.u64 = ctx.r7.u64 | 285212672;
	// clrlwi r5,r9,8
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFFFF;
	// clrlwi r3,r6,16
	ctx.r3.u64 = ctx.r6.u32 & 0xFFFF;
	// lfs f31,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// clrlwi r11,r4,8
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFFFF;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// oris r10,r5,5120
	ctx.r10.u64 = ctx.r5.u64 | 335544320;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// oris r7,r3,770
	ctx.r7.u64 = ctx.r3.u64 | 50462720;
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// li r9,30
	ctx.r9.s64 = 30;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// oris r6,r11,1536
	ctx.r6.u64 = ctx.r11.u64 | 100663296;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// li r4,172
	ctx.r4.s64 = 172;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stb r8,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r8.u8);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// bl 0x82595718
	ctx.lr = 0x825A8798;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a87d8
	if (cr6.eq) goto loc_825A87D8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f31,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x825a8018
	ctx.lr = 0x825A87D4;
	sub_825A8018(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_825A87D8:
	// stw r31,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r31.u32);
	// addi r11,r30,972
	ctx.r11.s64 = ctx.r30.s64 + 972;
	// lwz r10,992(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 992);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825a87f0
	if (cr6.lt) goto loc_825A87F0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825A87F0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82420a60
	ctx.lr = 0x825A87FC;
	sub_82420A60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x834ecf38
	ctx.lr = 0x825A8804;
	sub_834ECF38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x834eee38
	ctx.lr = 0x825A881C;
	sub_834EEE38(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_825A8838"))) PPC_WEAK_FUNC(sub_825A8838);
PPC_FUNC_IMPL(__imp__sub_825A8838) {
	PPC_FUNC_PROLOGUE();
	// b 0x825a7e88
	sub_825A7E88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A883C"))) PPC_WEAK_FUNC(sub_825A883C);
PPC_FUNC_IMPL(__imp__sub_825A883C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A8840"))) PPC_WEAK_FUNC(sub_825A8840);
PPC_FUNC_IMPL(__imp__sub_825A8840) {
	PPC_FUNC_PROLOGUE();
	// b 0x825a7f08
	sub_825A7F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A8844"))) PPC_WEAK_FUNC(sub_825A8844);
PPC_FUNC_IMPL(__imp__sub_825A8844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A8848"))) PPC_WEAK_FUNC(sub_825A8848);
PPC_FUNC_IMPL(__imp__sub_825A8848) {
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
	// addi r10,r11,-25044
	ctx.r10.s64 = ctx.r11.s64 + -25044;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825a8888
	if (cr6.eq) goto loc_825A8888;
	// bl 0x825a71a8
	ctx.lr = 0x825A8880;
	sub_825A71A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825A8888:
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
	// beq cr6,0x825a88b4
	if (cr6.eq) goto loc_825A88B4;
	// bl 0x82595188
	ctx.lr = 0x825A88A4;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825A88B4;
	sub_825952B8(ctx, base);
loc_825A88B4:
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

__attribute__((alias("__imp__sub_825A88D0"))) PPC_WEAK_FUNC(sub_825A88D0);
PPC_FUNC_IMPL(__imp__sub_825A88D0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r11,8888
	ctx.r4.s64 = ctx.r11.s64 + 8888;
	// b 0x825a5ea8
	sub_825A5EA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A88E0"))) PPC_WEAK_FUNC(sub_825A88E0);
PPC_FUNC_IMPL(__imp__sub_825A88E0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,32
	ctx.r11.s64 = 32;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r7,r10,8
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFFFF;
	// lwz r6,172(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// oris r4,r7,4352
	ctx.r4.u64 = ctx.r7.u64 | 285212672;
	// clrlwi r5,r9,8
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFFFF;
	// clrlwi r3,r6,16
	ctx.r3.u64 = ctx.r6.u32 & 0xFFFF;
	// lfs f31,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// clrlwi r11,r4,8
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFFFF;
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// oris r10,r5,5120
	ctx.r10.u64 = ctx.r5.u64 | 335544320;
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// oris r7,r3,770
	ctx.r7.u64 = ctx.r3.u64 | 50462720;
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// li r9,29
	ctx.r9.s64 = 29;
	// stfs f31,212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// oris r6,r11,2560
	ctx.r6.u64 = ctx.r11.u64 | 167772160;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// li r4,172
	ctx.r4.s64 = 172;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// stb r8,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r8.u8);
	// stw r7,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// bl 0x82595718
	ctx.lr = 0x825A8990;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a89d0
	if (cr6.eq) goto loc_825A89D0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f31,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x825a8018
	ctx.lr = 0x825A89CC;
	sub_825A8018(ctx, base);
	// b 0x825a89d4
	goto loc_825A89D4;
loc_825A89D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825A89D4:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r3,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r3.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// li r5,49
	ctx.r5.s64 = 49;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r4,r10,-31212
	ctx.r4.s64 = ctx.r10.s64 + -31212;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x825A89FC;
	sub_8259CC28(ctx, base);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x825a8a10
	if (!cr6.lt) goto loc_825A8A10;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_825A8A10:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,120(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x82420a60
	ctx.lr = 0x825A8A1C;
	sub_82420A60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x834ecf38
	ctx.lr = 0x825A8A24;
	sub_834ECF38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x834eec50
	ctx.lr = 0x825A8A3C;
	sub_834EEC50(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825a8a5c
	if (cr6.lt) goto loc_825A8A5C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x825A8A5C;
	sub_825952B8(ctx, base);
loc_825A8A5C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_825A8A78"))) PPC_WEAK_FUNC(sub_825A8A78);
PPC_FUNC_IMPL(__imp__sub_825A8A78) {
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
loc_825A8A94:
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
	// bne 0x825a8a94
	if (!cr0.eq) goto loc_825A8A94;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a8ae0
	if (!cr6.eq) goto loc_825A8AE0;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825A8AC0;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-30512
	ctx.r5.s64 = ctx.r11.s64 + -30512;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825A8AE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A8AE0:
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

__attribute__((alias("__imp__sub_825A8AF8"))) PPC_WEAK_FUNC(sub_825A8AF8);
PPC_FUNC_IMPL(__imp__sub_825A8AF8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addis r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 65536;
	// addi r4,r4,-10208
	ctx.r4.s64 = ctx.r4.s64 + -10208;
	// b 0x825a7228
	sub_825A7228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A8B0C"))) PPC_WEAK_FUNC(sub_825A8B0C);
PPC_FUNC_IMPL(__imp__sub_825A8B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A8B10"))) PPC_WEAK_FUNC(sub_825A8B10);
PPC_FUNC_IMPL(__imp__sub_825A8B10) {
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
	// addi r30,r3,132
	ctx.r30.s64 = ctx.r3.s64 + 132;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a12748
	ctx.lr = 0x825A8B34;
	sub_82A12748(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x834ea438
	ctx.lr = 0x825A8B3C;
	sub_834EA438(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x834ebb58
	ctx.lr = 0x825A8B48;
	sub_834EBB58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a84c8
	ctx.lr = 0x825A8B50;
	sub_825A84C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a88e0
	ctx.lr = 0x825A8B58;
	sub_825A88E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a86e8
	ctx.lr = 0x825A8B60;
	sub_825A86E8(ctx, base);
	// bl 0x825a32d8
	ctx.lr = 0x825A8B64;
	sub_825A32D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0cc80
	ctx.lr = 0x825A8B6C;
	sub_82A0CC80(ctx, base);
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

__attribute__((alias("__imp__sub_825A8B84"))) PPC_WEAK_FUNC(sub_825A8B84);
PPC_FUNC_IMPL(__imp__sub_825A8B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A8B88"))) PPC_WEAK_FUNC(sub_825A8B88);
PPC_FUNC_IMPL(__imp__sub_825A8B88) {
	PPC_FUNC_PROLOGUE();
	// b 0x825a8a78
	sub_825A8A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A8B8C"))) PPC_WEAK_FUNC(sub_825A8B8C);
PPC_FUNC_IMPL(__imp__sub_825A8B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A8B90"))) PPC_WEAK_FUNC(sub_825A8B90);
PPC_FUNC_IMPL(__imp__sub_825A8B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825A8B98;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a8c34
	if (cr6.eq) goto loc_825A8C34;
	// li r29,15
	ctx.r29.s64 = 15;
loc_825A8BB8:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a8c28
	if (cr6.eq) goto loc_825A8C28;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x825a8be0
	if (cr6.gt) goto loc_825A8BE0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_825A8BE0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x825a8c08
	if (cr6.lt) goto loc_825A8C08;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x825A8C08;
	sub_825952B8(ctx, base);
loc_825A8C08:
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bne 0x825a8c28
	if (!cr0.eq) goto loc_825A8C28;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_825A8C28:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a8bb8
	if (!cr6.eq) goto loc_825A8BB8;
loc_825A8C34:
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x825a8c74
	if (cr6.eq) goto loc_825A8C74;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_825A8C44:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a8c6c
	if (cr6.eq) goto loc_825A8C6C;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x825A8C6C;
	sub_825952B8(ctx, base);
loc_825A8C6C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x825a8c44
	if (!cr6.eq) goto loc_825A8C44;
loc_825A8C74:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a8c8c
	if (cr6.eq) goto loc_825A8C8C;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x825A8C8C;
	sub_825952B8(ctx, base);
loc_825A8C8C:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A8C9C"))) PPC_WEAK_FUNC(sub_825A8C9C);
PPC_FUNC_IMPL(__imp__sub_825A8C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A8CA0"))) PPC_WEAK_FUNC(sub_825A8CA0);
PPC_FUNC_IMPL(__imp__sub_825A8CA0) {
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
loc_825A8CBC:
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
	// bne 0x825a8cbc
	if (!cr0.eq) goto loc_825A8CBC;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a8d08
	if (!cr6.eq) goto loc_825A8D08;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825A8CE8;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-29960
	ctx.r5.s64 = ctx.r11.s64 + -29960;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825A8D08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A8D08:
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

__attribute__((alias("__imp__sub_825A8D20"))) PPC_WEAK_FUNC(sub_825A8D20);
PPC_FUNC_IMPL(__imp__sub_825A8D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24680
	ctx.r3.s64 = ctx.r11.s64 + -24680;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A8D2C"))) PPC_WEAK_FUNC(sub_825A8D2C);
PPC_FUNC_IMPL(__imp__sub_825A8D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A8D30"))) PPC_WEAK_FUNC(sub_825A8D30);
PPC_FUNC_IMPL(__imp__sub_825A8D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24660
	ctx.r3.s64 = ctx.r11.s64 + -24660;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A8D3C"))) PPC_WEAK_FUNC(sub_825A8D3C);
PPC_FUNC_IMPL(__imp__sub_825A8D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A8D40"))) PPC_WEAK_FUNC(sub_825A8D40);
PPC_FUNC_IMPL(__imp__sub_825A8D40) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825A8D64;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a8d90
	if (cr6.eq) goto loc_825A8D90;
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
	ctx.lr = 0x825A8D88;
	sub_8353F3B8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_825A8D90:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_825A8DA4"))) PPC_WEAK_FUNC(sub_825A8DA4);
PPC_FUNC_IMPL(__imp__sub_825A8DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A8DA8"))) PPC_WEAK_FUNC(sub_825A8DA8);
PPC_FUNC_IMPL(__imp__sub_825A8DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24644
	ctx.r3.s64 = ctx.r11.s64 + -24644;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A8DB4"))) PPC_WEAK_FUNC(sub_825A8DB4);
PPC_FUNC_IMPL(__imp__sub_825A8DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A8DB8"))) PPC_WEAK_FUNC(sub_825A8DB8);
PPC_FUNC_IMPL(__imp__sub_825A8DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-24636
	ctx.r9.s64 = ctx.r10.s64 + -24636;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A8DDC"))) PPC_WEAK_FUNC(sub_825A8DDC);
PPC_FUNC_IMPL(__imp__sub_825A8DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A8DE0"))) PPC_WEAK_FUNC(sub_825A8DE0);
PPC_FUNC_IMPL(__imp__sub_825A8DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24624
	ctx.r3.s64 = ctx.r11.s64 + -24624;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A8DEC"))) PPC_WEAK_FUNC(sub_825A8DEC);
PPC_FUNC_IMPL(__imp__sub_825A8DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A8DF0"))) PPC_WEAK_FUNC(sub_825A8DF0);
PPC_FUNC_IMPL(__imp__sub_825A8DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24608
	ctx.r3.s64 = ctx.r11.s64 + -24608;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A8DFC"))) PPC_WEAK_FUNC(sub_825A8DFC);
PPC_FUNC_IMPL(__imp__sub_825A8DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A8E00"))) PPC_WEAK_FUNC(sub_825A8E00);
PPC_FUNC_IMPL(__imp__sub_825A8E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x825A8E08;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-3088
	ctx.r9.s64 = ctx.r11.s64 + -3088;
	// addi r8,r10,-24600
	ctx.r8.s64 = ctx.r10.s64 + -24600;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r26.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r26,148(r9)
	PPC_STORE_U32(ctx.r9.u32 + 148, ctx.r26.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_825A8E40:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_825A8E44:
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r25
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825a8e7c
	if (cr6.eq) goto loc_825A8E7C;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x825A8E60;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x825a8e7c
	if (cr6.gt) goto loc_825A8E7C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A8E7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A8E7C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x825a8e44
	if (cr6.lt) goto loc_825A8E44;
	// addi r29,r29,11
	ctx.r29.s64 = ctx.r29.s64 + 11;
	// cmpwi cr6,r29,24
	cr6.compare<int32_t>(ctx.r29.s32, 24, xer);
	// blt cr6,0x825a8e40
	if (cr6.lt) goto loc_825A8E40;
	// addi r30,r25,96
	ctx.r30.s64 = ctx.r25.s64 + 96;
	// li r29,3
	ctx.r29.s64 = 3;
loc_825A8E9C:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825a8ecc
	if (cr6.eq) goto loc_825A8ECC;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x825A8EB0;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x825a8ecc
	if (cr6.gt) goto loc_825A8ECC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A8ECC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A8ECC:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x825a8e9c
	if (!cr0.eq) goto loc_825A8E9C;
	// lwz r31,108(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 108);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825a8f0c
	if (cr6.eq) goto loc_825A8F0C;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x825A8EEC;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x825a8f08
	if (cr6.gt) goto loc_825A8F08;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A8F08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A8F08:
	// stw r26,108(r25)
	PPC_STORE_U32(ctx.r25.u32 + 108, ctx.r26.u32);
loc_825A8F0C:
	// bl 0x835f70f0
	ctx.lr = 0x825A8F10;
	sub_835F70F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x834ea438
	ctx.lr = 0x825A8F18;
	sub_834EA438(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x834ebb58
	ctx.lr = 0x825A8F24;
	sub_834EBB58(ctx, base);
	// lwz r3,940(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 940);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a8f38
	if (cr6.eq) goto loc_825A8F38;
	// bl 0x825bb070
	ctx.lr = 0x825A8F34;
	sub_825BB070(ctx, base);
	// stw r26,940(r25)
	PPC_STORE_U32(ctx.r25.u32 + 940, ctx.r26.u32);
loc_825A8F38:
	// lbz r11,1040(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1040);
	// li r30,32
	ctx.r30.s64 = 32;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a8f98
	if (!cr6.eq) goto loc_825A8F98;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r11,-19752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19752);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a8f98
	if (cr6.eq) goto loc_825A8F98;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825A8F68;
	sub_82595150(ctx, base);
	// lwz r3,-19752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19752);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a8f88
	if (cr6.eq) goto loc_825A8F88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A8F88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A8F88:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825A8F90;
	sub_82595170(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,-19752(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19752, ctx.r26.u32);
loc_825A8F98:
	// lwz r11,112(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a8fe0
	if (cr6.eq) goto loc_825A8FE0;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825A8FB4;
	sub_82595150(ctx, base);
	// lwz r3,112(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a8fd4
	if (cr6.eq) goto loc_825A8FD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A8FD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A8FD4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825A8FDC;
	sub_82595170(ctx, base);
	// stw r26,112(r25)
	PPC_STORE_U32(ctx.r25.u32 + 112, ctx.r26.u32);
loc_825A8FE0:
	// lwz r11,116(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a9028
	if (cr6.eq) goto loc_825A9028;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825A8FFC;
	sub_82595150(ctx, base);
	// lwz r3,116(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a901c
	if (cr6.eq) goto loc_825A901C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A901C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A901C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825A9024;
	sub_82595170(ctx, base);
	// stw r26,116(r25)
	PPC_STORE_U32(ctx.r25.u32 + 116, ctx.r26.u32);
loc_825A9028:
	// lwz r11,120(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a9070
	if (cr6.eq) goto loc_825A9070;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825A9044;
	sub_82595150(ctx, base);
	// lwz r3,120(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a9064
	if (cr6.eq) goto loc_825A9064;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A9064;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A9064:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825A906C;
	sub_82595170(ctx, base);
	// stw r26,120(r25)
	PPC_STORE_U32(ctx.r25.u32 + 120, ctx.r26.u32);
loc_825A9070:
	// lwz r11,124(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a90b8
	if (cr6.eq) goto loc_825A90B8;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825A908C;
	sub_82595150(ctx, base);
	// lwz r3,124(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a90ac
	if (cr6.eq) goto loc_825A90AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A90AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A90AC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825A90B4;
	sub_82595170(ctx, base);
	// stw r26,124(r25)
	PPC_STORE_U32(ctx.r25.u32 + 124, ctx.r26.u32);
loc_825A90B8:
	// addi r24,r25,132
	ctx.r24.s64 = ctx.r25.s64 + 132;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a0d0f0
	ctx.lr = 0x825A90C4;
	sub_82A0D0F0(ctx, base);
	// lwz r11,992(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 992);
	// addi r30,r25,972
	ctx.r30.s64 = ctx.r25.s64 + 972;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825a90e4
	if (cr6.lt) goto loc_825A90E4;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x825A90E4;
	sub_825952B8(ctx, base);
loc_825A90E4:
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// addi r31,r25,944
	ctx.r31.s64 = ctx.r25.s64 + 944;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stb r26,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r26.u8);
	// lwz r11,964(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 964);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825a9114
	if (cr6.lt) goto loc_825A9114;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x825A9114;
	sub_825952B8(ctx, base);
loc_825A9114:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// addi r30,r25,912
	ctx.r30.s64 = ctx.r25.s64 + 912;
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// stw r10,912(r25)
	PPC_STORE_U32(ctx.r25.u32 + 912, ctx.r10.u32);
	// lbz r9,916(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 916);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a9164
	if (cr6.eq) goto loc_825A9164;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a9164
	if (cr6.eq) goto loc_825A9164;
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
	ctx.lr = 0x825A9160;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825A9164:
	// stb r26,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r26.u8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a9190
	if (cr6.eq) goto loc_825A9190;
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
	ctx.lr = 0x825A918C;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825A9190:
	// addi r29,r25,40
	ctx.r29.s64 = ctx.r25.s64 + 40;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r29,872
	ctx.r30.s64 = ctx.r29.s64 + 872;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// addi r28,r11,-24712
	ctx.r28.s64 = ctx.r11.s64 + -24712;
loc_825A91A8:
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
	// beq cr6,0x825a91e0
	if (cr6.eq) goto loc_825A91E0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a91e0
	if (cr6.eq) goto loc_825A91E0;
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
	ctx.lr = 0x825A91DC;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825A91E0:
	// stb r26,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r26.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a9208
	if (cr6.eq) goto loc_825A9208;
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
	ctx.lr = 0x825A9204;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825A9208:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bge 0x825a91a8
	if (!cr0.lt) goto loc_825A91A8;
	// addi r30,r29,832
	ctx.r30.s64 = ctx.r29.s64 + 832;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// addi r29,r11,-24712
	ctx.r29.s64 = ctx.r11.s64 + -24712;
loc_825A9224:
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
	// beq cr6,0x825a925c
	if (cr6.eq) goto loc_825A925C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a925c
	if (cr6.eq) goto loc_825A925C;
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
	ctx.lr = 0x825A9258;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825A925C:
	// stb r26,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r26.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a9284
	if (cr6.eq) goto loc_825A9284;
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
	ctx.lr = 0x825A9280;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825A9284:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x825a9224
	if (!cr0.lt) goto loc_825A9224;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r10,816(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 816);
	// addi r30,r25,812
	ctx.r30.s64 = ctx.r25.s64 + 812;
	// addi r9,r11,-24712
	ctx.r9.s64 = ctx.r11.s64 + -24712;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,812(r25)
	PPC_STORE_U32(ctx.r25.u32 + 812, ctx.r9.u32);
	// beq cr6,0x825a92d0
	if (cr6.eq) goto loc_825A92D0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a92d0
	if (cr6.eq) goto loc_825A92D0;
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
	ctx.lr = 0x825A92CC;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825A92D0:
	// stb r26,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r26.u8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a92fc
	if (cr6.eq) goto loc_825A92FC;
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
	ctx.lr = 0x825A92F8;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825A92FC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r10,796(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 796);
	// addi r30,r25,792
	ctx.r30.s64 = ctx.r25.s64 + 792;
	// addi r9,r11,-24712
	ctx.r9.s64 = ctx.r11.s64 + -24712;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,792(r25)
	PPC_STORE_U32(ctx.r25.u32 + 792, ctx.r9.u32);
	// beq cr6,0x825a9340
	if (cr6.eq) goto loc_825A9340;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a9340
	if (cr6.eq) goto loc_825A9340;
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
	ctx.lr = 0x825A933C;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825A9340:
	// stb r26,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r26.u8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a936c
	if (cr6.eq) goto loc_825A936C;
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
	ctx.lr = 0x825A9368;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825A936C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r10,776(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 776);
	// addi r30,r25,772
	ctx.r30.s64 = ctx.r25.s64 + 772;
	// addi r9,r11,-24712
	ctx.r9.s64 = ctx.r11.s64 + -24712;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,772(r25)
	PPC_STORE_U32(ctx.r25.u32 + 772, ctx.r9.u32);
	// beq cr6,0x825a93b0
	if (cr6.eq) goto loc_825A93B0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a93b0
	if (cr6.eq) goto loc_825A93B0;
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
	ctx.lr = 0x825A93AC;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825A93B0:
	// stb r26,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r26.u8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a93dc
	if (cr6.eq) goto loc_825A93DC;
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
	ctx.lr = 0x825A93D8;
	sub_8353F3B8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825A93DC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a0dc70
	ctx.lr = 0x825A93E4;
	sub_82A0DC70(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A93EC"))) PPC_WEAK_FUNC(sub_825A93EC);
PPC_FUNC_IMPL(__imp__sub_825A93EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A93F0"))) PPC_WEAK_FUNC(sub_825A93F0);
PPC_FUNC_IMPL(__imp__sub_825A93F0) {
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
	// bne cr6,0x825a94d0
	if (!cr6.eq) goto loc_825A94D0;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x825a9428
	if (!cr6.eq) goto loc_825A9428;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825A9428:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825a9458
	if (cr6.eq) goto loc_825A9458;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825A943C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825a943c
	if (!cr6.eq) goto loc_825A943C;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825A9458:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825a9468
	if (!cr6.eq) goto loc_825A9468;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825A9468:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x825a9494
	if (cr6.eq) goto loc_825A9494;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825A9478:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825a9478
	if (!cr6.eq) goto loc_825A9478;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825A9494:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,-704
	ctx.r10.s64 = ctx.r11.s64 + -704;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,30520
	ctx.r8.s64 = ctx.r8.s64 + 30520;
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
	ctx.lr = 0x825A94C8;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_825A94D0:
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

__attribute__((alias("__imp__sub_825A94E4"))) PPC_WEAK_FUNC(sub_825A94E4);
PPC_FUNC_IMPL(__imp__sub_825A94E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A94E8"))) PPC_WEAK_FUNC(sub_825A94E8);
PPC_FUNC_IMPL(__imp__sub_825A94E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825a8ca0
	sub_825A8CA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A94EC"))) PPC_WEAK_FUNC(sub_825A94EC);
PPC_FUNC_IMPL(__imp__sub_825A94EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A94F0"))) PPC_WEAK_FUNC(sub_825A94F0);
PPC_FUNC_IMPL(__imp__sub_825A94F0) {
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
	// bne cr6,0x825a9554
	if (!cr6.eq) goto loc_825A9554;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A9524;
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
	ctx.lr = 0x825A953C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825a93f0
	ctx.lr = 0x825A954C;
	sub_825A93F0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825A9554:
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

__attribute__((alias("__imp__sub_825A956C"))) PPC_WEAK_FUNC(sub_825A956C);
PPC_FUNC_IMPL(__imp__sub_825A956C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A9570"))) PPC_WEAK_FUNC(sub_825A9570);
PPC_FUNC_IMPL(__imp__sub_825A9570) {
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
	// bne cr6,0x825a9650
	if (!cr6.eq) goto loc_825A9650;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x825a95a8
	if (!cr6.eq) goto loc_825A95A8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825A95A8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825a95d8
	if (cr6.eq) goto loc_825A95D8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825A95BC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825a95bc
	if (!cr6.eq) goto loc_825A95BC;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825A95D8:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825a95e8
	if (!cr6.eq) goto loc_825A95E8;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825A95E8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x825a9614
	if (cr6.eq) goto loc_825A9614;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825A95F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825a95f8
	if (!cr6.eq) goto loc_825A95F8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825A9614:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,-704
	ctx.r10.s64 = ctx.r11.s64 + -704;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,30808
	ctx.r8.s64 = ctx.r8.s64 + 30808;
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
	ctx.lr = 0x825A9648;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_825A9650:
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

__attribute__((alias("__imp__sub_825A9664"))) PPC_WEAK_FUNC(sub_825A9664);
PPC_FUNC_IMPL(__imp__sub_825A9664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A9668"))) PPC_WEAK_FUNC(sub_825A9668);
PPC_FUNC_IMPL(__imp__sub_825A9668) {
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
	// bne cr6,0x825a9748
	if (!cr6.eq) goto loc_825A9748;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x825a96a0
	if (!cr6.eq) goto loc_825A96A0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825A96A0:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825a96d0
	if (cr6.eq) goto loc_825A96D0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825A96B4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825a96b4
	if (!cr6.eq) goto loc_825A96B4;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825A96D0:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825a96e0
	if (!cr6.eq) goto loc_825A96E0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825A96E0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x825a970c
	if (cr6.eq) goto loc_825A970C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825A96F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825a96f0
	if (!cr6.eq) goto loc_825A96F0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825A970C:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,-704
	ctx.r10.s64 = ctx.r11.s64 + -704;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,30952
	ctx.r8.s64 = ctx.r8.s64 + 30952;
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
	ctx.lr = 0x825A9740;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_825A9748:
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

__attribute__((alias("__imp__sub_825A975C"))) PPC_WEAK_FUNC(sub_825A975C);
PPC_FUNC_IMPL(__imp__sub_825A975C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A9760"))) PPC_WEAK_FUNC(sub_825A9760);
PPC_FUNC_IMPL(__imp__sub_825A9760) {
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
	// bne cr6,0x825a9840
	if (!cr6.eq) goto loc_825A9840;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x825a9798
	if (!cr6.eq) goto loc_825A9798;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825A9798:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825a97c8
	if (cr6.eq) goto loc_825A97C8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825A97AC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825a97ac
	if (!cr6.eq) goto loc_825A97AC;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825A97C8:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825a97d8
	if (!cr6.eq) goto loc_825A97D8;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825A97D8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x825a9804
	if (cr6.eq) goto loc_825A9804;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825A97E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825a97e8
	if (!cr6.eq) goto loc_825A97E8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825A9804:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,-704
	ctx.r10.s64 = ctx.r11.s64 + -704;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,31096
	ctx.r8.s64 = ctx.r8.s64 + 31096;
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
	ctx.lr = 0x825A9838;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_825A9840:
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

__attribute__((alias("__imp__sub_825A9854"))) PPC_WEAK_FUNC(sub_825A9854);
PPC_FUNC_IMPL(__imp__sub_825A9854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A9858"))) PPC_WEAK_FUNC(sub_825A9858);
PPC_FUNC_IMPL(__imp__sub_825A9858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x825A9860;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,65(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 65);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a9888
	if (cr6.eq) goto loc_825A9888;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x825A9888;
	sub_831CC188(ctx, base);
loc_825A9888:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x83355ac8
	ctx.lr = 0x825A9894;
	sub_83355AC8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x825a98b0
	if (cr6.eq) goto loc_825A98B0;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x825a98d4
	goto loc_825A98D4;
loc_825A98B0:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,65(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 65);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a98c8
	if (cr6.eq) goto loc_825A98C8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x825a98d4
	goto loc_825A98D4;
loc_825A98C8:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x825a99c0
	if (!cr6.eq) goto loc_825A99C0;
loc_825A98D4:
	// lbz r11,65(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 65);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a98e8
	if (!cr6.eq) goto loc_825A98E8;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_825A98E8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x825a9900
	if (!cr6.eq) goto loc_825A9900;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x825a9918
	goto loc_825A9918;
loc_825A9900:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x825a9914
	if (!cr6.eq) goto loc_825A9914;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x825a9918
	goto loc_825A9918;
loc_825A9914:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_825A9918:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x825a9968
	if (!cr6.eq) goto loc_825A9968;
	// lbz r11,65(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a993c
	if (cr6.eq) goto loc_825A993C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x825a9964
	goto loc_825A9964;
loc_825A993C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,65(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825a9964
	if (!cr6.eq) goto loc_825A9964;
loc_825A9950:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,65(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825a9950
	if (cr6.eq) goto loc_825A9950;
loc_825A9964:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_825A9968:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x825a9a54
	if (!cr6.eq) goto loc_825A9A54;
	// lbz r11,65(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a9990
	if (cr6.eq) goto loc_825A9990;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x825a9a54
	goto loc_825A9A54;
loc_825A9990:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,65(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825a99b8
	if (!cr6.eq) goto loc_825A99B8;
loc_825A99A4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,65(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825a99a4
	if (cr6.eq) goto loc_825A99A4;
loc_825A99B8:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x825a9a54
	goto loc_825A9A54;
loc_825A99C0:
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
	// bne cr6,0x825a99e0
	if (!cr6.eq) goto loc_825A99E0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x825a9a08
	goto loc_825A9A08;
loc_825A99E0:
	// lbz r11,65(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 65);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a99f4
	if (!cr6.eq) goto loc_825A99F4;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_825A99F4:
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
loc_825A9A08:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x825a9a20
	if (!cr6.eq) goto loc_825A9A20;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x825a9a3c
	goto loc_825A9A3C;
loc_825A9A20:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x825a9a38
	if (!cr6.eq) goto loc_825A9A38;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x825a9a3c
	goto loc_825A9A3C;
loc_825A9A38:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_825A9A3C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,64(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 64);
	// lbz r10,64(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 64);
	// stb r9,64(r25)
	PPC_STORE_U8(ctx.r25.u32 + 64, ctx.r9.u8);
	// stb r10,64(r26)
	PPC_STORE_U8(ctx.r26.u32 + 64, ctx.r10.u8);
loc_825A9A54:
	// lbz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 64);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x825a9bec
	if (!cr6.eq) goto loc_825A9BEC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x825a9be8
	if (cr6.eq) goto loc_825A9BE8;
loc_825A9A78:
	// lbz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 64);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x825a9be8
	if (!cr6.eq) goto loc_825A9BE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x825a9b30
	if (!cr6.eq) goto loc_825A9B30;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825a9ab8
	if (!cr6.eq) goto loc_825A9AB8;
	// stb r30,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825692d0
	ctx.lr = 0x825A9AB4;
	sub_825692D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_825A9AB8:
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825a9b84
	if (!cr6.eq) goto loc_825A9B84;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x825a9ae4
	if (!cr6.eq) goto loc_825A9AE4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 64);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x825a9b80
	if (cr6.eq) goto loc_825A9B80;
loc_825A9AE4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 64);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x825a9b0c
	if (!cr6.eq) goto loc_825A9B0C;
	// stb r30,64(r10)
	PPC_STORE_U8(ctx.r10.u32 + 64, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82569348
	ctx.lr = 0x825A9B08;
	sub_82569348(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_825A9B0C:
	// lbz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r10.u8);
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,64(r9)
	PPC_STORE_U8(ctx.r9.u32 + 64, ctx.r30.u8);
	// bl 0x825692d0
	ctx.lr = 0x825A9B2C;
	sub_825692D0(ctx, base);
	// b 0x825a9be8
	goto loc_825A9BE8;
loc_825A9B30:
	// lbz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825a9b54
	if (!cr6.eq) goto loc_825A9B54;
	// stb r30,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82569348
	ctx.lr = 0x825A9B50;
	sub_82569348(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_825A9B54:
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825a9b84
	if (!cr6.eq) goto loc_825A9B84;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x825a9ba0
	if (!cr6.eq) goto loc_825A9BA0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 64);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x825a9ba0
	if (!cr6.eq) goto loc_825A9BA0;
loc_825A9B80:
	// stb r29,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r29.u8);
loc_825A9B84:
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
	// bne cr6,0x825a9a78
	if (!cr6.eq) goto loc_825A9A78;
	// b 0x825a9be8
	goto loc_825A9BE8;
loc_825A9BA0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 64);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x825a9bc8
	if (!cr6.eq) goto loc_825A9BC8;
	// stb r30,64(r10)
	PPC_STORE_U8(ctx.r10.u32 + 64, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825692d0
	ctx.lr = 0x825A9BC4;
	sub_825692D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_825A9BC8:
	// lbz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r10.u8);
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,64(r9)
	PPC_STORE_U8(ctx.r9.u32 + 64, ctx.r30.u8);
	// bl 0x82569348
	ctx.lr = 0x825A9BE8;
	sub_82569348(ctx, base);
loc_825A9BE8:
	// stb r30,64(r28)
	PPC_STORE_U8(ctx.r28.u32 + 64, ctx.r30.u8);
loc_825A9BEC:
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// addi r31,r26,16
	ctx.r31.s64 = ctx.r26.s64 + 16;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825a9c10
	if (cr6.lt) goto loc_825A9C10;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x825A9C10;
	sub_825952B8(ctx, base);
loc_825A9C10:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x825A9C30;
	sub_825952B8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a9c44
	if (cr6.eq) goto loc_825A9C44;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_825A9C44:
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

__attribute__((alias("__imp__sub_825A9C54"))) PPC_WEAK_FUNC(sub_825A9C54);
PPC_FUNC_IMPL(__imp__sub_825A9C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A9C58"))) PPC_WEAK_FUNC(sub_825A9C58);
PPC_FUNC_IMPL(__imp__sub_825A9C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825A9C60;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,65(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 65);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a9ce4
	if (!cr6.eq) goto loc_825A9CE4;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
loc_825A9C88:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x825a9c58
	ctx.lr = 0x825A9C94;
	sub_825A9C58(ctx, base);
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// blt cr6,0x825a9cb8
	if (cr6.lt) goto loc_825A9CB8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x825A9CB8;
	sub_825952B8(ctx, base);
loc_825A9CB8:
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x825A9CD4;
	sub_825952B8(ctx, base);
	// lbz r11,65(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 65);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a9c88
	if (cr6.eq) goto loc_825A9C88;
loc_825A9CE4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A9CEC"))) PPC_WEAK_FUNC(sub_825A9CEC);
PPC_FUNC_IMPL(__imp__sub_825A9CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A9CF0"))) PPC_WEAK_FUNC(sub_825A9CF0);
PPC_FUNC_IMPL(__imp__sub_825A9CF0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a9d70
	if (!cr6.eq) goto loc_825A9D70;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x825a9d28
	if (!cr6.eq) goto loc_825A9D28;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-25136
	ctx.r6.s64 = ctx.r11.s64 + -25136;
	// b 0x825a9d30
	goto loc_825A9D30;
loc_825A9D28:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-25140
	ctx.r6.s64 = ctx.r11.s64 + -25140;
loc_825A9D30:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,-25152
	ctx.r5.s64 = ctx.r11.s64 + -25152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831d0b08
	ctx.lr = 0x825A9D44;
	sub_831D0B08(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825A9D58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a93f0
	ctx.lr = 0x825A9D68;
	sub_825A93F0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r8.u8);
loc_825A9D70:
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

__attribute__((alias("__imp__sub_825A9D84"))) PPC_WEAK_FUNC(sub_825A9D84);
PPC_FUNC_IMPL(__imp__sub_825A9D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A9D88"))) PPC_WEAK_FUNC(sub_825A9D88);
PPC_FUNC_IMPL(__imp__sub_825A9D88) {
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
	// bl 0x825a8e00
	ctx.lr = 0x825A9DA8;
	sub_825A8E00(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825a9dc0
	if (cr6.eq) goto loc_825A9DC0;
	// bl 0x82416268
	ctx.lr = 0x825A9DBC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825A9DC0:
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

__attribute__((alias("__imp__sub_825A9DD8"))) PPC_WEAK_FUNC(sub_825A9DD8);
PPC_FUNC_IMPL(__imp__sub_825A9DD8) {
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
	// bne cr6,0x825a9dfc
	if (!cr6.eq) goto loc_825A9DFC;
	// bl 0x825a94f0
	ctx.lr = 0x825A9DFC;
	sub_825A94F0(ctx, base);
loc_825A9DFC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a9e18
	if (!cr6.eq) goto loc_825A9E18;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,6684
	ctx.r10.s64 = ctx.r11.s64 + 6684;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825A9E18:
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

__attribute__((alias("__imp__sub_825A9E30"))) PPC_WEAK_FUNC(sub_825A9E30);
PPC_FUNC_IMPL(__imp__sub_825A9E30) {
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
	// bne cr6,0x825a9e94
	if (!cr6.eq) goto loc_825A9E94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A9E64;
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
	ctx.lr = 0x825A9E7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825a9570
	ctx.lr = 0x825A9E8C;
	sub_825A9570(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825A9E94:
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

__attribute__((alias("__imp__sub_825A9EAC"))) PPC_WEAK_FUNC(sub_825A9EAC);
PPC_FUNC_IMPL(__imp__sub_825A9EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A9EB0"))) PPC_WEAK_FUNC(sub_825A9EB0);
PPC_FUNC_IMPL(__imp__sub_825A9EB0) {
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
	// bne cr6,0x825a9ed4
	if (!cr6.eq) goto loc_825A9ED4;
	// bl 0x825a9e30
	ctx.lr = 0x825A9ED4;
	sub_825A9E30(ctx, base);
loc_825A9ED4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825a9ef0
	if (!cr6.eq) goto loc_825A9EF0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_825A9EF0:
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

__attribute__((alias("__imp__sub_825A9F08"))) PPC_WEAK_FUNC(sub_825A9F08);
PPC_FUNC_IMPL(__imp__sub_825A9F08) {
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
	// bne cr6,0x825a9fe8
	if (!cr6.eq) goto loc_825A9FE8;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x825a9f40
	if (!cr6.eq) goto loc_825A9F40;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825A9F40:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825a9f70
	if (cr6.eq) goto loc_825A9F70;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825A9F54:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825a9f54
	if (!cr6.eq) goto loc_825A9F54;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825A9F70:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825a9f80
	if (!cr6.eq) goto loc_825A9F80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825A9F80:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x825a9fac
	if (cr6.eq) goto loc_825A9FAC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825A9F90:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825a9f90
	if (!cr6.eq) goto loc_825A9F90;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825A9FAC:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,-704
	ctx.r10.s64 = ctx.r11.s64 + -704;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,30664
	ctx.r8.s64 = ctx.r8.s64 + 30664;
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
	ctx.lr = 0x825A9FE0;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_825A9FE8:
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

__attribute__((alias("__imp__sub_825A9FFC"))) PPC_WEAK_FUNC(sub_825A9FFC);
PPC_FUNC_IMPL(__imp__sub_825A9FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AA000"))) PPC_WEAK_FUNC(sub_825AA000);
PPC_FUNC_IMPL(__imp__sub_825AA000) {
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
	// bne cr6,0x825aa064
	if (!cr6.eq) goto loc_825AA064;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AA034;
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
	ctx.lr = 0x825AA04C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825a9668
	ctx.lr = 0x825AA05C;
	sub_825A9668(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825AA064:
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

__attribute__((alias("__imp__sub_825AA07C"))) PPC_WEAK_FUNC(sub_825AA07C);
PPC_FUNC_IMPL(__imp__sub_825AA07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AA080"))) PPC_WEAK_FUNC(sub_825AA080);
PPC_FUNC_IMPL(__imp__sub_825AA080) {
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
	// bne cr6,0x825aa0e4
	if (!cr6.eq) goto loc_825AA0E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AA0B4;
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
	ctx.lr = 0x825AA0CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825a9760
	ctx.lr = 0x825AA0DC;
	sub_825A9760(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825AA0E4:
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

__attribute__((alias("__imp__sub_825AA0FC"))) PPC_WEAK_FUNC(sub_825AA0FC);
PPC_FUNC_IMPL(__imp__sub_825AA0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AA100"))) PPC_WEAK_FUNC(sub_825AA100);
PPC_FUNC_IMPL(__imp__sub_825AA100) {
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
	// bne cr6,0x825aa124
	if (!cr6.eq) goto loc_825AA124;
	// bl 0x825aa080
	ctx.lr = 0x825AA124;
	sub_825AA080(ctx, base);
loc_825AA124:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aa140
	if (!cr6.eq) goto loc_825AA140;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_825AA140:
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

__attribute__((alias("__imp__sub_825AA158"))) PPC_WEAK_FUNC(sub_825AA158);
PPC_FUNC_IMPL(__imp__sub_825AA158) {
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
	// bne cr6,0x825aa1bc
	if (!cr6.eq) goto loc_825AA1BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AA18C;
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
	ctx.lr = 0x825AA1A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825a9f08
	ctx.lr = 0x825AA1B4;
	sub_825A9F08(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825AA1BC:
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

__attribute__((alias("__imp__sub_825AA1D4"))) PPC_WEAK_FUNC(sub_825AA1D4);
PPC_FUNC_IMPL(__imp__sub_825AA1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AA1D8"))) PPC_WEAK_FUNC(sub_825AA1D8);
PPC_FUNC_IMPL(__imp__sub_825AA1D8) {
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
	// bl 0x825a9c58
	ctx.lr = 0x825AA1F8;
	sub_825A9C58(ctx, base);
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

__attribute__((alias("__imp__sub_825AA22C"))) PPC_WEAK_FUNC(sub_825AA22C);
PPC_FUNC_IMPL(__imp__sub_825AA22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AA230"))) PPC_WEAK_FUNC(sub_825AA230);
PPC_FUNC_IMPL(__imp__sub_825AA230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825AA238;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aa284
	if (!cr6.eq) goto loc_825AA284;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AA260;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a145d8
	ctx.lr = 0x825AA26C;
	sub_82A145D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825a9f08
	ctx.lr = 0x825AA27C;
	sub_825A9F08(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
loc_825AA284:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AA28C"))) PPC_WEAK_FUNC(sub_825AA28C);
PPC_FUNC_IMPL(__imp__sub_825AA28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AA290"))) PPC_WEAK_FUNC(sub_825AA290);
PPC_FUNC_IMPL(__imp__sub_825AA290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x825AA298;
	__savegprlr_23(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r10,-19754(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -19754);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825aa2bc
	if (!cr6.eq) goto loc_825AA2BC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,-19754(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19754, ctx.r10.u8);
	// bl 0x83102db0
	ctx.lr = 0x825AA2BC;
	sub_83102DB0(ctx, base);
loc_825AA2BC:
	// lbz r11,796(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 796);
	// addi r23,r30,792
	ctx.r23.s64 = ctx.r30.s64 + 792;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aa2d4
	if (!cr6.eq) goto loc_825AA2D4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825a9e30
	ctx.lr = 0x825AA2D4;
	sub_825A9E30(ctx, base);
loc_825AA2D4:
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aa2f0
	if (!cr6.eq) goto loc_825AA2F0;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r10.u32);
loc_825AA2F0:
	// lwz r29,12(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x825aa31c
	if (!cr6.eq) goto loc_825AA31C;
	// rotlwi r11,r29,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825aa310
	if (cr6.eq) goto loc_825AA310;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
loc_825AA310:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_825AA31C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r25,16(r29)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// lbz r24,18(r29)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r29.u32 + 18);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825AA330:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825AA338:
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825aa39c
	if (!cr6.eq) goto loc_825AA39C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8293e698
	ctx.lr = 0x825AA360;
	sub_8293E698(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aa374
	if (!cr6.eq) goto loc_825AA374;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x825aa398
	goto loc_825AA398;
loc_825AA374:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x825749e0
	ctx.lr = 0x825AA37C;
	sub_825749E0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r31.u32);
loc_825AA398:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825AA39C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// blt cr6,0x825aa338
	if (cr6.lt) goto loc_825AA338;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x825aa330
	if (cr6.lt) goto loc_825AA330;
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
	ctx.lr = 0x825AA3D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r8,-31916
	ctx.r3.s64 = ctx.r8.s64 + -31916;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83523fd8
	ctx.lr = 0x825AA3EC;
	sub_83523FD8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x825aa3f8
	if (!cr6.eq) goto loc_825AA3F8;
	// li r27,1
	ctx.r27.s64 = 1;
loc_825AA3F8:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r30,96
	ctx.r28.s64 = ctx.r30.s64 + 96;
	// addi r29,r29,44
	ctx.r29.s64 = ctx.r29.s64 + 44;
loc_825AA404:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aa468
	if (!cr6.eq) goto loc_825AA468;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825aa428
	if (cr6.eq) goto loc_825AA428;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x825aa47c
	if (cr6.gt) goto loc_825AA47C;
loc_825AA428:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8379eda8
	ctx.lr = 0x825AA43C;
	sub_8379EDA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a082e0
	ctx.lr = 0x825AA448;
	sub_82A082E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aa45c
	if (!cr6.eq) goto loc_825AA45C;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x825aa468
	goto loc_825AA468;
loc_825AA45C:
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x825749e0
	ctx.lr = 0x825AA464;
	sub_825749E0(ctx, base);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_825AA468:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// blt cr6,0x825aa404
	if (cr6.lt) goto loc_825AA404;
loc_825AA47C:
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825aa490
	if (cr6.eq) goto loc_825AA490;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
loc_825AA490:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AA49C"))) PPC_WEAK_FUNC(sub_825AA49C);
PPC_FUNC_IMPL(__imp__sub_825AA49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AA4A0"))) PPC_WEAK_FUNC(sub_825AA4A0);
PPC_FUNC_IMPL(__imp__sub_825AA4A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825AA4A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// bne cr6,0x825aa4d0
	if (!cr6.eq) goto loc_825AA4D0;
	// li r26,2
	ctx.r26.s64 = 2;
loc_825AA4D0:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825aa4e0
	if (cr6.eq) goto loc_825AA4E0;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_825AA4E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// stb r30,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r30.u8);
	// lfs f13,-25156(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25156);
	ctx.f13.f64 = double(temp.f32);
	// stb r30,74(r31)
	PPC_STORE_U8(ctx.r31.u32 + 74, ctx.r30.u8);
	// stb r30,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r30.u8);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// stb r30,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r30.u8);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// lbz r7,55(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 55);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f1,f12
	ctx.f1.f64 = double(float(ctx.f12.f64));
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lbz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// bl 0x833c7538
	ctx.lr = 0x825AA588;
	sub_833C7538(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r4,r25,24
	ctx.r4.u64 = ctx.r25.u32 & 0xFF;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// addi r27,r27,792
	ctx.r27.s64 = ctx.r27.s64 + 792;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addic r11,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// subfe r9,r11,r4
	temp.u8 = (~ctx.r11.u32 + ctx.r4.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r30,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r30.u8);
	// stb r26,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r26.u8);
	// stb r9,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r9.u8);
	// lbz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825aa5cc
	if (!cr6.eq) goto loc_825AA5CC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825a9e30
	ctx.lr = 0x825AA5CC;
	sub_825A9E30(ctx, base);
loc_825AA5CC:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aa5e8
	if (!cr6.eq) goto loc_825AA5E8;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r10.u32);
loc_825AA5E8:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// stb r10,74(r31)
	PPC_STORE_U8(ctx.r31.u32 + 74, ctx.r10.u8);
	// lbz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// stb r9,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r9.u8);
	// lwz r8,12(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825aa60c
	if (cr6.eq) goto loc_825AA60C;
	// stw r30,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r30.u32);
loc_825AA60C:
	// lbz r11,126(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 126);
	// addi r5,r28,147
	ctx.r5.s64 = ctx.r28.s64 + 147;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x831ce7d8
	ctx.lr = 0x825AA624;
	sub_831CE7D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,95(r31)
	PPC_STORE_U8(ctx.r31.u32 + 95, ctx.r30.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AA634"))) PPC_WEAK_FUNC(sub_825AA634);
PPC_FUNC_IMPL(__imp__sub_825AA634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AA638"))) PPC_WEAK_FUNC(sub_825AA638);
PPC_FUNC_IMPL(__imp__sub_825AA638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x825AA640;
	__savegprlr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r30,r3,888
	ctx.r30.s64 = ctx.r3.s64 + 888;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// li r25,1
	ctx.r25.s64 = 1;
loc_825AA658:
	// lbz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aa6a8
	if (!cr6.eq) goto loc_825AA6A8;
	// lwz r11,-16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// addi r31,r30,-16
	ctx.r31.s64 = ctx.r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AA67C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,-16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825AA694;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825a93f0
	ctx.lr = 0x825AA6A4;
	sub_825A93F0(ctx, base);
	// stb r25,-12(r30)
	PPC_STORE_U8(ctx.r30.u32 + -12, ctx.r25.u8);
loc_825AA6A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aa6c4
	if (!cr6.eq) goto loc_825AA6C4;
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,6684
	ctx.r10.s64 = ctx.r11.s64 + 6684;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_825AA6C4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_825AA6D4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82917450
	ctx.lr = 0x825AA6E4;
	sub_82917450(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x825aa6d4
	if (cr6.lt) goto loc_825AA6D4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a162f0
	ctx.lr = 0x825AA704;
	sub_82A162F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825aa768
	if (cr6.eq) goto loc_825AA768;
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_825AA718:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r25,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r25.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825aa718
	if (!cr0.eq) goto loc_825AA718;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825aa764
	if (!cr6.eq) goto loc_825AA764;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825AA744;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,18008
	ctx.r5.s64 = ctx.r11.s64 + 18008;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825AA764;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AA764:
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
loc_825AA768:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// blt cr6,0x825aa658
	if (cr6.lt) goto loc_825AA658;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AA780"))) PPC_WEAK_FUNC(sub_825AA780);
PPC_FUNC_IMPL(__imp__sub_825AA780) {
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
	// bne cr6,0x825aa7a4
	if (!cr6.eq) goto loc_825AA7A4;
	// bl 0x825aa158
	ctx.lr = 0x825AA7A4;
	sub_825AA158(ctx, base);
loc_825AA7A4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aa7c0
	if (!cr6.eq) goto loc_825AA7C0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_825AA7C0:
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

__attribute__((alias("__imp__sub_825AA7D8"))) PPC_WEAK_FUNC(sub_825AA7D8);
PPC_FUNC_IMPL(__imp__sub_825AA7D8) {
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
	// bne cr6,0x825aa7fc
	if (!cr6.eq) goto loc_825AA7FC;
	// bl 0x825aa158
	ctx.lr = 0x825AA7FC;
	sub_825AA158(ctx, base);
loc_825AA7FC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aa81c
	if (!cr6.eq) goto loc_825AA81C;
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
loc_825AA81C:
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

__attribute__((alias("__imp__sub_825AA834"))) PPC_WEAK_FUNC(sub_825AA834);
PPC_FUNC_IMPL(__imp__sub_825AA834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AA838"))) PPC_WEAK_FUNC(sub_825AA838);
PPC_FUNC_IMPL(__imp__sub_825AA838) {
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
	// bne cr6,0x825aa918
	if (!cr6.eq) goto loc_825AA918;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x825aa870
	if (!cr6.eq) goto loc_825AA870;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825AA870:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825aa8a0
	if (cr6.eq) goto loc_825AA8A0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825AA884:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825aa884
	if (!cr6.eq) goto loc_825AA884;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825AA8A0:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825aa8b0
	if (!cr6.eq) goto loc_825AA8B0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825AA8B0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x825aa8dc
	if (cr6.eq) goto loc_825AA8DC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825AA8C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825aa8c0
	if (!cr6.eq) goto loc_825AA8C0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825AA8DC:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,-704
	ctx.r10.s64 = ctx.r11.s64 + -704;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,32648
	ctx.r8.s64 = ctx.r8.s64 + 32648;
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
	ctx.lr = 0x825AA910;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_825AA918:
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

__attribute__((alias("__imp__sub_825AA92C"))) PPC_WEAK_FUNC(sub_825AA92C);
PPC_FUNC_IMPL(__imp__sub_825AA92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AA930"))) PPC_WEAK_FUNC(sub_825AA930);
PPC_FUNC_IMPL(__imp__sub_825AA930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825AA938;
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
	// bne cr6,0x825aa984
	if (!cr6.eq) goto loc_825AA984;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x825aa984
	if (!cr6.eq) goto loc_825AA984;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x825aa1d8
	ctx.lr = 0x825AA96C;
	sub_825AA1D8(ctx, base);
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
loc_825AA984:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x825aa9b4
	if (cr6.eq) goto loc_825AA9B4;
loc_825AA98C:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83355ac8
	ctx.lr = 0x825AA998;
	sub_83355AC8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a9858
	ctx.lr = 0x825AA9A8;
	sub_825A9858(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x825aa98c
	if (!cr6.eq) goto loc_825AA98C;
loc_825AA9B4:
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

__attribute__((alias("__imp__sub_825AA9C4"))) PPC_WEAK_FUNC(sub_825AA9C4);
PPC_FUNC_IMPL(__imp__sub_825AA9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AA9C8"))) PPC_WEAK_FUNC(sub_825AA9C8);
PPC_FUNC_IMPL(__imp__sub_825AA9C8) {
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
	ctx.lr = 0x825AA9D0;
	__savegprlr_14(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,916(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 916);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// addi r31,r3,912
	ctx.r31.s64 = ctx.r3.s64 + 912;
	// mr r16,r20
	ctx.r16.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aaa00
	if (!cr6.eq) goto loc_825AAA00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa080
	ctx.lr = 0x825AAA00;
	sub_825AA080(ctx, base);
loc_825AAA00:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aaa1c
	if (!cr6.eq) goto loc_825AAA1C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_825AAA1C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r17,1
	ctx.r17.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825aaa40
	if (cr6.eq) goto loc_825AAA40;
	// bl 0x82da1d10
	ctx.lr = 0x825AAA30;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825aaa40
	if (cr6.eq) goto loc_825AAA40;
	// mr r16,r17
	ctx.r16.u64 = ctx.r17.u64;
loc_825AAA40:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825aaa50
	if (cr6.eq) goto loc_825AAA50;
	// stw r20,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r20.u32);
loc_825AAA50:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// ori r18,r10,34548
	ctx.r18.u64 = ctx.r10.u64 | 34548;
	// addi r19,r11,22984
	ctx.r19.s64 = ctx.r11.s64 + 22984;
loc_825AAA64:
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(ctx.r14.s32, 0, xer);
	// bne cr6,0x825aaa74
	if (!cr6.eq) goto loc_825AAA74;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// b 0x825aaa80
	goto loc_825AAA80;
loc_825AAA74:
	// cmpwi cr6,r14,1
	cr6.compare<int32_t>(ctx.r14.s32, 1, xer);
	// bne cr6,0x825aaa84
	if (!cr6.eq) goto loc_825AAA84;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
loc_825AAA80:
	// beq cr6,0x825aad5c
	if (cr6.eq) goto loc_825AAD5C;
loc_825AAA84:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r22,r31,872
	ctx.r22.s64 = ctx.r31.s64 + 872;
	// lbz r10,876(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 876);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825aaaac
	if (!cr6.eq) goto loc_825AAAAC;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x825a94f0
	ctx.lr = 0x825AAAAC;
	sub_825A94F0(ctx, base);
loc_825AAAAC:
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aaac8
	if (!cr6.eq) goto loc_825AAAC8;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,6684
	ctx.r10.s64 = ctx.r11.s64 + 6684;
	// stw r10,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r10.u32);
loc_825AAAC8:
	// lbz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 836);
	// addi r21,r31,832
	ctx.r21.s64 = ctx.r31.s64 + 832;
	// lwz r27,16(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aaae4
	if (!cr6.eq) goto loc_825AAAE4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x825aa158
	ctx.lr = 0x825AAAE4;
	sub_825AA158(ctx, base);
loc_825AAAE4:
	// lwz r11,12(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aab00
	if (!cr6.eq) goto loc_825AAB00;
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r10.u32);
loc_825AAB00:
	// lwz r11,12(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x825aace8
	if (cr6.eq) goto loc_825AACE8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825aace8
	if (cr6.eq) goto loc_825AACE8;
	// addi r10,r26,-1
	ctx.r10.s64 = ctx.r26.s64 + -1;
	// add r23,r11,r18
	ctx.r23.u64 = ctx.r11.u64 + ctx.r18.u64;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r25,r7,r16
	ctx.r25.u64 = ctx.r7.u64 & ctx.r16.u64;
	// bl 0x82917b90
	ctx.lr = 0x825AAB30;
	sub_82917B90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a163f0
	ctx.lr = 0x825AAB3C;
	sub_82A163F0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_825AAB44:
	// cmpwi cr6,r15,11
	cr6.compare<int32_t>(ctx.r15.s32, 11, xer);
	// beq cr6,0x825aab54
	if (cr6.eq) goto loc_825AAB54;
	// cmpw cr6,r15,r31
	cr6.compare<int32_t>(ctx.r15.s32, ctx.r31.s32, xer);
	// bne cr6,0x825aacdc
	if (!cr6.eq) goto loc_825AACDC;
loc_825AAB54:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// bl 0x82917550
	ctx.lr = 0x825AAB6C;
	sub_82917550(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825aab78
	if (!cr6.eq) goto loc_825AAB78;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_825AAB78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a16490
	ctx.lr = 0x825AAB84;
	sub_82A16490(ctx, base);
	// bl 0x83530640
	ctx.lr = 0x825AAB88;
	sub_83530640(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x825aa4a0
	ctx.lr = 0x825AABA8;
	sub_825AA4A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x831ce980
	ctx.lr = 0x825AABB8;
	sub_831CE980(ctx, base);
	// mulli r11,r26,11
	ctx.r11.s64 = ctx.r26.s64 * 11;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aabe8
	if (!cr6.eq) goto loc_825AABE8;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x825aac10
	goto loc_825AAC10;
loc_825AABE8:
	// lhz r8,0(r19)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r19.u32 + 0);
	// lhz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x825aac08
	if (!cr6.eq) goto loc_825AAC08;
	// lwz r10,4(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// beq cr6,0x825aac0c
	if (cr6.eq) goto loc_825AAC0C;
loc_825AAC08:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_825AAC0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_825AAC10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aac70
	if (!cr6.eq) goto loc_825AAC70;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aac38
	if (!cr6.eq) goto loc_825AAC38;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x825aac60
	goto loc_825AAC60;
loc_825AAC38:
	// lhz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// lhz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x825aac58
	if (!cr6.eq) goto loc_825AAC58;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// beq cr6,0x825aac5c
	if (cr6.eq) goto loc_825AAC5C;
loc_825AAC58:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_825AAC5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_825AAC60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aac70
	if (!cr6.eq) goto loc_825AAC70;
	// bl 0x82911568
	ctx.lr = 0x825AAC70;
	sub_82911568(ctx, base);
loc_825AAC70:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r30,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r30.u8);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x831ce980
	ctx.lr = 0x825AAC84;
	sub_831CE980(ctx, base);
	// ld r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// ld r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// ld r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// ld r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// bl 0x82939c90
	ctx.lr = 0x825AACA8;
	sub_82939C90(ctx, base);
	// subf r11,r24,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r24.s64;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82936ed0
	ctx.lr = 0x825AACBC;
	sub_82936ED0(ctx, base);
	// add r30,r31,r27
	ctx.r30.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lbz r9,6668(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6668);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825aacdc
	if (cr6.eq) goto loc_825AACDC;
	// addi r4,r28,132
	ctx.r4.s64 = ctx.r28.s64 + 132;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// bl 0x8293e1b0
	ctx.lr = 0x825AACD8;
	sub_8293E1B0(ctx, base);
	// stb r20,6668(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6668, ctx.r20.u8);
loc_825AACDC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x825aab44
	if (cr6.lt) goto loc_825AAB44;
loc_825AACE8:
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825aad4c
	if (cr6.eq) goto loc_825AAD4C;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_825AACFC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r17,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r17.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825aacfc
	if (!cr0.eq) goto loc_825AACFC;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825aad48
	if (!cr6.eq) goto loc_825AAD48;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825AAD28;
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
	ctx.lr = 0x825AAD48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AAD48:
	// stw r20,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r20.u32);
loc_825AAD4C:
	// lwz r11,12(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825aad5c
	if (cr6.eq) goto loc_825AAD5C;
	// stw r20,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r20.u32);
loc_825AAD5C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// blt cr6,0x825aaa64
	if (cr6.lt) goto loc_825AAA64;
	// cmpwi cr6,r14,2
	cr6.compare<int32_t>(ctx.r14.s32, 2, xer);
	// blt cr6,0x825aad80
	if (cr6.lt) goto loc_825AAD80;
	// cmpwi cr6,r15,11
	cr6.compare<int32_t>(ctx.r15.s32, 11, xer);
	// blt cr6,0x825aad80
	if (cr6.lt) goto loc_825AAD80;
	// bl 0x8378cba8
	ctx.lr = 0x825AAD7C;
	sub_8378CBA8(ctx, base);
	// bl 0x8378cc90
	ctx.lr = 0x825AAD80;
	sub_8378CC90(ctx, base);
loc_825AAD80:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AAD88"))) PPC_WEAK_FUNC(sub_825AAD88);
PPC_FUNC_IMPL(__imp__sub_825AAD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x825AAD90;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r31,r3,848
	ctx.r31.s64 = ctx.r3.s64 + 848;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// ori r25,r11,44768
	ctx.r25.u64 = ctx.r11.u64 | 44768;
	// ori r27,r10,34548
	ctx.r27.u64 = ctx.r10.u64 | 34548;
loc_825AADB8:
	// lbz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aae08
	if (!cr6.eq) goto loc_825AAE08;
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r30,r31,-16
	ctx.r30.s64 = ctx.r31.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AADDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,-16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825AADF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x825a9f08
	ctx.lr = 0x825AAE04;
	sub_825A9F08(ctx, base);
	// stb r28,-12(r31)
	PPC_STORE_U8(ctx.r31.u32 + -12, ctx.r28.u8);
loc_825AAE08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aae24
	if (!cr6.eq) goto loc_825AAE24;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_825AAE24:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829174a8
	ctx.lr = 0x825AAE34;
	sub_829174A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r3,r30,r27
	ctx.r3.u64 = ctx.r30.u64 + ctx.r27.u64;
	// bl 0x825a23f8
	ctx.lr = 0x825AAE40;
	sub_825A23F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825aaea4
	if (cr6.eq) goto loc_825AAEA4;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
loc_825AAE54:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r28,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825aae54
	if (!cr0.eq) goto loc_825AAE54;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825aaea0
	if (!cr6.eq) goto loc_825AAEA0;
	// lwz r23,8(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825AAE80;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,29056
	ctx.r5.s64 = ctx.r11.s64 + 29056;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825AAEA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AAEA0:
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
loc_825AAEA4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x825aadb8
	if (cr6.lt) goto loc_825AADB8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AAEBC"))) PPC_WEAK_FUNC(sub_825AAEBC);
PPC_FUNC_IMPL(__imp__sub_825AAEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AAEC0"))) PPC_WEAK_FUNC(sub_825AAEC0);
PPC_FUNC_IMPL(__imp__sub_825AAEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x825AAEC8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r31,r3,848
	ctx.r31.s64 = ctx.r3.s64 + 848;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// ori r25,r11,44768
	ctx.r25.u64 = ctx.r11.u64 | 44768;
	// ori r29,r10,39088
	ctx.r29.u64 = ctx.r10.u64 | 39088;
loc_825AAEF0:
	// lbz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aaf40
	if (!cr6.eq) goto loc_825AAF40;
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r30,r31,-16
	ctx.r30.s64 = ctx.r31.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AAF14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,-16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825AAF2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x825a9f08
	ctx.lr = 0x825AAF3C;
	sub_825A9F08(ctx, base);
	// stb r26,-12(r31)
	PPC_STORE_U8(ctx.r31.u32 + -12, ctx.r26.u8);
loc_825AAF40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aaf5c
	if (!cr6.eq) goto loc_825AAF5C;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_825AAF5C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829174e0
	ctx.lr = 0x825AAF6C;
	sub_829174E0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_825AAF80:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stbu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x825aaf80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825AAF80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825aaff0
	if (cr6.eq) goto loc_825AAFF0;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
loc_825AAFA0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r26,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825aafa0
	if (!cr0.eq) goto loc_825AAFA0;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825aafec
	if (!cr6.eq) goto loc_825AAFEC;
	// lwz r23,8(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825AAFCC;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,29056
	ctx.r5.s64 = ctx.r11.s64 + 29056;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825AAFEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AAFEC:
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
loc_825AAFF0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// blt cr6,0x825aaef0
	if (cr6.lt) goto loc_825AAEF0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AB008"))) PPC_WEAK_FUNC(sub_825AB008);
PPC_FUNC_IMPL(__imp__sub_825AB008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x825AB010;
	__savegprlr_19(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r23,-31763
	ctx.r23.s64 = -2081619968;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-3564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// lwz r24,292(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r4,5360(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 5360);
	// bl 0x82a0c710
	ctx.lr = 0x825AB030;
	sub_82A0C710(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// addi r22,r11,-30540
	ctx.r22.s64 = ctx.r11.s64 + -30540;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r22,-3397
	ctx.r4.s64 = ctx.r22.s64 + -3397;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x825AB060;
	sub_8259CC28(ctx, base);
	// clrlwi r20,r31,24
	ctx.r20.u64 = ctx.r31.u32 & 0xFF;
	// li r21,1
	ctx.r21.s64 = 1;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// bne cr6,0x825ab178
	if (!cr6.eq) goto loc_825AB178;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r28,r19,848
	ctx.r28.s64 = ctx.r19.s64 + 848;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// ori r27,r11,44768
	ctx.r27.u64 = ctx.r11.u64 | 44768;
loc_825AB08C:
	// lbz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ab0a0
	if (!cr6.eq) goto loc_825AB0A0;
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// bl 0x825aa158
	ctx.lr = 0x825AB0A0;
	sub_825AA158(ctx, base);
loc_825AB0A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ab0bc
	if (!cr6.eq) goto loc_825AB0BC;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_825AB0BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// stwu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
	// bne 0x825ab08c
	if (!cr0.eq) goto loc_825AB08C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// ori r11,r11,33400
	ctx.r11.u64 = ctx.r11.u64 | 33400;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r11,3612
	ctx.r3.s64 = ctx.r11.s64 + 3612;
	// stbx r26,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r26.u8);
	// stbx r26,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r26.u8);
	// bl 0x82a13bc0
	ctx.lr = 0x825AB0F8;
	sub_82A13BC0(ctx, base);
	// addi r3,r31,3612
	ctx.r3.s64 = ctx.r31.s64 + 3612;
	// bl 0x82a13bc0
	ctx.lr = 0x825AB100;
	sub_82A13BC0(ctx, base);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r29,2
	ctx.r29.s64 = 2;
loc_825AB108:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ab16c
	if (cr6.eq) goto loc_825AB16C;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
loc_825AB11C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r21,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r21.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825ab11c
	if (!cr0.eq) goto loc_825AB11C;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825ab168
	if (!cr6.eq) goto loc_825AB168;
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825AB148;
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
	ctx.lr = 0x825AB168;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AB168:
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825AB16C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x825ab108
	if (!cr0.eq) goto loc_825AB108;
loc_825AB178:
	// lwz r11,5356(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 5356);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x825ab4b8
	if (cr6.gt) goto loc_825AB4B8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x825ab4b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825AB4B8;
	// bdzf 4*cr6+eq,0x825ab4b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825AB4B8;
	// bdzf 4*cr6+eq,0x825ab3a8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825AB3A8;
	// bdzf 4*cr6+eq,0x825ab41c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825AB41C;
	// bne cr6,0x825ab334
	if (!cr6.eq) goto loc_825AB334;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// bne cr6,0x825ab1e0
	if (!cr6.eq) goto loc_825AB1E0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r11,33624
	ctx.r7.u64 = ctx.r11.u64 | 33624;
	// ori r5,r9,33630
	ctx.r5.u64 = ctx.r9.u64 | 33630;
	// ori r6,r10,33627
	ctx.r6.u64 = ctx.r10.u64 | 33627;
	// ori r3,r8,33633
	ctx.r3.u64 = ctx.r8.u64 | 33633;
	// lbzx r4,r25,r7
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r7.u32);
	// lbzx r11,r25,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r5.u32);
	// lbzx r7,r25,r6
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r6.u32);
	// lbzx r9,r25,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r3.u32);
	// b 0x825ab23c
	goto loc_825AB23C;
loc_825AB1E0:
	// lwz r11,5360(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 5360);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x825ab1fc
	if (cr6.eq) goto loc_825AB1FC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x825ab1fc
	if (cr6.eq) goto loc_825AB1FC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x825ab204
	goto loc_825AB204;
loc_825AB1FC:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_825AB204:
	// lwz r3,-3564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x825AB20C;
	sub_82A0C710(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r11,33624
	ctx.r7.u64 = ctx.r11.u64 | 33624;
	// ori r6,r10,33627
	ctx.r6.u64 = ctx.r10.u64 | 33627;
	// ori r5,r9,33630
	ctx.r5.u64 = ctx.r9.u64 | 33630;
	// ori r10,r8,33633
	ctx.r10.u64 = ctx.r8.u64 | 33633;
	// lbzx r4,r3,r7
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// lbzx r7,r3,r6
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r6.u32);
	// lbzx r11,r3,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r5.u32);
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
loc_825AB23C:
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bne cr6,0x825ab264
	if (!cr6.eq) goto loc_825AB264;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825ab264
	if (!cr6.eq) goto loc_825AB264;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_825AB264:
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add. r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825ab290
	if (!cr0.eq) goto loc_825AB290;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
loc_825AB290:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// addi r10,r22,4956
	ctx.r10.s64 = ctx.r22.s64 + 4956;
	// beq cr6,0x825ab2a0
	if (cr6.eq) goto loc_825AB2A0;
	// addi r10,r22,4964
	ctx.r10.s64 = ctx.r22.s64 + 4964;
loc_825AB2A0:
	// addi r8,r22,4948
	ctx.r8.s64 = ctx.r22.s64 + 4948;
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r5,r22,4972
	ctx.r5.s64 = ctx.r22.s64 + 4972;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x831d0b08
	ctx.lr = 0x825AB2C8;
	sub_831D0B08(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x83104018
	ctx.lr = 0x825AB2D0;
	sub_83104018(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x825ab314
	if (!cr6.eq) goto loc_825AB314;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// addi r10,r22,5044
	ctx.r10.s64 = ctx.r22.s64 + 5044;
	// beq cr6,0x825ab2ec
	if (cr6.eq) goto loc_825AB2EC;
	// addi r10,r22,5052
	ctx.r10.s64 = ctx.r22.s64 + 5052;
loc_825AB2EC:
	// addi r11,r22,5036
	ctx.r11.s64 = ctx.r22.s64 + 5036;
	// addi r5,r22,5060
	ctx.r5.s64 = ctx.r22.s64 + 5060;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x831d0b08
	ctx.lr = 0x825AB314;
	sub_831D0B08(ctx, base);
loc_825AB314:
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825AB31C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825ab31c
	if (!cr6.eq) goto loc_825AB31C;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// b 0x825ab4a4
	goto loc_825AB4A4;
loc_825AB334:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// bne cr6,0x825ab4b8
	if (!cr6.eq) goto loc_825AB4B8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,33624
	ctx.r10.u64 = ctx.r11.u64 | 33624;
	// lbzx r11,r25,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r10.u32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x825ab4b8
	if (cr6.gt) goto loc_825AB4B8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x825ab378
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825AB378;
	// bdzf 4*cr6+eq,0x825ab388
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825AB388;
	// bne cr6,0x825ab398
	if (!cr6.eq) goto loc_825AB398;
	// addi r4,r22,5124
	ctx.r4.s64 = ctx.r22.s64 + 5124;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d6c0
	ctx.lr = 0x825AB374;
	sub_8259D6C0(ctx, base);
	// b 0x825ab4b8
	goto loc_825AB4B8;
loc_825AB378:
	// addi r4,r22,5172
	ctx.r4.s64 = ctx.r22.s64 + 5172;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d6c0
	ctx.lr = 0x825AB384;
	sub_8259D6C0(ctx, base);
	// b 0x825ab4b8
	goto loc_825AB4B8;
loc_825AB388:
	// addi r4,r22,5220
	ctx.r4.s64 = ctx.r22.s64 + 5220;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d6c0
	ctx.lr = 0x825AB394;
	sub_8259D6C0(ctx, base);
	// b 0x825ab4b8
	goto loc_825AB4B8;
loc_825AB398:
	// addi r4,r22,5268
	ctx.r4.s64 = ctx.r22.s64 + 5268;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d6c0
	ctx.lr = 0x825AB3A4;
	sub_8259D6C0(ctx, base);
	// b 0x825ab4b8
	goto loc_825AB4B8;
loc_825AB3A8:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// bne cr6,0x825ab4b8
	if (!cr6.eq) goto loc_825AB4B8;
	// addi r8,r22,5316
	ctx.r8.s64 = ctx.r22.s64 + 5316;
	// lbz r7,1369(r25)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1369);
	// addi r5,r22,-504
	ctx.r5.s64 = ctx.r22.s64 + -504;
	// lbz r6,1368(r25)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1368);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831d0b08
	ctx.lr = 0x825AB3CC;
	sub_831D0B08(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83104018
	ctx.lr = 0x825AB3D4;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ab3fc
	if (!cr6.eq) goto loc_825AB3FC;
	// addi r8,r22,5324
	ctx.r8.s64 = ctx.r22.s64 + 5324;
	// addi r5,r22,-336
	ctx.r5.s64 = ctx.r22.s64 + -336;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831d0b08
	ctx.lr = 0x825AB3FC;
	sub_831D0B08(ctx, base);
loc_825AB3FC:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825AB404:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825ab404
	if (!cr6.eq) goto loc_825AB404;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// b 0x825ab4a4
	goto loc_825AB4A4;
loc_825AB41C:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// bne cr6,0x825ab4b8
	if (!cr6.eq) goto loc_825AB4B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r19,132
	ctx.r3.s64 = ctx.r19.s64 + 132;
	// bl 0x82a1f508
	ctx.lr = 0x825AB430;
	sub_82A1F508(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ab4b8
	if (cr6.eq) goto loc_825AB4B8;
	// addi r8,r22,5332
	ctx.r8.s64 = ctx.r22.s64 + 5332;
	// lbz r7,1369(r25)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1369);
	// addi r5,r22,-168
	ctx.r5.s64 = ctx.r22.s64 + -168;
	// lbz r6,1368(r25)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1368);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x831d0b08
	ctx.lr = 0x825AB458;
	sub_831D0B08(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83104018
	ctx.lr = 0x825AB460;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ab488
	if (!cr6.eq) goto loc_825AB488;
	// addi r8,r22,5340
	ctx.r8.s64 = ctx.r22.s64 + 5340;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x831d0b08
	ctx.lr = 0x825AB488;
	sub_831D0B08(ctx, base);
loc_825AB488:
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825AB490:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825ab490
	if (!cr6.eq) goto loc_825AB490;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
loc_825AB4A4:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x825AB4B8;
	sub_8259CC28(ctx, base);
loc_825AB4B8:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ab4e4
	if (cr6.eq) goto loc_825AB4E4;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x825ab4d8
	if (!cr6.lt) goto loc_825AB4D8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_825AB4D8:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825baf88
	ctx.lr = 0x825AB4E0;
	sub_825BAF88(ctx, base);
	// stw r3,940(r19)
	PPC_STORE_U32(ctx.r19.u32 + 940, ctx.r3.u32);
loc_825AB4E4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825ab504
	if (cr6.lt) goto loc_825AB504;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x825AB504;
	sub_825952B8(ctx, base);
loc_825AB504:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AB50C"))) PPC_WEAK_FUNC(sub_825AB50C);
PPC_FUNC_IMPL(__imp__sub_825AB50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AB510"))) PPC_WEAK_FUNC(sub_825AB510);
PPC_FUNC_IMPL(__imp__sub_825AB510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x825AB518;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,940(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 940);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ab6b8
	if (cr6.eq) goto loc_825AB6B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825bb198
	ctx.lr = 0x825AB534;
	sub_825BB198(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ab54c
	if (!cr6.eq) goto loc_825AB54C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_825AB54C:
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// lwz r11,940(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 940);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
	// addi r26,r24,848
	ctx.r26.s64 = ctx.r24.s64 + 848;
	// addi r29,r10,-4
	ctx.r29.s64 = ctx.r10.s64 + -4;
	// lwz r11,-3564(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3564);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r25,292(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r28,r11,44768
	ctx.r28.u64 = ctx.r11.u64 | 44768;
loc_825AB57C:
	// lbz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ab590
	if (!cr6.eq) goto loc_825AB590;
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// bl 0x825aa158
	ctx.lr = 0x825AB590;
	sub_825AA158(ctx, base);
loc_825AB590:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ab5ac
	if (!cr6.eq) goto loc_825AB5AC;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_825AB5AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// stwu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
	// bne 0x825ab57c
	if (!cr0.eq) goto loc_825AB57C;
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// ori r30,r11,35747
	ctx.r30.u64 = ctx.r11.u64 | 35747;
loc_825AB5D0:
	// mulhwu r11,r31,r30
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mulli r9,r10,22
	ctx.r9.s64 = ctx.r10.s64 * 22;
	// subf r8,r9,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r9.s64;
	// mulli r11,r8,1296
	ctx.r11.s64 = ctx.r8.s64 * 1296;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r6,r11,120
	ctx.r6.s64 = ctx.r11.s64 + 120;
	// lbz r7,120(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 120);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825ab608
	if (cr6.eq) goto loc_825AB608;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825a2df8
	ctx.lr = 0x825AB608;
	sub_825A2DF8(ctx, base);
loc_825AB608:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,22
	cr6.compare<uint32_t>(ctx.r31.u32, 22, xer);
	// blt cr6,0x825ab5d0
	if (cr6.lt) goto loc_825AB5D0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r29,1
	ctx.r29.s64 = 1;
	// ori r11,r11,33400
	ctx.r11.u64 = ctx.r11.u64 | 33400;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// stbx r29,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u8);
	// stbx r29,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r29.u8);
loc_825AB63C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ab6a0
	if (cr6.eq) goto loc_825AB6A0;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
loc_825AB650:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r29,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825ab650
	if (!cr0.eq) goto loc_825AB650;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825ab69c
	if (!cr6.eq) goto loc_825AB69C;
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825AB67C;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,29056
	ctx.r5.s64 = ctx.r11.s64 + 29056;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825AB69C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AB69C:
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
loc_825AB6A0:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x825ab63c
	if (!cr0.eq) goto loc_825AB63C;
	// lwz r3,940(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 940);
	// bl 0x825bb070
	ctx.lr = 0x825AB6B4;
	sub_825BB070(ctx, base);
	// stw r23,940(r24)
	PPC_STORE_U32(ctx.r24.u32 + 940, ctx.r23.u32);
loc_825AB6B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AB6C4"))) PPC_WEAK_FUNC(sub_825AB6C4);
PPC_FUNC_IMPL(__imp__sub_825AB6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AB6C8"))) PPC_WEAK_FUNC(sub_825AB6C8);
PPC_FUNC_IMPL(__imp__sub_825AB6C8) {
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
	// bne cr6,0x825ab72c
	if (!cr6.eq) goto loc_825AB72C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AB6FC;
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
	ctx.lr = 0x825AB714;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825aa838
	ctx.lr = 0x825AB724;
	sub_825AA838(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825AB72C:
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

__attribute__((alias("__imp__sub_825AB744"))) PPC_WEAK_FUNC(sub_825AB744);
PPC_FUNC_IMPL(__imp__sub_825AB744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AB748"))) PPC_WEAK_FUNC(sub_825AB748);
PPC_FUNC_IMPL(__imp__sub_825AB748) {
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
	// bne cr6,0x825ab76c
	if (!cr6.eq) goto loc_825AB76C;
	// bl 0x825ab6c8
	ctx.lr = 0x825AB76C;
	sub_825AB6C8(ctx, base);
loc_825AB76C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ab788
	if (!cr6.eq) goto loc_825AB788;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_825AB788:
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

__attribute__((alias("__imp__sub_825AB7A0"))) PPC_WEAK_FUNC(sub_825AB7A0);
PPC_FUNC_IMPL(__imp__sub_825AB7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x825AB7A8;
	__savegprlr_20(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-24600
	ctx.r10.s64 = ctx.r11.s64 + -24600;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r29,r3,132
	ctx.r29.s64 = ctx.r3.s64 + 132;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r4,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r4.u32);
	// bl 0x82a0db20
	ctx.lr = 0x825AB7E4;
	sub_82A0DB20(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r30,776(r31)
	PPC_STORE_U8(ctx.r31.u32 + 776, ctx.r30.u8);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r7,r9,-24692
	ctx.r7.s64 = ctx.r9.s64 + -24692;
	// stw r30,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r30.u32);
	// stw r30,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r30.u32);
	// addi r6,r8,-24672
	ctx.r6.s64 = ctx.r8.s64 + -24672;
	// stw r7,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r7.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r30,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r30.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stb r30,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r30.u8);
	// addi r3,r5,-24656
	ctx.r3.s64 = ctx.r5.s64 + -24656;
	// stw r30,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r30.u32);
	// addi r10,r4,-22152
	ctx.r10.s64 = ctx.r4.s64 + -22152;
	// stw r6,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r6.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r30,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r30.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r30,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r30.u32);
	// addi r7,r9,-22152
	ctx.r7.s64 = ctx.r9.s64 + -22152;
	// stb r30,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r30.u8);
	// addi r6,r8,-24636
	ctx.r6.s64 = ctx.r8.s64 + -24636;
	// stw r30,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r30.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r3,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r3.u32);
	// addi r26,r31,772
	ctx.r26.s64 = ctx.r31.s64 + 772;
	// stw r30,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r30.u32);
	// addi r25,r31,792
	ctx.r25.s64 = ctx.r31.s64 + 792;
	// stw r30,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r30.u32);
	// addi r24,r31,812
	ctx.r24.s64 = ctx.r31.s64 + 812;
	// stb r30,836(r31)
	PPC_STORE_U8(ctx.r31.u32 + 836, ctx.r30.u8);
	// addi r23,r31,912
	ctx.r23.s64 = ctx.r31.s64 + 912;
	// stw r30,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r30.u32);
	// stw r10,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r10.u32);
	// stw r30,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r30.u32);
	// stw r30,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r30.u32);
	// stb r30,856(r31)
	PPC_STORE_U8(ctx.r31.u32 + 856, ctx.r30.u8);
	// stw r30,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r30.u32);
	// stw r30,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r30.u32);
	// stw r30,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r30.u32);
	// stw r10,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r10.u32);
	// stb r30,876(r31)
	PPC_STORE_U8(ctx.r31.u32 + 876, ctx.r30.u8);
	// stw r30,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r30.u32);
	// stw r7,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r7.u32);
	// stw r30,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r30.u32);
	// stw r30,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r30.u32);
	// stb r30,896(r31)
	PPC_STORE_U8(ctx.r31.u32 + 896, ctx.r30.u8);
	// stw r30,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r30.u32);
	// stw r30,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r30.u32);
	// stw r30,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r30.u32);
	// stw r7,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r7.u32);
	// stb r30,916(r31)
	PPC_STORE_U8(ctx.r31.u32 + 916, ctx.r30.u8);
	// stw r30,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r30.u32);
	// stw r6,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r6.u32);
	// stw r30,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r30.u32);
	// stw r30,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r30.u32);
	// stw r30,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r30.u32);
	// stw r30,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r30.u32);
	// stw r30,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r30.u32);
	// stw r11,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r11.u32);
	// stw r30,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r30.u32);
	// stb r30,944(r31)
	PPC_STORE_U8(ctx.r31.u32 + 944, ctx.r30.u8);
	// stw r11,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r11.u32);
	// stw r30,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r30.u32);
	// stb r30,972(r31)
	PPC_STORE_U8(ctx.r31.u32 + 972, ctx.r30.u8);
	// stw r30,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r30.u32);
	// stw r30,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r30.u32);
	// stw r30,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r30.u32);
	// stw r30,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r30.u32);
	// stw r30,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r30.u32);
	// stw r30,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r30.u32);
	// stw r30,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r30.u32);
	// stb r30,1040(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1040, ctx.r30.u8);
loc_825AB914:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825AB918:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// stwx r30,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u32);
	// blt cr6,0x825ab918
	if (cr6.lt) goto loc_825AB918;
	// addi r9,r9,11
	ctx.r9.s64 = ctx.r9.s64 + 11;
	// cmpwi cr6,r9,22
	cr6.compare<int32_t>(ctx.r9.s32, 22, xer);
	// blt cr6,0x825ab914
	if (cr6.lt) goto loc_825AB914;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// bl 0x82a22560
	ctx.lr = 0x825AB960;
	sub_82A22560(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a22540
	ctx.lr = 0x825AB968;
	sub_82A22540(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a125c8
	ctx.lr = 0x825AB974;
	sub_82A125C8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r27,r10,-25152
	ctx.r27.s64 = ctx.r10.s64 + -25152;
	// addi r22,r9,-25140
	ctx.r22.s64 = ctx.r9.s64 + -25140;
	// addi r21,r8,-25136
	ctx.r21.s64 = ctx.r8.s64 + -25136;
loc_825AB998:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r29,r10,832
	ctx.r29.s64 = ctx.r10.s64 + 832;
	// lbz r9,836(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 836);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825ab9f0
	if (!cr6.eq) goto loc_825AB9F0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AB9CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a145d8
	ctx.lr = 0x825AB9D8;
	sub_82A145D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x825a9f08
	ctx.lr = 0x825AB9E8;
	sub_825A9F08(ctx, base);
	// stb r28,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r28.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825AB9F0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r29,r10,872
	ctx.r29.s64 = ctx.r10.s64 + 872;
	// lbz r9,876(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 876);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825aba5c
	if (!cr6.eq) goto loc_825ABA5C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// beq cr6,0x825aba20
	if (cr6.eq) goto loc_825ABA20;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
loc_825ABA20:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831d0b08
	ctx.lr = 0x825ABA30;
	sub_831D0B08(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825ABA44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a93f0
	ctx.lr = 0x825ABA54;
	sub_825A93F0(ctx, base);
	// stb r28,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r28.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825ABA5C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x825ab998
	if (cr6.lt) goto loc_825AB998;
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825abab8
	if (!cr6.eq) goto loc_825ABAB8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825ABA8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825ABAA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825aa838
	ctx.lr = 0x825ABAB4;
	sub_825AA838(ctx, base);
	// stb r28,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r28.u8);
loc_825ABAB8:
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825abb04
	if (!cr6.eq) goto loc_825ABB04;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825ABAD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825ABAF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825a9570
	ctx.lr = 0x825ABB00;
	sub_825A9570(ctx, base);
	// stb r28,4(r25)
	PPC_STORE_U8(ctx.r25.u32 + 4, ctx.r28.u8);
loc_825ABB04:
	// lbz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825abb50
	if (!cr6.eq) goto loc_825ABB50;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825ABB24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825ABB3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825a9668
	ctx.lr = 0x825ABB4C;
	sub_825A9668(ctx, base);
	// stb r28,4(r24)
	PPC_STORE_U8(ctx.r24.u32 + 4, ctx.r28.u8);
loc_825ABB50:
	// lbz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825abb9c
	if (!cr6.eq) goto loc_825ABB9C;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825ABB70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825ABB88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825a9760
	ctx.lr = 0x825ABB98;
	sub_825A9760(ctx, base);
	// stb r28,4(r23)
	PPC_STORE_U8(ctx.r23.u32 + 4, ctx.r28.u8);
loc_825ABB9C:
	// bl 0x835f8988
	ctx.lr = 0x825ABBA0;
	sub_835F8988(ctx, base);
	// bl 0x8379f908
	ctx.lr = 0x825ABBA4;
	sub_8379F908(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// stw r30,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r30.u32);
	// addi r29,r11,-3088
	ctx.r29.s64 = ctx.r11.s64 + -3088;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// bl 0x82a0c6e8
	ctx.lr = 0x825ABBB8;
	sub_82A0C6E8(ctx, base);
	// stw r3,148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 148, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r30.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ABBCC"))) PPC_WEAK_FUNC(sub_825ABBCC);
PPC_FUNC_IMPL(__imp__sub_825ABBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ABBD0"))) PPC_WEAK_FUNC(sub_825ABBD0);
PPC_FUNC_IMPL(__imp__sub_825ABBD0) {
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
	// bl 0x825aa638
	ctx.lr = 0x825ABBF0;
	sub_825AA638(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aad88
	ctx.lr = 0x825ABBFC;
	sub_825AAD88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aaec0
	ctx.lr = 0x825ABC08;
	sub_825AAEC0(ctx, base);
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

__attribute__((alias("__imp__sub_825ABC20"))) PPC_WEAK_FUNC(sub_825ABC20);
PPC_FUNC_IMPL(__imp__sub_825ABC20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x825ABC28;
	__savegprlr_14(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,776(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 776);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// addi r31,r3,772
	ctx.r31.s64 = ctx.r3.s64 + 772;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825abc4c
	if (!cr6.eq) goto loc_825ABC4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x825ABC4C;
	sub_825AB6C8(ctx, base);
loc_825ABC4C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825abc68
	if (!cr6.eq) goto loc_825ABC68;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_825ABC68:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r15,0
	ctx.r15.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825abc7c
	if (cr6.eq) goto loc_825ABC7C;
	// stw r15,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r15.u32);
loc_825ABC7C:
	// bl 0x83572958
	ctx.lr = 0x825ABC80;
	sub_83572958(ctx, base);
	// li r18,32
	ctx.r18.s64 = 32;
	// lwz r11,128(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 128);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,692
	ctx.r4.s64 = 692;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// bl 0x82595718
	ctx.lr = 0x825ABCA4;
	sub_82595718(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r20,r11,-31596
	ctx.r20.s64 = ctx.r11.s64 + -31596;
	// beq cr6,0x825abf60
	if (cr6.eq) goto loc_825ABF60;
	// bl 0x825b8158
	ctx.lr = 0x825ABCB8;
	sub_825B8158(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825abcfc
	if (cr6.eq) goto loc_825ABCFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825b9870
	ctx.lr = 0x825ABCCC;
	sub_825B9870(ctx, base);
	// addi r11,r20,5852
	ctx.r11.s64 = ctx.r20.s64 + 5852;
	// li r10,13
	ctx.r10.s64 = 13;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825ABCFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825ABCFC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825a8408
	ctx.lr = 0x825ABD0C;
	sub_825A8408(ctx, base);
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 1;
	// bl 0x82595718
	ctx.lr = 0x825ABD28;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r19,4
	ctx.r19.s64 = 4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825abf68
	if (cr6.eq) goto loc_825ABF68;
	// bl 0x825a82c8
	ctx.lr = 0x825ABD3C;
	sub_825A82C8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-24732
	ctx.r9.s64 = ctx.r11.s64 + -24732;
	// addi r8,r10,-24752
	ctx.r8.s64 = ctx.r10.s64 + -24752;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// stw r7,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83537ae8
	ctx.lr = 0x825ABD68;
	sub_83537AE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r16,r31
	ctx.r16.u64 = ctx.r31.u64;
	// bl 0x825b9870
	ctx.lr = 0x825ABD78;
	sub_825B9870(ctx, base);
	// addi r11,r20,5884
	ctx.r11.s64 = ctx.r20.s64 + 5884;
	// stw r19,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r19.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825ABDA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825ABDA4:
	// stw r18,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82595718
	ctx.lr = 0x825ABDBC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825abf70
	if (cr6.eq) goto loc_825ABF70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825b9c08
	ctx.lr = 0x825ABDCC;
	sub_825B9C08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825abe0c
	if (cr6.eq) goto loc_825ABE0C;
	// bl 0x825b9ac8
	ctx.lr = 0x825ABDDC;
	sub_825B9AC8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r20,5916
	ctx.r10.s64 = ctx.r20.s64 + 5916;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r10,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825ABE0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825ABE0C:
	// stw r31,1024(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1024, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// li r4,1708
	ctx.r4.s64 = 1708;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 1;
	// bl 0x82595718
	ctx.lr = 0x825ABE28;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825abf78
	if (cr6.eq) goto loc_825ABF78;
	// bl 0x825b8c90
	ctx.lr = 0x825ABE34;
	sub_825B8C90(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825abe70
	if (cr6.eq) goto loc_825ABE70;
	// addi r11,r20,5924
	ctx.r11.s64 = ctx.r20.s64 + 5924;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825ABE70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825ABE70:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825ABE90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 1;
	// lwz r3,2056(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2056);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,68(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x825ABEB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x825abedc
	if (!cr6.eq) goto loc_825ABEDC;
	// lwz r4,1000(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1000);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825abedc
	if (cr6.eq) goto loc_825ABEDC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825ABEDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825ABEDC:
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// lis r23,-31780
	ctx.r23.s64 = -2082734080;
loc_825ABEE8:
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
loc_825ABEEC:
	// lwz r11,23440(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 23440);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// divwu r8,r15,r11
	ctx.r8.u32 = PPCDivide(ctx.r15.u32, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// twllei r11,0
	// subf. r6,r7,r15
	ctx.r6.s64 = ctx.r15.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x825abfd4
	if (!cr0.eq) goto loc_825ABFD4;
	// stw r18,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82595718
	ctx.lr = 0x825ABF20;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825abf80
	if (cr6.eq) goto loc_825ABF80;
	// bl 0x825b8a60
	ctx.lr = 0x825ABF2C;
	sub_825B8A60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825abfbc
	if (cr6.eq) goto loc_825ABFBC;
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82595718
	ctx.lr = 0x825ABF4C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825abf88
	if (cr6.eq) goto loc_825ABF88;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x825ae278
	ctx.lr = 0x825ABF5C;
	sub_825AE278(ctx, base);
	// b 0x825abf8c
	goto loc_825ABF8C;
loc_825ABF60:
	// mr r14,r15
	ctx.r14.u64 = ctx.r15.u64;
	// b 0x825abcfc
	goto loc_825ABCFC;
loc_825ABF68:
	// mr r16,r15
	ctx.r16.u64 = ctx.r15.u64;
	// b 0x825abda4
	goto loc_825ABDA4;
loc_825ABF70:
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// b 0x825abe0c
	goto loc_825ABE0C;
loc_825ABF78:
	// mr r22,r15
	ctx.r22.u64 = ctx.r15.u64;
	// b 0x825abe70
	goto loc_825ABE70;
loc_825ABF80:
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// b 0x825abfbc
	goto loc_825ABFBC;
loc_825ABF88:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_825ABF8C:
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// addi r11,r20,5844
	ctx.r11.s64 = ctx.r20.s64 + 5844;
	// stw r19,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r19.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825ABFBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825ABFBC:
	// addi r31,r27,1
	ctx.r31.s64 = ctx.r27.s64 + 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825a8408
	ctx.lr = 0x825ABFCC;
	sub_825A8408(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 1;
loc_825ABFD4:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x825ac000
	if (cr6.eq) goto loc_825AC000;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r11,r25,r26
	ctx.r11.u64 = ctx.r25.u64 + ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r4,r8,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r24.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x825AC000;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AC000:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825ac088
	if (cr6.eq) goto loc_825AC088;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r25,r26
	ctx.r11.u64 = ctx.r25.u64 + ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r4,r31,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825AC02C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// lwz r29,1000(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1000);
	// lwzx r31,r31,r24
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// beq cr6,0x825ac054
	if (cr6.eq) goto loc_825AC054;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AC054;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AC054:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// beq cr6,0x825ac074
	if (cr6.eq) goto loc_825AC074;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AC074;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AC074:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x825ac088
	if (cr6.eq) goto loc_825AC088;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ae6c0
	ctx.lr = 0x825AC088;
	sub_825AE6C0(ctx, base);
loc_825AC088:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x825abeec
	if (cr6.lt) goto loc_825ABEEC;
	// addi r25,r25,11
	ctx.r25.s64 = ctx.r25.s64 + 11;
	// cmpwi cr6,r25,22
	cr6.compare<int32_t>(ctx.r25.s32, 22, xer);
	// blt cr6,0x825abee8
	if (cr6.lt) goto loc_825ABEE8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x825a54b0
	ctx.lr = 0x825AC0B4;
	sub_825A54B0(ctx, base);
	// addi r31,r27,1
	ctx.r31.s64 = ctx.r27.s64 + 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x825a8408
	ctx.lr = 0x825AC0C8;
	sub_825A8408(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x825ac188
	if (cr6.eq) goto loc_825AC188;
	// addi r30,r24,96
	ctx.r30.s64 = ctx.r24.s64 + 96;
	// li r27,3
	ctx.r27.s64 = 3;
loc_825AC0E0:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825ac17c
	if (cr6.eq) goto loc_825AC17C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AC100;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x825ac120
	if (cr6.eq) goto loc_825AC120;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AC120;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AC120:
	// lwz r29,1000(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1000);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// beq cr6,0x825ac148
	if (cr6.eq) goto loc_825AC148;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AC148;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AC148:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// beq cr6,0x825ac168
	if (cr6.eq) goto loc_825AC168;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AC168;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AC168:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x825ac17c
	if (cr6.eq) goto loc_825AC17C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ae6c0
	ctx.lr = 0x825AC17C;
	sub_825AE6C0(ctx, base);
loc_825AC17C:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x825ac0e0
	if (!cr0.eq) goto loc_825AC0E0;
loc_825AC188:
	// lwz r3,1032(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1032);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac2c8
	if (cr6.eq) goto loc_825AC2C8;
	// bl 0x825b1b58
	ctx.lr = 0x825AC198;
	sub_825B1B58(ctx, base);
	// stw r18,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82595718
	ctx.lr = 0x825AC1AC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac1ec
	if (cr6.eq) goto loc_825AC1EC;
	// bl 0x825b8a60
	ctx.lr = 0x825AC1B8;
	sub_825B8A60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac228
	if (cr6.eq) goto loc_825AC228;
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82595718
	ctx.lr = 0x825AC1D8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac1f4
	if (cr6.eq) goto loc_825AC1F4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825ae278
	ctx.lr = 0x825AC1E8;
	sub_825AE278(ctx, base);
	// b 0x825ac1f8
	goto loc_825AC1F8;
loc_825AC1EC:
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// b 0x825ac228
	goto loc_825AC228;
loc_825AC1F4:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_825AC1F8:
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// addi r11,r20,5844
	ctx.r11.s64 = ctx.r20.s64 + 5844;
	// stw r19,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r19.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825AC228;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AC228:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825ac24c
	if (cr6.eq) goto loc_825AC24C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1032(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1032);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AC24C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AC24C:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x825ac26c
	if (cr6.eq) goto loc_825AC26C;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,1032(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1032);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AC26C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AC26C:
	// lwz r30,1000(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1000);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// lwz r31,1032(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1032);
	// beq cr6,0x825ac294
	if (cr6.eq) goto loc_825AC294;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AC294;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AC294:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// beq cr6,0x825ac2b4
	if (cr6.eq) goto loc_825AC2B4;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AC2B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AC2B4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825ac2c8
	if (cr6.eq) goto loc_825AC2C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ae6c0
	ctx.lr = 0x825AC2C8;
	sub_825AE6C0(ctx, base);
loc_825AC2C8:
	// stw r18,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82595718
	ctx.lr = 0x825AC2DC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac2f0
	if (cr6.eq) goto loc_825AC2F0;
	// bl 0x825c1370
	ctx.lr = 0x825AC2E8;
	sub_825C1370(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825ac2f4
	goto loc_825AC2F4;
loc_825AC2F0:
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_825AC2F4:
	// stw r30,1008(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1008, ctx.r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825ac3cc
	if (cr6.eq) goto loc_825AC3CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c1458
	ctx.lr = 0x825AC308;
	sub_825C1458(ctx, base);
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82595718
	ctx.lr = 0x825AC31C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac3bc
	if (cr6.eq) goto loc_825AC3BC;
	// bl 0x825b8a60
	ctx.lr = 0x825AC328;
	sub_825B8A60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac3bc
	if (cr6.eq) goto loc_825AC3BC;
	// stw r18,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82595718
	ctx.lr = 0x825AC348;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac35c
	if (cr6.eq) goto loc_825AC35C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825ae278
	ctx.lr = 0x825AC358;
	sub_825AE278(ctx, base);
	// b 0x825ac360
	goto loc_825AC360;
loc_825AC35C:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_825AC360:
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// addi r11,r20,5980
	ctx.r11.s64 = ctx.r20.s64 + 5980;
	// stw r19,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r19.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825AC390;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x825AC3A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,1000(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1000);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac3bc
	if (cr6.eq) goto loc_825AC3BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825ae6c0
	ctx.lr = 0x825AC3BC;
	sub_825AE6C0(ctx, base);
loc_825AC3BC:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bl 0x83102db0
	ctx.lr = 0x825AC3CC;
	sub_83102DB0(ctx, base);
loc_825AC3CC:
	// stw r18,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,760
	ctx.r4.s64 = 760;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82595718
	ctx.lr = 0x825AC3E0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac3f4
	if (cr6.eq) goto loc_825AC3F4;
	// bl 0x825c0ec0
	ctx.lr = 0x825AC3EC;
	sub_825C0EC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825ac3f8
	goto loc_825AC3F8;
loc_825AC3F4:
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_825AC3F8:
	// stw r30,1012(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1012, ctx.r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825ac4bc
	if (cr6.eq) goto loc_825AC4BC;
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82595718
	ctx.lr = 0x825AC418;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac4b8
	if (cr6.eq) goto loc_825AC4B8;
	// bl 0x825b8a60
	ctx.lr = 0x825AC424;
	sub_825B8A60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac4b8
	if (cr6.eq) goto loc_825AC4B8;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82595718
	ctx.lr = 0x825AC444;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac458
	if (cr6.eq) goto loc_825AC458;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825ae278
	ctx.lr = 0x825AC454;
	sub_825AE278(ctx, base);
	// b 0x825ac45c
	goto loc_825AC45C;
loc_825AC458:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_825AC45C:
	// addi r11,r20,5988
	ctx.r11.s64 = ctx.r20.s64 + 5988;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// stw r19,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r19.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825AC48C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x825AC4A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,1000(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1000);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac4b8
	if (cr6.eq) goto loc_825AC4B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825ae6c0
	ctx.lr = 0x825AC4B8;
	sub_825AE6C0(ctx, base);
loc_825AC4B8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_825AC4BC:
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825AC4D0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac51c
	if (cr6.eq) goto loc_825AC51C;
	// bl 0x825b9a60
	ctx.lr = 0x825AC4DC;
	sub_825B9A60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac51c
	if (cr6.eq) goto loc_825AC51C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825b9870
	ctx.lr = 0x825AC4F0;
	sub_825B9870(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r20,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r20.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825AC51C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AC51C:
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5332
	ctx.r4.s64 = 5332;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r29,r26,1
	ctx.r29.s64 = ctx.r26.s64 + 1;
	// bl 0x82595718
	ctx.lr = 0x825AC534;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac548
	if (cr6.eq) goto loc_825AC548;
	// bl 0x825bfa08
	ctx.lr = 0x825AC540;
	sub_825BFA08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825ac54c
	goto loc_825AC54C;
loc_825AC548:
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_825AC54C:
	// stw r30,1004(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1004, ctx.r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825ac668
	if (cr6.eq) goto loc_825AC668;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AC56C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x825AC580;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac60c
	if (cr6.eq) goto loc_825AC60C;
	// bl 0x825b8a60
	ctx.lr = 0x825AC58C;
	sub_825B8A60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac60c
	if (cr6.eq) goto loc_825AC60C;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595718
	ctx.lr = 0x825AC5AC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac5c0
	if (cr6.eq) goto loc_825AC5C0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825ae278
	ctx.lr = 0x825AC5BC;
	sub_825AE278(ctx, base);
	// b 0x825ac5c4
	goto loc_825AC5C4;
loc_825AC5C0:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_825AC5C4:
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// addi r11,r20,5996
	ctx.r11.s64 = ctx.r20.s64 + 5996;
	// stw r19,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r19.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825AC5F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x825AC60C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AC60C:
	// lwz r31,1000(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1000);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x825ac634
	if (cr6.eq) goto loc_825AC634;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AC634;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AC634:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// beq cr6,0x825ac654
	if (cr6.eq) goto loc_825AC654;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AC654;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AC654:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825ac668
	if (cr6.eq) goto loc_825AC668;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ae6c0
	ctx.lr = 0x825AC668;
	sub_825AE6C0(ctx, base);
loc_825AC668:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac73c
	if (cr6.eq) goto loc_825AC73C;
	// bl 0x82da1d10
	ctx.lr = 0x825AC680;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ac73c
	if (cr6.eq) goto loc_825AC73C;
	// lwz r31,108(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 108);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825ac6c0
	if (cr6.eq) goto loc_825AC6C0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x825AC6A0;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x825ac6bc
	if (cr6.gt) goto loc_825AC6BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AC6BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AC6BC:
	// stw r15,108(r24)
	PPC_STORE_U32(ctx.r24.u32 + 108, ctx.r15.u32);
loc_825AC6C0:
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82595718
	ctx.lr = 0x825AC6D4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac6e4
	if (cr6.eq) goto loc_825AC6E4;
	// bl 0x825bb570
	ctx.lr = 0x825AC6E0;
	sub_825BB570(ctx, base);
	// b 0x825ac6e8
	goto loc_825AC6E8;
loc_825AC6E4:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_825AC6E8:
	// stw r3,108(r24)
	PPC_STORE_U32(ctx.r24.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac73c
	if (cr6.eq) goto loc_825AC73C;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x825749e0
	ctx.lr = 0x825AC6FC;
	sub_825749E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x825a54b0
	ctx.lr = 0x825AC708;
	sub_825A54B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac724
	if (cr6.eq) goto loc_825AC724;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,108(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 108);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AC724;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AC724:
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// lwz r7,1000(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1000);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,108(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 108);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x825a2b10
	ctx.lr = 0x825AC73C;
	sub_825A2B10(ctx, base);
loc_825AC73C:
	// stw r15,1000(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1000, ctx.r15.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AC748"))) PPC_WEAK_FUNC(sub_825AC748);
PPC_FUNC_IMPL(__imp__sub_825AC748) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-24588
	ctx.r10.s64 = ctx.r11.s64 + -24588;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x838a2b30
	ctx.lr = 0x825AC774;
	sub_838A2B30(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc1970
	ctx.lr = 0x825AC784;
	sub_82DC1970(ctx, base);
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

__attribute__((alias("__imp__sub_825AC79C"))) PPC_WEAK_FUNC(sub_825AC79C);
PPC_FUNC_IMPL(__imp__sub_825AC79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AC7A0"))) PPC_WEAK_FUNC(sub_825AC7A0);
PPC_FUNC_IMPL(__imp__sub_825AC7A0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-24588
	ctx.r10.s64 = ctx.r11.s64 + -24588;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8379e9d0
	ctx.lr = 0x825AC7C8;
	sub_8379E9D0(ctx, base);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x825aa930
	ctx.lr = 0x825AC7DC;
	sub_825AA930(ctx, base);
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x825AC7F0;
	sub_825952B8(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x825a8b90
	ctx.lr = 0x825AC7F8;
	sub_825A8B90(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825952b8
	ctx.lr = 0x825AC808;
	sub_825952B8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_825AC828"))) PPC_WEAK_FUNC(sub_825AC828);
PPC_FUNC_IMPL(__imp__sub_825AC828) {
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
	// bl 0x825ac7a0
	ctx.lr = 0x825AC848;
	sub_825AC7A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ac860
	if (cr6.eq) goto loc_825AC860;
	// bl 0x82416268
	ctx.lr = 0x825AC85C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825AC860:
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

__attribute__((alias("__imp__sub_825AC878"))) PPC_WEAK_FUNC(sub_825AC878);
PPC_FUNC_IMPL(__imp__sub_825AC878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x825AC880;
	__savegprlr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lbz r10,-19755(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -19755);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825ac918
	if (!cr6.eq) goto loc_825AC918;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,-19755(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19755, ctx.r10.u8);
	// bl 0x827cb078
	ctx.lr = 0x825AC8A4;
	sub_827CB078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac8b4
	if (cr6.eq) goto loc_825AC8B4;
	// bl 0x827cb078
	ctx.lr = 0x825AC8B0;
	sub_827CB078(ctx, base);
	// bl 0x827b76e8
	ctx.lr = 0x825AC8B4;
	sub_827B76E8(ctx, base);
loc_825AC8B4:
	// bl 0x827b6068
	ctx.lr = 0x825AC8B8;
	sub_827B6068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac8c8
	if (cr6.eq) goto loc_825AC8C8;
	// bl 0x827b6068
	ctx.lr = 0x825AC8C4;
	sub_827B6068(ctx, base);
	// bl 0x827b6078
	ctx.lr = 0x825AC8C8;
	sub_827B6078(ctx, base);
loc_825AC8C8:
	// bl 0x827b5600
	ctx.lr = 0x825AC8CC;
	sub_827B5600(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac8dc
	if (cr6.eq) goto loc_825AC8DC;
	// bl 0x827b5600
	ctx.lr = 0x825AC8D8;
	sub_827B5600(ctx, base);
	// bl 0x827b5bf8
	ctx.lr = 0x825AC8DC;
	sub_827B5BF8(ctx, base);
loc_825AC8DC:
	// bl 0x827b4cc0
	ctx.lr = 0x825AC8E0;
	sub_827B4CC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac8f0
	if (cr6.eq) goto loc_825AC8F0;
	// bl 0x827b4cc0
	ctx.lr = 0x825AC8EC;
	sub_827B4CC0(ctx, base);
	// bl 0x827b4cd0
	ctx.lr = 0x825AC8F0;
	sub_827B4CD0(ctx, base);
loc_825AC8F0:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r31,6
	ctx.r31.s64 = 6;
	// addi r11,r11,22928
	ctx.r11.s64 = ctx.r11.s64 + 22928;
	// lis r29,-31743
	ctx.r29.s64 = -2080309248;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_825AC904:
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,-21744(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -21744);
	// bl 0x83746c48
	ctx.lr = 0x825AC910;
	sub_83746C48(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x825ac904
	if (!cr0.eq) goto loc_825AC904;
loc_825AC918:
	// bl 0x825ad880
	ctx.lr = 0x825AC91C;
	sub_825AD880(ctx, base);
	// bl 0x837f9050
	ctx.lr = 0x825AC920;
	sub_837F9050(ctx, base);
	// lis r25,-31763
	ctx.r25.s64 = -2081619968;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,-19752(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19752);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ac968
	if (!cr6.eq) goto loc_825AC968;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825AC94C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac960
	if (cr6.eq) goto loc_825AC960;
	// bl 0x825ac748
	ctx.lr = 0x825AC958;
	sub_825AC748(ctx, base);
	// stw r3,-19752(r25)
	PPC_STORE_U32(ctx.r25.u32 + -19752, ctx.r3.u32);
	// b 0x825ac968
	goto loc_825AC968;
loc_825AC960:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,-19752(r25)
	PPC_STORE_U32(ctx.r25.u32 + -19752, ctx.r27.u32);
loc_825AC968:
	// lbz r11,796(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 796);
	// addi r31,r24,792
	ctx.r31.s64 = ctx.r24.s64 + 792;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ac980
	if (!cr6.eq) goto loc_825AC980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a9e30
	ctx.lr = 0x825AC980;
	sub_825A9E30(ctx, base);
loc_825AC980:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ac99c
	if (!cr6.eq) goto loc_825AC99C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_825AC99C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lbz r10,26(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26);
	// beq cr6,0x825ac9b4
	if (cr6.eq) goto loc_825AC9B4;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_825AC9B4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// addi r30,r11,-32076
	ctx.r30.s64 = ctx.r11.s64 + -32076;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r30,-192
	ctx.r5.s64 = ctx.r30.s64 + -192;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831d0b08
	ctx.lr = 0x825AC9D0;
	sub_831D0B08(ctx, base);
	// addi r31,r24,944
	ctx.r31.s64 = ctx.r24.s64 + 944;
	// addi r4,r30,-976
	ctx.r4.s64 = ctx.r30.s64 + -976;
	// li r5,43
	ctx.r5.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cc28
	ctx.lr = 0x825AC9E4;
	sub_8259CC28(ctx, base);
	// addi r28,r24,972
	ctx.r28.s64 = ctx.r24.s64 + 972;
	// addi r4,r30,-824
	ctx.r4.s64 = ctx.r30.s64 + -824;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259cc28
	ctx.lr = 0x825AC9F8;
	sub_8259CC28(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825ACA00:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825aca00
	if (!cr6.eq) goto loc_825ACA00;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x825ACA28;
	sub_825A1EB8(ctx, base);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x825ACA38;
	sub_825A1EB8(ctx, base);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// bl 0x837a0bd8
	ctx.lr = 0x825ACA50;
	sub_837A0BD8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x825aca64
	if (!cr6.lt) goto loc_825ACA64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_825ACA64:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825ACA68:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825aca68
	if (!cr6.eq) goto loc_825ACA68;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x825ACA8C;
	sub_825A1EB8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825acaac
	if (cr6.lt) goto loc_825ACAAC;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x825ACAAC;
	sub_825952B8(ctx, base);
loc_825ACAAC:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r4,r30,-664
	ctx.r4.s64 = ctx.r30.s64 + -664;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// li r5,19
	ctx.r5.s64 = 19;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x825ACAC8;
	sub_825A1EB8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825acadc
	if (cr6.lt) goto loc_825ACADC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x825acae0
	goto loc_825ACAE0;
loc_825ACADC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825ACAE0:
	// bl 0x83104018
	ctx.lr = 0x825ACAE4;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825acb1c
	if (cr6.eq) goto loc_825ACB1C;
	// lbz r11,1040(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1040);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825acb1c
	if (!cr6.eq) goto loc_825ACB1C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825acb10
	if (cr6.lt) goto loc_825ACB10;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x825acb14
	goto loc_825ACB14;
loc_825ACB10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_825ACB14:
	// lwz r3,-19752(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19752);
	// bl 0x8379ebe0
	ctx.lr = 0x825ACB1C;
	sub_8379EBE0(ctx, base);
loc_825ACB1C:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r4,r30,-184
	ctx.r4.s64 = ctx.r30.s64 + -184;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// li r5,49
	ctx.r5.s64 = 49;
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x825ACB38;
	sub_8259CC28(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x825acb4c
	if (!cr6.lt) goto loc_825ACB4C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
loc_825ACB4C:
	// bl 0x83104018
	ctx.lr = 0x825ACB50;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825acb80
	if (cr6.eq) goto loc_825ACB80;
	// lbz r11,1040(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1040);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825acbac
	if (!cr6.eq) goto loc_825ACBAC;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x825acba4
	if (!cr6.lt) goto loc_825ACBA4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// b 0x825acba4
	goto loc_825ACBA4;
loc_825ACB80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83104018
	ctx.lr = 0x825ACB88;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825acbac
	if (cr6.eq) goto loc_825ACBAC;
	// lbz r11,1040(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1040);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825acbac
	if (!cr6.eq) goto loc_825ACBAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_825ACBA4:
	// lwz r3,-19752(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19752);
	// bl 0x8379ebe0
	ctx.lr = 0x825ACBAC;
	sub_8379EBE0(ctx, base);
loc_825ACBAC:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825acbc0
	if (cr6.lt) goto loc_825ACBC0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x825acbc4
	goto loc_825ACBC4;
loc_825ACBC0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_825ACBC4:
	// bl 0x83104018
	ctx.lr = 0x825ACBC8;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825acc00
	if (cr6.eq) goto loc_825ACC00;
	// lbz r11,1040(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1040);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825acc00
	if (!cr6.eq) goto loc_825ACC00;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825acbf4
	if (cr6.lt) goto loc_825ACBF4;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x825acbf8
	goto loc_825ACBF8;
loc_825ACBF4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_825ACBF8:
	// lwz r3,-19752(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19752);
	// bl 0x8379ebe0
	ctx.lr = 0x825ACC00;
	sub_8379EBE0(ctx, base);
loc_825ACC00:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825acc1c
	if (cr6.lt) goto loc_825ACC1C;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x825ACC1C;
	sub_825952B8(ctx, base);
loc_825ACC1C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ACC24"))) PPC_WEAK_FUNC(sub_825ACC24);
PPC_FUNC_IMPL(__imp__sub_825ACC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ACC28"))) PPC_WEAK_FUNC(sub_825ACC28);
PPC_FUNC_IMPL(__imp__sub_825ACC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825ACC30;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bgt cr6,0x825ad68c
	if (cr6.gt) goto loc_825AD68C;
	// lis r12,-32165
	ctx.r12.s64 = -2107965440;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13216
	ctx.r12.s64 = ctx.r12.s64 + -13216;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_825ACD50;
	case 1:
		goto loc_825ACD90;
	case 2:
		goto loc_825ACDBC;
	case 3:
		goto loc_825ACDF8;
	case 4:
		goto loc_825ACE30;
	case 5:
		goto loc_825ACE60;
	case 6:
		goto loc_825ACEA4;
	case 7:
		goto loc_825ACEF0;
	case 8:
		goto loc_825ACF10;
	case 9:
		goto loc_825ACF30;
	case 10:
		goto loc_825ACF50;
	case 11:
		goto loc_825ACF70;
	case 12:
		goto loc_825ACF90;
	case 13:
		goto loc_825ACFB0;
	case 14:
		goto loc_825ACFD0;
	case 15:
		goto loc_825ACFF0;
	case 16:
		goto loc_825AD010;
	case 17:
		goto loc_825AD030;
	case 18:
		goto loc_825AD050;
	case 19:
		goto loc_825AD070;
	case 20:
		goto loc_825AD090;
	case 21:
		goto loc_825AD0B0;
	case 22:
		goto loc_825AD0D0;
	case 23:
		goto loc_825AD0F0;
	case 24:
		goto loc_825AD110;
	case 25:
		goto loc_825AD130;
	case 26:
		goto loc_825AD150;
	case 27:
		goto loc_825AD170;
	case 28:
		goto loc_825AD198;
	case 29:
		goto loc_825AD68C;
	case 30:
		goto loc_825AD1E0;
	case 31:
		goto loc_825AD210;
	case 32:
		goto loc_825AD230;
	case 33:
		goto loc_825AD250;
	case 34:
		goto loc_825AD270;
	case 35:
		goto loc_825AD290;
	case 36:
		goto loc_825AD2B0;
	case 37:
		goto loc_825AD2D0;
	case 38:
		goto loc_825AD2F0;
	case 39:
		goto loc_825AD310;
	case 40:
		goto loc_825AD330;
	case 41:
		goto loc_825AD350;
	case 42:
		goto loc_825AD370;
	case 43:
		goto loc_825AD390;
	case 44:
		goto loc_825AD3B0;
	case 45:
		goto loc_825AD3D0;
	case 46:
		goto loc_825AD3F0;
	case 47:
		goto loc_825AD410;
	case 48:
		goto loc_825AD430;
	case 49:
		goto loc_825AD450;
	case 50:
		goto loc_825AD470;
	case 51:
		goto loc_825AD490;
	case 52:
		goto loc_825AD4B0;
	case 53:
		goto loc_825AD4D0;
	case 54:
		goto loc_825AD68C;
	case 55:
		goto loc_825AD538;
	case 56:
		goto loc_825AD568;
	case 57:
		goto loc_825AD594;
	case 58:
		goto loc_825AD5C4;
	case 59:
		goto loc_825AD620;
	default:
		return;
	}
	// lwz r18,-12976(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12976);
	// lwz r18,-12912(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12912);
	// lwz r18,-12868(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12868);
	// lwz r18,-12808(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12808);
	// lwz r18,-12752(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12752);
	// lwz r18,-12704(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12704);
	// lwz r18,-12636(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12636);
	// lwz r18,-12560(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12560);
	// lwz r18,-12528(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12528);
	// lwz r18,-12496(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12496);
	// lwz r18,-12464(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12464);
	// lwz r18,-12432(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12432);
	// lwz r18,-12400(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12400);
	// lwz r18,-12368(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12368);
	// lwz r18,-12336(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12336);
	// lwz r18,-12304(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12304);
	// lwz r18,-12272(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12272);
	// lwz r18,-12240(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12240);
	// lwz r18,-12208(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12208);
	// lwz r18,-12176(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12176);
	// lwz r18,-12144(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12144);
	// lwz r18,-12112(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12112);
	// lwz r18,-12080(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12080);
	// lwz r18,-12048(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12048);
	// lwz r18,-12016(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12016);
	// lwz r18,-11984(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11984);
	// lwz r18,-11952(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11952);
	// lwz r18,-11920(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11920);
	// lwz r18,-11880(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11880);
	// lwz r18,-10612(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10612);
	// lwz r18,-11808(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11808);
	// lwz r18,-11760(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11760);
	// lwz r18,-11728(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11728);
	// lwz r18,-11696(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11696);
	// lwz r18,-11664(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11664);
	// lwz r18,-11632(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11632);
	// lwz r18,-11600(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11600);
	// lwz r18,-11568(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11568);
	// lwz r18,-11536(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11536);
	// lwz r18,-11504(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11504);
	// lwz r18,-11472(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11472);
	// lwz r18,-11440(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11440);
	// lwz r18,-11408(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11408);
	// lwz r18,-11376(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11376);
	// lwz r18,-11344(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11344);
	// lwz r18,-11312(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11312);
	// lwz r18,-11280(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11280);
	// lwz r18,-11248(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11248);
	// lwz r18,-11216(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11216);
	// lwz r18,-11184(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11184);
	// lwz r18,-11152(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11152);
	// lwz r18,-11120(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11120);
	// lwz r18,-11088(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11088);
	// lwz r18,-11056(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11056);
	// lwz r18,-10612(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10612);
	// lwz r18,-10952(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10952);
	// lwz r18,-10904(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10904);
	// lwz r18,-10860(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10860);
	// lwz r18,-10812(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10812);
	// lwz r18,-10720(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -10720);
loc_825ACD50:
	// bl 0x8378cba8
	ctx.lr = 0x825ACD54;
	sub_8378CBA8(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x8378cc08
	ctx.lr = 0x825ACD5C;
	sub_8378CC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ad68c
	if (cr6.eq) goto loc_825AD68C;
	// bl 0x837fc810
	ctx.lr = 0x825ACD6C;
	sub_837FC810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ad68c
	if (cr6.eq) goto loc_825AD68C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ac878
	ctx.lr = 0x825ACD80;
	sub_825AC878(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825ACD90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a2868
	ctx.lr = 0x825ACD98;
	sub_825A2868(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ad68c
	if (cr6.eq) goto loc_825AD68C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825ad68c
	if (cr6.eq) goto loc_825AD68C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825ACDBC:
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lbz r11,-19753(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -19753);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825acde8
	if (!cr6.eq) goto loc_825ACDE8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8378cba8
	ctx.lr = 0x825ACDD4;
	sub_8378CBA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83799ad0
	ctx.lr = 0x825ACDDC;
	sub_83799AD0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r3.u32);
	// stb r11,-19753(r30)
	PPC_STORE_U8(ctx.r30.u32 + -19753, ctx.r11.u8);
loc_825ACDE8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825ACDF8:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lbz r10,-19753(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -19753);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825ace20
	if (cr6.eq) goto loc_825ACE20;
	// bl 0x8378cba8
	ctx.lr = 0x825ACE0C;
	sub_8378CBA8(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x8378cc08
	ctx.lr = 0x825ACE14;
	sub_8378CC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ad68c
	if (cr6.eq) goto loc_825AD68C;
loc_825ACE20:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825ACE30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa290
	ctx.lr = 0x825ACE38;
	sub_825AA290(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ad68c
	if (cr6.eq) goto loc_825AD68C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825abc20
	ctx.lr = 0x825ACE50;
	sub_825ABC20(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825ACE60:
	// bl 0x8378cba8
	ctx.lr = 0x825ACE64;
	sub_8378CBA8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8378cc08
	ctx.lr = 0x825ACE6C;
	sub_8378CC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ad68c
	if (cr6.eq) goto loc_825AD68C;
	// bl 0x8378cba8
	ctx.lr = 0x825ACE7C;
	sub_8378CBA8(ctx, base);
	// bl 0x8378cc20
	ctx.lr = 0x825ACE80;
	sub_8378CC20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ad68c
	if (cr6.eq) goto loc_825AD68C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a8b10
	ctx.lr = 0x825ACE94;
	sub_825A8B10(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825ACEA4:
	// lbz r11,1040(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1040);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825acec0
	if (cr6.eq) goto loc_825ACEC0;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x825acec8
	goto loc_825ACEC8;
loc_825ACEC0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_825ACEC8:
	// bl 0x825aa9c8
	ctx.lr = 0x825ACECC;
	sub_825AA9C8(ctx, base);
	// lbz r11,1040(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1040);
	// li r12,21
	ctx.r12.s64 = 21;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r9,r12
	ctx.r11.u64 = ctx.r9.u64 & ctx.r12.u64;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825ACEF0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825ACF00;
	sub_825AA9C8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825ACF10:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825ACF20;
	sub_825AA9C8(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825ACF30:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825ACF40;
	sub_825AA9C8(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825ACF50:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825ACF60;
	sub_825AA9C8(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825ACF70:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825ACF80;
	sub_825AA9C8(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825ACF90:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825ACFA0;
	sub_825AA9C8(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825ACFB0:
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825ACFC0;
	sub_825AA9C8(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825ACFD0:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825ACFE0;
	sub_825AA9C8(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825ACFF0:
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD000;
	sub_825AA9C8(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD010:
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD020;
	sub_825AA9C8(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD030:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD040;
	sub_825AA9C8(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD050:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD060;
	sub_825AA9C8(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD070:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD080;
	sub_825AA9C8(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD090:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD0A0;
	sub_825AA9C8(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD0B0:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD0C0;
	sub_825AA9C8(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD0D0:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD0E0;
	sub_825AA9C8(ctx, base);
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD0F0:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD100;
	sub_825AA9C8(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD110:
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD120;
	sub_825AA9C8(ctx, base);
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD130:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD140;
	sub_825AA9C8(ctx, base);
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD150:
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD160;
	sub_825AA9C8(ctx, base);
	// li r11,27
	ctx.r11.s64 = 27;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD170:
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD180;
	sub_825AA9C8(ctx, base);
	// bl 0x8378cba8
	ctx.lr = 0x825AD184;
	sub_8378CBA8(ctx, base);
	// bl 0x8378cc90
	ctx.lr = 0x825AD188;
	sub_8378CC90(ctx, base);
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD198:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a2a28
	ctx.lr = 0x825AD1A0;
	sub_825A2A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ad68c
	if (cr6.eq) goto loc_825AD68C;
	// bl 0x8378cba8
	ctx.lr = 0x825AD1B0;
	sub_8378CBA8(ctx, base);
	// bl 0x8378cc20
	ctx.lr = 0x825AD1B4;
	sub_8378CC20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ad68c
	if (cr6.eq) goto loc_825AD68C;
	// bl 0x825a2d68
	ctx.lr = 0x825AD1C4;
	sub_825A2D68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ad68c
	if (cr6.eq) goto loc_825AD68C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825ad68c
	if (cr6.eq) goto loc_825AD68C;
	// lis r4,267
	ctx.r4.s64 = 17498112;
	// b 0x825ad668
	goto loc_825AD668;
loc_825AD1E0:
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
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
	ctx.lr = 0x825AD200;
	sub_83535150(ctx, base);
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD210:
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD220;
	sub_825AA9C8(ctx, base);
	// li r11,53
	ctx.r11.s64 = 53;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD230:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD240;
	sub_825AA9C8(ctx, base);
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD250:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD260;
	sub_825AA9C8(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD270:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD280;
	sub_825AA9C8(ctx, base);
	// li r11,35
	ctx.r11.s64 = 35;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD290:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD2A0;
	sub_825AA9C8(ctx, base);
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD2B0:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD2C0;
	sub_825AA9C8(ctx, base);
	// li r11,37
	ctx.r11.s64 = 37;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD2D0:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD2E0;
	sub_825AA9C8(ctx, base);
	// li r11,38
	ctx.r11.s64 = 38;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD2F0:
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD300;
	sub_825AA9C8(ctx, base);
	// li r11,39
	ctx.r11.s64 = 39;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD310:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD320;
	sub_825AA9C8(ctx, base);
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD330:
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD340;
	sub_825AA9C8(ctx, base);
	// li r11,41
	ctx.r11.s64 = 41;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD350:
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD360;
	sub_825AA9C8(ctx, base);
	// li r11,42
	ctx.r11.s64 = 42;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD370:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD380;
	sub_825AA9C8(ctx, base);
	// li r11,43
	ctx.r11.s64 = 43;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD390:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD3A0;
	sub_825AA9C8(ctx, base);
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD3B0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD3C0;
	sub_825AA9C8(ctx, base);
	// li r11,45
	ctx.r11.s64 = 45;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD3D0:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD3E0;
	sub_825AA9C8(ctx, base);
	// li r11,46
	ctx.r11.s64 = 46;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD3F0:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD400;
	sub_825AA9C8(ctx, base);
	// li r11,47
	ctx.r11.s64 = 47;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD410:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD420;
	sub_825AA9C8(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD430:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD440;
	sub_825AA9C8(ctx, base);
	// li r11,49
	ctx.r11.s64 = 49;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD450:
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD460;
	sub_825AA9C8(ctx, base);
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD470:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD480;
	sub_825AA9C8(ctx, base);
	// li r11,51
	ctx.r11.s64 = 51;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD490:
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD4A0;
	sub_825AA9C8(ctx, base);
	// li r11,52
	ctx.r11.s64 = 52;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD4B0:
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa9c8
	ctx.lr = 0x825AD4C0;
	sub_825AA9C8(ctx, base);
	// li r11,53
	ctx.r11.s64 = 53;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD4D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a2a28
	ctx.lr = 0x825AD4D8;
	sub_825A2A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ad68c
	if (cr6.eq) goto loc_825AD68C;
	// bl 0x8378cba8
	ctx.lr = 0x825AD4E8;
	sub_8378CBA8(ctx, base);
	// bl 0x8378cc20
	ctx.lr = 0x825AD4EC;
	sub_8378CC20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ad68c
	if (cr6.eq) goto loc_825AD68C;
	// li r29,2
	ctx.r29.s64 = 2;
loc_825AD4FC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_825AD500:
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82936f68
	ctx.lr = 0x825AD510;
	sub_82936F68(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x825ad500
	if (cr6.lt) goto loc_825AD500;
	// addi r29,r29,11
	ctx.r29.s64 = ctx.r29.s64 + 11;
	// cmpwi cr6,r29,24
	cr6.compare<int32_t>(ctx.r29.s32, 24, xer);
	// blt cr6,0x825ad4fc
	if (cr6.lt) goto loc_825AD4FC;
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD538:
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
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
	ctx.lr = 0x825AD558;
	sub_83535150(ctx, base);
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD568:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ab008
	ctx.lr = 0x825AD574;
	sub_825AB008(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ad584
	if (cr6.eq) goto loc_825AD584;
	// bl 0x825bbd98
	ctx.lr = 0x825AD584;
	sub_825BBD98(ctx, base);
loc_825AD584:
	// li r11,57
	ctx.r11.s64 = 57;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD594:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ab510
	ctx.lr = 0x825AD59C;
	sub_825AB510(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ad68c
	if (cr6.eq) goto loc_825AD68C;
	// li r11,58
	ctx.r11.s64 = 58;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ab008
	ctx.lr = 0x825AD5BC;
	sub_825AB008(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD5C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ab510
	ctx.lr = 0x825AD5CC;
	sub_825AB510(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ad68c
	if (cr6.eq) goto loc_825AD68C;
	// lis r29,-31778
	ctx.r29.s64 = -2082603008;
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AD5F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825ad664
	if (cr6.eq) goto loc_825AD664;
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AD610;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,59
	ctx.r9.s64 = 59;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AD620:
	// lis r29,-31778
	ctx.r29.s64 = -2082603008;
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AD638;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825ad664
	if (cr6.eq) goto loc_825AD664;
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AD658;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825ad68c
	if (cr6.eq) goto loc_825AD68C;
loc_825AD664:
	// lis r4,261
	ctx.r4.s64 = 17104896;
loc_825AD668:
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
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x83535150
	ctx.lr = 0x825AD684;
	sub_83535150(ctx, base);
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_825AD68C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AD694"))) PPC_WEAK_FUNC(sub_825AD694);
PPC_FUNC_IMPL(__imp__sub_825AD694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AD698"))) PPC_WEAK_FUNC(sub_825AD698);
PPC_FUNC_IMPL(__imp__sub_825AD698) {
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
	// bl 0x830a2c10
	ctx.lr = 0x825AD6B8;
	sub_830A2C10(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// addi r9,r11,-24236
	ctx.r9.s64 = ctx.r11.s64 + -24236;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x825ad6e8
	if (cr6.eq) goto loc_825AD6E8;
	// addi r11,r11,-24380
	ctx.r11.s64 = ctx.r11.s64 + -24380;
	// addi r5,r11,-72
	ctx.r5.s64 = ctx.r11.s64 + -72;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// b 0x825ad6f0
	goto loc_825AD6F0;
loc_825AD6E8:
	// addi r4,r11,-24380
	ctx.r4.s64 = ctx.r11.s64 + -24380;
	// addi r5,r4,-12
	ctx.r5.s64 = ctx.r4.s64 + -12;
loc_825AD6F0:
	// bl 0x830a0b50
	ctx.lr = 0x825AD6F4;
	sub_830A0B50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_825AD71C"))) PPC_WEAK_FUNC(sub_825AD71C);
PPC_FUNC_IMPL(__imp__sub_825AD71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AD720"))) PPC_WEAK_FUNC(sub_825AD720);
PPC_FUNC_IMPL(__imp__sub_825AD720) {
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
	// bl 0x830a0050
	ctx.lr = 0x825AD738;
	sub_830A0050(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ad78c
	if (!cr6.eq) goto loc_825AD78C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a0be8
	ctx.lr = 0x825AD74C;
	sub_830A0BE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ad770
	if (!cr6.eq) goto loc_825AD770;
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
loc_825AD770:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,23444(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23444);
	// bl 0x830a0e00
	ctx.lr = 0x825AD780;
	sub_830A0E00(ctx, base);
	// stw r3,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a3730
	ctx.lr = 0x825AD78C;
	sub_830A3730(ctx, base);
loc_825AD78C:
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

__attribute__((alias("__imp__sub_825AD7A4"))) PPC_WEAK_FUNC(sub_825AD7A4);
PPC_FUNC_IMPL(__imp__sub_825AD7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AD7A8"))) PPC_WEAK_FUNC(sub_825AD7A8);
PPC_FUNC_IMPL(__imp__sub_825AD7A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x825AD7C4;
	sub_83102DB0(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837475e8
	ctx.lr = 0x825AD7D0;
	sub_837475E8(ctx, base);
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// lwz r9,700(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x825ad800
	if (!cr6.lt) goto loc_825AD800;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,688(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 688);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// ble cr6,0x825ad800
	if (!cr6.gt) goto loc_825AD800;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x825ad840
	goto loc_825AD840;
loc_825AD800:
	// lwz r10,568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x825ad82c
	if (!cr6.gt) goto loc_825AD82C;
	// lwz r9,696(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 696);
	// subfc r8,r9,r11
	xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// eqv r7,r9,r11
	ctx.r7.u64 = ~(ctx.r9.u64 ^ ctx.r11.u64);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// b 0x825ad840
	goto loc_825AD840;
loc_825AD82C:
	// lwz r9,684(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// ble cr6,0x825ad840
	if (!cr6.gt) goto loc_825AD840;
	// li r11,3
	ctx.r11.s64 = 3;
loc_825AD840:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x825ad860
	if (cr6.eq) goto loc_825AD860;
	// lwz r10,568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r8,568(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
loc_825AD860:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x825AD868;
	sub_83102DB0(ctx, base);
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

__attribute__((alias("__imp__sub_825AD87C"))) PPC_WEAK_FUNC(sub_825AD87C);
PPC_FUNC_IMPL(__imp__sub_825AD87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AD880"))) PPC_WEAK_FUNC(sub_825AD880);
PPC_FUNC_IMPL(__imp__sub_825AD880) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r11,-19692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19692);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ad8d8
	if (!cr6.eq) goto loc_825AD8D8;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,572
	ctx.r4.s64 = 572;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825AD8BC;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ad96c
	if (cr6.eq) goto loc_825AD96C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-24480
	ctx.r11.s64 = ctx.r11.s64 + -24480;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// b 0x825ad948
	goto loc_825AD948;
loc_825AD8D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x825AD8EC;
	sub_82595150(ctx, base);
	// lwz r3,-19692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19692);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ad90c
	if (cr6.eq) goto loc_825AD90C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AD90C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AD90C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x825AD914;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r11,-19692(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19692, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r4,572
	ctx.r4.s64 = 572;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x825AD934;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ad96c
	if (cr6.eq) goto loc_825AD96C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24480
	ctx.r3.s64 = ctx.r11.s64 + -24480;
loc_825AD948:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83523fd8
	ctx.lr = 0x825AD950;
	sub_83523FD8(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ad698
	ctx.lr = 0x825AD964;
	sub_825AD698(ctx, base);
	// stw r3,-19692(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19692, ctx.r3.u32);
	// b 0x825ad974
	goto loc_825AD974;
loc_825AD96C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19692(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19692, ctx.r11.u32);
loc_825AD974:
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

__attribute__((alias("__imp__sub_825AD98C"))) PPC_WEAK_FUNC(sub_825AD98C);
PPC_FUNC_IMPL(__imp__sub_825AD98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AD990"))) PPC_WEAK_FUNC(sub_825AD990);
PPC_FUNC_IMPL(__imp__sub_825AD990) {
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
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r11,-19692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19692);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ad9f4
	if (cr6.eq) goto loc_825AD9F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825AD9C4;
	sub_82595150(ctx, base);
	// lwz r3,-19692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19692);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ad9e4
	if (cr6.eq) goto loc_825AD9E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AD9E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AD9E4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825AD9EC;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19692(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19692, ctx.r11.u32);
loc_825AD9F4:
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

__attribute__((alias("__imp__sub_825ADA08"))) PPC_WEAK_FUNC(sub_825ADA08);
PPC_FUNC_IMPL(__imp__sub_825ADA08) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-24236
	ctx.r10.s64 = ctx.r11.s64 + -24236;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x830a2ab0
	ctx.lr = 0x825ADA34;
	sub_830A2AB0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825ada4c
	if (cr6.eq) goto loc_825ADA4C;
	// bl 0x82416268
	ctx.lr = 0x825ADA48;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825ADA4C:
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

__attribute__((alias("__imp__sub_825ADA64"))) PPC_WEAK_FUNC(sub_825ADA64);
PPC_FUNC_IMPL(__imp__sub_825ADA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ADA68"))) PPC_WEAK_FUNC(sub_825ADA68);
PPC_FUNC_IMPL(__imp__sub_825ADA68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825ADA70;
	__savegprlr_27(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r3,312(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// bl 0x82a16e80
	ctx.lr = 0x825ADA90;
	sub_82A16E80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x825adbd0
	if (!cr6.eq) goto loc_825ADBD0;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r3,472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// lwz r31,432(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825adac0
	if (cr6.eq) goto loc_825ADAC0;
	// bl 0x82a47d40
	ctx.lr = 0x825ADAB4;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825adbd0
	if (!cr6.eq) goto loc_825ADBD0;
loc_825ADAC0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825adadc
	if (cr6.eq) goto loc_825ADADC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da1d10
	ctx.lr = 0x825ADAD0;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825adbd0
	if (!cr6.eq) goto loc_825ADBD0;
loc_825ADADC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x825ADAE4;
	sub_83102DB0(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837475e8
	ctx.lr = 0x825ADAF0;
	sub_837475E8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r29,568(r30)
	PPC_STORE_U32(ctx.r30.u32 + 568, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a0068
	ctx.lr = 0x825ADB0C;
	sub_830A0068(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,564(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// bl 0x830a3228
	ctx.lr = 0x825ADB1C;
	sub_830A3228(ctx, base);
	// lwz r29,132(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22860
	ctx.lr = 0x825ADB28;
	sub_82A22860(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825adbb8
	if (cr6.eq) goto loc_825ADBB8;
loc_825ADB30:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a236f8
	ctx.lr = 0x825ADB3C;
	sub_82A236F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x825ADB4C;
	sub_831CE980(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x825adb9c
	if (!cr6.eq) goto loc_825ADB9C;
	// lwz r11,568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825adb7c
	if (!cr6.eq) goto loc_825ADB7C;
	// lwz r10,676(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 676);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// b 0x825adb94
	goto loc_825ADB94;
loc_825ADB7C:
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x825adb94
	if (!cr6.eq) goto loc_825ADB94;
	// lwz r10,676(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 676);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_825ADB94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ad7a8
	ctx.lr = 0x825ADB9C;
	sub_825AD7A8(ctx, base);
loc_825ADB9C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83102db0
	ctx.lr = 0x825ADBA4;
	sub_83102DB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82a22860
	ctx.lr = 0x825ADBB0;
	sub_82A22860(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x825adb30
	if (cr6.lt) goto loc_825ADB30;
loc_825ADBB8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,132(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82a23768
	ctx.lr = 0x825ADBC8;
	sub_82A23768(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x825ADBD0;
	sub_83102DB0(ctx, base);
loc_825ADBD0:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ADBD8"))) PPC_WEAK_FUNC(sub_825ADBD8);
PPC_FUNC_IMPL(__imp__sub_825ADBD8) {
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
	// bne cr6,0x825adc10
	if (!cr6.eq) goto loc_825ADC10;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825adc60
	goto loc_825ADC60;
loc_825ADC10:
	// lis r11,2340
	ctx.r11.s64 = 153354240;
	// ori r10,r11,37449
	ctx.r10.u64 = ctx.r11.u64 | 37449;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825adc2c
	if (!cr6.gt) goto loc_825ADC2C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x825ADC2C;
	sub_831CC150(ctx, base);
loc_825ADC2C:
	// li r11,2
	ctx.r11.s64 = 2;
	// mulli r30,r4,28
	ctx.r30.s64 = ctx.r4.s64 * 28;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825ADC48;
	sub_82595718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_825ADC60:
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

__attribute__((alias("__imp__sub_825ADC78"))) PPC_WEAK_FUNC(sub_825ADC78);
PPC_FUNC_IMPL(__imp__sub_825ADC78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x825ADC80;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2340
	ctx.r11.s64 = 153354240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,37449
	ctx.r10.u64 = ctx.r11.u64 | 37449;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825adca4
	if (!cr6.gt) goto loc_825ADCA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x825ADCA4;
	sub_831CC150(ctx, base);
loc_825ADCA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,28
	ctx.r26.s64 = 28;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x825add4c
	if (!cr6.lt) goto loc_825ADD4C;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r28,r4,28
	ctx.r28.s64 = ctx.r4.s64 * 28;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825ADCDC;
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
	// bl 0x82b8b530
	ctx.lr = 0x825ADD00;
	sub_82B8B530(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r26,r11,r26
	ctx.r26.s32 = PPCDivide(ctx.r11.s32, ctx.r26.s32);
	// beq cr6,0x825add34
	if (cr6.eq) goto loc_825ADD34;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x838adab0
	ctx.lr = 0x825ADD24;
	sub_838ADAB0(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x825ADD34;
	sub_825952B8(ctx, base);
loc_825ADD34:
	// mulli r11,r26,28
	ctx.r11.s64 = ctx.r26.s64 * 28;
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
loc_825ADD4C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ADD54"))) PPC_WEAK_FUNC(sub_825ADD54);
PPC_FUNC_IMPL(__imp__sub_825ADD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ADD58"))) PPC_WEAK_FUNC(sub_825ADD58);
PPC_FUNC_IMPL(__imp__sub_825ADD58) {
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
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divw r4,r7,r10
	ctx.r4.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// bl 0x825adbd8
	ctx.lr = 0x825ADD9C;
	sub_825ADBD8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825addc4
	if (cr6.eq) goto loc_825ADDC4;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82b8b530
	ctx.lr = 0x825ADDC0;
	sub_82B8B530(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_825ADDC4:
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

__attribute__((alias("__imp__sub_825ADDE0"))) PPC_WEAK_FUNC(sub_825ADDE0);
PPC_FUNC_IMPL(__imp__sub_825ADDE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,2340
	ctx.r10.s64 = 153354240;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,28
	ctx.r9.s64 = 28;
	// ori r8,r10,37449
	ctx.r8.u64 = ctx.r10.u64 | 37449;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x825ade14
	if (!cr6.lt) goto loc_825ADE14;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_825ADE14:
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
	// blt cr6,0x825ade44
	if (cr6.lt) goto loc_825ADE44;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_825ADE44:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x825ade50
	if (!cr6.lt) goto loc_825ADE50;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_825ADE50:
	// b 0x825adc78
	sub_825ADC78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ADE54"))) PPC_WEAK_FUNC(sub_825ADE54);
PPC_FUNC_IMPL(__imp__sub_825ADE54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ADE58"))) PPC_WEAK_FUNC(sub_825ADE58);
PPC_FUNC_IMPL(__imp__sub_825ADE58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x825ADE60;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x82574d38
	ctx.lr = 0x825ADE9C;
	sub_82574D38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r24,2
	ctx.r24.s64 = 2;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825adf2c
	if (cr6.eq) goto loc_825ADF2C;
loc_825ADEB0:
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// subf r6,r30,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r30.s64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x825ADED0;
	sub_8259CB28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x825ADEDC;
	sub_8291FDC8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825adef8
	if (cr6.lt) goto loc_825ADEF8;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x825ADEF8;
	sub_825952B8(ctx, base);
loc_825ADEF8:
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82574d38
	ctx.lr = 0x825ADF20;
	sub_82574D38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x825adeb0
	if (!cr6.eq) goto loc_825ADEB0;
loc_825ADF2C:
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// subf r6,r30,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r30.s64;
	// bl 0x8259cb28
	ctx.lr = 0x825ADF50;
	sub_8259CB28(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x825ADF5C;
	sub_8291FDC8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825adf78
	if (cr6.lt) goto loc_825ADF78;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x825ADF78;
	sub_825952B8(ctx, base);
loc_825ADF78:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ADF84"))) PPC_WEAK_FUNC(sub_825ADF84);
PPC_FUNC_IMPL(__imp__sub_825ADF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ADF88"))) PPC_WEAK_FUNC(sub_825ADF88);
PPC_FUNC_IMPL(__imp__sub_825ADF88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825ADF90;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r5.u32);
	// stw r6,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// addi r6,r1,236
	ctx.r6.s64 = ctx.r1.s64 + 236;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830a0e78
	ctx.lr = 0x825ADFB8;
	sub_830A0E78(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825ae048
	if (cr6.eq) goto loc_825AE048;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83767d18
	ctx.lr = 0x825ADFCC;
	sub_83767D18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825ae048
	if (!cr6.eq) goto loc_825AE048;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x825adff8
	if (!cr6.eq) goto loc_825ADFF8;
	// bl 0x830a6668
	ctx.lr = 0x825ADFF0;
	sub_830A6668(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x825ae014
	if (cr6.eq) goto loc_825AE014;
loc_825ADFF8:
	// lwz r11,492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825ae048
	if (!cr6.eq) goto loc_825AE048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a6668
	ctx.lr = 0x825AE00C;
	sub_830A6668(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825ae048
	if (!cr6.eq) goto loc_825AE048;
loc_825AE014:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AE028;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x825AE034;
	sub_837B0C10(ctx, base);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825ae054
	if (!cr6.eq) goto loc_825AE054;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x825AE048;
	sub_8387E8E0(ctx, base);
loc_825AE048:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825AE054:
	// li r5,47
	ctx.r5.s64 = 47;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825ade58
	ctx.lr = 0x825AE064;
	sub_825ADE58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x825AE06C;
	sub_83102DB0(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837475e8
	ctx.lr = 0x825AE078;
	sub_837475E8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,28
	ctx.r9.s64 = 28;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r7,r8,r9
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r9.s32);
	// cmplwi cr6,r7,4
	cr6.compare<uint32_t>(ctx.r7.u32, 4, xer);
	// bge cr6,0x825ae0a0
	if (!cr6.lt) goto loc_825AE0A0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x825ae170
	goto loc_825AE170;
loc_825AE0A0:
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r11,312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// lbz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825ae0c4
	if (!cr6.eq) goto loc_825AE0C4;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// addi r11,r10,56
	ctx.r11.s64 = ctx.r10.s64 + 56;
	// b 0x825ae0cc
	goto loc_825AE0CC;
loc_825AE0C4:
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// addi r11,r10,84
	ctx.r11.s64 = ctx.r10.s64 + 84;
loc_825AE0CC:
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x825ae0d8
	if (cr6.lt) goto loc_825AE0D8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825AE0D8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831d88a0
	ctx.lr = 0x825AE0E0;
	sub_831D88A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x825ae170
	if (!cr6.gt) goto loc_825AE170;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r4,492(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// lwz r29,6132(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a28860
	ctx.lr = 0x825AE100;
	sub_82A28860(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ae170
	if (cr6.eq) goto loc_825AE170;
	// lwz r11,492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x825ae128
	if (cr6.eq) goto loc_825AE128;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x825ae128
	if (cr6.eq) goto loc_825AE128;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825ae130
	goto loc_825AE130;
loc_825AE128:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_825AE130:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a28860
	ctx.lr = 0x825AE138;
	sub_82A28860(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ae170
	if (!cr6.eq) goto loc_825AE170;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-3404(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3404);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_825AE170:
	// lwz r11,492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r11,568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x825ae1a4
	if (!cr6.eq) goto loc_825AE1A4;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,692(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 692);
	// lwz r10,568(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// ble cr6,0x825ae1c4
	if (!cr6.gt) goto loc_825AE1C4;
	// b 0x825ae1c0
	goto loc_825AE1C0;
loc_825AE1A4:
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r11,680(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 680);
	// lwz r10,568(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// bge cr6,0x825ae1c4
	if (!cr6.lt) goto loc_825AE1C4;
loc_825AE1C0:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_825AE1C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ad7a8
	ctx.lr = 0x825AE1CC;
	sub_825AD7A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x825AE1D4;
	sub_83102DB0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x838ae2a8
	ctx.lr = 0x825AE1DC;
	sub_838AE2A8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x825AE1E4;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AE1F0"))) PPC_WEAK_FUNC(sub_825AE1F0);
PPC_FUNC_IMPL(__imp__sub_825AE1F0) {
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
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// beq cr6,0x825ae258
	if (cr6.eq) goto loc_825AE258;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// beq cr6,0x825ae234
	if (cr6.eq) goto loc_825AE234;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bne cr6,0x825ae260
	if (!cr6.eq) goto loc_825AE260;
	// stb r30,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// b 0x825ae260
	goto loc_825AE260;
loc_825AE234:
	// lwz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AE24C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// b 0x825ae260
	goto loc_825AE260;
loc_825AE258:
	// lbz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 16);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_825AE260:
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

__attribute__((alias("__imp__sub_825AE278"))) PPC_WEAK_FUNC(sub_825AE278);
PPC_FUNC_IMPL(__imp__sub_825AE278) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-24080
	ctx.r9.s64 = ctx.r10.s64 + -24080;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r8,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r8.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AE2A0"))) PPC_WEAK_FUNC(sub_825AE2A0);
PPC_FUNC_IMPL(__imp__sub_825AE2A0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-24080
	ctx.r9.s64 = ctx.r11.s64 + -24080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825ae2d4
	if (cr6.eq) goto loc_825AE2D4;
	// bl 0x82416268
	ctx.lr = 0x825AE2D0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825AE2D4:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_825AE2E8"))) PPC_WEAK_FUNC(sub_825AE2E8);
PPC_FUNC_IMPL(__imp__sub_825AE2E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x825ae36c
	if (cr6.gt) goto loc_825AE36C;
	// beq cr6,0x825ae358
	if (cr6.eq) goto loc_825AE358;
	// addis r11,r11,-261
	ctx.r11.s64 = ctx.r11.s64 + -17104896;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x825ae344
	if (cr0.eq) goto loc_825AE344;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x825ae330
	if (cr6.eq) goto loc_825AE330;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x825ae380
	if (!cr6.eq) goto loc_825AE380;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825AE330:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825AE344:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825AE358:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825AE36C:
	// addis r11,r11,-511
	ctx.r11.s64 = ctx.r11.s64 + -33488896;
	// addic. r11,r11,-4
	xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x825ae39c
	if (cr0.eq) goto loc_825AE39C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x825ae388
	if (cr6.eq) goto loc_825AE388;
loc_825AE380:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x825ae1f0
	sub_825AE1F0(ctx, base);
	return;
loc_825AE388:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825AE39C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AE3B0"))) PPC_WEAK_FUNC(sub_825AE3B0);
PPC_FUNC_IMPL(__imp__sub_825AE3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lbz r3,-19676(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -19676);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AE3BC"))) PPC_WEAK_FUNC(sub_825AE3BC);
PPC_FUNC_IMPL(__imp__sub_825AE3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AE3C0"))) PPC_WEAK_FUNC(sub_825AE3C0);
PPC_FUNC_IMPL(__imp__sub_825AE3C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825ae3f8
	if (cr6.eq) goto loc_825AE3F8;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825ae3f8
	if (cr6.eq) goto loc_825AE3F8;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ae3f8
	if (!cr6.eq) goto loc_825AE3F8;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x825ae3fc
	if (!cr6.eq) goto loc_825AE3FC;
loc_825AE3F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825AE3FC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AE404"))) PPC_WEAK_FUNC(sub_825AE404);
PPC_FUNC_IMPL(__imp__sub_825AE404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AE408"))) PPC_WEAK_FUNC(sub_825AE408);
PPC_FUNC_IMPL(__imp__sub_825AE408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825ae428
	if (cr6.eq) goto loc_825AE428;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x825ae42c
	if (!cr6.eq) goto loc_825AE42C;
loc_825AE428:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825AE42C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AE434"))) PPC_WEAK_FUNC(sub_825AE434);
PPC_FUNC_IMPL(__imp__sub_825AE434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AE438"))) PPC_WEAK_FUNC(sub_825AE438);
PPC_FUNC_IMPL(__imp__sub_825AE438) {
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
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r11,-19676(r31)
	PPC_STORE_U8(ctx.r31.u32 + -19676, ctx.r11.u8);
	// lwz r3,3968(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3968);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825AE474;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825ae48c
	if (cr6.eq) goto loc_825AE48C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-19676(r31)
	PPC_STORE_U8(ctx.r31.u32 + -19676, ctx.r11.u8);
	// b 0x825ae490
	goto loc_825AE490;
loc_825AE48C:
	// lbz r11,-19676(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -19676);
loc_825AE490:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825ae4d8
	if (cr6.eq) goto loc_825AE4D8;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825AE4BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825ae4d4
	if (cr6.eq) goto loc_825AE4D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-19676(r31)
	PPC_STORE_U8(ctx.r31.u32 + -19676, ctx.r11.u8);
	// b 0x825ae4d8
	goto loc_825AE4D8;
loc_825AE4D4:
	// lbz r11,-19676(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -19676);
loc_825AE4D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ae524
	if (cr6.eq) goto loc_825AE524;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825ae51c
	if (cr6.eq) goto loc_825AE51C;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825ae51c
	if (cr6.eq) goto loc_825AE51C;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ae51c
	if (!cr6.eq) goto loc_825AE51C;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x825ae520
	if (!cr6.eq) goto loc_825AE520;
loc_825AE51C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825AE520:
	// stb r11,-19676(r31)
	PPC_STORE_U8(ctx.r31.u32 + -19676, ctx.r11.u8);
loc_825AE524:
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

__attribute__((alias("__imp__sub_825AE53C"))) PPC_WEAK_FUNC(sub_825AE53C);
PPC_FUNC_IMPL(__imp__sub_825AE53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AE540"))) PPC_WEAK_FUNC(sub_825AE540);
PPC_FUNC_IMPL(__imp__sub_825AE540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x825ae56c
	if (cr6.lt) goto loc_825AE56C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x825ae56c
	if (!cr6.lt) goto loc_825AE56C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x825ae56c
	if (cr6.lt) goto loc_825AE56C;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bltlr cr6
	if (cr6.lt) return;
loc_825AE56C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AE574"))) PPC_WEAK_FUNC(sub_825AE574);
PPC_FUNC_IMPL(__imp__sub_825AE574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AE578"))) PPC_WEAK_FUNC(sub_825AE578);
PPC_FUNC_IMPL(__imp__sub_825AE578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x825ae588
	if (!cr6.lt) goto loc_825AE588;
loc_825AE580:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825AE588:
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// blt cr6,0x825ae580
	if (cr6.lt) goto loc_825AE580;
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
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AE5AC"))) PPC_WEAK_FUNC(sub_825AE5AC);
PPC_FUNC_IMPL(__imp__sub_825AE5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AE5B0"))) PPC_WEAK_FUNC(sub_825AE5B0);
PPC_FUNC_IMPL(__imp__sub_825AE5B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83740868
	ctx.lr = 0x825AE5C8;
	sub_83740868(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lfs f0,-23868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23868);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,23372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23372);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AE5F8"))) PPC_WEAK_FUNC(sub_825AE5F8);
PPC_FUNC_IMPL(__imp__sub_825AE5F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825AE600;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,32
	ctx.r30.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,668
	ctx.r4.s64 = 668;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825AE624;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ae634
	if (cr6.eq) goto loc_825AE634;
	// bl 0x825c1f48
	ctx.lr = 0x825AE630;
	sub_825C1F48(ctx, base);
	// b 0x825ae638
	goto loc_825AE638;
loc_825AE634:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825AE638:
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// bl 0x825c1f38
	ctx.lr = 0x825AE640;
	sub_825C1F38(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825AE654;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ae668
	if (cr6.eq) goto loc_825AE668;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825ae278
	ctx.lr = 0x825AE664;
	sub_825AE278(ctx, base);
	// b 0x825ae66c
	goto loc_825AE66C;
loc_825AE668:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825AE66C:
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r4,30088
	ctx.r4.s64 = 30088;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x825AE684;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ae6a4
	if (cr6.eq) goto loc_825AE6A4;
	// bl 0x82a569a8
	ctx.lr = 0x825AE690;
	sub_82A569A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// stb r11,768(r31)
	PPC_STORE_U8(ctx.r31.u32 + 768, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825AE6A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// stb r11,768(r31)
	PPC_STORE_U8(ctx.r31.u32 + 768, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AE6BC"))) PPC_WEAK_FUNC(sub_825AE6BC);
PPC_FUNC_IMPL(__imp__sub_825AE6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AE6C0"))) PPC_WEAK_FUNC(sub_825AE6C0);
PPC_FUNC_IMPL(__imp__sub_825AE6C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x825c1558
	sub_825C1558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AE6C8"))) PPC_WEAK_FUNC(sub_825AE6C8);
PPC_FUNC_IMPL(__imp__sub_825AE6C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x825AE6D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825ae7c4
	if (cr6.eq) goto loc_825AE7C4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r27,r4,5644
	ctx.r27.s64 = ctx.r4.s64 + 5644;
	// bl 0x82a1a5a8
	ctx.lr = 0x825AE6FC;
	sub_82A1A5A8(ctx, base);
	// lfs f1,4464(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a29130
	ctx.lr = 0x825AE708;
	sub_82A29130(ctx, base);
	// lwz r10,324(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 324);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825ae72c
	if (cr6.eq) goto loc_825AE72C;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bne cr6,0x825ae734
	if (!cr6.eq) goto loc_825AE734;
loc_825AE72C:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// b 0x825ae738
	goto loc_825AE738;
loc_825AE734:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_825AE738:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825ae77c
	if (!cr6.eq) goto loc_825AE77C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,28
	ctx.r10.s64 = 28;
	// ori r6,r11,65535
	ctx.r6.u64 = ctx.r11.u64 | 65535;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x82a1ae08
	ctx.lr = 0x825AE774;
	sub_82A1AE08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_825AE77C:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// li r10,28
	ctx.r10.s64 = 28;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// ori r6,r11,65535
	ctx.r6.u64 = ctx.r11.u64 | 65535;
	// bne cr6,0x825ae7b8
	if (!cr6.eq) goto loc_825AE7B8;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x82a1b200
	ctx.lr = 0x825AE7B0;
	sub_82A1B200(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_825AE7B8:
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x82a1b170
	ctx.lr = 0x825AE7C4;
	sub_82A1B170(ctx, base);
loc_825AE7C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AE7CC"))) PPC_WEAK_FUNC(sub_825AE7CC);
PPC_FUNC_IMPL(__imp__sub_825AE7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AE7D0"))) PPC_WEAK_FUNC(sub_825AE7D0);
PPC_FUNC_IMPL(__imp__sub_825AE7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825AE7D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825AE808;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825ae8c4
	if (!cr6.eq) goto loc_825AE8C4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825ae8c4
	if (cr6.eq) goto loc_825AE8C4;
	// lbz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 84);
	// addi r28,r30,5644
	ctx.r28.s64 = ctx.r30.s64 + 5644;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8399f4f0
	ctx.lr = 0x825AE834;
	sub_8399F4F0(ctx, base);
	// lbz r9,87(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 87);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r4,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82a19da0
	ctx.lr = 0x825AE848;
	sub_82A19DA0(ctx, base);
	// lbz r7,95(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 95);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x825ae8c4
	if (!cr6.eq) goto loc_825AE8C4;
	// ld r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 28);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x825ae878
	if (cr6.eq) goto loc_825AE878;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// bne cr6,0x825ae8c4
	if (!cr6.eq) goto loc_825AE8C4;
loc_825AE878:
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ae8c4
	if (cr6.eq) goto loc_825AE8C4;
	// lbz r11,97(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ae8c4
	if (cr6.eq) goto loc_825AE8C4;
	// lfs f1,4464(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a29130
	ctx.lr = 0x825AE898;
	sub_82A29130(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1a5a8
	ctx.lr = 0x825AE8A4;
	sub_82A1A5A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// bl 0x82a1b108
	ctx.lr = 0x825AE8C4;
	sub_82A1B108(ctx, base);
loc_825AE8C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AE8CC"))) PPC_WEAK_FUNC(sub_825AE8CC);
PPC_FUNC_IMPL(__imp__sub_825AE8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AE8D0"))) PPC_WEAK_FUNC(sub_825AE8D0);
PPC_FUNC_IMPL(__imp__sub_825AE8D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x825AE8D8;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825ae8fc
	if (!cr6.eq) goto loc_825AE8FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_825AE8FC:
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_825AE908:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r19,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r19.u8);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x825ae908
	if (cr6.lt) goto loc_825AE908;
	// lhz r11,6(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 6);
	// lhz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r22.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x825ae938
	if (cr6.eq) goto loc_825AE938;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_825AE938:
	// lhz r11,10(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 10);
	// lhz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r22.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x825ae950
	if (cr6.eq) goto loc_825AE950;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
loc_825AE950:
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// li r20,11
	ctx.r20.s64 = 11;
loc_825AE95C:
	// addi r11,r25,11
	ctx.r11.s64 = ctx.r25.s64 + 11;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r25,-1
	ctx.r9.s64 = ctx.r25.s64 + -1;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lbzx r24,r25,r10
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r10.u32);
	// lwzx r31,r26,r23
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r23.u32);
	// rlwinm r28,r8,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x825aea24
	if (cr6.eq) goto loc_825AEA24;
	// cmplwi cr6,r24,2
	cr6.compare<uint32_t>(ctx.r24.u32, 2, xer);
	// bgt cr6,0x825aea24
	if (cr6.gt) goto loc_825AEA24;
	// cmplwi cr6,r24,1
	cr6.compare<uint32_t>(ctx.r24.u32, 1, xer);
	// bne cr6,0x825ae9a0
	if (!cr6.eq) goto loc_825AE9A0;
	// lhz r29,4(r22)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r22.u32 + 4);
	// b 0x825ae9a4
	goto loc_825AE9A4;
loc_825AE9A0:
	// lhz r29,8(r22)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r22.u32 + 8);
loc_825AE9A4:
	// cmplwi cr6,r24,1
	cr6.compare<uint32_t>(ctx.r24.u32, 1, xer);
	// bne cr6,0x825ae9b4
	if (!cr6.eq) goto loc_825AE9B4;
	// lhz r30,6(r22)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r22.u32 + 6);
	// b 0x825ae9b8
	goto loc_825AE9B8;
loc_825AE9B4:
	// lhz r30,10(r22)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r22.u32 + 10);
loc_825AE9B8:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x825aea24
	if (cr6.eq) goto loc_825AEA24;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bne cr6,0x825ae9fc
	if (!cr6.eq) goto loc_825AE9FC;
	// lwz r31,52(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 52);
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// beq cr6,0x825ae9e4
	if (cr6.eq) goto loc_825AE9E4;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x825ae9fc
	goto loc_825AE9FC;
loc_825AE9E4:
	// lwz r11,36(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 36);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82a54f18
	ctx.lr = 0x825AE9F0;
	sub_82A54F18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// beq cr6,0x825aea20
	if (cr6.eq) goto loc_825AEA20;
loc_825AE9FC:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r3,36(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 36);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x825c1690
	ctx.lr = 0x825AEA14;
	sub_825C1690(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aea24
	if (!cr6.eq) goto loc_825AEA24;
loc_825AEA20:
	// li r21,1
	ctx.r21.s64 = 1;
loc_825AEA24:
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aea74
	if (!cr6.eq) goto loc_825AEA74;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// stwx r31,r26,r23
	PPC_STORE_U32(ctx.r26.u32 + ctx.r23.u32, ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825aea44
	if (cr6.eq) goto loc_825AEA44;
	// stw r20,52(r23)
	PPC_STORE_U32(ctx.r23.u32 + 52, ctx.r20.u32);
loc_825AEA44:
	// cmplwi cr6,r24,1
	cr6.compare<uint32_t>(ctx.r24.u32, 1, xer);
	// bne cr6,0x825aea60
	if (!cr6.eq) goto loc_825AEA60;
	// lwz r11,48(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// beq cr6,0x825aea60
	if (cr6.eq) goto loc_825AEA60;
	// stw r11,52(r23)
	PPC_STORE_U32(ctx.r23.u32 + 52, ctx.r11.u32);
	// stw r20,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r20.u32);
loc_825AEA60:
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x825ae95c
	if (cr6.lt) goto loc_825AE95C;
loc_825AEA74:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AEA80"))) PPC_WEAK_FUNC(sub_825AEA80);
PPC_FUNC_IMPL(__imp__sub_825AEA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x825AEA88;
	__savegprlr_16(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// lhz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lhz r8,22(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 22);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lhz r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 24);
	// addi r5,r9,21716
	ctx.r5.s64 = ctx.r9.s64 + 21716;
	// lhz r3,26(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 26);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// ld r7,44(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 44);
	// lbz r24,28(r4)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 28);
	// lbz r22,29(r4)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r4.u32 + 29);
	// lbz r21,30(r4)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r4.u32 + 30);
	// lbz r20,31(r4)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r4.u32 + 31);
	// lbz r23,32(r4)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r4.u32 + 32);
	// lbz r11,33(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 33);
	// lbz r30,34(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 34);
	// lbz r25,35(r4)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r4.u32 + 35);
	// lwz r18,36(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r17,52(r4)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// lwz r16,56(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stb r24,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r24.u8);
	// stb r22,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r22.u8);
	// stb r21,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r21.u8);
	// stb r20,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r20.u8);
	// stb r23,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r23.u8);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// stb r30,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r30.u8);
	// stb r25,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r25.u8);
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// stw r16,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r16.u32);
	// sth r10,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// sth r8,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r8.u16);
	// sth r6,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r6.u16);
	// sth r3,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r3.u16);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// std r7,124(r1)
	PPC_STORE_U64(ctx.r1.u32 + 124, ctx.r7.u64);
	// beq cr6,0x825aeb38
	if (cr6.eq) goto loc_825AEB38;
	// li r18,11
	ctx.r18.s64 = 11;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
loc_825AEB38:
	// li r28,6
	ctx.r28.s64 = 6;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// cmplwi cr6,r18,13
	cr6.compare<uint32_t>(ctx.r18.u32, 13, xer);
	// bgt cr6,0x825aedbc
	if (cr6.gt) goto loc_825AEDBC;
	// lis r12,-32165
	ctx.r12.s64 = -2107965440;
	// rlwinm r0,r18,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-5276
	ctx.r12.s64 = ctx.r12.s64 + -5276;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r18.u32) {
	case 0:
		goto loc_825AECDC;
	case 1:
		goto loc_825AECDC;
	case 2:
		goto loc_825AEBCC;
	case 3:
		goto loc_825AF170;
	case 4:
		goto loc_825AF170;
	case 5:
		goto loc_825AEC1C;
	case 6:
		goto loc_825AEC80;
	case 7:
		goto loc_825AECDC;
	case 8:
		goto loc_825AECDC;
	case 9:
		goto loc_825AEDBC;
	case 10:
		goto loc_825AEDBC;
	case 11:
		goto loc_825AEDE0;
	case 12:
		goto loc_825AEB9C;
	case 13:
		goto loc_825AEDC8;
	default:
		return;
	}
	// lwz r18,-4900(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4900);
	// lwz r18,-4900(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4900);
	// lwz r18,-5172(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5172);
	// lwz r18,-3728(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3728);
	// lwz r18,-3728(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3728);
	// lwz r18,-5092(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5092);
	// lwz r18,-4992(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4992);
	// lwz r18,-4900(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4900);
	// lwz r18,-4900(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4900);
	// lwz r18,-4676(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4676);
	// lwz r18,-4676(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4676);
	// lwz r18,-4640(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4640);
	// lwz r18,-5220(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5220);
	// lwz r18,-4664(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4664);
loc_825AEB9C:
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bl 0x82a563f0
	ctx.lr = 0x825AEBA4;
	sub_82A563F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825af170
	if (cr6.eq) goto loc_825AF170;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bl 0x82a56420
	ctx.lr = 0x825AEBB8;
	sub_82A56420(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bl 0x82a56460
	ctx.lr = 0x825AEBC4;
	sub_82A56460(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_825AEBCC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825aebe4
	if (cr6.eq) goto loc_825AEBE4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825aea80
	ctx.lr = 0x825AEBE4;
	sub_825AEA80(ctx, base);
loc_825AEBE4:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bl 0x82a562d8
	ctx.lr = 0x825AEBF0;
	sub_82A562D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x825aecdc
	if (cr6.eq) goto loc_825AECDC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// li r4,6
	ctx.r4.s64 = 6;
	// stb r11,768(r26)
	PPC_STORE_U8(ctx.r26.u32 + 768, ctx.r11.u8);
	// bl 0x82a564c8
	ctx.lr = 0x825AEC14;
	sub_82A564C8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_825AEC1C:
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bl 0x82a562d8
	ctx.lr = 0x825AEC28;
	sub_82A562D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x825aecdc
	if (cr6.eq) goto loc_825AECDC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bl 0x82a56460
	ctx.lr = 0x825AEC44;
	sub_82A56460(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825aece0
	if (cr6.eq) goto loc_825AECE0;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x825aece0
	if (cr6.eq) goto loc_825AECE0;
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x825aece0
	if (!cr6.eq) goto loc_825AECE0;
loc_825AEC6C:
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bl 0x82a564c8
	ctx.lr = 0x825AEC78;
	sub_82A564C8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_825AEC80:
	// clrlwi r29,r23,24
	ctx.r29.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x825aec94
	if (cr6.eq) goto loc_825AEC94;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// bne cr6,0x825af170
	if (!cr6.eq) goto loc_825AF170;
loc_825AEC94:
	// clrlwi r31,r25,24
	ctx.r31.u64 = ctx.r25.u32 & 0xFF;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// bne cr6,0x825aed08
	if (!cr6.eq) goto loc_825AED08;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bl 0x82a562d8
	ctx.lr = 0x825AECB0;
	sub_82A562D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x825aecdc
	if (cr6.eq) goto loc_825AECDC;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bl 0x82a56460
	ctx.lr = 0x825AECC8;
	sub_82A56460(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825aecdc
	if (cr6.eq) goto loc_825AECDC;
	// li r11,80
	ctx.r11.s64 = 80;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_825AECDC:
	// li r31,1
	ctx.r31.s64 = 1;
loc_825AECE0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825aee68
	if (cr6.eq) goto loc_825AEE68;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bl 0x82a563f0
	ctx.lr = 0x825AECF4;
	sub_82A563F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aedf0
	if (!cr6.eq) goto loc_825AEDF0;
	// li r19,0
	ctx.r19.s64 = 0;
	// b 0x825aee68
	goto loc_825AEE68;
loc_825AED08:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x825aed18
	if (!cr6.eq) goto loc_825AED18;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x825aecdc
	if (cr6.lt) goto loc_825AECDC;
loc_825AED18:
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// bne cr6,0x825aed28
	if (!cr6.eq) goto loc_825AED28;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// blt cr6,0x825aecdc
	if (cr6.lt) goto loc_825AECDC;
loc_825AED28:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bl 0x82a562d8
	ctx.lr = 0x825AED34;
	sub_82A562D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x825aed60
	if (cr6.eq) goto loc_825AED60;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bl 0x82a56460
	ctx.lr = 0x825AED4C;
	sub_82A56460(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825aed60
	if (cr6.eq) goto loc_825AED60;
	// li r11,80
	ctx.r11.s64 = 80;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_825AED60:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// beq cr6,0x825aed78
	if (cr6.eq) goto loc_825AED78;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
loc_825AED78:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82a56318
	ctx.lr = 0x825AED88;
	sub_82A56318(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x825aecdc
	if (cr6.eq) goto loc_825AECDC;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bl 0x82a56460
	ctx.lr = 0x825AEDA0;
	sub_82A56460(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825aecdc
	if (cr6.eq) goto loc_825AECDC;
	// li r11,95
	ctx.r11.s64 = 95;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x825aecdc
	goto loc_825AECDC;
loc_825AEDBC:
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r18,13
	cr6.compare<int32_t>(ctx.r18.s32, 13, xer);
	// bne cr6,0x825aedd8
	if (!cr6.eq) goto loc_825AEDD8;
loc_825AEDC8:
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bl 0x82a56488
	ctx.lr = 0x825AEDD0;
	sub_82A56488(ctx, base);
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// b 0x825aee80
	goto loc_825AEE80;
loc_825AEDD8:
	// cmpwi cr6,r18,11
	cr6.compare<int32_t>(ctx.r18.s32, 11, xer);
	// bne cr6,0x825aece0
	if (!cr6.eq) goto loc_825AECE0;
loc_825AEDE0:
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bl 0x82a564a8
	ctx.lr = 0x825AEDE8;
	sub_82A564A8(ctx, base);
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// b 0x825aee80
	goto loc_825AEE80;
loc_825AEDF0:
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bl 0x82a56408
	ctx.lr = 0x825AEDF8;
	sub_82A56408(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aee1c
	if (!cr6.eq) goto loc_825AEE1C;
	// bl 0x82a56420
	ctx.lr = 0x825AEE0C;
	sub_82A56420(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r19,r11,24
	ctx.r19.u64 = ctx.r11.u32 & 0xFF;
	// b 0x825aee68
	goto loc_825AEE68;
loc_825AEE1C:
	// bl 0x82a563a0
	ctx.lr = 0x825AEE20;
	sub_82A563A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a56460
	ctx.lr = 0x825AEE30;
	sub_82A56460(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825aec6c
	if (cr6.eq) goto loc_825AEC6C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// clrlwi r10,r24,24
	ctx.r10.u64 = ctx.r24.u32 & 0xFF;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x825aee5c
	if (!cr6.lt) goto loc_825AEE5C;
loc_825AEE4C:
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82a564c8
	ctx.lr = 0x825AEE54;
	sub_82A564C8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_825AEE5C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a56a30
	ctx.lr = 0x825AEE64;
	sub_82A56A30(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_825AEE68:
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x825aee4c
	if (cr6.eq) goto loc_825AEE4C;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82a56460
	ctx.lr = 0x825AEE80;
	sub_82A56460(ctx, base);
loc_825AEE80:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825aec6c
	if (cr6.eq) goto loc_825AEC6C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825ae8d0
	ctx.lr = 0x825AEE9C;
	sub_825AE8D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825af170
	if (!cr6.eq) goto loc_825AF170;
	// lwz r3,36(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// bl 0x825c1980
	ctx.lr = 0x825AEEB0;
	sub_825C1980(ctx, base);
	// lbz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r24,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
	// li r27,25
	ctx.r27.s64 = 25;
	// stw r18,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r18.u32);
	// li r28,25
	ctx.r28.s64 = 25;
	// stb r22,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r22.u8);
	// stb r21,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r21.u8);
	// stb r20,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r20.u8);
	// stb r23,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r23.u8);
	// stb r25,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r25.u8);
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
	// lwz r4,4316(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4316);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x825aef0c
	if (cr6.lt) goto loc_825AEF0C;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x825aef0c
	if (!cr6.lt) goto loc_825AEF0C;
	// lwz r11,4320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4320);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x825aef0c
	if (cr6.lt) goto loc_825AEF0C;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825aef10
	if (cr6.lt) goto loc_825AEF10;
loc_825AEF0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825AEF10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825aef3c
	if (cr6.eq) goto loc_825AEF3C;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x825AEF28;
	sub_82A0C738(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825aef3c
	if (cr6.eq) goto loc_825AEF3C;
	// lwz r4,4320(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4320);
	// bl 0x82a29bf8
	ctx.lr = 0x825AEF38;
	sub_82A29BF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_825AEF3C:
	// lwz r4,4324(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4324);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x825aef68
	if (cr6.lt) goto loc_825AEF68;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x825aef68
	if (!cr6.lt) goto loc_825AEF68;
	// lwz r11,4328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4328);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x825aef68
	if (cr6.lt) goto loc_825AEF68;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825aef6c
	if (cr6.lt) goto loc_825AEF6C;
loc_825AEF68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825AEF6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825aef94
	if (cr6.eq) goto loc_825AEF94;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x825AEF80;
	sub_82A0C738(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825aef94
	if (cr6.eq) goto loc_825AEF94;
	// lwz r4,4328(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4328);
	// bl 0x82a29bf8
	ctx.lr = 0x825AEF90;
	sub_82A29BF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_825AEF94:
	// ld r11,4324(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4324);
	// cmplwi cr6,r18,13
	cr6.compare<uint32_t>(ctx.r18.u32, 13, xer);
	// ld r10,4316(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4316);
	// stw r17,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r17.u32);
	// stw r16,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r16.u32);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// std r10,20(r31)
	PPC_STORE_U64(ctx.r31.u32 + 20, ctx.r10.u64);
	// std r11,28(r31)
	PPC_STORE_U64(ctx.r31.u32 + 28, ctx.r11.u64);
	// bgt cr6,0x825af01c
	if (cr6.gt) goto loc_825AF01C;
	// lis r12,-32165
	ctx.r12.s64 = -2107965440;
	// rlwinm r0,r18,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4140
	ctx.r12.s64 = ctx.r12.s64 + -4140;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r18.u32) {
	case 0:
		goto loc_825AF00C;
	case 1:
		goto loc_825AF00C;
	case 2:
		goto loc_825AF00C;
	case 3:
		goto loc_825AF00C;
	case 4:
		goto loc_825AF01C;
	case 5:
		goto loc_825AF01C;
	case 6:
		goto loc_825AF00C;
	case 7:
		goto loc_825AF01C;
	case 8:
		goto loc_825AF01C;
	case 9:
		goto loc_825AF01C;
	case 10:
		goto loc_825AF01C;
	case 11:
		goto loc_825AF024;
	case 12:
		goto loc_825AF01C;
	case 13:
		goto loc_825AF024;
	default:
		return;
	}
	// lwz r18,-4084(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r18,-4084(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r18,-4084(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r18,-4084(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r18,-4068(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4068);
	// lwz r18,-4068(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4068);
	// lwz r18,-4084(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4084);
	// lwz r18,-4068(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4068);
	// lwz r18,-4068(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4068);
	// lwz r18,-4068(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4068);
	// lwz r18,-4068(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4068);
	// lwz r18,-4060(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4060);
	// lwz r18,-4068(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4068);
	// lwz r18,-4060(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4060);
loc_825AF00C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bl 0x82a564c8
	ctx.lr = 0x825AF018;
	sub_82A564C8(ctx, base);
	// b 0x825af024
	goto loc_825AF024;
loc_825AF01C:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_825AF024:
	// cmpwi cr6,r18,13
	cr6.compare<int32_t>(ctx.r18.s32, 13, xer);
	// bne cr6,0x825af170
	if (!cr6.eq) goto loc_825AF170;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,292(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bl 0x82a0c738
	ctx.lr = 0x825AF03C;
	sub_82A0C738(ctx, base);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c738
	ctx.lr = 0x825AF050;
	sub_82A0C738(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825af170
	if (cr6.eq) goto loc_825AF170;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x825af170
	if (cr6.eq) goto loc_825AF170;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825af170
	if (cr6.eq) goto loc_825AF170;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ab10
	ctx.lr = 0x825AF074;
	sub_82A1AB10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ab20
	ctx.lr = 0x825AF080;
	sub_82A1AB20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge cr6,0x825af094
	if (!cr6.lt) goto loc_825AF094;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x825af0bc
	goto loc_825AF0BC;
loc_825AF094:
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// bge cr6,0x825af0a4
	if (!cr6.lt) goto loc_825AF0A4;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x825af0bc
	goto loc_825AF0BC;
loc_825AF0A4:
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
	// clrlwi r26,r7,31
	ctx.r26.u64 = ctx.r7.u32 & 0x1;
loc_825AF0BC:
	// li r27,32
	ctx.r27.s64 = 32;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x825af0d0
	if (!cr6.eq) goto loc_825AF0D0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x825af0dc
	goto loc_825AF0DC;
loc_825AF0D0:
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// bne cr6,0x825af0e8
	if (!cr6.eq) goto loc_825AF0E8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_825AF0DC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a161a8
	ctx.lr = 0x825AF0E4;
	sub_82A161A8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_825AF0E8:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge cr6,0x825af0f8
	if (!cr6.lt) goto loc_825AF0F8;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x825af120
	goto loc_825AF120;
loc_825AF0F8:
	// cmpwi cr6,r28,11
	cr6.compare<int32_t>(ctx.r28.s32, 11, xer);
	// bge cr6,0x825af108
	if (!cr6.lt) goto loc_825AF108;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x825af120
	goto loc_825AF120;
loc_825AF108:
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
	// clrlwi r30,r7,31
	ctx.r30.u64 = ctx.r7.u32 & 0x1;
loc_825AF120:
	// li r3,32
	ctx.r3.s64 = 32;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x825af134
	if (!cr6.eq) goto loc_825AF134;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x825af140
	goto loc_825AF140;
loc_825AF134:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x825af148
	if (!cr6.eq) goto loc_825AF148;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_825AF140:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a161a8
	ctx.lr = 0x825AF148;
	sub_82A161A8(ctx, base);
loc_825AF148:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// std r11,20(r31)
	PPC_STORE_U64(ctx.r31.u32 + 20, ctx.r11.u64);
	// std r10,28(r31)
	PPC_STORE_U64(ctx.r31.u32 + 28, ctx.r10.u64);
loc_825AF170:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AF178"))) PPC_WEAK_FUNC(sub_825AF178);
PPC_FUNC_IMPL(__imp__sub_825AF178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r7,76(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x825af18c
	if (!cr6.eq) goto loc_825AF18C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825AF18C:
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r9,r4,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r10,5
	ctx.r10.s64 = 5;
	// subfe r5,r9,r6
	temp.u8 = (~ctx.r9.u32 + ctx.r6.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r1,-36
	ctx.r8.s64 = ctx.r1.s64 + -36;
	// and r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 & ctx.r4.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,20856
	ctx.r11.s64 = ctx.r11.s64 + 20856;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_825AF1CC:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x825af1cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825AF1CC;
	// lwz r11,-28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x825af1ec
	if (cr6.gt) goto loc_825AF1EC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_825AF1EC:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r11.u64);
	// lfd f0,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,24552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24552);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-23848(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23848);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f9.u64);
	// lwz r3,-44(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AF228"))) PPC_WEAK_FUNC(sub_825AF228);
PPC_FUNC_IMPL(__imp__sub_825AF228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x825AF230;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x831ce778
	ctx.lr = 0x825AF238;
	__savefpr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825af564
	if (cr6.eq) goto loc_825AF564;
	// lwz r19,24(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825af564
	if (cr6.eq) goto loc_825AF564;
	// lwz r11,36(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x825af564
	if (!cr6.eq) goto loc_825AF564;
	// cmpwi cr6,r19,3
	cr6.compare<int32_t>(ctx.r19.s32, 3, xer);
	// beq cr6,0x825af284
	if (cr6.eq) goto loc_825AF284;
	// cmpwi cr6,r19,4
	cr6.compare<int32_t>(ctx.r19.s32, 4, xer);
	// bne cr6,0x825af564
	if (!cr6.eq) goto loc_825AF564;
loc_825AF284:
	// lfs f1,4464(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a29130
	ctx.lr = 0x825AF28C;
	sub_82A29130(ctx, base);
	// lwz r4,5360(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5360);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r19,3
	cr6.compare<int32_t>(ctx.r19.s32, 3, xer);
	// bne cr6,0x825af2bc
	if (!cr6.eq) goto loc_825AF2BC;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x825af2b4
	if (cr6.eq) goto loc_825AF2B4;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x825af2b4
	if (cr6.eq) goto loc_825AF2B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825af2bc
	goto loc_825AF2BC;
loc_825AF2B4:
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_825AF2BC:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x825af178
	ctx.lr = 0x825AF2C4;
	sub_825AF178(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r26,r29,5644
	ctx.r26.s64 = ctx.r29.s64 + 5644;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82a22d18
	ctx.lr = 0x825AF2E0;
	sub_82A22D18(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x825af2fc
	if (!cr6.eq) goto loc_825AF2FC;
	// lbz r10,125(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 125);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825af2fc
	if (cr6.eq) goto loc_825AF2FC;
	// li r31,1
	ctx.r31.s64 = 1;
loc_825AF2FC:
	// clrlwi r28,r31,24
	ctx.r28.u64 = ctx.r31.u32 & 0xFF;
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x825af3dc
	if (!cr6.eq) goto loc_825AF3DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22b40
	ctx.lr = 0x825AF320;
	sub_82A22B40(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// beq cr6,0x825af340
	if (cr6.eq) goto loc_825AF340;
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// beq cr6,0x825af340
	if (cr6.eq) goto loc_825AF340;
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// bne cr6,0x825af3b4
	if (!cr6.eq) goto loc_825AF3B4;
loc_825AF340:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x825af36c
	if (cr6.lt) goto loc_825AF36C;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x825af36c
	if (!cr6.lt) goto loc_825AF36C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x825af36c
	if (cr6.lt) goto loc_825AF36C;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825af370
	if (cr6.lt) goto loc_825AF370;
loc_825AF36C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825AF370:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825af3b4
	if (cr6.eq) goto loc_825AF3B4;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x825AF384;
	sub_82A0C738(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825af3d4
	if (cr6.eq) goto loc_825AF3D4;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82a16440
	ctx.lr = 0x825AF394;
	sub_82A16440(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r22,64
	ctx.r3.s64 = ctx.r22.s64 + 64;
	// bl 0x82a2a310
	ctx.lr = 0x825AF3A4;
	sub_82A2A310(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// bne cr6,0x825af3d4
	if (!cr6.eq) goto loc_825AF3D4;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x825af3d4
	goto loc_825AF3D4;
loc_825AF3B4:
	// cmpwi cr6,r10,14
	cr6.compare<int32_t>(ctx.r10.s32, 14, xer);
	// bne cr6,0x825af3d4
	if (!cr6.eq) goto loc_825AF3D4;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x825af3d0
	if (cr6.eq) goto loc_825AF3D0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x825af3d4
	if (!cr6.eq) goto loc_825AF3D4;
loc_825AF3D0:
	// li r24,1
	ctx.r24.s64 = 1;
loc_825AF3D4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x825af41c
	if (cr6.eq) goto loc_825AF41C;
loc_825AF3DC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a1a5a8
	ctx.lr = 0x825AF3EC;
	sub_82A1A5A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// bl 0x82a1b108
	ctx.lr = 0x825AF40C;
	sub_82A1B108(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x831ce7c4
	ctx.lr = 0x825AF418;
	__restfpr_28(ctx, base);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_825AF41C:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825af454
	if (cr6.eq) goto loc_825AF454;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1a5a8
	ctx.lr = 0x825AF430;
	sub_82A1A5A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// bl 0x82a1ae98
	ctx.lr = 0x825AF444;
	sub_82A1AE98(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x831ce7c4
	ctx.lr = 0x825AF450;
	__restfpr_28(ctx, base);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_825AF454:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825af48c
	if (cr6.eq) goto loc_825AF48C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1a5a8
	ctx.lr = 0x825AF468;
	sub_82A1A5A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// bl 0x82a1b0c0
	ctx.lr = 0x825AF47C;
	sub_82A1B0C0(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x831ce7c4
	ctx.lr = 0x825AF488;
	__restfpr_28(ctx, base);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_825AF48C:
	// cmplwi cr6,r23,5
	cr6.compare<uint32_t>(ctx.r23.u32, 5, xer);
	// blt cr6,0x825af4a4
	if (cr6.lt) goto loc_825AF4A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1a5a8
	ctx.lr = 0x825AF49C;
	sub_82A1A5A8(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// b 0x825af550
	goto loc_825AF550;
loc_825AF4A4:
	// cmpwi cr6,r19,4
	cr6.compare<int32_t>(ctx.r19.s32, 4, xer);
	// beq cr6,0x825af564
	if (cr6.eq) goto loc_825AF564;
	// lwz r10,-3564(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r10,6112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825af564
	if (cr6.eq) goto loc_825AF564;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825af564
	if (cr6.eq) goto loc_825AF564;
	// lfs f0,8224(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8236);
	ctx.f13.f64 = double(temp.f32);
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8228);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8240);
	ctx.f10.f64 = double(temp.f32);
	// fmr f31,f11
	ctx.f31.f64 = ctx.f11.f64;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,8220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8220);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8232);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f28,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// lfs f30,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f1,f3
	ctx.f1.f64 = double(float(sqrt(ctx.f3.f64)));
	// bl 0x825ae5b0
	ctx.lr = 0x825AF510;
	sub_825AE5B0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f28,f0
	ctx.f2.f64 = double(float(ctx.f28.f64 + ctx.f0.f64));
	// fcmpu cr6,f29,f2
	cr6.compare(ctx.f29.f64, ctx.f2.f64);
	// bge cr6,0x825af564
	if (!cr6.lt) goto loc_825AF564;
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// fabs f13,f31
	ctx.f13.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x825af564
	if (!cr6.lt) goto loc_825AF564;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-23864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x825af564
	if (!cr6.gt) goto loc_825AF564;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1a5a8
	ctx.lr = 0x825AF54C;
	sub_82A1A5A8(ctx, base);
	// li r7,10
	ctx.r7.s64 = 10;
loc_825AF550:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a1b050
	ctx.lr = 0x825AF564;
	sub_82A1B050(ctx, base);
loc_825AF564:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x831ce7c4
	ctx.lr = 0x825AF570;
	__restfpr_28(ctx, base);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AF574"))) PPC_WEAK_FUNC(sub_825AF574);
PPC_FUNC_IMPL(__imp__sub_825AF574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AF578"))) PPC_WEAK_FUNC(sub_825AF578);
PPC_FUNC_IMPL(__imp__sub_825AF578) {
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
	ctx.lr = 0x825AF580;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r9,r11,-23860
	ctx.r9.s64 = ctx.r11.s64 + -23860;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825af5e0
	if (cr6.eq) goto loc_825AF5E0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825AF5B4;
	sub_82595150(ctx, base);
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825af5d4
	if (cr6.eq) goto loc_825AF5D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AF5D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AF5D4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825AF5DC;
	sub_82595170(ctx, base);
	// stw r30,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r30.u32);
loc_825AF5E0:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825af630
	if (cr6.eq) goto loc_825AF630;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825AF5FC;
	sub_82595150(ctx, base);
	// lwz r31,36(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825af624
	if (cr6.eq) goto loc_825AF624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c1750
	ctx.lr = 0x825AF610;
	sub_825C1750(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x825AF614;
	sub_82595188(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x825AF624;
	sub_825952B8(ctx, base);
loc_825AF624:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825AF62C;
	sub_82595170(ctx, base);
	// stw r30,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r30.u32);
loc_825AF630:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r31,r28,40
	ctx.r31.s64 = ctx.r28.s64 + 40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825af67c
	if (cr6.eq) goto loc_825AF67C;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825AF650;
	sub_82595150(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825af670
	if (cr6.eq) goto loc_825AF670;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AF670;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825AF670:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825AF678;
	sub_82595170(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_825AF67C:
	// addi r29,r31,704
	ctx.r29.s64 = ctx.r31.s64 + 704;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// addi r27,r11,-24712
	ctx.r27.s64 = ctx.r11.s64 + -24712;
loc_825AF690:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// stwu r27,-20(r29)
	ea = -20 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r29.u32 = ea;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825af6c8
	if (cr6.eq) goto loc_825AF6C8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825af6c8
	if (cr6.eq) goto loc_825AF6C8;
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
	ctx.lr = 0x825AF6C4;
	sub_8353F3B8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_825AF6C8:
	// stb r30,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r30.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825af6f0
	if (cr6.eq) goto loc_825AF6F0;
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
	ctx.lr = 0x825AF6EC;
	sub_8353F3B8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_825AF6F0:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bge 0x825af690
	if (!cr0.lt) goto loc_825AF690;
	// addi r3,r28,64
	ctx.r3.s64 = ctx.r28.s64 + 64;
	// bl 0x82a0dc70
	ctx.lr = 0x825AF700;
	sub_82A0DC70(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r28,44
	ctx.r31.s64 = ctx.r28.s64 + 44;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825AF718;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825af740
	if (cr6.eq) goto loc_825AF740;
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
	ctx.lr = 0x825AF73C;
	sub_8353F3B8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_825AF740:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83535be8
	ctx.lr = 0x825AF748;
	sub_83535BE8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AF750"))) PPC_WEAK_FUNC(sub_825AF750);
PPC_FUNC_IMPL(__imp__sub_825AF750) {
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
	// bl 0x825af578
	ctx.lr = 0x825AF770;
	sub_825AF578(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825af790
	if (cr6.eq) goto loc_825AF790;
	// bl 0x82595188
	ctx.lr = 0x825AF780;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825AF790;
	sub_825952B8(ctx, base);
loc_825AF790:
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

__attribute__((alias("__imp__sub_825AF7AC"))) PPC_WEAK_FUNC(sub_825AF7AC);
PPC_FUNC_IMPL(__imp__sub_825AF7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AF7B0"))) PPC_WEAK_FUNC(sub_825AF7B0);
PPC_FUNC_IMPL(__imp__sub_825AF7B0) {
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
	// bne cr6,0x825af7d4
	if (!cr6.eq) goto loc_825AF7D4;
	// bl 0x825a94f0
	ctx.lr = 0x825AF7D4;
	sub_825A94F0(ctx, base);
loc_825AF7D4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825af7f0
	if (!cr6.eq) goto loc_825AF7F0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_825AF7F0:
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

__attribute__((alias("__imp__sub_825AF808"))) PPC_WEAK_FUNC(sub_825AF808);
PPC_FUNC_IMPL(__imp__sub_825AF808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x825AF810;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,6112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825afa18
	if (cr6.eq) goto loc_825AFA18;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825afa18
	if (cr6.eq) goto loc_825AFA18;
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x825af858
	if (cr6.eq) goto loc_825AF858;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x825af858
	if (cr6.eq) goto loc_825AF858;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x825afa18
	if (!cr6.eq) goto loc_825AFA18;
loc_825AF858:
	// ld r27,32(r24)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r24.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// std r27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r27.u64);
	// bne cr6,0x825af87c
	if (!cr6.eq) goto loc_825AF87C;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x825af910
	goto loc_825AF910;
loc_825AF87C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x825af910
	if (!cr6.eq) goto loc_825AF910;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x825af89c
	if (cr6.eq) goto loc_825AF89C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825af910
	if (!cr6.eq) goto loc_825AF910;
loc_825AF89C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r11,704
	ctx.r31.s64 = ctx.r11.s64 + 704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825af7b0
	ctx.lr = 0x825AF8B8;
	sub_825AF7B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825af8fc
	if (cr6.eq) goto loc_825AF8FC;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r4,32
	cr6.compare<int32_t>(ctx.r4.s32, 32, xer);
	// bge cr6,0x825af8fc
	if (!cr6.lt) goto loc_825AF8FC;
	// bl 0x82a16248
	ctx.lr = 0x825AF8D0;
	sub_82A16248(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x825AF8D8;
	sub_83102DB0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x825af8f8
	if (!cr6.lt) goto loc_825AF8F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x825AF8EC;
	sub_83102DB0(ctx, base);
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x825af8fc
	if (cr6.lt) goto loc_825AF8FC;
loc_825AF8F8:
	// li r29,1
	ctx.r29.s64 = 1;
loc_825AF8FC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825af910
	if (cr6.eq) goto loc_825AF910;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_825AF910:
	// lwz r31,4472(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4472);
	// lwz r30,60(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 60);
	// bl 0x83740858
	ctx.lr = 0x825AF91C;
	sub_83740858(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-29856(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29856);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r8,r9,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r9.s64;
	// subf. r30,r31,r8
	ctx.r30.s64 = ctx.r8.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x825af968
	if (!cr0.lt) goto loc_825AF968;
	// bl 0x83740858
	ctx.lr = 0x825AF958;
	sub_83740858(ctx, base);
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x825afa18
	if (cr6.lt) goto loc_825AFA18;
	// li r30,0
	ctx.r30.s64 = 0;
loc_825AF968:
	// lfs f1,4464(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// addi r31,r28,5644
	ctx.r31.s64 = ctx.r28.s64 + 5644;
	// bl 0x82a29130
	ctx.lr = 0x825AF974;
	sub_82A29130(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x825af9a8
	if (cr6.eq) goto loc_825AF9A8;
	// bl 0x82a1a5a8
	ctx.lr = 0x825AF98C;
	sub_82A1A5A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// bl 0x82a1af40
	ctx.lr = 0x825AF9A4;
	sub_82A1AF40(ctx, base);
	// b 0x825af9f0
	goto loc_825AF9F0;
loc_825AF9A8:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825af9d4
	if (cr6.eq) goto loc_825AF9D4;
	// bl 0x82a1a5a8
	ctx.lr = 0x825AF9B8;
	sub_82A1A5A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// bl 0x82a1afa0
	ctx.lr = 0x825AF9D0;
	sub_82A1AFA0(ctx, base);
	// b 0x825af9f0
	goto loc_825AF9F0;
loc_825AF9D4:
	// bl 0x82a1a5a8
	ctx.lr = 0x825AF9D8;
	sub_82A1A5A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// bl 0x82a1aee0
	ctx.lr = 0x825AF9F0;
	sub_82A1AEE0(ctx, base);
loc_825AF9F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832f8
	ctx.lr = 0x825AF9FC;
	sub_825832F8(ctx, base);
	// lbz r11,67(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 67);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x825afa14
	if (!cr6.eq) goto loc_825AFA14;
	// li r4,0
	ctx.r4.s64 = 0;
loc_825AFA14:
	// bl 0x83a7a9b0
	ctx.lr = 0x825AFA18;
	sub_83A7A9B0(ctx, base);
loc_825AFA18:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AFA20"))) PPC_WEAK_FUNC(sub_825AFA20);
PPC_FUNC_IMPL(__imp__sub_825AFA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x825AFA28;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,196(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x825afb44
	if (cr6.eq) goto loc_825AFB44;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a225d0
	ctx.lr = 0x825AFA48;
	sub_82A225D0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82919698
	ctx.lr = 0x825AFA50;
	sub_82919698(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a225d0
	ctx.lr = 0x825AFA5C;
	sub_82A225D0(ctx, base);
	// addis r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 196608;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r3,-29136
	ctx.r3.s64 = ctx.r3.s64 + -29136;
	// bl 0x82919698
	ctx.lr = 0x825AFA6C;
	sub_82919698(ctx, base);
	// lwz r11,4456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4456);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a22860
	ctx.lr = 0x825AFA80;
	sub_82A22860(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x825afb44
	if (!cr6.gt) goto loc_825AFB44;
loc_825AFA90:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a236f8
	ctx.lr = 0x825AFA9C;
	sub_82A236F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,30
	cr6.compare<int32_t>(ctx.r11.s32, 30, xer);
	// bgt cr6,0x825afaf0
	if (cr6.gt) goto loc_825AFAF0;
	// beq cr6,0x825afadc
	if (cr6.eq) goto loc_825AFADC;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x825afb38
	if (cr6.eq) goto loc_825AFB38;
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(ctx.r11.s32, 23, xer);
	// bne cr6,0x825afb38
	if (!cr6.eq) goto loc_825AFB38;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ae7d0
	ctx.lr = 0x825AFAD8;
	sub_825AE7D0(ctx, base);
	// b 0x825afb38
	goto loc_825AFB38;
loc_825AFADC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825af808
	ctx.lr = 0x825AFAEC;
	sub_825AF808(ctx, base);
	// b 0x825afb38
	goto loc_825AFB38;
loc_825AFAF0:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(ctx.r11.s32, 31, xer);
	// beq cr6,0x825afb20
	if (cr6.eq) goto loc_825AFB20;
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(ctx.r11.s32, 36, xer);
	// bne cr6,0x825afb38
	if (!cr6.eq) goto loc_825AFB38;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825af228
	ctx.lr = 0x825AFB1C;
	sub_825AF228(ctx, base);
	// b 0x825afb38
	goto loc_825AFB38;
loc_825AFB20:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ae6c8
	ctx.lr = 0x825AFB38;
	sub_825AE6C8(ctx, base);
loc_825AFB38:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r24
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r24.s32, xer);
	// blt cr6,0x825afa90
	if (cr6.lt) goto loc_825AFA90;
loc_825AFB44:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AFB4C"))) PPC_WEAK_FUNC(sub_825AFB4C);
PPC_FUNC_IMPL(__imp__sub_825AFB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AFB50"))) PPC_WEAK_FUNC(sub_825AFB50);
PPC_FUNC_IMPL(__imp__sub_825AFB50) {
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
	// bne cr6,0x825afb74
	if (!cr6.eq) goto loc_825AFB74;
	// bl 0x825ab6c8
	ctx.lr = 0x825AFB74;
	sub_825AB6C8(ctx, base);
loc_825AFB74:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825afb90
	if (!cr6.eq) goto loc_825AFB90;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,8888
	ctx.r10.s64 = ctx.r11.s64 + 8888;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825AFB90:
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

__attribute__((alias("__imp__sub_825AFBA8"))) PPC_WEAK_FUNC(sub_825AFBA8);
PPC_FUNC_IMPL(__imp__sub_825AFBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x825AFBB0;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x835360c0
	ctx.lr = 0x825AFBBC;
	sub_835360C0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-23860
	ctx.r10.s64 = ctx.r11.s64 + -23860;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r23,r31,64
	ctx.r23.s64 = ctx.r31.s64 + 64;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r8,r9,-24692
	ctx.r8.s64 = ctx.r9.s64 + -24692;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// bl 0x82a0db20
	ctx.lr = 0x825AFC04;
	sub_82A0DB20(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stb r30,708(r31)
	PPC_STORE_U8(ctx.r31.u32 + 708, ctx.r30.u8);
	// addi r5,r7,-22152
	ctx.r5.s64 = ctx.r7.s64 + -22152;
	// stw r30,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r30.u32);
	// stw r30,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r30.u32);
	// addi r11,r6,-23980
	ctx.r11.s64 = ctx.r6.s64 + -23980;
	// stw r30,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r30.u32);
	// li r10,25
	ctx.r10.s64 = 25;
	// stb r30,728(r31)
	PPC_STORE_U8(ctx.r31.u32 + 728, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r30.u32);
	// stw r30,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r30.u32);
	// stw r30,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r30.u32);
	// stw r5,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r5.u32);
	// stw r30,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r30.u32);
	// stb r30,760(r31)
	PPC_STORE_U8(ctx.r31.u32 + 760, ctx.r30.u8);
	// stw r30,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r30.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83537ae8
	ctx.lr = 0x825AFC60;
	sub_83537AE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x825AFC68;
	sub_825AB6C8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r27,r11,-25152
	ctx.r27.s64 = ctx.r11.s64 + -25152;
	// addi r25,r10,-25140
	ctx.r25.s64 = ctx.r10.s64 + -25140;
	// addi r24,r9,-25136
	ctx.r24.s64 = ctx.r9.s64 + -25136;
loc_825AFC88:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r29,r11,704
	ctx.r29.s64 = ctx.r11.s64 + 704;
	// lbz r10,708(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 708);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825afcf0
	if (!cr6.eq) goto loc_825AFCF0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// beq cr6,0x825afcb8
	if (cr6.eq) goto loc_825AFCB8;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
loc_825AFCB8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831d0b08
	ctx.lr = 0x825AFCC8;
	sub_831D0B08(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825AFCDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a93f0
	ctx.lr = 0x825AFCEC;
	sub_825A93F0(ctx, base);
	// stb r26,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r26.u8);
loc_825AFCF0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// blt cr6,0x825afc88
	if (cr6.lt) goto loc_825AFC88;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stb r30,768(r31)
	PPC_STORE_U8(ctx.r31.u32 + 768, ctx.r30.u8);
	// li r10,28
	ctx.r10.s64 = 28;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// li r8,255
	ctx.r8.s64 = 255;
	// stw r10,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r10.u32);
	// stw r9,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r9.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r8,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r8.u32);
	// bl 0x82a22560
	ctx.lr = 0x825AFD24;
	sub_82A22560(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a22530
	ctx.lr = 0x825AFD30;
	sub_82A22530(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a22530
	ctx.lr = 0x825AFD3C;
	sub_82A22530(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a22530
	ctx.lr = 0x825AFD48;
	sub_82A22530(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a22530
	ctx.lr = 0x825AFD54;
	sub_82A22530(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a22530
	ctx.lr = 0x825AFD60;
	sub_82A22530(ctx, base);
	// li r4,27
	ctx.r4.s64 = 27;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a22530
	ctx.lr = 0x825AFD6C;
	sub_82A22530(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a22530
	ctx.lr = 0x825AFD78;
	sub_82A22530(ctx, base);
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a22530
	ctx.lr = 0x825AFD84;
	sub_82A22530(ctx, base);
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a22530
	ctx.lr = 0x825AFD90;
	sub_82A22530(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a125c8
	ctx.lr = 0x825AFD9C;
	sub_82A125C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AFDA8"))) PPC_WEAK_FUNC(sub_825AFDA8);
PPC_FUNC_IMPL(__imp__sub_825AFDA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825AFDB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r27,r3,44
	ctx.r27.s64 = ctx.r3.s64 + 44;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r28,312(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// bne cr6,0x825afde4
	if (!cr6.eq) goto loc_825AFDE4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x825AFDE4;
	sub_825AB6C8(ctx, base);
loc_825AFDE4:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825afe00
	if (!cr6.eq) goto loc_825AFE00;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,8888
	ctx.r10.s64 = ctx.r11.s64 + 8888;
	// stw r10,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r10.u32);
loc_825AFE00:
	// lbz r11,4505(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4505);
	// lwz r25,16(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825afe1c
	if (!cr6.eq) goto loc_825AFE1C;
	// lbz r11,4507(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4507);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825afe4c
	if (cr6.eq) goto loc_825AFE4C;
loc_825AFE1C:
	// bl 0x83572958
	ctx.lr = 0x825AFE20;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825afe40
	if (!cr6.eq) goto loc_825AFE40;
	// lbz r11,4505(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4505);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825afe40
	if (cr6.eq) goto loc_825AFE40;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x825c15a0
	ctx.lr = 0x825AFE40;
	sub_825C15A0(ctx, base);
loc_825AFE40:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x825c1588
	ctx.lr = 0x825AFE4C;
	sub_825C1588(ctx, base);
loc_825AFE4C:
	// lbz r11,4504(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4504);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825afecc
	if (!cr6.eq) goto loc_825AFECC;
	// bl 0x83572958
	ctx.lr = 0x825AFE60;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825afecc
	if (!cr6.eq) goto loc_825AFECC;
	// lwz r11,764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x825afefc
	if (cr6.eq) goto loc_825AFEFC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825afe98
	if (!cr6.eq) goto loc_825AFE98;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x825c1980
	ctx.lr = 0x825AFE88;
	sub_825C1980(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825c1560
	ctx.lr = 0x825AFE98;
	sub_825C1560(ctx, base);
loc_825AFE98:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r11.u32);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r3,472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825afefc
	if (cr6.eq) goto loc_825AFEFC;
	// bl 0x82a47d40
	ctx.lr = 0x825AFEB4;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825afefc
	if (cr6.eq) goto loc_825AFEFC;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x825c1608
	ctx.lr = 0x825AFEC8;
	sub_825C1608(ctx, base);
	// b 0x825afefc
	goto loc_825AFEFC;
loc_825AFECC:
	// lwz r11,764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x825afefc
	if (cr6.eq) goto loc_825AFEFC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825afef8
	if (!cr6.eq) goto loc_825AFEF8;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x825c1980
	ctx.lr = 0x825AFEE8;
	sub_825C1980(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825c1560
	ctx.lr = 0x825AFEF8;
	sub_825C1560(ctx, base);
loc_825AFEF8:
	// stw r30,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r30.u32);
loc_825AFEFC:
	// lwz r11,764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x825aff20
	if (cr6.eq) goto loc_825AFF20;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825aff2c
	if (!cr6.eq) goto loc_825AFF2C;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x825c1578
	ctx.lr = 0x825AFF18;
	sub_825C1578(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x825aff2c
	if (!cr6.eq) goto loc_825AFF2C;
loc_825AFF20:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x825c1f40
	ctx.lr = 0x825AFF2C;
	sub_825C1F40(ctx, base);
loc_825AFF2C:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825aff60
	if (!cr6.eq) goto loc_825AFF60;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x825c1678
	ctx.lr = 0x825AFF44;
	sub_825C1678(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825aff5c
	if (cr6.eq) goto loc_825AFF5C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,5816(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5816, ctx.r11.u8);
	// b 0x825aff60
	goto loc_825AFF60;
loc_825AFF5C:
	// stb r30,5816(r25)
	PPC_STORE_U8(ctx.r25.u32 + 5816, ctx.r30.u8);
loc_825AFF60:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825aff78
	if (cr6.eq) goto loc_825AFF78;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x825a8a78
	ctx.lr = 0x825AFF74;
	sub_825A8A78(ctx, base);
	// stw r30,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r30.u32);
loc_825AFF78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AFF80"))) PPC_WEAK_FUNC(sub_825AFF80);
PPC_FUNC_IMPL(__imp__sub_825AFF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x825AFF88;
	__savegprlr_14(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// stw r3,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r3,352(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825b0454
	if (cr6.eq) goto loc_825B0454;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b0454
	if (cr6.eq) goto loc_825B0454;
	// lwz r11,4456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4456);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x825b0454
	if (cr6.eq) goto loc_825B0454;
	// bl 0x825832e0
	ctx.lr = 0x825AFFC8;
	sub_825832E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825b0454
	if (!cr6.eq) goto loc_825B0454;
	// addi r26,r31,44
	ctx.r26.s64 = ctx.r31.s64 + 44;
	// addi r31,r30,5644
	ctx.r31.s64 = ctx.r30.s64 + 5644;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r30,r30,5692
	ctx.r30.s64 = ctx.r30.s64 + 5692;
	// bl 0x825afb50
	ctx.lr = 0x825AFFE8;
	sub_825AFB50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x825832e0
	ctx.lr = 0x825AFFF8;
	sub_825832E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r27,r11,21716
	ctx.r27.s64 = ctx.r11.s64 + 21716;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// beq cr6,0x825b0290
	if (cr6.eq) goto loc_825B0290;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// bne cr6,0x825b0258
	if (!cr6.eq) goto loc_825B0258;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307e040
	ctx.lr = 0x825B0028;
	sub_8307E040(ctx, base);
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bgt cr6,0x825b0250
	if (cr6.gt) goto loc_825B0250;
	// lis r12,-32165
	ctx.r12.s64 = -2107965440;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,72
	ctx.r12.s64 = ctx.r12.s64 + 72;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_825B0074;
	case 1:
		goto loc_825B007C;
	case 2:
		goto loc_825B0084;
	case 3:
		goto loc_825B008C;
	case 4:
		goto loc_825B0094;
	case 5:
		goto loc_825B009C;
	case 6:
		goto loc_825B00A4;
	case 7:
		goto loc_825B00AC;
	case 8:
		goto loc_825B00B4;
	case 9:
		goto loc_825B00BC;
	case 10:
		goto loc_825B00C4;
	default:
		return;
	}
	// lwz r18,116(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// lwz r18,124(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 124);
	// lwz r18,132(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// lwz r18,140(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// lwz r18,148(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// lwz r18,156(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// lwz r18,164(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// lwz r18,172(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 172);
	// lwz r18,180(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 180);
	// lwz r18,188(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 188);
	// lwz r18,196(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 196);
loc_825B0074:
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x825b00c8
	goto loc_825B00C8;
loc_825B007C:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x825b00c8
	goto loc_825B00C8;
loc_825B0084:
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x825b00c8
	goto loc_825B00C8;
loc_825B008C:
	// li r29,3
	ctx.r29.s64 = 3;
	// b 0x825b00c8
	goto loc_825B00C8;
loc_825B0094:
	// li r29,4
	ctx.r29.s64 = 4;
	// b 0x825b00c8
	goto loc_825B00C8;
loc_825B009C:
	// li r29,5
	ctx.r29.s64 = 5;
	// b 0x825b00c8
	goto loc_825B00C8;
loc_825B00A4:
	// li r29,6
	ctx.r29.s64 = 6;
	// b 0x825b00c8
	goto loc_825B00C8;
loc_825B00AC:
	// li r29,7
	ctx.r29.s64 = 7;
	// b 0x825b00c8
	goto loc_825B00C8;
loc_825B00B4:
	// li r29,12
	ctx.r29.s64 = 12;
	// b 0x825b00c8
	goto loc_825B00C8;
loc_825B00BC:
	// li r29,11
	ctx.r29.s64 = 11;
	// b 0x825b00c8
	goto loc_825B00C8;
loc_825B00C4:
	// li r29,8
	ctx.r29.s64 = 8;
loc_825B00C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a19d68
	ctx.lr = 0x825B00D0;
	sub_82A19D68(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a19d70
	ctx.lr = 0x825B00DC;
	sub_82A19D70(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a19d78
	ctx.lr = 0x825B00E8;
	sub_82A19D78(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a19d80
	ctx.lr = 0x825B00F4;
	sub_82A19D80(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dcd5d0
	ctx.lr = 0x825B0100;
	sub_82DCD5D0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83096a68
	ctx.lr = 0x825B010C;
	sub_83096A68(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83096a70
	ctx.lr = 0x825B0118;
	sub_83096A70(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab678
	ctx.lr = 0x825B0124;
	sub_82DAB678(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a47e20
	ctx.lr = 0x825B0130;
	sub_82A47E20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r28,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82dab6b8
	ctx.lr = 0x825B0144;
	sub_82DAB6B8(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831237e0
	ctx.lr = 0x825B0150;
	sub_831237E0(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x825B015C;
	sub_82DAB6D0(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a19d88
	ctx.lr = 0x825B016C;
	sub_82A19D88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac2480
	ctx.lr = 0x825B0174;
	sub_83AC2480(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82921c20
	ctx.lr = 0x825B0180;
	sub_82921C20(ctx, base);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bl 0x82dcd5c8
	ctx.lr = 0x825B0194;
	sub_82DCD5C8(ctx, base);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// stb r3,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r3.u8);
	// li r8,44
	ctx.r8.s64 = 44;
	// sth r26,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r26.u16);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// sth r25,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r25.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r24,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r24.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// ori r4,r4,50
	ctx.r4.u64 = ctx.r4.u64 | 50;
	// sth r23,122(r1)
	PPC_STORE_U16(ctx.r1.u32 + 122, ctx.r23.u16);
	// stb r22,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r22.u8);
	// stb r21,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r21.u8);
	// stb r20,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r20.u8);
	// stb r19,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r19.u8);
	// stb r28,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r28.u8);
	// stb r18,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r18.u8);
	// stb r17,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r17.u8);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r16,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r16.u32);
	// stw r15,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r15.u32);
	// stw r14,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r14.u32);
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// ld r26,104(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// std r26,140(r1)
	PPC_STORE_U64(ctx.r1.u32 + 140, ctx.r26.u64);
	// bl 0x83535150
	ctx.lr = 0x825B0208;
	sub_83535150(ctx, base);
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// li r25,1
	ctx.r25.s64 = 1;
	// bne cr6,0x825b0218
	if (!cr6.eq) goto loc_825B0218;
	// lbz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_825B0218:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b0238
	if (cr6.eq) goto loc_825B0238;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// beq cr6,0x825b0234
	if (cr6.eq) goto loc_825B0234;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// bne cr6,0x825b0238
	if (!cr6.eq) goto loc_825B0238;
loc_825B0234:
	// li r25,0
	ctx.r25.s64 = 0;
loc_825B0238:
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// b 0x825b025c
	goto loc_825B025C;
loc_825B0250:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x825b025c
	goto loc_825B025C;
loc_825B0258:
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
loc_825B025C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x825b0290
	if (cr6.eq) goto loc_825B0290;
	// addi r3,r28,5644
	ctx.r3.s64 = ctx.r28.s64 + 5644;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x825b028c
	if (!cr6.eq) goto loc_825B028C;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b0284
	if (cr6.eq) goto loc_825B0284;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,5815(r28)
	PPC_STORE_U8(ctx.r28.u32 + 5815, ctx.r11.u8);
loc_825B0284:
	// bl 0x82a1ad78
	ctx.lr = 0x825B0288;
	sub_82A1AD78(ctx, base);
	// b 0x825b0290
	goto loc_825B0290;
loc_825B028C:
	// bl 0x825832f8
	ctx.lr = 0x825B0290;
	sub_825832F8(ctx, base);
loc_825B0290:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e0
	ctx.lr = 0x825B0298;
	sub_825832E0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825b042c
	if (cr6.eq) goto loc_825B042C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b0408
	if (!cr6.eq) goto loc_825B0408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8307e040
	ctx.lr = 0x825B02B0;
	sub_8307E040(ctx, base);
	// cmpwi cr6,r3,13
	cr6.compare<int32_t>(ctx.r3.s32, 13, xer);
	// bne cr6,0x825b0400
	if (!cr6.eq) goto loc_825B0400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a19d68
	ctx.lr = 0x825B02C0;
	sub_82A19D68(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a19d70
	ctx.lr = 0x825B02CC;
	sub_82A19D70(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a19d78
	ctx.lr = 0x825B02D8;
	sub_82A19D78(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a19d80
	ctx.lr = 0x825B02E4;
	sub_82A19D80(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dcd5d0
	ctx.lr = 0x825B02F0;
	sub_82DCD5D0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83096a68
	ctx.lr = 0x825B02FC;
	sub_83096A68(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83096a70
	ctx.lr = 0x825B0308;
	sub_83096A70(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab678
	ctx.lr = 0x825B0314;
	sub_82DAB678(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a47e20
	ctx.lr = 0x825B0320;
	sub_82A47E20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82dab6b8
	ctx.lr = 0x825B0334;
	sub_82DAB6B8(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831237e0
	ctx.lr = 0x825B0340;
	sub_831237E0(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x825B034C;
	sub_82DAB6D0(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a19d88
	ctx.lr = 0x825B035C;
	sub_82A19D88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ac2480
	ctx.lr = 0x825B0364;
	sub_83AC2480(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82921c20
	ctx.lr = 0x825B0370;
	sub_82921C20(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x82dcd5c8
	ctx.lr = 0x825B0380;
	sub_82DCD5C8(ctx, base);
	// li r9,13
	ctx.r9.s64 = 13;
	// stb r3,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r3.u8);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// sth r26,164(r1)
	PPC_STORE_U16(ctx.r1.u32 + 164, ctx.r26.u16);
	// li r8,44
	ctx.r8.s64 = 44;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// sth r25,166(r1)
	PPC_STORE_U16(ctx.r1.u32 + 166, ctx.r25.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r24,168(r1)
	PPC_STORE_U16(ctx.r1.u32 + 168, ctx.r24.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r23,170(r1)
	PPC_STORE_U16(ctx.r1.u32 + 170, ctx.r23.u16);
	// ori r4,r4,50
	ctx.r4.u64 = ctx.r4.u64 | 50;
	// stb r22,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r22.u8);
	// stb r21,174(r1)
	PPC_STORE_U8(ctx.r1.u32 + 174, ctx.r21.u8);
	// stb r20,175(r1)
	PPC_STORE_U8(ctx.r1.u32 + 175, ctx.r20.u8);
	// stb r19,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r19.u8);
	// stb r31,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r31.u8);
	// stb r18,178(r1)
	PPC_STORE_U8(ctx.r1.u32 + 178, ctx.r18.u8);
	// stb r17,179(r1)
	PPC_STORE_U8(ctx.r1.u32 + 179, ctx.r17.u8);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stw r16,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r16.u32);
	// stw r15,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r15.u32);
	// stw r14,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r14.u32);
	// lwz r3,396(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// std r30,188(r1)
	PPC_STORE_U64(ctx.r1.u32 + 188, ctx.r30.u64);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83535150
	ctx.lr = 0x825B03F0;
	sub_83535150(ctx, base);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// b 0x825b040c
	goto loc_825B040C;
loc_825B0400:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x825b040c
	goto loc_825B040C;
loc_825B0408:
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
loc_825B040C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x825b042c
	if (cr6.eq) goto loc_825B042C;
	// addi r3,r28,5692
	ctx.r3.s64 = ctx.r28.s64 + 5692;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x825b0428
	if (!cr6.eq) goto loc_825B0428;
	// bl 0x82a1ad78
	ctx.lr = 0x825B0424;
	sub_82A1AD78(ctx, base);
	// b 0x825b042c
	goto loc_825B042C;
loc_825B0428:
	// bl 0x825832f8
	ctx.lr = 0x825B042C;
	sub_825832F8(ctx, base);
loc_825B042C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x825afa20
	ctx.lr = 0x825B0438;
	sub_825AFA20(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b0454
	if (cr6.eq) goto loc_825B0454;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x825a8a78
	ctx.lr = 0x825B044C;
	sub_825A8A78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
loc_825B0454:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B045C"))) PPC_WEAK_FUNC(sub_825B045C);
PPC_FUNC_IMPL(__imp__sub_825B045C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B0460"))) PPC_WEAK_FUNC(sub_825B0460);
PPC_FUNC_IMPL(__imp__sub_825B0460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x825B0468;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,64
	ctx.r30.s64 = ctx.r3.s64 + 64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82a12748
	ctx.lr = 0x825B0484;
	sub_82A12748(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,352(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// lwz r31,292(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// beq cr6,0x825b0738
	if (cr6.eq) goto loc_825B0738;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825b0738
	if (cr6.eq) goto loc_825B0738;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b0738
	if (cr6.eq) goto loc_825B0738;
	// lwz r11,4456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4456);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x825b0738
	if (cr6.eq) goto loc_825B0738;
	// bl 0x825832e0
	ctx.lr = 0x825B04BC;
	sub_825832E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825b0738
	if (!cr6.eq) goto loc_825B0738;
	// addi r31,r31,5644
	ctx.r31.s64 = ctx.r31.s64 + 5644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307e040
	ctx.lr = 0x825B04D0;
	sub_8307E040(ctx, base);
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bgt cr6,0x825b0738
	if (cr6.gt) goto loc_825B0738;
	// lis r12,-32165
	ctx.r12.s64 = -2107965440;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1264
	ctx.r12.s64 = ctx.r12.s64 + 1264;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_825B051C;
	case 1:
		goto loc_825B0524;
	case 2:
		goto loc_825B052C;
	case 3:
		goto loc_825B0534;
	case 4:
		goto loc_825B053C;
	case 5:
		goto loc_825B0544;
	case 6:
		goto loc_825B054C;
	case 7:
		goto loc_825B0554;
	case 8:
		goto loc_825B055C;
	case 9:
		goto loc_825B0564;
	case 10:
		goto loc_825B056C;
	default:
		return;
	}
	// lwz r18,1308(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1308);
	// lwz r18,1316(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1316);
	// lwz r18,1324(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1324);
	// lwz r18,1332(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1332);
	// lwz r18,1340(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1340);
	// lwz r18,1348(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1348);
	// lwz r18,1356(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1356);
	// lwz r18,1364(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1364);
	// lwz r18,1372(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1372);
	// lwz r18,1380(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1380);
	// lwz r18,1388(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1388);
loc_825B051C:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x825b0570
	goto loc_825B0570;
loc_825B0524:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x825b0570
	goto loc_825B0570;
loc_825B052C:
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x825b0570
	goto loc_825B0570;
loc_825B0534:
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x825b0570
	goto loc_825B0570;
loc_825B053C:
	// li r30,4
	ctx.r30.s64 = 4;
	// b 0x825b0570
	goto loc_825B0570;
loc_825B0544:
	// li r30,5
	ctx.r30.s64 = 5;
	// b 0x825b0570
	goto loc_825B0570;
loc_825B054C:
	// li r30,6
	ctx.r30.s64 = 6;
	// b 0x825b0570
	goto loc_825B0570;
loc_825B0554:
	// li r30,7
	ctx.r30.s64 = 7;
	// b 0x825b0570
	goto loc_825B0570;
loc_825B055C:
	// li r30,12
	ctx.r30.s64 = 12;
	// b 0x825b0570
	goto loc_825B0570;
loc_825B0564:
	// li r30,11
	ctx.r30.s64 = 11;
	// b 0x825b0570
	goto loc_825B0570;
loc_825B056C:
	// li r30,8
	ctx.r30.s64 = 8;
loc_825B0570:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a19d68
	ctx.lr = 0x825B0578;
	sub_82A19D68(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a19d70
	ctx.lr = 0x825B0584;
	sub_82A19D70(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a19d78
	ctx.lr = 0x825B0590;
	sub_82A19D78(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a19d80
	ctx.lr = 0x825B059C;
	sub_82A19D80(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dcd5d0
	ctx.lr = 0x825B05A8;
	sub_82DCD5D0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83096a68
	ctx.lr = 0x825B05B4;
	sub_83096A68(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83096a70
	ctx.lr = 0x825B05C0;
	sub_83096A70(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab678
	ctx.lr = 0x825B05CC;
	sub_82DAB678(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a47e20
	ctx.lr = 0x825B05D8;
	sub_82A47E20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r29,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r29.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82dab6b8
	ctx.lr = 0x825B05EC;
	sub_82DAB6B8(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831237e0
	ctx.lr = 0x825B05F8;
	sub_831237E0(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x825B0604;
	sub_82DAB6D0(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a19d88
	ctx.lr = 0x825B0614;
	sub_82A19D88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ac2480
	ctx.lr = 0x825B061C;
	sub_83AC2480(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82921c20
	ctx.lr = 0x825B0628;
	sub_82921C20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82dcd5c8
	ctx.lr = 0x825B063C;
	sub_82DCD5C8(ctx, base);
	// sth r25,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r25.u16);
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stb r3,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r3.u8);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// addi r28,r11,21716
	ctx.r28.s64 = ctx.r11.s64 + 21716;
	// sth r24,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r24.u16);
	// sth r23,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r23.u16);
	// li r8,44
	ctx.r8.s64 = 44;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// sth r22,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r22.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r21,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r21.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r20,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r20.u8);
	// ori r4,r4,50
	ctx.r4.u64 = ctx.r4.u64 | 50;
	// stb r19,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r19.u8);
	// stb r18,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r18.u8);
	// stb r29,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r29.u8);
	// stb r17,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r17.u8);
	// stb r16,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r16.u8);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r15,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r15.u32);
	// stw r14,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r14.u32);
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// std r31,124(r1)
	PPC_STORE_U64(ctx.r1.u32 + 124, ctx.r31.u64);
	// bl 0x83535150
	ctx.lr = 0x825B06B0;
	sub_83535150(ctx, base);
	// addi r31,r27,44
	ctx.r31.s64 = ctx.r27.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825afb50
	ctx.lr = 0x825B06BC;
	sub_825AFB50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b0714
	if (cr6.eq) goto loc_825B0714;
	// addi r3,r3,5644
	ctx.r3.s64 = ctx.r3.s64 + 5644;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// beq cr6,0x825b06dc
	if (cr6.eq) goto loc_825B06DC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_825B06DC:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825b06fc
	if (cr6.eq) goto loc_825B06FC;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// beq cr6,0x825b06f8
	if (cr6.eq) goto loc_825B06F8;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// bne cr6,0x825b06fc
	if (!cr6.eq) goto loc_825B06FC;
loc_825B06F8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825B06FC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b0710
	if (cr6.eq) goto loc_825B0710;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,5815(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5815, ctx.r10.u8);
loc_825B0710:
	// bl 0x82a1ad78
	ctx.lr = 0x825B0714;
	sub_82A1AD78(ctx, base);
loc_825B0714:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b0730
	if (cr6.eq) goto loc_825B0730;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825a8a78
	ctx.lr = 0x825B0728;
	sub_825A8A78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_825B0730:
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
loc_825B0738:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0cc80
	ctx.lr = 0x825B0740;
	sub_82A0CC80(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0748"))) PPC_WEAK_FUNC(sub_825B0748);
PPC_FUNC_IMPL(__imp__sub_825B0748) {
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
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b07e0
	if (cr6.eq) goto loc_825B07E0;
	// bl 0x82a56490
	ctx.lr = 0x825B0770;
	sub_82A56490(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b07e0
	if (cr6.eq) goto loc_825B07E0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82a56488
	ctx.lr = 0x825B0784;
	sub_82A56488(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b07e0
	if (cr6.eq) goto loc_825B07E0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x825b07e0
	if (!cr6.eq) goto loc_825B07E0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82a56b80
	ctx.lr = 0x825B07A0;
	sub_82A56B80(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82a563f0
	ctx.lr = 0x825B07A8;
	sub_82A563F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b07e0
	if (!cr6.eq) goto loc_825B07E0;
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825afb50
	ctx.lr = 0x825B07C0;
	sub_825AFB50(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,5815(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5815, ctx.r30.u8);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b07e0
	if (cr6.eq) goto loc_825B07E0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825a8a78
	ctx.lr = 0x825B07DC;
	sub_825A8A78(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_825B07E0:
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

__attribute__((alias("__imp__sub_825B07F8"))) PPC_WEAK_FUNC(sub_825B07F8);
PPC_FUNC_IMPL(__imp__sub_825B07F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825B0800;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,64
	ctx.r28.s64 = ctx.r3.s64 + 64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82a12748
	ctx.lr = 0x825B0818;
	sub_82A12748(ctx, base);
	// lwz r11,756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x825b087c
	if (cr6.lt) goto loc_825B087C;
	// bne cr6,0x825b08f4
	if (!cr6.eq) goto loc_825B08F4;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x825c1630
	ctx.lr = 0x825B0830;
	sub_825C1630(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b08f4
	if (!cr6.eq) goto loc_825B08F4;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x825c1980
	ctx.lr = 0x825B0844;
	sub_825C1980(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,14
	ctx.r4.u64 = ctx.r4.u64 | 14;
	// bl 0x83535150
	ctx.lr = 0x825B0864;
	sub_83535150(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r11.u32);
	// bl 0x82a0cc80
	ctx.lr = 0x825B0874;
	sub_82A0CC80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825B087C:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B0890;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825b08f4
	if (cr6.eq) goto loc_825B08F4;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,3968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3968);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825B08B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825b08c8
	if (cr6.eq) goto loc_825B08C8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_825B08C8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x825c1630
	ctx.lr = 0x825B08D0;
	sub_825C1630(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b08e8
	if (!cr6.eq) goto loc_825B08E8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aff80
	ctx.lr = 0x825B08E8;
	sub_825AFF80(ctx, base);
loc_825B08E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825afda8
	ctx.lr = 0x825B08F4;
	sub_825AFDA8(ctx, base);
loc_825B08F4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a0cc80
	ctx.lr = 0x825B08FC;
	sub_82A0CC80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0904"))) PPC_WEAK_FUNC(sub_825B0904);
PPC_FUNC_IMPL(__imp__sub_825B0904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B0908"))) PPC_WEAK_FUNC(sub_825B0908);
PPC_FUNC_IMPL(__imp__sub_825B0908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825B0910;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r10,17
	ctx.r10.u64 = ctx.r10.u64 | 17;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x825b09e0
	if (cr6.gt) goto loc_825B09E0;
	// beq cr6,0x825b0a8c
	if (cr6.eq) goto loc_825B0A8C;
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// ori r10,r10,13
	ctx.r10.u64 = ctx.r10.u64 | 13;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x825b09b4
	if (cr6.gt) goto loc_825B09B4;
	// beq cr6,0x825b09a0
	if (cr6.eq) goto loc_825B09A0;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x825b0988
	if (cr6.eq) goto loc_825B0988;
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x825b096c
	if (!cr6.eq) goto loc_825B096C;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x825c1518
	ctx.lr = 0x825B096C;
	sub_825C1518(ctx, base);
loc_825B096C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825ae2e8
	ctx.lr = 0x825B0980;
	sub_825AE2E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825B0988:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b07f8
	ctx.lr = 0x825B0994;
	sub_825B07F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825B09A0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825B09B4:
	// addis r11,r11,-261
	ctx.r11.s64 = ctx.r11.s64 + -17104896;
	// addic. r11,r11,-15
	xer.ca = ctx.r11.u32 > 14;
	ctx.r11.s64 = ctx.r11.s64 + -15;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x825b09cc
	if (cr0.eq) goto loc_825B09CC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x825b0a8c
	if (cr6.eq) goto loc_825B0A8C;
	// b 0x825b096c
	goto loc_825B096C;
loc_825B09CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825B09E0:
	// addis r11,r11,-261
	ctx.r11.s64 = ctx.r11.s64 + -17104896;
	// addi r11,r11,-38
	ctx.r11.s64 = ctx.r11.s64 + -38;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bgt cr6,0x825b096c
	if (cr6.gt) goto loc_825B096C;
	// lis r12,-32165
	ctx.r12.s64 = -2107965440;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,2568
	ctx.r12.s64 = ctx.r12.s64 + 2568;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_825B0A8C;
	case 1:
		goto loc_825B096C;
	case 2:
		goto loc_825B096C;
	case 3:
		goto loc_825B096C;
	case 4:
		goto loc_825B096C;
	case 5:
		goto loc_825B096C;
	case 6:
		goto loc_825B096C;
	case 7:
		goto loc_825B096C;
	case 8:
		goto loc_825B096C;
	case 9:
		goto loc_825B096C;
	case 10:
		goto loc_825B096C;
	case 11:
		goto loc_825B096C;
	case 12:
		goto loc_825B0A4C;
	case 13:
		goto loc_825B0A68;
	case 14:
		goto loc_825B096C;
	case 15:
		goto loc_825B096C;
	case 16:
		goto loc_825B0A80;
	default:
		return;
	}
	// lwz r18,2700(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2700);
	// lwz r18,2412(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2412);
	// lwz r18,2412(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2412);
	// lwz r18,2412(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2412);
	// lwz r18,2412(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2412);
	// lwz r18,2412(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2412);
	// lwz r18,2412(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2412);
	// lwz r18,2412(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2412);
	// lwz r18,2412(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2412);
	// lwz r18,2412(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2412);
	// lwz r18,2412(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2412);
	// lwz r18,2412(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2412);
	// lwz r18,2636(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2636);
	// lwz r18,2664(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2664);
	// lwz r18,2412(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2412);
	// lwz r18,2412(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2412);
	// lwz r18,2688(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2688);
loc_825B0A4C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aea80
	ctx.lr = 0x825B0A5C;
	sub_825AEA80(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825B0A68:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b0460
	ctx.lr = 0x825B0A74;
	sub_825B0460(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825B0A80:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b0748
	ctx.lr = 0x825B0A8C;
	sub_825B0748(ctx, base);
loc_825B0A8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0A98"))) PPC_WEAK_FUNC(sub_825B0A98);
PPC_FUNC_IMPL(__imp__sub_825B0A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83740868
	ctx.lr = 0x825B0AB0;
	sub_83740868(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-23868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23868);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B0AE0"))) PPC_WEAK_FUNC(sub_825B0AE0);
PPC_FUNC_IMPL(__imp__sub_825B0AE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825b0af4
	if (cr6.lt) goto loc_825B0AF4;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825b0af8
	if (cr6.lt) goto loc_825B0AF8;
loc_825B0AF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B0AF8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B0B00"))) PPC_WEAK_FUNC(sub_825B0B00);
PPC_FUNC_IMPL(__imp__sub_825B0B00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22560
	ctx.lr = 0x825B0B1C;
	sub_82A22560(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22530
	ctx.lr = 0x825B0B28;
	sub_82A22530(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22530
	ctx.lr = 0x825B0B34;
	sub_82A22530(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22530
	ctx.lr = 0x825B0B40;
	sub_82A22530(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22530
	ctx.lr = 0x825B0B4C;
	sub_82A22530(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22530
	ctx.lr = 0x825B0B58;
	sub_82A22530(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22530
	ctx.lr = 0x825B0B64;
	sub_82A22530(ctx, base);
	// li r4,35
	ctx.r4.s64 = 35;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22530
	ctx.lr = 0x825B0B70;
	sub_82A22530(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22530
	ctx.lr = 0x825B0B7C;
	sub_82A22530(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22530
	ctx.lr = 0x825B0B88;
	sub_82A22530(ctx, base);
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22530
	ctx.lr = 0x825B0B94;
	sub_82A22530(ctx, base);
	// li r4,23
	ctx.r4.s64 = 23;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22530
	ctx.lr = 0x825B0BA0;
	sub_82A22530(ctx, base);
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22530
	ctx.lr = 0x825B0BAC;
	sub_82A22530(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82a125c8
	ctx.lr = 0x825B0BB8;
	sub_82A125C8(ctx, base);
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

__attribute__((alias("__imp__sub_825B0BCC"))) PPC_WEAK_FUNC(sub_825B0BCC);
PPC_FUNC_IMPL(__imp__sub_825B0BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B0BD0"))) PPC_WEAK_FUNC(sub_825B0BD0);
PPC_FUNC_IMPL(__imp__sub_825B0BD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x828c9680
	sub_828C9680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0BD8"))) PPC_WEAK_FUNC(sub_825B0BD8);
PPC_FUNC_IMPL(__imp__sub_825B0BD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x828c9728
	sub_828C9728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0BE8"))) PPC_WEAK_FUNC(sub_825B0BE8);
PPC_FUNC_IMPL(__imp__sub_825B0BE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B0BEC"))) PPC_WEAK_FUNC(sub_825B0BEC);
PPC_FUNC_IMPL(__imp__sub_825B0BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B0BF0"))) PPC_WEAK_FUNC(sub_825B0BF0);
PPC_FUNC_IMPL(__imp__sub_825B0BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x828cb248
	sub_828CB248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0C00"))) PPC_WEAK_FUNC(sub_825B0C00);
PPC_FUNC_IMPL(__imp__sub_825B0C00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B0C04"))) PPC_WEAK_FUNC(sub_825B0C04);
PPC_FUNC_IMPL(__imp__sub_825B0C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B0C08"))) PPC_WEAK_FUNC(sub_825B0C08);
PPC_FUNC_IMPL(__imp__sub_825B0C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x828c9418
	sub_828C9418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0C18"))) PPC_WEAK_FUNC(sub_825B0C18);
PPC_FUNC_IMPL(__imp__sub_825B0C18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B0C1C"))) PPC_WEAK_FUNC(sub_825B0C1C);
PPC_FUNC_IMPL(__imp__sub_825B0C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B0C20"))) PPC_WEAK_FUNC(sub_825B0C20);
PPC_FUNC_IMPL(__imp__sub_825B0C20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x828c7ff0
	sub_828C7FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0C30"))) PPC_WEAK_FUNC(sub_825B0C30);
PPC_FUNC_IMPL(__imp__sub_825B0C30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B0C34"))) PPC_WEAK_FUNC(sub_825B0C34);
PPC_FUNC_IMPL(__imp__sub_825B0C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B0C38"))) PPC_WEAK_FUNC(sub_825B0C38);
PPC_FUNC_IMPL(__imp__sub_825B0C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x828c9730
	sub_828C9730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0C48"))) PPC_WEAK_FUNC(sub_825B0C48);
PPC_FUNC_IMPL(__imp__sub_825B0C48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B0C4C"))) PPC_WEAK_FUNC(sub_825B0C4C);
PPC_FUNC_IMPL(__imp__sub_825B0C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B0C50"))) PPC_WEAK_FUNC(sub_825B0C50);
PPC_FUNC_IMPL(__imp__sub_825B0C50) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stb r30,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r30.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x83102db0
	ctx.lr = 0x825B0C7C;
	sub_83102DB0(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,32068
	ctx.r8.s64 = ctx.r11.s64 + 32068;
	// addi r7,r10,-23568
	ctx.r7.s64 = ctx.r10.s64 + -23568;
	// addi r6,r9,-23576
	ctx.r6.s64 = ctx.r9.s64 + -23576;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x82a0db20
	ctx.lr = 0x825B0CB0;
	sub_82A0DB20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b0b00
	ctx.lr = 0x825B0CB8;
	sub_825B0B00(ctx, base);
	// lis r5,-31763
	ctx.r5.s64 = -2081619968;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,-3088
	ctx.r4.s64 = ctx.r5.s64 + -3088;
	// stw r31,144(r4)
	PPC_STORE_U32(ctx.r4.u32 + 144, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_825B0CE4"))) PPC_WEAK_FUNC(sub_825B0CE4);
PPC_FUNC_IMPL(__imp__sub_825B0CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B0CE8"))) PPC_WEAK_FUNC(sub_825B0CE8);
PPC_FUNC_IMPL(__imp__sub_825B0CE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825b1af8
	sub_825B1AF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0CF0"))) PPC_WEAK_FUNC(sub_825B0CF0);
PPC_FUNC_IMPL(__imp__sub_825B0CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825B0CF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a12748
	ctx.lr = 0x825B0D0C;
	sub_82A12748(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r29,6112(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82595718
	ctx.lr = 0x825B0D30;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b0d40
	if (cr6.eq) goto loc_825B0D40;
	// bl 0x825c2218
	ctx.lr = 0x825B0D3C;
	sub_825C2218(ctx, base);
	// b 0x825b0d44
	goto loc_825B0D44;
loc_825B0D40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B0D44:
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825c1fc8
	ctx.lr = 0x825B0D50;
	sub_825C1FC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0cc80
	ctx.lr = 0x825B0D58;
	sub_82A0CC80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0D60"))) PPC_WEAK_FUNC(sub_825B0D60);
PPC_FUNC_IMPL(__imp__sub_825B0D60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825B0D68;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-3088
	ctx.r8.s64 = ctx.r11.s64 + -3088;
	// addi r7,r10,-23568
	ctx.r7.s64 = ctx.r10.s64 + -23568;
	// addi r6,r9,-23576
	ctx.r6.s64 = ctx.r9.s64 + -23576;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 144, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825b0de0
	if (cr6.eq) goto loc_825B0DE0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825B0DB8;
	sub_82595150(ctx, base);
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825b0dd4
	if (cr6.eq) goto loc_825B0DD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c6380
	ctx.lr = 0x825B0DCC;
	sub_828C6380(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x825B0DD4;
	sub_82416268(ctx, base);
loc_825B0DD4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825B0DDC;
	sub_82595170(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_825B0DE0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b0e24
	if (cr6.eq) goto loc_825B0E24;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825B0DFC;
	sub_82595150(ctx, base);
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825b0e18
	if (cr6.eq) goto loc_825B0E18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c2008
	ctx.lr = 0x825B0E10;
	sub_825C2008(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x825B0E18;
	sub_82416268(ctx, base);
loc_825B0E18:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825B0E20;
	sub_82595170(ctx, base);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_825B0E24:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82a0dc70
	ctx.lr = 0x825B0E2C;
	sub_82A0DC70(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r9,r11,32068
	ctx.r9.s64 = ctx.r11.s64 + 32068;
	// addi r8,r10,-32552
	ctx.r8.s64 = ctx.r10.s64 + -32552;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r3,r31,13
	ctx.r3.s64 = ctx.r31.s64 + 13;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x83102db0
	ctx.lr = 0x825B0E4C;
	sub_83102DB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0E54"))) PPC_WEAK_FUNC(sub_825B0E54);
PPC_FUNC_IMPL(__imp__sub_825B0E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B0E58"))) PPC_WEAK_FUNC(sub_825B0E58);
PPC_FUNC_IMPL(__imp__sub_825B0E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825B0E60;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b0f08
	if (cr6.eq) goto loc_825B0F08;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a12748
	ctx.lr = 0x825B0E80;
	sub_82A12748(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r27,156(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r29,312(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// lwz r28,292(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x828c5a18
	ctx.lr = 0x825B0E9C;
	sub_828C5A18(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22c10
	ctx.lr = 0x825B0EAC;
	sub_82A22C10(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x825b0ed8
	if (cr6.lt) goto loc_825B0ED8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x825b0ed8
	if (!cr6.lt) goto loc_825B0ED8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x825b0ed8
	if (cr6.lt) goto loc_825B0ED8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// blt cr6,0x825b0edc
	if (cr6.lt) goto loc_825B0EDC;
loc_825B0ED8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_825B0EDC:
	// lfs f1,88(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x828c7020
	ctx.lr = 0x825B0EE8;
	sub_828C7020(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x828c8e88
	ctx.lr = 0x825B0EF0;
	sub_828C8E88(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x828c7f00
	ctx.lr = 0x825B0F00;
	sub_828C7F00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0cc80
	ctx.lr = 0x825B0F08;
	sub_82A0CC80(ctx, base);
loc_825B0F08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B0F1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0F24"))) PPC_WEAK_FUNC(sub_825B0F24);
PPC_FUNC_IMPL(__imp__sub_825B0F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B0F28"))) PPC_WEAK_FUNC(sub_825B0F28);
PPC_FUNC_IMPL(__imp__sub_825B0F28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x825B0F30;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b1098
	if (cr6.eq) goto loc_825B1098;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b0f54
	if (cr6.eq) goto loc_825B0F54;
	// bl 0x828cb0a0
	ctx.lr = 0x825B0F54;
	sub_828CB0A0(ctx, base);
loc_825B0F54:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b1098
	if (cr6.eq) goto loc_825B1098;
	// lis r24,-31763
	ctx.r24.s64 = -2081619968;
	// lwz r11,-3564(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// lwz r3,472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b0f84
	if (cr6.eq) goto loc_825B0F84;
	// bl 0x83930ac8
	ctx.lr = 0x825B0F78;
	sub_83930AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b1090
	if (!cr6.eq) goto loc_825B1090;
loc_825B0F84:
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,4584
	ctx.r25.s64 = 4584;
	// lis r28,-32254
	ctx.r28.s64 = -2113798144;
loc_825B0F90:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x825B0F9C;
	sub_82A0C760(ctx, base);
	// lwz r11,-3564(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// beq cr6,0x825b1080
	if (cr6.eq) goto loc_825B1080;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b1080
	if (cr6.eq) goto loc_825B1080;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbz r9,4556(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4556);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825b1080
	if (!cr6.eq) goto loc_825B1080;
	// lwzx r11,r25,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x825b1080
	if (cr6.eq) goto loc_825B1080;
	// lbz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x825b1080
	if (cr6.eq) goto loc_825B1080;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// li r31,5
	ctx.r31.s64 = 5;
	// lwz r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r7,108(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r6,112(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lwz r5,116(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r4,120(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r9,132(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r8,136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lwz r7,140(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r6,144(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lwz r5,148(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
loc_825B1060:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f1,-23796(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -23796);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// bl 0x825c21c8
	ctx.lr = 0x825B1074;
	sub_825C21C8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x825b1060
	if (!cr0.eq) goto loc_825B1060;
loc_825B1080:
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r25,4672
	cr6.compare<int32_t>(ctx.r25.s32, 4672, xer);
	// blt cr6,0x825b0f90
	if (cr6.lt) goto loc_825B0F90;
loc_825B1090:
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// bl 0x825c20e8
	ctx.lr = 0x825B1098;
	sub_825C20E8(ctx, base);
loc_825B1098:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B10A0"))) PPC_WEAK_FUNC(sub_825B10A0);
PPC_FUNC_IMPL(__imp__sub_825B10A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x825B10A8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce744
	ctx.lr = 0x825B10B0;
	__savefpr_15(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r15,0
	ctx.r15.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// mr r22,r15
	ctx.r22.u64 = ctx.r15.u64;
	// mr r19,r15
	ctx.r19.u64 = ctx.r15.u64;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// fmr f24,f31
	ctx.f24.f64 = ctx.f31.f64;
	// li r23,255
	ctx.r23.s64 = 255;
	// fmr f23,f31
	ctx.f23.f64 = ctx.f31.f64;
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
	// lwz r17,292(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f22,f31
	ctx.f22.f64 = ctx.f31.f64;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f21,f31
	ctx.f21.f64 = ctx.f31.f64;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f20,f31
	ctx.f20.f64 = ctx.f31.f64;
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f19,f31
	ctx.f19.f64 = ctx.f31.f64;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// fmr f26,f31
	ctx.f26.f64 = ctx.f31.f64;
	// fmr f25,f31
	ctx.f25.f64 = ctx.f31.f64;
	// bl 0x82a0c710
	ctx.lr = 0x825B1134;
	sub_82A0C710(ctx, base);
	// lbz r10,253(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 253);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b1150
	if (cr6.eq) goto loc_825B1150;
	// stw r15,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r15.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x825b1158
	goto loc_825B1158;
loc_825B1150:
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_825B1158:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r9,-3564(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f18,f31
	ctx.fpscr.disableFlushMode();
	ctx.f18.f64 = ctx.f31.f64;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// addi r21,r14,24
	ctx.r21.s64 = ctx.r14.s64 + 24;
	// addi r20,r1,80
	ctx.r20.s64 = ctx.r1.s64 + 80;
	// lfs f17,-23492(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23492);
	ctx.f17.f64 = double(temp.f32);
	// li r16,2
	ctx.r16.s64 = 2;
	// lfs f16,-23868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23868);
	ctx.f16.f64 = double(temp.f32);
	// lfs f15,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f15.f64 = double(temp.f32);
loc_825B1184:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// li r24,11
	ctx.r24.s64 = 11;
	// mulli r29,r11,11
	ctx.r29.s64 = ctx.r11.s64 * 11;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r25,r10,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_825B119C:
	// cmplwi cr6,r29,22
	cr6.compare<uint32_t>(ctx.r29.u32, 22, xer);
	// bge cr6,0x825b11b0
	if (!cr6.lt) goto loc_825B11B0;
	// add r11,r25,r21
	ctx.r11.u64 = ctx.r25.u64 + ctx.r21.u64;
	// lwz r30,172(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// b 0x825b11b4
	goto loc_825B11B4;
loc_825B11B0:
	// lwz r30,172(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 172);
loc_825B11B4:
	// lbz r11,249(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 249);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b14a4
	if (cr6.eq) goto loc_825B14A4;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x825b11d8
	if (cr6.lt) goto loc_825B11D8;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825b11dc
	if (cr6.lt) goto loc_825B11DC;
loc_825B11D8:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_825B11DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b11fc
	if (cr6.eq) goto loc_825B11FC;
	// add r11,r29,r17
	ctx.r11.u64 = ctx.r29.u64 + ctx.r17.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r11,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b1200
	goto loc_825B1200;
loc_825B11FC:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_825B1200:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b12f4
	if (!cr6.eq) goto loc_825B12F4;
	// lwz r11,6132(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6132);
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bge cr6,0x825b12e8
	if (!cr6.lt) goto loc_825B12E8;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x825b12e8
	if (!cr6.eq) goto loc_825B12E8;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x825b123c
	if (cr6.lt) goto loc_825B123C;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825b1240
	if (cr6.lt) goto loc_825B1240;
loc_825B123C:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_825B1240:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b12e8
	if (cr6.eq) goto loc_825B12E8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a0c760
	ctx.lr = 0x825B1258;
	sub_82A0C760(ctx, base);
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c788
	ctx.lr = 0x825B126C;
	sub_82A0C788(ctx, base);
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b12e4
	if (cr6.eq) goto loc_825B12E4;
	// lhz r10,18(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bge cr6,0x825b12e4
	if (!cr6.lt) goto loc_825B12E4;
	// lwz r9,-3564(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lfs f0,1280(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1288(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lfs f12,8144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8144);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,8152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8152);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f15
	cr6.compare(ctx.f7.f64, ctx.f15.f64);
	// bge cr6,0x825b12e8
	if (!cr6.lt) goto loc_825B12E8;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x825b12e8
	goto loc_825B12E8;
loc_825B12E4:
	// lwz r9,-3564(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
loc_825B12E8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b14a4
	if (cr6.eq) goto loc_825B14A4;
loc_825B12F4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82a0c788
	ctx.lr = 0x825B1300;
	sub_82A0C788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r18,0(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f24,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f24.f64 = double(temp.f32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lfs f23,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f23.f64 = double(temp.f32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f22,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f19.f64 = double(temp.f32);
	// bl 0x828cb9c8
	ctx.lr = 0x825B1334;
	sub_828CB9C8(ctx, base);
	// stfs f31,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x828d0ee8
	ctx.lr = 0x825B135C;
	sub_828D0EE8(ctx, base);
	// lfs f13,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(ctx.r22.s32, 1, xer);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x825b13c8
	if (cr6.lt) goto loc_825B13C8;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b139c
	if (cr6.eq) goto loc_825B139C;
	// lbz r11,249(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 249);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b1394
	if (!cr6.eq) goto loc_825B1394;
	// rlwinm r26,r11,26,30,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3;
	// b 0x825b13dc
	goto loc_825B13DC;
loc_825B1394:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b13ac
	if (!cr6.eq) goto loc_825B13AC;
loc_825B139C:
	// lbz r11,249(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 249);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b13e0
	if (!cr6.eq) goto loc_825B13E0;
loc_825B13AC:
	// fmuls f11,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f11,f13,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fcmpu cr6,f11,f18
	cr6.compare(ctx.f11.f64, ctx.f18.f64);
	// ble cr6,0x825b13e0
	if (!cr6.gt) goto loc_825B13E0;
	// fmr f18,f11
	ctx.f18.f64 = ctx.f11.f64;
	// b 0x825b13d4
	goto loc_825B13D4;
loc_825B13C8:
	// fmuls f11,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f18,f13,f13,f10
	ctx.f18.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
loc_825B13D4:
	// lbz r11,249(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 249);
	// rlwinm r26,r11,26,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
loc_825B13DC:
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
loc_825B13E0:
	// cmpwi cr6,r18,7
	cr6.compare<int32_t>(ctx.r18.s32, 7, xer);
	// bne cr6,0x825b1418
	if (!cr6.eq) goto loc_825B1418;
	// bl 0x83740868
	ctx.lr = 0x825B13EC;
	sub_83740868(ctx, base);
	// fmuls f13,f1,f16
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f16.f64));
	// lfs f0,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f17,f13
	ctx.f12.f64 = double(float(ctx.f17.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x825b1410
	if (cr6.lt) goto loc_825B1410;
	// bl 0x83740868
	ctx.lr = 0x825B1404;
	sub_83740868(ctx, base);
	// fmuls f0,f1,f16
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f16.f64));
	// fdivs f0,f17,f0
	ctx.f0.f64 = double(float(ctx.f17.f64 / ctx.f0.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_825B1410:
	// lfs f12,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
loc_825B1418:
	// lfs f11,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,-3564(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fadds f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f5,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f13,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// lfs f11,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// lfs f3,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// fadds f1,f11,f5
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// lfs f2,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// lfs f10,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// fadds f7,f10,f3
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// fadds f5,f9,f2
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lbz r11,249(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 249);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b148c
	if (cr6.eq) goto loc_825B148C;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// b 0x825b14a4
	goto loc_825B14A4;
loc_825B148C:
	// fadds f30,f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// fadds f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// fadds f28,f13,f28
	ctx.f28.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// fadds f27,f11,f27
	ctx.f27.f64 = double(float(ctx.f11.f64 + ctx.f27.f64));
	// fadds f26,f10,f26
	ctx.f26.f64 = double(float(ctx.f10.f64 + ctx.f26.f64));
	// fadds f25,f9,f25
	ctx.f25.f64 = double(float(ctx.f9.f64 + ctx.f25.f64));
loc_825B14A4:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r25,r25,20
	ctx.r25.s64 = ctx.r25.s64 + 20;
	// bne 0x825b119c
	if (!cr0.eq) goto loc_825B119C;
	// addic. r16,r16,-1
	xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	cr0.compare<int32_t>(ctx.r16.s32, 0, xer);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// bne 0x825b1184
	if (!cr0.eq) goto loc_825B1184;
	// cmpw cr6,r19,r22
	cr6.compare<int32_t>(ctx.r19.s32, ctx.r22.s32, xer);
	// bne cr6,0x825b1524
	if (!cr6.eq) goto loc_825B1524;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// ble cr6,0x825b1550
	if (!cr6.gt) goto loc_825B1550;
	// lwz r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// lwz r10,660(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// srawi r8,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825b1524
	if (cr6.eq) goto loc_825B1524;
	// lwz r10,664(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x825b1524
	if (!cr6.eq) goto loc_825B1524;
	// lwz r10,652(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 652);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x825b150c
	if (cr6.lt) goto loc_825B150C;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825b1510
	if (cr6.lt) goto loc_825B1510;
loc_825B150C:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_825B1510:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b1524
	if (cr6.eq) goto loc_825B1524;
	// cmpw cr6,r23,r10
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, xer);
	// bne cr6,0x825b1774
	if (!cr6.eq) goto loc_825B1774;
loc_825B1524:
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// ble cr6,0x825b1550
	if (!cr6.gt) goto loc_825B1550;
	// cmpw cr6,r19,r22
	cr6.compare<int32_t>(ctx.r19.s32, ctx.r22.s32, xer);
	// bge cr6,0x825b1550
	if (!cr6.lt) goto loc_825B1550;
	// stfs f30,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// subf r22,r19,r22
	ctx.r22.s64 = ctx.r22.s64 - ctx.r19.s64;
	// stfs f29,108(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f28,112(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f27,120(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f26,124(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f25,128(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
loc_825B1550:
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(ctx.r22.s32, 1, xer);
	// ble cr6,0x825b15d4
	if (!cr6.gt) goto loc_825B15D4;
	// extsw r11,r22
	ctx.r11.s64 = ctx.r22.s32;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fmr f24,f31
	ctx.f24.f64 = ctx.f31.f64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// li r18,13
	ctx.r18.s64 = 13;
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// fmr f23,f31
	ctx.f23.f64 = ctx.f31.f64;
	// fmr f22,f31
	ctx.f22.f64 = ctx.f31.f64;
	// fmr f21,f31
	ctx.f21.f64 = ctx.f31.f64;
	// fmr f20,f31
	ctx.f20.f64 = ctx.f31.f64;
	// fmr f19,f31
	ctx.f19.f64 = ctx.f31.f64;
	// fdivs f5,f15,f9
	ctx.f5.f64 = double(float(ctx.f15.f64 / ctx.f9.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f3,f5,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f2,f5,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f1,f5,f8
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f0,f5,f7
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f13,f5,f6
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
loc_825B15D4:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// ble cr6,0x825b1774
	if (!cr6.gt) goto loc_825B1774;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,156(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 156);
	// lwz r28,32(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// lwz r30,292(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 292);
	// bl 0x82a22b40
	ctx.lr = 0x825B15F4;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r18
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, xer);
	// bne cr6,0x825b16c0
	if (!cr6.eq) goto loc_825B16C0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a2a558
	ctx.lr = 0x825B1610;
	sub_82A2A558(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x825b1638
	if (!cr6.eq) goto loc_825B1638;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x825b163c
	if (cr6.eq) goto loc_825B163C;
loc_825B1638:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_825B163C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b16c0
	if (cr6.eq) goto loc_825B16C0;
	// lwz r11,4472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4472);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bge cr6,0x825b16c0
	if (!cr6.lt) goto loc_825B16C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82a2df00
	ctx.lr = 0x825B166C;
	sub_82A2DF00(ctx, base);
	// bl 0x83740868
	ctx.lr = 0x825B1670;
	sub_83740868(ctx, base);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f1,f16
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f16.f64));
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfs f0,-23496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23496);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f4,f0,f12
	ctx.f4.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f3,f11,f11
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f2,f4,f4
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmadds f1,f8,f8,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f0,f5,f5,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fcmpu cr6,f0,f2
	cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bge cr6,0x825b16c0
	if (!cr6.lt) goto loc_825B16C0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_825B16C0:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b1774
	if (!cr6.eq) goto loc_825B1774;
	// bl 0x83740868
	ctx.lr = 0x825B16D0;
	sub_83740868(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f9,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// cmpwi cr6,r18,8
	cr6.compare<int32_t>(ctx.r18.s32, 8, xer);
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// beq cr6,0x825b1740
	if (cr6.eq) goto loc_825B1740;
	// cmplwi cr6,r23,22
	cr6.compare<uint32_t>(ctx.r23.u32, 22, xer);
	// bge cr6,0x825b171c
	if (!cr6.lt) goto loc_825B171C;
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r21
	ctx.r10.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r7,172(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// b 0x825b1720
	goto loc_825B1720;
loc_825B171C:
	// lwz r7,172(r21)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r21.u32 + 172);
loc_825B1720:
	// addi r11,r18,-13
	ctx.r11.s64 = ctx.r18.s64 + -13;
	// lwz r3,16(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x828c8928
	ctx.lr = 0x825B1740;
	sub_828C8928(ctx, base);
loc_825B1740:
	// lwz r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f22,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f24,36(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f23,40(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// stfs f21,48(r11)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f20,52(r11)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f19,56(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce790
	ctx.lr = 0x825B1770;
	__restfpr_15(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_825B1774:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce790
	ctx.lr = 0x825B1784;
	__restfpr_15(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B1788"))) PPC_WEAK_FUNC(sub_825B1788);
PPC_FUNC_IMPL(__imp__sub_825B1788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(ctx.r11.s32, 20, xer);
	// bne cr6,0x825b17e0
	if (!cr6.eq) goto loc_825B17E0;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lbz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,6092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6092);
	// beq cr6,0x825b17e0
	if (cr6.eq) goto loc_825B17E0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,120
	ctx.r5.s64 = ctx.r11.s64 + 120;
	// addi r4,r11,108
	ctx.r4.s64 = ctx.r11.s64 + 108;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x828c57f0
	ctx.lr = 0x825B17E0;
	sub_828C57F0(ctx, base);
loc_825B17E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B17F0"))) PPC_WEAK_FUNC(sub_825B17F0);
PPC_FUNC_IMPL(__imp__sub_825B17F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825B17F8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce774
	ctx.lr = 0x825B1800;
	__savefpr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r29,-32254
	ctx.r29.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,-3564(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lfs f0,112(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f13,-23796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -23796);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,60(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r30,6112(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6112);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x825b18a4
	if (!cr6.gt) goto loc_825B18A4;
	// lwz r5,60(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x825b18b8
	if (!cr6.eq) goto loc_825B18B8;
	// lwz r9,112(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r8,116(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,120(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r6,8172(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8172);
	// lwz r10,8176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8176);
	// lwz r9,8180(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8180);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x82a1e830
	ctx.lr = 0x825B1890;
	sub_82A1E830(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// b 0x825b18b8
	goto loc_825B18B8;
loc_825B18A4:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x825b18b8
	if (cr6.gt) goto loc_825B18B8;
	// li r5,0
	ctx.r5.s64 = 0;
loc_825B18B8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r5,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,112(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f13,116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f12,120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f11,124(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f10,128(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f9,132(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f8,136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f7,140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,140(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f6,144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,144(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// beq cr6,0x825b1a98
	if (cr6.eq) goto loc_825B1A98;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825c2058
	ctx.lr = 0x825B194C;
	sub_825C2058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b1a98
	if (cr6.eq) goto loc_825B1A98;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lfs f12,120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
	// lfs f13,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fabs f29,f12
	ctx.f29.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f10,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f8,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f31,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f31.f64 = double(temp.f32);
	// fabs f27,f8
	ctx.f27.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fabs f30,f11
	ctx.f30.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f28,f9
	ctx.f28.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// bl 0x828c57f0
	ctx.lr = 0x825B19A8;
	sub_828C57F0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f13,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-23796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -23796);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x825b1a40
	if (!cr6.eq) goto loc_825B1A40;
	// fabs f12,f31
	ctx.f12.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blt cr6,0x825b19f4
	if (cr6.lt) goto loc_825B19F4;
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f27,f13
	cr6.compare(ctx.f27.f64, ctx.f13.f64);
	// bgt cr6,0x825b19f4
	if (cr6.gt) goto loc_825B19F4;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x828c5aa0
	ctx.lr = 0x825B19E4;
	sub_828C5AA0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7c0
	ctx.lr = 0x825B19F0;
	__restfpr_27(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825B19F4:
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f29,f12
	cr6.compare(ctx.f29.f64, ctx.f12.f64);
	// ble cr6,0x825b1a28
	if (!cr6.gt) goto loc_825B1A28;
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f27,f0
	cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// bgt cr6,0x825b1a28
	if (cr6.gt) goto loc_825B1A28;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x828c5aa0
	ctx.lr = 0x825B1A18;
	sub_828C5AA0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7c0
	ctx.lr = 0x825B1A24;
	__restfpr_27(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825B1A28:
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x828c5aa0
	ctx.lr = 0x825B1A30;
	sub_828C5AA0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7c0
	ctx.lr = 0x825B1A3C;
	__restfpr_27(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825B1A40:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f30,f12
	cr6.compare(ctx.f30.f64, ctx.f12.f64);
	// blt cr6,0x825b1a70
	if (cr6.lt) goto loc_825B1A70;
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f27,f13
	cr6.compare(ctx.f27.f64, ctx.f13.f64);
	// bgt cr6,0x825b1a70
	if (cr6.gt) goto loc_825B1A70;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x828c5aa0
	ctx.lr = 0x825B1A60;
	sub_828C5AA0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7c0
	ctx.lr = 0x825B1A6C;
	__restfpr_27(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825B1A70:
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f28,f12
	cr6.compare(ctx.f28.f64, ctx.f12.f64);
	// ble cr6,0x825b1a90
	if (!cr6.gt) goto loc_825B1A90;
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// li r4,6
	ctx.r4.s64 = 6;
	// fcmpu cr6,f27,f0
	cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// ble cr6,0x825b1a94
	if (!cr6.gt) goto loc_825B1A94;
loc_825B1A90:
	// li r4,8
	ctx.r4.s64 = 8;
loc_825B1A94:
	// bl 0x828c5aa0
	ctx.lr = 0x825B1A98;
	sub_828C5AA0(ctx, base);
loc_825B1A98:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7c0
	ctx.lr = 0x825B1AA4;
	__restfpr_27(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B1AA8"))) PPC_WEAK_FUNC(sub_825B1AA8);
PPC_FUNC_IMPL(__imp__sub_825B1AA8) {
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
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a12748
	ctx.lr = 0x825B1ACC;
	sub_82A12748(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x829eeae0
	ctx.lr = 0x825B1AD8;
	sub_829EEAE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0cc80
	ctx.lr = 0x825B1AE0;
	sub_82A0CC80(ctx, base);
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

__attribute__((alias("__imp__sub_825B1AF8"))) PPC_WEAK_FUNC(sub_825B1AF8);
PPC_FUNC_IMPL(__imp__sub_825B1AF8) {
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
	// bl 0x825b0d60
	ctx.lr = 0x825B1B18;
	sub_825B0D60(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b1b38
	if (cr6.eq) goto loc_825B1B38;
	// bl 0x82595188
	ctx.lr = 0x825B1B28;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825B1B38;
	sub_825952B8(ctx, base);
loc_825B1B38:
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

__attribute__((alias("__imp__sub_825B1B54"))) PPC_WEAK_FUNC(sub_825B1B54);
PPC_FUNC_IMPL(__imp__sub_825B1B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B1B58"))) PPC_WEAK_FUNC(sub_825B1B58);
PPC_FUNC_IMPL(__imp__sub_825B1B58) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2532
	ctx.r4.s64 = 2532;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825B1B84;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b1b98
	if (cr6.eq) goto loc_825B1B98;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828c6970
	ctx.lr = 0x825B1B94;
	sub_828C6970(ctx, base);
	// b 0x825b1b9c
	goto loc_825B1B9C;
loc_825B1B98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B1B9C:
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bl 0x828cb060
	ctx.lr = 0x825B1BA4;
	sub_828CB060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b0cf0
	ctx.lr = 0x825B1BAC;
	sub_825B0CF0(ctx, base);
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

__attribute__((alias("__imp__sub_825B1BC0"))) PPC_WEAK_FUNC(sub_825B1BC0);
PPC_FUNC_IMPL(__imp__sub_825B1BC0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b1bf8
	if (cr6.eq) goto loc_825B1BF8;
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
loc_825B1BF8:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825B1C10;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b1c8c
	if (cr6.eq) goto loc_825B1C8C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfs f13,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stb r5,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r5.u8);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// b 0x825b1c90
	goto loc_825B1C90;
loc_825B1C8C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825B1C90:
	// addic r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r8,1536
	ctx.r8.s64 = 100663296;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r6,r8,3
	ctx.r6.u64 = ctx.r8.u64 | 3;
	// and r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 & ctx.r6.u64;
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

__attribute__((alias("__imp__sub_825B1CBC"))) PPC_WEAK_FUNC(sub_825B1CBC);
PPC_FUNC_IMPL(__imp__sub_825B1CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B1CC0"))) PPC_WEAK_FUNC(sub_825B1CC0);
PPC_FUNC_IMPL(__imp__sub_825B1CC0) {
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
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825B1CE8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b1d30
	if (cr6.eq) goto loc_825B1D30;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-12400
	ctx.r9.s64 = ctx.r11.s64 + -12400;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// bl 0x825b1bc0
	ctx.lr = 0x825B1D18;
	sub_825B1BC0(ctx, base);
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
loc_825B1D30:
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

__attribute__((alias("__imp__sub_825B1D48"))) PPC_WEAK_FUNC(sub_825B1D48);
PPC_FUNC_IMPL(__imp__sub_825B1D48) {
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
	// bne cr6,0x825b1e28
	if (!cr6.eq) goto loc_825B1E28;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x825b1d80
	if (!cr6.eq) goto loc_825B1D80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825B1D80:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825b1db0
	if (cr6.eq) goto loc_825B1DB0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825B1D94:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825b1d94
	if (!cr6.eq) goto loc_825B1D94;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825B1DB0:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825b1dc0
	if (!cr6.eq) goto loc_825B1DC0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825B1DC0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x825b1dec
	if (cr6.eq) goto loc_825B1DEC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825B1DD0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b1dd0
	if (!cr6.eq) goto loc_825B1DD0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825B1DEC:
	// lis r11,-31913
	ctx.r11.s64 = -2091450368;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,10584
	ctx.r10.s64 = ctx.r11.s64 + 10584;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,7360
	ctx.r8.s64 = ctx.r8.s64 + 7360;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r6,10584
	ctx.r6.s64 = ctx.r6.s64 + 10584;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8353f448
	ctx.lr = 0x825B1E20;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_825B1E28:
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

__attribute__((alias("__imp__sub_825B1E3C"))) PPC_WEAK_FUNC(sub_825B1E3C);
PPC_FUNC_IMPL(__imp__sub_825B1E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B1E40"))) PPC_WEAK_FUNC(sub_825B1E40);
PPC_FUNC_IMPL(__imp__sub_825B1E40) {
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
	// bne cr6,0x825b1ea4
	if (!cr6.eq) goto loc_825B1EA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B1E74;
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
	ctx.lr = 0x825B1E8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825b1d48
	ctx.lr = 0x825B1E9C;
	sub_825B1D48(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825B1EA4:
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

__attribute__((alias("__imp__sub_825B1EBC"))) PPC_WEAK_FUNC(sub_825B1EBC);
PPC_FUNC_IMPL(__imp__sub_825B1EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B1EC0"))) PPC_WEAK_FUNC(sub_825B1EC0);
PPC_FUNC_IMPL(__imp__sub_825B1EC0) {
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
	// bne cr6,0x825b1ee4
	if (!cr6.eq) goto loc_825B1EE4;
	// bl 0x825b1e40
	ctx.lr = 0x825B1EE4;
	sub_825B1E40(ctx, base);
loc_825B1EE4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b1f00
	if (!cr6.eq) goto loc_825B1F00;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_825B1F00:
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

__attribute__((alias("__imp__sub_825B1F18"))) PPC_WEAK_FUNC(sub_825B1F18);
PPC_FUNC_IMPL(__imp__sub_825B1F18) {
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
	// bne cr6,0x825b1f3c
	if (!cr6.eq) goto loc_825B1F3C;
	// bl 0x825b1e40
	ctx.lr = 0x825B1F3C;
	sub_825B1E40(ctx, base);
loc_825B1F3C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b1f58
	if (!cr6.eq) goto loc_825B1F58;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825B1F58:
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

__attribute__((alias("__imp__sub_825B1F70"))) PPC_WEAK_FUNC(sub_825B1F70);
PPC_FUNC_IMPL(__imp__sub_825B1F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825B1F78;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r31,255
	ctx.r31.s64 = 255;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// li r27,1
	ctx.r27.s64 = 1;
	// lbz r8,76(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 76);
	// lwz r25,292(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lbz r11,4496(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4496);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r7,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_825B1FB4:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x825b1fc8
	if (cr6.lt) goto loc_825B1FC8;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// blt cr6,0x825b1fcc
	if (cr6.lt) goto loc_825B1FCC;
loc_825B1FC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B1FCC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b1ff8
	if (cr6.eq) goto loc_825B1FF8;
	// addi r11,r28,24
	ctx.r11.s64 = ctx.r28.s64 + 24;
	// cmplwi cr6,r10,22
	cr6.compare<uint32_t>(ctx.r10.u32, 22, xer);
	// bge cr6,0x825b1fe8
	if (!cr6.lt) goto loc_825B1FE8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_825B1FE8:
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// lbz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b200c
	if (!cr6.eq) goto loc_825B200C;
loc_825B1FF8:
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,440
	cr6.compare<int32_t>(ctx.r9.s32, 440, xer);
	// blt cr6,0x825b1fb4
	if (cr6.lt) goto loc_825B1FB4;
	// b 0x825b2014
	goto loc_825B2014;
loc_825B200C:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
loc_825B2014:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x828c5a60
	ctx.lr = 0x825B2024;
	sub_828C5A60(ctx, base);
	// lwz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r31,72(r9)
	PPC_STORE_U32(ctx.r9.u32 + 72, ctx.r31.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r31,r11,1472
	ctx.r31.s64 = ctx.r11.s64 + 1472;
	// lbz r8,1476(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1476);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825b2080
	if (!cr6.eq) goto loc_825B2080;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B2054;
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
	ctx.lr = 0x825B206C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825b1d48
	ctx.lr = 0x825B207C;
	sub_825B1D48(ctx, base);
	// stb r27,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r27.u8);
loc_825B2080:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b209c
	if (!cr6.eq) goto loc_825B209C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_825B209C:
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lwz r29,472(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// lwz r30,432(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x825b2164
	if (!cr6.eq) goto loc_825B2164;
	// lbz r11,5036(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5036);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b2164
	if (!cr6.eq) goto loc_825B2164;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x825b2104
	if (cr6.eq) goto loc_825B2104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a47d40
	ctx.lr = 0x825B20E4;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b2104
	if (cr6.eq) goto loc_825B2104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83930ac8
	ctx.lr = 0x825B20F8;
	sub_83930AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b2164
	if (!cr6.eq) goto loc_825B2164;
loc_825B2104:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825b2134
	if (cr6.eq) goto loc_825B2134;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da1d10
	ctx.lr = 0x825B2114;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b2134
	if (cr6.eq) goto loc_825B2134;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18500
	ctx.lr = 0x825B2128;
	sub_82A18500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b2164
	if (!cr6.eq) goto loc_825B2164;
loc_825B2134:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b2164
	if (!cr6.eq) goto loc_825B2164;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b2168
	if (cr6.eq) goto loc_825B2168;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// bl 0x828c5d20
	ctx.lr = 0x825B215C;
	sub_828C5D20(ctx, base);
	// li r27,4
	ctx.r27.s64 = 4;
	// b 0x825b2168
	goto loc_825B2168;
loc_825B2164:
	// li r27,2
	ctx.r27.s64 = 2;
loc_825B2168:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r11,r11,1472
	ctx.r11.s64 = ctx.r11.s64 + 1472;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b2184
	if (cr6.eq) goto loc_825B2184;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_825B2184:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825b10a0
	ctx.lr = 0x825B218C;
	sub_825B10A0(ctx, base);
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bne cr6,0x825b22f4
	if (!cr6.eq) goto loc_825B22F4;
	// lbz r11,4503(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4503);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b22b0
	if (!cr6.eq) goto loc_825B22B0;
	// lbz r11,5036(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5036);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b22b0
	if (!cr6.eq) goto loc_825B22B0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x825b21fc
	if (cr6.eq) goto loc_825B21FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a47d40
	ctx.lr = 0x825B21BC;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b21fc
	if (cr6.eq) goto loc_825B21FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x83578d58
	ctx.lr = 0x825B21F0;
	sub_83578D58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// b 0x825b22ec
	goto loc_825B22EC;
loc_825B21FC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825b2284
	if (cr6.eq) goto loc_825B2284;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da1d10
	ctx.lr = 0x825B220C;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b2284
	if (cr6.eq) goto loc_825B2284;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18500
	ctx.lr = 0x825B2220;
	sub_82A18500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x825b2260
	if (cr6.eq) goto loc_825B2260;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82a18720
	ctx.lr = 0x825B2254;
	sub_82A18720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// b 0x825b22ec
	goto loc_825B22EC;
loc_825B2260:
	// stfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82a181b8
	ctx.lr = 0x825B2274;
	sub_82A181B8(ctx, base);
	// bl 0x82a2ec18
	ctx.lr = 0x825B2278;
	sub_82A2EC18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// b 0x825b22ec
	goto loc_825B22EC;
loc_825B2284:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r25,5364
	ctx.r4.s64 = ctx.r25.s64 + 5364;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// b 0x825b22ec
	goto loc_825B22EC;
loc_825B22B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-23488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23488);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_825B22EC:
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x828c5d20
	ctx.lr = 0x825B22F4;
	sub_828C5D20(ctx, base);
loc_825B22F4:
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x828c7a58
	ctx.lr = 0x825B22FC;
	sub_828C7A58(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x828c5a98
	ctx.lr = 0x825B2308;
	sub_828C5A98(ctx, base);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x828c80e8
	ctx.lr = 0x825B2310;
	sub_828C80E8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B2318"))) PPC_WEAK_FUNC(sub_825B2318);
PPC_FUNC_IMPL(__imp__sub_825B2318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825B2320;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x829eeae0
	ctx.lr = 0x825B2334;
	sub_829EEAE0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// bl 0x825b17f0
	ctx.lr = 0x825B2344;
	sub_825B17F0(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r27,292(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r30,472(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// lwz r28,432(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lbz r11,4496(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 4496);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x825b2448
	if (cr6.gt) goto loc_825B2448;
	// beq cr6,0x825b24c0
	if (cr6.eq) goto loc_825B24C0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x825b2458
	if (!cr6.eq) goto loc_825B2458;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825b23a0
	if (cr6.eq) goto loc_825B23A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a47d40
	ctx.lr = 0x825B2380;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b23a0
	if (cr6.eq) goto loc_825B23A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83930ac8
	ctx.lr = 0x825B2394;
	sub_83930AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b24b8
	if (!cr6.eq) goto loc_825B24B8;
loc_825B23A0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x825b23d0
	if (cr6.eq) goto loc_825B23D0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da1d10
	ctx.lr = 0x825B23B0;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b23d0
	if (cr6.eq) goto loc_825B23D0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a18500
	ctx.lr = 0x825B23C4;
	sub_82A18500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b24b8
	if (!cr6.eq) goto loc_825B24B8;
loc_825B23D0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x828c6e00
	ctx.lr = 0x825B23D8;
	sub_828C6E00(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,1472
	ctx.r3.s64 = ctx.r11.s64 + 1472;
	// bl 0x825b1f18
	ctx.lr = 0x825B23E4;
	sub_825B1F18(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stb r29,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r29.u8);
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1472
	ctx.r11.s64 = ctx.r11.s64 + 1472;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825b2434
	if (cr6.eq) goto loc_825B2434;
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
loc_825B2434:
	// lbz r11,4503(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 4503);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b24b8
	if (!cr6.eq) goto loc_825B24B8;
	// lbz r11,5036(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 5036);
	// b 0x825b24b0
	goto loc_825B24B0;
loc_825B2448:
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// blt cr6,0x825b2458
	if (cr6.lt) goto loc_825B2458;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// ble cr6,0x825b24b8
	if (!cr6.gt) goto loc_825B24B8;
loc_825B2458:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825b2488
	if (cr6.eq) goto loc_825B2488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a47d40
	ctx.lr = 0x825B2468;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b2488
	if (cr6.eq) goto loc_825B2488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83930ac8
	ctx.lr = 0x825B247C;
	sub_83930AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b24b8
	if (!cr6.eq) goto loc_825B24B8;
loc_825B2488:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x825b24c8
	if (cr6.eq) goto loc_825B24C8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82da1d10
	ctx.lr = 0x825B2498;
	sub_82DA1D10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b24c8
	if (cr6.eq) goto loc_825B24C8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a18500
	ctx.lr = 0x825B24AC;
	sub_82A18500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_825B24B0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b24c8
	if (cr6.eq) goto loc_825B24C8;
loc_825B24B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
loc_825B24C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b1f70
	ctx.lr = 0x825B24C8;
	sub_825B1F70(ctx, base);
loc_825B24C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B24D0"))) PPC_WEAK_FUNC(sub_825B24D0);
PPC_FUNC_IMPL(__imp__sub_825B24D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825B24D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82a12748
	ctx.lr = 0x825B24F0;
	sub_82A12748(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b2318
	ctx.lr = 0x825B24FC;
	sub_825B2318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0cc80
	ctx.lr = 0x825B2504;
	sub_82A0CC80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B250C"))) PPC_WEAK_FUNC(sub_825B250C);
PPC_FUNC_IMPL(__imp__sub_825B250C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B2510"))) PPC_WEAK_FUNC(sub_825B2510);
PPC_FUNC_IMPL(__imp__sub_825B2510) {
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
	// bl 0x825c9c38
	ctx.lr = 0x825B2520;
	sub_825C9C38(ctx, base);
	// bl 0x825c9b60
	ctx.lr = 0x825B2524;
	sub_825C9B60(ctx, base);
	// bl 0x825c96c8
	ctx.lr = 0x825B2528;
	sub_825C96C8(ctx, base);
	// bl 0x825c7c20
	ctx.lr = 0x825B252C;
	sub_825C7C20(ctx, base);
	// bl 0x825c7d68
	ctx.lr = 0x825B2530;
	sub_825C7D68(ctx, base);
	// bl 0x825c9428
	ctx.lr = 0x825B2534;
	sub_825C9428(ctx, base);
	// bl 0x825c6b78
	ctx.lr = 0x825B2538;
	sub_825C6B78(ctx, base);
	// bl 0x825c6cb8
	ctx.lr = 0x825B253C;
	sub_825C6CB8(ctx, base);
	// bl 0x825c6ee0
	ctx.lr = 0x825B2540;
	sub_825C6EE0(ctx, base);
	// bl 0x825c4350
	ctx.lr = 0x825B2544;
	sub_825C4350(ctx, base);
	// bl 0x825c4278
	ctx.lr = 0x825B2548;
	sub_825C4278(ctx, base);
	// bl 0x825c3cc8
	ctx.lr = 0x825B254C;
	sub_825C3CC8(ctx, base);
	// bl 0x825c2df8
	ctx.lr = 0x825B2550;
	sub_825C2DF8(ctx, base);
	// bl 0x825c2628
	ctx.lr = 0x825B2554;
	sub_825C2628(ctx, base);
	// bl 0x825c2550
	ctx.lr = 0x825B2558;
	sub_825C2550(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B2568"))) PPC_WEAK_FUNC(sub_825B2568);
PPC_FUNC_IMPL(__imp__sub_825B2568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lbz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// lbz r7,9(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// stb r7,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r7.u8);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f12,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f11,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f10,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,24(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f9,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f8,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,32(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f7,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,36(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f6,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,40(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f5,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,44(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f4,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,48(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f3,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,52(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f2,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,56(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f1,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,60(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f0,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f13,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lwz r6,72(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r6,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r6.u32);
	// lfs f12,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,76(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lbz r5,80(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 80);
	// stb r5,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B262C"))) PPC_WEAK_FUNC(sub_825B262C);
PPC_FUNC_IMPL(__imp__sub_825B262C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B2630"))) PPC_WEAK_FUNC(sub_825B2630);
PPC_FUNC_IMPL(__imp__sub_825B2630) {
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
	// bl 0x82a30088
	ctx.lr = 0x825B2648;
	sub_82A30088(ctx, base);
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

__attribute__((alias("__imp__sub_825B2660"))) PPC_WEAK_FUNC(sub_825B2660);
PPC_FUNC_IMPL(__imp__sub_825B2660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825B2668;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,24
	ctx.r30.s64 = 24;
loc_825B267C:
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a31410
	ctx.lr = 0x825B2688;
	sub_82A31410(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,180
	ctx.r29.s64 = ctx.r29.s64 + 180;
	// bne 0x825b267c
	if (!cr0.eq) goto loc_825B267C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b26e0
	if (cr6.eq) goto loc_825B26E0;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r31,4320
	ctx.r8.s64 = ctx.r31.s64 + 4320;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r7,r31,4344
	ctx.r7.s64 = ctx.r31.s64 + 4344;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// addi r6,r31,4368
	ctx.r6.s64 = ctx.r31.s64 + 4368;
	// addi r10,r31,4388
	ctx.r10.s64 = ctx.r31.s64 + 4388;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,255
	ctx.r5.s64 = 255;
loc_825B26C8:
	// stbx r4,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r4.u8);
	// stbx r9,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r9,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825b26c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825B26C8;
loc_825B26E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B26E8"))) PPC_WEAK_FUNC(sub_825B26E8);
PPC_FUNC_IMPL(__imp__sub_825B26E8) {
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
	// li r30,32
	ctx.r30.s64 = 32;
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,35188
	ctx.r4.u64 = ctx.r4.u64 | 35188;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825B271C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b272c
	if (cr6.eq) goto loc_825B272C;
	// bl 0x828ff000
	ctx.lr = 0x825B2728;
	sub_828FF000(ctx, base);
	// b 0x825b2730
	goto loc_825B2730;
loc_825B272C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B2730:
	// stw r3,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828fb138
	ctx.lr = 0x825B273C;
	sub_828FB138(ctx, base);
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x825749e0
	ctx.lr = 0x825B2748;
	sub_825749E0(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,712
	ctx.r4.s64 = 712;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825B275C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b2770
	if (cr6.eq) goto loc_825B2770;
	// bl 0x825cd7f8
	ctx.lr = 0x825B2768;
	sub_825CD7F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x825b2774
	goto loc_825B2774;
loc_825B2770:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B2774:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x825B278C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b279c
	if (cr6.eq) goto loc_825B279C;
	// bl 0x825cb5c0
	ctx.lr = 0x825B2798;
	sub_825CB5C0(ctx, base);
	// b 0x825b27a0
	goto loc_825B27A0;
loc_825B279C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B27A0:
	// stw r3,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r3.u32);
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x831cdcf0
	ctx.lr = 0x825B27B4;
	sub_831CDCF0(ctx, base);
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// addi r11,r31,608
	ctx.r11.s64 = ctx.r31.s64 + 608;
	// addi r9,r10,-3088
	ctx.r9.s64 = ctx.r10.s64 + -3088;
	// stw r11,152(r9)
	PPC_STORE_U32(ctx.r9.u32 + 152, ctx.r11.u32);
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// stw r11,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// stw r31,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r31.u32);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_825B27F0"))) PPC_WEAK_FUNC(sub_825B27F0);
PPC_FUNC_IMPL(__imp__sub_825B27F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825B27F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b2828
	if (cr6.eq) goto loc_825B2828;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B2828;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825B2828:
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r10,r10,19
	ctx.r10.u64 = ctx.r10.u64 | 19;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x825b29b8
	if (cr6.gt) goto loc_825B29B8;
	// beq cr6,0x825b2978
	if (cr6.eq) goto loc_825B2978;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x825b2894
	if (cr6.eq) goto loc_825B2894;
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x825b2878
	if (!cr6.eq) goto loc_825B2878;
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b2878
	if (cr6.eq) goto loc_825B2878;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B2878;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825B2878:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// bl 0x825ae2e8
	ctx.lr = 0x825B288C;
	sub_825AE2E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825B2894:
	// addi r30,r31,420
	ctx.r30.s64 = ctx.r31.s64 + 420;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ae438
	ctx.lr = 0x825B28A0;
	sub_825AE438(ctx, base);
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B28B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825b293c
	if (!cr6.eq) goto loc_825B293C;
	// lis r29,-31778
	ctx.r29.s64 = -2082603008;
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B28D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825b2900
	if (!cr6.eq) goto loc_825B2900;
	// lwz r3,436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b2a18
	if (cr6.eq) goto loc_825B2A18;
	// bl 0x828fd720
	ctx.lr = 0x825B28F4;
	sub_828FD720(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825B2900:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ae3c0
	ctx.lr = 0x825B2908;
	sub_825AE3C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b2a18
	if (cr6.eq) goto loc_825B2A18;
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B2930;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825b2a18
	if (!cr6.eq) goto loc_825B2A18;
loc_825B293C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B2954;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825B296C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825B2978:
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
	ctx.lr = 0x825B2990;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825b2a18
	if (cr6.eq) goto loc_825B2A18;
	// lwz r3,436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b2a18
	if (cr6.eq) goto loc_825B2A18;
	// bl 0x828fb730
	ctx.lr = 0x825B29AC;
	sub_828FB730(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825B29B8:
	// addis r11,r11,-261
	ctx.r11.s64 = ctx.r11.s64 + -17104896;
	// addic. r11,r11,-23
	xer.ca = ctx.r11.u32 > 22;
	ctx.r11.s64 = ctx.r11.s64 + -23;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x825b29f8
	if (cr0.eq) goto loc_825B29F8;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bne cr6,0x825b2878
	if (!cr6.eq) goto loc_825B2878;
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b2a18
	if (cr6.eq) goto loc_825B2A18;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B29EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825B29F8:
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
	// ori r4,r4,24
	ctx.r4.u64 = ctx.r4.u64 | 24;
	// bl 0x83535150
	ctx.lr = 0x825B2A18;
	sub_83535150(ctx, base);
loc_825B2A18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B2A24"))) PPC_WEAK_FUNC(sub_825B2A24);
PPC_FUNC_IMPL(__imp__sub_825B2A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B2A28"))) PPC_WEAK_FUNC(sub_825B2A28);
PPC_FUNC_IMPL(__imp__sub_825B2A28) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,436(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// b 0x825ae6c0
	sub_825AE6C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B2A38"))) PPC_WEAK_FUNC(sub_825B2A38);
PPC_FUNC_IMPL(__imp__sub_825B2A38) {
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
	// addi r31,r3,21760
	ctx.r31.s64 = ctx.r3.s64 + 21760;
	// li r30,63
	ctx.r30.s64 = 63;
loc_825B2A54:
	// addi r31,r31,-340
	ctx.r31.s64 = ctx.r31.s64 + -340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x825B2A60;
	sub_83102DB0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x825b2a54
	if (!cr0.lt) goto loc_825B2A54;
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

__attribute__((alias("__imp__sub_825B2A80"))) PPC_WEAK_FUNC(sub_825B2A80);
PPC_FUNC_IMPL(__imp__sub_825B2A80) {
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
	// addi r3,r3,340
	ctx.r3.s64 = ctx.r3.s64 + 340;
	// bl 0x83102db0
	ctx.lr = 0x825B2A9C;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x825B2AA4;
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

__attribute__((alias("__imp__sub_825B2AB8"))) PPC_WEAK_FUNC(sub_825B2AB8);
PPC_FUNC_IMPL(__imp__sub_825B2AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r9,9
	ctx.r9.s64 = 9;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825B2AE4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825b2ae4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825B2AE4;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x831ce980
	ctx.lr = 0x825B2B00;
	sub_831CE980(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r30,108
	ctx.r11.s64 = ctx.r30.s64 + 108;
	// addi r10,r31,108
	ctx.r10.s64 = ctx.r31.s64 + 108;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r9,80(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// lwz r8,84(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r8,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// lwz r7,88(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// lwz r6,92(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r6,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r6.u32);
	// lwz r5,96(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r4,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r4.u32);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// lwz r9,108(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
loc_825B2B50:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825b2b50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825B2B50;
	// lwz r9,144(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// addi r10,r30,152
	ctx.r10.s64 = ctx.r30.s64 + 152;
	// addi r10,r31,152
	ctx.r10.s64 = ctx.r31.s64 + 152;
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// addi r10,r30,172
	ctx.r10.s64 = ctx.r30.s64 + 172;
	// lwz r8,148(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// addi r10,r31,172
	ctx.r10.s64 = ctx.r31.s64 + 172;
	// stw r8,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r8.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lbz r7,152(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 152);
	// addi r10,r31,236
	ctx.r10.s64 = ctx.r31.s64 + 236;
	// stb r7,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r7.u8);
	// addi r11,r30,236
	ctx.r11.s64 = ctx.r30.s64 + 236;
	// lfs f0,156(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lfs f13,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,160(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lfs f12,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,164(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lfs f11,168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,168(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lbz r6,172(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 172);
	// stb r6,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r6.u8);
	// lfs f10,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,176(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// lfs f9,180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,180(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// lfs f8,184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,184(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// lwz r5,188(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// stw r5,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r5.u32);
	// lbz r4,192(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 192);
	// stb r4,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r4.u8);
	// lbz r3,193(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 193);
	// stb r3,193(r31)
	PPC_STORE_U8(ctx.r31.u32 + 193, ctx.r3.u8);
	// lwz r9,196(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// stw r9,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r9.u32);
	// lwz r8,200(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// stw r8,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r8.u32);
	// lbz r7,204(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 204);
	// stb r7,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r7.u8);
	// lfs f7,208(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,208(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// lfs f6,212(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,212(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lfs f5,216(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,216(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lfs f4,220(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,220(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lfs f3,224(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,224(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// lfs f2,228(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,228(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lwz r6,232(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// stw r6,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r6.u32);
	// lfs f1,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,236(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
loc_825B2C4C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825b2c4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825B2C4C;
	// lwz r8,260(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// addi r11,r31,268
	ctx.r11.s64 = ctx.r31.s64 + 268;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r8,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r8.u32);
	// lwz r7,264(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// stw r7,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r7.u32);
loc_825B2C74:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x825b2c74
	if (!cr0.eq) goto loc_825B2C74;
	// li r8,24
	ctx.r8.s64 = 24;
	// addi r10,r30,456
	ctx.r10.s64 = ctx.r30.s64 + 456;
	// addi r11,r31,476
	ctx.r11.s64 = ctx.r31.s64 + 476;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_825B2CA4:
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r8,-16(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16, ctx.r8.u8);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r7,-15(r11)
	PPC_STORE_U8(ctx.r11.u32 + -15, ctx.r7.u8);
	// lbz r6,6(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r6,-14(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14, ctx.r6.u8);
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// lbz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// stb r5,-8(r11)
	PPC_STORE_U8(ctx.r11.u32 + -8, ctx.r5.u8);
	// lbz r4,13(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// stb r4,-7(r11)
	PPC_STORE_U8(ctx.r11.u32 + -7, ctx.r4.u8);
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f12,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f10,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f9,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f8,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f7,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,20(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f6,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,24(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f5,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,28(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f4,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,32(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f3,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,36(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f2,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,40(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f1,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,44(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f0,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f13,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r3,76(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stw r3,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// lfs f12,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,60(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lbzu r8,84(r10)
	ea = 84 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stb r8,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r8.u8);
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// bdnz 0x825b2ca4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825B2CA4;
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r10,r30,2472
	ctx.r10.s64 = ctx.r30.s64 + 2472;
	// addi r11,r31,2492
	ctx.r11.s64 = ctx.r31.s64 + 2492;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_825B2D7C:
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r8,-16(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16, ctx.r8.u8);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r7.u32);
	// lbz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// stb r6,-8(r11)
	PPC_STORE_U8(ctx.r11.u32 + -8, ctx.r6.u8);
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lbz r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// stb r4,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r4.u8);
	// lwz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lbz r8,40(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// stb r8,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r8.u8);
	// lfs f11,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f10,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,28(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f9,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,32(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwzu r8,56(r10)
	ea = 56 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// bdnz 0x825b2d7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825B2D7C;
	// lbz r8,3092(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3092);
	// addi r11,r31,3096
	ctx.r11.s64 = ctx.r31.s64 + 3096;
	// li r10,24
	ctx.r10.s64 = 24;
	// stb r8,3092(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3092, ctx.r8.u8);
	// lbz r7,3093(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3093);
	// stb r7,3093(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3093, ctx.r7.u8);
loc_825B2E0C:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x825b2e0c
	if (!cr0.eq) goto loc_825B2E0C;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,3284
	ctx.r11.s64 = ctx.r30.s64 + 3284;
	// addi r10,r31,3284
	ctx.r10.s64 = ctx.r31.s64 + 3284;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825B2E3C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825b2e3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825B2E3C;
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

__attribute__((alias("__imp__sub_825B2E64"))) PPC_WEAK_FUNC(sub_825B2E64);
PPC_FUNC_IMPL(__imp__sub_825B2E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B2E68"))) PPC_WEAK_FUNC(sub_825B2E68);
PPC_FUNC_IMPL(__imp__sub_825B2E68) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B2E98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b2eac
	if (cr6.eq) goto loc_825B2EAC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x825B2EAC;
	sub_831CE980(ctx, base);
loc_825B2EAC:
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

__attribute__((alias("__imp__sub_825B2EC4"))) PPC_WEAK_FUNC(sub_825B2EC4);
PPC_FUNC_IMPL(__imp__sub_825B2EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B2EC8"))) PPC_WEAK_FUNC(sub_825B2EC8);
PPC_FUNC_IMPL(__imp__sub_825B2EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825B2ED0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,23
	ctx.r30.s64 = 23;
	// li r29,0
	ctx.r29.s64 = 0;
loc_825B2EE4:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r6,r11,9776
	ctx.r6.s64 = ctx.r11.s64 + 9776;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fca98
	ctx.lr = 0x825B2EFC;
	sub_823FCA98(ctx, base);
	// stb r29,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r29.u8);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,180
	ctx.r31.s64 = ctx.r31.s64 + 180;
	// bge 0x825b2ee4
	if (!cr0.lt) goto loc_825B2EE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825b2660
	ctx.lr = 0x825B2F18;
	sub_825B2660(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B2F24"))) PPC_WEAK_FUNC(sub_825B2F24);
PPC_FUNC_IMPL(__imp__sub_825B2F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B2F28"))) PPC_WEAK_FUNC(sub_825B2F28);
PPC_FUNC_IMPL(__imp__sub_825B2F28) {
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
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x825b2fc0
	if (cr6.lt) goto loc_825B2FC0;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b2f5c
	if (cr6.eq) goto loc_825B2F5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825b2f7c
	goto loc_825B2F7C;
loc_825B2F5C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x825b2f74
	if (cr6.lt) goto loc_825B2F74;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825b2f78
	if (cr6.lt) goto loc_825B2F78;
loc_825B2F74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B2F78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_825B2F7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b2fa8
	if (!cr6.eq) goto loc_825B2FA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32318
	ctx.lr = 0x825B2F90;
	sub_82A32318(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b2fa8
	if (!cr6.eq) goto loc_825B2FA8;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825b2fc0
	if (cr6.eq) goto loc_825B2FC0;
loc_825B2FA8:
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
loc_825B2FC0:
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

__attribute__((alias("__imp__sub_825B2FD8"))) PPC_WEAK_FUNC(sub_825B2FD8);
PPC_FUNC_IMPL(__imp__sub_825B2FD8) {
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
	// addi r31,r3,8668
	ctx.r31.s64 = ctx.r3.s64 + 8668;
	// li r30,1
	ctx.r30.s64 = 1;
loc_825B2FF4:
	// addi r31,r31,-4332
	ctx.r31.s64 = ctx.r31.s64 + -4332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x825B3000;
	sub_83102DB0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x825b2ff4
	if (!cr0.lt) goto loc_825B2FF4;
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

__attribute__((alias("__imp__sub_825B3020"))) PPC_WEAK_FUNC(sub_825B3020);
PPC_FUNC_IMPL(__imp__sub_825B3020) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r11,4336
	ctx.r4.s64 = ctx.r11.s64 + 4336;
	// li r5,4332
	ctx.r5.s64 = 4332;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B3034"))) PPC_WEAK_FUNC(sub_825B3034);
PPC_FUNC_IMPL(__imp__sub_825B3034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B3038"))) PPC_WEAK_FUNC(sub_825B3038);
PPC_FUNC_IMPL(__imp__sub_825B3038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825B3040;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r31,r3,3
	ctx.r31.s64 = ctx.r3.s64 + 196608;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r31,4548
	ctx.r31.s64 = ctx.r31.s64 + 4548;
	// ori r29,r11,1792
	ctx.r29.u64 = ctx.r11.u64 | 1792;
loc_825B305C:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// subf r31,r29,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r29.s64;
	// addi r6,r11,10880
	ctx.r6.s64 = ctx.r11.s64 + 10880;
	// li r5,99
	ctx.r5.s64 = 99;
	// li r4,680
	ctx.r4.s64 = 680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f0190
	ctx.lr = 0x825B3078;
	sub_823F0190(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x825b305c
	if (!cr0.lt) goto loc_825B305C;
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// li r30,54
	ctx.r30.s64 = 54;
	// addi r31,r31,-76
	ctx.r31.s64 = ctx.r31.s64 + -76;
loc_825B308C:
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r31,r31,-348
	ctx.r31.s64 = ctx.r31.s64 + -348;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r11,11696
	ctx.r6.s64 = ctx.r11.s64 + 11696;
	// li r4,340
	ctx.r4.s64 = 340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f0190
	ctx.lr = 0x825B30A8;
	sub_823F0190(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x825b308c
	if (!cr0.lt) goto loc_825B308C;
	// addi r31,r28,24552
	ctx.r31.s64 = ctx.r28.s64 + 24552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b2a38
	ctx.lr = 0x825B30BC;
	sub_825B2A38(ctx, base);
	// li r30,8
	ctx.r30.s64 = 8;
loc_825B30C0:
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r31,r31,-2728
	ctx.r31.s64 = ctx.r31.s64 + -2728;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,11696
	ctx.r6.s64 = ctx.r11.s64 + 11696;
	// li r4,340
	ctx.r4.s64 = 340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f0190
	ctx.lr = 0x825B30DC;
	sub_823F0190(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x825b30c0
	if (!cr0.lt) goto loc_825B30C0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B30EC"))) PPC_WEAK_FUNC(sub_825B30EC);
PPC_FUNC_IMPL(__imp__sub_825B30EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B30F0"))) PPC_WEAK_FUNC(sub_825B30F0);
PPC_FUNC_IMPL(__imp__sub_825B30F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B30FC"))) PPC_WEAK_FUNC(sub_825B30FC);
PPC_FUNC_IMPL(__imp__sub_825B30FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B3100"))) PPC_WEAK_FUNC(sub_825B3100);
PPC_FUNC_IMPL(__imp__sub_825B3100) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,3312
	ctx.r3.s64 = ctx.r11.s64 + 3312;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B310C"))) PPC_WEAK_FUNC(sub_825B310C);
PPC_FUNC_IMPL(__imp__sub_825B310C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B3110"))) PPC_WEAK_FUNC(sub_825B3110);
PPC_FUNC_IMPL(__imp__sub_825B3110) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,4336
	ctx.r3.s64 = ctx.r11.s64 + 4336;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B311C"))) PPC_WEAK_FUNC(sub_825B311C);
PPC_FUNC_IMPL(__imp__sub_825B311C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B3120"))) PPC_WEAK_FUNC(sub_825B3120);
PPC_FUNC_IMPL(__imp__sub_825B3120) {
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
loc_825B313C:
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
	// bne 0x825b313c
	if (!cr0.eq) goto loc_825B313C;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825b3188
	if (!cr6.eq) goto loc_825B3188;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825B3168;
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
	ctx.lr = 0x825B3188;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825B3188:
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

__attribute__((alias("__imp__sub_825B31A0"))) PPC_WEAK_FUNC(sub_825B31A0);
PPC_FUNC_IMPL(__imp__sub_825B31A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r11,3312
	ctx.r4.s64 = ctx.r11.s64 + 3312;
	// b 0x825b2ab8
	sub_825B2AB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B31B0"))) PPC_WEAK_FUNC(sub_825B31B0);
PPC_FUNC_IMPL(__imp__sub_825B31B0) {
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
loc_825B31CC:
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
	// bne 0x825b31cc
	if (!cr0.eq) goto loc_825B31CC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x825b3218
	if (!cr6.eq) goto loc_825B3218;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825b3218
	if (cr6.eq) goto loc_825B3218;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b2fd8
	ctx.lr = 0x825B3204;
	sub_825B2FD8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825B3218;
	sub_825952B8(ctx, base);
loc_825B3218:
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

